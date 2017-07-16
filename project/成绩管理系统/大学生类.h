#include"学生类.h"
class University_Student:public Student             //大学生类
{
public:

	void add_student (University_Student &);	//增加学生信息
	void delete_student(void);	//删除学生信息
	void revise_student(void);	//修改学生信息
	friend istream & operator>>(istream &,University_Student &);		//重载“>>”便于写入学生信息
	friend ostream & operator<<(ostream &,University_Student &);		//重载“<<”便于读取学生信息
	
//protected:

	string college_name;
	string major;
	int class_num;
	University_Student *next;

};
