/// Problem Name: Perfect Squares
/// Problem Link: https://codeforces.com/problemset/problem/914/A

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
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  //cout << int(sqrt(1)) << '\n';
  for (int i = n-1;i >= 0;i--){
    int tmp = v[i];
    //if (tmp==0){continue;}
    if ((int(sqrt(tmp)) * int(sqrt(tmp)) != tmp)){
      cout << v[i] << '\n';
      break;
    }
  }
  return 0;
}
