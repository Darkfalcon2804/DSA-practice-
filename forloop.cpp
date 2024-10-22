//////sum of 1 to n

// #include<iostream> 
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter the number: ";
//     cin >>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"The sum is  "<<sum<<endl;
// }


///////Fibonacci series
// #include<iostream> 
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter the number: ";
//     cin >>n;
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b;
//     for(int i=1;i<=n;i++){
//         int nextNumber=a+b;
//         a=b;
//         b=nextNumber;
//         cout<<" "<<nextNumber;
//     }
//     cout<<endl;
//     }
//////Q.Wap to check if a number is prime or not??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int check=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){check=0;
        cout<<"Not a prime number"<<endl;
        break;}
    }
    if(n==1) cout<<"Neither prime nor composite"<<endl;
    else if (check==1) cout<<"prime no"<<endl;
}
