#include <iostream>
#include <vector>
#include <string>

class Object {
protected:
    std::string name;
    std::string type;

public:
    Object(std::string n, std::string t)
        : name(n), type(t) {}

    virtual void showInfo() {
        std::cout << "Обект: " << name
                  << " | Тип: " << type << std::endl;
    }

    virtual ~Object() {}
};

class Building : public Object {
private:
    int yearBuilt;

public:
    Building(std::string n, int year)
        : Object(n, "Сграда"), yearBuilt(year) {}

    void showInfo() override {
        std::cout << "Сграда: " << name
                  << " | Построена: " << yearBuilt
                  << std::endl;
    }
};

class Park : public Object {
private:
    double area;

public:
    Park(std::string n, double a)
        : Object(n, "Парк"), area(a) {}

    void showInfo() override {
        std::cout << "Парк: " << name
                  << " | Площ: " << area << " дка"
                  << std::endl;
    }
};

int main() {
    std::vector<Object*> svishtov;

    svishtov.push_back(new Building("Часовникова кула", 1763));
    svishtov.push_back(new Building("Стопанска академия", 1936));
    svishtov.push_back(new Park("Градска градина", 12.5));

    std::cout << "Обекти в Свищов:\n\n";

    for (Object* obj : svishtov) {
        obj->showInfo();
    }

    for (Object* obj : svishtov) {
        delete obj;
    }

    return 0;
}
