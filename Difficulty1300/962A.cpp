/// Problem Name: Equator
/// Problem Link: https://codeforces.com/problemset/problem/962/A

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

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v(n);
  Long sum = 0;
  for (int i = 0;i < n;i++){
    cin >> v[i];
    sum += v[i];
  }
  Long half = 0;
  Long rng = (sum+1)/2;
  int ans = 0;
  for (int i = 0;i < n;i++){
    half += v[i];
    if (rng <= half){
      ans = i+1;
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
