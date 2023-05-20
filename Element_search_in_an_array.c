#include<stdio.h>
int main()
{
	 int n,i,f=0;
	 scanf("%d",&n);
	 int a[n];
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 int s;
	 scanf("%d",&s);
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]==s)
	 	{
	 	f=1;
	 	break;
	    }
	}
	if(f==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}