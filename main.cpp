
#include "Extention.hpp";
using namespace std;
using namespace ext;

int main()
{
	setlocale(0, "rus");
	
	char* str1 = new char[100];
	char* str2 = new char[100];
	char* str3 = new char[100];
	int position, len;
	char symbol;

	cout << "���� ������� ������� ��� ������"<<endl;
	cout << "������: ";
	cin >> str1;
	cout << "�������: ";
	cin >> position;
	cout <<characterAt(str1, position)<<endl;
	cout << endl;

	cout << "���������� �������" << endl;
	cout << "������: ";
	cin >> str1;
	cout << "������: ";
	cin >> symbol;
	cout << append(str1, symbol)<<endl;
	cout << endl;

	cout << "���������� ����� ������ � ������" << endl;
	cout << "������ ������: ";
	cin >> str1;
	cout << "������ ������: ";
	cin >> str2;
	cout << concatenate(str1, str2)<<endl;
	cout << endl;

	cout << "����� ���������" << endl;
	cout << "������������ ������: ";
	cin >> str1;
	cout << "��������� �������: ";
	cin >> position;
	cout << "����� ���������: ";
	cin >> len;
	cout << substring(str1, position, 3) << endl;
	cout << endl;

	cout << "������ ���������" << endl;
	cout << "������������ ������: ";
	cin >> str1;
	cout << "������� ������: ";
	cin >> str2;
	cout << "���������� ������: ";
	cin >> str3;
	cout << replaceString(str1, str2, str3) << endl;

}