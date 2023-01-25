#include<stdio.h>

void maxheapfy(int a[],int,int);
void maxheap(int a[],int beg,int end)
{ int i;
	for( i=end/2;i>=beg;i--)
	{
		maxheapfy(a,i,end);
	}
	printf("maxheap is:\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\n",a[i]);
	}

}
void maxheapfy(int a[],int f,int size)
{
	int max=f,l=2*f,r=2*f+1,t;
	if(l<=size&&a[l]>a[max])
	{
		max=l;
	}
	if(r<=size&&a[r]>a[max])
	{
		max=r;
	}
	if(f!=max)
	{
		t=a[f];
		a[f]=a[max];
		a[max]=t;
		maxheapfy(a,max,size);
	}
}

void heapsort(int a[],int n)
{ int t,i;
	for( i=n;i>=1;i--)
	{
		t=a[1];
		a[1]=a[i];
		a[i]=t;
		maxheapfy(a,1,i-1);
	}
}
int main()
{
	int i,n=10;
	int a[n];
	int root=1;
	printf("enter the array:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	maxheap(a,root,n);
	heapsort(a,n);
	printf("sorted array is:\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	
}

