#include <iostream>

int main() {
    const int a = 100;  
    char b[a];

    std::cout << "������ �����: ";
    std::cin.getline(b, a);

    int c = 0;
    while (b[c] != '\0' && c < a) {
        c++;
    }

    int d = a - c;

    std::cout << "�������� ������� �������� � �����: " << a << std::endl;
    std::cout << "ʳ������ �������� ��������: " << c << std::endl;
    std::cout << "ʳ������ ������ ��������: " << d << std::endl;

}