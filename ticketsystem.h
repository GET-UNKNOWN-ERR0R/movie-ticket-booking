#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <string>
#include <vector>

class ticketsystem {
private:
    struct movie {
        std::string name;
        std::string showtime;
    };

    std::vector<movie> movies;

public:
    ticketsystem();

    void displaymovies();
    void reserveticket();
    void cancelticket();
    void generatereceipt(const std::string &movieName, int tickets);
};

#endif
