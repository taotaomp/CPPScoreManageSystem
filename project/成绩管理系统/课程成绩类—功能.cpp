#include"�γ̳ɼ���.h"
//#include"ѧ���ɼ���.h"
#include<string>
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void Course_Score::add_score(Course_Score CS1)
{
	ofstream file3;
	file3.open("�γ̳ɼ�",ios::app);
	if(!file3.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
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
	file4.open("�γ̳ɼ�",ios::in);
	if(!file4.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
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
		cout<<"û����Ϣ"<<endl;
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
	cout<<"������γ̱��"<<endl;
	input>>CS1.number;
	cout<<"������γ�����"<<endl;
	input>>CS1.name;
	cout<<"������ѧ��"<<endl;
	input>>CS1.credit;
	cout<<"�������ڿν�ʦ"<<endl;
	input>>CS1.teacher;
	cout<<"������ƽʱ�ɼ�"<<endl;
	input>>CS1.peacetime_course;
	cout<<"��������ĩ�ɼ�"<<endl;
	input>>CS1.terminal_course;
	cout<<"�������ܳɼ�"<<endl;
	input>>CS1.total_course;
	return input;
}

ostream & operator<<(ostream &output,Course_Score &CS2)
{
	output<<"�γ̱��"<<CS2.number<<endl;
	output<<"�γ�����"<<CS2.name<<endl;
	output<<"ѧ��"<<CS2.credit<<endl;
	output<<"�ڿν�ʦ"<<CS2.teacher<<endl;
	output<<"ƽʱ�ɼ�"<<CS2.peacetime_course<<endl;
	output<<"��ĩ�ɼ�"<<CS2.terminal_course<<endl;
	output<<"�ܳɼ�"<<CS2.total_course<<endl;

	return output;
}
