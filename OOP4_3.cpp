#include <iostream>
using namespace std;

class Stack 
{
    int* a;     
    int n;      
    int cap;    

public:
    
    Stack() 
    {
        cap = 100;
        n = 0;
        a = new int[cap];
    }

   
    ~Stack() 
    {
        delete[] a;
    }

   
    void Push(int v) 
    {
        if (n == cap) {             
            cap *= 2;
            int* b = new int[cap];
            for (int i = 0; i < n; i++) b[i] = a[i];
            delete[] a;
            a = b;
        }
        a[n++] = v;
    }

    
    int Pop() 
    {
        if (n == 0) return -1;      
        return a[--n];
    }

    bool Emty() 
    {
        return n == 0;
    }
};

int main() 
{
    Stack s;

    s.Push(10);
    s.Push(20);
    s.Push(30);

    cout << "Pop: " << s.Pop() << endl;  
    cout << "Pop: " << s.Pop() << endl;   
    cout << "Empy: " << s.Emty() << endl; 
    s.Pop();                              
    cout << "Empy: " << s.Emty() << endl; 

    return 0;
}