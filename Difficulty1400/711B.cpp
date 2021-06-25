/// Problem Name: Chris and Magic Square
/// Problem Link: https://codeforces.com/problemset/problem/711/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
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
  Long n, el;
  cin >> n;
  vector <vector <Long> > v(n);
  int x = 0;
  int y = 0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      cin >> el;
      v[i].pb(el);
      if (v[i][j]==0){
        x = i;
        y = j;
      }
    }
  }
  Long ans = -1;
  if (n==1)ans = 1;
  else {
    set <Long> a, b;
    set <Long>::iterator id1, id2;
    for (int i = 0;i < n;i++){
      Long r = 0;
      Long c = 0;
      bool em1 = false;
      bool em2 = false;
      for (int j = 0;j < n;j++){
        r += v[i][j];
        c += v[j][i];
        if (i==x && j==y)em1 = true;
        if (i==y && j==x)em2 = true;
      }
      if (em1)b.insert(r);
      else a.insert(r);
      if (em2)b.insert(c);
      else a.insert(c);
    }
    bool em = false;
    Long d = 0;
    for (int i = 0, j = 0;i < n;i++, j++){
      d += v[i][j];
      if (i==x && j==y)em = true;
    }
    if (em)b.insert(d);
    else a.insert(d);
    em = false;
    d = 0;
    for (int i = 0, j = n-1;i < n;i++, j--){
      d += v[i][j];
      if (i==x && j==y)em = true;
    }
    if (em)b.insert(d);
    else a.insert(d);
    if (a.size()==1 && b.size()==1){
      id1 = a.begin();
      id2 = b.begin();
      if (*id1 > *id2)ans = *id1 - *id2;
    }
  }
  cout << ans << '\n';
  return 0;
}
