#include <stdio.h>
int main()
{
	int arr[]={3,6,8,0,4,9,10,6};
	int len= sizeof(arr)/4;
	int mul=1;
	int zero_count=0;
	int index_of_zero=-1;
	int i=0;
	while(zero_count<=1 && i<len)
	{
		if(arr[i]==0 && zero_count==0)
		{
			zero_count++;
			index_of_zero=i;
		}
		else
			mul*=arr[i];
		i++;
	}
	if (zero_count>0)
	{
		for(int i=1;i<len;i++)
		{
			if(i==index_of_zero)
				arr[i]=mul;
			else
				arr[i]=0;
			printf("%d ", arr[i]);
		}
	}
	else
	{
		for(int i=0; i<len; ++i)
		{
			arr[i]=mul/arr[i];
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	return 0;

}
