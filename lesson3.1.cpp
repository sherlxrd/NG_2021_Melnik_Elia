#include <iostream>
#include <string>

using namespace std;

int main()
{
  int Arr[10];
  int n;
  for (int i = 0; i<10; i++)
  {
      cout<<"["<< i + 1 <<"]"<<";";
      cin >> Arr[i];
  }
for (int i = 0; i < 10; i++)
{
    cout<<Arr[i]<<" ";
}
    cout<<endl;
    cout<<"what number?"<<endl;
    cin >> n;
    for(int i = 0; i < 10; i++)
        if (Arr[i] > 0) Arr[i] += n;
    cout << "massiv:" << endl;
    for (int i = 0; i < 10; i++)
        cout << Arr[i] << " ";



}
