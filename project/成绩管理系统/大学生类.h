#include"ѧ����.h"
class University_Student:public Student             //��ѧ����
{
public:

	void add_student (University_Student &);	//����ѧ����Ϣ
	void delete_student(void);	//ɾ��ѧ����Ϣ
	void revise_student(void);	//�޸�ѧ����Ϣ
	friend istream & operator>>(istream &,University_Student &);		//���ء�>>������д��ѧ����Ϣ
	friend ostream & operator<<(ostream &,University_Student &);		//���ء�<<�����ڶ�ȡѧ����Ϣ
	
//protected:

	string college_name;
	string major;
	int class_num;
	University_Student *next;

};
