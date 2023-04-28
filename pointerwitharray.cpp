#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 3, 4, 1, 4};
    int *p;
    p = A;
    for (int i = 0; i < 5; i++)
        cout << A[i] << endl;
}