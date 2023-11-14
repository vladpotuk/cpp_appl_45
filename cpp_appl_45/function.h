#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>

template <typename T>
void ShowArray(const T arr[], int size);

template <typename T>
void FillArray(T arr[], int size);

template <typename T>
T FindMin(const T arr[], int size);

template <typename T>
T FindMax(const T arr[], int size);

template <typename T>
void SortArray(T arr[], int size);

template <typename T>
void EditArray(T arr[], int index, T value);

#endif 
