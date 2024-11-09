#include "Phone.h"
#include "Lamp.h"
#include "Banknote.h"
#include "Cat.h"

int main() {
    Phone myPhone;
    Lamp lamp;
    Banknote myBanknote;
    Cat cat;
    
    myPhone.MakeCall();
    lamp.TurnOn();
    myBanknote.Deposit();
    cat.Play();
    return 0;
}
