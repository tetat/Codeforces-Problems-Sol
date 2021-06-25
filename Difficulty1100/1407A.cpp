/// Problem Name: Ahahahahahahahaha
/// Problem Link: https://codeforces.com/problemset/problem/1407/A

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> a(n);
    int zero = 0;
    int one = 0;
    for (int i = 0;i < n;i++){
      cin >> a[i];
      if (a[i])one++;
      else zero++;
    }
    if (zero >= (n/2)){
      cout << zero << '\n';
      while (zero--)cout << 0 << ' ';
    }else {
      if (one%2)one--;
      cout << one << '\n';
      while (one--)cout << 1 << ' ';
    }
    cout << '\n';
  }
  return 0;
}
