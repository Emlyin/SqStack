//#include<iostream>
//using namespace std;
#include"SqStack.h"
void N10to16(int n)
{
	SqStack<int> S;//��������Ϊ20��Ԫ������Ϊ���͵Ŀ�˳��ջ
	InitStack(S,20);
	int k;
	while (n)
	{
		k = n % 16;
		Push(S, k);     //��ʮ�����Ƹ�����λ����ջ(�ӵ�λ����λ��
		n /= 16;
	}
	while (!StackEmpty(S))
	{
		Pop(S,k);                //�Ӹ�λ����λ���γ�ջ
		if (k <= 9)
			cout << k;
		else
			cout << char('A' + k - 10);
	}
	cout << '\n';
	DestroyStack(S);
}
void dispmenu()
{																		//��ʾ���˵�
	cout << endl << "1--��ʼ\n" << "0--����\n";
}
int main()
{
	int n;
	bool choice;
	do 
	{
		dispmenu();
		cout << "Enter choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Please input a number:\n";
			cin >> n;
			cout << "nת��Ϊʮ������Ϊ��";
			N10to16(n);                                               //����N10to16
			break;
		case 0:														// �˳�
			cout << "�������� Bye-bye!" << endl;
			break;
		default:													// ��Чѡ��
			cout << "��Чѡ��!\n";
			break;
		}
		system("pause");
		system("cls");
	} while (choice);
	return 0;
}