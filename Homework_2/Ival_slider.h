#ifndef IVAL_SLIDER_H
#define IVAL_SLIDER_H

#include "Ival_box.h"

class Ival_slider :public Ival_box
{
public:
	Ival_slider(int a, int b);
	int get_value() override;
	void set_value(int i) override;
	void reset_value(int i) override;
	void prompt() override;
	bool was_changed() const override;
	~Ival_slider() override;
private:
	int _value;
	int _low, _hight;
	bool _changed = false;
};

#endif // IVAL_SLIDER_H
