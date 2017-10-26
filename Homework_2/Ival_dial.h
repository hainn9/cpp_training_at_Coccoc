#ifndef IVAL_DIAL_H
#define IVAL_DIAL_H

#include "Ival_box.h"

class Ival_dial :public Ival_box
{
public:
	Ival_dial(int a, int b);
	int get_value() override;
	void set_value(int i) override;
	void reset_value(int i) override;
	void prompt() override;
	bool was_changed() const override;
	~Ival_dial() override;
private:
	int _value;
	int _low, _hight;
	bool _changed = false;
};

#endif // IVAL_DIAL_H
