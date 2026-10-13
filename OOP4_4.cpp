#include <iostream>
#include <cmath>
using namespace std;

class Vector2D 
{
    double x, y;

public:
  
    Vector2D(double a = 0, double b = 0) 
    {
        x = a;
        y = b;
    }


    double len() 
    {
        return sqrt(x * x + y * y);
    }

   
    Vector2D norm() 
    {
        double l = len();
        if (l == 0) return Vector2D(0, 0);  
        return Vector2D(x / l, y / l);
    }

  
    Vector2D sum(Vector2D v) 
    {
        return Vector2D(x + v.x, y + v.y);
    }


    Vector2D sub(Vector2D v) 
    {
        return Vector2D(x - v.x, y - v.y);
    }

  
    Vector2D M(double k) 
    {
        return Vector2D(x * k, y * k);
    }

    
    Vector2D dv(double k) 
    {
        if (k == 0) return Vector2D(0, 0);
        return Vector2D(x / k, y / k);
    }

    
    void show() 
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() 
{
    Vector2D v1(3, 4);
    Vector2D v2(1, 2);
    cout << "v1 = "; v1.show();
    cout << "v2 = "; v2.show();
    cout << "Len v1 = " << v1.len() << endl;

    Vector2D n = v1.norm();
    cout << "Norm v1 = "; n.show();

    Vector2D r = v1.sum(v2).sub(v2).M(4).dv(10);
    cout << "Chain result = "; r.show();
    return 0;
}