// //////Pattern 1
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number of row: ";
// //     cin>>n; 
// // int i =1;
// // while(i<=n){
// //     cout<<"****";
// //     cout<<endl;
// //     i++;

// // }
// // }
// //////Pattern 2
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number of row: ";
// //     cin>>n; 
// // int i =1;
// // while(i<=n){
// //    int j=1;
// //    while(j<=n){
// //     cout<<"*";
// //     j++;
// //    }
// //    cout<<endl;
// //    i++;
// // }
// // }

// //////Pattern 3
// //  #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number of row: ";
// //     cin>>n; 
// // int i =1;
// // while(i<=n){
// //    int j=1;
// //    while(j<=n){
// //     cout<<i;
// //     j++;
// //    }
// //    cout<<endl;
// //    i++;
// // }
// // }

// /////Pattern 4
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number of row: ";
// //     cin>>n; 
// // int i =1;
// // while(i<=n){
// //    int j=1;
// //    while(j<=n){
// //     cout<<j;
// //     j++;
// //    }
// //    cout<<endl;
// //    i++;
// // }
// // }

// ////Pattern 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of row: ";
//     cin>>n; 
// int i =1;
// int a=1;
// while(i<=n){
//    int j=1;
//    while(j<=n){
//     cout<<" "<<a;
//     j++;
//     a++;
//    }
//    cout<<endl;
//    i++;
// }
// }

// //////Pattern 6
// #include<iostream>
// using namespace std;
// int main(){
//          int n;
//     cout<<"Enter the number of row: ";
//     cin>>n; 
// int i =1;
// int a=65;
// while(i<=n){
//    int j=1;
//    while(j<=n){
   
//     cout<<" "<<(char)(a);
//     j++;
//     a++;
//    }
//    cout<<endl;
//    i++;
// }
// }


//////Pattern 7
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
//     cout<<"Enter the number of row: ";
//     cin>>n; 
// int i =1;
// while(i<=n){
//    int j=1;
//    while(j<=n+1-i){
//     cout<<" ";
//     j++;
//    }
//    int k=1;
//    while(k<=i){
//     cout<<"*";
//     k++;
//    }
//    cout<<endl;
//    i++;
// }
// }

//////Pattern 8
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
//     cout<<"Enter the number of row: ";
//     cin>>n; 
// int i =1;
// while(i<=n){
//    int j=1;
//    while(j<=n+1-i){
//     cout<<"*";
//     j++;
//    }
   
//    cout<<endl;
//    i++;
// }
// }
//////Pattern 9
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
//     cout<<"Enter the number of row: ";
//     cin>>n; 
// int i =1;
// while(i<=n){
//    int j=1;
//    while(j<=i){
//     cout<<" ";
//     j++;
//    }
//    int k=1;
//     while(k<=n+1-i){
//     cout<<"*";
//     k++;
//    }
   
//    cout<<endl;
//    i++;
// }
// }


//////Pattern 10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n-i){
//             cout<<" ";
//             j++;
//         }
//         int k=1;
//         int a=1;
//         while(k<=2*i-1){
//             cout<<a;
//             k++;
//             a++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//////Pattern 11
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space=n-row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=row){
//             cout<<j;
//             j++;
//         }

//         int k=row-1;
//         while(k){
//             cout<<k;
//             k--;
//         }
//         cout<<endl;
//         row++;
//     }
// }


//////pattern 12
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j++;
    }
     j=1;
    while(j<=(i-1)*2){
        cout<<"* ";
        j++;
    }
    j=n-i+1;
    while(j>=1){
        cout<<j<<" ";
        j--;
    }
    i++;
    cout<<endl;
}
}
