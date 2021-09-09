/* Bài 46/128/SBT tru?ng CNTP : T?o file van b?n có tên là:"INPUT.TXT" có c?u trúc nhu sau :
	- Dòng d?u tiên ghi N (N là s? nguyên duong nh?p t? bàn phím) .
	- Trong các dòng ti?p theo ghi N s? nguyên ng?u nhiên trong ph?m vi t? 0 d?n 100,m?i dòng 10 s? (các s? cách nhau ít nh?t m?t kho?ng tr?ng) .
Hãy d?c d? li?u c?a file "INPUT.TXT" và luu vào m?ng m?t chi?u A.Th?c hi?n các công vi?c sau :
	- Tìm giá tr? l?n nh?t c?a m?ng A .
	- Ð?m s? lu?ng s? ch?n,s? lu?ng s? l? c?a m?ng A .
	- Hãy s?p x?p các ph?n t? theo th? t? tang d?n .
Hãy ghi các k?t qu? vào file van b?n có tên OUTPUT.TXT theo m?u sau :
		INPUT.TXT	|		OUTPUT.TXT
18				|Cau a:99
87 39 78 19 89 4 40 98 29 65	|Cau b:9 9
20 43 1 99 38 34 58 4		|Cau c:
				|1 4 4 19 20 29 34 38 39 40
			        |43 58 65 78 87 89 98 99	
							       577.cpp */
/* 

Tác gi?: Nguy?n Vi?t Nam Son
Trung tâm dào t?o tin h?c - Thi?t k? ph?n m?m - Son Ð?p Trai: www.SonDepTrai.com

Ngu?n source code này Tôi vi?t vào nam 2012 lúc m?i b?t d?u h?c l?p trình C/C++ nên m?t s? cách s? không du?c t?i uu - B?n ch? nên dùng trên tinh th?n tham kh?o thôi nhé.
Mong giúp d? du?c B?n trên con du?ng H?c L?p Trình.
T?T C? VÌ S? THÀNH CÔNG C?A B?N

*/
// Khai báo các thu vi?n s? d?ng trong chuong trình .
#include<stdio.h>				
#include<conio.h>
#include<time.h>
#include<Windows.h>
#define MAX 100

// Hàm nh?p s? lu?ng ph?n t? c?a m?ng .
void NhapN(int &n)
{
	quaylai:printf("\nNhap vao so luong phan tu cua mang:n=");
	scanf("%d",&n);
	if(n<1||n>MAX)
	{
		printf("\nSo ban nhap vao khong hop le!Xin vui long nhap lai!");
		goto quaylai; // Dùng h?p ng? thay cho vòng l?p ch?c nang n?u ngu?i dùng nh?p vào s? không th?a thì chuong trình cho phép nh?p l?i d?n khi nào nh?p dúng thì thôi .
	}
}

// Hàm ghi File INPUT.TXT
void GhiFile(int a[],int n)
{
	FILE*pFile;
	pFile=fopen("khoa.txt","wt"); // File du?c t?o n?m trong ? C .
	fprintf(pFile,"So Luong Cac Phan Tu:%d\n",n); // Ghi giá tr? s? lu?ng ph?n t? vào file .
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%101; // t?o ng?u nhiên trong do?n [0,100] .
		fprintf(pFile,"%4d",a[i]); // Ghi giá tr? các ph?n t? trong m?ng vào file .
	}
	fclose(pFile); // Ðóng file .
}

// Hàm d?c file INPUT.TXT vào chuong trình
void DocFile(int a[],int n)
{
	FILE*pFile;
	pFile=fopen("output.txt","r+t"); // M? file ra .
	if(pFile==NULL)
	{
		printf("\nKhong doc duoc File INPUT.TXT");
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			fscanf(pFile,"%d\t",&a[i]); // Ð?c các giá tr? ph?n t? trong file vào chuong trình .
			printf("a[%d]=%d\n",i,a[i]); // Xu?t các giá tr? ra màn hình .
		}
	}
	fclose(pFile); // Ðóng file .
}

