/// Problem Name: New Year and the Sphere Transmission
/// Problem Link: https://codeforces.com/problemset/problem/1091/C

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
  Long n;
  cin >> n;
  set <Long> ans;
  ans.insert(1);
  ans.insert((n*(n+1))/2);
  vector <Long> d;
  for (Long i = 2;i*i <= n;i++){
    if (n%i==0){
      d.pb(i);
      if (i*i != n)d.pb(n/i);
    }
  }
  for (int i = 0;i < d.size();i++){
    Long tot = (n - (d[i]-2)) * ((n/d[i])/2);
    if ((n/d[i])%2)tot += (n - (d[i]-2)) / 2;
    ans.insert(tot);
  }
  set <Long>::iterator it;
  for (it = ans.begin();it != ans.end();it++){
    cout << *it << ' ';
  }cout << '\n';
  return 0;
}
