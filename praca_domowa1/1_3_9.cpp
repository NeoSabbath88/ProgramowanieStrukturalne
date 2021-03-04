#include <iostream>

using namespace std;

int main()
{
    float a,b;
    int operacja;
        cout << "Kalkulator" << endl;
        cout << "wprowadz pierwsza liczbe" << endl<<endl;
            cin>>a;
                cout<<endl;

        cout << "wprowadz druga liczbe" << endl<<endl;

            cin>>b;
                cout<<endl;


        cout<< " Operacja: "<<endl;
        cout<< "1. + "<<endl;
        cout<< "2. - "<<endl;
        cout<< "3. * "<<endl;
        cout<< "4. / "<<endl<<endl;

            cin>>operacja;
                cout<<endl;


    switch(operacja)
{


   case 1:
    cout <<a<<" + " <<b<<" = "<<a+b<<endl;
        break;

    case 2:
  cout <<a<<" - " <<b<<" = "<<a-b<<endl;
        break;

    case 3:
  cout <<a<<" * " <<b<<" = "<<a*b<<endl;
        break;

    case 4:
  cout <<a<<" / " <<b<<" = "<<a/b<<endl;
        break;

    default:
        cout << "Nie wybrano poprawnej operacji"<<endl;
        break;
}
    return 0;
}
