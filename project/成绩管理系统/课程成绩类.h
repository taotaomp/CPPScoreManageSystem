#include"�γ���.h"
class Course_Score:public Course					   //�γ̳ɼ���
{
public:

	void census_course_name(void);	//�γ̷���ͳ��
	void census_score_section(void);	//������ͳ��
	friend ostream & operator<<(ostream &output,Course_Score &);
	friend istream & operator>>(istream &input, Course_Score &);
	void add_score(Course_Score);
	void show_score(void);

//protected:

	double peacetime_course;    //ƽʱ�ɼ�
	double terminal_course;     //��ĩ�ɼ�
	double total_course;        //�ܳɼ�
	Course_Score *next;
};