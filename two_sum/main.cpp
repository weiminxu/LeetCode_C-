/*
Given an array of integers, return indices of the two numbers such that 
they add up to a specific target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

https://leetcode.com/problems/two-sum/discuss/417369/C%2B%2B-Very-Simple-O(N)

*/

#include "solution.h"
#include <iostream>

using namespace std;



int main()
{
	int target;
	solution s;
	vector<int>& nums = s.getNums();

	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(8);
	nums.push_back(9);
	nums.push_back(10);
	nums.push_back(11);
	nums.push_back(12);

	cout << "Please input a number: ";
	cin >> target;
	//cout << target;
	
	solution s(nums, target);
	s.twoSum(nums, target);

	return 0;
}