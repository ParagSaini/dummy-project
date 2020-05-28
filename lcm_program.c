#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,swap,z,k;
    printf("enter the numbers you want for lcm\n");
    scanf("%d",&a);
    int s[a];
    printf("enter the numbers\n");
    for(i=0;i<a;i++)
        scanf("%d",&s[i]);
    for(i=0;i<a-1;i++)
    {
       z=s[i];
       for(k=0;s[i]%s[i+1]!=0;k++)
       s[i]=s[i]+z;
       swap=s[i];
       s[i]=s[i+1];
       s[i+1]=swap;

    }
      printf("the lcm is %d",s[a-1]);
     getch();
     return 0;
}
