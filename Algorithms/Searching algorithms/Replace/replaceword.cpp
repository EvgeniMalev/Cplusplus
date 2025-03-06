#include <iostream>
#include <string>

void replaceWord(std::string &sentence, const std::string &oldWord, const std::string &newWord) {
    size_t pos = sentence.find(oldWord);
    if (pos != std::string::npos) {
        sentence.replace(pos, oldWord.length(), newWord);
    }
}

int main() {
    std::string sentence = "I love programming in C++.";
    std::string oldWord = "C++";
    std::string newWord = "Python";

    replaceWord(sentence, oldWord, newWord);

    std::cout << "Updated sentence: " << sentence << std::endl;
    return 0;
}
