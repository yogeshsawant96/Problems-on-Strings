#include<stdio.h>
#include<conio.h>
void search(int arr[],int size,int iNo)
{
	int start=0,i=0;
	int end=size-1;
	if((arr==NULL)||(size<=0))
	{
		return;
	}
	while(start<end)
	{
		if((arr[start]==iNo)||(arr[end]==iNo))
		{
			break;
		}
		start++;
		end--;
	}
	if(start>end)
	{
		printf("\nNOT element found");
	}
	
	if(arr[start]==iNo)
	{
		printf("\nElement Found at %d Location ",start+1);
	}
	else if(arr[end]==iNo)
	{
		printf("\nElement Found at %d Location ",end+1);
	}

}
int main()
{
	int i=0;
	int arr[]={10,20,30,40,50,60};
	int isize=sizeof(arr)/sizeof(int);
	for(i=0;i<isize;i++)
	{
		printf("%d ",arr[i]);
	}
	search(arr,isize,20);
	return 0;
}
