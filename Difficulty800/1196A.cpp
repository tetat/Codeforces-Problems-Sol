/// Problem Name: Three Piles of Candies
/// Problem Link: https://codeforces.com/problemset/problem/1196/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  while (t--){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << (a+b+c)/2 << endl;
  }
  return 0;
}
