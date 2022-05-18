#include <iostream>
using namespace std;
#include "book_resullt.h"
#include "file_reader.h"
#include "constants.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������������ ������ �1. GIT\n";
	cout << "������� �1. ���������� ��������\n";
	cout << "�����: ����� �������\n\n";
	book_result* results[MAX_FILE_ROWS_COUNT];
	int size;
	try
	{
		read("data.txt", results, size);
		for (int i = 0; i < size; i++)
		{
			cout << results[i]->participant.number << '\n';
			cout << results[i]->participant.last_name << '\n';
			cout << results[i]->participant.first_name << '\n';
			cout << results[i]->participant.middle_name << '\n';
			cout << results[i]->finish.hour << ' ';
			cout << results[i]->finish.minut << ' ';
			cout << results[i]->finish.second << '\n';
			cout << results[i]->start.hour << ' ';
			cout << results[i]->start.minut << ' ';
			cout << results[i]->start.second << '\n';
			cout << results[i]->club << '\n';
			cout << '\n';
		}
		for (int i = 0; i < size; i++)
		{
			delete results[i];
		}
	}
	catch (const char* error)
	{
		cout << error << '\n';
	}
	return 0;
}