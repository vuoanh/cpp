//
//  Student.hpp
//  Class
//
//  Created by vu oanh on 6/5/16.
//  Copyright © 2016 vu oanh. All rights reserved.
//

#include <stdio.h>
#include<string>

#ifndef Student_hpp
#define Student_hpp


using namespace std;
class Student {
private:
    int idNum;
    string lastName;
    double gradePointAverage;
public:
    void displayStudentData();
    void setIdNum(int);
    void setLastName(string);
    void setGradePointAverage(double);
};
#endif /* Student_hpp */
