#include <iostream>
using namespace std;

int main(){
	long long tc;
	cin >> tc;
	while(tc--)
    {
        long long x,y,a,b;
        cin >> x >> y >> a >> b;
        if((y-x) % (a+b) == 0)
        {
            cout << (y-x)/(a+b) << endl;
        }
        else
            cout << -1 << endl;
    }

	return 0;
}
