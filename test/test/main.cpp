#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"


void isequal(point& p, circle& c)
{
	int distance =
	{
		(c.getlocation().getx() - p.getx()) * (c.getlocation().getx() - p.getx()) +
		(c.getlocation().gety() - p.gety()) * (c.getlocation().gety() - p.gety())
	};
	int rdistance = { c.getr() * c.getr() };
	if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rdistance)
	{
		cout << "点在圆内" << endl;

	}
	else
	{
		cout << "点在圆外" << endl;
	}
	
	
}







int main()
{
	circle c;
	c.setr(10);
	point location;
	location.setx(10);
	location.sety(0);
	c.setlocation(location);
	point p;
	p.setx(10);
	p.sety(11);
	isequal(p,c);
	system("pause");
	return 0;
}