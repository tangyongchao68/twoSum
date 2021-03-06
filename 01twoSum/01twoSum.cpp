// 01twoSum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
#include<vector>
#include < unordered_map >

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> m;
		vector<int> res;
		for (int i = 0; i < nums.size(); ++i) {
			m[nums[i]] = i; //把需要查找的东西放在字典里面，序号放外面

		}
		for (int i = 0; i < nums.size(); ++i) {
			int t = target - nums[i];
			if (m.count(t) && m[t] != i) {   // 因为是字典，所以不需要索引，直接查询就可以，！的优先级较高
				res.push_back(i);
				res.push_back(m[t]);
				break;
			}
		}
		return res;
	}
};
int main()
{
	Solution solution1;     //新建一个类文件
	vector<int> nums = { 2,7,11,15 };
	vector<int> result = solution1.twoSum(nums,26);
	return 0;

}

//vector 的用法，CSDN收藏夹
//git的上传重新测试一下，右击添加源代码管理，然后团队资源管理器，输入github上面的http地址就可以了。
//两数之和的原理
//时间复杂度的计算方法，根据最大循环次数计算
//pch.h的意思 ，预编译的头文件

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
