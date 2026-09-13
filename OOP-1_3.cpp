#include <iostream>
using namespace std;

class Point {
private:
    double x, y, z;

public:
    Point() : x(0), y(0), z(0) {}

    Point(double x, double y, double z) : x(x), y(y), z(z) {}

    Point plus(const Point& other) {
        return Point(x + other.x, y + other.y, z + other.z);
    }

    Point vichet(const Point& other) {
        return Point(x - other.x, y - other.y, z - other.z);
    }

    Point ymnoj(double k) {
        return Point(x * k, y * k, z * k);
    }

    // Вывод точки на экран
    void print() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point a(1, 2, 3);
    Point b(4, 5, 6);
    Point zero;              

    cout << "a = ";          a.print();
    cout << "b = ";          b.print();
    cout << "zero = ";       zero.print();

    Point sum = a.plus(b);
    cout << "a + b = ";      sum.print();

    Point diff = b.vichet(a);
    cout << "b - a = ";      diff.print();

    Point scaled = a.ymnoj(2);
    cout << "a * 2 = ";      scaled.print();

    return 0;
}