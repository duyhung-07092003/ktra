#include <iostream>
using namespace std;

class an_pham{
	private:
		string ma_hang;
		string ten;
		int ngay;
		double don_gia;
	public:
		an_pham(string mh,string name,int n,double gia){
			this -> ma_hang = mh;
			this -> ten = name;
			this -> ngay = n;
			this -> don_gia = gia;
		}
		
		
		~an_pham();
		
};

void an_pham::nhap(){
		
			cout << "Nhap vao ma don hang : ";
			cin >> ma_hang;
			cout << "Nhap vao ten cua an pham : ";
			cin >> ten;
			cout << "Nhap vao ngay xuat ban : ";
			cin >> ngay;
			cout << "Nhap vao don gia cua san pham : ";
			cin >> don_gia;
		}	

void an_pham::in(){
	cout << "Ma don hang : ";
	cout << ma_hang;
	cout << "Ten an pham : ";
	cout << ten;
	cout << "Ngay san xuat : ";
	cout << ngay;
	cout << "Don gia : ";
	cout << don_gia;
}

int main(){
	an_pham ap[1];
	ap.nhap();
	ap.in();
	return 0;
}