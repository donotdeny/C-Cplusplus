#include<iostream>
#include<math.h>
using namespace std;

int prime(int n)
{
	if(n<2) return 0;
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) count++;
	}if(count==0) return 1;
	return 0;
}

int GCD(int a, int b)
{
	if(a<0) a*=-1;
	if(b<0) b*=-1;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

int coprime(int a, int b)
{
	if(GCD(a,b)==1) return 1;
	return 0;
}

int main()
{
	int t, count;
	cin >> t;
	while(t--){
		count = 0;
		int x;
		cin >> x;
		for(int i=1;i<x;i++){
			if(coprime(i,x)) count++;
		}
		if(prime(count)) cout << "1" << endl;
		else cout << "0" << endl;
	}
	
return 0;
}

