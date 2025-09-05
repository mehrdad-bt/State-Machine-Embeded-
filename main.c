#include <stdio.h>
#include "vendingMachine.h"





int main(){

    VendingMachine_t vendingMachine;

    VendingMachine_init(&vendingMachine);
    Menu(&vendingMachine);

 

    


    return 0;
}