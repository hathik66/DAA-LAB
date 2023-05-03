#include<stdio.h>
void swap(int *num1,*num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num1=temp;
	
}
int partition(int arr[],lo,hi)
{
	int pivot=arr[lo];
	int i=lo;
	int j=hi;
while(i<j)
{
	do
	{
		i++;
	}while(arr[i]<=pivot);
	do
	{
		j--;
	}while(arr[j]>pivot);
	if(i<j)
	 {
		swap(arr[i],arr[j]);
	 }
	swap(arr[lo],arr[j];
	retun j;
	 
	
}
int quicksort(int arr[],lo,hi)
{
	
	if(l<h)
	{
		int j=partition(arr,lo,hi);
		quicksort(lo,j);
		quicksort(j+1,h);
	}
}
int main()
{
	
}
