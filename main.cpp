//在一维向量的基础上构建二维向量，实现二维向量的遍历输入输出，
//二维向量与常量的加减乘除，二维向量之间的加减乘运算，
//二维向量单个元素、行、列的添加删除
//Author: ShenBaoyin & PangHongli     Time: 2018-05-24
#include"Vector.h"
#include <iostream>
using namespace std;

int main()
{
//构建一维向量
	cout << "Hello world!" << endl;
    int const A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int const B[]={1,2,5,4,7,6,9,410,3,8,9};
    Vector<int> V1(A,0,end(A)-begin(A));
    Vector<int> V2(B,0,end(B)-begin(B));
//二维向量
//构建二维向量
	Vector<Vector<int> > V3(6,3,Vector<int>(6,3,1));//3*3的矩阵
	Vector<Vector<int> > V4(6,3,Vector<int>(6,3,1));//3*3的矩阵
	Vector<Vector<int> > V5(6,3,Vector<int>(6,3,1));//3*3的矩阵
	Vector<Vector<int> > V6(6,3,Vector<int>(6,3,1));//3*3的矩阵

//二维向量单个元素的输入、输出
	cout<<"V3[2][2]="<<V3[2][2]<<endl;
	V3[2][2]=4;
	cout<<"V3[2][2]="<<V3[2][2]<<endl;
	cout<<"输入一个int型值:"<<endl;
	cin>>V3[2][2];//输入一个int型值给V3[2][2]
	cout<<"V3[2][2]="<<V3[2][2]<<endl;
//实现二维向量的遍历输入、输出
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
		}//V3,V4,V5的输入

	cout<<"V3:"<<endl;
	traverse2(V3);
	cout<<"V4:"<<endl;
	traverse2(V4);
	cout<<"V5:"<<endl;
	traverse2(V5);//V3,V4,V5的遍历输出

	V4=V5;//二维向量赋值
	cout<<"V4=V5:"<<endl;
	traverse2(V4);

//实现在二维向量中插入行
	cout<<"正在插入行...."<<endl<<V3.insert(2,Vector<int>(6,3,5))<<endl<<"插入成功"<<endl;
//insertrow(V3,2);
	traverse2(V3);
//实现在二维向量中删除行
	V3.bivectorremoverow(2);
	traverse2(V3);
//实现在二维向量中插入列
    insertlist(V3,2,888);
	traverse2(V3);
//实现在二维向量中删除列
    bivectorremovelist(V3,2);
	traverse2(V3);

//实现在二维向量中插入单个元素
	cout<<"正在插入单个元素...."<<endl<<V3[2].insert(2,999)<<endl<<"插入成功"<<endl;
	traverse2(V3);

//实现在二维向量中删除单个元素
	cout<<"正在删除单个元素...."<<endl<<V3[2].remove(2)<<endl<<"删除成功"<<endl;
	traverse2(V3);

//实现二维向量的整行赋值
    cout<<"正在赋值..."<<endl;
	V3[3]=V2;
	cout<<"赋值成功..."<<endl;
	traverse2(V3);
	cout<<"正在赋值..."<<endl;
	V3[2]=V4[2];
	cout<<"赋值成功..."<<endl;
	traverse2(V3);

//实现二维向量的无序逐行查找
	bivectorfind(V3,6);

//实现二维向量整体的加减乘除
    cout<<"输出V3:"<<endl;
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

//实现两个二维向量之间的加减乘
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
