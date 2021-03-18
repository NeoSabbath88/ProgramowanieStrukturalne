#include <iostream>

using namespace std;

void rzad_zn(string ch,int i, int j)
    {
        int k,w;
        for(w=0;w<j;w++)
        {
            for(k=0;k<i;k++)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }

    }

int main()
{
   string ch="ch";
    int k,w;
    cout << "Podaj liczbe kolumn" << endl;
    cin>>k;
    cout<<"Podaj liczbe wierszy"<<endl;
    cin>>w;
    cout<<endl<<"Wyœwietlam tabele "<<k<<"x"<<w<<endl;

    rzad_zn(ch,k,w);
    return 0;
}
