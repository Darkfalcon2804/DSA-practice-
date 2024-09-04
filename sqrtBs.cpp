////////Look at problem no 69 leetcode before doing this here we are going to
/// find sqrt by binarysearch and sqrt which floating like 37 sqrt will be 6.2
/// something
#include <iostream>
using namespace std;
long long int bs(int n) {

  int s = 0;
  int e = n;
  long long int mid = s + (e - s) / 2;
  int ans = 0;

  while (s <= e) {
    long long int sq = mid * mid;
    if (sq == n) {
      return mid;
    }
    if (sq < n) {
      ans = mid;
      s = mid + 1;
    } else { ////sq>n
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
double morePrecision(int n, int precision, int tempSol) {
  double fact = 1;
  double ans = tempSol;
  for (int i = 0; i < precision; i++) {
    fact /= 10;
    for (double j = ans; j * j < n; j = j + fact) {
      ans = j;
    }
  }
  return ans;
}
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int tempSol = bs(n);
  cout << "Answer is " << morePrecision(n, 3, tempSol);
}
