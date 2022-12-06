#include <iostream>
#include <windows.h>
using namespace std;
//[]重载
//[]重载只能成员函数
// 返回值 &operator[] (参数)  可以修改及读取数据
//const 返回值 &operator[] (参数) const  只能读取数据

class CGirl
{
private:
	string boy[3];
public:
	CGirl()
	{
		boy[0] = "明台";
		boy[1] = "明楼";
		boy[2] = "名城";

	}

	void show()
	{
		cout << boy[0] <<"、" << boy[1] << "、" << boy[2] << endl;
	}
	//[]  返回值引用可以修改成员
	string& operator[](int i)
	{
		if (i > 3 - 1)  //检测数组是否越界
		{
			MessageBoxA(0, "数组越界", "警告", 0);
			exit(1);
		}
		return boy[i];
	}
	const string& operator[](int i) const
	{
		return boy[i];
	}
};
int main()
{
	CGirl g;
	g[2] = "汪精卫";
	cout << "伪装者主角:" << g[0] << endl;
	g.show();

	//常对象引用需要使用常对象
	const CGirl g1 = g;
	cout << "伪装者主角:" << g1[0] << endl;


}