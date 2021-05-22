/// Problem Name: Epic Game
/// Problem Link: https://codeforces.com/problemset/problem/119/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, n;
  cin >> a >> b >> n;
  while (true){
    n -= __gcd(a, n);
    if (n < 0){
      cout << "1" << '\n';
      return 0;
    }
    n -= __gcd(b, n);
    if (n < 0){
      cout << "0" << '\n';
      return 0;
    }
  }
}
