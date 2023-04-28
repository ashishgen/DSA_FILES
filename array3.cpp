#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size";
    cin >> n;
    int A[n] = {1, 1, 3, 4, 5, 5};
    A[0] = 2;
    for (int x : A)
    {
        cout << x << endl;
    }
}