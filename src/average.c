#include<stdio.h>
int main(void)
{
	int n,i,score,count=0,s=0;
	float average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&score);
		s=s+score;
		if(score>=60)
			count++;
	}
	average=s*1.0/n;
	printf("average=%.1f",average);
	printf("count=%d",count);
}
