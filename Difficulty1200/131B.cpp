/// Problem Name: Opposites Attract
/// Problem Link: https://codeforces.com/problemset/problem/131/B

#include <bits/stdc++.h>

using namespace std;

struct data {
  long long boy;
  long long girl;
  long long zero;
};

data Couple[11];

int main()
{
  long long n, el;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    int po = abs(el);
    if (el > 0)Couple[po].boy++;
    else if (el < 0)Couple[po].girl++;
    else Couple[po].zero++;
  }
  long long ans = 0;
  if (Couple[0].zero > 0){
    ans = (Couple[0].zero * (Couple[0].zero-1)) / 2;
  }
  for (int i = 1;i <= 10;i++){
    ans += Couple[i].boy * Couple[i].girl;
  }
  cout << ans << '\n';
  return 0;
}
