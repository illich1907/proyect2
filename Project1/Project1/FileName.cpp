#include <iostream>

int main() {
    const int a = 100;  
    char b[a];

    std::cout << "Введіть рядок: ";
    std::cin.getline(b, a);

    int c = 0;
    while (b[c] != '\0' && c < a) {
        c++;
    }

    int d = a - c;

    std::cout << "Загальна кількість елементів у масиві: " << a << std::endl;
    std::cout << "Кількість зайнятих елементів: " << c << std::endl;
    std::cout << "Кількість вільних елементів: " << d << std::endl;

}