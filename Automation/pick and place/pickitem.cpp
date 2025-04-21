#include <iostream>
#include <string>
#include <vector>

class Position {
public:
    int x, y;
    Position(int x_, int y_) : x(x_), y(y_) {}
};

class Item {
public:
    std::string name;
    Position pos;

    Item(std::string name_, Position pos_) : name(name_), pos(pos_) {}
};

class PickAndPlaceMachine {
    Position armPosition;

public:
    PickAndPlaceMachine() : armPosition(0, 0) {}

    void moveTo(Position pos) {
        std::cout << "Moving arm to position (" << pos.x << ", " << pos.y << ")\n";
        armPosition = pos;
    }

    void pick(Item& item) {
        moveTo(item.pos);
        std::cout << "Picking up item: " << item.name << "\n";
    }

    void place(Position newPos, Item& item) {
        moveTo(newPos);
        item.pos = newPos;
        std::cout << "Placing item: " << item.name << " at new position ("
                  << newPos.x << ", " << newPos.y << ")\n";
    }
};

int main() {
    Item item1("Widget", Position(2, 3));
    Position targetPos(5, 6);

    PickAndPlaceMachine machine;
    machine.pick(item1);
    machine.place(targetPos, item1);

    return 0;
}
