#include <iostream>
#include <string>
using namespace std;

void showMovies();
void bookTicket();
void confirmBooking();

int main() {
    int choice;
    do {
        cout << "\n====== Cinema Ticket System ======\n";
        cout << "1. Shiko listën e filmave\n";
        cout << "2. Rezervo bileta\n";
        cout << "3. Konfirmo rezervimin\n";
        cout << "0. Dalje\n";
        cout << "Zgjedhni një opsion: ";
        cin >> choice;

        switch(choice) {
            case 1: showMovies(); break;
            case 2: bookTicket(); break;
            case 3: confirmBooking(); break;
            case 0: cout << "Dalje nga sistemi. Faleminderit!\n"; break;
            default: cout << "Opsion i pavlefshëm! Provoni përsëri.\n";
        }
    } while(choice != 0);

    return 0;
}