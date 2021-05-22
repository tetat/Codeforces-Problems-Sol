/// Problem Name: Appending Mex
/// Problem Link: https://codeforces.com/problemset/problem/1054/B

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
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  int mx = 0;
  int po = -1;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  if (v[0]!=0)po = 1;
  else {
    for (int i = 1;i < n;i++){
      //if (i==1){
      //  if (abs(v[0]-v[i]) != 1){po = i+1;break;}
      //  mx = max(mx, v[i]);
      //}else {
        if (v[i]-mx > 1){
          po = i+1;
          break;
        }
        mx = max(mx, v[i]);
      //}
    }
  }
  cout << po << '\n';
  return 0;
}
