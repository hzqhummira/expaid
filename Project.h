#pragma once
#include <string>

struct Project {
    int project_id; // PK
    std::string title;
    std::string description;
    std::string creator_matric; // FK to User
};
