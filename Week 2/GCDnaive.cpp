using std::cin;
using std::cout;
using std::endl;

int naiveGCD(int a,int b){
    int best = 0;
    for(int i = 1;i < a + b;i++){
        if((a % i) == 0 && (b % i) == 0){
            best = i;
        }
    }
    return best;
}

int main(){
    int n,m;
    cin >> n >> m;
    int x = naiveGCD(n,m);
    cout << x << endl;
    
}