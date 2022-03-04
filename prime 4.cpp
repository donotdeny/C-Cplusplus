#include<iostream>
#include<math.h>
using namespace std;

int prime(int n)
{
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) count++;
	}if(count==0) return 1;
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(i==1) cout << "1" << " ";
			else if(i%2==0) cout << "2" << " ";
				 else if(prime(i)) cout << i << " ";
				 	  else {
				 			for(int j=2;j<i;j++){
				 				if(i%j==0&&prime(j)) {
				 					cout << j << " ";
				 					break;
								 }
							 }
						 }
		}
		cout << endl;
	}

return 0;
}

