#include "CPU.h"

CPU::CPU(string mark, int clockFrequency)
{
	this->clockFrequency = clockFrequency;
	this->mark = mark;
}

CPU::CPU()
{
}

string CPU::getMark()
{
	return mark;
}

int CPU::getClockFrequency()
{
	return clockFrequency;
}

ostream& operator<<(ostream& o, const CPU& cpu)
{
	o << "CPU mark: " << cpu.mark << endl
		<< "CPU clock frequency: " << cpu.clockFrequency << " GHz";
	return o;
}
