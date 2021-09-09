#include <stdio.h>
#include <iostream>
//#include <Algorithm>
//int a[100]; int n;
using namespace std;
/* xuat phat tu n-1 lui ve dau day
- tim a[i], dau tien sao cho a[i]< a[i+1]
- kiem tra lai, neu i>0; thi
+ kiem tra tu cuoi len dau day, tim phan tu dau tien lon hon a[i],
doi cho c2 phan tu nay vs a[i]
+ dao nguoc vi tri cac phan tu tu a[i+1] toi a[n]
i==0 end

duyet tu cuoi len dau, xac ssdinh doan giam dan dai nhat, 
tim so nho nhat tring day giam do, maf lon hon so lien truoc cuar so dau tien 
triong day giam do, vi du: 3421; day giam la 421, so lien truoc no laf 3
doi cho 3 vs so nho nhat trong 421 maf lon hon 3, thi doi cho 3 vs 4, do laf hoan vi 
tiep theo
*/
void swap(int &x, int &y ){
	int t;
	t = x; x = y; y =t;
}
void incauhinh(int a[], int n){
	for(int i = 1; i<=n; i++){
		cout<<a[i];
	}
	cout<<endl;
}
void cauhinhdau(int a[], int n){
	for(int i = 1; i <= n; i++){
		a[i] = i; 
	}
}
void xepmangtang(int a[], int n, int vt){
	for(int i = vt;  i < n; i++){
		for(int j = i+1; j <= n; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	cout<<"Nhap n"<<endl;
	cin>>n;
	cauhinhdau(a,n);
	incauhinh(a,n);
	
	while(true){
		int i;
		for( i = n ; i > 0; i--){// duyet tu cuoi len
			if(i == 1) return 0;// day la giam het roi thi thoat ra
			//vi no la cau hinh cuoi roi, vd 4321
			if(a[i-1] < a[i]) break;// 
		}
		for(int j = n; j >= i; j--){
			if(a[j] > a[i-1]){
				swap(a[j], a[i-1]);
				xepmangtang(a, n, i);
				incauhinh(a,n);
				break;
			}
		}
	}
}