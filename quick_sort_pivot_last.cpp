#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=(low-1);
	for(int j=low;j<=high-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
		
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
	
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition( arr, low, high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
int main()
{ int arr[20]={23,34,56,12,34,87,90,67,45,23,12,45,76,32,35,11,13,14,15,16};
   quicksort(arr,0,19);
   for(int i=0;i<20;i++)
   {
   	cout<<arr[i]<<"\t";
   	
   }
    
 
	return 0;
}

