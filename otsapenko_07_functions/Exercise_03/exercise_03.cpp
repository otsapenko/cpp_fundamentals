#include<iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_struct(const box st);
void mod_struct(box *);


int main()
{
	box my_struct = {"Maker", 10, 10, 10, 10};
	
	show_struct(my_struct);
	mod_struct(&my_struct);
	show_struct(my_struct);

	system("PAUSE");
	return 0;
}

void show_struct(const box my_struct)
{
	cout << "Maker: " << my_struct.maker << endl
		 << "Length: " << my_struct.length << endl
		 << "Height: " << my_struct.height << endl
		 << "Width: " << my_struct.width << endl
		 << "Volume: " << my_struct.volume << endl << endl;
}

void mod_struct(box *my_struct)
{
	my_struct->volume = my_struct->height * my_struct->length * my_struct->width;
}