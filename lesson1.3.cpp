#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 20;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl;
    cout << b << endl;
}
