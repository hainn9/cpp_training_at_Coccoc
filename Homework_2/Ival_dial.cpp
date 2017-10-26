#include "Ival_dial.h"

Ival_dial::Ival_dial(int a, int b)
:_value(a)
, _low(a)
, _hight(b)
{

}

Ival_dial::~Ival_dial() {

}

int Ival_dial::get_value()
{
	_changed = false;
	return _value;
}

void Ival_dial::set_value(int i) {
	_changed = true;
	_value = i;
}

void Ival_dial::reset_value(int i) {
	_changed = false;
	_value = i;
}

void Ival_dial::prompt() {

}

bool Ival_dial::was_changed() const {
	return _changed;
}
