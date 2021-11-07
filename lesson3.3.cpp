#include <iostream>
#include   <ctime>
#include  <stdlib.h>

using namespace std;

int main()
{
    int a[4];
    int b[4];
    srand(time(0));
    int arrs[4];
           for (int i = 0; i < 4; i++)
             a[i] = 1 + rand() % 9;
           for (int i = 0; i < 4; i++)
             cout<<a[i]; // вывод результата на экране
             cout<<" "<<endl;

                       for (int i = 0; i < 4; i++)
                         b[i] = 1 + rand() % 9;
                       for (int i = 0; i < 4; i++)
                         cout<<b[i];
                    cout<<" "<<endl;
for (int i = 0; i < 3; i++)
    {
        arrs[i] = a[i] + b[i];
        //cout << "arr3[" << i << "] = ";
        cout << arrs[i];
    }


}
