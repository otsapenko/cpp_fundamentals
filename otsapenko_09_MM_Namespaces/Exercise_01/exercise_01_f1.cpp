#include<iostream>
#include "exercise_h01.h";

int main()
{
	using std::cout;
	using std::endl;

	const int golf_st_arr_size = 3;
	golf g_struct_arr[golf_st_arr_size];
	memset(&g_struct_arr, 0, sizeof(g_struct_arr));
	
	const char name[Len] = "Player_1";
	
	setgolf(g_struct_arr[0], name, 10);
	showgolf(g_struct_arr[0]);
	cout << "---------------------------------" << endl;

	for (int i = 0; i < golf_st_arr_size; i++)
	{
		cout << endl << "Player#" << i + 1 << ": " << endl;
		if (setgolf(g_struct_arr[i]) == 0)
			break;
	}
	
	for (int i = 0; i < golf_st_arr_size; i++)
	{
		cout << endl << "Player#" << i + 1 << ": " << endl;
		showgolf(g_struct_arr[i]);
	}
	cout << "---------------------------------" << endl;

	handicap(g_struct_arr[0], 20);
	showgolf(g_struct_arr[0]);

	system("PAUSE");
	return 0;
}