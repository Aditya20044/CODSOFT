#include <iostream>
using namespace std;

int main() {
    string studentName;
    int grade1, grade2, grade3, grade4;

    cout << "Enter Student Name: ";
    cin >> studentName;

    cout << "Enter Grade for the 1st Subject: ";
    cin >> grade1;

    cout << "Enter Grade for the 2nd Subject: ";
    cin >> grade2;

    cout << "Enter Grade for the 3rd Subject: ";
    cin >> grade3;

    cout << "Enter Grade for the 4th Subject: ";
    cin >> grade4;

    float average = (grade1 + grade2 + grade3 + grade4) / 4.0;
    cout << "Average Grade = " << average << endl;

    if (grade1 > grade2 && grade1 > grade3 && grade1 > grade4) {
        cout << studentName << ", you achieved the highest grade in the 1st Subject." << endl;
    } else if (grade2 > grade1 && grade2 > grade3 && grade2 > grade4) {
        cout << studentName << ", you achieved the highest grade in the 2nd Subject." << endl;
    } else if (grade3 > grade1 && grade3 > grade2 && grade3 > grade4) {
        cout << studentName << ", you achieved the highest grade in the 3rd Subject." << endl;
    } else {
        cout << studentName << ", you achieved the highest grade in the 4th Subject." << endl;
    }

    if (grade1 < grade2 && grade1 < grade3 && grade1 < grade4) {
        cout << studentName << ", you achieved the lowest grade in the 1st Subject." << endl;
    } else if (grade2 < grade1 && grade2 < grade3 && grade2 < grade4) {
        cout << studentName << ", you achieved the lowest grade in the 2nd Subject." << endl;
    } else if (grade3 < grade1 && grade3 < grade2 && grade3 < grade4) {
        cout << studentName << ", you achieved the lowest grade in the 3rd Subject." << endl;
    } else {
        cout << studentName << ", you achieved the lowest grade in the 4th Subject." << endl;
    }

    return 0;
}

