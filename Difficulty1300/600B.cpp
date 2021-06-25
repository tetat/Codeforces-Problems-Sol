/// Problem Name: Queries about less or equal elements
/// Problem Link: https://codeforces.com/problemset/problem/600/B

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
  int n, m, el;
  cin >> n >> m;
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  vector <int> b(m);
  for (int i = 0;i < m;i++){
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  for (int i = 0;i < m;i++){
    int L = 0;
    int R = n-1;
    int po = -1;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (a[mid] <= b[i]){
        po = mid;
        L = mid+1;
      }else R = mid-1;
    }
    cout << po+1 << ' ';
  }cout << '\n';
  return 0;
}
