/// Problem Name: Phone Numbers
/// Problem Link: https://codeforces.com/problemset/problem/898/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool check(string &a, string &b){
  for (int i = a.size()-1, j = b.size()-1;i >= 0 && j >= 0;i--, j--){
    if (a[i] != b[j])return false;
  }
  return true;
}

bool cmp(string &a, string &b){
  return a.size() > b.size();
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  map <string, vector <string> > m;
  map <string, vector <string> >::iterator it;
  for (int i = 0;i < n;i++){
    string s;
    int k;
    cin >> s >> k;
    for (int j = 0;j < k;j++){
      string ad;cin >> ad;
      m[s].pb(ad);
    }
  }
  cout << int(m.size()) << '\n';
  for (it = m.begin();it != m.end();it++){
    for (int i = 0;i < it->second.size();i++){
      if (it->second[i] != "-1"){
        for (int j = 0;j < it->second.size();j++){
          if (i != j && it->second[j] != "-1" && it->second[i].size() >= it->second[j].size()){
            if (check(it->second[i], it->second[j])){
              it->second[j] = "-1";
            }
          }
        }
      }
    }
    int tot = 0;
    for (int i = 0;i < it->second.size();i++){
      if (it->second[i] != "-1")tot++;
    }
    cout << it->first << ' ' << tot;
    for (int i = 0;i < it->second.size();i++){
      if (it->second[i] != "-1")cout << ' ' << it->second[i];
    }cout << '\n';
  }
  return 0;
}
