#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double xv = 0, double yv = 0) : x(xv), y(yv) {}

    double X() const 
    { 
        return x;
    }
    double Y() const 
    { 
        return y;
    }

    double DistanceTo(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }

    void Print() const 
    {
        cout << x << ", " << y;
    }
};


int main() {
    Point A(3, 4);
    Point B;

    cout << "Point A: "; A.Print(); cout << endl;
    cout << "Point B: "; B.Print(); cout << endl;

    double dist = A.DistanceTo(B);
    cout << "Distance from A to B: " << dist << endl;

    return 0;
}