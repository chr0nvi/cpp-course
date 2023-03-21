#include <iostream>
#include <string>

int main() {

    std::string promt("Initial value");
    std::cout << "Enter yes! \n";
    std::cin >> promt;

    while( promt != std::string("yes") ) {
        std::cout << "Enter yes! \n";
        std::cin >> promt;
    }

    std::cout << "Good boy!\n";

    return 0;
}