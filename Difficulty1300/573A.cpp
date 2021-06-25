/// Problem Name: Bear and Poker
/// Problem Link: https://codeforces.com/problemset/problem/573/A

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

const int N = 1e6;

int gc(int a, int b){
  while (b){
    int m = a%b;
    a = b;
    b = m;
  }
  return a;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
//  int f = v[0];
//  for (int i = 0;i < n;i++){
//    f = gc(f, v[i]);
//  }
  string ans = "Yes";
  for (int i = 0;i < n;i++){
    while (v[i]%2==0)v[i]/= 2;
    while (v[i]%3==0)v[i]/= 3;
  }
  sort(v.begin(), v.end());
  if (v[0] != v[n-1])ans = "No";
  cout << ans << '\n';
  return 0;
}
