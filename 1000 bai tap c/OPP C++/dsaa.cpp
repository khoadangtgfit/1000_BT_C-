#include<stdio.h>
#include<math.h>
int TinhBieuThuc(double x,double y)
{
	double H;
	H=exp(x);
//	-pow(y,1/5))/(x-2);
	return H;
}
int main()
{
	double x,y;
	printf("Nhap x:"); scanf("%lf",&x);
	printf("\nNhap y:"); scanf("%lf",&y);
	printf("Ket Qua = %lf",TinhBieuThuc(x,y));
}
