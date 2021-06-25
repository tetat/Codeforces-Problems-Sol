/// Problem Name: Minimum Ternary String
/// Problem Link: https://codeforces.com/problemset/problem/1009/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  vector <int> zero;
  int one = 0;
  int two = 0;
//  for (int i = 0;i < len;i++){
//    if (s[i] == '1')one++;
//    if (s[i] == '2')two++;
//  }
  int it = 0;
  int cnt = 0;
  int sum = 0;
  while (it < len){
    if (s[it]=='0')cnt++;
    else if (s[it]=='1')one++;
    else {
      zero.push_back(cnt);
      sum += cnt;
      cnt = 0;
    }
    it++;
  }
  //if (cnt){
    zero.push_back(cnt);
    sum += cnt;
  //}
  len = zero.size();
  if (len && sum){
    it = 0;
    while (zero[0]--){
      s[it] = '0';
      it++;
    }
    //cout << one << endl;
    while (one--){
      s[it] = '1';
      it++;
    }
    for (int i = 1;i < len;i++){
      s[it] = '2';
      it++;
      while (zero[i]--){
        s[it] = '0';
        it++;
      }
    }
  }
  else sort(s.begin(), s.end());
  cout << s << '\n';
  return 0;
}
