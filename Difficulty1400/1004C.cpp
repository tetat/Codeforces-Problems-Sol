/// Problem Name: Sonya and Robots
/// Problem Link: https://codeforces.com/problemset/problem/1004/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

vector <vector <int> > p(N+1);

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second > b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> a(n);
  int mx = 0;
  for (int i = 0;i < n;i++){
    cin >> a[i];
    p[a[i]].pb(i);
    mx = max(mx, a[i]);
  }
  vector <pair <int, int> > mm;
  for (int i = 1;i <= mx;i++){
    if (p[i].size()){
      mm.pb(mp(p[i][0], p[i][p[i].size()-1]));
    }
  }
  sort(mm.begin(), mm.end(), cmp);
  Long ans = 0;
  for (int i = 0;i < mm.size();i++){
    int ad = 0;
    int L = 0;
    int R = mm.size()-1;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (mm[i].first < mm[mid].second){
        ad = mid+1;
        L = mid+1;
      }else R = mid-1;
    }
    ans += ad;
  }
  cout << ans << '\n';
  return 0;
}
