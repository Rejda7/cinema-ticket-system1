# cinema-ticket-system1
C++ Cinema Ticket Reservations System

Ky projekt është një sistem për menaxhimin e rezervimeve të biletave për kinema.
Lejon përdoruesit të shohin ulëset, të rezervojnë bileta, të zgjedhin ulëse dhe të anulojnë rezervime.
Funksionet kryesore
- `showMenu()` – shfaq menu-në kryesore
- `reserveTicket()` – rezervon biletë
- `cancelReservation()` – anulon rezervimin
- `showSeats()` – shfaq ulëset e lira
- `selectSeat()` – zgjedh një ulëse
-  Rejda – Cleanup dhe struktura e kodit
- Leart – Funksionet e rezervimit
- Arti – Funksionet e menaxhimit të ulëseve
- 
Kontributi im(Learti) ne kete projekt:
- Shtova funksionin `showMovies()` që shfaq listën e filmave dhe oraret e shfaqjeve në kinema.
- Përdoruesi mund të zgjedhë një film nga lista dhe të shohë konfirmimin e zgjedhjes.


Kontributi im (Art Panxhaj )
Përshkrimi i Modulit: Kam implementuar logjikën e rezervimit dhe konfirmimit të biletave duke përdorur një Finit State Machine (FSM) të thjeshtëzuar. Përmes një enum, kam siguruar që procesi të ndjekë hapat strikt: Zgjedhje → Rezervim → Konfirmim.

Pikat Kyçe:

Menaxhimi i Statusit: Përdorimi i enum për të parandaluar konfirmimin pa rezervim paraprak.

Validimi: Mbrojtje nga gabimet si rezervimi i dyfishtë ose harresa e përzgjedhjes së filmit.

Interaktiviteti: Komunikim në kohë reale me përdoruesin për gjendjen e porosisë së tij.
