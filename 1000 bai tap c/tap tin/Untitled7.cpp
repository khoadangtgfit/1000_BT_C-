/* B�i 46/128/SBT tru?ng CNTP : T?o file van b?n c� t�n l�:"INPUT.TXT" c� c?u tr�c nhu sau :
	- D�ng d?u ti�n ghi N (N l� s? nguy�n duong nh?p t? b�n ph�m) .
	- Trong c�c d�ng ti?p theo ghi N s? nguy�n ng?u nhi�n trong ph?m vi t? 0 d?n 100,m?i d�ng 10 s? (c�c s? c�ch nhau �t nh?t m?t kho?ng tr?ng) .
H�y d?c d? li?u c?a file "INPUT.TXT" v� luu v�o m?ng m?t chi?u A.Th?c hi?n c�c c�ng vi?c sau :
	- T�m gi� tr? l?n nh?t c?a m?ng A .
	- �?m s? lu?ng s? ch?n,s? lu?ng s? l? c?a m?ng A .
	- H�y s?p x?p c�c ph?n t? theo th? t? tang d?n .
H�y ghi c�c k?t qu? v�o file van b?n c� t�n OUTPUT.TXT theo m?u sau :
		INPUT.TXT	|		OUTPUT.TXT
18				|Cau a:99
87 39 78 19 89 4 40 98 29 65	|Cau b:9 9
20 43 1 99 38 34 58 4		|Cau c:
				|1 4 4 19 20 29 34 38 39 40
			        |43 58 65 78 87 89 98 99	
							       577.cpp */
/* 

T�c gi?: Nguy?n Vi?t Nam Son
Trung t�m d�o t?o tin h?c - Thi?t k? ph?n m?m - Son �?p Trai: www.SonDepTrai.com

Ngu?n source code n�y T�i vi?t v�o nam 2012 l�c m?i b?t d?u h?c l?p tr�nh C/C++ n�n m?t s? c�ch s? kh�ng du?c t?i uu - B?n ch? n�n d�ng tr�n tinh th?n tham kh?o th�i nh�.
Mong gi�p d? du?c B?n tr�n con du?ng H?c L?p Tr�nh.
T?T C? V� S? TH�NH C�NG C?A B?N

*/
// Khai b�o c�c thu vi?n s? d?ng trong chuong tr�nh .
#include<stdio.h>				
#include<conio.h>
#include<time.h>
#include<Windows.h>
#define MAX 100

// H�m nh?p s? lu?ng ph?n t? c?a m?ng .
void NhapN(int &n)
{
	quaylai:printf("\nNhap vao so luong phan tu cua mang:n=");
	scanf("%d",&n);
	if(n<1||n>MAX)
	{
		printf("\nSo ban nhap vao khong hop le!Xin vui long nhap lai!");
		goto quaylai; // D�ng h?p ng? thay cho v�ng l?p ch?c nang n?u ngu?i d�ng nh?p v�o s? kh�ng th?a th� chuong tr�nh cho ph�p nh?p l?i d?n khi n�o nh?p d�ng th� th�i .
	}
}

// H�m ghi File INPUT.TXT
void GhiFile(int a[],int n)
{
	FILE*pFile;
	pFile=fopen("khoa.txt","wt"); // File du?c t?o n?m trong ? C .
	fprintf(pFile,"So Luong Cac Phan Tu:%d\n",n); // Ghi gi� tr? s? lu?ng ph?n t? v�o file .
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%101; // t?o ng?u nhi�n trong do?n [0,100] .
		fprintf(pFile,"%4d",a[i]); // Ghi gi� tr? c�c ph?n t? trong m?ng v�o file .
	}
	fclose(pFile); // ��ng file .
}

// H�m d?c file INPUT.TXT v�o chuong tr�nh
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
			fscanf(pFile,"%d\t",&a[i]); // �?c c�c gi� tr? ph?n t? trong file v�o chuong tr�nh .
			printf("a[%d]=%d\n",i,a[i]); // Xu?t c�c gi� tr? ra m�n h�nh .
		}
	}
	fclose(pFile); // ��ng file .
}

