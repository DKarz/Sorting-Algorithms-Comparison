#include <iostream>
#include <list>
#include "func.h"
using namespace std;
#ifndef PROBLEM_2_MERGESORT_H
#define PROBLEM_2_MERGESORT_H

template<typename T>
void merge(T array[], int left, int middle, int right)
{
    int k = left, n1 = middle - left + 1, n2 = right - middle;
    T leftArr[n1];
    T rightArr[n2];
    for (int i = 0; i < n1; ++i) leftArr[i] = array[left + i];
    for (int j = 0; j < n2; ++j) rightArr[j] = array[middle + 1 + j];
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (rightArr[j] < leftArr[i]) array[k] = rightArr[j++];
        else array[k] = leftArr[i++];
        k++;
    }
    while (n1 > i) array[k++] = leftArr[i++];
    while (n2 > j) array[k++] = rightArr[j++];
}

template<typename T>
void mergeSort(T arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}


template<typename T>
void merge(list<T>& list, int left, int middle, int right)
{
    int k = left, n1 = middle - left + 1, n2 = right - middle;
    T leftArr[n1];
    T rightArr[n2];
    for (int i = 0; i < n1; ++i) leftArr[i] = at(list, left + i);
    for (int j = 0; j < n2; ++j) rightArr[j] = at(list, middle + 1 + j);
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (rightArr[j] < leftArr[i]) ChangeAt(list, k, rightArr[j++]);
        else ChangeAt(list, k, leftArr[i++]);
        k++;
    }
    while (n1 > i) ChangeAt(list, k++, leftArr[i++]);
    while (n2 > j) ChangeAt(list, k++, rightArr[j++]);
}

template<typename T>
void mergeSort(list<T>& list, int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        mergeSort(list, left, middle);
        mergeSort(list, middle + 1, right);
        merge(list, left, middle, right);
    }
}
#endif //PROBLEM_2_MERGESORT_H
