#ifndef LSWIDGET_H
#define LSWIDGET_H
#include <iostream>

class LSwidget {
public:
	LSwidget() {
		std::cout << "Powered by Liberated Software" << std::endl;
	}
};

class LSslider : public LSwidget {

};

class LSdial : public LSwidget {

};

#endif //LSWIDGET_H