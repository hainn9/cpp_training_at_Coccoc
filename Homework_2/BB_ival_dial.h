#ifndef BB_IVAL_DIAL_H
#define BB_IVAL_DIAL_H

#include "BBwidget.h"
#include "Ival_dial.h"
class BB_ival_dial : public Ival_dial, protected BBdial
{
public:
	BB_ival_dial(int a, int b);
};

BB_ival_dial::BB_ival_dial(int a, int b)
:Ival_dial(a, b)
{
	std::cout << "\t please dial to input " << a << " @ " << b << " :" << std::endl;
}

#endif // BB_IVAL_DIAL_H
