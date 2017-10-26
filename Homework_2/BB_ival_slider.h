#ifndef BB_IVAL_SLIDER_H
#define BB_IVAL_SLIDER_H

#include "BBwidget.h"
#include "Ival_slider.h"
class BB_ival_slider : public Ival_slider, protected BBslider
{
public:
	BB_ival_slider(int a, int b);
};

BB_ival_slider::BB_ival_slider(int a, int b)
:Ival_slider(a, b)
{
	std::cout << "\t please slide to input " << a << " <-> " << b << " :" << std::endl; 
}

#endif // BB_IVAL_SLIDER_H
