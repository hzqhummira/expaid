#pragma once
#include <string>

struct User {
    std::string matric_number; // PK
    std::string name;
    std::string email;
    std::string password;
    std::string role; // "student", "supervisor", "admin"
};
