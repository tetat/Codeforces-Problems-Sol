/// Problem Name: Element Extermination
/// Problem Link: https://codeforces.com/problemset/problem/1375/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int p[101];
bool mark[101];
int ar[101];

void test(int id, int n){
  if (id == n){
    for (int i = 0;i < n;i++){
      cout << ar[p[i]] << ' ';
    }cout << '\n';
    return;
  }
  for (int i = 0;i < n;i++){
    if (mark[i] == false){
      mark[i] = true;
      p[id] = i;
      test(id+1, n);
      mark[i] = false;
    }
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> v(n);
    vector <pair <int, int> > pr(n);
    for (int i = 0;i < n;i++){
      // cin >> ar[i];
      cin >> v[i];
      pr[i].first = v[i];
      pr[i].second = i;
    }
    //test(0, n);
    sort(pr.begin(), pr.end());
    vector <int> lr(n, -1);
    vector <int> m(n, 0);
    for (int i = 0;pr[i].first < v[n-1];i++){
      int l = -1;
      int R = -1;
      for (int j = pr[i].second+1;j < n-1;j++){
        if (m[j]==0){
          if (pr[i].first < v[j]){
            m[j] = 1;
            v[j] = 0;
            if (j == pr[i].second+1)l = j;
          }else {
            R = j;
            break;
          }
        }else {
          if (lr[j] >= 0)j = lr[j]-1;
          else break;
        }
      }
      if (l >= 0)lr[l] = R;
    }
    string ans = "YES";
    int lst = v[n-1];
    for (int i = n-2;i >= 0;i--){
      if (lst < v[i]){
        ans = "NO";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
