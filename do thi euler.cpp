#include<bits/stdc++.h>
using namespace std;

int a[50][50], chuaxet[50];

void init()
{
	for(int i = 1; i <= 10; i++){
		chuaxet[i] = true;
		for(int j = 1; j <= 10; j++){
			cin >> a[i][j];
		}
	}
}

void reInit()
{
	for(int i = 1; i <= 10; i++){
		chuaxet[i] = true;
	}
}

bool degOutdegIn()
{
	for(int i = 1; i <= 10; i++){
		int count1 = 0, count2 = 0;
		for(int j = 1; j <= 10; j++){
			if(a[i][j] == 1) count1++;
		}
		for(int l = 1; l <= 10; l++){
			if(a[l][i] == 1) count2++;
		}
		if(count1 != count2) return false; // neu tai 1 dinh deg ra != deg vao 
	}
	return true;
}

bool halfEuler()
{
	int key1 = 0, key2 = 0, temp1, temp2;
	for(int i = 1; i <= 10; i++){
		int count1 = 0, count2 = 0;
		for(int j = 1; j <= 10; j++){
			if(a[i][j] == 1) count1++;
		}
		for(int l = 1; l <= 10; l++){
			if(a[l][i] == 1) count2++;
		}
		if(count1 - count2 == 1){
			key1++;
			temp1 = i;
		}
		if(count2 - count1 == 0){
			key2++;
			temp2 = i;
		}
	}
	if(key1 != 1 || key2 != 1) return false;
	for(int i = 1; i <= 10; i++){
		if(i != temp1 && i != temp2){
			int count1 = 0, count2 = 0;
			for(int j = 1; j <= 10; j++){
				if(a[i][j] == 1) count1++;
			}
			for(int l = 1; l <= 10; l++){
				if(a[l][i] == 1) count2++;
			}
			if(count1 != count2) return false;  
		}
	}
	return true;
}

void duongDi(int u)
{
	int v, x, top, dCE;
	int stack[50], CE[50];
	top=1; stack[top]=u;dCE=0;
	do {
		v = stack[top];x=1;
		while (x<=10 && a[v][x]==0)
			x++;
		if (x>10) {
			dCE++; CE[dCE]=v; top--;
		}
		else {
			top++; stack[top]=x;
			a[v][x]=0; a[x][v]=0;
		}
	} while(top!=0);
	for(x = dCE; x > 0; x--){
		cout << CE[x] << ' ';
	}

}

int main()
{
	init();
	if(degOutdegIn()) cout << "Do thi Euler" << endl;
	else if(halfEuler()) cout << "Do thi nua Euler" << endl;
	cout << "Duong Di Euler: ";
	duongDi(1);

return 0;
}

