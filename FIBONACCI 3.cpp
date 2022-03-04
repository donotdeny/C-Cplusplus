#include<bits/stdc++.h> 
using namespace std; 

long long fib(int n) { 
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
} 
  
int main() 
{ 
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin >> a[i];
		}
		for(int i=0;i<n;i++){
    		int key=0;
    		for(int j=0;;j++){
    			if(fib(j)==a[i]){
    				key=1;
    				break;
				}
				if(fib(j)>a[i]) break;
			}
			if(key==1) cout << a[i] << " ";
		}
		cout << endl;
	}
    
    return 0; 
} 

