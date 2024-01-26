#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long maxpairwiseproductfaster(const vector<int>& numbers){
    int maxIndex = -1;
    int n = numbers.size();
    for(int i = 0;i < n;i++){
        if((maxIndex == -1) || (numbers[i] > numbers[maxIndex]))
            maxIndex = i;
    }
    int secMax = -1;
    for(int i = 0;i < n;i++){
        if(i != maxIndex && ((secMax == -1) || (numbers[i] > numbers[secMax])))
            secMax = i;
    }
    return ((long long)numbers[maxIndex]) * numbers[secMax];
}

int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0;i < n;i++){
        cin >> numbers[i];
    }
    long long result = maxpairwiseproductfaster(numbers);
    cout << result << "\n";
    return 0;
}