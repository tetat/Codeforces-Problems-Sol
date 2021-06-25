/// Problem Name: Ternary Logic
/// Problem Link: https://codeforces.com/problemset/problem/136/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

string d_to_t(int n){
  string s;
  while (n){
    s += (n%3)+48;
    n /= 3;
  }
  //reverse(s.begin(), s.end());
  return s;
}

Long t_to_d(string &s){
  Long len = s.size();
  Long num = 0;
  Long three = 3;
  for (Long i = 0;i < len;i++){
    Long tm = s[i]-48;
    num += pow(three, i) * tm;
  }
  return num;
}

int main()
{
  faster();
  int tc, ca = 0;
  int a, c;
  cin >> a >> c;
  string s_a = d_to_t(a);
  string s_c = d_to_t(c);
  int len = max(s_a.size(), s_c.size());
  for (int i = s_a.size();i < len;i++)s_a += '0';
  for (int i = s_c.size();i < len;i++)s_c += '0';
  string s_b;
  for (int i = 0;i < len;i++){
    if (s_c[i]=='0'){
      if (s_a[i]=='0')s_b += '0';
      else if (s_a[i]=='1')s_b += '2';
      else s_b += '1';
    }else if (s_c[i]=='1'){
      if (s_a[i]=='2')s_b += '2';
      else if (s_a[i]=='1')s_b += '0';
      else s_b += '1';
    }else {
      if (s_a[i]=='1')s_b += '1';
      else if (s_a[i]=='2')s_b += '0';
      else s_b += '2';
    }
  }
  cout << t_to_d(s_b) << '\n';
  //cout << s_b << '\n';
  //cout << s_a << ' ' << s_c << '\n';
  return 0;
}
