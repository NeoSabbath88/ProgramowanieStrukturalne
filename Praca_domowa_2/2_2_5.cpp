#include <iostream>
#include <cmath>
using namespace std;

double power(int n)
{
double power=pow(2,n);
return power;
}
int main()
{
    int n;
    cout << "Podaj wykladnik dla potegi liczby 2" << endl;
    cin>>n;
    cout<<"wynik: "<<endl;
    cout<<endl<<power(n);
    return 0;
}
