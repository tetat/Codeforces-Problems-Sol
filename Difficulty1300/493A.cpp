/// Problem Name: Vasya and Football
/// Problem Link: https://codeforces.com/problemset/problem/493/A

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

struct data {
  int minute;
  int jersey;
  string team;
};

data hm[91];
data am[91];
int h_num[100];
int a_num[100];

int main()
{
  FastIO();
  int tc, ca = 0;
  string sh, sa;
  cin >> sh >> sa;
  int q;
  cin >> q;
  while (q--){
    string t, c;
    int m, j;
    cin >> m >> t >> j >> c;
    if (t=="h"){
      if (h_num[j]==-1)continue;
      if (c=="y")h_num[j]++;
      else h_num[j] += 2;
      if (h_num[j] > 1){
        hm[m].minute = m;
        hm[m].team = sh;
        hm[m].jersey = j;
        h_num[j] = -1;
      }
    }else {
      if (a_num[j]==-1)continue;
      if (c=="y")a_num[j]++;
      else a_num[j] += 2;
      if (a_num[j] > 1){
        am[m].minute = m;
        am[m].team = sa;
        am[m].jersey = j;
        a_num[j] = -1;
      }
    }
  }
  for (int i = 1;i <= 90;i++){
    if (hm[i].minute){
      cout << hm[i].team << ' ' << hm[i].jersey << ' ' << hm[i].minute << '\n';
    }
    if (am[i].minute){
      cout << am[i].team << ' ' << am[i].jersey << ' ' << am[i].minute << '\n';
    }
  }
  return 0;
}
