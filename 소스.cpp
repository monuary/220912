#include<iostream>
#include<string.h>
using namespace std;

char* make(int len)
{
	//char*str=(char*)malloc(sizeof(char)*len);//malloc&free ��� ��. cpp������ malloc&free�� ������ �� �� �ֱ� ������, ������� �ʴ� ���� ����.
	char* str = new char[len];//str�̶�� �����Ϳ� len��ŭ�� ������ �Ҵ�
	return str;
}

int main()
{
	char* str = make(20);
	strcpy(str, "I am so happy~");//���ڿ� ���� ���. I am so happy~�� str�� �����Ѵ�.
	cout << str << endl;
	//free(str);//malloc&free ��� ��
	delete[]str;//new�� �Ҵ��� ������ delete[]�����ͷ� Ǯ���ش�.
	return 0;
}

//new&delete�� �ᵵ ������Ʈ �Ӽ����� ��ó���� _CRT_SECURE_NO_WARNINGS �Է��� ������ �ȵȴ�.