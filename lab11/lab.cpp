#include <iostream>
#include <vector>
using namespace std;

struct studentStruct
{
    string name;
    string studentId;
    char section;
    bool enroll;
    int batch;
};

studentStruct input()
{
    studentStruct s;
    cout << "enter student name: \n";
    cin >> s.name;
    cout << "enter student ID: \n";
    cin >> s.studentId;
    cout << "enter section: \n";
    cin >> s.section;
    cout << "enter batch: \n";
    cin >> s.batch;
    cout << "enrollment status 1 or 0: \n";
    cin >> s.enroll;
    return s;
}

void output(vector<studentStruct> &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        studentStruct student = s[i];
        cout << "Student name is: " << student.name << endl;
        cout << "Student Id is: " << student.studentId << endl;
        cout << "Student section is: " << student.section << endl;
        cout << "Student batch is: " << student.batch << endl;
        cout << "Student enrolled 1 if enrolled 0 if not: " << student.enroll << endl;
    }
}

int main()
{
    vector<studentStruct> s;
    bool runLoop = true;
    do
    {
        int option;
        cout << "1.enter student details\n2.print details\n3.exit\n";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            studentStruct st = input();
            s.push_back(st);
        }
        break;
        case 2:
            output(s);
            cout << "\n";
            break;
        case 3:
            runLoop = false;
            break;
        default:
            cout << "Invalid input!";
            break;
        }
    } while (runLoop);

    return 0;
}
