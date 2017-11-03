#ifndef THREADLOCAL_H
#define THREADLOCAL_H

#include <iostream>
#include <pthread.h>

template<typename T>
class ThreadLocal {
public:
    ThreadLocal() :_init_value() {
        pthread_key_create(&_key_value, nullptr);
    }

    ThreadLocal(const T& value)
        :_init_value(value)
    {
        pthread_key_create(&_key_value, nullptr);
    }

    T& get() {
        void* ptr = pthread_getspecific(_key_value);
        if(!ptr) {
            ptr = new T(_init_value);
            if(ptr != nullptr)
                pthread_setspecific(_key_value, ptr);
        }
        return *(T*)ptr;
    }
    ~ThreadLocal() {
        pthread_key_delete(_key_value);
    }

private:
    pthread_key_t _key_value;
    T _init_value;
};

#endif // THREADLOCAL_H
