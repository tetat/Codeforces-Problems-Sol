/// Problem Name: Vasya and Golden Ticket
/// Problem Link: https://codeforces.com/problemset/problem/1030/C

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

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  string s;
  cin >> s;
  int sum = 0;
  string ans = "NO";
  int len = n-1;
  while (len >= 0 && s[len]==48)len--;
  if (len<0)ans = "YES";
  for (int i = 0;i < len;i++){
    sum += int(s[i]-48);
    int tm = 0;
    for (int j = i+1;j < n;j++){
      tm += int(s[j]-48);
      if (tm==sum)tm = 0;
    }
    if (tm==0){
      ans = "YES";
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
