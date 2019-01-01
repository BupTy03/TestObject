#include<iostream>
#include"TestObject.hpp"

using namespace std;
using namespace my;

class Object : public TestObject
{
public:
	Object(){}
};

int main(int argc, char** argv)
{
	system("chcp 1251");
	system("cls");

	{
		Object obj;
		Object obj2 = std::move(obj);
		cout << obj2.getParentId() << endl;
		obj = obj2;
		cout << obj.getParentId() << endl;
		cout << obj << endl;
		cout << obj2 << endl;
	}

	system("pause");
	return 0;
}