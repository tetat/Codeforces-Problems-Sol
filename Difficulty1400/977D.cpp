/// Problem Name: Divide by three, multiply by two
/// Problem Link: https://codeforces.com/problemset/problem/977/D

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <pair <int, Long> > v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i].second;
    Long x = v[i].second;
    int cnt = 0;
    while (x%3==0){
      cnt++;
      x /= 3;
    }
    v[i].first = -cnt;
  }
  sort(v.begin(), v.end());
//  for (int i = 0;i < n;i++){
//    cout << v[i].first << ' ';
//  }cout << '\n';
  for (int i = 0;i < n;i++){
    cout << v[i].second << ' ';
  }cout << '\n';
  return 0;
}
