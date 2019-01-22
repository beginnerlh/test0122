//给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于[n/2] 的元素。
//
//你可以假设数组是非空的，并且给定的数组总是存在众数。
//
//示例 1:
//
//输入 : [3, 2, 3]
//输出 : 3
//	 示例 2 :
//
// 输入 : [2, 2, 1, 1, 1, 2, 2]
//  输出 : 2
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