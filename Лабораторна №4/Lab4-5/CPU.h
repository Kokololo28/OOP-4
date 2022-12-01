#pragma once
#include <string>
#include <iostream>
using namespace std;
class CPU
{
private:
	string mark = "AMD Ryzen 5 5600x";
	float clockFrequency = 3.7;
public:
	CPU(string mark, int clockFrequency);
	CPU();
	friend ostream& operator<<(ostream& o, const CPU& cpu);
	string getMark();
	int getClockFrequency();
};
