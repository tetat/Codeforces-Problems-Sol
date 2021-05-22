/// Problem Name: Balanced Rating Changes
/// Problem Link: https://codeforces.com/problemset/problem/1237/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  int no = 0;
  int po = 0;
  //cout << (-8%2) << '\n';
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el < 0 && el%2==-1)no++;
    if (el > 0 && el%2==1)po++;
    v.pb(el);
  }
  int neg = 0;
  int pos = 0;
  //cout << '\n';
  for (int i = 0;i < n;i++){
    if (v[i] < 0){
      if (v[i]%2==0)v[i] /= 2;
      else {
        if (no%2)v[i] = v[i]/2;
        else v[i] = (v[i]-1)/2;
        no--;
      }
    }
    if (v[i] > 0){
      if (v[i]%2==0)v[i] = v[i]/2;
      else {
        if (po%2)v[i] = v[i]/2;
        else v[i] = (v[i]+1)/2;
        po--;
      }
    }
    cout << v[i] << '\n';
//    if (v[i] < 0)neg += v[i];
//    if (v[i] > 0)pos += v[i];
  }
  //cout << neg << ' ' << pos << '\n';
  return 0;
}
