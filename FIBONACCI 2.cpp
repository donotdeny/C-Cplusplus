#include<iostream> 
#include<cmath> 
using namespace std; 

long long fib(int n) 
{ 
    long long a = 0, b = 1, c, i; 
    if( n == 0) 
        return a; 
    for(i = 2; i <= n; i++) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 
} 
   
int main () 
{ 
	int t;
	cin >> t;
	while(t--){
  		long long n, count=0;
  		cin >> n;
  		for(int i=0;;i++){
  			if(fib(i)==n){
  				cout << "YES" << endl;
  				count++;
  				break;
			}
			if(fib(i)>n) break;
		}
		if(count==0) cout << "NO" << endl;
	}
  
  return 0; 
} 

