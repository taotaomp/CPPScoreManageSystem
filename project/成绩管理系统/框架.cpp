#include"其它类.h"
#include"学生成绩类.h"
#include<iostream>
#include<iomanip>
using namespace std;

void Other ::UI(void)
{
	cout<<("\t\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    cout<<("\t\t☆\t   ┏━━━━━━━━━━━━━━┓		☆\n");
    cout<<("\t\t☆\t   ┃        1.信息维护          ┃		☆\n");
    cout<<("\t\t☆\t   ┣━━━━━━━━━━━━━━┫		☆\n");
    cout<<("\t\t☆\t   ┃        2.信息查询          ┃		☆\n");
    cout<<("\t\t☆\t   ┣━━━━━━━━━━━━━━┃		☆\n");
    cout<<("\t\t☆\t   ┃        3.成绩统计          ┃		☆\n");
    cout<<("\t\t☆\t   ┣━━━━━━━━━━━━━━┫		☆\n");
    cout<<("\t\t☆\t   ┃        4.成绩排序          ┃		☆\n");
    cout<<("\t\t☆\t   ┣━━━━━━━━━━━━━━┫		☆\n");
    cout<<("\t\t☆\t   ┃        0.退出系统          ┃		☆\n");
	cout<<("\t\t☆\t   ┗━━━━━━━━━━━━━━┛		☆\n");
 	cout<<("\t\t☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
}

void Other ::log_interface(void)
{

}

void Other ::body(void)
{
	int option=0;
	while(option!=-1)
	{
		cout<<"请选择您要使用的功能：";
		cin>>option;
		switch(option)
		{
		case 1:{
				int choose1;
				while(1)
				{
					homing();
					cout<<"请选择您要使用的功能："<<endl;
					cout<<"0.返回上一级"<<endl<<"1.增加学生信息"<<endl<<"2.删除学生信息"<<endl<<"3.修改学生信息"<<endl;
					cin>>choose1;
					if(choose1==1)
					{
						Student_Score SS1;
						SS1.add_student(SS1);
						for(int i=0;i<3;i++)
						{
							cout<<"课程"<<i+1<<"："<<endl;
							SS1.add_score(SS1);
						}
						system("pause");
					}
					else if(choose1==2)
					{
	
						system("pause");
					}
					else if(choose1==3)
					{

						system("pause");
					}
					else if(choose1==0)
					{
						homing();
						break;
					}
					else
					{
						cout<<"很抱歉，本系统现在暂无此功能"<<endl;
						continue;
					}
				}
			   }break;
		case 2:{
				int choose2;
				while(1)
				{
					homing();
					cout<<"请输入您想要查询的方式"<<endl;
					cout<<"0.返回上一级"<<endl<<"1.按班级查询"<<endl<<"2.按姓名查询"<<endl<<"3.按学号查询"<<endl;
					cin>>choose2;
					Student_Score SS1;
					if(choose2==1)
					{
						SS1.search_class();
						system("pause");
					}
					else if(choose2==2)
					{
						SS1.search_name();
						system("pause");
					}
					else if(choose2==3)
					{
						SS1.search_num();
						system("pause");
					}
					else if(choose2==0)
					{
						homing();
						break;
					}
					else
					{
						cout<<"很抱歉，本系统现在暂无此功能"<<endl;
						continue;
					}
				}
			   }break;
		case 3:{
				int choose3;
				while(1)
				{
					homing();
					cout<<"请选择统计方式"<<endl;
					cout<<"0.返回上一级"<<endl<<"1.按课程名统计"<<endl<<"2.按分数段统计"<<endl;
					cin>>choose3;
					if(choose3==0)
					{
						homing();
						break;
					}
					else if(choose3==1)
					{

						system("pause");
					}
					else if(choose3==2)
					{

						system("pause");
					}
					else
					{
						cout<<"很抱歉，本系统现在暂无此功能"<<endl;
						continue;
					}
				}
			   }break;
		case 4:{
				int choose4;
				while(1)
				{
					homing();
					cout<<"请选择排序方式"<<endl;
					cout<<"0.返回上一级"<<endl<<"1.升序"<<endl<<"2.降序"<<endl;
					cin>>choose4;
					if(choose4==0)
					{
						homing();
						break;
					}
					else if(choose4==1)
					{

						system("pause");
					}
					else if(choose4==2)
					{

						system("pause");
					}
					else
					{
						cout<<"很抱歉，本系统现在暂无此功能"<<endl;
						continue;
					}
				}
			   }break;
		case 0:{
				cout<<"您确定要退出吗？Y/N"<<endl;
				char choose0;
				cin>>choose0;
				if(choose0=='Y'||choose0=='y')
				{
					cout<<"谢谢您的使用，再见"<<endl;
					system("pause");
					exit(0);
				}
				if(choose0=='N'||choose0=='n')
				{
					homing();
					continue;
				}
			   }break;
		default:
				{
						cout<<"很抱歉，本系统现在暂无此功能"<<endl;
						system("pause");
						homing();
						continue;
				};
		};

	}

}

void Other ::homing(void)
{
	system("cls");
	UI();
}

void Student_Score ::display(University_Student *US,Course_Score *CS[])
{
	cout<<"┏━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┓"<<endl;
	cout<<"┃      学号      ┃      姓名      ┃      性别      ┃      年龄      ┃    学院名称    ┃      专业      ┃    所在班级    ┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃  "<<setw(12)<<US->num<<"  ┃     "<<setw(6)<<US->name<<"     ┃      "<<setw(4)<<US->sex<<"      ┃      "<<setw(4)<<US->age<<"      ┃   "<<setw(8)<<US->college_name<<"   ┃   "<<setw(10)<<US->major<<"   ┃     "<<setw(6)<<US->class_num<<"    ┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃    课程1编号   ┃    课程1名称   ┃      学分      ┃    授课教师    ┃    平时成绩    ┃    期末成绩    ┃     总成绩     ┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃  "<<setw(12)<<CS[0]->number<<"  ┃"<<setw(16)<<CS[0]->name<<"┃"<<setw(16)<<CS[0]->credit<<"┃"<<setw(16)<<CS[0]->teacher<<"┃"<<setw(16)<<CS[0]->peacetime_course<<"┃"<<setw(16)<<CS[0]->terminal_course<<"┃"<<setw(16)<<CS[0]->total_course<<"┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃    课程2编号   ┃    课程2名称   ┃      学分      ┃    授课教师    ┃    平时成绩    ┃    期末成绩    ┃     总成绩     ┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃  "<<setw(12)<<CS[1]->number<<"  ┃"<<setw(16)<<CS[1]->name<<"┃"<<setw(16)<<CS[1]->credit<<"┃"<<setw(16)<<CS[1]->teacher<<"┃"<<setw(16)<<CS[1]->peacetime_course<<"┃"<<setw(16)<<CS[1]->terminal_course<<"┃"<<setw(16)<<CS[1]->total_course<<"┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃    课程3编号   ┃    课程3名称   ┃      学分      ┃    授课教师    ┃    平时成绩    ┃    期末成绩    ┃     总成绩     ┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃  "<<setw(12)<<CS[2]->number<<"  ┃"<<setw(16)<<CS[2]->name<<"┃"<<setw(16)<<CS[2]->credit<<"┃"<<setw(16)<<CS[2]->teacher<<"┃"<<setw(16)<<CS[2]->peacetime_course<<"┃"<<setw(16)<<CS[2]->terminal_course<<"┃"<<setw(16)<<CS[2]->total_course<<"┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┛"<<endl;
	cout<<"┃      总分      ┃     平均分     ┃"<<endl;
	cout<<"┣━━━━━━━━╋━━━━━━━━┫"<<endl;
	cout<<"┃"<<setw(16)<<CS[0]->total_course+CS[1]->total_course+CS[2]->total_course<<"┃"<<setw(16)<<(CS[0]->total_course+CS[1]->total_course+CS[2]->total_course)/3<<"┃"<<endl;
	cout<<"┗━━━━━━━━┻━━━━━━━━┛"<<endl;
}





