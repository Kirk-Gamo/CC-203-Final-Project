#include <iostream>
#include <vector>

using namespace std;

class DeptnotifyProgramInfo {
    private:
        string welcomeMessage = "Welcome to Deptnotify++ \n";
        string divider = "------------------------------------------------------------------------------------------------------------------------------------ ";
        string programDescription = "This C++ program aims to enhance communication within the CICT department by providing a centralized platform for sharing important "
                            "\n updates and announcements. It includes a Lost and Found section to facilitate the return of lost items to their rightful owners. The "
                            "\n development of the app provides a practical opportunity for us, BSCS students, to apply and enhance our C++ programming skills. ";
        string menuPrompt = "\n What do you want to do in this program? ";
        vector<string> menuOptions = {
                "1 - Check Announcements",
                "2 - Post Announcements",
                "3 - Report a lost item",
                "4 - Report a found item",
                "5 - Check for a lost item",
                "6 - Check for a found item",
                "7 - Help"
            };
        string helpMessage = "(Optional: Add Help Message Here)";  
        // FOR STORING USER'S DECISION
        int user_decision;

    public:
        DeptnotifyProgramInfo() {  
            cout << welcomeMessage << endl;
            cout << divider << endl;
            cout << programDescription << endl;
            cout << divider << endl;
            cout << menuPrompt << endl << endl;

            for (const string& option : menuOptions) {
                cout << option << endl;
            }
            cout << divider << endl;

        }
        // Function for getting user's decision

        // Function for Checking Announcements

        // Function for Posting Announcements

        // Function for Reporting Lost Items

        // Function for Checking Lost items
        
        // Function for Reporting Found Items

        // Function for Checking Found Items

        // Function for help page

};

int main() {
    DeptnotifyProgramInfo programInfo;  

    return 0;
}