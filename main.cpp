#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class COMMU
{
string pName; //���������ݳ�ԱΪ˽�е�
 string pSchool; //��λ
 string pNum; //�绰����
string Box; //�ʱ�
string Address;//��ַ
string Telephone;//�ֻ�����
string Homenumber;//��ͥ�绰
string Officenumber;//�칫�ҵ绰
public:
void Print(void) //������ݳ�Ա
{
cout << "����:" << pName << "\t";
cout << "��λ:" << pSchool << "\t";
cout << "�绰����:" << "��ͥ�绰��"<<Homenumber<<"סլ�绰��"<<Officenumber << "\t";
cout << "�ʱ�:" << Box <<"\t";
cout << "��ַ:" << Address << "\t";
cout << "�ֻ�����:" << Telephone << endl;

}
void Init(string, string, string, string,string, string);
void SetName(string name)
{
pName = name;
}
void SetScool(string unit) //����ѧУ����
{
pSchool = unit;
}
void SetNum(string homenumber,string officenumber) //���õ绰����
{
Homenumber = homenumber;
Officenumber = officenumber;
}
void SetBox(string mailnum) //�����ʱ�
{
Box = mailnum;
}
void SetAddress(string address) //���õ�ַ
{
Address = address;
}
void SetTel(string telephone) //�����ֻ�����
{
Telephone = telephone;
}

string GetName(void) //ȡ����
{
return pName;
}
string GetScool(void ) //ȡѧУ
{
return pSchool;
}
string GetNum(void) //ȡ�绰����
{
return Officenumber,Homenumber;
}
string GetBox(void) //ȡ�ʱ�
{
return Box;
}
string GetAdd(void)//ȡ��ַ
{
    return Address;
}
string GetTel(void)//ȡ�ֻ�����
{
    return Telephone;
}
};
void COMMU::Init(string name, string unit, string num, string b,string address,string telephone)
{ //��ɳ�ʼ��
pName = name;
pSchool = unit;
pNum = num;
Box = b;
Address=address;
Telephone=telephone;
}
int main()
{
COMMU c1,c2;
c1.Init("��Ԫ","�Ϻ���ѧ","021-66138861","200444","�����ʹ�ѧ����","13413153478");
c2.Init("�ں�","�Ϻ���ѧ","021-66138862","200444","�����ʹ�ѧ����","13415645671");
c1.Print();
c2.Print();
c1.SetName("������");
cout << c1.GetName()<<'\n';
c1.SetScool("�Ϻ���ͨ��ѧ");
cout << c1.GetScool()<<'\n';
c1.SetNum("021��55667878","66668888");
cout << c1.GetNum()<<"\n";
c1.SetBox("��200108");
cout<<c1.GetBox()<<"\n";
c1.Print();
system("pause");
return 0;
}
