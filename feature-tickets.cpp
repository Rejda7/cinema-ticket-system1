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
void showMovies() {
    cout << "\n--- Filmat në Kinema ---\n";
    cout << "1. Avatar - 18:00\n";
    cout << "2. Oppenheimer - 20:00\n";
    cout << "3. Inception - 22:00\n";
    cout << "4. Spider-Man - 16:00\n";
    cout << "5. Interstellar - 21:00\n\n";

    int selected;
    cout << "Zgjidhni filmin (numër): ";
    cin >> selected;

    switch(selected) {
        case 1: cout << "Keni zgjedhur: Avatar\n"; break;
        case 2: cout << "Keni zgjedhur: Oppenheimer\n"; break;
        case 3: cout << "Keni zgjedhur: Inception\n"; break;
        case 4: cout << "Keni zgjedhur: Spider-Man\n"; break;
        case 5: cout << "Keni zgjedhur: Interstellar\n"; break;
        default: cout << "Zgjedhje e pavlefshme!\n";
    }
}