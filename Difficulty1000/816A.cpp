/// Problem Name: Karen and Morning
/// Problem Link: https://codeforces.com/problemset/problem/816/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

vector <int> v;

int Upper_bound(int n){
  int R = v.size();
  int L = 0;
  int ret = 0;
  while (L <= R){
    int mid = L + (R-L)/2;
    if (v[mid] >= n){
      ret = mid;
      R = mid-1;
    }else L = mid+1;
  }
  //cout << ret << '\n';
  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int h, m;
  char ch;
  cin >> h >> ch >> m;
  int in = 0;
  for (int i = 0;i < 6;i++, in += 70){
    v.pb(in);
  }
  in = 601;
  for (int i = 0;i < 6;i++, in += 70){
    v.pb(in);
  }
  in = 1202;
  for (int i = 0;i < 4;i++, in += 70){
    v.pb(in);
  }
  v.pb(24*60);
//  int len = v.size();
//  for (int i = 0;i < len;i++){
//    cout << v[i] << ": " << int(v[i]/60) << ' ' << v[i]%60 << '\n';
//  }
  cout << v[Upper_bound(h*60+m)] - (h*60+m) << '\n';
  return 0;
}
