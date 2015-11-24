#ifndef _FRIEND_H_
#define _FRIEND_H_

class ManPoint;

class Point {
   friend class ManPoint;

public:
   Point(int, int);
private:
   int x;
   int y;
   void printRealX();
   void printRealY();
};

class ManPoint {
public:
   ManPoint();
   ~ManPoint();
   void printX();
   void printY();

private:
   Point *p;
};

#endif