#pragma once
#include <string>

struct Feedback {
    int feedback_id; // PK
    int project_id; // FK
    std::string supervisor_id; // FK to Supervisor
    std::string comments;
    std::string date;
};
