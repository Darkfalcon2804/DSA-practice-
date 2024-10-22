//////permutation and comutation
#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
}
    return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*(fact(n-r)));
}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int r;
    cout<<"Enter the r: ";
    cin>>r;
    cout<<"The combination will be:"<<ncr(n,r)<<endl;
}