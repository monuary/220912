#include<iostream>
#include<string.h>
using namespace std;

char* make(int len)
{
	//char*str=(char*)malloc(sizeof(char)*len);//malloc&free 사용 시. cpp에서는 malloc&free가 문제가 될 수 있기 때문에, 사용하지 않는 것이 좋다.
	char* str = new char[len];//str이라는 포인터에 len만큼의 공간을 할당
	return str;
}

int main()
{
	char* str = make(20);
	strcpy(str, "I am so happy~");//문자열 복사 명령. I am so happy~를 str에 복사한다.
	cout << str << endl;
	//free(str);//malloc&free 사용 시
	delete[]str;//new로 할당한 공간은 delete[]포인터로 풀어준다.
	return 0;
}

//new&delete를 써도 프로젝트 속성에서 전처리기 _CRT_SECURE_NO_WARNINGS 입력을 잊으면 안된다.