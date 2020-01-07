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
	solution(std::vector<int>& nums, int target):nums(this->nums), target(this->target) {}
	solution();
	~solution();

	std::vector<int> twoSum(std::vector<int>& nums, int target);
	std::vector<int> getNums()
	{
		return nums;
	}

};

#endif // !_SOLUTION_H


