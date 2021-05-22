/// Problem Name: Kyoya and Photobooks
/// Problem Link: https://codeforces.com/problemset/problem/554/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

Long fact(Long n){
  Long ret = 1;
  for (Long i = 1;i <= n;i++){
    ret *= i;
  }
  return ret;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  vector <int> mark(26, 0);
  Long have = 0;
  for (int i = 0;i < s.size();i++){
    if (mark[s[i]-97]==0)have++;
    mark[s[i]-97]++;
  }
  Long tot = 26;
//  Long due = tot-have;
//  Long ans = (have+1)*due;
//  //cout << have << ' ' << due << '\n';
//  ans += fact(have) * have;
  Long ans = Long(s.size()+1) * tot;
  cout << ans - s.size() << '\n';
  return 0;
}
