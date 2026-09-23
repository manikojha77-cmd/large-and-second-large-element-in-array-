#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter  the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int large=a[0],second_large=a[0];
	for(i=1;i<n;i++)
	{
		if(large<a[i])
		{
		second_large=large;
		large=a[i];
		}
		else if(second_large <a[i]&&a[i]!=large)
		{
			second_large = a[i];
		}
	}
	printf("The largest element is=%d\n",large);
	printf("The second largest elements is=%d",second_large);
	return 0;
}
