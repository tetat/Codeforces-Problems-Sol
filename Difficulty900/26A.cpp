/// Problem Name: Almost Prime
/// Problem Link: https://codeforces.com/problemset/problem/26/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

const int len = 3000;
bool mark[len+1];
vector <int> p;

void sieve(){
  p.pb(2);
  for (int i = 3;i <= len;i += 2){
    if (mark[i]==false){
      p.pb(i);
      for (int j = i*i;j <= len;j += i+i){
        mark[j] = true;
      }
    }
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  sieve();
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 2;i <= n;i++){
    int tm = i;
    int cnt = 0;
    for (int j = 0;j < p.size() && p[j] <= tm;j++){
      if (tm%p[j]==0){
        cnt++;
        while (tm%p[j]==0)tm /= p[j];
      }
    }
    if (tm > 1)cnt++;
    if (cnt==2)ans++;
  }
  cout << ans << '\n';
  return 0;
}
