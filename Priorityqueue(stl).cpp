#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  //////////maxi heap
  priority_queue<int> maxi;
  /////////////min heap
  priority_queue<int, vector<int>, greater<int>> mini;

  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  cout << "Size is " << maxi.size() << endl;
  int n = maxi.size(); ////// we are doing it because the maxi.size is changing
                       /// again and again in for loop at maxi.pop
  for (int i = 0; i < n; i++) {
    cout << maxi.top() << "  ";
    maxi.pop();
  }
  cout << endl;

  mini.push(10);
  mini.push(9);
  mini.push(8);
  mini.push(7);
  mini.push(6);
  mini.push(5);
  cout << "Size is " << mini.size() << endl;
  int m = mini.size();
  for (int i = 0; i < m; i++) {
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;
  cout << "Empty or not " << mini.empty() << endl;
  cout << "Empty or not " << maxi.empty() << endl;
}
