#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  map<int, string> m;
  m[1] = "Dark";
  m[12] = "is";
  m[2] = "falcon";
  m.insert({15, "here"});
  cout << "Before erase" << endl;
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }
  cout << "finding 12-->" << m.count(12) << endl;
  m.erase(12);
  cout << "After erase-->" << endl;
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl << endl;
  auto it = m.find(1);
  for (auto i = it; i != m.end(); i++) {
    cout << (*i).first << endl;
  }
}
