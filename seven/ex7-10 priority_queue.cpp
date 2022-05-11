#include <iostream>
#include<queue>
using namespace std;
class Comp
{
public:
	bool operator()(int x, int y) { return x > y; }
};
template<class T>
void print(T& q)
{
	while (!q.empty())
	{
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}
int main()
{
	priority_queue<int> q; 
	for (int n : { 1, 4, 9, 6, 7, 2, 8, 3, 5 })
		q.push(n);
	print(q);
	priority_queue<int,vector<int>,greater<int>> q1;
	for (int n : { 1, 4, 9, 6, 7, 2, 8, 3, 5 })
		q1.push(n);
	print(q1);
	priority_queue<int, vector<int>, Comp> q2;
	for (int n : { 1, 4, 9, 6, 7, 2, 8, 3, 5 })
		q2.push(n);
	print(q2);
	return 0;
}
