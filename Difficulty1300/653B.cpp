/// Problem Name: Bear and Compressing
/// Problem Link: https://codeforces.com/problemset/problem/653/B

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

const int N = 1e4;

int len = 6;
string s = "abcdef";
vector <string> S;
bool mark[6];
int pos[6];


void make(int idx, int lim){
  if (idx == lim){
    string in;
    for (int i = 0;i < lim;i++){
      in += s[pos[i]];
    }
    S.pb(in);
    return;
  }
  for (int i = 0;i < len;i++){
    pos[idx] = i;
    make(idx+1, lim);
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, q;
  cin >> n >> q;
  map <string, string> m;
  for (int i = 0;i < q;i++){
    string a, b;
    cin >> a >> b;
    m[a] = b;
  }
  make(0, n);
  int ans = 0;
  for (int i = 0;i < S.size();i++){
    reverse(S[i].begin(), S[i].end());
    while (S[i].size() > 1){
      int j = S[i].size()-1;
      string tm;
      tm += S[i][j];
      tm += S[i][j-1];
      if (m[tm].empty())break;
      tm = m[tm];
      S[i][j-1] = tm[0];
      S[i].erase(S[i].begin()+j);
    }
    if (S[i]=="a")ans++;
  }
  cout << ans << '\n';
  return 0;
}
