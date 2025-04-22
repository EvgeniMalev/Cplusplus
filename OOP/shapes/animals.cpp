#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string n) : name(n) {}

    virtual void speak() {
        cout << name << " makes a sound." << endl;
    }

    virtual ~Animal() {} 
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void speak() override {
        cout << name << " says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {}

    void speak() override {
        cout << name << " says: Meow!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog("Buddy");
    Animal* a2 = new Cat("Whiskers");

    a1->speak(); 
    a2->speak(); 

    delete a1;
    delete a2;

    return 0;
}
