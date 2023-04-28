#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a = 10;
    int *p; // declaration of the pointer
    //*is use for decleration and e reffrencing
    p = &a; // p is assign address of a
    // Address of a is store in p
    cout << a << endl;
    printf("using pointer %d", *p);
    printf("using pointer %d %d", p, &a);
}