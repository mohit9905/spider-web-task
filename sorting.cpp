
//mohit 107117059

#include<stdio.h>
void swap(int *x,int * y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void sorting(int n[5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(n[j+1]>n[j])
			swap(&n[j+1],&n[j]);
		}
	}
	for(i=0;i<5;i++)
	printf("%d ",n[i]);
	
}
main()
{
	int n[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&n[i]);
    sorting(n);
}
