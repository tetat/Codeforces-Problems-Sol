/// Problem Name: Weird Subtraction Process
/// Problem Link: https://codeforces.com/problemset/problem/946/B

#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    while (1){
        if (a == 0 || b == 0){
            break;
        }
        else {
            if (a >= 2*b){
                a %= 2*b;
            }
            else {
                if (b >= 2*a){
                    b %= 2*a;
                }
                else {
                    break;
                }
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
