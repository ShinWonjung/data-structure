#include <iostream>
#include <conio.h>
#include "ArrayList.h"
using namespace std;

int main()
{
	List list;
	LData data;
	cout << "Ű�� ������ ����Ʈ�� �����˴ϴ�\n";
	if(_getch()) {
		LInit(&list);
		cout << "����Ʈ�� �����Ǿ����ϴ�\n";
	}
	while (1) {
		cout << "����Ʈ�� �߰��� �� : ";
		cin >> data;
		LInsert(&list, data);
		cout << "����Ʈ�� " << data << " ���� ����\n\nspace�� ������ ����\n\n";
		if (_getch() == ' ') break;
	}
	cout << "���� ����\n\n" << "���� �������� ��: " << LCount(&list) << "\n��ü ������: ";
	if (LFirst(&list, &data)) {
		cout << data << ' ';
	}
	while (LNext(&list, &data)) {
		cout << data << ' ';
	}
	cout << "\n";

	cout << "\n������ ������: ";
	int n;
	cin >> n;
	if (LFirst(&list, &data)) {
		if (n == data)
			cout << LRemove(&list) << " ���� �Ϸ�\n";
	}
	while (LNext(&list, &data)) {
		if (n == data) {
			cout << LRemove(&list) << " ���� �Ϸ�\n";
		}
	}
	cout << "\n" << "���� �������� ��: " << LCount(&list) << "\n��ü ������: ";
	if (LFirst(&list, &data)) {
		cout << data << ' ';
	}
	while (LNext(&list, &data)) {
		cout << data << ' ';
	}
	cout << "\n";

	return 0;
}