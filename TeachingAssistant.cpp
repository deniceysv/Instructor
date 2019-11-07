/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: TeachingAssistant.cpp
*/
#include "TeachingAssistant.hpp" 
#include <iostream>
#include<string>  

TeachingAssistant::TeachingAssistant()
{ /*
//@pre Sets default constructor
//@post Sets the values to base values
//sets the enum role to lab assistant because it is like an if else statement where if no other positions are chosen, then it will be set to lab assistant
//@return returns the base values if no inputs are entered
*/
    id_ = 0; 
    first_name_ = ""; 
    last_name_ = "";
    major_ = "";
    gpa_ = 0;
    hours_per_week = 0;
    role_ = LAB_ASSISTANT;
}
TeachingAssistant::TeachingAssistant(int id, std::string first, std::string last) : Student(id, first, last)
{ 
    /*
//@pre Takes in the input from user/derives the information from the base case of Student because teaching assistants are students
//@post Assigns the ID, first and last name from the base case
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/
    id_ = id; 
    first_name_ = first;
    last_name_ = last;
   
}
int TeachingAssistant::getHours() const
{ /* //@pre function that gets hours from what was taken in from setHours
                            //@post Returns the hours of the user
                            //it is a constant so it does not change
                            //@return the hours that was assigned
                            */
    return hours_per_week;
 }
ta_role TeachingAssistant::getRole() const
 {  /* //@pre function that gets role from what was taken in from setRole
                            //@post Returns the role of the user
                            //it is a constant so it does not change
                            //@return the role that was assigned
                            */
     return role_;
 }
void TeachingAssistant::setHours(const int hours)
{ 
     /* //@pre function that gets hours from what was taken in 
                            //@post Assigns the hours of the user and inputs it into hours_per_week
                            //it is a constant so it does not change
                            //@return the hours
                            */
    hours_per_week = hours;
}
void TeachingAssistant::setRole(const ta_role role)
{
     /* //@pre function that gets role from what was taken in (user has to input the exact name such as LAB_ASSISTANT)
                            //@post Assigns the role to the role_
                            //it is a constant so it does not change
                            //@return the role
                            */
    role_ = role;
}