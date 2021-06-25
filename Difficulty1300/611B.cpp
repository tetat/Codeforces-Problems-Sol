/// Problem Name: New Year and Old Property
/// Problem Link: https://codeforces.com/problemset/problem/611/B

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

const int N = 1e3;

Long binary_to_decimal(string &s){
  Long p = 1;
  Long ret = 0;
  for (int i = 0;i < s.size();i++){
    if (s[i]==49)ret += p;
    p += p;
  }
  return ret;
}

vector <Long> v;
void make(){
  int d = 2;
  while (d <= 60){
    string s;
    s += 48;
    for (int i = 1;i < d;i++){
      s += 49;
    }
    for (int i = 1;i < d;i++){
      v.pb(binary_to_decimal(s));
      swap(s[i-1], s[i]);
    }
    d++;
  }

}

int main()
{
  FastIO();
  int tc, ca = 0;
  make();
  Long a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = 0;i < v.size();i++){
    if (v[i] >= a && v[i] <= b)ans++;
  }
  cout << ans << '\n';
  return 0;
}
