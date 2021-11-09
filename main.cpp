#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"rus");

    int pass[10];
    pass[0] = 1234;
    pass[1] = 2341;
    pass[2] = 6572;
    pass[3] = 1235;
    pass[4] = 1232;
    pass[5] = 1897;
    pass[6] = 7654;
    pass[7] = 5653;
    pass[8] = 4189;
    pass[9] = 6666;
     double balance[10];
    balance[0] = 342;
    balance[1] = 5464;
    balance[2] = 6234.32;
    balance[3] = 17777;
    balance[4] = 34;
    balance[5] = 1897;
    balance[6] = 76535.6;
    balance[7] = 56552;
    balance[8] = 4;
    balance[9] = 6666.66;
    int pincode;
    int q = 0;
    int count = 0, op;
    double x;
    tryAgain:
    cout<<"Bank account: "<< endl;
        cin >> q;


do
    {
        cout << "Введите пин-код:";
        cin>> pincode;

        if (pincode == pass[q])
            break;
             else
        {
            count++;
        }
    }
    while (count<3);
    if (count == 3)
    {
        cout << "карточка заблокирована!" << endl;
        system ("pause");
        return 0;
    }
else
    {
        start:
        system("cls");
        cout << "1 - проверить баланс" << endl;
        cout << "2 - снять наличные" << endl;
        cout << "3 - пополнить наличные" << endl;
        cout << "4 - выход" << endl;
        cout << "Выберите операцию: " << endl;
        cin >> op;
        switch (op)
         {
            case 1:
                {
                    system ("cls");
                    cout << "У тебя на счету: " << balance[q] << " гривен!" << endl;
                    system ("pause");
                    goto start;
                    break;
                }
           case 2:
                {
                    system ("cls");
                    cout << "Введите сумму: " << endl;
                    cin >> x;
                    balance[q] = balance[q] - x;
                    system ("pause");
                    goto start;
                    break;
                }
                 case 3:
                {
                    system ("cls");
                    cout << "Give me many!: " << endl;
                    cin >> x;
                    balance[q] = balance[q] + x;
                    system ("pause");
                    goto start;
                    break;
                }
            case 4:
                {
                    system("cls");
                    cout << "Всего хорошего!" << endl;
                    system ("pause");
                    return 0;
                    break;

                }

         }
    }
goto tryAgain;
}
