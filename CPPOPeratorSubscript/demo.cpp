#include <iostream>
#include <windows.h>
using namespace std;
//[]����
//[]����ֻ�ܳ�Ա����
// ����ֵ &operator[] (����)  �����޸ļ���ȡ����
//const ����ֵ &operator[] (����) const  ֻ�ܶ�ȡ����

class CGirl
{
private:
	string boy[3];
public:
	CGirl()
	{
		boy[0] = "��̨";
		boy[1] = "��¥";
		boy[2] = "����";

	}

	void show()
	{
		cout << boy[0] <<"��" << boy[1] << "��" << boy[2] << endl;
	}
	//[]  ����ֵ���ÿ����޸ĳ�Ա
	string& operator[](int i)
	{
		if (i > 3 - 1)  //��������Ƿ�Խ��
		{
			MessageBoxA(0, "����Խ��", "����", 0);
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
	g[2] = "������";
	cout << "αװ������:" << g[0] << endl;
	g.show();

	//������������Ҫʹ�ó�����
	const CGirl g1 = g;
	cout << "αװ������:" << g1[0] << endl;


}