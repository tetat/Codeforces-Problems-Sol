/// Problem Name: Applejack and Storages
/// Problem Link: https://codeforces.com/problemset/problem/1393/B

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

int cnt[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  int p;
  for (int i = 0;i < n;i++){
    cin >> p;
    cnt[p]++;
  }
  int four = 0;
  int two = 0;
  for (int i = 1;i <= N;i++){
    int tm = cnt[i];
    four += tm/4;
    tm = tm%4;
    two += tm/2;
  }
  char ch;
  int q;
  cin >> q;
  while (q--){
    cin >> ch >> p;
    if (ch=='-'){
      int tm = cnt[p];
      four -= tm/4;
      tm = tm%4;
      two -= tm/2;
      cnt[p]--;
      tm = cnt[p];
      four += tm/4;
      tm = tm%4;
      two += tm/2;
    }else {
      int tm = cnt[p];
      four -= tm/4;
      tm = tm%4;
      two -= tm/2;
      cnt[p]++;
      tm = cnt[p];
      four += tm/4;
      tm = tm%4;
      two += tm/2;
    }
    //cout << two << ' ' << four << '\n';
    if (four > 1 || (four && two > 1))cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
