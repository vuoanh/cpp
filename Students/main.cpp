/* class in cpp */
#include "Student.cpp"
#include "Student.hpp"
#include <stdio.h>
#include<string>
#include <iostream>

using namespace std;
int main() {
  Student aStudent;
  Student anotherStudent;
  aStudent.setLastName("Smith");
  aStudent.setIdNum(3456);
  aStudent.setGradePointAverage(3.5);
  aStudent.displayStudentData();
  anotherStudent.setLastName("Wesson");
  anotherStudent.setIdNum(34567);
  anotherStudent.setGradePointAverage(4.5);
  anotherStudent.displayStudentData();
  return 0;
}
