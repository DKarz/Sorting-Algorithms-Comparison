// Some functions which were used in algorithms

#include <ctime>
#include <list>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

#include <iostream>
#ifndef PROBLEM_2_FUNC_H
#define PROBLEM_2_FUNC_H


vector<int> vecOfInts;
vector<string> vecOfStrings;


template<typename T>
T at(list<T> list, int ind)
{
    if (ind >= list.size()) throw out_of_range("wrong index");
    int counter = -1;
    for (auto el : list)
    {
        counter++;
        if (counter == ind)
        {
            return el;
        }
    }
}

template<typename T>
void ChangeAt(list<T>& list, int ind, T x)
{
    if (ind >= list.size()) throw out_of_range("wrong index");
    int counter = -1;
    ::list<T> out;
    for (auto el : list)
    {
        counter++;
        if (counter == ind)
        {
            out.push_back(x);
        } else
        {
            out.push_back(el);
        }
    }
    list = out;
}
void intGenerator(int len1, int len2) // nums with length from len1 to len2
{
    srand(time(NULL));
    int p1 = len1, p2 = len2;
    //int p1 = pow(10,len1), p2 = pow(10,len2);
    int x = p1 + rand()%p2;
    vecOfInts.push_back(x);
}
char charCap()
{
    if (rand()%2 == 0) return 'A';
    return 'a';
}
void stringGenerator(int len1, int len2) {
    srand(clock());
    string str("");
    int n = len1 + rand()%len2;
    for (int i = 0; i < n; ++i)
        str+= (rand()%10 + charCap());
    vecOfStrings.push_back(str);
}

#endif //PROBLEM_2_FUNC_H
