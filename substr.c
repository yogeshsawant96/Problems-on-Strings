#include<stdio.h>
#include<conio.h>
void findSub(char * arr1,char * arr2)
{
	int i=0,len=0,j=0;
	if(arr1==NULL && arr2==NULL)
	{
		return;
	}
	for(len=0;arr2[len]!='\0';len++);
	while(arr1[i]!='\0')
	{
		if(arr1[i]==arr2[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
		i++;
	}
	if(j==len)
	{
		printf("%s is present as position %d",arr2,i-j+1);
	}
	else
	{
		printf(" %s is not present");
	}
}
int main()
{
	char arr1[50]={'\0'};
	char arr2[50]={'\0'};
	printf("Enter String :");
	gets(arr1);
	printf("Enter SubString to find :");
	gets(arr2);
	findSub(arr1,arr2);
	return 0;
}
