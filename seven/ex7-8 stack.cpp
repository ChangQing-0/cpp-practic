#include <iostream>
#include <vector>
#include<stack>									//包含头文件stack
using namespace std;
int main()
{
	vector <int >v = { 1,2,3 };					//创建vector容器v
	stack<int, vector <int >> s(v);				//创建stack容器s
	s.push(4);
	s.emplace(5);
	s.pop();
	while (!s.empty())
	{
		cout << " "<<s.top();
		s.pop();
	}
	return 0;
}
