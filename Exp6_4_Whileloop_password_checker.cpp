//VIDHI RATAN
//24070123131
//B2
#include <iostream>
using namespace std;

int main() {
    string password = "vidhi@1234";
    string user_password;

    cout << "Enter the password: ";
    cin >> user_password;

    while (true) {
        if (user_password == password) {
            cout << "System is Unlocked" << endl;
            break;
        } else {
            cout << "Incorrect Password.\n";
            cout << "Enter the password: ";
            cin >> user_password;
        }
    }

    return 0;
}

/*
Output:
Enter the password: 465
Incorrect Password.
Enter the password: vidhi@1234
System is Unlocked
*/
