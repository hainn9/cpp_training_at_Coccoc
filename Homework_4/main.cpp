#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include "threadlocal.h"

//thread_local unsigned int rage = 1;
ThreadLocal<unsigned int> rage = 1;
std::mutex cout_mutex;

void increase_rage(const std::string& thread_name) {
//    ++rage;
    ++rage.get();
    std::lock_guard<std::mutex>lock(cout_mutex);
//    std::cout<<"Rage counter for "<<thread_name<<": "<<rage<<std::endl;
    std::cout<<"Rage counter for "<<thread_name<<": "<<rage.get()<<std::endl;
}

int main()
{
    std::thread a(increase_rage, "a");
    std::thread b(increase_rage, "b");
    {
        std::lock_guard<std::mutex>lock(cout_mutex);
//        std::cout<<"Rage counter for main: "<<rage<<std::endl;
        std::cout << "Rage counter for main: "<<rage.get()<<std::endl;
    }
    a.join();
    b.join();
}
