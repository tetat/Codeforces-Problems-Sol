/// Problem Name: Crossword solving
/// Problem Link: https://codeforces.com/problemset/problem/822/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

struct data {
  int len;
  vector <int> v;
};

bool cmp(data a, data b){
  return a.len < b.len;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m;
  string s, t;
  cin >> n >> m >> s >> t;
  //vector <pair <int, vector <int> > > v;
  int R = n-1;
  int L = 0;
  data ar[(m-n)+10];
  for ( ;R < m;R++, L++){
    for (int i = 0;i < n;i++){
      if (s[i] != t[L+i]){
        ar[L].v.pb(i+1);
      }
    }
    ar[L].len = ar[L].v.size();
  }
  sort(ar, ar+L, cmp);
  L = ar[0].len;
  cout << L << '\n';
  for (int i = 0;i < L;i++){
    cout << ar[0].v[i];
    if (i != L-1)cout << ' ';
  }cout << '\n';
  return 0;
}
