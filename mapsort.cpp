#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

class Compare  //仿函数
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};
void printmap(map<int,int, Compare>&m)
{
	for (map<int, int, Compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "KEY：" << it->first << " VALUE：" << it->second << endl;
	}
	cout << endl;
}
void test()
{
	map<int, int, Compare>m;
	for (int i = 1; i < 5; i++)
	{
		m.insert(pair<int, int>(i, i*10));
	}

	printmap(m);
	
}

int main()
{
	test();
	system("pause");
	return 0;
}
