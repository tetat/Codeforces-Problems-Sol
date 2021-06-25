/// Problem Name: Nastya and Door
/// Problem Link: https://codeforces.com/problemset/problem/1341/B

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

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k, el;
    cin >> n >> k;
    vector <int> v(n+1);
    for (int i = 1;i <= n;i++){
      cin >> v[i];
    }
    vector <int> cum_sum(n+1, 0);
    int sum = 0;
    for (int i = 2;i < n;i++){
      if (v[i-1]<v[i] && v[i]>v[i+1])sum++;
      cum_sum[i] = sum;
    }
//    for (int i = 1;i <= n;i++){
//      cout << cum_sum[i] << ' ';
//    }cout << '\n';
    int po = 1;
    int mx = 0;
    for (int L = 1, R = k;R <= n;L++, R++){
      if (mx < cum_sum[R-1]-cum_sum[L]){
        mx = cum_sum[R-1]-cum_sum[L];
        po = L;
      }
    }
    cout << mx+1 << ' ' << po << '\n';
  }
  return 0;
}
