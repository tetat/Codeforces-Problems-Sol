/// Problem Name: Puzzle Pieces
/// Problem Link: https://codeforces.com/problemset/problem/1345/A

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
    int n, m;
    cin >> n >> m;
    if (n==1 || m==1 || (n==2 && m==2))cout << "yes" << '\n';
    else cout << "no" << '\n';
  }
  return 0;
}
