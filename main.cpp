#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class COMMU
{
string pName; //姓名，数据成员为私有的
 string pSchool; //单位
 string pNum; //电话号码
string Box; //邮编
string Address;//地址
string Telephone;//手机号码
string Homenumber;//家庭电话
string Officenumber;//办公室电话
public:
void Print(void) //输出数据成员
{
cout << "姓名:" << pName << "\t";
cout << "单位:" << pSchool << "\t";
cout << "电话号码:" << "家庭电话："<<Homenumber<<"住宅电话："<<Officenumber << "\t";
cout << "邮编:" << Box <<"\t";
cout << "地址:" << Address << "\t";
cout << "手机号码:" << Telephone << endl;

}
void Init(string, string, string, string,string, string);
void SetName(string name)
{
pName = name;
}
void SetScool(string unit) //设置学校名称
{
pSchool = unit;
}
void SetNum(string homenumber,string officenumber) //设置电话号码
{
Homenumber = homenumber;
Officenumber = officenumber;
}
void SetBox(string mailnum) //设置邮编
{
Box = mailnum;
}
void SetAddress(string address) //设置地址
{
Address = address;
}
void SetTel(string telephone) //设置手机号码
{
Telephone = telephone;
}

string GetName(void) //取姓名
{
return pName;
}
string GetScool(void ) //取学校
{
return pSchool;
}
string GetNum(void) //取电话号码
{
return Officenumber,Homenumber;
}
string GetBox(void) //取邮编
{
return Box;
}
string GetAdd(void)//取地址
{
    return Address;
}
string GetTel(void)//取手机号码
{
    return Telephone;
}
};
void COMMU::Init(string name, string unit, string num, string b,string address,string telephone)
{ //完成初始化
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
c1.Init("王元","上海大学","021-66138861","200444","新世纪大学生村","13413153478");
c2.Init("于海","上海大学","021-66138862","200444","新世纪大学生村","13415645671");
c1.Print();
c2.Print();
c1.SetName("李明明");
cout << c1.GetName()<<'\n';
c1.SetScool("上海交通大学");
cout << c1.GetScool()<<'\n';
c1.SetNum("021—55667878","66668888");
cout << c1.GetNum()<<"\n";
c1.SetBox("“200108");
cout<<c1.GetBox()<<"\n";
c1.Print();
system("pause");
return 0;
}
