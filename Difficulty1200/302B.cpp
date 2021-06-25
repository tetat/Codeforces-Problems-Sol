/// Problem Name: Eugeny and Play List
/// Problem Link: https://codeforces.com/problemset/problem/302/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  vector <int> v;
  int sum = 0;
  int ci, ti;
  for (int i = 0;i < n;i++){
    cin >> ci >> ti;
    sum += ci*ti;
    v.pb(sum);
  }
//  for (int i = 0;i < n;i++)cout << v[i] << ' ';cout << '\n';
  for (int i = 0;i < m;i++){
    cin >> el;
    int low = 0;
    int high = n-1;
    int cur = -1;
    while (low <= high){
      int mid = low + (high-low)/2;
      if (el <= v[mid]){
        cur = mid+1;
        high = mid-1;
      }else low = mid+1;
    }
    cout << cur << '\n';
  }
  return 0;
}
