#include <iostream>
#include "ticketsystem.h"

using namespace std;

int main() {
    ticketsystem system;
    int choice;

    do {
        cout << "\nMovie Ticket Booking System\n";
        cout << "1. Display Movies\n";
        cout << "2. Book Tickets\n";
        cout << "3. Cancel Tickets\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.displaymovies();
                break;
            case 2:
                system.reserveticket();
                break;
            case 3:
                system.cancelticket();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
