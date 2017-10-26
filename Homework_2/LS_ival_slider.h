#ifndef LS_IVAL_SLIDER_H
#define LS_IVAL_SLIDER_H

#include "LSwidget.h"
#include "Ival_slider.h"

class LS_ival_slider : public Ival_slider, protected LSslider {
public:
	LS_ival_slider(int a, int b);
};

LS_ival_slider::LS_ival_slider(int a, int b)
:Ival_slider(a, b)
{
	std::cout << "\t slide [" << a << " <-> " << b << "]: " << std::endl;
}

#endif //LS_IVAL_SLIDER_H