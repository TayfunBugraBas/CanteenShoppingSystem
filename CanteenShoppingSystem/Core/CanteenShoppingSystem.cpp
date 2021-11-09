﻿#include <iostream>
#include "../Core/CoreBusiness/Employee.h"
#include "CoreBusiness/Manager.h"
#include "../Business/Concrete/Cashier.h"
#include "../Business/Concrete/StoragePersonel.h"
#include <stdlib.h>


using namespace std;

void menu() {
    

    int i = 0;
    string rankOfEmp;
    string nameOfThing;
    int idOfThing = 0;
    double salaryOfEmp = 0.00;

    Manager manager;
    

    cout << "--------Canteen Shopping System--------\n\n" << "---Select User\n 1) Manager\n 2) Worker" << endl;
    cin >> i;
    switch (i) {
    case 1:
        system("CLS");
        cout << "-----Hello Manager----- "<<endl<<"What are you looking for ?  "<<endl<<"1)ProductPricing\n2)new Worker \n3)WorkerSalarySetting" << endl;
        cin >> i;
        if ( i == 1)
        {

        }
        else if (i == 2) {
            cout << "Which Type of Personel\n 1)Cashier 2)StoragePersonel" << endl;
            cin >> i;
            if (i == 1 )
            {
                rankOfEmp = "Cashier";
                cout << "Enter name";
                   cin >> nameOfThing;
                cout << "enter id";
                   cin >> idOfThing;
                cout << "enter Salary";
                   cin >> salaryOfEmp;

                      Cashier cashier(rankOfEmp, nameOfThing, idOfThing, salaryOfEmp);
                             manager.newWorker(cashier);
                       cout << "Completed Successfully" << endl;
                   system("CLS");
                menu();
            }
            else if (i == 2) {

                rankOfEmp = "StoragePersonel";
                cout << "Enter name";
                   cin >> nameOfThing;
                cout << "enter id";
                   cin >> idOfThing;
                cout << "enter Salary";
                   cin >> salaryOfEmp;

                     StoragePersonel storagePersonel(rankOfEmp, nameOfThing, idOfThing, salaryOfEmp);
                           manager.newWorker(storagePersonel);
                      cout << "Completed Successfully" << endl;
                   system("CLS");
                menu();
            }
            else {
                     cout << "something gone wrong returning main menu" << endl;
                   system("CLS");
                menu();
            }

        }
        else if (i == 3) {
            cout << "Please Enter Your Workers Name Correctly" << endl;
              cin >> nameOfThing;
                  cout << "Enter new Salary of Worker" << endl;
                    cin >> salaryOfEmp;
                  manager.setWorkerSalary(nameOfThing, salaryOfEmp);/*replace in file bak*/


        }
        else {
                 cout << "something gone wrong returning main menu" << endl;
              system("CLS");
            menu();
        }
       

    default:
        cout << "something gone wrong returning main menu" << endl;
        system("CLS");
        menu();

    }
    
}
/*Hatalı girişte sonsuz döngü error bak*/

int main()
{
    

    menu();
}

