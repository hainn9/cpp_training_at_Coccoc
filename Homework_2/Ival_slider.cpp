#include "Ival_slider.h"

Ival_slider::Ival_slider(int a, int b)
:_value(a)
, _low(a)
, _hight(b)
{

}

Ival_slider::~Ival_slider() {

}

int Ival_slider::get_value()
{
	_changed = false;
	return _value;
}

void Ival_slider::set_value(int i) {
	_changed = true;
	_value = i;
}

void Ival_slider::reset_value(int i) {
	_changed = false;
	_value = i;
}

void Ival_slider::prompt() {

}

bool Ival_slider::was_changed() const {
	return _changed;
}
