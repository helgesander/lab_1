#include "header.h"
extern unsigned short height;
extern double salary;

int main()
{
	string name;
	unsigned short age;
	unsigned short weight;

	ReadPersonData(name, age, height, weight);

	ReadPersonData(name, age, salary);
	WritePersonData(&age, name, to_string(weight), to_string(height));
    return 0;
}
