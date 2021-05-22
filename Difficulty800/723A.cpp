/// Problem Name: The New Year: Meeting Friends
/// Problem Link: https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b){
    int temp = a;
    a = b;
    b = temp;
  }
  if (a < c){
    int temp = a;
    a = c;
    c = temp;
  }
  if (b < c){
    int temp = b;
    b = c;
    c = temp;
  }
  printf("%d\n", (a-b)+(b-c));
  return 0;
}
