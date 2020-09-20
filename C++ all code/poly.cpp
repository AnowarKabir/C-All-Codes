#include <iostream>
using namespace std;
class Polygon
{  public:
int width, height;
};
class Rectangle: public Polygon{
public:
      int area () { return (width * height); }
};
class Triangle: public Polygon {
      public:
             int area ()  { return (width * height / 2); }
};
int main () {
       Rectangle rect;
       Triangle trgl;
       Polygon * ppoly1 = &rect;
       Polygon * ppoly2 = &trgl;
       rect.width=4;
        rect.height=5;
         cout << rect.area() << endl;
         cout << trgl.area() << endl;
         return 0; }

