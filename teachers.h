#ifndef TEACHERS_H
#define TEACHERS_H

#include <vector>
#include <string>


struct Teacher {
    std::string firstName;
    std::string lastName;
    std::string U_ID;
    int age;
    
    std::string gender;
    std::string subject;
    std::string email;
    long long int phone_number;
};

// Declare the vector to store teachers
extern std::vector<Teacher> teachers;

#endif


