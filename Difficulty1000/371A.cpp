/// Problem Name: K-Periodic Array
/// Problem Link: https://codeforces.com/problemset/problem/371/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int gc(int a, int b){
  if (b==0)return a;
  else return gc(b, a%b);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <int> v[n/k];
  int tot_one = 0;
  int tot_two = 0;
  for (int i = 1, j = 0;i <= n;i++){
    cin >> el;
    v[j].pb(el);
    if (i%k==0)j++;
    el==1?tot_one++:tot_two++;
  }
  int len = n/k;
  int tot_cng = 0;
  for (int i = 0;i < k;i++){
    int one = 0;
    int two = 0;
    for (int j = 0;j < len;j++){
      v[j][i]==1?one++:two++;
    }
    tot_cng += min(one, two);
  }
  //cout << tot_cng << '\n';
  cout << min(tot_cng, min(tot_one, tot_two)) << '\n';
  return 0;
}
