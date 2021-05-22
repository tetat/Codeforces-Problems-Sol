/// Problem Name: Bear and Big Brother
/// Problem Link: https://codeforces.com/problemset/problem/791/A

#include <stdio.h>

int main()
{
    int a, b, y = 0;
    scanf("%d %d", &a, &b);
    while (a <= b){
        a = a*3;
        b = b*2;
        y = y+1;
    }
    printf("%d\n",y);
    return 0;
}
