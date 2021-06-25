/// Problem Name: The Child and Homework
/// Problem Link: https://codeforces.com/problemset/problem/437/A

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

int main()
{
  FastIO();
  int tc, ca = 0;
  string s[4];
  vector <int> v(4);
  for (int i = 0;i < 4;i++){
    cin >> s[i];
    v[i] = s[i].size()-2;
  }
//  for (int i = 0;i < 4;i++){
//    cout << v[i] << '\n';
//  }
  vector <char> ans;
  for (int i = 0;i < 4;i++){
    int ok = 1;
    for (int j = 0;j < 4;j++){
      if (i != j){
        if (v[i]+v[i] > v[j])ok = 0;
      }
    }
    if (ok)ans.pb(i+65);
  }
  for (int i = 0;i < 4;i++){
    int ok = 1;
    for (int j = 0;j < 4;j++){
      if (i != j){
        if (v[i] < v[j]+v[j])ok = 0;
      }
    }
    if (ok)ans.pb(i+65);
  }
  if (ans.size() != 1)cout << "C" << '\n';
  else cout << ans[0] << '\n';
  return 0;
}
