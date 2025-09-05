#include <stdio.h>
#include "vendingMachine.h"



void VendingMachine_init(VendingMachine_t *vendingMachine){

    vendingMachine->state = IDLE; // IDLE initiation 

    

}


void VendingMachine_Process(VendingMachine_t *vendingMachine, int choice){


    switch(vendingMachine->state)
    {

        case IDLE:
        {
            if(choice == 1)
            {
                printf("Coin Recieved!\n");
                vendingMachine->state = WAIT_FOR_MONEY;
            }
            else if(choice == 2 || choice == 3)
            {
                printf("No Coin has Inserted,First Insert coin\n");
            }


        }

        break;



        case WAIT_FOR_MONEY:
        {   
            printf("Waiting for Selecting Product OR Caneling...\n");
            if(choice == 2)
            {
                printf("Product Selected!\n");
                vendingMachine->state = DISPENSE;
                
            }
            else if(choice == 3)
            {
                vendingMachine->state = IDLE;
                printf("Canceled, Coin Returned!\n");
            }
            else if(choice == 1)
            {
                printf("Coin has Already been Inserted,Please Select Product or Cancel...\n");
            }
        }

        break;



        case DISPENSE:
        {
            printf("Product Delivered!\n");
            vendingMachine->state = IDLE;
        }

        break;

    }
    





}




// void Menu(VendingMachine_t *vendingMachine)
// {
    
//     int choice=0;
    
//     while(choice != 4)
//     {
//         printf("Please Enter an Option:\n1 = Insert Coin\n2 = Select Product\n3 = Cancel\n4 = Exit\n");
//         scanf(" %d", &choice);
//         switch(choice)
//         {
//             case 1:
//             {
//                 if(vendingMachine->state == IDLE)
//                 {
                    
//                     vendingMachine->state = WAIT_FOR_MONEY;

//                     break;

//                 }
//                 else
//                 {
//                     printf("Machine is not in IDLE mode!\n");
//                 }
             
                
//             break;

//             }


            

//             case 2:
//             {

//                 if(vendingMachine->state == WAIT_FOR_MONEY)
//                 {

//                     vendingMachine->state = DISPENSE;
//                     printf("Product Delivered\n");
//                     vendingMachine->state = IDLE;
                    

//                 }
//                 else
//                 {
//                     printf("Machine is not in WAITING FOR MONEY mode!\n");
//                 }
                

//             break;

//             }
            

//             case 3:
//             {
//                 if(vendingMachine->state == WAIT_FOR_MONEY)
//                 {
                  
//                     vendingMachine->state = IDLE;
//                     printf("Money Returned!\n");
                    
                    
//                 }
//                 else
//                 {
//                     printf("Machine is not in WAITING FOR MONEY mode!\n");
//                 }


//             break;

//             }

                

            
//         }


//         }
    

// }