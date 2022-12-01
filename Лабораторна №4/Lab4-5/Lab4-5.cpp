#include "Computer.h"
#include <fstream>

int main()
{
    Computer computer;
    cout << computer << endl;
    ofstream myfile;
    myfile.open("result.txt");
    myfile << computer << endl;
    myfile.close();
}
