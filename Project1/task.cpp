#include"task.h"	

Tasks::Tasks(int id, string work)
{
	s_ID = id;
	works = work;
}

void Tasks::showTask()
{
	cout << "任务ID:" << s_ID << endl;
	cout << "任务内容:" << works << endl;
	cout << endl;
}