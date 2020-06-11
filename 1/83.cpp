#include <iostream>
#include <array>

int main() {
    std::array<int, 4> arr = {5, 6, 7, 8};

    for(int i: arr) {
        std::cout << "this number : " << i << std::endl; 
    }

    return 0;
}
