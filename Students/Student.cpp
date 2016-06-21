//
//  Student.cpp
//  Class
//
//  Created by vu oanh on 6/5/16.
//  Copyright © 2016 vu oanh. All rights reserved.
//

#include "Student.hpp"
#include <iostream>

void Student::displayStudentData() {
    cout << "Student #" << idNum << "'s last name is " << lastName << endl;
    cout << "The grade point average for this student is " << gradePointAverage << endl;
}
void Student::setIdNum(int num) {
    const int MAX_NUM = 9999;
    if(num <= MAX_NUM)
        idNum = num;
    else
        idNum = MAX_NUM;
}
void Student::setLastName(string name) {
    lastName = name;
}

void Student::setGradePointAverage(double gpa) {
    const double MAX_GPA = 4.0;
    if(gpa <= MAX_GPA)
        gradePointAverage = gpa;
    else
        gradePointAverage = 0;
}
