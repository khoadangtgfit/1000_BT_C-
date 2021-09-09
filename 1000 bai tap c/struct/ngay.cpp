#include<iostream>
using namespace std;
struct NgayThang
{
    int Ngay,Thang,Nam;
};
bool KTNamNhuan(NgayThang a)
{
    if(a.Nam%400==0||(a.Nam%100!=0&&a.Nam%4==0))
        return true;
    else
        return false;
}
bool KTNhuan(int a)
{
    if(a%400==0||(a%100!=0&&a%4==0))
        return true;
    else
        return false;
}
void NhapNgay(NgayThang &a)
{
    do
    {
        cout<<"\nNhap nam:";
        cin>>a.Nam;
        if(a.Nam<=0)
            cout<<"\nNhap nam khong hop le !!! yeu cau nhap lai!!!";
    } while (a.Nam<=0);
    do
    {
        cout<<"\nNhap thang:";
        cin>>a.Thang;
        if(a.Thang<1||a.Thang>12)
            cout<<"\nNhap thang khong hop le!!!";
    } while (a.Thang<1||a.Thang>12);
    do
    {
        cout<<"\nNhap ngay:";
        cin>>a.Ngay;
        if((KTNamNhuan(a)==true&&(a.Ngay<1||a.Ngay>29))||(KTNamNhuan(a)==false&&(a.Ngay<1||a.Ngay>28)))
            cout<<"\nNhap ngay khong hop le !!! yeu cau nhap lai!!!";
    } while((KTNamNhuan(a)==true&&(a.Ngay<1||a.Ngay>29))||(KTNamNhuan(a)==false&&(a.Ngay<1||a.Ngay>28)));
    
    
}
void XuatNgay(NgayThang a)
{
    cout<<a.Ngay<<" / "<<a.Thang<<" / "<<a.Nam;
}
int SoNgayTrongThang(NgayThang a)
{
    int Day;
    switch (a.Thang)
    {
    case 3 : case 5: case 7: case 8: case 10: case 12: case 1:
        Day=31;
        break;
    
    case 4: case 6: case 9: case 11:
        Day=30;
        break;
    case 2: if(KTNamNhuan(a)==true)
        Day=29;
        else
        {
            Day=28;
        }
        break;
    default:
        break;
    }
    return Day;
}
int TinhSTTNgayTrongNam(NgayThang a)
{
    int S=0;
    for(int i=1;i<a.Thang;i++)
    {
        switch (i)
        {
        case 3 : case 5: case 7: case 8: case 10: case 12: case 1:
            S+=31;
            break;
        case 2: S+=KTNamNhuan(a)?29:28;
            break;
        default:
            S+=30;
            break;
        }
    }
    S+=a.Ngay;
    return S;
}
//Từ ngày 1/1/1
int TinhSTTNgayChoTruoc(NgayThang a)
{
    int S=0;
    for(int i=1;i<a.Nam;i++)
    {
        if(KTNamNhuan(a)==true)
            S+=366;
        else
            S+=365;
        
    }
    S+=TinhSTTNgayTrongNam(a);
    return S;
}
int TimNgayKhiBietNamVaSTTNgayTrongNam(int nam,int ngay)
{
    int n[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(KTNhuan(nam)==true)
        n[1]=29;
    for(int i=1;i<12;i++)
    {
        if(n[i]<ngay)
            ngay-=n[i];
    }
    return ngay;
}
NgayThang NgayTiepTheo(NgayThang a)
{
    if(a.Ngay<SoNgayTrongThang(a))
        a.Ngay++;
    else if(a.Thang<12){
        a.Ngay=1; a.Thang+=1;
    }
    else {
        a.Ngay=1; a.Thang=1;
        a.Nam+=1;
    }
    return a;
}
NgayThang NgayHomQua(NgayThang a)
{
    if(a.Ngay>1)
        a.Ngay-=1;
    if(a.Ngay==1){
        if(a.Thang==1){
            a.Thang=12;
            a.Ngay=30;
            a.Nam-=1;
        }
        else
        {
             a.Thang=a.Thang-1;
            a.Ngay=SoNgayTrongThang(a);
        }
        
    }
    return a;
}
void TinhThuTrongTuanCua1NgayBatKyTrongNam(NgayThang a)
{
	/*
	Công thức Zeller
	*/
	a.Nam -= (14 - a.Thang) / 12;
	a.Thang += 12 * ((14 - a.Thang) / 12) - 2;

	int dayofweek = (a.Ngay + a.Nam + a.Nam / 4 - a.Nam / 100 + a.Nam / 400 + (31 * a.Thang)/12) % 7;

	if(!dayofweek)
		cout<<"\nChu Nhat";
	else 
	    cout<<"\nNgay thu "<<dayofweek+1;
}

int main()
{
    NgayThang a;
    NhapNgay(a);
    XuatNgay(a); 
    bool k=KTNamNhuan(a);
    if(k==true)
        cout<<"\nNam "<<a.Nam<<" la nam nhuan.";
    else 
        cout<<"\nNam "<<a.Nam<<" khong phai la nam nhuan.";
    int x=TinhSTTNgayTrongNam(a);
    cout<<"\nNgay thu "<<x<<" trong nam.";
    int u=TimNgayKhiBietNamVaSTTNgayTrongNam(2000,353);
    cout<<"\nNgay 353 trong nam 2000 la ngay "<<u;
    int y=TinhSTTNgayChoTruoc(a);
    cout<<"\nNgay thu "<<y<<" trong nam ke tu 1/1/1";
    NgayThang i=NgayTiepTheo(a);
    cout<<"\nNgay tiep theo la: "; XuatNgay(i);
    NgayThang t=NgayHomQua(a);
    cout<<"\nNgay hom qua la:"; XuatNgay(t);
    TinhThuTrongTuanCua1NgayBatKyTrongNam(a);
}