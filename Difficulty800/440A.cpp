/// Problem Name: Forgotten Episode
/// Problem Link: https://codeforces.com/problemset/problem/440/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;
int mark[N+1];

int main()
{
  //ios::sync_with_stdio(0);
  //cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  scanf("%d", &n);
  for (int i = 1;i < n;i++){
    scanf("%d", &el);
    mark[el]++;
  }
  for (int i = 1;i <= n;i++){
    if (!mark[i]){
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
