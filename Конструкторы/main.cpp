#include "Phone.h"
#include "Lamp.h"
#include "Banknote.h"

int main() {
    Phone myPhone;
    Lamp lamp;
    Banknote myBanknote;

    myPhone.MakeCall();
    lamp.TurnOn();
    myBanknote.Deposit();

    return 0;
}
