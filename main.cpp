#include <iostream> 
#include <string>
#include <limits>
#include "UserManager.h"
#include "SupervisorManager.h"
#include "ProjectManager.h"
#include "TaskManager.h"
#include "FeedbackManager.h"
#include "HistoryManager.h"

using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pauseScreen() {
    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void displayBanner() {
    cout << "\n";
    cout << "=============================================================\n";
    cout << "                  E X P A I D   S Y S T E M                  \n";
    cout << "        Experiment & Project Aid Log - Version 1.0           \n";
    cout << "=============================================================\n";
    cout << "\n";
}


void displayMainMenu() {
    cout << "\n";
    cout << "-------------------- MAIN MENU --------------------\n";
    cout << "1. Register New Account\n";
    cout << "2. Login\n";
    cout << "3. Exit System\n";
    cout << "---------------------------------------------------\n";
    cout << "Enter your choice: ";
}

void displayUserMenu(const string& role) {
    cout << "\n";
    cout << "-------------------- " << role << " MENU --------------------\n";
    cout << "1. Projects / Experiments\n";
    cout << "2. Tasks & Progress Logs\n";
    cout << "3. Supervisor Feedback\n";
    cout << "4. Reports & History Viewer\n";
    cout << "5. View / Update Profile\n";
    cout << "6. Delete Account\n";
    cout << "7. Logout\n";
    cout << "---------------------------------------------------\n";
    cout << "Enter your choice: ";
}

int main() {
  /*  UserManager userMgr;
    SupervisorManager supMgr;
    ProjectManager projMgr;
    TaskManager taskMgr;
    FeedbackManager fbMgr;
    HistoryManager histMgr;*/

    while (true) {
        clearScreen();
        displayBanner();
        displayMainMenu();

        int choice;
        cin >> choice;

        if (choice == 1) {
            clearScreen();
            cout << "=== REGISTER NEW ACCOUNT ===\n";
          /*  userMgr.registerUser();*/
            pauseScreen();
        }
        else if (choice == 2) {
            clearScreen();
            cout << "=== LOGIN ===\n";
          /*  User* current = userMgr.loginUser();*/
            pauseScreen();
            /*if (!current) continue;*/

            bool logout = false;
            while (!logout) {
                clearScreen();
               /* displayUserMenu(current->role);*/
                int opt;
                cin >> opt;

                switch (opt) {
                    case 1:
                        clearScreen();
                       /* projMgr.projectMenu(current);*/
                        pauseScreen();
                        break;
                    case 2:
                        clearScreen();
                       /* taskMgr.taskMenu(current);*/
                        pauseScreen();
                        break;
                    case 3:
                        clearScreen();
                      /*  fbMgr.feedbackMenu(current);*/
                        pauseScreen();
                        break;
                    case 4:
                        clearScreen();
                    /*    histMgr.reportMenu(current);*/
                        pauseScreen();
                        break;
                    case 5:
                        clearScreen();
                        /*userMgr.viewProfile(*current);*/
                       /* userMgr.updateProfile(*current);*/
                        pauseScreen();
                        break;
                    case 6:
                      /*  userMgr.deleteUser(current->matric_number);*/
                        logout = true;
                        break;
                    case 7:
                        logout = true;
                        break;
                    default:
                        cout << "Invalid option.\n";
                        pauseScreen();
                }
            }
        }
        else if (choice == 3) {
            clearScreen();
            cout << "Thank you for using EXPAID. Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
            pauseScreen();
        }
    }

    return 0;
}
