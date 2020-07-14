#include <iostream>
#include <list>
#include "func.h"
#include <vector>

#ifndef PROBLEM_2_COUNTINGSORT_H
#define PROBLEM_2_COUNTINGSORT_H

void countingSort(vector<int>& v)
{
    int minInt = v[0], maxInt = v[0], counter = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (minInt > v[i]) minInt = v[i];
        if (maxInt < v[i]) maxInt = v[i];
    }
    vector<int> temp(maxInt - minInt + 1, 0);
    for (int i = 0; i < v.size(); ++i) temp[v[i] - minInt]++;
    for (int i = minInt; i <= maxInt; ++i)
    {
        for (int j = 0; j < temp[i - minInt]; ++j)
            v[counter++] = i;
    }
}

#endif //PROBLEM_2_COUNTINGSORT_H
