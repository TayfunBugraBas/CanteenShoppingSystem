#include <iostream>
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
    string nameHelper;
    int idOfThing = 0, amount = 0;
    double salaryOfEmp = 0.00;
    double Pricing =0.00;
    string category, type;
    Manager manager;
    Cashier cashier;
    StoragePersonel personel;

    
    cout << "--------Canteen Shopping System--------\n\n" << "---Select User\n 1) Manager (Key required)\n 2)Personel (Key required)\n 3) Guest" << endl;
    cin >> i;
    switch (i) {
    case 10768:
        system("CLS");
        cout << "-----Hello Manager----- "<<endl<<"What are you looking for ?  "<<endl<<"1)ProductPricing\n2)new Worker \n3)WorkerSalarySetting" << endl;
        cin >> i;
        if ( i == 1)
        {
            cout << "enter Products name Please " << endl;
                cin >> nameOfThing;
            cout << "enter newPrice of the Product please" << endl;
                cin >> Pricing;
                  manager.setProductPrice(nameOfThing, Pricing);

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
                   if (idOfThing < 0) {
                       cout << "You cant enter below 0 id please enter id again" << endl;
                       cin >> idOfThing;
                   }
                cout << "enter Salary";
                   cin >> salaryOfEmp;
                   if (salaryOfEmp < 0) {
                       cout << "You cant enter below 0 salary please enter salary again" << endl;
                       cin >> salaryOfEmp;
                   }

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
                   if (idOfThing <= 0) {
                       cout << "You cant enter below 0 id please enter id again" << endl;
                       cin >> idOfThing;
                   }
                cout << "enter Salary";
                   cin >> salaryOfEmp;
                   if (salaryOfEmp <= 0) {
                       cout << "You cant enter below 0 salary please enter salary again" << endl;
                       cin >> salaryOfEmp;
                   }

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
                    if (salaryOfEmp < 0) {
                        cout << "You cant enter below 0 salary please enter salary again" << endl;
                        cin >> salaryOfEmp;
                    }
                  manager.setWorkerSalary(nameOfThing, salaryOfEmp);


        }
        else {
                 cout << "something gone wrong returning main menu" << endl;
              system("CLS");
            menu();
        }
       /*End of the manager menu*/

    case 2:
        cout << "--------Hello User--------\n\n" << " \n 1)Shopping Cart \n" << endl;
        cin >> i;
        if (i == 1) {
            cout << "What do you want to do ? \n\n" << "1)Sell Product \n 2)take back Product";
            cin >> i;
            if (i == 1) {
                cout << "enter product name for selling" << endl;
                cin >> nameOfThing;
                if (nameOfThing.size() <= 0) {
                    cout << "you didnt enter anything try again" << endl;
                    cin >> nameOfThing;
                }
                cashier.sellUrun(nameOfThing);
                cout << "Completed Successfully" << endl;
                system("pause");
                menu();/*hata var bak*/

            }
            else if (i == 2) {
                cout << "enter product name for taking back" << endl;
                cin >> nameOfThing;
                if (nameOfThing.size() <= 0) {
                    cout << "you didnt enter anything try again" << endl;
                    cin >> nameOfThing;
                }
                cashier.givebackUrun(nameOfThing);
                cout << "Completed Successfully" << endl;
                system("pause");
                menu();

            }
            else {
                     cout << "something gone wrong returning main menu" << endl;
                  system("CLS");
                menu();
            }
        }

    case 20768:  
            cout << "What do you want to do ? \n\n" << "1)AddNewProduct \n 2)DeleteProduct\n 3)UpdateProduct" << endl;
            cin >> i;
            if (i == 1) {
                cout << "enter product name please"<< endl;
                cin >> nameOfThing;
                cout << "enter product category please" << endl;
                cin >> category;
                cout << "Enter product type please" << endl;
                cin >> type;
                cout << "enter price of product" << endl;
                cin >> Pricing;
                cout << "enter id of product" << endl;
                cin >> idOfThing;
                cout << "enter amount pf product" << endl;
                cin >> amount;
                Urun xurun(nameOfThing, category, type, Pricing, idOfThing, amount);
                personel.addNewUrun(xurun);

                cout << "Completed Successfully" << endl;
                system("CLS");
                menu();

            }
            else if (i == 2) {
                cout << "enter product name please" << endl;
                cin >> nameOfThing;
                Urun deleteUrun(nameOfThing, "NULL", "NULL", 0.00, 0, 0);
                personel.deleteUrun(deleteUrun);

                cout << "Completed Successfully" << endl;
                system("CLS");
                menu();

            }
            else if(i == 3)
            {
                cout << "enter product name please" << endl;
                cin >> nameOfThing;
                cout << "enter NEW product name" << endl;
                cin >> nameHelper;
                cout << "enter new product category please" << endl;
                cin >> category;
                cout << "Enter new product type please" << endl;
                cin >> type;
                cout << "enter new price of product" << endl;
                cin >> Pricing;
                cout << "enter new id of product" << endl;
                cin >> idOfThing;
                cout << "enter  new amount pf product" << endl;
                cin >> amount;

                personel.updateUrun(nameOfThing, nameHelper, category, type, Pricing, idOfThing, amount);

                cout << "Completed Successfully" << endl;
                system("CLS");
                menu();


            }
            else {
                cout << "something gone wrong returning main menu" << endl;
                system("CLS");
                menu();
            }

    default:
        cout << "something gone wrong " << endl;
        }
        


   
       

    }
    



int main()
{
    

    menu();
}

