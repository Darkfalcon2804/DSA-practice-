///////Array alternator

#include<iostream>
using namespace std;
void alternate(int num[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(num[i],num[i+1]);   
        }
    }
    cout<<"After alternating reverse of array: ";
    for(int i=0;i<size;i++){
        cout<<" "<<num[i];
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    
    for(int i=0;i<n;i++){
    cin>>arr[i];        
    }
    alternate(arr,n);

}