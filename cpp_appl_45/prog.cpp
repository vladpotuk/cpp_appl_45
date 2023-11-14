#include<Windows.h>
#include <iostream>
#include "function.h"

int main() {
    const int size = 5;

    
    std::cout << "Using INTEGER data type." << std::endl;
    int intArr[size];
    FillArray(intArr, size);
    std::cout << "Original array: ";
    ShowArray(intArr, size);

    std::cout << "Min element: " << FindMin(intArr, size) << std::endl;
    std::cout << "Max element: " << FindMax(intArr, size) << std::endl;

    SortArray(intArr, size);
    std::cout << "Sorted array: ";
    ShowArray(intArr, size);

    EditArray(intArr, 2, 999); 
    std::cout << "Array after editing: ";
    ShowArray(intArr, size);

    
    std::cout << "\nUsing CHAR data type." << std::endl;
    char charArr[size];
    FillArray(charArr, size);
    std::cout << "Original array: ";
    ShowArray(charArr, size);

    std::cout << "Min element: " << FindMin(charArr, size) << std::endl;
    std::cout << "Max element: " << FindMax(charArr, size) << std::endl;

    SortArray(charArr, size);
    std::cout << "Sorted array: ";
    ShowArray(charArr, size);

    EditArray(charArr, 2, 'Z'); 
    std::cout << "Array after editing: ";
    ShowArray(charArr, size);

    
    std::cout << "\nUsing DOUBLE data type." << std::endl;
    double doubleArr[size];
    FillArray(doubleArr, size);
    std::cout << "Original array: ";
    ShowArray(doubleArr, size);

    std::cout << "Min element: " << FindMin(doubleArr, size) << std::endl;
    std::cout << "Max element: " << FindMax(doubleArr, size) << std::endl;

    SortArray(doubleArr, size);
    std::cout << "Sorted array: ";
    ShowArray(doubleArr, size);

    EditArray(doubleArr, 2, 9.99); 
    std::cout << "Array after editing: ";
    ShowArray(doubleArr, size);

    return 0;
}
