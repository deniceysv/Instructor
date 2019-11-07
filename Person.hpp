/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: Person.hpp
*/

#ifndef PERSON_CLASS_HPP_  
#define PERSON_CLASS_HPP_ 
 
#include <iostream>
#include<string>  

 
class Person
{ 
public: 
    Person(); /*
//@pre Sets default constructor
//@post Sets the values to base values
//@return returns the base values if no inputs are entered
*/
    Person(int id, std::string first, std::string last); /*
//@pre Takes in the input from user
//@post Assigns the ID, first and last name
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/
    int getID() const; /* //@pre function that gets ID from what was taken in
                            //@post Returns the ID of the user
                            //it is a constant so it does not change
                            //@return the ID that was assigned
                            */
    std::string getFirstName() const; /* //@pre function that gets first name from what was taken in
                            //@post Returns the first name of the user
                            //it is a constant so it does not change
                            //@return the first name that was assigned
                            */
    std::string getLastName() const; /* //@pre function that gets last name from what was taken in
                            //@post Returns the last name
                            //it is a constant so it does not change
                            //@return the last name that was assigned
                            */
 
 
protected:
    int id_;
    std::string first_name_;
    std::string last_name_;
}; //ends Person Class

#endif
