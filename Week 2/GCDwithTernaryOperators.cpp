#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}


int main(){
    int n,m;
    cin >> n >> m;
    int x = gcd(n,m);
    cout << x << endl;
    
}