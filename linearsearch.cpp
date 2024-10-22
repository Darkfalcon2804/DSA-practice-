#include<iostream>
using namespace std;
bool search(int num[],int size,int element){
    for(int i=0;i<size;i++){
        if(num[i]==element){
            return 1;
        } 
    }
     return 0;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to search in array: ";
    cin>>key;
    bool find=search(arr,n,key);
    if(find){
        cout<<"Element is present"<<endl;

    }
    else {
        cout<<"Element is not present"<<endl;
    }
}