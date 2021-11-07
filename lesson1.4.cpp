#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, c, b, x1, x2, D;

        cout << "lead the meaning a: ";
        cin >> a;
        cout << "lead the meaning b: ";
        cin >> b;
        cout << "lead the meaning c: ";
        cin >> c;
        D = b*b - 4*a*c;

            if(D>0)
            {
            x1=(-b-sqrt(D))/(2*a);
            x2=(-b+sqrt(D))/(2*a);
                cout<<"x1="<<x1;
                cout<<" x2="<<x2;
                    }

                    if ( D == 0 )
                    {
                    x1=(-b)/(2*a);
                    cout<<"x1="<<x1;

                    }

                  if (D < 0 )
                      {

                       cout<< " no solutions "<<endl;

                      }

return 0;
}

