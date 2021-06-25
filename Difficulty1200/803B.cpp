/// Problem Name: Distances to Zero
/// Problem Link: https://codeforces.com/problemset/problem/803/B

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
  cin >> n;
  vector <int> v;
  vector <int> a(n, 0);
  int L = -1;
  int R = -1;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    if (L==-1 && el==0)L = i;
    if (el==0)R = i;
  }
  if (L!=-1){
    int i = L-1;
    int cnt = 1;
    while (i>=0){
      a[i] = cnt;
      i--;
      cnt++;
    }
    cnt = 1;
    i = R+1;
    while (i < n){
      a[i] = cnt;
      i++;
      cnt++;
    }
    i = L;
    while (i <= R){
      cnt = 1;
      while (i <= R && v[i]!=0){
        a[i] = cnt;
        i++;
        cnt++;
      }
      while (i <= R && v[i]==0)i++;
    }
    i = R;
    while (i >= L){
      cnt = 1;
      while (i >= L && v[i]!=0){
        a[i] = min(a[i], cnt);
        cnt++;
        i--;
      }
      while (i >= L && v[i]==0)i--;
    }
  }
  for (int i = 0;i < n;i++){
    cout << a[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
