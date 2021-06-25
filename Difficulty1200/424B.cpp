/// Problem Name: Megacity
/// Problem Link: https://codeforces.com/problemset/problem/424/B

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
  int k;
  double d;
};

bool cmp(data a, data b){
  return a.d < b.d;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, s;
  cin >> n >> s;
  data city[n];
  double r;
  double c;
  for (int i = 0;i < n;i++){
    cin >> r >> c >> city[i].k;
    city[i].d = sqrt(r*r + c*c);
  }
  sort(city, city+n, cmp);
//  for (int i = 0;i < n;i++){
//    cout << double(city[i].d) << ' ';
//  }cout << '\n';
  int po = -1;
  for (int i = 0;i < n;i++){
    s += city[i].k;
    if (s >= N){
      po = i;
      break;
    }
  }
  if (po == -1)cout << po << '\n';
  else {
    cout << fixed << setprecision(10);
    cout << (city[po].d) << '\n';
  }
  return 0;
}
