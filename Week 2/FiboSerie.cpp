#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int FibRecurse(int n){
    if(n <= 1){
        return n;
    }else{
        return FibRecurse(n-1) + FibRecurse(n-2);
    }
}

int main(){
    int n;
    cin >> n;
    int FibResult = FibRecurse(n);
    cout << FibResult << endl;
    return 0;
}