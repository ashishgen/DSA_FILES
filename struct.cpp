#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle // defining structure
{
    int lenght;
    int breadth;
    char x;
};
// Now declaring a variable of structure//you can declare outside the main funtion also
int main()
{
    struct Rectangle r1 = {10, 3};
    r1.lenght = 65;
    r1.breadth = 43;
    // local variable
    // printf("%d", sizeof(r1));
    cout << r1.lenght << endl;
    cout << r1.breadth << endl;

    return 0;
}
