/// Problem Name: Left-handers, Right-handers and Ambidexters
/// Problem Link: https://codeforces.com/problemset/problem/950/A

#include <iostream>

using namespace std;

int main()
{
    int l, r, a, m = 0;
    cin >> l >> r >> a;
    if (a == 0){
        if (l == 0 || r == 0){
            m = 0;
        }
        else if (l != 0 && r != 0){
            if (l > r){
                m = r + r;
            }
            else {
                m = l + l;
            }
        }
    }
    else {
        if (l < r){
            if (r - l >= a){
                l += l;
                a += a;
                if ((a + l) % 2 != 0){
                    m = (l + a) - 1;
                }
                else {
                    m = a + l;
                }
            }
            else {
                if ((a + l + r) % 2 != 0){
                    m = (a + l + r) - 1;
                }
                else {
                    m = a + l + r;
                }
            }
        }
        else {
            if (l - r >= a){
                r += r;
                a += a;
                if ((a + r) % 2 != 0){
                    m = (a + r) - 1;
                }
                else {
                    m = a + r;
                }
            }
            else {
                if ((a + l + r) % 2 != 0){
                    m = (a + l + r) - 1;
                }
                else {
                    m = a + l + r;
                }
            }
        }
    }
    cout << m << endl;
    return 0;
}
