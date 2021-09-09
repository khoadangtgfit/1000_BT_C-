#include<iostream>
#include<string>
#include<stdlib.h>
#define MAX 100
using namespace std;
int index1=0,index2=0;
class NgayThangNam
{
	public:
		friend istream& operator >>(istream &,NgayThangNam &);
		friend ostream& operator <<(ostream &,NgayThangNam );
	private:
		int Ngay;
		int Thang;
		int Nam;
};
istream& operator >>(istream &is,NgayThangNam &x)
{
	cout<<"\nNhap Ngay :";is>>x.Ngay;
	cout<<"\nNhap Thang:";is>>x.Thang;
	cout<<"\nNhap Nam:";is>>x.Nam;
	return is;
}
ostream& operator <<(ostream &os,NgayThangNam x)
{
	os<<"Ngay "<<x.Ngay<<" Thang "<<x.Thang<<" Nam "<<x.Nam;
	return os;
}

class DocGia
{
	public:
		friend istream& operator >>(istream &, DocGia &);
		friend ostream& operator <<(ostream &, DocGia);
	protected:
		string HoTen;
		NgayThangNam NgayTaoThe;
		int ThangHieuLuc;
};
istream& operator >>(istream &is,DocGia &y)
{
	cout<<"\nNhap Ho Ten:";
	fflush(stdin);
	getline(is,y.HoTen);
	cout<<"\nNhap vao ngay thang nam tao the:";
	cin>>y.NgayTaoThe;
	cout<<"\nNhap so thang hieu luc cua the.";
	is>>y.ThangHieuLuc;
	return is;
}
ostream& operator <<(ostream &os,DocGia y)
{
	os<<"\nHo Ten :"<<y.HoTen;
	os<<"\nNgay Thang tao the: "<<y.NgayTaoThe;
	os<<"\nSo Thang Hieu Luc: "<<y.ThangHieuLuc;
	return os;
} 
class DocGiaTreEm:public DocGia
{
	public:
		friend istream& operator >>(istream &,DocGiaTreEm &);
		friend ostream& operator <<(ostream &,DocGiaTreEm);
	private:
		string NguoiDaiDien;
};
istream& operator >>(istream &is,DocGiaTreEm &x)
{
	DocGia *docgia=static_cast<DocGia *>(&x);
	is>>*docgia;
	cout<<"\nNhap Ten Nguoi Dai Dien:";
	fflush(stdin);
	getline(is,x.NguoiDaiDien);
	return is;
}
ostream& operator <<(ostream &os,DocGiaTreEm x)
{
	DocGia docgia=static_cast<DocGia>(x);
	os<<docgia;
	os<<"\nNguoi Dai Dien:"<<x.NguoiDaiDien;
	os<<"\nTien Lam The:"<<20000;
	return os;
}
class DocGiaNguoiLon:public DocGia
{
	public:
		friend istream& operator >>(istream &,DocGiaNguoiLon &);
		friend ostream& operator <<(ostream &,DocGiaNguoiLon); 
		float TinhTienThe();
	private:
		string CMND;
};
float DocGiaNguoiLon::TinhTienThe()
{
	return (ThangHieuLuc*10000);
}
istream& operator >>(istream &is,DocGiaNguoiLon &x)
{
	DocGia *docgia=static_cast<DocGia*>(&x);
	is>>*docgia;
	cout<<"\nNhap CMND:";is>>x.CMND;
	return is;
}
ostream& operator <<(ostream &os,DocGiaNguoiLon x)
{
	DocGia docgia=static_cast<DocGia>(x);
	os<<docgia;
	os<<"\nCMND:"<<x.CMND;
	cout<<"\nTien Lam The: "<<x.TinhTienThe();
	return os;
}
class CThuVien
{
	public:
		friend istream& operator >>(istream &,CThuVien &);
		friend ostream& operator <<(ostream &,CThuVien );
	private:
		DocGiaTreEm Arr1[MAX];
		DocGiaNguoiLon Arr2[MAX];
};
istream& operator >>(istream &is,CThuVien &a)
{
	
	int x;
	do
	{
		system("cls");
		cout<<"\n1.Nhap Doc Gia tre em.";
		cout<<"\n2.Nhap vao doc gia nguoi lon.";
		cout<<"\n3.Quay Lai!";
		is>>x;
		switch(x)
		{
			case 1:
				{
					system("cls");
					cout<<"\nNhap so doc gia tre em can them.";
					int n,dem=0;
					cin>>n;
					for(int i=index1;i<n+index1;i++)
					{
						is>>a.Arr1[i];
						dem++;
					}
					index1+=dem;
					cout<<"\nDa Nhap Xong!";
					system("pause");
				}
				break;
			case 2:
				{
					system("cls");
					cout<<"\nNhap so doc gia nguoi lon can them.";
					int n,dem=0;
					cin>>n;
					for(int i=index2;i<n+index2;i++)
					{
						is>>a.Arr2[i];
						dem++;
					}
					index2+=dem;
					cout<<"\nDa Nhap Xong!";
					system("pause");
				}
				break;
			default:
				break;
		}
	}
	while(x!=3);
	return is;
}
ostream& operator <<(ostream &os,CThuVien a)
{
	os<<"\nDanh sach doc gia tre em la:\n";
	for(int i=0;i<index1;i++)
	{
		os<<"\nSTT:"<<i+1<<" la:"<<a.Arr1[i];
	}
	os<<"\nDanh sach doc gia nguoi lon la:\n";
	for(int i=0;i<index2;i++)
	{
		os<<"\nSTT:"<<i+1<<" la:"<<a.Arr2[i];
	}
	return os;
}
void MENU()
{  
	CThuVien ThuVien;
	int LuaChon;
 	do
	{
		system("cls");
		cout<<"\n=========MENU===========";
		cout<<"\n1.Them Doc Gia.";
		cout<<"\n2.Xuat Ra danh sach cac doc gia.";
		cout<<"\n3.Thoat!";
		cin>>LuaChon;
		switch(LuaChon)
		{
			case 1:
				{
					cin>>ThuVien;
				}
				break;
			case 2:
				{
					cout<<ThuVien;
					system("pause");
				}
				break;
			default:
				break;
		}
	}
	while(LuaChon!=3);
}
int main()
{
	MENU();
	return 0;
}
