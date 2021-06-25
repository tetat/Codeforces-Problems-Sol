/// Problem Name: Order Book
/// Problem Link: https://codeforces.com/problemset/problem/572/B

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

int buy[N+1];
int sell[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, s;
  cin >> n >> s;
  for (int i = 0;i < n;i++){
    string a;
    int b, c;
    cin >> a >> b >> c;
    if (a=="B")buy[b] += c;
    else sell[b] += c;
  }
  vector <pair <int, int> > S;
  for (int i = 0, j = 0;i <= N && j < s;i++){
    if (sell[i]){
      S.pb(mp(i, sell[i]));
      j++;
    }
  }
  vector <pair <int, int> > B;
  for (int i = N, j = 0;i >= 0 && j < s;i--){
    if (buy[i]){
      B.pb(mp(i, buy[i]));
      j++;
    }
  }
  for (int i = int(S.size()-1);i >= 0;i--){
    cout << "S" << ' ' << S[i].first << ' ' << S[i].second << '\n';
  }
  for (int i = 0;i < B.size();i++){
    cout << "B" << ' ' << B[i].first << ' ' << B[i].second << '\n';
  }
  return 0;
}
