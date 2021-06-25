/// Problem Name: Polycarp's Practice
/// Problem Link: https://codeforces.com/problemset/problem/1006/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <pair <int, int> > v;
  vector <int> mark(n, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i));
  }
  sort(v.begin(), v.end());
  int dif = 0;
  for (int i = 1;i <= k;i++){
    dif += v[n-i].first;
    mark[v[n-i].second] = 1;
  }
  //sort(v.begin(), v.end(), cmp);
  int i = 0;
  vector <int> day;
  while (i < n){
    int cnt = 1;
    while (i < n && mark[i]==0){cnt++;i++;}
    day.pb(cnt);
    if (day.size()==k)break;
    i++;
  }
  day[k-1] += n-i;
  day[k-1]--;
  cout << dif << '\n';
  for (int i = 0;i < k;i++){
    cout << day[i];
    if (i != k-1)cout << ' ';
  }cout << '\n';
  return 0;
}
