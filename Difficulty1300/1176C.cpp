/// Problem Name: Lose it!
/// Problem Link: https://codeforces.com/problemset/problem/1176/C

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

int sa[] = {4, 8, 15, 16, 23, 42};

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v[43];
  for (int i = 0;i < n;i++){
    cin >> el;
    v[el].pb(i);
  }
  vector <int> len(6, 0);
  int mn = N*5+2;
  for (int i = 0;i < 6;i++){
    len[i] = v[sa[i]].size();
    mn = min(mn, len[i]);
  }
  vector <int> pos(6, 0);
  int val = 0;
  bool ok = true;
//  for (int i = 0;i < 6;i++){
//    cout << len[i] << ": ";
//    for (int j = 0;j < len[i];j++){
//      cout << v[sa[i]][j] << ' ';
//    }cout << '\n';
//  }
  while (ok){
    int cur_p = 0;
    if (pos[0] < len[0]){
      cur_p = v[sa[0]][pos[0]];
      pos[0]++;
    }else break;
    for (int i = 1;i < 6;i++){
      while (pos[i] < len[i] && cur_p > v[sa[i]][pos[i]])pos[i]++;
      if (pos[i] < len[i]){
        cur_p = v[sa[i]][pos[i]];
        pos[i]++;
      }else {
        ok = false;
        break;
      }
    }
    if (ok)val += 6;
  }
  cout << n - val << '\n';
  return 0;
}
