#include <iostream>
#include <cmath>
using namespace std;

double potega(int n, int m)
{
double wynik= pow(n,m);
return wynik;
}

int main()
{
    int n,m;
    cout << "podaj podstawe potegi" << endl;
    cin>>n;
    cout<<endl<<"podaj wykladnik potegi"<<endl;
    cin>>m;
    if(n==0 && m==0)
    {
        cout<<"Co najmniej jedna z liczb musi byc rozna od 0"<<endl;
    }
    else
    {
        cout<<endl<<"Wynik "<<n<<" do potegi "<<m<<"."<<endl;
        cout<<endl<<potega(n,m)<<endl;
    }
    return 0;
}
