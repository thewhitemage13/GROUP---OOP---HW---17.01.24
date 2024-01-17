using namespace std;
#include "Student.h"
#include "Date.h"
#include "Group.h"

int main()
{
    Student a;
    a.AddExam(11);
    a.AddExam(12);
    Student b;
    b.AddExam(10);
    b.AddExam(9);
    Group g;
    g.AddStudent(a);
    g.AddStudent(b);
    g.Print();
    g.Expel();
    g.Print();

    Student copya;
    copya = a;
    Student copyb;
    copyb = b;
    Group copy;
    copy = g;
    copy.Print();    
}