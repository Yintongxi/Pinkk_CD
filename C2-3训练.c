#include <stdlib.h>
#include <time.h>
//�����������з�װ ������Ϊsort��Ҫ���ܸ��ݲ�����������򣩵�Ҫ�� �������������
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
//���۰���ҹ��ܽ��к�����װ ������Ϊsearch��
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
���ܣ����ֵ
������arr Ҫ���������
	  length �����ʵ�ʳ���

���أ����ֵ
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
���ܣ���Сֵ
������arr Ҫ���������
	  length �����ʵ�ʳ���

���أ���Сֵ
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
���ܣ��������Ա�ܺ�
������arr Ҫ���������
	  length �����ʵ�ʳ���

���أ������Ա�ܺ�
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
���ܣ��������Աƽ��ֵ
������arr Ҫ���������
	  length �����ʵ�ʳ���

���أ�ƽ��ֵ
*/
double avg(int arr[], int length)
{
	return sum(arr, length) / 1.0 / length;
}

/*
���ܣ���β����
������arr Ҫ���������
	  length �����ʵ�ʳ���

���أ���
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
���ܣ���������
������arr Ҫ���������
	  length �����ʵ�ʳ���

���أ���
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