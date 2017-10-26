#ifndef LS_IVAL_DIAL_H
#define LS_IVAL_DIAL_H

#include "LSwidget.h"
#include "Ival_dial.h"

class LS_ival_dial : public Ival_dial, protected LSdial {
public:
	LS_ival_dial(int a, int b);
};

LS_ival_dial::LS_ival_dial(int a, int b)
:Ival_dial(a, b)
{
	std::cout << "\t dial (" << a << " @ " << b << "): " << std::endl;
}

#endif //LS_IVAL_DIAL_H