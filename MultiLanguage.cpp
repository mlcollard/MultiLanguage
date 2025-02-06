/*
    MultiLanguage.cpp

    Output of words in multiple languages
*/

#include <iostream>

// output "hello" in Russian
void привет() {
    std::cout << __FUNCTION__ << '\n';
}

// output "world" in Greek
void κόσμος() {
    std::cout << __FUNCTION__ << '\n';
}

// output "hello" in Japanese
void こんにちは() {
    std::cout << __FUNCTION__ << '\n';
}

int main() {

    привет();
    κόσμος();
    こんにちは();

    return 0;
}
