/// Problem Name: New Year and the Treasure Geolocation
/// Problem Link: https://codeforces.com/problemset/problem/1091/B

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
  int n, x, y;
  cin >> n;
  vector <pair <int, int> > ob;
  vector <pair <int, int> > cl;
  for (int i = 0;i < n;i++){
    cin >> x >> y;
    ob.pb(mp(x, y));
  }
  for (int i = 0;i < n;i++){
    cin >> x >> y;
    cl.pb(mp(x, y));
  }
  map <pair <int, int>, int> m;
  map <pair <int, int>, int>::iterator it;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      m[{ob[i].first+cl[j].first, ob[i].second+cl[j].second}]++;
    }
  }
  it = m.begin();
  while (it != m.end()){
    if (it->second==n){
      cout << it->first.first << ' ' << it->first.second << '\n';
      break;
    }
    it++;
  }
  return 0;
}
