#pragma once
#include <string>

struct Task {
    int task_id; // PK
    int project_id; // FK to Project
    std::string title;
    std::string description;
    std::string status; // e.g., "Pending", "In Progress", "Completed"
};
