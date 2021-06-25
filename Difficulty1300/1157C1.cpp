/// Problem Name: Increasing Subsequence (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1157/C1

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int cur = 0;
  int L = 0;
  int R = n-1;
  string s;
  while (L < R){
    if (v[L]>cur && v[R]>cur){
      if (v[L] < v[R]){
        s += 'L';
        cur = v[L];
        L++;
      }else if (v[L] > v[R]){
        s += 'R';
        cur = v[R];
        R--;
      }else break;
    }else if (v[L]>cur){
      s += 'L';
      cur = v[L];
      L++;
    }else if (v[R]>cur){
      s += 'R';
      cur = v[R];
      R--;
    }else break;
  }
  if (L==R&& cur < v[L])s += 'R';
  cout << s.size() << '\n';
  cout << s << '\n';
  return 0;
}
