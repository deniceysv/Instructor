/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: Student.cpp
*/
#include "Student.hpp" 
#include <iostream>
#include<string>  

Student::Student()
{ /*
//@pre Sets default constructor
//@post Sets the values to base values
//@return returns the base values if no inputs are entered
*/
    id_ = 0; 
    first_name_ = ""; 
    last_name_ = "";
    major_ = "";
    gpa_ = 0;
}
Student::Student(int id, std::string first, std::string last) : Person(id, first, last)
{ 
    /*
//@pre Takes in the input from user/derives the information from the base case of Person
//@post Assigns the ID, first and last name from the base case
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/
    id_ = id;
    first_name_ = first;
    last_name_ = last;
   
}
std::string Student::getMajor() const /* //@pre function that gets major from setMajor
                            //@post Returns the major of the user
                            //it is a constant so it does not change
                            //@return the major that was assigned
                            */
{ 
    return major_;
 }
double Student::getGpa() const /* //@pre function that gets GPA from setGpa
                            //@post Returns the GPA of the user
                            //it is a constant so it does not change
                            //@return the GPA that was assigned
                            */
 { 
     return gpa_;
 }
void Student::setMajor(const std::string major) /* //@pre function that gets the major from the user
                            //@post Assigns the major of the user to major_
                            //it is a constant so it does not change
                            //@return the major that was just assigned
                            */
{ 
    major_ = major;
}
void Student:: setGpa(const double gpa) /* //@pre function that gets the GPA from the user
                            //@post Assigns the gpa of the user to gpa_
                            //it is a constant so it does not change
                            //@return the GPA that was just assigned
                            */
{
    gpa_ = gpa;
}