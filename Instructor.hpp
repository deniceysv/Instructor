/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: Instructor.hpp
*/
#ifndef INSTRUCTOR_CLASS_HPP_  
#define INSTRUCTOR_CLASS_HPP_ 
 
#include <iostream>
#include<string>  
#include "Person.hpp" //Implements the base case of the Person.hpp

class Instructor:public Person
{
public:

    Instructor(); /*
//@pre Sets default constructor
//@post Sets the values to base values
//@return returns the base values if no inputs are entered
*/
    Instructor(int id, std::string first, std::string last); /*
//@pre Takes in the input from user/derives the information from the base case of Person and not Student because an instructor is a Person
//@post Assigns the ID, first and last name from the base case of person
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/  
    std::string getOffice() const; /* //@pre function that gets hours from what was taken in from setOffice
                            //@post Returns the office of the user
                            //it is a constant so it does not change
                            //@return the office that was assigned
                            */
    std::string getContact() const; /* //@pre function that gets hours from what was taken in from setContact
                            //@post Returns the contact of the user
                            //it is a constant so it does not change
                            //@return the contact that was assigned
                            */
    void setOffice(const std::string office); /* //@pre function that gets office from what was taken in 
                            //@post Assigns the office of the user and inputs it into office_
                            //it is a constant so it does not change
                            //@return the office
                            */
    void setContact(const std::string contact); /* //@pre function that gets contact from what was taken in 
                            //@post Assigns the contact of the user and inputs it into contact_
                            //it is a constant so it does not change
                            //@return the contact
                            */

private:
    std::string office_;
    std::string contact_;
};

#endif