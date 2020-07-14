
#include <iostream>
#include <list>
#include "func.h"

using namespace std;
#ifndef PROBLEM_2_INSERTIONSORT_H
#define PROBLEM_2_INSERTIONSORT_H



template<typename T>
void insertionSort(list<T>& list1)
{

    T change;
    int ind;
    for (int i = 1; i < list1.size(); i++)
    {
        change = at(list1, i);
        ind = i - 1;
        while (ind >= 0 && at(list1, ind) > change)
        {
            ChangeAt(list1, ind + 1, at(list1, ind));
            ind = ind - 1;
        }
        ChangeAt(list1, ind + 1, change);
    }
}

template<typename T>
void insertionSort(T array[], size_t t)
{
    T el;
    for (int i = 1; i < t; i++)
    {
        el = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > el)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = el;
    }
}
#endif //PROBLEM_2_INSERTIONSORT_H
