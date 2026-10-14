#pragma once
#include <string>

struct History {
    int history_id; // PK
    std::string matric_number; // FK to User
    int task_id; // FK to Task
    std::string viewed_date;
    std::string note;
};
