#include "Array.hpp"
#include <iostream>

int main() {
    try {
        Array<int> arr(5);
        for (unsigned int i = 0; i < arr.size(); ++i) {
            arr[i] = i * 10;
        }

        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        Array<int> arrCopy = arr;
        for (unsigned int i = 0; i < arrCopy.size(); ++i) {
            std::cout << arrCopy[i] << " ";
        }
        std::cout << std::endl;

    } 
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
