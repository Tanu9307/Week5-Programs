//A program to sort the elements of an array in decending order

#include<stdio.h>
int main()
{
	int n,i,t,j;
	printf("The number of values to be taken are:");
	scanf("%d", &n);
	int a[n];
	printf("The values to be taken are:\n");	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
    for(i=0; i<n-1; i++)
    {
    for(j=0; j<n-i-1; j++)
    {
    	if(a[j]<a[j+1])
    	{
    	t=a[j];
    	a[j]=a[j+1];
    	a[j+1]=t;    		
		}
		
	}
	}
	printf("The decending order of the given numbers is\n");
	for(i=0; i<n; i++)
    printf("%d ", a[i]);
	return 0;
 }