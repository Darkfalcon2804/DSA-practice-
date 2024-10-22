///////Calculator using switch case

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    char ch;
    cout<<"Enter the operation: ";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"Sum="<<a+b<<endl;
        break;
    case '-':
        cout<<"Sub="<<a-b<<endl;
        break;
    case '/':
        cout<<"Div="<<a/b<<endl;
        break;
    case '*':
        cout<<"Multi="<<a*b<<endl;
        break;
    case '%':
        cout<<"Modulus="<<a%b<<endl;
        break;    
    default: cout<<"Invalid operator"<<endl;
        break;
    }
}