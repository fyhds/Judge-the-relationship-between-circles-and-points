#include"point.h"
#include"circle.h"


	void circle::setr(int r)
	{
		m_r = r;
	}
	int circle::getr()
	{
		return m_r;
	}
	void circle::setlocation(point location)
	{
		m_location = location;
	}
	point circle::getlocation()
	{
		return m_location;
	}
