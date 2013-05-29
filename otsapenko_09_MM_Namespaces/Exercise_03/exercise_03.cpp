#include<iostream>
#include<new>

struct chaff
{
	char dross[20];
	int slag;
};

static const int arr_size = 2;

void fill_show_struct(chaff *);

int main()
{
	using std::cout;
	using std::endl;
	

	char buff1[BUFSIZ];
	chaff * pt_struct1;
	pt_struct1 = new (buff1) chaff[arr_size];
	cout << "Address pt_struct1: " << pt_struct1 << endl;
	fill_show_struct(pt_struct1);
	
	chaff * pt_struct2;
	char* buff2 = new char[BUFSIZ];
	pt_struct2 = new (buff2) chaff[arr_size];
	cout << "Address pt_struct2: " << pt_struct2 << endl;
	fill_show_struct(pt_struct2);

	delete [] buff2;

	system("PAUSE");
	return 0;
}

void fill_show_struct(chaff * st)
{
	using std::cout;
	using std::endl;
	
	for (int i = 0; i < arr_size; i++)
	{
		strcpy_s((st + i)->dross, "testtest");
		(st + i)->slag = 10;
	}

	for (int i = 0; i < arr_size; i++)
	{
		cout << "Dross: " << (st + i)->dross << endl;
		cout << "Slag: " << (st + i)->slag << endl;
	}
	cout << endl;

}