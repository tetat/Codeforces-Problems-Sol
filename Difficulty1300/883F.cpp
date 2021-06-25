/// Problem Name: Lost in Transliteration
/// Problem Link: https://codeforces.com/problemset/problem/883/F

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  set <string> S;
  set <string>::iterator it;
  string s;
  for (int i = 0;i < n;i++){
    cin >> s;
    string in;
    int len = s.size();
    int j = 0;
    while (j < len){
      int L = j;
      while (j < len && s[j]=='k')j++;
      if (j < len && s[j]=='h'){
        in += 'h';
        j++;
      }else {
        for ( ;L < j;L++)in += s[L];
      }
      int cnt = 0;
      while (j < len && s[j]=='u'){
        cnt++;
        j++;
      }
      for (int k = 0;k < cnt*2;k++)in += 'o';
      while (j < len && s[j]!='u' && s[j]!='k'){
        in += s[j];
        j++;
      }
    }
    //cout << in << '\n';
    S.insert(in);
  }
//  cout << '\n';
//  for (it = S.begin();it != S.end();it++){
//    cout << *it << '\n';
//  }
  cout << S.size() << '\n';
  return 0;
}
