#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("Name: S.Madhavan\nReg.no:192210580\nEnter last number of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			printf("%d\n",i);
			sum=sum+pow(i,2);
	}
	printf("sum=%d",sum);
	return 0;
}
