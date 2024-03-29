#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    int area()
      { return width*height/2; }
    void set_values (int a, int b)
      { width=a; height=b; }
};

class Rectangle: public Polygon {
  public:
    int area()
      { return width*height; }
};

class Triangle: public Polygon {
  public:
    int area()
      { return width*height/2; }
};

int main () {
  Rectangle rect;
  Triangle trgl;
  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &trgl;
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
   cout << ppoly1->area() << '\n';
  cout << ppoly2->area() << '\n';
//   cout << ppoly3->area() << '\n';
  return 0;
}