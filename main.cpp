#include <iostream>
#include <algorithm>
#include "algo_test.h"
int main() {
	std::vector<int> nums = { 3,0,4,2,5,1,3,1,4,3};
	Solution::count_sort(nums);
	return 0;
}