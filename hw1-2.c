#include <stdio.h>
int main()
{	
	int arr[]={5,0,7,6,9,4};
	int num=8;
	int numbers[50]={[0 ... 49] = -1};
	int len = sizeof(arr)/4;
	int index1=-1 , index2=-1;
	for(int i=0;i<len;++i)
	{
		if(num>arr[i] && numbers[num-arr[i]]!=-1)
		{
			index1=i;
			index2=numbers[num-arr[i]];
			break;
		}
		
		numbers[arr[i]]=i;
	}
	
	if (index1!=-1)
	{
		printf("The indexes are: %d %d: \n",index1,index2);
		printf("%d + %d = %d\n", arr[index1], arr[index2], num);
	}
	else
		printf("There are no such numbers: \n");
	return 0;
}
