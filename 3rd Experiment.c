#include<stdio.h>
int main()
{
	int n,i;
	printf("Name: S.Madhavan\nReg.no:192210580\nEnter the last number of series:");
	scanf("%d",&n);
	for(i=1;i<n;)
	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
