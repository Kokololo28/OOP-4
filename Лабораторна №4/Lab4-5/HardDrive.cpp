#include "HardDrive.h"

ostream& operator<<(ostream& o, const HardDrive& hd)
{
    o << "Hard drive capacity: " << hd.capacity << " TB";
    return o;
}

HardDrive::HardDrive(int capacity)
{
    this->capacity = capacity;
}

HardDrive::HardDrive()
{
}

int HardDrive::getCapacity()
{
    return capacity;
}
