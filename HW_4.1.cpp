#include<iostream>

int main(){
    int n;
    int u = 0;
    while (n != 0) {
        std::cout << "Entre a integer or 0 to finish:  " << std::endl;
        std::cin >> n;
        u += n;
    }

    if (u != 0) {
        std::cout << "Sum: " << u << std::endl;
    }
    else {
        std::cout << "No sum." << std::endl;
    }

}