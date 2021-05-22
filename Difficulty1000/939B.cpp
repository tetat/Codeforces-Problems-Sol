/// Problem Name: Hamster Farm
/// Problem Link: https://codeforces.com/problemset/problem/939/B

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
  Long n, k, el;
  vector <Long> v;
  cin >> n >> k;
  Long mx = -1;
  Long type = 0;
  Long tot = 0;
  for (int i = 0;i < k;i++){
    cin >> el;
    if ((n/el)*el > mx){
      mx = (n/el)*el;
      type = i+1;
      tot = n/el;
    }
  }
  cout << type << ' ' << tot << '\n';
  return 0;
}
