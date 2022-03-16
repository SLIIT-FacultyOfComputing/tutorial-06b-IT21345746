#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int no,char name[]) {
  studentID = no;
  strcpy(studentName,name);
}

// Display StudentId and Name
void Student::display() {
  std::cout<<"Student ID is "<<studentID<<std::endl;
  std::cout<<"Student name is "<<studentName<<std::endl;
}
