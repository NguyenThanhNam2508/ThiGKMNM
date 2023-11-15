#include "Header.h"
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int tinhTong (int a[],int n)
{
	int tong; 
	nhap(a[],n);
	for (int i = 0 ; i < n ; i++)
	{
		tong += a[i];
	}
	return tong;
}
void HienSV()
{
	cout << "DH52005963" << "||"<<"Nguyen Thanh Nam" <<"D20_TH10";

}
