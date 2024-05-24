#include "student.h"

void addStudent(struct Student student);
void searchStudent(int roll_number);
void removeStudent(int roll_number);
int countTotalStudents();
void updateStudent(struct Student student);

struct Student students[100];
int totalStudent = 0;

void addStudent(struct Student student){
	// code here
	
	++totalStudent;
}

void searchStudent(int roll_number){
	// code here
}

void removeStudent(int roll_number){
	// code here
}

int countTotalStudents(){
	return totalStudent;
}

void updateStudent(struct Student student){
	// code here
}