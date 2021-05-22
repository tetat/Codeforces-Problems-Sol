/// Problem Name: Equation
/// Problem Link: https://codeforces.com/problemset/problem/1269/A

#include <bits/stdc++.h>

using namespace std;

bool isprime(long long n){
  if (n < 2)return false;
  if (n==2)return true;
  if (n%2==0)return false;
  for (long long i = 2;i*i <= n;i++){
    if (n%i==0)return false;
  }
  return true;
}

int main()
{
  int n;
  scanf("%d", &n);
  int a = n;
  int b = a+n;
  while (isprime(a) || isprime(b)){
    a++;
    b++;
  }
  printf("%d %d\n", b, a);
  return 0;
}
