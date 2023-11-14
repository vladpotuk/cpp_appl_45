#include "function.h"

template <typename T>
void ShowArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void FillArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

template <typename T>
T FindMin(const T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
T FindMax(const T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void SortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void EditArray(T arr[], int index, T value) {
    arr[index] = value;
}

// Explicit instantiation of the template for supported types
template void ShowArray<int>(const int arr[], int size);
template void FillArray<int>(int arr[], int size);
template int FindMin<int>(const int arr[], int size);
template int FindMax<int>(const int arr[], int size);
template void SortArray<int>(int arr[], int size);
template void EditArray<int>(int arr[], int index, int value);

template void ShowArray<char>(const char arr[], int size);
template void FillArray<char>(char arr[], int size);
template char FindMin<char>(const char arr[], int size);
template char FindMax<char>(const char arr[], int size);
template void SortArray<char>(char arr[], int size);
template void EditArray<char>(char arr[], int index, char value);

template void ShowArray<double>(const double arr[], int size);
template void FillArray<double>(double arr[], int size);
template double FindMin<double>(const double arr[], int size);
template double FindMax<double>(const double arr[], int size);
template void SortArray<double>(double arr[], int size);
template void EditArray<double>(double arr[], int index, double value);
