#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d, x1, x2;

    cout<<"Podaj wpolczynniki rownania: ax^2+bx+c"<<endl;
    cin>>a>>b>>c;
    cout<<a<<"x^2+"<<b<<"x+"<<c<<endl<<endl;

    d = (b*b-4*a*c);

    if (d > 0)
    {
        x1 = (-b - sqrt(d))/(2 * a);
        x2 = (-b + sqrt(d))/(2 * a);
        cout<<"x1= "<<x1<<endl<<"x2= "<<x2;
    }
    else if (d == 0)
    {
        x1 = -b/(2 * a);
        cout<<"x1= "<< x1;
    }
    else
        cout<<"Delta jest ujemna.";
    return 0;
}
