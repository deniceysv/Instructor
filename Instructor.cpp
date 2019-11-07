/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: Instructor.cpp
*/
#include "Instructor.hpp" 
#include <iostream>
#include<string>  

Instructor::Instructor()
{ 
    /*
//@pre Sets default constructor
//@post Sets the values to base values
//@return returns the base values if no inputs are entered
*/
    id_ = 0;
    first_name_ = ""; 
    last_name_ = "";
    office_ = "";
    contact_ = "";
}
Instructor::Instructor(int id, std::string first, std::string last) : Person(id, first, last)
{ 
  /*
//@pre Takes in the input from user/derives the information from the base case of Person and not Student because an instructor is a Person
//@post Assigns the ID, first and last name from the base case of person
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/  
    id_ = id; 
    first_name_ = first;
    last_name_ = last;
   
}
std::string Instructor:: getOffice() const
{/* //@pre function that gets hours from what was taken in from setOffice
                            //@post Returns the office of the user
                            //it is a constant so it does not change
                            //@return the office that was assigned
                            */
    return office_;
}
std::string Instructor::getContact() const
{ /* //@pre function that gets hours from what was taken in from setContact
                            //@post Returns the contact of the user
                            //it is a constant so it does not change
                            //@return the contact that was assigned
                            */
    return contact_;
 }
void Instructor::setOffice(const std::string office)
 { 
     /* //@pre function that gets office from what was taken in 
                            //@post Assigns the office of the user and inputs it into office_
                            //it is a constant so it does not change
                            //@return the office
                            */
    office_ = office;
 }
void Instructor::setContact(const std::string contact)
{ 
    /* //@pre function that gets contact from what was taken in 
                            //@post Assigns the contact of the user and inputs it into contact_
                            //it is a constant so it does not change
                            //@return the contact
                            */
    contact_ = contact;
}
