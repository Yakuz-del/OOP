#include <iostream>
using namespace std;

class Vector {
private:
    double x, y, z;

public:
 
    Vector() : x(0), y(0), z(0) {}


    Vector(double x, double y, double z) : x(x), y(y), z(z) {}

 
    Vector add(const Vector& other) const {
        return Vector(x + other.x, y + other.y, z + other.z);
    }


    Vector subtract(const Vector& other) const {
        return Vector(x - other.x, y - other.y, z - other.z);
    }

    Vector multiply(double k) const {
        return Vector(x * k, y * k, z * k);
    }


    Vector divide(double k) const {
        return Vector(x / k, y / k, z / k);
    }

 
    void print() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector a(1, 2, 3);
    Vector b(4, 5, 6);
    Vector zero;

    cout << "a = ";         a.print();
    cout << "b = ";         b.print();
    cout << "zero = ";      zero.print();

    cout << "a + b = ";     a.add(b).print();
    cout << "a - b = ";     a.subtract(b).print();
    cout << "a * 2 = ";     a.multiply(2).print();
    cout << "a / 2 = ";     a.divide(2).print();

    return 0;
}