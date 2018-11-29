#include <iostream>
#include <exception>

int CallFunction(int num)
{
	if (num == 0) throw std::invalid_argument("Num can't be 0");
	return num + 1;
}

void TestMe(int num)
{
	int d = CallFunction(num);

}

void main()
{
	//Denna ska 
	//skriva ut exception message (dvs Num can't be 0)
	//skriva ut Klar
	TestMe(0);

	//Denna ska 
	//skriva ut detta gick bra - resultatet blev 2
	//skriva ut Klar
	TestMe(1);
}