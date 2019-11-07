/* Author: Denice Veluz
Course: CSCI - 235
Instructor: Ligorio
Assignment: Project 1: TeachingAssistant.hpp
*/
#ifndef TEACHINGASSISTANT_CLASS_HPP_  
#define TEACHINGASSISTANT_CLASS_HPP_ 
 
#include <iostream>
#include<string>  
#include "Student.hpp" //Implements the base case of the Student.hpp


enum ta_role {LAB_ASSISTANT, LECTURE_ASSISTANT, FULL_ASSISTANT};
class TeachingAssistant:public Student
{
public:

    TeachingAssistant(); /*
//@pre Sets default constructor
//@post Sets the values to base values
//sets the enum role to lab assistant because it is like an if else statement where if no other positions are chosen, then it will be set to lab assistant
//@return returns the base values if no inputs are entered
*/
    TeachingAssistant(int id, std::string first, std::string last); /*
//@pre Takes in the input from user/derives the information from the base case of Student because teaching assistants are students
//@post Assigns the ID, first and last name from the base case
//@param the ID (which is an integer), first name (which is a string), last name (which is a string) are the parameters that are taken in from the input of the user
//@return returns the assigned ID, first and last name when called
*/
    int getHours() const; /* //@pre function that gets hours from what was taken in from setHours
                            //@post Returns the hours of the user
                            //it is a constant so it does not change
                            //@return the hours that was assigned
                            */
    ta_role getRole() const; /* //@pre function that gets role from what was taken in from setRole
                            //@post Returns the role of the user
                            //it is a constant so it does not change
                            //@return the role that was assigned
                            */
    void setHours(const int hours); /* //@pre function that gets hours from what was taken in 
                            //@post Assigns the hours of the user and inputs it into hours_per_week
                            //it is a constant so it does not change
                            //@return the hours
                            */
    void setRole(const ta_role role);  /* //@pre function that gets role from what was taken in (user has to input the exact name such as LAB_ASSISTANT)
                            //@post Assigns the role to the role_
                            //it is a constant so it does not change
                            //@return the role
                            */

private:
    int hours_per_week;
    ta_role role_;
};

#endif
 