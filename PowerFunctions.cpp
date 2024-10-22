///////a raise to power

#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int main(){
    int a;
    cout<<"Enter the base: ";
    cin>>a;
    
    int b;
    cout<<"Enter the power: ";
    cin>>b;
    cout<<power(a,b)<<endl;
}