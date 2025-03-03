#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "rus");
cout<<"Как вас зовут?"<<endl;
cout<< "-";
string name;
cin>>name;
cout<<"2 в 4 степени это- ";
int n;
cin>>n;
switch (n)
{case 16:
    cout<<"Верно"<<endl;
    break;
    default: 
    cerr << "ты дурак?" <<endl;
}
}