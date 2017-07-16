#include"课程类.h"
class Course_Score:public Course					   //课程成绩类
{
public:

	void census_course_name(void);	//课程分数统计
	void census_score_section(void);	//分数段统计
	friend ostream & operator<<(ostream &output,Course_Score &);
	friend istream & operator>>(istream &input, Course_Score &);
	void add_score(Course_Score);
	void show_score(void);

//protected:

	double peacetime_course;    //平时成绩
	double terminal_course;     //期末成绩
	double total_course;        //总成绩
	Course_Score *next;
};