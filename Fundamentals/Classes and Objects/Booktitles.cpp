#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<array>

using namespace std;

void printBookTitles(const array<string, 5>& books) {
    for (const auto& book : books) {  
        cout << book << endl;
    }
    cout << endl;
}

int main() {
    array<string, 5> bookTitles = {"1984", "Brave New World", "Fahrenheit 451", "The Great Gatsby", "Moby Dick"};
    
    cout << "Book Titles:" << endl;
    printBookTitles(bookTitles);  

    using StudentGrades = map<string, vector<int>>;
    
    StudentGrades studentGrades{
        {"Alice", {85, 90, 88}},
        {"Bob", {78, 82, 91}},
        {"Charlie", {95, 85, 89}}
    };

    cout << "Student Grades:" << endl;
    
    for (const auto& [student, grades] : studentGrades) {
        cout << student << ": ";
        for (const auto& grade : grades) {
            cout << grade << " ";
        }
        cout << endl;
    }

    return 0;
}
