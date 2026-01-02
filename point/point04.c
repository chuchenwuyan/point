//函数的第二个作用
//函数返回多个值
#include <stdio.h>

void getMAXandMIN(int arr[], int len, int* max, int* min);

int main()
{
	//练习：定义一个函数，获取数组最大最小值并返回
	//1.定义数组
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(int);

	//调用函数求值
	int max = arr[0];
	int min = arr[0];

	getMAXandMIN(arr,len,&max, &min);
	printf("%d\n",max);
	printf("%d\n", min);

	return 0;
}
void getMAXandMIN(int arr[],int len,int* max,int* min)
{
	//求数组的最大值
	*max = arr[0];
	for (int i = 1;i < len;i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}

	}
	*min = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}

	}
}