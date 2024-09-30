#include <iostream>
#include <algorithm>
#include "algo_test.h"
int main() {
	std::vector<int> nums = { 5,2,3,1,6,4,7,8,9,0};
	Solution::heap_sort(nums,static_cast<int>(size(nums)+1));
	return 0;
}