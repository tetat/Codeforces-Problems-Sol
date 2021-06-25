/// Problem Name: Rotation Matching
/// Problem Link: https://codeforces.com/problemset/problem/1365/C

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
  int n;
  cin >> n;
  vector <pair <int, int> > a(n);
  vector <int> b(n);
  for (int i = 0;i < n;i++){
    cin >> a[i].first;
    a[i].second = i;
  }
  for (int i = 0;i < n;i++){
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  vector <int> mark(n+1);
  for (int i = 0;i < n;i++){
    int L = 0;
    int R = n-1;
    int p = -1;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (a[mid].first < b[i])L = mid+1;
      else if (a[mid].first > b[i])R = mid-1;
      else {
        p = a[mid].second;
        break;
      }
    }
    //cout << p << ' ';
    if (i <= p)mark[p-i]++;
    else mark[(n-i)+p]++;
  }//cout << '\n';
  int ans = 0;
  for (int i = 0;i <= n;i++){
    ans = max(ans, mark[i]);
  }
  cout << ans << '\n';
  return 0;
}
