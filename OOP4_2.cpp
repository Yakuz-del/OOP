#include <iostream>
using namespace std;


void cp(char* d, const char* s)
{
    while ((*d++ = *s++) != '\0');
}


int ln(const char* s) 
{
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

class String 
{
private:
    char* a;   

public:
   
    String() 
    {
        a = new char[1];
        a[0] = '\0';
    }

   
    String(const char* s) 
    {
        a = new char[ln(s) + 1];
        cp(a, s);
    }

 
    String(const String& o) 
    {
        a = new char[ln(o.a) + 1];
        cp(a, o.a);
    }

 
    ~String() 
    {
        delete[] a;
    }

   
    const char* p() const 
    {
        return a;
    }

  
    char g(int i) const 
    {
        if (i < 0 || i >= ln(a)) return '\0';
        return a[i];
    }

   
    void show() const 
    {
        cout << a << endl;
    }
};

int main() 
{
    String s1;
    cout << "s1 (emty): ";
    s1.show();

    String s2("Hello, world!");
    cout << "s2: ";
    s2.show();

    String s3(s2);
    cout << "s3 (copy s2): ";
    s3.show();

    cout << "Pointer s2: " << s2.p() << endl;
    cout << "Char 0: " << s2.g(0) << endl;
    cout << "Char 7: " << s2.g(7) << endl;

    return 0;
}