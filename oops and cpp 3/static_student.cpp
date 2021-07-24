
#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    static int addmission_no;
    student(string n)
    {
        addmission_no++;
        rollno = addmission_no;
        name = n;
    }

    void display()
    {
        cout << "name : " << name << " roll no : " << rollno << endl;
    }
};
int student::addmission_no = 0;
int main()
{
    student s1("sam");
    student s2("sai");
    s1.display();
    s2.display();
    return 0;
}