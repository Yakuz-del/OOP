#include <iostream>
#include <stdexcept>

using namespace std;

class Array
{
private:
    int* data;     
    int size;    

public:
  
    Array(int size)
    {
        if (size < 0)
            throw invalid_argument("Size cannot be negative");

        this->size = size;
        data = new int[size]; 


    }

    ~Array()
    {
        delete[] data;
    }

    
    void Set(int index, int value)
    {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of range");

        data[index] = value;
    }

    int Get(int index) const
    {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of range");

        return data[index];
    }

   
    int Size() const
    {
        return size;
    }
};


int main()
{
    Array arr(5); 

    for (int i = 0; i < arr.Size(); i++)
        arr.Set(i, i * 10);

    cout << "Array elements: ";
    for (int i = 0; i < arr.Size(); i++)
        cout << arr.Get(i) << " ";

    cout << endl;
    cout << "Array size: " << arr.Size() << endl;

    return 0;
}