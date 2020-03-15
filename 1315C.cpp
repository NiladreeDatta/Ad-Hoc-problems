#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		int a[200];
		int n;
		cin>>n;
		for (int i=0; i<n; i++){
			cin>>a[i];
		}

		bool check1=1;
		for(int i=0; i<n;i++){
			bool check=false;
			for (int k=a[i]+1; k<=2*n ; k++){
				check=true;
				for (int j=0; j<n+i; j++) {
					if(a[j]==k) {
						check=false;
						break;
					}
				}
				if(check) {
					a[i+n]=k;
					break;
				}
			}

			if(!check){
				cout<<-1;
				check1=0;
				break;
			}
		}

		for(int i=0; i<n && check1; i++)
			cout<<a[i]<<" "<<a[n+i]<<" ";

		cout<<endl;
	}

	return 0;
}
