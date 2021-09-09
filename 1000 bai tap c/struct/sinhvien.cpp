#include<iostream>
using namespace std;
struct SinhVien
{
    char MaSo[20];
    char HoTen[50];
    char DiaChi[100];
    float Toan,Ly,Hoa;
};
// typedef struct SV;
void NhapSV(SinhVien &sv)
{
    fflush(stdin);
    cout<<"\nNhap ho ten sinh vien:";
    gets(sv.HoTen);
    fflush(stdin);
    cout<<"\nNhap ma so sinh vien:";
    cin>>sv.MaSo;
    fflush(stdin);
    cout<<"\nNhap dia chi:";
    gets(sv.DiaChi);
    fflush(stdin);
    cout<<"\nNhap Diem:"<<endl;
    cout<<"-Diem toan:";
    fflush(stdin);
    cin>>sv.Toan;
    cout<<"-Diem ly:";
    cin>>sv.Ly;
    fflush(stdin);
    cout<<"-Diem hoa:";
    cin>>sv.Hoa;
}
void XuatSV(SinhVien sv)
{
    cout<<"\nHo ten:"<<sv.HoTen<<endl;
    cout<<"Ma so sinh vien:"<<sv.MaSo<<endl;
    cout<<"Dia chi:"<<sv.DiaChi<<endl;
    cout<<"Diem toan:"<<sv.Toan<<endl;
    cout<<"Diem ly:"<<sv.Ly<<endl;
    cout<<"Diem hoa:"<<sv.Hoa<<endl;
}
void NhapDSSV(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\nNhap thong tin sinh vien thu:"<<i+1;
        NhapSV(ds[i]);
    }
}
void XuatDSSV(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        XuatSV(ds[i]);
    }
}
void Xoa1SV(SinhVien ds[],int &n,int k)
{
    for(int i=k-1;i<n;i++)
    {
        ds[i]=ds[i+1];
    }
    n--;
}
void DoiThongTin1SinVien(SinhVien ds[],int &n,int k1)
{
    for(int i=k1-1;i<n;i++)
    {
        ds[i]=ds[i+1];
    }
    NhapSV(ds[k1-1]);
}
int main()
{
    SinhVien ds[100];
    int n,k,k1;
    cout<<"\nNhap so luong sinh vien:";
    cin>>n;
    NhapDSSV(ds,n);
    XuatDSSV(ds,n);
    // cout<<"\nNhap sinh vien can xoa:";
    // cin>>k; 
    // Xoa1SV(ds,n,k);
    // cout<<"\nDanh sach sinh vien sau khi xoa sinh vien thu:"<<k;
    // XuatDSSV(ds,n);
    cout<<"\nNhap sinh vien can doi thong tin:";
    cin>>k1;
    DoiThongTin1SinVien(ds,n,k1);
    cout<<"\nDanh sach sinh vien sau khi doi thong tin sinh vien thu:"<<k1;
    XuatDSSV(ds,n);

}