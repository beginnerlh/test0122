//����һ����СΪ n �����飬�ҵ����е�������������ָ�������г��ִ�������[n/2] ��Ԫ�ء�
//
//����Լ��������Ƿǿյģ����Ҹ������������Ǵ���������
//
//ʾ�� 1:
//
//���� : [3, 2, 3]
//��� : 3
//	 ʾ�� 2 :
//
// ���� : [2, 2, 1, 1, 1, 2, 2]
//  ��� : 2
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int majorityElement(int* nums, int numsSize) {
	int count = 1;
	int zhong = nums[0];
	for (int i = 1; i<numsSize; i++)
	{
		if (zhong == nums[i])
		{
			count++;
		}
		else
		{
			count--;
			if (count == 0)
			{
				zhong = nums[i + 1];
			}
		}
	}
	return zhong;
}
int main()
{
	int num[] = { 3, 3, 2, 3, 4, 3,2, 2, 3 };
	int len = sizeof(num) / sizeof(int);
	int a = majorityElement(num, len);
	printf("%d\n", a);
	system("pause");
	return 0;
}