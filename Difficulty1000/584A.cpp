/// Problem Name: Olesya and Rodion
/// Problem Link: https://codeforces.com/problemset/problem/584/A

#include <bits/stdc++.h>

//using namespace std;

int main()
{
  int n, t;
  std::string ans;
  std::cin >> n >> t;
  if (t==10){
    ans += '1';
    ans += '0';
    n-=2;
  }
  else {
    ans += t+48;
    n--;
  }
  if (n<0){
    std::cout << "-1" << '\n';
    return 0;
  }
  while (n--)ans += '0';
  std::cout << ans << '\n';
  return 0;
}
