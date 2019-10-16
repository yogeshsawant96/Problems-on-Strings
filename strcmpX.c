#include<stdio.h>
#include<conio.h>
int strXrev(char * , char *);
int main()
{
	char str1[25]={'\0'},str2[25]={'\0'};
	int iRet=0;
	printf("Enter String One : ");
	scanf("%s",&str1);
	printf("Enter String 2 : ");
	scanf("%s",&str2);
	iRet=strXrev(str1,str2);
	if(iRet==1)
	{
		printf("Similiar Strings");
	}
	else
	{
		printf("\n Not Similiar");
	}
	return 0;
}
int strXrev(char * str1, char * str2)
{
	int i=0,isize=0;
	for(i=0;str1[i]!='\0';i++)
	{
		isize++;
	}
	i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			break;
		}
		i++;
	}
	if(i==isize){
		return 1;
	}
	else
	{
		return 0;
	}
}
