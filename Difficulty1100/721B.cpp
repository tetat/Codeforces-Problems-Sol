/// Problem Name: Passwords
/// Problem Link: https://codeforces.com/problemset/problem/721/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

bool cmp(pair <string, int> &a, pair <string, int> &b){
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <pair <string, int> > v;
  string in;
  for (int i = 0;i < n;i++){
    cin >> in;
    v.pb(mp(in, in.size()));
  }
  string pass;
  cin >> pass;
  sort(v.begin(), v.end(), cmp);
//  for (int it = 0;it < n;it++){
//    cout << v[it].first << ' ' << v[it].second << '\n';
//  }
  int i = 0;
  int j = 0;
  int best = 0;
  int worst = 0;
  while (i < n && v[i].second != pass.size())i++;
  best = i+1;
  int cut = 0;
  j = i;
  while (j < n && v[i].second == v[j].second){
    if (v[j].first == pass)cut++;
    j++;
  }
  cut -= 1;
  worst = j-cut;
  //cout << best << ' ' << worst << '\n';
  best += ((best-1)/k)*5;
  worst += ((worst-1)/k)*5;
  cout << best << ' ' << worst << '\n';
  return 0;
}
