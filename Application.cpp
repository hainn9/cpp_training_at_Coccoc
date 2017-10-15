#include <iostream>
#include <stdexcept>

enum Unit {cm, dm, m};
#define DM2CM 100
#define M2CM  10000
class Rectangle {
public:
	Rectangle(double width, double height, Unit unit);

	double getArea() const;

	bool operator >(const Rectangle &rect);
	bool operator <(const Rectangle &rect);
	bool operator ==(const Rectangle &rect);

private:
	double _width;
	double _height;
	Unit _unit;
};

Rectangle::Rectangle(double width, double height, Unit unit)
	:_width(width<0? throw std::logic_error("Width of rectangle is negative"):width)
	, _height(height<0? throw std::logic_error("Height of rectangle is negative"):height)
	, _unit(unit)
{

}

double Rectangle::getArea() const {
	if (this->_unit == Unit::dm)
		return _width*_height * DM2CM;
	if (this->_unit == Unit::m)
		return _width*_height * M2CM;
	return _width*_height;
}

inline bool Rectangle::operator >(const Rectangle &rect) {
	return (this->getArea() > rect.getArea());
}

inline bool Rectangle::operator<(const Rectangle &rect) {
	return (this->getArea() < rect.getArea());
}

inline bool Rectangle::operator==(const Rectangle &rect) {
	return (this->getArea() == rect.getArea());
}

int main()
{
	Rectangle h1(30, 50, Unit::cm);
	Rectangle h2(2, 3, Unit::m);
	if (h1 > h2) {
		std::cout << "H1 lon hon H2" << std::endl;
	}
	else if (h1 < h2) {
		std::cout << "H1 nho hon H2" << std::endl;
	}
	else {
		std::cout << "H1 bang H2" << std::endl;
	}

	//Rectangle h3(-10, 10, Unit::cm);
	//h1._width = 50;
	std::cin.get();
	return 0;
}