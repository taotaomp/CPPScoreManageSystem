#include"������.h"
#include"ѧ���ɼ���.h"
#include<iostream>
#include<iomanip>
using namespace std;

void Other ::UI(void)
{
	cout<<("\t\t������������������������������\n");
    cout<<("\t\t��\t   ��������������������������������		��\n");
    cout<<("\t\t��\t   ��        1.��Ϣά��          ��		��\n");
    cout<<("\t\t��\t   �ǩ�����������������������������		��\n");
    cout<<("\t\t��\t   ��        2.��Ϣ��ѯ          ��		��\n");
    cout<<("\t\t��\t   �ǩ�����������������������������		��\n");
    cout<<("\t\t��\t   ��        3.�ɼ�ͳ��          ��		��\n");
    cout<<("\t\t��\t   �ǩ�����������������������������		��\n");
    cout<<("\t\t��\t   ��        4.�ɼ�����          ��		��\n");
    cout<<("\t\t��\t   �ǩ�����������������������������		��\n");
    cout<<("\t\t��\t   ��        0.�˳�ϵͳ          ��		��\n");
	cout<<("\t\t��\t   ��������������������������������		��\n");
 	cout<<("\t\t������������������������������\n");
}

void Other ::log_interface(void)
{

}

void Other ::body(void)
{
	int option=0;
	while(option!=-1)
	{
		cout<<"��ѡ����Ҫʹ�õĹ��ܣ�";
		cin>>option;
		switch(option)
		{
		case 1:{
				int choose1;
				while(1)
				{
					homing();
					cout<<"��ѡ����Ҫʹ�õĹ��ܣ�"<<endl;
					cout<<"0.������һ��"<<endl<<"1.����ѧ����Ϣ"<<endl<<"2.ɾ��ѧ����Ϣ"<<endl<<"3.�޸�ѧ����Ϣ"<<endl;
					cin>>choose1;
					if(choose1==1)
					{
						Student_Score SS1;
						SS1.add_student(SS1);
						for(int i=0;i<3;i++)
						{
							cout<<"�γ�"<<i+1<<"��"<<endl;
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
						cout<<"�ܱ�Ǹ����ϵͳ�������޴˹���"<<endl;
						continue;
					}
				}
			   }break;
		case 2:{
				int choose2;
				while(1)
				{
					homing();
					cout<<"����������Ҫ��ѯ�ķ�ʽ"<<endl;
					cout<<"0.������һ��"<<endl<<"1.���༶��ѯ"<<endl<<"2.��������ѯ"<<endl<<"3.��ѧ�Ų�ѯ"<<endl;
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
						cout<<"�ܱ�Ǹ����ϵͳ�������޴˹���"<<endl;
						continue;
					}
				}
			   }break;
		case 3:{
				int choose3;
				while(1)
				{
					homing();
					cout<<"��ѡ��ͳ�Ʒ�ʽ"<<endl;
					cout<<"0.������һ��"<<endl<<"1.���γ���ͳ��"<<endl<<"2.��������ͳ��"<<endl;
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
						cout<<"�ܱ�Ǹ����ϵͳ�������޴˹���"<<endl;
						continue;
					}
				}
			   }break;
		case 4:{
				int choose4;
				while(1)
				{
					homing();
					cout<<"��ѡ������ʽ"<<endl;
					cout<<"0.������һ��"<<endl<<"1.����"<<endl<<"2.����"<<endl;
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
						cout<<"�ܱ�Ǹ����ϵͳ�������޴˹���"<<endl;
						continue;
					}
				}
			   }break;
		case 0:{
				cout<<"��ȷ��Ҫ�˳���Y/N"<<endl;
				char choose0;
				cin>>choose0;
				if(choose0=='Y'||choose0=='y')
				{
					cout<<"лл����ʹ�ã��ټ�"<<endl;
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
						cout<<"�ܱ�Ǹ����ϵͳ�������޴˹���"<<endl;
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
	cout<<"�������������������ש����������������ש����������������ש����������������ש����������������ש����������������ש�����������������"<<endl;
	cout<<"��      ѧ��      ��      ����      ��      �Ա�      ��      ����      ��    ѧԺ����    ��      רҵ      ��    ���ڰ༶    ��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������贈���������������贈���������������贈����������������"<<endl;
	cout<<"��  "<<setw(12)<<US->num<<"  ��     "<<setw(6)<<US->name<<"     ��      "<<setw(4)<<US->sex<<"      ��      "<<setw(4)<<US->age<<"      ��   "<<setw(8)<<US->college_name<<"   ��   "<<setw(10)<<US->major<<"   ��     "<<setw(6)<<US->class_num<<"    ��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������ߩ����������������贈���������������贈����������������"<<endl;
	cout<<"��    �γ�1���   ��    �γ�1����   ��      ѧ��      ��    �ڿν�ʦ    ��    ƽʱ�ɼ�    ��    ��ĩ�ɼ�    ��     �ܳɼ�     ��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������贈���������������贈���������������贈����������������"<<endl;
	cout<<"��  "<<setw(12)<<CS[0]->number<<"  ��"<<setw(16)<<CS[0]->name<<"��"<<setw(16)<<CS[0]->credit<<"��"<<setw(16)<<CS[0]->teacher<<"��"<<setw(16)<<CS[0]->peacetime_course<<"��"<<setw(16)<<CS[0]->terminal_course<<"��"<<setw(16)<<CS[0]->total_course<<"��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������ߩ����������������贈���������������贈����������������"<<endl;
	cout<<"��    �γ�2���   ��    �γ�2����   ��      ѧ��      ��    �ڿν�ʦ    ��    ƽʱ�ɼ�    ��    ��ĩ�ɼ�    ��     �ܳɼ�     ��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������贈���������������贈���������������贈����������������"<<endl;
	cout<<"��  "<<setw(12)<<CS[1]->number<<"  ��"<<setw(16)<<CS[1]->name<<"��"<<setw(16)<<CS[1]->credit<<"��"<<setw(16)<<CS[1]->teacher<<"��"<<setw(16)<<CS[1]->peacetime_course<<"��"<<setw(16)<<CS[1]->terminal_course<<"��"<<setw(16)<<CS[1]->total_course<<"��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������贈���������������贈���������������贈����������������"<<endl;
	cout<<"��    �γ�3���   ��    �γ�3����   ��      ѧ��      ��    �ڿν�ʦ    ��    ƽʱ�ɼ�    ��    ��ĩ�ɼ�    ��     �ܳɼ�     ��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������贈���������������贈���������������贈���������������贈����������������"<<endl;
	cout<<"��  "<<setw(12)<<CS[2]->number<<"  ��"<<setw(16)<<CS[2]->name<<"��"<<setw(16)<<CS[2]->credit<<"��"<<setw(16)<<CS[2]->teacher<<"��"<<setw(16)<<CS[2]->peacetime_course<<"��"<<setw(16)<<CS[2]->terminal_course<<"��"<<setw(16)<<CS[2]->total_course<<"��"<<endl;
	cout<<"�ǩ����������������贈���������������贈���������������ߩ����������������ߩ����������������ߩ����������������ߩ�����������������"<<endl;
	cout<<"��      �ܷ�      ��     ƽ����     ��"<<endl;
	cout<<"�ǩ����������������贈����������������"<<endl;
	cout<<"��"<<setw(16)<<CS[0]->total_course+CS[1]->total_course+CS[2]->total_course<<"��"<<setw(16)<<(CS[0]->total_course+CS[1]->total_course+CS[2]->total_course)/3<<"��"<<endl;
	cout<<"�������������������ߩ�����������������"<<endl;
}





