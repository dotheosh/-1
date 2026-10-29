#include<iostream>
#include"todo.h"

using namespace std;

int main()
{
	todo td;
	int choice = 0;

	while (true)
	{
		td.show_menu();
		cout << "请输入你的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			td.exitTodo();//退出程序
		case 1:
			td.addTodo();//添加任务
		case 2:
			td.showTodo();//查看任务
		case 3:
			break;//删除任务
		default:
			system("cls");
		}
	}

	return 0;
}