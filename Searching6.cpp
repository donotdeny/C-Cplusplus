#include<iostream>
using namespace std;

int lengthMin(int a)
{
	if(a>0) return a;
	return -a;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, min=9999999, temp;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j){
					int sum=a[i]+a[j];
					if(min>lengthMin(sum)){
						min = lengthMin(sum);
						temp = sum;
					}
				}
			}
		}
		cout << temp << endl;
	}
	

return 0;
}

