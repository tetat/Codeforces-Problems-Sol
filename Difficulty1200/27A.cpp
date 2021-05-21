/// Problem Name: Next Test
/// Problem Link: https://codeforces.com/problemset/problem/27/A

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
  int n;
  cin >> n;
  vector <int> m(3002, 0);
  for (int i = 0;i < n;i++){
    int el;cin >> el;
    m[el]++;
  }
  for (int i = 1;i <= 3001;i++){
    if (m[i]==0){
      cout << i << '\n';
      break;
    }
  }
  return 0;
}
