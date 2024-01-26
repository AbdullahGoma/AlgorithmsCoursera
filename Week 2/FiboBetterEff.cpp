#include <iostream>
using std::endl;
using std::cin;
using std::cout;

double FibBetterEff(int n){
    double a[n];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2;i <= n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}

int main(){
    int n;
    cin >> n;
    double FibResult = FibBetterEff(n);
    cout <<FibResult;
    return 0;
}