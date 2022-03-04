#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, j=0, count=0,count1=0;
		cin >> n;
		int a[100];
		for(int i=2;i<=n;i++){
			while(n%i==0){
				a[j]=i;
				j++;
				n/=i;
			}
		}
		for(int i=0;i<j;i++){
			int k=0;
			for(int l=0;l<i;l++){
				if(a[i]==a[l]) k=1;
			}
			if(k!=1) count++;
			count1++;
		}
		if(count==3&&count1==3) cout << "1" << endl;
		else cout << "0" << endl;
    }
    
    return 0;
}

