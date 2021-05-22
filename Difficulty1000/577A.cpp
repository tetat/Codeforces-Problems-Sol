/// Problem Name: Multiplication Table
/// Problem Link: https://codeforces.com/problemset/problem/577/A

#include <bits/stdc++.h>

using namespace std;

long long n, x;
//vector <long long> v;

int factors(){
  //cout << x << endl;
  int ret = 0;
  for (long long i = 1;i*i <= x && i <= n;i++){
    if (x%i == 0){
      if (i*i == x){
        ret++;
      }
      else {
        if (x/i <= n)ret += 2;
      }
    }
  }
  return ret;
}

int main()
{
  cin >> n >> x;
  cout << factors() << '\n';
  return 0;
}
