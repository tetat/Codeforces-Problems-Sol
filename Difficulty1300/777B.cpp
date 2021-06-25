/// Problem Name: Game of Credit Cards
/// Problem Link: https://codeforces.com/problemset/problem/777/B

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
  string a, b;
  cin >> a >> b;
  vector <int> s(10, 0);
  vector <int> m(10, 0);
  for (int i = 0;i < n;i++){
    s[a[i]-48]++;
    m[b[i]-48]++;
  }
  for (int i = 9;i >= 0;i--){
    for (int j = i;j < 10;j++){
      int cut = min(s[i], m[j]);
      s[i] -= cut;
      m[j] -= cut;
    }
  }
  int ff = 0;
  for (int i = 0;i < 10;i++){
    ff += s[i];
    s[i] = 0;
    m[i] = 0;
  }
  cout << ff << '\n';
  for (int i = 0;i < n;i++){
    s[a[i]-48]++;
    m[b[i]-48]++;
  }
  int ss = 0;
  for (int i = 9;i >= 0;i--){
    for (int j = i-1;j >= 0;j--){
      int cut = min(m[i], s[j]);
      m[i] -= cut;
      s[j] -= cut;
      ss += cut;
    }
  }
  cout << ss << '\n';
  return 0;
}
