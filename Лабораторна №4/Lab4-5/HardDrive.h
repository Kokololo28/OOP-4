#pragma once
#include <iostream>
using namespace std;
class HardDrive
{
private:
	int capacity = 1;
public:
	HardDrive(int capacity);
	HardDrive();
	friend ostream& operator<<(ostream& o, const HardDrive& hd);
	int getCapacity();
};

