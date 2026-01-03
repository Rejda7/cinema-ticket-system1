void bookTicket() {
 
    if (filmiZgjedhur == "Nuk ka zgjedhje") {
        cout << "\nGabim: Ju lutem së pari zgjidhni filmin te opsioni 1!\n";
    } 
    else if (statusiIm == KONFIRMUAR) {
        cout << "\nJu tashmë keni një biletë të konfirmuar për: " << filmiZgjedhur << endl;
    }
    else {
        statusiIm = NE_PROCES;
        cout << "\nBileta për filmin '" << filmiZgjedhur << "' është rezervuar me sukses.\n";
        cout << "Statusi: NE PROCES (Duhet ta konfirmoni te opsioni 3).\n";
    }
}

void confirmBooking() {
    if (statusiIm == ASGJE) {
        cout << "\nNuk keni asnjë biletë të rezervuar për të konfirmuar.\n";
    } 
    else if (statusiIm == KONFIRMUAR) {
        cout << "\nBileta juaj është konfirmuar më parë. Shijoni filmin!\n";
    } 
    else if (statusiIm == NE_PROCES) {
        statusiIm = KONFIRMUAR;
        cout << "\nURIME! Rezervimi juaj për filmin '" << filmiZgjedhur << "' u konfirmua.\n";
        cout << "Ju lutem paraqituni në kinema 15 minuta para fillimit.\n";
    }
}