#ifndef BBWIDGET_H
#define BBWIDGET_H
#include <iostream>
class BBwidget {
public:
	BBwidget() {
		std::cout << "Big Bucks inc." << std::endl;
	}
};

class BBslider : public BBwidget {

};

class BBdial : public BBwidget {

};

#endif // BBWIDGET_H
