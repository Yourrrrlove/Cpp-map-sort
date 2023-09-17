#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;

};

class Compare  //仿函数
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_age > p2.m_age;
	}
};


void printmap(map<int,Person, Compare>&m)
{
	for (map<int, Person, Compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "KEY：" << it->first << " 姓名：" << it->second.m_name << " 年龄："<<it->second.m_age << endl;
	}
	cout << endl;
}
void test()
{
	map<int, Person, Compare>m;
	Person p1("孙悟空", 500);
	Person p2("猪八戒", 300);
	Person p3("沙僧", 400);
	m.insert(pair<int, Person>(1,p1));
	m.insert(pair<int, Person>(2, p2));
	m.insert(pair<int, Person>(3, p3));
	printmap(m);
	
}

int main()
{
	test();
	system("pause");
	return 0;
}
