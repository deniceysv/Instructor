/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: Person.cpp
*/
#include "Person.hpp" 
#include <iostream>
#include<string>  

Person::Person() /*
//@pre Sets default constructor
//@post Sets the values to base values
//@return returns the base values if no inputs are entered
*/
{
    id_ = -1;
    first_name_ = "";
    last_name_ = "";
}
Person::Person(int id, std::string first, std::string last)
{ /*
//@pre Takes in the input from user
//@post Assigns the ID, first and last name
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/

    id_ = id;
    first_name_ = first;
    last_name_ = last;
}
int Person::getID() const /* //@pre function that gets ID from what was taken in
                            //@post Returns the ID of the user
                            //it is a constant so it does not change
                            //@return the ID that was assigned
                            */
{ 
    return id_;
 }
std::string Person::getFirstName() const /* //@pre function that gets first name from what was taken in
                            //@post Returns the first name of the user
                            //it is a constant so it does not change
                            //@return the first name that was assigned
                            */
 { 
     return first_name_;
 }
std::string Person::getLastName() const /* //@pre function that gets last name from what was taken in
                            //@post Returns the last name
                            //it is a constant so it does not change
                            //@return the last name that was assigned
                            */
{ 
    return last_name_;
}