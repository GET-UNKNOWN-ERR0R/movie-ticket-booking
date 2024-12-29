#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "ticketsystem.h"

using namespace std;

ticketsystem::ticketsystem() {
    movies.push_back({"Avengers:Endgame", "12:00 PM"});
    movies.push_back({"Titanic", "2:30 PM"});
    movies.push_back({"Avatar", "5:00 PM"});
    movies.push_back({"Spider-Man:No Way Home", "7:30 PM"});
    movies.push_back({"Motu-Patlu", "9:15 PM"});
}

void ticketsystem::displaymovies() {
    cout << "\nAvailable Movies and Showtimes:\n";
    for (size_t i = 0; i < movies.size(); ++i) {
        cout << i + 1 << ". " << movies[i].name << " - " << movies[i].showtime << endl;
    }
}

void ticketsystem::reserveticket() {
    int choice, numberOfTickets;
    cout << "\nEnter movie number to book tickets: ";
    cin >> choice;
    if (choice < 1 || choice > movies.size()) {
        cout << "Invalid choice! Please try again.\n";
        return;
    }

    cout << "Enter number of tickets: ";
    cin >> numberOfTickets;

    if (numberOfTickets <= 0) {
        cout << "Invalid number of tickets!\n";
        return;
    }

    cout << "Booking Successful for " << movies[choice - 1].name
         << " (" << numberOfTickets << " tickets).\n";

    // Generate receipt
    generatereceipt(movies[choice - 1].name, numberOfTickets);
}

void ticketsystem::cancelticket() {
    int choice;
    cout << "\nEnter movie number to cancel Booking: ";
    cin >> choice;

    if (choice < 1 || choice > movies.size()) {
        cout << "Invalid choice! Please try again.\n";
        return;
    }

    cout << "Booking for " << movies[choice - 1].name << " has been canceled.\n";
}

void ticketsystem::generatereceipt(const string &movieName, int tickets) {
    ofstream receiptFile("receipts/receipt.txt", ios::app);
    if (receiptFile.is_open()) {
        receiptFile << "Movie: " << movieName << "\n";
        receiptFile << "Tickets: " << tickets << "\n";
        receiptFile << "Total Amount: ₹" << tickets * 10 << "\n";
        receiptFile << "---------------------------------\n";
        cout << "Receipt generated successfully!\n";
    } else {
        cout << "Error generating receipt.\n";
    }
}
