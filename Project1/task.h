#pragma once
#include<iostream>

using namespace std;

class Tasks
{
public:
	Tasks(int id, string work);

	int s_ID;
	string works;

	void showTask();

	~Tasks() {};
};