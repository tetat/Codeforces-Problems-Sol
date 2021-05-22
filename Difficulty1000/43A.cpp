/// Problem Name: Football
/// Problem Link: https://codeforces.com/problemset/problem/43/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

int dp[110];
int inf = 101;

int main()
{
  faster()
  int t, ca = 0;
  int n;
  cin >> n;
  string in;
  map <SI> m;
  map <SI>::iterator it;
  for (int i = 0;i < n;i++){
    cin >> in;
    m[in]++;
  }
  it = m.begin();
  int mx = 0;
  string ans;
  while (it != m.end()){
    if (it->second > mx){
      mx = it->second;
      ans = it->first;
    }
    it++;
  }
  cout << ans << newline;
  return 0;
}
