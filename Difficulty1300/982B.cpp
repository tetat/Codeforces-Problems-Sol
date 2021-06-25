/// Problem Name: Bus of Characters
/// Problem Link: https://codeforces.com/problemset/problem/982/B

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <pair <int, int> > v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i+1));
  }
  string s;
  cin >> s;
  sort(v.begin(), v.end());
  int len = n+n;
  stack <int> S;
  for (int i = 0, j = 0;i < len;i++){
    if (s[i]==48){
      S.push(v[j].second);
      cout << v[j].second << ' ';
      j++;
    }else {
      cout << S.top() << ' ';
      S.pop();
    }
  }cout << '\n';
  return 0;
}
