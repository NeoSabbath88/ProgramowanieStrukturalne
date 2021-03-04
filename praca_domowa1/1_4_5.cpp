#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,wynik =0;
    cout << "Podaj nieujemna liczbe calkowita  " << endl;
    cin>>n;
    cout<<endl;
    if(n>=0)
    {
        for (int i=0;i<=n;i++)
        {
          wynik = wynik+pow(i,2);

        }

        cout<<"Suma kwadratow liczb od 0 do "<<n<<" : "<<endl<<wynik<<endl;
    }
    else
    cout<<"liczba miala byc nieujemna"<<endl;
    return 0;
}
