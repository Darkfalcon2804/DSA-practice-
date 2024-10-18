#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  queue<string> q;
  q.push("A");
  q.push("B");
  q.push("C");
  cout << "Size before pop " << q.size() << endl;
  cout << "First element is " << q.front() << endl;
  q.pop();
  cout << "Second element is " << q.front() << endl;
  cout << "Size after pop " << q.size() << endl;
  cout << "Third element is " << q.back() << endl;
}
