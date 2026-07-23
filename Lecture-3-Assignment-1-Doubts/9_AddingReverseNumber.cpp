#include<iostream>
using namespace std;
long long int revno(long long int a){
	long long int newn=0;
	while(a!=0){
		int digit=a%10;
		newn=newn*10+digit;
		a=a/10;
		
	}
	return newn;
}

int main () {
	int n;
	cin>>n;
	long long int a,b;
	while(n!=0){
		cin>>a>>b;
		long long int ans=revno((revno(a)+revno(b)));
		cout<<ans<<endl;
		n--;
	}
	return 0;
}