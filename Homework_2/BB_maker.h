#ifndef BB_MAKER_H
#define BB_MAKER_H

#include "Ival_maker.h"
#include "BB_ival_slider.h"
#include "BB_ival_dial.h"

class BB_maker : public Ival_maker
{
public:
	Ival_slider* slider(int a, int b) const override;
	Ival_dial* dial(int a, int b) const override;
};

inline Ival_slider* BB_maker::slider(int a, int b) const {
	return new BB_ival_slider(a, b);
}

inline Ival_dial* BB_maker::dial(int a, int b) const {
	return new BB_ival_dial(a, b);
}

#endif // BB_MAKER_H
