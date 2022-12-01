#pragma once
#include "CPU.h"
#include "HardDrive.h"
class Computer : public CPU, public HardDrive
{
private:
	string model = "PC";
	int price = 1500;
public:
	Computer();
	Computer(string model, int price);
	Computer(string model, int price, string cpuMark, int cpuClockFrequency);
	Computer(string model, int price, string cpuMark, int cpuClockFrequency, int hardDriveCapacity);
	friend ostream& operator<<(ostream& o, const Computer& c);
	string getModel();
	int getPrice();
};

