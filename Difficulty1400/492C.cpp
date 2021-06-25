/// Problem Name: Vanya and Exams
/// Problem Link: https://codeforces.com/problemset/problem/492/C

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

const int N = 1e5;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second < b.second;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n, r, avg;
  cin >> n >> r >> avg;
  vector <pair <int, int> > v(n);
  double sum = 0;
  for (int i = 0;i < n;i++){
    cin >> v[i].first >> v[i].second;
    sum += v[i].first;
  }
  Long ans = 0;
  if (sum/n < avg){
    Long baki = (n*avg)-sum;
    sort(v.begin(), v.end(), cmp);
    Long zero = 0;
    for (int i = 0;i < n && baki;i++){
      Long cut = min(baki, max(zero, Long(r-v[i].first)));
      //sum += cut;
      baki -= cut;
      ans += (cut*v[i].second);
    }
  }
  cout << ans << '\n';
  return 0;
}
