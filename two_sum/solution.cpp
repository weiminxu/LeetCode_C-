#include <iostream>
#include "solution.h"

using namespace std;

vector<int> solution::twoSum(vector<int>& nums, int target)
{
	vector<int> twonums;

	for (int i : nums)
	{
		for (int j : nums)
		{
			nums[i] + nums[j] == target;
			twonums.push_back(i);
			twonums.push_back(j);
			cout << "[" << i << "]" << ", " << "[" << j << "]";			
		}
	}

	return vector<int>();
};

