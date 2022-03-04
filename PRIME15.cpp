#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(i==1) cout << "1" << " ";
			else	
				for(int j=2;j<=n;j++){
					if(i%j==0) {
						cout << j << " ";
						break;
				}
			}
		}
		
		cout << endl;
	}

return 0;
}

