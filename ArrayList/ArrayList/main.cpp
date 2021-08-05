#include <iostream>
#include <conio.h>
#include "ArrayList.h"
using namespace std;

int main()
{
	List list;
	LData data;
	cout << "키를 누르면 리스트가 생성됩니다\n";
	if(_getch()) {
		LInit(&list);
		cout << "리스트가 생성되었습니다\n";
	}
	while (1) {
		cout << "리스트에 추가할 값 : ";
		cin >> data;
		LInsert(&list, data);
		cout << "리스트에 " << data << " 삽입 성공\n\nspace를 누르면 종료\n\n";
		if (_getch() == ' ') break;
	}
	cout << "삽입 종료\n\n" << "현재 데이터의 수: " << LCount(&list) << "\n전체 데이터: ";
	if (LFirst(&list, &data)) {
		cout << data << ' ';
	}
	while (LNext(&list, &data)) {
		cout << data << ' ';
	}
	cout << "\n";

	cout << "\n삭제할 데이터: ";
	int n;
	cin >> n;
	if (LFirst(&list, &data)) {
		if (n == data)
			cout << LRemove(&list) << " 삭제 완료\n";
	}
	while (LNext(&list, &data)) {
		if (n == data) {
			cout << LRemove(&list) << " 삭제 완료\n";
		}
	}
	cout << "\n" << "현재 데이터의 수: " << LCount(&list) << "\n전체 데이터: ";
	if (LFirst(&list, &data)) {
		cout << data << ' ';
	}
	while (LNext(&list, &data)) {
		cout << data << ' ';
	}
	cout << "\n";

	return 0;
}