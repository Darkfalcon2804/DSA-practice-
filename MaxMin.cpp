#include<iostream>
#include<limits.h>
using namespace std;
int getMax(int num[],int n){
    int mx=INT_MIN;
 for(int i=0;i<n;i++){
    
    mx=max(mx,num[i]);

 }  
 return mx; 
}
int getMin(int num[],int n){
    int mi=INT_MAX;
 for(int i=0;i<n;i++){           
 mi=min(mi,num[i]);

 }  
 return mi; 
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrays: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum element is: "<<getMax(arr,n)<<endl;
    cout<<"Minimum element is: "<<getMin(arr,n)<<endl;

}