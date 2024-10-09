//
// Created by 王东乔 on 2024/9/29.
//


#ifndef CPP_AND_ALGO_ALGORITHM_TEST_H_
#define CPP_AND_ALGO_ALGORITHM_TEST_H_

// 其他代码...



#include <vector>
#include <algorithm>
class Solution
{
 public:
	static void max_heap(std::vector<int>& nums, int start, int end)
	{
		int parent = start;
		int child = 2 * parent + 1;
		while (child < end)
		{
			if (child + 1 <= end && nums[child] < nums[child + 1])child++;
			if (nums[parent] >= nums[child])return;
			else
			{
				std::swap(nums[parent], nums[child]);
				parent = child;
				child = 2 * parent + 1;
			}

		}
	}
	static void heap_sort(std::vector<int>& nums, int len)
	{
		for (int i = (len - 1 - 1) / 2; i >= 0; i--)
		{ max_heap(nums, i, len - 1); }
		for (int i = len - 1; i > 0; i--)
		{
			std::swap(nums[0], nums[i]);
			max_heap(nums, 0, i - 1);
		}

	}
	static void count_sort(std::vector<int>& nums)
	{
		int max_num = *std::max_element(nums.begin(), nums.end());
		int min_num = *std::min_element(nums.begin(), nums.end());
		int len = max_num - min_num + 1;
		std::vector<int> bucket(len, 0);
		std::vector<int> result(nums.size());

		// 统计每个元素出现次数
		for (int num : nums)
		{
			bucket[num - min_num]++;
		}

		// 构建前缀和
		for (int i = 1; i < len; ++i)
		{
			bucket[i] += bucket[i - 1];
		}

		// 逆序遍历原数组，确保排序稳定
		for (int i = nums.size() - 1; i >= 0; --i)
		{
			result[--bucket[nums[i] - min_num]] = nums[i];
		}

		// 将排序结果复制回原数组
		nums = result;
	}
};
#endif // CPP_AND_ALGO_ALGORITHM_TEST_H_
