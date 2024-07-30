#ifndef STUDENTS_H
#define STUDENTS_H

#include <vector>
#include <string>


   // Define the Disciplinary_Record struct
    struct Disciplinary_Record {
        std::string awards;
        std::string actions;
        std::string incidents;
    };


class Student {
public:
    std::string firstName;
    std::string lastName;
    std::string UID;
    std::string grade;

    // Additional
    std::string gender;
    std::string address;
    std::string ethnicity;
    std::string date_of_birth;

 
    Disciplinary_Record disciplinaryRecord;

    // Define the Parent_Info struct
    struct Parent_Info {
        std::string Fathers_FName;
        std::string Fathers_Lname;
        std::string Mothers_Fname;
        std::string Mothers_Lname;
        long long int phone_number1;
        long long int phone_number2;
        std::string email;
        std::string addres;
    };

 

    // Define the Medical_Info struct
    struct Medical_Info {
        std::string medical_conditions;
        std::string allergies;
        std::string medications;
        std::string doctor_contact_info;
    };

    Medical_Info Medical;
};

// Declare the vector to store students
extern std::vector<Student> students;

#endif 

