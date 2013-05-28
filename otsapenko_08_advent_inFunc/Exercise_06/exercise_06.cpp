#include<iostream>
#include<cstring>

using namespace std;
const int int_arr_size = 6;
const double doub_arr_size = 4;
const int pt_str_size = 5;

template<class T> T maxn(T *, int size);
template <> char * maxn(char **, int size); 

int main()
{
	int int_arr[6] = {10, 50, 30, 150, 5};
	double doub_arr[4] = {1.2, 51.3, 34.0, 5.0};
	char *pt_str_arr[pt_str_size] = {"Test", "Test_String", "Testttt", "Test_String", "TetsTest"};

	cout << "Max from int array: " << maxn(int_arr, int_arr_size) << endl;
	cout << "Max from double array: " << maxn(doub_arr, doub_arr_size) << endl;

	
	cout << "Longest string is: " << maxn(pt_str_arr, pt_str_size) << endl;

	system("PAUSE");
	return 0;
}

template<class T>
T maxn(T * arr, int size)
{
	T max = 0;
	
	for (int i = 0; i < size; i++)
		max = arr[i] > max ? arr[i] : max;
	
	return max;
}

template <> char * maxn(char ** arr, int size)
{
	int max_size = 0;
	char * tmp;
	
	for (int i = 0; i < size; i++)
	{
		if (strlen(arr[i]) > max_size)
		{
			max_size = strlen(arr[i]);
			tmp = arr[i];
		}
	
	}
	
	return tmp;
}