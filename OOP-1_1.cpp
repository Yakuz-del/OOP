#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    Animal(string name, int age) : name(name), age(age) {}

    virtual void Hello() {
        cout << "Hello, my name is " << name
            << ", I am " << age << " years old" << endl;
    }

    virtual ~Animal() {}
};

class Cat : public Animal {
public:
    Cat(string name, int age) : Animal(name, age) {}

    void Hello() override {
        cout << "Hello, my name is " << name
            << ", I am " << age << " years old " << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string name, int age) : Animal(name, age) {}

    void Hello() override {
        cout << "Hello, my name is " << name
            << ", I am " << age << " years old " << endl;
    }
};

class Duck : public Animal {
public:
    Duck(string name, int age) : Animal(name, age) {}

    void Hello() override {
        cout << "Hello, my name is " << name
            << ", I am " << age << " years old " << endl;
    }
};

int main() {
    string name;
    int age;

    cout << "Enter cat's name and age: ";
    cin >> name >> age;
    Cat cat(name, age);


    cout << "Enter dog's name and age: ";
    cin >> name >> age;
    Dog dog(name, age);


    cout << "Enter duck's name and age: ";
    cin >> name >> age;
    Duck duck(name, age);


    cat.Hello();
    dog.Hello();
    duck.Hello();

    return 0;
}