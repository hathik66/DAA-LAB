#include<stdio.h>
#include<time.h>
void removee(int pos,int array[],int size)
{
	if(pos>size || pos<0)
	{
		printf("Invalid position");
		
	}
	else
{
	for(int i=pos;i<size;i++)
	{
		array[i]=array[i+1];
		
	}
}
	
}
void printarray(int array[],int size)
	{
		for(int i=0;i<size;i++)
		{
			printf("%d\n",array[i]);
		}
	}
int  next(int array[],int catch,int size)
{
	for(int i=0;i<size-1;i++)
	{
		array[i]-catch
	}
	
	
}	
	
int main()
{
	int size;
	
	int i,pos;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int intarray[size];
	printf("Enter the elements: \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&intarray[i]);
	}
	
	printarray(&intarray[0],size);
	printf("Enter the position of the element to be removed:  ");
	scanf("%d",&i);
	int catch=intarray[i];
	next(intarray,catch,size);
	removee(i,&intarray[0],size);
	size--;
	printarray(&intarray[0],size);
	int largestelement = next(intarray,catch,size);
	printf("The next largest element is %d\n",largestelement);
	
	
	return 0;
	
}
