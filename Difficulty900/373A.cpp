/// Problem Name: Collecting Beats is Fun
/// Problem Link: https://codeforces.com/problemset/problem/373/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int k;
  string s;
  vector <int> mark(10, 0);
  cin >> k;
  for (int i = 0;i < 4;i++){
    cin >> s;
    for (int j = 0;j < 4;j++){
      if (s[j] != '.')mark[s[j]-48]++;
    }
  }
//  for (int i = 0;i < 10;i++){
//    cout << i << ' ' << mark[i] << '\n';
//  }
  for (int i = 0;i < 10;i++){
    if (mark[i] > k+k){
      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << '\n';
  return 0;
}
