#include "Header.h"

int number[10];
char input[105];
int maxNum;
int maxIndex = -1;

int main()
{
	
	// �ڿ��� �Է�
	cin >> input;

	// �ش� �ε����� 1�߰�

	for (int i = 0; i < 100; ++i)
	{
		number[input[i] - '0']++;
	}

	// ���� ū �ε����� �� �Ǻ�
	for (int i = 0; i < 10; ++i)
	{
		if (input[i] >= maxNum)
		{
			if (i > maxIndex)
			{
				maxIndex = i;
			}
		}
	}
	// ���
	cout << maxIndex;
	

}