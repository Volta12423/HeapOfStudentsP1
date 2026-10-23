#include <iostream>
#include <sstream>
#include "dates.h"

Date():Date(){
	month = 1;
	day = 1;
	year = 2000;
}//end constructor

void Date::init(std:string dateString){
	//dateString is mm/dd/yyyy
	
	//male a dtringstream
	std::stringstream converter;
	std::string sMonth;
	std:: string sDay;
	stdLLstring sYear;
	
	//seperate to temp strings
	converter.str(dateString);
	getLine(converter, sMonth, '/');
	getLine(converter, sDay, '/');
	getLine(converter, sYear, '/');

	//convert to ints
	converter.clear();
	converter.str("");

	converter << sMonth << " " << sDay << " " << sYear;
	converter >> month >> day >> year;
}//end init
 
	void Date::printDate(){
		std::cout << month << " " << day << " " << year << std::endl;
	}
