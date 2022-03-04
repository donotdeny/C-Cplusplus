#include <iostream>
#include<string>
using namespace std;

char xor_c(char a, char b) { return (a == b) ? '0' : '1'; }
 
// Helper function to flip the bit
char flip(char c) { return (c == '0') ? '1' : '0'; }
 
// function to convert gray code string
// to binary string
string graytoBinary(string gray)
{
    string binary = "";
 
    // MSB of binary code is same as gray code
    binary += gray[0];
 
    // Compute remaining bits
    for (int i = 1; i < gray.length(); i++) {
        // If current bit is 0, concatenate
        // previous bit
        if (gray[i] == '0')
            binary += binary[i - 1];
 
        // Else, concatenate invert of
        // previous bit
        else
            binary += flip(binary[i - 1]);
    }
 
    return binary;
}
 
// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    while(t--){
    	string str;
    	cin >> str;
    	cout << graytoBinary(str) << endl;
	}
         
    return 0;
}

