#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

 
    Person(const std::string& n = "", int a = 0) : name(n), age(a) {
        std::cout << "Constructor called for " << name << std::endl;
    }


    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};


int main() {
    Person persons[3] = { Person("Alice", 30), Person("Bob", 25), Person("Charlie", 22) };

    for (int i = 0; i < 3; ++i) {
        persons[i].display();
    }

    return 0;
}

int main() {
    int size = 3;
    Person* persons = new Person[size];

    persons[0] = Person("Alice", 30);
    persons[1] = Person("Bob", 25);
    persons[2] = Person("Charlie", 22);

    for (int i = 0; i < size; ++i) {
        persons[i].display();
    }

    delete[] persons;

    return 0;
}
