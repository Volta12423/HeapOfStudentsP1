# HeapOfStudentsP1
## get a number of students from a csv file 
'''
class Student(){
    firstName: string
    lastName: string
    address: Address
    birthDate: Date
    gradDate: Date
    creditHour: int
    Student()
    init(string studentString)
    printStudent()
    getLastFirst() string
}

class Address{
    street: string
    city: string
    state: string
    zip: string
    Address()
    init(street, city, state, zip)
    printAddress()
}

class Date{
    month: int
    day: int
    year: int
    Date()
    init(dateString)
    printDate()
} 

Student --> Address
Student --> Date
'''

## Objective
'''
Ask how they want to sort their data with a short list of options
ask for input
organize the data or retrieve based on the paramaters they set
'''

#Heap of students 2
##
'''
int main():

string menu

void loadStudents(reference to a vector of student pointers)
    create file input stream inFile
    
void findStudent():
    given a reference to a vector of student pointers
    create a string target
    create a boolean notFound, initalize to true
    ask for last name, store in target
    Loop through all students
'''