// Hàm tìm giá tr? l?n nh?t trong m?ng và ghi vào file .
void TimMax(int a[],int n)
{
	int max=a[0]; // kh?i t?o max = ph?n t? d?u tiên trong m?ng .
	FILE*pFile;
	pFile=fopen("output.txt","wt"); // M? file ra .
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	fprintf(pFile,"Cau a:%d\n",max); // Ghi giá tr? max tìm du?c vào file .
	fclose(pFile); // Ðóng file .
}

// Hàm d?m s? lu?ng các ph?n t? ch?n,ph?n t? l? trong m?ng và ghi vào file .
void DemChanLe(int a[],int n)
{
	int dem=0,dem1=0;
	FILE*pFile;
	pFile=fopen("output.txt","at"); // M? file ra . ? dây ta ph?i d? d?nh d?ng file là "at" hay là d? "a" cung du?c . Ch?c nang là m? t?p tin và ghi ti?p d? li?u c?n n?p vào cu?i t?p tin . Ta không th? xài l?i d?nh d?ng "wt" vì khi d? li?u m?i vào thì t?t c? d? li?u cu s? b? xóa di h?t .
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++; // Ð?m s? lu?ng các giá tr? ch?n trong m?ng .
		}
		else
		{
			dem1++; // Ð?m s? lu?ng các giá tr? l? trong m?ng .
		}
	}
	fprintf(pFile,"Cau b:%d\t%d\n",dem,dem1); // Ghi d? li?u vào file .
	fclose(pFile); // Ðóng file .
}

// Hàm hoán v? 2 s? nguyên .
void HoanVi(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

// Hàm s?p x?p m?ng tang d?n b?ng thu?t toán Interchange Sort .
void SapTangDan(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				HoanVi(a[i],a[j]);
			}
		}
	}
}

// Hàm xu?t m?ng sau khi dã du?c s?p tang d?n và ghi vào file .
void XuatMang(int a[],int n)
{
	FILE*pFile;
	pFile=fopen("output.txt","at"); // M? file ra . ? dây ta ph?i d? d?nh d?ng file là "at" hay là d? "a" cung du?c . Ch?c nang là m? t?p tin và ghi ti?p d? li?u c?n n?p vào cu?i t?p tin . Ta không th? xài l?i d?nh d?ng "wt" vì khi d? li?u m?i vào thì t?t c? d? li?u cu s? b? xóa di h?t .
	fprintf(pFile,"Cau c:\n"); // Ghi vào file .
	for(int i=0;i<n;i++)
	{
		fprintf(pFile,"%4d",a[i]); // Ghi vào file .
	}
	fclose(pFile); // Ðóng file .
}

// Hàm MeNu gom h?t m?i d? li?u làm ? trên vào .
void MeNu()
{
	int a[MAX],n,tieptuc;
	quaylai:NhapN(n);
	GhiFile(a,n);
	DocFile(a,n);
	TimMax(a,n);
	DemChanLe(a,n);
	SapTangDan(a,n);
	XuatMang(a,n);
	// Thông báo .
	printf("\nBan co muon tiep tuc thuc hien chuong trinh hay khong ? Neu co bam phim C,nguoc lai bam bat ky 1 phim nao khac de ket thuc!");
	tieptuc=getch(); // L?y key t? bàn phím .
	if(tieptuc=='c'||tieptuc=='C') // Xác nh?n khi ngu?i dùng nh?n phím C thì s? quay l?i chuong trình .
	{
		system("cls"); // Ðu?c h? tr? b?i thu vi?n "Windows.h" ch?c nang d? xóa h?t m?i d? li?u cu cho phép ngu?i dùng nh?p vào d? li?u m?i .
		goto quaylai; // Dùng h?p ng? thay cho vòng l?p . Ch?c nang d? b?t d?u l?i chuong trình m?i . 
	}
}

// Hàm chính .
int main()
{
	MeNu(); // G?i l?i hàm MeNu.
}
