#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a=1,k=0,count;
	for(i=11;i>=1;i--)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			count++;
		}
		if(count<(i+1))
		{
			for(a=1;a<=(2*k)-1;a++)
			printf("*");
		}
	printf("\n");
	k++;
    }
	return 0;
}
