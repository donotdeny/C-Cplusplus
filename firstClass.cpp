#include<iostream>
using namespace std;

class SinhVien{
	friend void sapXep(SinhVien sv[], int n);
private:
	char ID[30];
	char name[30];
	int age;
	int gioiTinh;
	float point;
	static int count;
public:
	void nhap();
	void hienThi();
};

void SinhVien::nhap(){
	cout << "Nhap MA SV:" << endl; cin >> ID;
	cout << "Nhap ten:" << endl; cin >> name;
	cout << "Nhap tuoi:" << endl; cin >> age;
	cout << "Nhap gioi tinh(0 la nam, 1 la nu):" << endl; cin >> gioiTinh;
	cout << "Nhap diem:" << endl; cin >> point;
	count++;
}

void SinhVien::hienThi(){
	cout << "MA SV: " << ID << endl;
	cout << "Ten: " << name << endl;
	cout << "Tuoi: " << age << endl;
	cout << "(0:nam, 1:nu): " << gioiTinh << endl;
	cout << "Diem: " << point << endl;
}

int SinhVien::count = 100;

void sapXep(SinhVien sv[], int n)
{
	SinhVien temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].point < sv[j].point){
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cout << "nhap vao so luong sv" << endl;
	cin >> n;
	SinhVien sv[n];
	for(int i=0;i<n;i++){
		sv[i].nhap();
	}
	cout << "DANH SACH SINH VIEN:" << endl;
	for(int i=0;i<n;i++){
		sv[i].hienThi();
	}
	cout << "Sap Xep theo diem:" << endl;
	sapXep(sv,n);
	for(int i=0;i<n;i++){
		sv[i].hienThi();
		cout << "----------";
	}

return 0;
}

