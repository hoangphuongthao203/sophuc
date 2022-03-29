#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class Giaovien
{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl,lcb;

	public:
		void nhap (Giaovien gv[], int n);
		void tieude();
		void luong (Giaovien gv[], int n);
		void xuat (Giaovien gv[], int n);
		void luongmin (Giaovien gv[], int n);
};
void Giaovien :: nhap (Giaovien gv[], int n)
{
	 do
	{
	cout << " Nhap so luong giao vien : ";
	cin >> n;
	}
    while(n < 0);
    for(int i = 0 ; i < n ; i++)
    {   
		fflush(stdin);
		cout << " \n NHAP THONG TIN GIAO VIEN THU " << i + 1 << endl;
		cout << " Nhap ho ten giao vien : ";
		cin.getline(ht, 30);
		cout << " Nhap bang cap : ";
		cin.getline(bc, 15);
		cout << " Nhap chuyen nganh : ";
		cin.getline(cn, 20);
		cout << " Nhap bac luong : ";
		cin >> bl;
		cout << " Nhap tuoi giao vien : ";
		cin >> t;
		cout << "----------------------------------------" << endl;	
    }
}
void tieude()
{
    cout << "+===========================================================================================================+"<< endl;
    cout << "!" << setw(13) << " HO TEN "       << setw(3)
         << "!" << setw(14) << " TUOI "         << setw(3)
         << "!" << setw(13) << " BANG CAP "     << setw(5) 
         << "!" << setw(15) << " CHUYEN NGANH " << setw(5) 
         << "!" << setw(13) << " BAC LUONG "    << setw(5)
         << "!" << setw(13) << " LUONG CO BAN " << setw(6)  << "!" << endl;	
    cout << "+===========================================================================================================+"<< endl;			 
}
void Giaovien :: luong (Giaovien gv[], int n)
{
	cout << " Luong co ban cua giao vien !!! " << endl;
	for(int i = 0; i < n; i++)
	{
		gv[i].lcb = gv[i].bl * 610;
    }
}
void Giaovien :: xuat (Giaovien gv[], int n)
		{
 	        cout << "!" << setw(13) << ht  << setw(3)
                 << "!" << setw(14) << t   << setw(3)
                 << "!" << setw(13) << bc  << setw(5) 
                 << "!" << setw(15) << cn  << setw(5) 
                 << "!" << setw(13) << bl  << setw(5)
                 << "!" << setw(13) << lcb << setw(5) << "!" << endl;
            cout << "+===========================================================================================================+"<< endl;			 
		}
void Giaovien :: luongmin (Giaovien gv[], int n)
{
	cout << " GIAO VIEN CO MUC LUONG < 2000 !!! " << endl;
	for (int i = 0; i < n; i++)
	{
		if (gv[i].lcb < 2000)
		{
			xuat(gv, n);
		}
	}
}
int main()
{
	int n;
	Giaovien gv[100];
	gv->nhap(gv, n);
	gv->luong(gv,n);
	gv->xuat(gv,n);
	gv->luongmin(gv,n);
	return 0;
} 
