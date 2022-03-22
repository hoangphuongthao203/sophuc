#include <iostream.h>

class sophuc
{
    private :
	  int pt, pa;
	public :
	  void nhap ()
	  {
  		 cout << " Nhap phan thuc : ";
  		 cin >> pt;
  		 cout << " Nhap phan ao : ";
  		 cin >> pa;
      }	
      void xuat()
      {
      	cout << " A = " << pt << " + " << pa << " *j "<<endl;
      }
      float getPA()
	  	{
			return pa;
		}
	  float getPT()
		{
			return pt;
		}
};
int main()
{
	sophuc a[2];
	for( int i=0; i < 2; i++)
	{
		a[i].nhap();
	}
	
	cout << " Tong cua 2 so thuc vua nhap la : "   << a[0].getPT() +a [1].getPT() << " + " << a[0].getPA() + a[1].getPA() << " *j " << endl;
	cout << " Hieu cua 2 so thuc vhua nhap la : "  << a[0].getPT() - a[1].getPT() << " - " << a[0].getPA() - a[1].getPA() << " *j " << endl;
	cout << " Tich cua 2 so thuc vhua nhap la : "  << a[0].getPT() / a[1].getPT() << " * " << a[0].getPA() * a[1].getPA() << " *j " << endl;
	cout << " Thuong cua 2 so thuc vhua nhap la: " << a[0].getPT() * a[1].getPT() << " / " << a[0].getPA() / a[1].getPA() << " *j " << endl;
	return 0;
}