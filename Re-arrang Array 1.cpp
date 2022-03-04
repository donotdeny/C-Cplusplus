#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[1000];
		for(int i=0;i<n;i++){
			a[i]=-1;
		}
		for(int i=0;i<n;i++){
			long long c;
			cin>>c;
			if(c<n&&c>=0) a[c]=c;
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

return 0;
}

