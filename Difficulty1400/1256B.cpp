/// Problem Name: Minimize the Permutation
/// Problem Link: https://codeforces.com/problemset/problem/1256/B

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
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> m(n, 0);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    int k = n-1;
    for (int i = 0;i < n;i++){
      if (m[i]==0){
        int mn = n+1;
        int p = 0;
        for (int j = i;j < n;j++){
          if (mn > v[j]){
            mn = v[j];
            p = j;
          }
        }
        for (int j = p-1;j >= i && k > 0;j--){
          swap(v[j], v[j+1]);
          m[j] = 1;
          k--;
        }
      }
    }
    for (int i = 0;i < n;i++){
      cout << v[i] << ' ';
    }cout << '\n';
  }
  return 0;
}
