#include"ѧ���ɼ���.h"

#include"������.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void University_Student::add_student (University_Student &US1)			//����ѧ����Ϣ
{
	ofstream file1;
	file1.open ("ѧ����Ϣ",ios::app);
	if(!file1.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
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
	cout<<"������ѧ�����"<<endl;
	input>>US1.num;
	cout<<"������ѧ������"<<endl;
	input>>US1.name;
	cout<<"������ѧ���Ա�"<<endl;
	input>>US1.sex;
	cout<<"������ѧ������"<<endl;
	input>> US1.age;
	cout<<"������ѧ������ѧԺ����"<<endl;
	input>>US1.college_name;
	cout<<"������ѧ����ѧרҵ"<<endl;
	input>>US1.major;
	cout<<"������ѧ�����ڰ༶���"<<endl;
	input>>US1.class_num;
	
	return input;
}

ostream & operator<<(ostream &output,University_Student &US2)
{
	output<<"ѧ�����:"<<US2.num<<endl;
	output<<"ѧ������:"<<US2.name<<endl;
	output<<"ѧ���Ա�:"<<US2.sex<<endl;
	output<<"ѧ������:"<<US2.age<<endl;
	output<<"ѧ������ѧԺ����:"<<US2.college_name<<endl;
	output<<"ѧ����ѧרҵ:"<<US2.major<<endl;
	output<<"ѧ�����ڰ༶���:"<<US2.class_num<<endl;

	return output;
}
