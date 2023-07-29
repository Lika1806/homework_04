#include <stdio.h>
int main()
{	
	int arr[]={5,2,7,6,9,4};
	int num=8;
	int len = sizeof(arr)/4;
	int index1=-1 , index2=-1;
	for(int i=0;i<len;++i)
	{
		for(int j=i+1;j<len;++j)
		{
			if(arr[i]+arr[j]==num)
			{
				index1=i;
				index2=j;
			}
		}
		if(index1!=-1) break;
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
