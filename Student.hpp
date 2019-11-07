/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: Student.hpp
*/
#ifndef STUDENT_CLASS_HPP_  
#define STUDENT_CLASS_HPP_ 
 
#include <iostream>
#include<string>  
#include "Person.hpp" //Implements the base case of the Person.hpp
 
class Student:public Person
{
public:

    Student(); /*
//@pre Sets default constructor
//@post Sets the values to base values
//@return returns the base values if no inputs are entered
*/
    Student(int id, std::string first, std::string last);  /*
//@pre Takes in the input from user/derives the information from the base case of Person
//@post Assigns the ID, first and last name from the base case
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/
    std::string getMajor() const; /* //@pre function that gets major from setMajor
                            //@post Returns the major of the user
                            //it is a constant so it does not change
                            //@return the major that was assigned
                            */
    double getGpa() const; /* //@pre function that gets GPA from setGpa
                            //@post Returns the GPA of the user
                            //it is a constant so it does not change
                            //@return the GPA that was assigned
                            */
    void setMajor(const std:: string major); /* //@pre function that gets the major from the user
                            //@post Assigns the major of the user to major_
                            //it is a constant so it does not change
                            //@return the major that was just assigned
                            */
    void setGpa(const double gpa); /* //@pre function that gets the GPA from the user
                            //@post Assigns the gpa of the user to gpa_
                            //it is a constant so it does not change
                            //@return the GPA that was just assigned
                            */

protected:
    std::string major_;
    double gpa_;
};

#endif