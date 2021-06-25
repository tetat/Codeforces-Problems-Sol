/// Problem Name: Fox and Box Accumulation
/// Problem Link: https://codeforces.com/problemset/problem/388/A

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
  int n, el;
  cin >> n;
  vector <int> ar(n);
  for (int i = 0;i < n;i++){
    cin >> ar[i];
  }
  sort(ar.begin(), ar.end());
  int ans = 0;
  int m = 0;
  while (m < n){
    int h = 0;
    ans++;
    for (int i = 0;i < n;i++){
      if (h <= ar[i]){
        ar[i] = -1;
        h++;
        m++;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
