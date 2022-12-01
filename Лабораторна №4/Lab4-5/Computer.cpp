#include "Computer.h"

ostream& operator<<(ostream& o, const Computer& c)
{
	o << "Computer model: " << c.model << endl
		<< "Computer price: $" << c.price << endl
		<< (CPU)c << endl
		<< (HardDrive)c << endl;
	return o;
}

Computer::Computer(string model, int price)
{
	this->model = model;
	this->price = price;
}

Computer::Computer(string model, int price, string cpuMark, int cpuClockFrequency) : CPU(cpuMark, cpuClockFrequency)
{
	Computer(model, price);
}

Computer::Computer(string model, int price, string cpuMark, int cpuClockFrequency, int hardDriveCapacity) : HardDrive(hardDriveCapacity)
{
	Computer(model, price, cpuMark, cpuClockFrequency);
}

string Computer::getModel()
{
	return model;
}

int Computer::getPrice()
{
	return price;
}

Computer::Computer()
{
}
