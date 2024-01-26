#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }
    if (b % a == 0)
        return a;
    return gcd(a, b - a);
}


int main(){
    int n,m;
    cin >> n >> m;
    int x = gcd(n,m);
    cout << x << endl;
    
}