#ifndef IVAL_MAKER_H
#define IVAL_MAKER_H
#include "Ival_slider.h"
#include "Ival_dial.h"
class Ival_maker {
public:
	virtual Ival_slider* slider(int, int) const = 0;
	virtual Ival_dial* dial(int, int) const = 0;
};

#endif // IVAL_MAKER_H
