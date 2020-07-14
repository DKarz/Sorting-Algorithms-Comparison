#include <iostream>
#include <list>
#include "func.h"

#ifndef PROBLEM_2_QUICKSORT_H
#define PROBLEM_2_QUICKSORT_H

template<typename T>
int spliter(T array[], int left, int right)
{
    T leadingEl = array[right];
    int i = (left - 1);
    for (int j = left; j < right; j++)
    {
        if (leadingEl >= array[j])
        {
            i++;
            T temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    T temp = array[i + 1];
    array[i + 1] = array[right];
    array[right] = temp;

    return ++i;
}

template<typename T>
void quickSort(T array[], int left, int right)
{
    if (right > left)
    {
        int i = spliter(array, left, right);
        quickSort(array, left, --i);
        quickSort(array, ++i, right);
    }
}

template<typename T>
void swapT(list<T>& list1, int i, list<T>& list2, int j)
{
    list<T> temp = list1;
    ChangeAt(list1, i, at(list2, j));
    ChangeAt(list2, j, at(temp, i));

}

template<typename T>
int spliter(list<T>& list, int left, int right)
{
    T leadingEl = at(list, right);
    int i = (left - 1);
    for (int j = left; j < right; j++)
    {
        if (leadingEl >= at(list, j))
        {
            i++;
            swapT(list, i, list, j);
        }
    }
    swapT(list, i + 1, list, right);

    return ++i;
}

template<typename T>
void quickSort(list<T>& list, int left, int right)
{
    if (right > left)
    {
        int i = spliter(list, left, right);
        quickSort(list, left, --i);
        quickSort(list, ++i, right);
    }
}

#endif //PROBLEM_2_QUICKSORT_H
