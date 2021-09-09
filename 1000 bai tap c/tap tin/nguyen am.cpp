#include<stdio.h>
#include<string.h>
void DocFile(char *fn,char s[])
{
	FILE*f=fopen(fn,"rt");
	fgets(s,100,f);
	fclose(f);
}
void GhiFile(char *fn,char s[])
{
	FILE*f=fopen(fn,"wt");
	int n=strlen(s);
	for(int i=0;i<n;i++)
		if(strchr("aeiou",s[i]))
			fprintf(f,"%4c",s[i]);
	fclose(f);
}
int main()
{
	char s[101];
	DocFile("chuoi.txt",s);
	printf("Sau khi doc chuoi s=%s",s);
	GhiFile("NguyenAm.txt",s);
}
