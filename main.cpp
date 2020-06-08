#include "Extention.hpp"
using namespace std;
using namespace ext;

void printMark(Grade Mark);
void printStudent(int num, Student student)
{
	cout << setw(3)<< num + 1 << ") ";
	cout << "Id: " << setw(3)<< student.Id << ", ";
	cout << "���: " << setw(6)<<student.Name << ", ";
	cout << "������: " ;
	printMark(student.Mark);
	cout << endl;
}
void printMark(Grade Mark)
{
	if (Mark != F) cout << static_cast<char>(70 - Mark);
	else cout << "F";
}

int main()
{
	setlocale(0, "rus");

	Student* Stud = new Student[StudentSum];
	for (int i = 0; i < StudentSum; i++)
		StudentsGeneration(Stud[i]);

	int* index[3]{};
	index[0] = nullptr;

	char fashion[10]{};

	while (true)
	{
	cout << "\nC��������� ���������:\n1)�� Id\n2)�� Mark(������)\n3)�� Name(�����)\n";
    cout<<"\n4)������ ���� ������\n5)����� ����� ���.% ���������\n����� ������ ����� - �����\n\n";

	cout << "��� �����: ";
    int choice;
	cin >> choice;
	cin.ignore();
	cout << endl;

	switch (choice)
	{
	    case  1:
		case  2:
		case  3:
			Pole pole;
			pole = static_cast<Pole>(choice - 1);

			if (!index[pole])
			{
				index[pole] = new int[StudentSum];
				Sort(index[pole], Stud, pole);
			}

			for (int i = 0; i < StudentSum; i++)
				printStudent(i, Stud[index[pole][i]]);

			break;
		
		case 4:				
			
			if (strcmp(fashion,"")==0) Fashion(Stud, fashion);
			cout << "C�������� ��������� ����: "<<fashion<< endl;
			break;

		case 5:			
			if (!index[mark])
			{
				index[mark] = new int[StudentSum];
				Sort(index[mark], Stud, mark);
			}
			cout << "����� ������ ��������?\n��� �����: ";
			int percent;
			cin >> percent;
			cin.ignore();
			cout << endl;

			cout << "����� ����� ����� " << percent << "% c�������� ����� ��������:\n";
	
			for (int i = Stud[index[mark][100-percent]].Mark+1; i <= A; i++)
			{
				printMark(static_cast<Grade>(i));
				if (i != 5) cout << " ��� ";
			}
			cout << endl;
			break;
	}
	
	cout << "\n�������� �����? ( 1 - ��, 0 - ��� )\n��� �����: ";
	char cleaning;
	cin >> cleaning;
	cin.ignore();
	if (cleaning == '1') system("cls");
	else cout << endl;
	}
}