/// Problem Name: Integer Points
/// Problem Link: https://codeforces.com/problemset/problem/1248/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

vector <int> p;
bool found(int L, int R, int num){
  while (L <= R){
    int mid = L + (R-L)/2;
    if (p[mid] > num)L = mid+1;
    else if (p[mid] < num)R = mid-1;
    else return true;
  }
  return false;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, m, el;
    cin >> n;
    map <int, int> mark;
    vector <Long> a(2, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      el%2?a[1]++:a[0]++;
    }
    //sort(p.begin(), p.end());
    cin >> m;
    vector <int> q;
    vector <Long>b(2, 0);
    int ans = 0;
    for (int i = 0;i < m;i++){
      cin >> el;
      el%2?b[1]++:b[0]++;
    }
    cout << (a[0]*b[0] + a[1]*b[1]) << '\n';
    //p.clear();
  }
  return 0;
}
