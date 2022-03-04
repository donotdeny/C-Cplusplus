#include<bits/stdc++.h>
using namespace std;

int arr[101][101];

int shouldTurn(int row, int col, int height, int width){
    int same = 1;
    if(row > height-1-row) row = height-1-row, same = 0;
    if(col >= width-1-col) col = width-1-col, same = 0;
    row -= same;
    if(row==col) return 1;
    return 0;
}

int directions[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
void printSpiral(int height, int width){
    int directionIdx=0, i=0;
    int curRow=0, curCol=0;
    for(i=0; i<height*width; i++){
        cout << arr[curRow][curCol] << ' ';
        if(shouldTurn(curRow, curCol, height, width)){
            directionIdx = (directionIdx+1)%4;
        }
        curRow += directions[directionIdx][0];
        curCol += directions[directionIdx][1];
    }
    cout << endl; 
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		printSpiral(n, m);
	}

return 0;
}

