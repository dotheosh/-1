#include"todo.h"
#include<fstream>
#include<string>

todo::todo()
{

}

void todo::show_menu()
{
	cout << "欢迎来到代办!" << endl;
	cout << "1.添加任务" << endl;
	cout << "2.查找任务" << endl;
	cout << "3.删除任务" << endl;
	cout << "按零退出" << endl;
	cout << endl;
};

void todo::addTodo()
{
	string work;

	cout << "请输入你的代办任务：" << endl;
	cin >> work;

	ofstream TD;
	TD.open("1.txt", ios::out);
	if (TD.is_open())
	{
		TD << work << endl;
		cout << "添加任务完毕" << endl;
	}
	else
	{
		cout << "文件打开失败" << endl;
	}
}

void todo::showTodo()
{
	ifstream TD;
	TD.open("1.txt", ios::in);

	string buf;
	while (TD >> buf)
	{
		cout << endl;
		cout << "你目前的代办是:" << endl;
		cout << buf << endl;
		cout << endl;
	}
}

void todo::exitTodo()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

todo::~todo()
{

}

