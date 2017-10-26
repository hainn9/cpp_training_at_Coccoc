#include "BB_maker.h"
#include "LS_maker.h"
void Run(const Ival_maker& m) {
	Ival_slider* slider = m.slider(10, 1000);
	slider->prompt();
	slider->get_value();

	Ival_dial* dial = m.dial(100, 10000);
	dial->prompt();
	dial->get_value();

	delete slider;
	delete dial;
}

int main() {
	// Use BB user interfaces
	BB_maker bb_impl;
	Run(bb_impl);

	LS_maker ls_impl;
	Run(ls_impl);
	std::cin.get();
	return 0;
}
