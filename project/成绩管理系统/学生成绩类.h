#include"大学生类.h"
#include"课程成绩类.h"

class Student_Score:public University_Student ,public Course_Score			//学生成绩类
{
public:
	void serach_all(void);		//查找全部
	void search_class(void);	//按班级查找
	void search_name(void);		//按姓名查找
	void search_num(void);		//按学号查找
	void display(University_Student *,Course_Score *CS[]);		//展示

//protected:

	double all_course;		//总分
	double average_course;	//平均分

};
