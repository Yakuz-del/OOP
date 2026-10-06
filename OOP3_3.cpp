#include <iostream>
#include <cmath>

using namespace std;

struct Vector3D
{
    double X = 0, Y = 0, Z = 0;

    double Length() const { return sqrt(X * X + Y * Y + Z * Z); }

    Vector3D Sum(const Vector3D& o) const { return { X + o.X, Y + o.Y, Z + o.Z }; }
    Vector3D Sub(const Vector3D& o) const { return { X - o.X, Y - o.Y, Z - o.Z }; }
    Vector3D Mul(double o) const { return { X * o, Y * o, Z * o }; }

    Vector3D Div(double o) const
    {
        if (o == 0) throw invalid_argument("Division by zero");
        return { X / o, Y / o, Z / o };
    }

    Vector3D Normalize() const
    {
        double len = Length();
        return (len != 0) ? Div(len) : *this;
    }
};

int main()
{
    Vector3D v1;
    Vector3D v2(3.0, 4.0, 0.0);

    cout << "Length of v2: " << v2.Length() << endl;

    Vector3D sum = v1.Sum(v2);
    cout << "Sum: " << sum.X << ", " << sum.Y << ", " << sum.Z << endl;

    Vector3D norm = v2.Normalize();
    cout << "Normalized v2: " << norm.X << ", " << norm.Y << ", " << norm.Z << endl;

    return 0;
}