#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
#define     endl                     '\n'

typedef   long long int               ll;

using namespace std;
ll fibCalc(int n)
{
	vector<long long> fib(n + 1);
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib[n];
}
 
int main()
{
	int n;
	cin >> n;
	cout << fibCalc(n) << endl;
}