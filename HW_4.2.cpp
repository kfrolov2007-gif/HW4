#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << " enter an integer: " << std::endl;
    std::cin >> s;

    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }

    std::cout << "Sum: " << sum << std::endl;
}