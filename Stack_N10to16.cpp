//#include<iostream>
//using namespace std;
#include"SqStack.h"
void N10to16(int n)
{
	SqStack<int> S;//建立容量为20、元素类型为整型的空顺序栈
	InitStack(S,20);
	int k;
	while (n)
	{
		k = n % 16;
		Push(S, k);     //求十六进制各个数位并进栈(从低位到高位）
		n /= 16;
	}
	while (!StackEmpty(S))
	{
		Pop(S,k);                //从高位到低位依次出栈
		if (k <= 9)
			cout << k;
		else
			cout << char('A' + k - 10);
	}
	cout << '\n';
	DestroyStack(S);
}
void dispmenu()
{																		//显示主菜单
	cout << endl << "1--开始\n" << "0--结束\n";
}
int main()
{
	int n;
	bool choice;
	system("cls");
	do 
	{
		dispmenu();
		cout << "Enter choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> n;
			N10to16(n);
		case 0:														// 退出
			cout << "结束运行 Bye-bye!" << endl;
			break;
		default:													// 无效选择
			cout << "无效选择!\n";
			break;
		}
	} while (choice);
}