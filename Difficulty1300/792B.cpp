/// Problem Name: Counting-out Rhyme
/// Problem Link: https://codeforces.com/problemset/problem/792/B

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  vector <int> c;
  for (int i = 1;i <= n;i++){
    c.pb(i);
  }
  int in;
  int cur = 0;
  for (int i = 0;i < k;i++){
    cin >> in;
    cur += (in%n)?in%n:n;
    cur = cur % n;
    cout << c[cur] << ' ';
    c.erase(c.begin()+cur);
    n--;
  }cout << '\n';
  return 0;
}
