#include <iostream>

class Shape {
protected:
  double width;
  double height;

public:
  Shape(double width, double height) {
    this->width = width;
    this->height = height;
  }

  virtual double getArea() = 0;

  virtual ~Shape() {}
};

class Rectangle : public Shape {
public:
  Rectangle(double width, double height) : Shape(width, height) {}

  double getArea() override {
    return width * height;
  }
};

int main() {
  Shape* shapes[] = {new Rectangle(5, 10)};

  for (Shape* shape : shapes) {
    std::cout << "Area: " << shape->getArea() << std::endl;
  }

  for (Shape* shape : shapes) {
    delete shape;
  }

  return 0;
}
