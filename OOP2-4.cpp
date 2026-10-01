#include <iostream>
using namespace std;

class Rectangle
{
    double h, w;

public:
    Rectangle(double a, double b) : h(b), w(a) {}

    double Height() const { return h; }

    double Width() const { return w; }

    double Perimeter() const
    {
        return (w + h) * 2;
    }

    double Area() const
    {
        return h * w;
    }

    void Print() const
    {
        cout << "Rectangle: width = " << w
            << ", height = " << h
            << ", area = " << Area()
            << ", perimeter = " << Perimeter() << endl;
    }
};

int main()
{
    Rectangle rect(5.0, 3.0);

    rect.Print();

    return 0;
}