/// Problem Name: Prime Matrix
/// Problem Link: https://codeforces.com/problemset/problem/271/B

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

const int N = 2*1e5;

bool mark[N+1];
vector <int> p;

void sieve(){
  mark[0] = true;
  mark[1] = true;
  for (int i = 4;i <= N;i += 2){
    mark[i] = true;
  }
  p.pb(2);
  int lim = 1000;
  for (int i = 3;i <= N;i += 2){
    if (mark[i]==false){
      p.pb(i);
      if (i <= lim){
        for (int j = i*i;j <= N;j += i+i){
          mark[j] = true;
        }
      }
    }
  }
}

int find_prime(int num){
  int L = 0;
  int R = p.size();
  int ret;
  while (L <= R){
    int mid = L + (R-L)/2;
    if (p[mid] >= num){
      ret = p[mid];
      R = mid-1;
    }else L = mid+1;
  }
  return ret;
}

//int mat[501][501];
int cal[501][501];

int main()
{
  FastIO();
  int tc, ca = 0;
  sieve();
  int n, m, el;
  cin >> n >> m;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      if (mark[el]){
        cal[i][j] = find_prime(el)-el;
      }
    }
  }
  int ans = INT_MAX;
  for (int i = 0;i < n;i++){
    int cnt = 0;
    for (int j = 0;j < m;j++){
      cnt += cal[i][j];
    }
    ans = min(ans, cnt);
  }
  for (int i = 0;i < m;i++){
    int cnt = 0;
    for (int j = 0;j < n;j++){
      cnt += cal[j][i];
    }
    ans = min(ans, cnt);
  }
  cout << ans << '\n';
  return 0;
}
