#include <iostream>

 using namespace std;
    int main() {

        int a, b;
        int total_students = 250;
        int failed_st = 106;
        int groups = 5;

        cout << "Total students in Engineering school: " << total_students << endl;
        cout << "Total failed students from fall semister:" << failed_st << endl;

        a = failed_st / groups;
        b = failed_st % groups;

        cout << "In each groups total number of students: " << a << endl;
        cout << "The remained students: " << b << endl;

        return 0;




    }
