#ifndef _SOLUTION_H
#define _SOLUTION_H

#include <vector>
using namespace std;

class solution
{
private:
	std::vector<int>& nums;
	int target;

public:
	int i = 0;
public:
	solution(std::vector<int>& nums, int target):nums(this->nums), target(this->target) {}
	solution():nums(nums), target(0) {}
	

	std::vector<int> twoSum(std::vector<int>& nums, int target);
	std::vector<int> getNums()
	{
		return nums;
	}

};

#endif // !_SOLUTION_H


