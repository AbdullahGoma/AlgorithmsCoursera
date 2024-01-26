#include <iostream>
#include <string>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::to_string;

double fibsum(double a[],int n){
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += a[i];
    }
    return sum;
}

double FibBetterEff(int n){
    double a[n];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2;i <= n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    double sum = fibsum(a,n);
    return sum;
}

int main(){
    int n;
    cin >> n;
    double FibResult = FibBetterEff(n);
    string Result = to_string(FibResult);
    cout << Result;
    return 0;
}