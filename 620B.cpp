#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,c[10]={6,2,5,5,4,5,6,3,7,6},s=0;
    cin>>a>>b;
    for(i=a;i<=b;i++){
    j=i;
    while (j>0){
    s=s+c[j%10];
    j=j/10;
    }
}
    cout<<s << endl;
    return 0;
}
