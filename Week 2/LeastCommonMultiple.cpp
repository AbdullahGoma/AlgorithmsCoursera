#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long long gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    int n,m;
    cin >> n >> m;
    int x = lcm(n,m);
    cout << x;
    
}