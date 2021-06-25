/// Problem Name: K for the Price of One (Easy Version)
/// Problem Link: https://codeforces.com/problemset/problem/1282/B1

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

struct data {
  vector <pair <int, int> > v;
};

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, p, k;
    cin >> n >> p >> k;
    vector <int> a(n+1, 0);
    for (int i = 1;i <= n;i++){
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    data S[k];
    for (int i = n;i >= k;i--){
      S[i%k].v.pb(mp(a[i], i));
    }
    for (int i = 0;i < k;i++){
      for (int j = 0;j < S[i].v.size();j++){
        if (j)S[i].v[j].first += S[i].v[j-1].first;
      }
    }
    int sum = 0;
    int ans = 0;
    for (int i = 1;i <= n;i++){
      sum += a[i];
      a[i] = sum;
      if (sum <= p)ans = i;
    }
//    for (int i = 0;i < k;i++){
//      for (int j = 0;j < S[i].v.size();j++){
//        cout << S[i].v[j].first << ' ';
//      }cout << '\n';
//    }
    for (int i = 0;i < k;i++){
      int cut = 0;
      for (int j = 0;j < S[i].v.size();j++){
        int L = j;
        int R = S[i].v.size()-1;
        int m = L-1;
        //cout << cut << '\n';
        //cout << L << ' ' << R << '\n';
        while (L <= R){
          int mid = L + (R-L)/2;
          if ((S[i].v[mid].first-cut) <= p){
            m = mid;
            L = mid+1;
          }else R = mid-1;
        }
        //cout << j << ' ' << m << '\n';
        if (j <= m){
          int cnt = ((m-j)+1)*k;
          L = 1;
          R = (S[i].v[m].second-k);
          //cout << cnt << '\n';
          //cout << L << ' ' << R << '\n';
          int tp = p - (S[i].v[m].first-cut);
          //cout << S[i].v[m].first << ' ' << cut << '\n';
          //cout << tp << '\n';
          m = 0;
          while (L <= R){
            int mid = L + (R-L)/2;
            if (tp >= a[mid]){
              m = mid;
              L = mid+1;
            }else R = mid-1;
          }
          //cout << m << '\n';
          cnt += m;
          ans = max(ans, cnt);
        }
        cut = S[i].v[j].first;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
