///////EVEN OR ODD NUMBER
#include<iostream>
using namespace std;
int evenodd(int x){
    if(x&1) {
        cout<<"odd"<<endl;
    }
    else cout<<"even"<<endl;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    evenodd(a);
}