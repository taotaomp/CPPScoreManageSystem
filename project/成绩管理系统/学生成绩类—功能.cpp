#include"ѧ���ɼ���.h"
#include"������.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
/*
void Student_Score::serach_all(void)
{
	ifstream file2;
	file2.open ("ѧ����Ϣ",ios::in);
	if(!file2.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
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
		cout<<"û����Ϣ"<<endl;
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
	ifstream file2;									//���ļ��ж���ѧ����Ϣ
	file2.open ("ѧ����Ϣ",ios::in);
	if(!file2.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
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

	ifstream file5;						//���ļ��ж���ɼ���Ϣ
	file5.open("�γ̳ɼ�",ios::in);
	if(!file5.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
		exit(1);
	}

	Course_Score *head2=NULL,*pre2,*current2,*display1[3]/*����չʾ��ָ������*/;
	
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
		cout<<"û����Ϣ"<<endl;
	}
	else
	{
		cout<<"����������Ҫ���ҵİ༶��"<<endl;
		int temp_num;
		cin>>temp_num;
		for(int i=0;i<count-1;i++)
		{
			University_Student *temp;		//�ݴ�headָ���еĵ�ַ
			temp=head1;
			if(head1->class_num==temp_num)
			{
				//cout<<*temp;
				display=temp;
				count_save=i;
					if(head2==NULL)
					{
						cout<<"û�и�����Ϣ"<<endl;
					}
					else
					{
						for(int i=0;i<count-1;i++)	//��������
						{
							Course_Score *temp;
							temp=head2;
							if(count_save==i)
							{
								for(int j=0;j<3;j++)		//ѭ�����Σ���ȡ��ѧ�������пγ���Ϣ
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
								for(int j=0;j<3;j++)		//����Ϣ��ƥ��ʱ��ѭ�����Σ��������ò�ƥ���ѧ�������пγ���Ϣ
								{
									head2=head2->next;
								}
							}
							/*	current2=head2;			//�ͷ�������ռ�ڴ�
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
	/**************************************************///�ֽ���
	
/*
	if(head2==NULL)
	{
		cout<<"û����Ϣ"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)	//��������
		{
			Course_Score *temp;
			temp=head2;
//			if(count_save==i)
			{
				for(int j=0;j<3;j++)		//ѭ�����Σ���ȡ��ѧ�������пγ���Ϣ
				{
					display1[j]=temp;
					temp=temp->next;
				}
				break;
			}
			for(int j=0;j<3;j++)		//����Ϣ��ƥ��ʱ��ѭ�����Σ��������ò�ƥ���ѧ�������пγ���Ϣ
			{
				head2=head2->next;
			}
		}

		current2=head2;			//�ͷ�������ռ�ڴ�
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
	file2.open ("ѧ����Ϣ",ios::in);
	if(!file2.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
		exit(1);
	}
	University_Student *head1=NULL,*pre1,*current1,*display/*����չʾ��ָ��*/;
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
		cout<<"û����Ϣ"<<endl;
	}
	else
	{
		cout<<"����������Ҫ���ҵ�����"<<endl;
		string temp_name;
		cin>>temp_name;
		int i;
		for(i=0;i<count-1;i++)		//��������
		{
			University_Student *temp;
			temp=head1;
			if(head1->name==temp_name)
			{
				//cout<<*temp;
				display=temp;
				count_save=i;//��¼�´�ʱ��ѭ������
				break;
			}
			head1=head1->next;
		}
		if(i==(count-1))
		{
			cout<<"���޴���"<<endl;
			return;
		}
/*
		current1=head1;			//�ͷ�������ռ�ڴ�
		while(current1!=NULL)
		{
			current1=current1->next;
			delete(current1);
		}*/
	}

//****************************************//�ֽ���

	ifstream file5;
	file5.open("�γ̳ɼ�",ios::in);
	if(!file5.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
		exit(1);
	}

	Course_Score *head2=NULL,*pre2,*current2,*display1[3]/*����չʾ��ָ������*/;
	
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
		cout<<"û����Ϣ"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)	//��������
		{
			Course_Score *temp;
			temp=head2;
			if(count_save==i)
			{
				for(int j=0;j<3;j++)		//ѭ�����Σ���ȡ��ѧ�������пγ���Ϣ
				{
					display1[j]=temp;
					temp=temp->next;
				}
				break;
			}
			for(int j=0;j<3;j++)		//����Ϣ��ƥ��ʱ��ѭ�����Σ��������ò�ƥ���ѧ�������пγ���Ϣ
			{
				head2=head2->next;
			}
		}

	/*	current2=head2;			//�ͷ�������ռ�ڴ�
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
	file2.open ("ѧ����Ϣ",ios::in);
	if(!file2.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
		exit(1);
	}
	University_Student *head1=NULL,*pre1,*current1,*display/*����չʾ��ָ��*/;
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
		cout<<"û����Ϣ"<<endl;
	}
	else
	{
		cout<<"����������Ҫ���ҵ�ѧ��"<<endl;
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
				count_save=i;//��¼�´�ʱ��ѭ������
				break;
			}
			head1=head1->next;
		}
		if(i==(count-1))
		{
			cout<<"���޴���"<<endl;
			return;
		}

		/*
		current1=head1;			//�ͷ�����
		while(current1!=NULL)
		{
			current1=current1->next;
			delete(current1);
		}*/

	}

	/*******************************************************///�ֽ���
	ifstream file5;
	file5.open("�γ̳ɼ�",ios::in);
	if(!file5.is_open())
	{
		cerr<<"�ļ���ʧ��\n";
		exit(1);
	}

	Course_Score *head2=NULL,*pre2,*current2,*display1[3]/*����չʾ��ָ������*/;
	
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
		cout<<"û����Ϣ"<<endl;
	}
	else
	{
		for(int i=0;i<count-1;i++)	//��������
		{
			Course_Score *temp;
			temp=head2;
			if(count_save==i)
			{
				for(int j=0;j<3;j++)		//ѭ�����Σ���ȡ��ѧ�������пγ���Ϣ
				{
					display1[j]=temp;
					temp=temp->next;
				}
				break;
			}
			for(int j=0;j<3;j++)		//����Ϣ��ƥ��ʱ��ѭ�����Σ��������ò�ƥ���ѧ�������пγ���Ϣ
			{
				head2=head2->next;
			}
		}

	/*	current2=head2;			//�ͷ�������ռ�ڴ�
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