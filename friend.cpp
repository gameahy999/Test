#include <iostream>
#include "friend.h"
using namespace std;

Point::Point(int x_in, int y_in)
{
   x = x_in;
   y = y_in;
}

void
Point::printRealX()
{
   cout << "x == " << x << endl;
}

void
Point::printRealY()
{
   cout << "y == " << y << endl;
}

ManPoint::ManPoint()
{
   p = new Point(1, 2);
}

ManPoint::~ManPoint()
{
   delete p;
}

void
ManPoint::printX()
{
   p->printRealX();
   cout << "p->x == " << p->x << endl;
}

void
ManPoint::printY()
{
   p->printRealY();
   cout << "p->y == " << p->y << endl;
}
