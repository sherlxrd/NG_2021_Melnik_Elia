#include <iostream>
using namespace std;
int main()
{

const int NotUsed = system( "color 5" );
    int n;
    cout << "How many stars do you need? ";
    cin>> n;
        for (int width=1; width <= n; width++)
        {
        for (int hight=1; hight <= n; hight++)
               {
               if ((width==n)||(hight==n)||(width==1)||(hight==1))cout << "*";

               else
               cout<< " ";
               }
               cout<<endl;
        }
                 cout << "You've got a portal :3 ";
                  return 0;
}
