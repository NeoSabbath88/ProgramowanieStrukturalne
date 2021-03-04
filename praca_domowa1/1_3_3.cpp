#include <iostream>

using namespace std;

int main()
{
        int a, b, c;

    cout<<"Podaj 1. liczbe calkowita"<<endl;
        cin>>a;
    cout<<"Podaj 2. liczbe calkowita"<<endl;
        cin>>b;
    cout<<"Podaj 3. liczbe calkowita"<<endl;
        cin>>c;

    cout<<"Podane liczby:"<<endl<<a<<" "<<b<<" "<<c<<endl;

if (a<b<c){
cout<<"Najwieksza liczba  to "<< c;
}
else if (a>b>c){
cout<<"Najwieksza liczba to "<< a;
}
else if (a<b>c){
cout<<"Najwieksza liczba to "<< b;
}
else if (a==b==c){
cout<<"Najwieksza liczba to "<< a;
}


    return 0;
}
