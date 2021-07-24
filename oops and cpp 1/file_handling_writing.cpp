#include <iostream>
#include <fstream>
using namespace std;
//writing into file
int main()
{

    ofstream out("sam.txt");
    out << "samadhan Turakane" << endl;
    out << 57 << endl;
    out << "computer science" << endl;
    out.close();
    return 0;
}