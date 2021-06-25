/// Problem Name: Letters Shop
/// Problem Link: https://codeforces.com/problemset/problem/1187/B

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

const int N = 2*1e5;

int mark[N+1][26];

int find_pref(vector <int> &a, int L, int R){
  int ret = -1;
  while (L <= R){
    int mid = L + (R-L)/2;
    int gre = 1;
    for (int i = 0;i < 26;i++){
      if (mark[mid][i] < a[i]){
        gre = 0;
      }
    }
    if (gre){
      ret = mid;
      R = mid-1;
    }else L = mid+1;
  }
  return ret;
}

int main()
{
  faster();
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  for (int i = 1;i <= n;i++){
    mark[i][s[i-1]-97]++;
    for (int j = 0;j < 26;j++){
      mark[i][j] += mark[i-1][j];
    }
  }
  int q;
  cin >> q;
  while (q--){
    string nam;
    cin >> nam;
    vector <int> v(26, 0);
    int len = nam.size();
    for (int i = 0;i < len;i++){
      v[nam[i]-97]++;
    }
    cout << find_pref(v, 1, n) << '\n';
  }
  return 0;
}
