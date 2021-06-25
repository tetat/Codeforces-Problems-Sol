/// Problem Name: Lost Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1167/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

const int tot = 720;
int ar[] = {4, 8, 15, 16, 23, 42};
vector <vector <int> > per(tot);
int po[10];
bool mark[10];
int len;

void all_per(int id, int n){
  if (id == n){
    for (int i = 0;i < 6;i++){
      per[len].pb(ar[po[i]]);
      //cout << per[len][i] << ' ';
    }//cout << '\n';
    len++;
    return;
  }
  for (int i = 0;i < 6;i++){
    if (!mark[i]){
      po[id] = i;
      mark[i] = true;
      all_per(id+1, n);
      mark[i] = false;
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;

  //all_per(0, 6);

  vector <pair <int, int> > q;
  q.pb(mp(1, 2));
  q.pb(mp(2, 3));
  q.pb(mp(3, 4));
  q.pb(mp(4, 5));
  vector <int> prod(4);
  for (int i = 0;i < q.size();i++){
    cout << "?" << ' ' << q[i].first << ' ' << q[i].second << endl;
    cin >> prod[i];
  }
//  for (int i = 0;i < prod.size();i++){
//    cout << prod[i] << ' ';
//  }cout << endl;

  all_per(0, 6);

  vector <int> ans;
  for (int i = 0;i < len;i++){
    bool found = true;
    for (int j = 0;j < 4;j++){
      if ((per[i][j] * per[i][j+1]) == prod[j])continue;
      found = false;
      break;
    }
    if (found){
      for (int j = 0;j < 6;j++){
        ans.pb(per[i][j]);
      }
      //cout << i+1 << endl;
      break;
    }
  }
  cout << "!";
  for (int i = 0;i < ans.size();i++){
    cout << ' ' << ans[i];
  }cout << endl;
  return 0;
}
