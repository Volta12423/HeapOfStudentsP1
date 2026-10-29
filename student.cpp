//student.cpp
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "date.h"
#include "address.h"

Student::Student(){
	firstName = "";
	lastName = "";
	address = newAddress();
	birthSate = new Date();
	creditHours = 0;
}//end constructor

Student::~Student(){
	delete address;
	delete birthdate;
	delete gradDate;
}//end destructor

void Student::init(std::string studentString){
	std::stringstream converter;
	//create temp string as needed
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBirthDate;
	std::string sGradDate;
	std::string sCreditHours;

	//load up a input stream
	converter.clear();
	converter.str(studentString);
	
	//pull date from stringStream csv file
	//names go into attributes
	getLine(converter, firstName, ',');
	getLine(converter, lastName, ',');
		
}
class Student{
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date* dob;
		Date* expectedGrad;
		Address* address;
		int creditHours;
}
