#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(2);
  v.push_back(96);
  v.push_back(35);
  v.push_back(8);
  v.push_back(50);
  sort(v.begin(),
       v.end()); ///////for binary search array should be monotonic function
                 ////thats why we are using sort function here
  cout << "Finding 35 in vector: " << binary_search(v.begin(), v.end(), 35)
       << endl;
  cout << "Lower bound-->" << lower_bound(v.begin(), v.end(), 35) - v.begin()
       << endl;
  cout << "Upper bound-->" << upper_bound(v.begin(), v.end(), 35) - v.begin()
       << endl;
  ///////in upper bound and lower bound we are using v.begin() because it
  ////convert iterator which is give by upper bound and lower bound to array
  //////index according to zero indexing
  int a = 3;
  int b = 5;
  cout << "max-->" << max(a, b) << endl;
  cout << "min-->" << min(a, b) << endl;
  swap(a, b);
  cout << endl << "a-->" << a << endl;
  string s = "darkfalcon";
  cout << "String before reverseing-->" << s << endl;
  reverse(s.begin(), s.end());
  cout << "String after reverseing-->" << s << endl;
  rotate(v.begin(), v.begin() + 3, v.end());
  cout << "After rotating:-->" << endl;
  for (int i : v) {
    cout << i << endl;
  }
}
