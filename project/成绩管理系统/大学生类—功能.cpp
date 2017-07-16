#include"学生成绩类.h"

#include"其它类.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void University_Student::add_student (University_Student &US1)			//增加学生信息
{
	ofstream file1;
	file1.open ("学生信息",ios::app);
	if(!file1.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	cin>>US1;
	file1<<"\n";
	file1<<US1.num;
	file1<<"\n";
	file1<<US1.name;
	file1<<"\n";
	file1<<US1.sex;
	file1<<"\n";
	file1<<US1.age;
	file1<<"\n";
	file1<<US1.college_name;
	file1<<"\n";
	file1<<US1.major;
	file1<<"\n";
	file1<<US1.class_num;
	file1<<"\n";
	
	file1.close();

	return;
}

istream & operator>>(istream &input,University_Student &US1)
{
	cout<<"请输入学生编号"<<endl;
	input>>US1.num;
	cout<<"请输入学生姓名"<<endl;
	input>>US1.name;
	cout<<"请输入学生性别"<<endl;
	input>>US1.sex;
	cout<<"请输入学生年龄"<<endl;
	input>> US1.age;
	cout<<"请输入学生所属学院名称"<<endl;
	input>>US1.college_name;
	cout<<"请输入学生所学专业"<<endl;
	input>>US1.major;
	cout<<"请输入学生所在班级编号"<<endl;
	input>>US1.class_num;
	
	return input;
}

ostream & operator<<(ostream &output,University_Student &US2)
{
	output<<"学生编号:"<<US2.num<<endl;
	output<<"学生姓名:"<<US2.name<<endl;
	output<<"学生性别:"<<US2.sex<<endl;
	output<<"学生年龄:"<<US2.age<<endl;
	output<<"学生所属学院名称:"<<US2.college_name<<endl;
	output<<"学生所学专业:"<<US2.major<<endl;
	output<<"学生所在班级编号:"<<US2.class_num<<endl;

	return output;
}
