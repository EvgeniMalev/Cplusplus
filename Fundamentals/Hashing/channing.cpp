
#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

class HashChain {
private:
    struct Node {
        int data;
        std::shared_ptr<Node> next;

        Node(int d) : data(d), next(nullptr) {}
    };

    std::vector<std::shared_ptr<Node>> table;
    int size;

public:
    explicit HashChain(int mod) : size(mod), table(mod, nullptr) {}

    void add(int value) {
        int index = hash(value);
        auto newNode = std::make_shared<Node>(value);

        if (!table[index]) {
            table[index] = newNode;
        } else {
            auto curr = table[index];
            while (curr->next) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }

    bool find(int value) const {
        int index = hash(value);
        auto curr = table[index];

        while (curr) {
            if (curr->data == value) {
                std::cout << "Element found\n";
                return true;
            }
            curr = curr->next;
        }
        std::cout << "Element not found\n";
        return false;
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << "Key " << i << ": ";
            auto curr = table[i];
            if (!curr) {
                std::cout << "empty";
            } else {
                while (curr) {
                    std::cout << curr->data;
                    if (curr->next) std::cout << " -> ";
                    curr = curr->next;
                }
            }
            std::cout << std::endl;
        }
    }

    virtual int hash(int value) const {
        return std::abs(value % size);
    }
};

int main() {
    int tableSize;
    std::cout << "Enter size of hash table: ";
    std::cin >> tableSize;

    HashChain hashTable(tableSize);

    bool running = true;
    while (running) {
        int choice, value;
        std::cout << "\nMenu:\n";
        std::cout << "1. Add element\n2. Find element\n3. Generate hash\n4. Display table\n5. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter element to add: ";
            std::cin >> value;
            hashTable.add(value);
            break;
        case 2:
            std::cout << "Enter element to find: ";
            std::cin >> value;
            hashTable.find(value);
            break;
        case 3:
            std::cout << "Enter element to generate hash: ";
            std::cin >> value;
            std::cout << "Hash of " << value << " = " << hashTable.hash(value) << "\n";
            break;
        case 4:
            hashTable.display();
            break;
        case 5:
            running = false;
            break;
        default:
            std::cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
