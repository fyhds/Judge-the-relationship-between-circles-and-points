#pragma once
#include<iostream>
using namespace std;
#include"point.h"


class circle
{
public:
	void setr(int r);
	
	int getr();
	
	void setlocation(point location);
	
	point getlocation();
	
private:
	int m_r;
	point m_location;
};