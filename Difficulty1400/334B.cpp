/// Problem Name: Eight Point Sets
/// Problem Link: https://codeforces.com/problemset/problem/334/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  vector <pair <int, int> > a(9);
  map <int, int> x, y;
  for (int i = 0;i < 8;i++){
    cin >> a[i].first >> a[i].second;
    x[a[i].first]++;
    y[a[i].second]++;
  }
  string ans = "ugly";
  if (x.size()==3 && y.size()==3){
    vector <int> xx, yy;
    map <int, int>::iterator it;
    for (it = x.begin();it != x.end();it++){
      xx.pb(it->first);
    }
    for (it = y.begin();it != y.end();it++){
      yy.pb(it->first);
    }
    vector <pair <int, int> > b(9);
    int len = 0;
    for (int i = 0;i < 3;i++){
      for (int j = 0;j < 3;j++){
        b[len].first = xx[i];
        b[len].second = yy[j];
        len++;
      }
    }
    int mil = 0;
    for (int i = 0;i < 8;i++){
      for (int j = 0;j < 9;j++){
        if (j == 4)continue;
        if (a[i].first == b[j].first && a[i].second == b[j].second){
          b[j].first = -1;
          b[j].second = -1;
          mil++;
          break;
        }
      }
    }
    if (mil >= 8)ans = "respectable";
  }
  cout << ans << '\n';
  return 0;
}