// H�m t�m gi� tr? l?n nh?t trong m?ng v� ghi v�o file .
void TimMax(int a[],int n)
{
	int max=a[0]; // kh?i t?o max = ph?n t? d?u ti�n trong m?ng .
	FILE*pFile;
	pFile=fopen("output.txt","wt"); // M? file ra .
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	fprintf(pFile,"Cau a:%d\n",max); // Ghi gi� tr? max t�m du?c v�o file .
	fclose(pFile); // ��ng file .
}

// H�m d?m s? lu?ng c�c ph?n t? ch?n,ph?n t? l? trong m?ng v� ghi v�o file .
void DemChanLe(int a[],int n)
{
	int dem=0,dem1=0;
	FILE*pFile;
	pFile=fopen("output.txt","at"); // M? file ra . ? d�y ta ph?i d? d?nh d?ng file l� "at" hay l� d? "a" cung du?c . Ch?c nang l� m? t?p tin v� ghi ti?p d? li?u c?n n?p v�o cu?i t?p tin . Ta kh�ng th? x�i l?i d?nh d?ng "wt" v� khi d? li?u m?i v�o th� t?t c? d? li?u cu s? b? x�a di h?t .
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++; // �?m s? lu?ng c�c gi� tr? ch?n trong m?ng .
		}
		else
		{
			dem1++; // �?m s? lu?ng c�c gi� tr? l? trong m?ng .
		}
	}
	fprintf(pFile,"Cau b:%d\t%d\n",dem,dem1); // Ghi d? li?u v�o file .
	fclose(pFile); // ��ng file .
}

// H�m ho�n v? 2 s? nguy�n .
void HoanVi(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

// H�m s?p x?p m?ng tang d?n b?ng thu?t to�n Interchange Sort .
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

// H�m xu?t m?ng sau khi d� du?c s?p tang d?n v� ghi v�o file .
void XuatMang(int a[],int n)
{
	FILE*pFile;
	pFile=fopen("output.txt","at"); // M? file ra . ? d�y ta ph?i d? d?nh d?ng file l� "at" hay l� d? "a" cung du?c . Ch?c nang l� m? t?p tin v� ghi ti?p d? li?u c?n n?p v�o cu?i t?p tin . Ta kh�ng th? x�i l?i d?nh d?ng "wt" v� khi d? li?u m?i v�o th� t?t c? d? li?u cu s? b? x�a di h?t .
	fprintf(pFile,"Cau c:\n"); // Ghi v�o file .
	for(int i=0;i<n;i++)
	{
		fprintf(pFile,"%4d",a[i]); // Ghi v�o file .
	}
	fclose(pFile); // ��ng file .
}

// H�m MeNu gom h?t m?i d? li?u l�m ? tr�n v�o .
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
	// Th�ng b�o .
	printf("\nBan co muon tiep tuc thuc hien chuong trinh hay khong ? Neu co bam phim C,nguoc lai bam bat ky 1 phim nao khac de ket thuc!");
	tieptuc=getch(); // L?y key t? b�n ph�m .
	if(tieptuc=='c'||tieptuc=='C') // X�c nh?n khi ngu?i d�ng nh?n ph�m C th� s? quay l?i chuong tr�nh .
	{
		system("cls"); // �u?c h? tr? b?i thu vi?n "Windows.h" ch?c nang d? x�a h?t m?i d? li?u cu cho ph�p ngu?i d�ng nh?p v�o d? li?u m?i .
		goto quaylai; // D�ng h?p ng? thay cho v�ng l?p . Ch?c nang d? b?t d?u l?i chuong tr�nh m?i . 
	}
}

// H�m ch�nh .
int main()
{
	MeNu(); // G?i l?i h�m MeNu.
}
