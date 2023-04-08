
template <class DT>
struct SqStack															// ˳��ջ
{
	DT* base;															// ջ��ַ
	int top;															// ջ��ָ��
	int stacksize;														// ջ����
};

//����������ʵ��
//���㷨3.1��														// ��ʼ��ջ													
template <class DT>
void InitStack(SqStack<DT>& S, int m)
{
	S.base = new DT[m];												// ����ջ�ռ�
	if (S.base == NULL)												// ����ʧ�ܣ��˳�
	{
		cout << "δ�����ɹ���";
		exit(1);
	}
	S.top = -1;														// ���ÿ�ջ����
	S.stacksize = m;
}


//�㷨3.2��															// ����ջ
template <class DT>
void DestroyStack(SqStack<DT>& S)
{
	delete[] S.base;												// �ͷ�ջ�ռ�
	S.top = -1;
	S.stacksize = 0;													// ����ջ����
}


//���㷨3.3��														// ��ջ
template<class DT>
bool Push(SqStack<DT>& S, DT e)
{
	if (S.top == S.stacksize - 1)										// ջ����������ջ
		return false;												// ����false
	S.top++;
	S.base[S.top] = e;
	return true;													// ��ջ�ɹ�������true
}

//���㷨3.4��														// ��ջ
template<class DT>
bool Pop(SqStack<DT>& S, DT& e)
{
	if (S.top == -1)													// ջ��
		return false;												// ����false
	e = S.base[S.top];												// ȡջ��Ԫ��
	S.top--;														// ջ��ָ������
	return true;													// ��ջ�ɹ�������true
}


//���㷨3.5��														// ��ȡջ��Ԫ��
template<class DT>
bool GetTop(SqStack<DT> S, DT& e)
{
	if (S.top == -1)													// ջ��
		return false;												// ����false
	e = S.base[S.top];												// ջ�ǿգ�ȡջ��Ԫ��
	return true;													// ����true
}


template<class DT>
void ClearStack(SqStack<DT>& S)									// ���ջ
{
	S.top = -1;
	return;
}

// ��ջ��
template<class DT>
bool StackEmpty(SqStack<DT> S)
{
	if (S.top == -1)													// ��ջ������true
		return true;
	else															// ��ջ������false
		return false;
}

template<class DT>
bool StackFull(SqStack<DT> S)							// ��ջ��
{
	if (S.top == S.stacksize - 1)						   // ����������true
		return true;
	else												// ջ�գ�����false
		return false;
}

//��ʾջ����
template<class DT>
void DispStack(SqStack<DT> S)
{
	int i = S.top;
	while (i >= 0)
	{
		cout << S.base[i--] << "\t";
	}
	cout << endl;
}

