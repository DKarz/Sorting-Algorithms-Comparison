
/// There are pieces of code which were used to measure the time of sorting


//for (int j = n; j < m; ++j)
//{
//int arrInt[j];
//
//for (int i = 0; i < j; i++)
//{
//int x = rand() % 100 + rand()% 1123;
//arrInt[i] = x;
//}
//int *copy1 = arrInt, *copy2 = arrInt, *copy3 = arrInt;
//time_t t1, t2;
//t1 = clock();
//insertionSort(copy1, j);
//t2 = clock();
//insert.push_back(t2-t1);
//t1 = clock();
//mergeSort(copy2, 0, j);
//t2 = clock();
//merget.push_back(t2-t1);
//t1 = clock();
//quickSort(copy3, 0, j);
//t2 = clock();
//quick.push_back(t2-t1);
//
//}
//for (int j = n; j < m; ++j)
//{
//listInts.clear();
//
//for (int i = 0; i < j; i++)
//{
//int x = rand() % 100 + rand()% 1123;
//listInts.push_back(x);
//}
//list<int>  copy1 = listInts, copy2 = listInts, copy3 = listInts;
//time_t t1, t2;
//t1 = clock();
//insertionSort(copy1);
//t2 = clock();
//insert.push_back(t2-t1);
//t1 = clock();
//mergeSort(copy2, 0, j-1);
//t2 = clock();
//merget.push_back(t2-t1);
//t1 = clock();
//quickSort(copy3, 0, j-1);
//t2 = clock();
//quick.push_back(t2-t1);
//
//}
//for (int j = n; j < m; ++j)
//{
//listStr.clear();
//
//for (int i = 0; i < j; i++)
//{
//string str("");
//for (int i = 0; i < rand() % 20; ++i)
//str+= (rand()%10 + charCap());
//listStr.push_back(str);
//}
//list<string>  copy1 = listStr, copy2 = listStr, copy3 = listStr;
//time_t t1, t2;
//t1 = clock();
//insertionSort(copy1);
//t2 = clock();
//insert.push_back(t2-t1);
//t1 = clock();
//mergeSort(copy2, 0, j-1);
//t2 = clock();
//merget.push_back(t2-t1);
//t1 = clock();
//quickSort(copy3, 0, j-1);
//t2 = clock();
//quick.push_back(t2-t1);
//
//}
//for (int j = n; j < m; ++j)
//{
//string arrStr[j];
//
//for (int i = 0; i < j; i++)
//{
//string str("");
//for (int z = 0; z < rand() % 20; ++z)
//str+= (rand()%10 + charCap());
//arrStr[i] = str;
//}
//string  *copy1 = arrStr, *copy2 = arrStr, *copy3 = arrStr;
//time_t t1, t2;
//t1 = clock();
//insertionSort(copy1, j);
//t2 = clock();
//insert.push_back(t2-t1);
//t1 = clock();
//mergeSort(copy2, 0, j-1);
//t2 = clock();
//merget.push_back(t2-t1);
//t1 = clock();
//quickSort(copy3, 0, j-1);
//t2 = clock();
//quick.push_back(t2-t1);
//
//}
//for (int j = n; j < m; ++j)
//{
//
//for (int i = 0; i < j; ++i)
//{
//int x = rand() % 100 + rand() % 1123;
//vecOfInts.push_back(x);
//}
//vector<int> copy1 = vecOfInts, copy2 = vecOfInts;
//time_t t1, t2;
//t1 = clock();
//countingSort(copy1);
//t2 = clock();
//counts.push_back(t2-t1);
//t1 = clock();
//countingSort(copy2);
//t2 = clock();
//radix.push_back(t2-t1);
//
//}
//
//
//ofstream file("sorts.csv");
//for (int k = 0; k < counts.size(); ++k)
//{
//file << k + n << ";" << counts[k]  << ";" << radix[k] << "\n";
//}