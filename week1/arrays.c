#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printarr(int a[],int n){
	for(int i=0;i<n-1;i++){printf("%d  ",a[i]);}
	printf("\n");
}

void removearr(int a[],int d,int n){
	for(int i=d;i<n-1;i++){
		a[i]=a[i+1];
	}
}

void nextel(int temp,int n,int a[]){
	int mx=__INT_MAX__;
	for(int i=0;i<n-1;i++){
	if(a[i]>temp && a[i]<mx){mx=a[i];}
	}
	(mx==__INT_MAX__)?printf("%d was the largest number in the array\n",temp):printf("\nThe next largest number is:  %d\n",mx);
}

int main(){
	int n;
	clock_t start_t,end_t;
	double total_t;
	printf("Enter the number of elements:\t");
	scanf("%d",&n);
	int a[n],x,pos;
	printf("Enter the limit: ");
	int limit;
	scanf("%d",&limit);
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%limit;
		
	}
	for(int i=0;i<=n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	printf("Enter the position of the element to remove:\t");
	scanf("%d",&pos);
	int temp=a[pos];
	if(pos>n-1){printf("Index out of bounds!");}
	else{
	start_t=clock();
	printf("Deletion process is going to start\n");
	removearr(a,pos,n);
	end_t=clock();
	printf("Deletion process completed\n");
	total_t=(double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("Total time taken for deletion is %f\n",total_t);
	printf("Array after removal of element:   \n");
	printarr(a,n);
	start_t=clock();
	printf("The searching for the next largest element is going to be started\n");
	start_t=clock();
	nextel(temp,n,a);
	end_t=clock();
	printf("Traversal completed\n");
	total_t=(double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("Total time taken for the searching process is %f\n",total_t);
	 
	}
	return 0;
}
