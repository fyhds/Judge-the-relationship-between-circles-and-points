#pragma once
#include<iostream>
using namespace std;

class point
{
public:
	void setx(int x);//设定x
	int getx();//得到x
	void sety(int y);//设定y
	int gety();//得到y
	

private:
	int m_x;
	int m_y;

};