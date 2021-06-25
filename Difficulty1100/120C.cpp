/// Problem Name: Winnie-the-Pooh and honey
/// Problem Link: https://codeforces.com/problemset/problem/120/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  //faster();
  int tc, ca = 0;
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n, k, el;
  cin >> n >> k;
  vector <int> v;
  int pig = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el < k)pig += el;
    else pig += (el - min((el/k)*k, k*3));
  }
  cout << pig << '\n';
  return 0;
}
