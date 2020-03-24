#include <iostream>
using namespace std;
long long t, n, k;
int main() {
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << (n % 2 == k % 2 && n >= k * k ? "YES\n" : "NO\n");
	}
}
