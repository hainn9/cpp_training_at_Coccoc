#ifndef LS_MAKER_H
#define LS_MAKER_H

#include "Ival_maker.h"
#include "LS_ival_slider.h"
#include "LS_ival_dial.h"

class LS_maker : public Ival_maker
{
public:
	Ival_slider* slider(int a, int b) const override;
	Ival_dial* dial(int a, int b) const override;
};

inline Ival_slider* LS_maker::slider(int a, int b) const {
	return new LS_ival_slider(a, b);
}

inline Ival_dial* LS_maker::dial(int a, int b) const {
	return new LS_ival_dial(a, b);
}

#endif // LS_MAKER_H