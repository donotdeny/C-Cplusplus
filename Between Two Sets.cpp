#include<iostream>
using namespace std;

int main()
{
	size_t count = 0;
	int sizeA, sizeB;
	cin >> sizeA >> sizeB;
	int a[sizeA], b[sizeB];
	for(size_t i=0;i<sizeA;i++){
		cin >> a[i];
	}
	for(size_t i=0;i<sizeB;i++){
		cin >> b[i];
	}	
	for(size_t considered = a[sizeA-1];considered <= b[0];considered++){
		int key = 0;
		for(size_t i = 0;i < sizeA;i++){
			if(considered % a[i] != 0) key = 1;
		}
		for(size_t i = 0;i < sizeB;i++){
			if(b[i] % considered != 0) key = 1;
		}
		if(key != 1) count++;
	}
	cout << count;

return 0;
}

