#include <stdlib.h>
#include <time.h>
//对排序代码进行封装 函数名为sort：要求能根据参数（升序或降序）的要求 进行数组的排序。
void sort(int arr[], int length, int asc)
{
	int i, j, t;
	for (i = 0; i < length - 1; i++)
	{
		for (j = i + 1; j < length; j++)
		{
			if ((asc && arr[i] > arr[j]) || (asc == 0 && arr[i] < arr[j]))
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}

		}
	}
}
//对折半查找功能进行函数封装 函数名为search。
int search(int d[], int length, int find)
{
	int i = 0, j = length - 1;
	int mid;
	do
	{
		mid = (i + j) / 2;
		if (d[mid] == find)
		{
			return mid;
		}
		else if (d[mid] > find)
		{
			j = mid - 1;
		}
		else if (d[mid] < find)
		{
			i = mid + 1;
		}

	} while (i <= j);
	return -1;
}

/*
功能：最大值
参数：arr 要排序的数组
	  length 数组的实际长度

返回：最大值
*/
int max_(int arr[], int length)
{
	int i;
	int max = arr[0];
	for (i = 1; i < length; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

/*
功能：最小值
参数：arr 要排序的数组
	  length 数组的实际长度

返回：最小值
*/
int min_(int arr[], int length)
{
	int i;
	int min = arr[0];
	for (i = 1; i < length; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}


/*
功能：求数组成员总和
参数：arr 要排序的数组
	  length 数组的实际长度

返回：数组成员总和
*/
int sum(int arr[], int length)
{
	int s = 0;
	int i;
	for ( i = 0; i < length; i++)
	{
		s += arr[i];
	}
	return s;
}

/*
功能：求数组成员平均值
参数：arr 要排序的数组
	  length 数组的实际长度

返回：平均值
*/
double avg(int arr[], int length)
{
	return sum(arr, length) / 1.0 / length;
}

/*
功能：首尾倒置
参数：arr 要排序的数组
	  length 数组的实际长度

返回：无
*/
int reserve(int arr[], int length)
{
	int j, i,t;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	return 0;
}

/*
功能：打乱排序
参数：arr 要排序的数组
	  length 数组的实际长度

返回：无
*/
int shuffle(int arr[], int length)
{
	int a,b,c,t;
	srand((unsigned)time(NULL));
	for ( c = 0; c < 100; c++)
	{
		a = rand() % length;
		b = rand() % length;
		t = arr[a];
		arr[a] = arr[b];
		arr[b] = t;
	}
}