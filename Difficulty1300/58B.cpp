/// Problem Name: Coins
/// Problem Link: https://codeforces.com/problemset/problem/58/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> d;
  for (int i = 1;i*i <= n;i++){
    if (n%i==0){
      if (i*i == n)d.pb(i);
      else {d.pb(i);d.pb(n/i);}
    }
  }
  sort(d.begin(), d.end(), greater<int>());
  for (int i = 0;i < d.size();i++){
    for (int j = i;j < d.size();j++){
      if (d[j] && d[i]%d[j])d[j] = 0;
    }
  }
  for (int i = 0;i < d.size();i++){
    if (d[i])cout << d[i] << '\n';
  }
  return 0;
}
