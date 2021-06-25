/// Problem Name: Bash's Big Day
/// Problem Link: https://codeforces.com/problemset/problem/757/B

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

vector <int> cnt(N+1, 0);

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    cnt[el]++;
  }
  int ans = 1;
  for (int i = 2;i <= N;i++){
    int cur = 0;
    for (int j = i;j <= N;j += i){
      cur += cnt[j];
    }
    ans = max(ans, cur);
  }
  cout << ans << '\n';
  return 0;
}
