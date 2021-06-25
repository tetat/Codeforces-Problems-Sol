/// Problem Name: Watchmen
/// Problem Link: https://codeforces.com/problemset/problem/650/A

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
  map <int, int> x;
  map <int, int> y;
  map <int, int>::iterator it1;
  map <pair <int, int>, int> cut;
  map <pair <int, int>, int>::iterator it2;
  for (int i = 0;i < n;i++){
    int a, b;
    cin >> a >> b;
    x[a]++;
    y[b]++;
    cut[mp(a,b)]++;
  }
  Long ans = 0;
  Long two = 2;
  for (it1 = x.begin();it1 != x.end();it1++){
    Long tm = it1->second;
    ans += (tm*(tm-1))/two;
  }
  for (it1 = y.begin();it1 != y.end();it1++){
    Long tm = it1->second;
    ans += (tm*(tm-1))/two;
  }
  for (it2 = cut.begin();it2 != cut.end();it2++){
    Long tm = it2->second;
    ans -= (tm*(tm-1))/two;
  }
  cout << ans << '\n';
  return 0;
}
