#include"todo.h"
#include<fstream>
#include<string>

void todo::load()
{
	ifstream TD;
	TD.open("1.txt", ios::in);
	string buf;
	while (getline(TD, buf))
	{
		if (buf.empty())
		{
			continue;
		}
		tasks.push_back(Tasks((int)tasks.size() + 1, buf));	
	}
}

void todo::save()
{
	ofstream TD;
	TD.open("1.txt", ios::out);
	if (TD.is_open())
	{
		for (int i = 0; i < tasks.size(); i++)
		{
			TD << tasks[i].works << endl;
		}
		cout << "保存任务完毕" << endl;
	}
	else
	{
		cout << "文件打开失败" << endl;
	}
}

todo::todo()
{
	load();
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
	cin.ignore();
	getline(cin, work);

	if (work.empty())
	{
		cout << "任务不能为空" << endl;
		return;
	}
	tasks.push_back(Tasks(tasks.size() + 1, work));
	save();
}

void todo::showTodo()
{
	if (tasks.empty())
	{
		cout << "暂无任务" << endl;
		return;
	}
	for (auto& task : tasks)
	{
		task.showTask();
	}
}

void todo::deleteTodo()
{
	if (tasks.empty())
	{
		cout << "暂无任务" << endl;
		return;
	}
	int id;
	cout << "请输入要删除的任务ID：" << endl;
	cin >> id;
	if (cin.fail())
	{
		cout << "输入无效" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "请输入数字" << endl;
		return;
	}

	if (id < 1 || id > tasks.size())
	{
		cout << "无效的任务ID" << endl;
		return;
	}
	tasks.erase(tasks.begin() + id - 1);
	for (int i = 0; i < (int)tasks.size(); i++)
		tasks[i].s_ID = i + 1;
	showTodo();
	save();
	cout << "任务已删除" << endl;
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

