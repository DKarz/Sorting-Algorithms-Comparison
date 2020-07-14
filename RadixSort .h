#include <iostream>
#include <list>
#include "func.h"
#include <vector>

#ifndef PROBLEM_2_RADIXSORT_H
#define PROBLEM_2_RADIXSORT_H
int e(int vi, int coeff)
{
    return (vi / coeff) % 10;
}

void countSort(vector<int>& v, int coeff)
{
    int n = v.size(), pInt[10] = {0};
    vector<int> returnVec(n, 0);
    for (int i = 0; i < n; i++) pInt[e(v[i], coeff)]++;
    for (int i = 1; i < 10; i++) pInt[i] += pInt[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        returnVec[pInt[e(v[i], coeff)] - 1] = v[i];
        pInt[e(v[i], coeff)]--;
    }
    for (int i = 0; i < n; i++) v[i] = returnVec[i];
}

void radixsort(vector<int>& v)
{
    int maxInt = v[0];
    for (int el : v)
        if (el > maxInt)
            maxInt = el;
    for (int exp = 1; maxInt / exp > 0; exp *= 10) countSort(v, exp);
}
#endif //PROBLEM_2_RADIXSORT_H
