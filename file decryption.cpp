#include<stdio.h> 
#include<conio.h> 
int main()
{
char fname[10], ch;
FILE *f1, *f2;
printf("Enter Filename: "); 
scanf("%s",fname);
f1 = fopen(fname, "r"); 
if(f1 == NULL)
return 0;
f2 = fopen("test2.txt", "w"); 
if(f2 == NULL)
return 0;
ch = fgetc(f1);
while(ch != EOF)
{
ch = ch-2; 
fputc(ch, f2); 
ch = fgetc(f1);
}
fclose(f2); 
fclose(f1);
printf("\nFile %s is Decrypted Successfully!", fname); getch();
return 0;
}
 
