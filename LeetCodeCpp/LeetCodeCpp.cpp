// LeetCodeCpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	string toLowerCase(string str) {
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'A'&&str[i] <= 'Z')
			{
				char tmp = str[i] - 'A' + 'a';
				str.replace(i, 1, 1, tmp);
			}
		}
		return str;
	}
};

int main()
{
	Solution s;
	string str("ZzPiTAs");
	cout << str.c_str() << endl;
	str = s.toLowerCase(str);
	cout << str.c_str() << endl;
    return 0;
}

