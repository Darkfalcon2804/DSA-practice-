#include<iostream>
// #include <algorithum>
using namespace std;
int prf(int set[]){
//     int count=0;
//     for(int i=0;i<5;i++){
//         if(set[i]>7){
//             count++;
//         }
//     }
//       return count;
    // std::sort(set.begin(),set.end());
    int s=0; 
    int e=4;
    int ans =0;;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(set[mid]==7){
            return mid;
        }
        else if(set[mid]<7){
            s=mid+1;
            ans++;
        }
        else if(set[mid]>7){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans ;
    }

int main(){
    int spells[]={5,1,3};
    int n=3;
    int positions[]={1,2,3,4,5};
    int m=5;
    int success=7;
    int set[5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            set[j]=positions[j]*spells[i];
        }
      int x=prf(set);
      cout<<x<<endl;  
    }
  
}