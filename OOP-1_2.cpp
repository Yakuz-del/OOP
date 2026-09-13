#include <iostream>
#include <cmath>
using namespace std;

class Figure {
public:
    virtual double area() = 0;        
    virtual double perimeter() = 0;   
    virtual ~Figure() {}              
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double area() override {
        return 3.14 * radius * radius;
    }

    double perimeter() override {
        return 2 * 3.14 * radius;
    }
};

class Square : public Figure {
private:
    double side;

public:
    Square(double side) : side(side) {}

    double area() override {
        return side * side;
    }

    double perimeter() override {
        return 4 * side;
    }
};

class Rectangle : public Figure {
private:
    double width;
    double height;

public:
    Rectangle(double width, double height)
        : width(width), height(height) {
    }

    double area() override {
        return width * height;
    }

    double perimeter() override {
        return 2 * (width + height);
    }
};

int main() {
    Circle circle(5);
    Square square(4);
    Rectangle rectangle(3, 6);

    cout << "Circle: area = " << circle.area()
        << ", perimeter = " << circle.perimeter() << endl;

    cout << "Square: area = " << square.area()
        << ", perimeter = " << square.perimeter() << endl;

    cout << "Rectangle: area = " << rectangle.area()
        << ", perimeter = " << rectangle.perimeter() << endl;

    return 0;
}