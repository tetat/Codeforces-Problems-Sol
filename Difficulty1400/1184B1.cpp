/// Problem Name: The Doctor Meets Vader (Easy)
/// Problem Link: https://codeforces.com/problemset/problem/1184/B1

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

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.first < b.first;
}

bool cmp_g(pair <int, int> &a, pair <int, int> &b){
  return a.second > b.second;
}

int main()
{
  faster();
  int tc, ca = 0;
  int s, b, el;
  cin >> s >> b;
  vector <int> ap;
  for (int i = 0;i < s;i++){
    cin >> el;
    ap.pb(el);
  }
  vector <pair <int, int> > dg;
  for (int i = 0;i < b;i++){
    int a, b;
    cin >> a >> b;
    dg.pb(mp(a, b));
  }
  sort(dg.begin(), dg.end(), cmp);
  int L = 0;
  int R = 0;
//  while (R < b){
//    while (R < b && dg[L].first == dg[R].first)R++;
//    sort(dg.begin()+L, dg.begin()+R, cmp_g);
//    L = R;
//  }
  for (int i = 1;i < b;i++){
    dg[i].second += dg[i-1].second;
  }
//  for (int i = 0;i < b;i++){
//    cout << dg[i].second << ' ';
//  }cout << '\n';
  for (int i = 0;i < s;i++){
    int L = 0;
    int R = b-1;
    int p = -1;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (dg[mid].first <= ap[i]){
        p = mid;
        L = mid+1;
      }else R = mid-1;
    }
    if (p == -1){
      cout << "0" << ' ';
      continue;
    }
    while (p < b-1 && dg[p].first==dg[p+1].first)p++;
    cout << dg[p].second << ' ';
  }cout << '\n';
  return 0;
}
