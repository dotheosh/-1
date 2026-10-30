#pragma once
#include<iostream>
#include<vector>
#include"task.h"

using namespace std;

class todo
{
private:
	vector<Tasks> tasks;
	void load();
	void save();

public:
	todo();

	void show_menu();

	void exitTodo();

	void addTodo();

	void showTodo();

	void deleteTodo();

	~todo();
};