//��һά�����Ļ����Ϲ�����ά������ʵ�ֶ�ά�����ı������������
//��ά�����볣���ļӼ��˳�����ά����֮��ļӼ������㣬
//��ά��������Ԫ�ء��С��е����ɾ��
//Author: ShenBaoyin & PangHongli     Time: 2018-05-24
#include"Vector.h"
#include <iostream>
using namespace std;

int main()
{
//����һά����
	cout << "Hello world!" << endl;
    int const A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int const B[]={1,2,5,4,7,6,9,410,3,8,9};
    Vector<int> V1(A,0,end(A)-begin(A));
    Vector<int> V2(B,0,end(B)-begin(B));
//��ά����
//������ά����
	Vector<Vector<int> > V3(6,3,Vector<int>(6,3,1));//3*3�ľ���
	Vector<Vector<int> > V4(6,3,Vector<int>(6,3,1));//3*3�ľ���
	Vector<Vector<int> > V5(6,3,Vector<int>(6,3,1));//3*3�ľ���
	Vector<Vector<int> > V6(6,3,Vector<int>(6,3,1));//3*3�ľ���

//��ά��������Ԫ�ص����롢���
	cout<<"V3[2][2]="<<V3[2][2]<<endl;
	V3[2][2]=4;
	cout<<"V3[2][2]="<<V3[2][2]<<endl;
	cout<<"����һ��int��ֵ:"<<endl;
	cin>>V3[2][2];//����һ��int��ֵ��V3[2][2]
	cout<<"V3[2][2]="<<V3[2][2]<<endl;
//ʵ�ֶ�ά�����ı������롢���
  for(int i=0;i<V3.size();i++)
	  for(int j=0;j<V3[i].size();j++)
		{
   	      V3[i][j]=(i+1)*(j+2);
		}
  for(int i=0;i<V4.size();i++)
	  for(int j=0;j<V4[i].size();j++)
		{
   	      V4[i][j]=(i+1)*(j+2);
		}
  for(int i=0;i<V5.size();i++)
	  for(int j=0;j<V5[i].size();j++)
		{
   	      V5[i][j]=(i+2)*(j+3);
		}//V3,V4,V5������

	cout<<"V3:"<<endl;
	traverse2(V3);
	cout<<"V4:"<<endl;
	traverse2(V4);
	cout<<"V5:"<<endl;
	traverse2(V5);//V3,V4,V5�ı������

	V4=V5;//��ά������ֵ
	cout<<"V4=V5:"<<endl;
	traverse2(V4);

//ʵ���ڶ�ά�����в�����
	cout<<"���ڲ�����...."<<endl<<V3.insert(2,Vector<int>(6,3,5))<<endl<<"����ɹ�"<<endl;
//insertrow(V3,2);
	traverse2(V3);
//ʵ���ڶ�ά������ɾ����
	V3.bivectorremoverow(2);
	traverse2(V3);
//ʵ���ڶ�ά�����в�����
    insertlist(V3,2,888);
	traverse2(V3);
//ʵ���ڶ�ά������ɾ����
    bivectorremovelist(V3,2);
	traverse2(V3);

//ʵ���ڶ�ά�����в��뵥��Ԫ��
	cout<<"���ڲ��뵥��Ԫ��...."<<endl<<V3[2].insert(2,999)<<endl<<"����ɹ�"<<endl;
	traverse2(V3);

//ʵ���ڶ�ά������ɾ������Ԫ��
	cout<<"����ɾ������Ԫ��...."<<endl<<V3[2].remove(2)<<endl<<"ɾ���ɹ�"<<endl;
	traverse2(V3);

//ʵ�ֶ�ά���������и�ֵ
    cout<<"���ڸ�ֵ..."<<endl;
	V3[3]=V2;
	cout<<"��ֵ�ɹ�..."<<endl;
	traverse2(V3);
	cout<<"���ڸ�ֵ..."<<endl;
	V3[2]=V4[2];
	cout<<"��ֵ�ɹ�..."<<endl;
	traverse2(V3);

//ʵ�ֶ�ά�������������в���
	bivectorfind(V3,6);

//ʵ�ֶ�ά��������ļӼ��˳�
    cout<<"���V3:"<<endl;
	traverse2(V3);
	cout<<"V3+2="<<endl;
	operation(V3,1,2);//+2
	traverse2(V3);
	cout<<"V3-2="<<endl;
	operation(V3,2,2);//-2
	traverse2(V3);
	cout<<"V3*2="<<endl;
	operation(V3,3,2);//*2
	traverse2(V3);
	cout<<"V3/2="<<endl;
	operation(V3,4,2);///2
	traverse2(V3);

//ʵ��������ά����֮��ļӼ���
	cout<<"V6:"<<endl;
	traverse2(V6);
	cout<<"V6=V6+V5:"<<endl;
	V6=add(V6,V5);
	traverse2(V6);
	cout<<"V6=V6*V5:"<<endl;
	V6=mul(V6,V5);
	traverse2(V6);
	return 0;
}
