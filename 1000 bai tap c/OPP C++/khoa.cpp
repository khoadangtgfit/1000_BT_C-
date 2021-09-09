#include<stdio.h>
#include<conio.h>
#define MAX 10
#define inputfile "khoa.txt"
typedef struct GRAPH
{
    int n;
    int a[MAX][MAX];
}DOTHI;
int DocMTKe(char Tenfile[100],DOTHI &g)
{
    FILE *f;
    f=fopen(Tenfile,"rt");
    if(f==NULL)
    {
        printf("Khong mo duoc file");
        return 0;
    }
    fscanf(f,"%d",&g.n);
    for(int i=0;i<g.n;i++)
    {
        for(int j=0;j<g.n;j++)
        {
            fscanf(f,"%d",g.a[i][j]);
        }
    }
    fclose(f);
    return 1;
}
void XuatMaTranKe(DOTHI g)
{
    printf("So dinh cua do thi la %d\n",g.n);
    printf("Ma tran ke cua do thi la\n");
    for(int i=0;i<g.n;i++)
    {
        for(int j=0;j<g.n;j++)
        {
            printf("%d\t",g.a[i][j]);
        }
        printf("\n");
    }
}
int KTMaTranHopLe(DOTHI g)
{
    for(int i=0;i<g.n;i++)
    {
        if(g.a[i][i]!=0)
            return 0;
    }
    return 1;
}
int KTDoThiVoHuong(DOTHI g)
{
    for(int i=0;i<g.n;i++)
    {
        for(int j=0;j<g.n;j++)
        {
            if(g.a[i][j]!=g.a[j][i])
                return 0;
        }
    }
    return 1;
}
void DiTimCacDinhLienThong(DOTHI g,int nhan[MAX],int i)
{
    for(int j=0;j<g.n;j++)
    {
        if(g.a[i][j] !=0 &&nhan[j] != nhan[i])
        {
            printf("%d\t",g.a[i][j]);
        }
        // DiTimCacDinhLienThong(g,nhan,j);
    }
}
int main()
{
    DOTHI g;
    int nhan[MAX];
     char Tenfile[100];
     if(DocMTKe("khoa.txt",g)==1)
     {
         printf("Da lay thong tin tu file thanh cong.\n\n");
         XuatMaTranKe(g);
         // DiTimCacDinhLienThong(g,nhan,2);
        printf("Bam 1 phim bat ky de tien hanh kiem tra do thi...\n\n");
        getch();
        if(KTMaTranHopLe(g)==1)
        {
            printf("Do thi hop le\n");
        }
        else
        {
            printf("Do thi khong hop le\n");
        }
        if(KTDoThiVoHuong(g)==1)
        {
            printf("Do thi vo huong");
        }
        else
        {
            printf("Do thi co huong");
        }
         getch();
     }
    
}
