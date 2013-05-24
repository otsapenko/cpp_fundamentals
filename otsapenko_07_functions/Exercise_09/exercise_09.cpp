#include <iostream> 

using namespace std; 
const int SLEN = 30; 

struct student { 
	char fullname[SLEN]; 
	char hobby[SLEN]; 
	int ooplevel; 
}; 

// getinfo() ��������� ��� ���������: ��������� �� ������ ������� 
// ������� �������� student � �������� int, �������������� 
// ���������� ��������� � �������. ������� ����������� � 
// ��������� ������ � ���������. ���� ������������ ���� ����� 
// ���������� �������, ���� ��� ����� ������ ������ � �������� 
// ����� ��������. ������� ���������� �������������� ���������� 
//��������� ���������. 
int getinf�(student pa[], int n); 

// display]. () ��������� � �������� ��������� ��������� student 
// � ���������� �� ����������. 
void displayl(student st); 

// display2() ��������� ����� ��������� student � �������� ��������� 
// � ���������� �� ����������, 
void display2(const student * ps); 

// display3() ��������� ��������� �� ������ �������� ������� 
// �������� student � ���������� ��������� � ���� ������� � 
// ���������� ���������� ���� �������� � �������, 
void display3(const student pa[], int n); 

int main () 
{ 
	
	cout << "Enter class size: "; 
	int class_size; 
	
	cin >> class_size; 
	
	while (cin.get() != '\n') 
		continue; 

	student * ptr_stu = new student[class_size]; 
	int entered = getinf�(ptr_stu, class_size); 

	for (int i = 0; i < entered; i ++ ) 
{ 
	displayl (ptr_stu [i] ) ; 
	display2(&ptr_stu[i]); 
} 
	
	display3(ptr_stu, entered); 
	delete [] ptr_stu; 

	cout << "Done\n"; 
	system("PAUSE");
	return 0; 
} 

int getinf�(student pa[], int n)
{
	int curent_size = 0;

	for (int i = 0; i < n; i++)
	{
		cout << endl << "Student #" << i + 1 << endl;
		cout << "Please enter Full Name: ";
		cin.getline(pa[i].fullname, SLEN);
		
		if(pa[i].fullname[0] == '\0')
			break;
		
		cout << "Please enter hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		
		cout << "Please enter OOP level: ";
		cin >> pa[i].ooplevel;
		cin.get();
		
		curent_size++;
	}

	return curent_size;
}

void displayl(student st)
{
	cout << endl << "--BY VALUE--" << endl;
	cout << "Full Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "OOP Level: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	cout << endl << "--BY ADDRESS--" << endl;
	cout << "Full Name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "OOP Level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{

	cout << endl << "--ALL--" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Student #" << i + 1 << endl;
		cout << "Full Name: " << pa->fullname << endl;
		cout << "Hobby: " << pa->hobby << endl;
		cout << "OOP Level: " << pa->ooplevel << endl;
		pa++;
	}
}