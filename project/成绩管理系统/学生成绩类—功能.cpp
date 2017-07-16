#include"学生成绩类.h"
#include"其它类.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
/*
void Student_Score::serach_all(void)
{
	ifstream file2;
	file2.open ("学生信息",ios::in);
	if(!file2.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	University_Student *head=NULL,*pre,*current;
	int count=0;

	file2.seekg(0);
	while(!file2.eof())
	{
		if(file2.eof()!=0)	
		{
			break;
		}
		current=new(University_Student);
		if(head==NULL)
		{
			head=current;
		}
		else
		{
			current->next=NULL;
			pre->next=current;
		}

		file2>>current->num;
		file2>>current->name;
		file2>>current->sex;
		file2>>current->age;
		file2>>current->college_name;
		file2>>current->major;
		file2>>current->class_num;
		pre=current;
		count++;
	}
	file2.close();
	if(head==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)
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

	return;
}
*/



void Student_Score::search_class(void)
{
	ifstream file2;									//从文件中读入学生信息
	file2.open ("学生信息",ios::in);
	if(!file2.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	University_Student *head1=NULL,*pre1,*current1,*display;
	int count=0;

	file2.seekg(0);
	while(!file2.eof())
	{
		if(file2.eof()!=0)	
		{
			break;
		}
		current1=new(University_Student);
		if(head1==NULL)
		{
			head1=current1;
		}
		else
		{
			current1->next=NULL;
			pre1->next=current1;
		}

		file2>>current1->num;
		file2>>current1->name;
		file2>>current1->sex;
		file2>>current1->age;
		file2>>current1->college_name;
		file2>>current1->major;
		file2>>current1->class_num;

		pre1=current1;
		count++;
	}
	file2.close();

	ifstream file5;						//从文件中读入成绩信息
	file5.open("课程成绩",ios::in);
	if(!file5.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}

	Course_Score *head2=NULL,*pre2,*current2,*display1[3]/*用于展示的指针数组*/;
	
	file5.seekg(0);
	while(!file5.eof())
	{
		if(file5.eof()!=0)	
		{
			break;
		}
		current2=new(Course_Score);
		if(head2==NULL)
		{
			head2=current2;
		}
		else
		{
			current2->next=NULL;
			pre2->next=current2;
		}
		file5>>current2->number;
		file5>>current2->name;
		file5>>current2->credit;
		file5>>current2->teacher;
		file5>>current2->peacetime_course;
		file5>>current2->terminal_course;
		file5>>current2->total_course;
		pre2=current2;
	}
	file5.close();

	int count_save;
	if(head1==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		cout<<"请输入您想要查找的班级号"<<endl;
		int temp_num;
		cin>>temp_num;
		for(int i=0;i<count-1;i++)
		{
			University_Student *temp;		//暂存head指针中的地址
			temp=head1;
			if(head1->class_num==temp_num)
			{
				//cout<<*temp;
				display=temp;
				count_save=i;
					if(head2==NULL)
					{
						cout<<"没有更多信息"<<endl;
					}
					else
					{
						for(int i=0;i<count-1;i++)	//遍历链表
						{
							Course_Score *temp;
							temp=head2;
							if(count_save==i)
							{
								for(int j=0;j<3;j++)		//循环三次，读取该学生的所有课程信息
								{
									display1[j]=temp;
									temp=temp->next;
								}
								Student_Score SS;
								SS.display (display,display1);
									break;
							}
						//	else
							{
								for(int j=0;j<3;j++)		//当信息不匹配时，循环三次，以跳过该不匹配的学生的所有课程信息
								{
									head2=head2->next;
								}
							}
							/*	current2=head2;			//释放链表所占内存
							while(current2!=NULL)
							{
								current2=current2->next;
								delete(current2);
							}*/

						}
					}
	
			}
			head1=head1->next;
		}
/*		current1=head1;
		while(current1!=NULL)
		{
			current1=current1->next;
			delete(current1);
		}*/
	}
	/**************************************************///分界线
	
/*
	if(head2==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)	//遍历链表
		{
			Course_Score *temp;
			temp=head2;
//			if(count_save==i)
			{
				for(int j=0;j<3;j++)		//循环三次，读取该学生的所有课程信息
				{
					display1[j]=temp;
					temp=temp->next;
				}
				break;
			}
			for(int j=0;j<3;j++)		//当信息不匹配时，循环三次，以跳过该不匹配的学生的所有课程信息
			{
				head2=head2->next;
			}
		}

		current2=head2;			//释放链表所占内存
		while(current2!=NULL)
		{
			current2=current2->next;
			delete(current2);
		}
	
		Student_Score SS;
		SS.display (display,display1);

	}
	*/
	return;
}

void Student_Score::search_name(void)
{
	ifstream file2;
	file2.open ("学生信息",ios::in);
	if(!file2.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	University_Student *head1=NULL,*pre1,*current1,*display/*用于展示的指针*/;
	int count=0;

	file2.seekg(0);
	while(!file2.eof())
	{
		if(file2.eof()!=0)	
		{
			break;
		}
		current1=new(University_Student);
		if(head1==NULL)
		{
			head1=current1;
		}
		else
		{
			current1->next=NULL;
			pre1->next=current1;
		}

		file2>>current1->num;
		file2>>current1->name;
		file2>>current1->sex;
		file2>>current1->age;
		file2>>current1->college_name;
		file2>>current1->major;
		file2>>current1->class_num;
	
		pre1=current1;
		count++;
	}
	file2.close();

	int count_save;	
	if(head1==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		cout<<"请输入您想要查找的姓名"<<endl;
		string temp_name;
		cin>>temp_name;
		int i;
		for(i=0;i<count-1;i++)		//遍历链表
		{
			University_Student *temp;
			temp=head1;
			if(head1->name==temp_name)
			{
				//cout<<*temp;
				display=temp;
				count_save=i;//记录下此时的循环次数
				break;
			}
			head1=head1->next;
		}
		if(i==(count-1))
		{
			cout<<"查无此人"<<endl;
			return;
		}
/*
		current1=head1;			//释放链表所占内存
		while(current1!=NULL)
		{
			current1=current1->next;
			delete(current1);
		}*/
	}

//****************************************//分界线

	ifstream file5;
	file5.open("课程成绩",ios::in);
	if(!file5.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}

	Course_Score *head2=NULL,*pre2,*current2,*display1[3]/*用于展示的指针数组*/;
	
	file5.seekg(0);
	while(!file5.eof())
	{
		if(file5.eof()!=0)	
		{
			break;
		}
		current2=new(Course_Score);
		if(head2==NULL)
		{
			head2=current2;
		}
		else
		{
			current2->next=NULL;
			pre2->next=current2;
		}
		file5>>current2->number;
		file5>>current2->name;
		file5>>current2->credit;
		file5>>current2->teacher;
		file5>>current2->peacetime_course;
		file5>>current2->terminal_course;
		file5>>current2->total_course;
		pre2=current2;
	}
	file5.close();

	if(head2==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)	//遍历链表
		{
			Course_Score *temp;
			temp=head2;
			if(count_save==i)
			{
				for(int j=0;j<3;j++)		//循环三次，读取该学生的所有课程信息
				{
					display1[j]=temp;
					temp=temp->next;
				}
				break;
			}
			for(int j=0;j<3;j++)		//当信息不匹配时，循环三次，以跳过该不匹配的学生的所有课程信息
			{
				head2=head2->next;
			}
		}

	/*	current2=head2;			//释放链表所占内存
		while(current2!=NULL)
		{
			current2=current2->next;
			delete(current2);
		}*/

		Student_Score SS;
		SS.display (display,display1);

	}

	return;
}

void Student_Score::search_num(void)
{
	ifstream file2;
	file2.open ("学生信息",ios::in);
	if(!file2.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}
	University_Student *head1=NULL,*pre1,*current1,*display/*用于展示的指针*/;
	int count=0;

	file2.seekg(0);
	while(!file2.eof())
	{
		if(file2.eof()!=0)	
		{
			break;
		}
		current1=new(University_Student);
		if(head1==NULL)
		{
			head1=current1;
		}
		else
		{
			current1->next=NULL;
			pre1->next=current1;
		}

		file2>>current1->num;
		file2>>current1->name;
		file2>>current1->sex;
		file2>>current1->age;
		file2>>current1->college_name;
		file2>>current1->major;
		file2>>current1->class_num;
	
		pre1=current1;
		count++;
	}
	file2.close();

	int count_save;
	if(head1==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		cout<<"请输入您想要查找的学号"<<endl;
		int temp_num1;
		cin>>temp_num1;
		int i;
		for(i=0;i<count-1;i++)
		{
			University_Student *temp;
			temp=head1;
			if(head1->num==temp_num1)
			{
				//cout<<*temp;
				display=temp;
				count_save=i;//记录下此时的循环次数
				break;
			}
			head1=head1->next;
		}
		if(i==(count-1))
		{
			cout<<"查无此人"<<endl;
			return;
		}

		/*
		current1=head1;			//释放链表
		while(current1!=NULL)
		{
			current1=current1->next;
			delete(current1);
		}*/

	}

	/*******************************************************///分界线
	ifstream file5;
	file5.open("课程成绩",ios::in);
	if(!file5.is_open())
	{
		cerr<<"文件打开失败\n";
		exit(1);
	}

	Course_Score *head2=NULL,*pre2,*current2,*display1[3]/*用于展示的指针数组*/;
	
	file5.seekg(0);
	while(!file5.eof())
	{
		if(file5.eof()!=0)	
		{
			break;
		}
		current2=new(Course_Score);
		if(head2==NULL)
		{
			head2=current2;
		}
		else
		{
			current2->next=NULL;
			pre2->next=current2;
		}
		file5>>current2->number;
		file5>>current2->name;
		file5>>current2->credit;
		file5>>current2->teacher;
		file5>>current2->peacetime_course;
		file5>>current2->terminal_course;
		file5>>current2->total_course;
		pre2=current2;
	}
	file5.close();

	if(head2==NULL)
	{
		cout<<"没有信息"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)	//遍历链表
		{
			Course_Score *temp;
			temp=head2;
			if(count_save==i)
			{
				for(int j=0;j<3;j++)		//循环三次，读取该学生的所有课程信息
				{
					display1[j]=temp;
					temp=temp->next;
				}
				break;
			}
			for(int j=0;j<3;j++)		//当信息不匹配时，循环三次，以跳过该不匹配的学生的所有课程信息
			{
				head2=head2->next;
			}
		}

	/*	current2=head2;			//释放链表所占内存
		while(current2!=NULL)
		{
			current2=current2->next;
			delete(current2);
		}*/

		Student_Score SS;
		SS.display (display,display1);

	}


	return;
}