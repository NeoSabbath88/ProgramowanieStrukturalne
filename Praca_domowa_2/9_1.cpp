#include <iostream>

using namespace std;

double min(double x, double y)
{
    if(x<=y)
        {
            return x;
        }
    else
        {
            return y;
        }
}

int main()
{
    double x,y;
    cout<<"Wprowadz x: "<<endl;
    cin>>x;
    cout<<"wprowadz y: "<<endl;
    cin>>y;
    cout<<"Mniejsza z liczb to :"<<min(x,y)<<endl;
    return 0;
}
