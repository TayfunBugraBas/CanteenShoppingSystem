#include <iostream>
#include "../Core/CoreBusiness/Employee.h"
#include "CoreBusiness/Manager.h"
#include "../Business/Concrete/Cashier.h"
#include "../Business/Concrete/StoragePersonel.h"
#include <stdlib.h>
#include <string>


using namespace std;

void menu() {
    

    int i = 0;
    int a = 0;
    int b = 0;
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
    

    
    cout << "--------Canteen Shopping System--------\n\n" << "---Select User\n1) Manager (Key required)\n2) Guest \n3)Personel(Key required)" << endl;
    cin >> i;
    if (i == 10768) {
         system("CLS");
         cout << "-----Hello Manager----- "<<endl<<"What are you looking for ?  "<<endl<<"1)ProductPricing\n2)new Worker \n3)WorkerSalarySetting \n4)Delete Worker\n5)ListOfWorkers \n-1)go back" << endl;
         cin >> a;
         if ( a == 1)
         {
             cout << "enter Products name Please " << endl;
                 cin >> nameOfThing;

             cout << "enter newPrice of the Product please" << endl;
                 cin >> Pricing;
                   manager.setProductPrice(nameOfThing, Pricing);
                   cout << "Completed Successfully" << endl;
                   system("CLS");
                   menu();
                   a = 0;

         }
         else if (a == 2) {
             cout << "Which Type of Personel\n 1)Cashier 2)StoragePersonel" << endl;
             cin >> a;
             if (a == 1 )
             {
                 rankOfEmp = "Cashier";
                 cout << "Enter name\n";
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
                   

                       Cashier cashier(rankOfEmp, nameOfThing, idOfThing, salaryOfEmp);
                              manager.newWorker(cashier);
                        cout << "Completed Successfully" << endl;
                    system("CLS");
                 menu();
                 a = 0;
             }
             else if (a == 2) {

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
                    cin>>salaryOfEmp;
                    if (salaryOfEmp <= 0) {
                        cout << "You cant enter below 0 salary please enter salary again" << endl;
                        cin >> salaryOfEmp;
                    }

                      StoragePersonel storagePersonel(rankOfEmp, nameOfThing, idOfThing, salaryOfEmp);
                            manager.newWorker(storagePersonel);
                       cout << "Completed Successfully" << endl;
                    system("CLS");
                 menu();
                 a = 0;
             }
             
             else {
                      cout << "something gone wrong returning main menu" << endl;
                    system("CLS");
                 menu();
                 a = 0;
             }

         }
         else if (a == 3) {
             cout << "Please Enter Your Workers Name Correctly" << endl;
             cin >> nameOfThing;
                   cout << "Enter new Salary of Worker" << endl;
                     cin >> salaryOfEmp;
                     if (salaryOfEmp <= 0) {
                         cout << "You cant enter below 0 salary please enter salary again" << endl;
                         cin >> salaryOfEmp;
                     }
                   manager.setWorkerSalary(nameOfThing, salaryOfEmp);
                   cout << "Completed Successfully" << endl;
                   system("CLS");
                   menu();
                   a = 0;
         }
         else if (a==4){
             cout << "enter worker name please" << endl;
             cin >> nameOfThing;
            Employee employee("NULL", nameOfThing, 0, 0.00);
            manager.deleteWorker(employee);
            cout << "Completed Successfully" << endl;
            system("CLS");
            menu();
            a = 0;
         }
         else if (a == 5) {
         manager.listWorkers();
         system("pause");
         system("CLS");
         menu();
         }
         else if (a == -1) {
             system("CLS");
             menu();
             a = 0;
         }
         else {
                  cout << "something gone wrong returning main menu" << endl;
               system("CLS");
             menu();
         }
        /*End of the manager menu*/
        i = 0;
    }
    else if (i == 2) {
          system("CLS");
          cout << "--------Hello User--------\n\n" << " \n 1)Shopping Cart  \n 2)List Products \n-1)go back" << endl;
          cin >> i;
          if (i == 1) {
              cout << "What do you want to do ? \n\n" << "1)get Product \n 2)give  back Product \n-1)go back";
              cin >> i;
              if (i == 1) {
                  cout << "enter product name for add to cart " << endl;
                  getline(cin, nameOfThing);
                  if (nameOfThing.size() <= 0) {

                      cin >> nameOfThing;
                  }
                  cashier.sellUrun(nameOfThing);
                  cout << "Completed Successfully" << endl;
                  system("pause");
                  system("CLS");
                  menu();

              }
              else if (i == 2) {
                  cout << "enter product name for giving back" << endl;
                  getline(cin, nameOfThing);
                  if (nameOfThing.size() <= 0) {

                      cin >> nameOfThing;
                  }
                  cashier.givebackUrun(nameOfThing);

                  cout << "Completed Successfully" << endl;
                  system("pause");
                  system("CLS");
                  menu();

              }
              else if (i == -1) {
                  system("CLS");
                  menu();
              }
              else {
                       cout << "something gone wrong returning main menu" << endl;
                    system("CLS");
                  menu();

              }
          }
          else if (i == 2) {

              personel.getAllProducts();
              system("pause");
              system("ClS");
              menu();

          }
          else if (i == -1) {
              system("CLS");
              menu();
              i = 0;
          }
          else {
              cout << "something gone wrong returning main menu" << endl;
              system("CLS");
              menu();

          }

         
    }
    else if (i == 20768) {
         system("CLS");
             cout <<"----Hello Worker---- \n" <<"What do you want to do ? \n\n" << "1)AddNewProduct \n 2)DeleteProduct\n 3)UpdateProduct\n -1) go back" << endl;
             cin >> i;
             if (i == 1) {
                 cout << "enter product name please"<< endl;
                 cin>>nameOfThing;
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
                 Urun xurun(nameOfThing, type, category, idOfThing, Pricing , amount);
                 personel.addNewUrun(xurun);

                 cout << "Completed Successfully" << endl;
                 system("CLS");
                 menu();

             }
             else if (i == 2) {
                 cout << "enter product name please" << endl;
                 cin >> nameOfThing;
                 Urun deleteUrun(nameOfThing, "NULL", "NULL", 0, 0.00, 0);
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

                 personel.updateUrun(nameOfThing, nameHelper, type, category, Pricing, idOfThing, amount);

                 cout << "Completed Successfully" << endl;
                 system("CLS");
                 menu();


             }
             else if (i == -1) {
                 system("CLS");
                 menu();
             }
             else {
                 cout << "something gone wrong returning main menu" << endl;
                 system("CLS");
                 menu();
             }

        
    }
    else {
        
        cout << "something gone wrong " << endl;
        }
        
    }
   
    

int main()
{
    menu();
}

