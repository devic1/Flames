#include <stdio.h>
#include <ctype.h>
#include <string.h>
void finres(char str[20],int *su)
{
	for(int i =0,n = strlen(str);i < n;i++)
	{
		if(isdigit(str[i]))
		{
			NULL;
		}
		else
		{
			*su += 1;
		}
	}
}
int fla(int f)
{
	switch(f) {
		case 1 :
			printf("Friends appeared \n");
			break;
		case 2 :
			printf("Love Appeared \n");
			break;
		case 3 :
			printf("Affectionate \n");
			break;
		case 4 :
			printf("Marraige \n");
			break;
		case 5 :
			printf("Enemy Appeared \n");
			break;
		case 6 :
			printf("Siblings Appeared \n");
			break;
		default :
			printf("Siblings Appeared \n");
			break;
	}
}

int main()
{
	char arr[20];
	char arr2[20];
	char res[20];
	int sum = 0;
	printf("Enter the First Name : ");
	scanf("%s",arr);
	printf("Enter the Second Name : ");
	scanf("%s",arr2);
	for(int i=0,n = strlen(arr);i < n;i++)
	{
		for(int j = 0,h = strlen(arr2);j < h;j++)
		{
			if(arr[i] == arr2[j])
			{
				arr[i] = '0';
				arr2[j] = '0';
				
			}
		}
	}
	finres(arr, &sum);
	finres(arr2, &sum);
	if(sum > 6)
	{
		sum = sum % 6;
		fla(sum);
	}
	else
	{
		fla(sum);
	}
	
}

