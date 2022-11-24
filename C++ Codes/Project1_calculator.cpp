#include<iostream>
using namespace std;
main()
{

    float a, b;
    char opration;

    cout<<" Enter First Number : ";
    cin>>a;

    cout<<"Enter Opration (+,-,*,/):";
    cin>>opration;

    cout<<" Enter Second Number : ";
    cin>>b;

switch(opration)
{
    case '+':
        cout<<"Result = "<<a+b;
        break;
    case '-':
        cout<<"Result = "<<a+b;
        break;
    case '*':
        cout<<"Result = "<<a+b;
        break;
    case '/':
        cout<<"Result = "<<a+b;
        break;
    default:
        cout<<"Invalid Operation"<<endl;

}


}
