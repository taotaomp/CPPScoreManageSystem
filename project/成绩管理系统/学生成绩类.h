#include"��ѧ����.h"
#include"�γ̳ɼ���.h"

class Student_Score:public University_Student ,public Course_Score			//ѧ���ɼ���
{
public:
	void serach_all(void);		//����ȫ��
	void search_class(void);	//���༶����
	void search_name(void);		//����������
	void search_num(void);		//��ѧ�Ų���
	void display(University_Student *,Course_Score *CS[]);		//չʾ

//protected:

	double all_course;		//�ܷ�
	double average_course;	//ƽ����

};
