#include"课程成绩类.h"
//#include"学生成绩类.h"
#include<string>
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void Course_Score::add_score(Course_Score CS1)
{
	ofstream file3;
	file3.open("课程成绩",ios::app);
	if(!file3.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	cin>>CS1;
	file3<<"\n";
	file3<<CS1.number;
	file3<<"\n";
	file3<<CS1.name;
	file3<<"\n";
	file3<<CS1.credit;
	file3<<"\n";
	file3<<CS1.teacher;
	file3<<"\n";
	file3<<CS1.peacetime_course;
	file3<<"\n";
	file3<<CS1.terminal_course;
	file3<<"\n";
	file3<<CS1.total_course;

	file3.close();
}

void Course_Score::show_score(void)
{
	ifstream file4;
	file4.open("课程成绩",ios::in);
	if(!file4.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	Course_Score *head=NULL,*pre,*current;
	int count1=0;

	file4.seekg(0);
	while(!file4.eof())
	{
		current=new(Course_Score);
		if(head==NULL)
		{
			head=current;
		}
		else
		{
			current->next=NULL;
			pre->next=current;
		}
		file4>>current->number;
		file4>>current->name;
		file4>>current->credit;
		file4>>current->teacher;
		file4>>current->peacetime_course;
		file4>>current->terminal_course;
		file4>>current->total_course;
		pre=current;
		count1++;
	}
	file4.close();
	if(head==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		for(int i=0;i<count1-1;i++)
		{
			cout<<*head;
			head=head->next;
		}
		current=head;
		while(current!=NULL)
		{
			current=current->next;
			delete(current);
		}
	}
	return ;
}


istream & operator>>(istream &input, Course_Score &CS1)
{
	cout<<"请输入课程编号"<<endl;
	input>>CS1.number;
	cout<<"请输入课程名称"<<endl;
	input>>CS1.name;
	cout<<"请输入学分"<<endl;
	input>>CS1.credit;
	cout<<"请输入授课教师"<<endl;
	input>>CS1.teacher;
	cout<<"请输入平时成绩"<<endl;
	input>>CS1.peacetime_course;
	cout<<"请输入期末成绩"<<endl;
	input>>CS1.terminal_course;
	cout<<"请输入总成绩"<<endl;
	input>>CS1.total_course;
	return input;
}

ostream & operator<<(ostream &output,Course_Score &CS2)
{
	output<<"课程编号"<<CS2.number<<endl;
	output<<"课程名称"<<CS2.name<<endl;
	output<<"学分"<<CS2.credit<<endl;
	output<<"授课教师"<<CS2.teacher<<endl;
	output<<"平时成绩"<<CS2.peacetime_course<<endl;
	output<<"期末成绩"<<CS2.terminal_course<<endl;
	output<<"总成绩"<<CS2.total_course<<endl;

	return output;
}
