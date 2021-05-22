/// Problem Name: CopyCopyCopyCopyCopy
/// Problem Link: https://codeforces.com/problemset/problem/1325/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    set <int> S;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> el;
      S.insert(el);
    }
    cout << S.size() << '\n';
  }
  return 0;
}
