# Movie Ticket Booking System

This is a simple C++ program for booking movie tickets. The program displays available movies, allows the user to reserve and cancel tickets, and generates receipts for each transaction.

## OUTPUT:
![output](movie.png)

## Features
- Display a list of movies with showtimes
- Book tickets
- Cancel ticket 
- Generate and save receipts

## Requirements
- C++ compiler (GCC, MinGW, etc.)
- Linux or Windows environment

## How to Run

### On Linux:
1. Install a C++ compiler if you don't have one (e.g., GCC):
    ```bash
    sudo apt update
    sudo apt install g++
    ```

2. Clone the repository from GitHub:

    ```bash
    git clone https://github.com/GET-UNKNOWN-ERR0R/movie-ticket-booking.git
    cd movie-ticket-booking
    ```

3. Compile the program:
    ```bash
    g++ main.cpp ticketsystem.cpp -o moviebooking
    ```

4. Run the program:
    ```bash
    ./moviebooking
    ```

5. The receipts will be saved in the `receipts` folder.

### On Windows:
1. Install a C++ compiler like MinGW:
    - Download MinGW from [MinGW](https://osdn.net/projects/mingw/releases/)
    - Add `bin` directory to the PATH.

2. Download or clone this repository.

3. Open the Command Prompt and navigate to the project directory.

4. Compile the program:
    ```bash
    g++ main.cpp ticketsystem.cpp -o moviebooking.exe
    ```

5. Run the program:
    ```bash
    moviebooking.exe
    ```

6. Receipts will be saved in the `receipts` folder.
