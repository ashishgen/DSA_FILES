#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10] = {2, 4, 6, 5, 7, 54, 76};
    cout << sizeof(A) << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << endl;
    }
    for (int x : A) // another method to acsessing all the element
    {
        cout << x << endl;
    }

    return 0;
}