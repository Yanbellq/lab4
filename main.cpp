#include <iostream>
#include "client.h"
#include "employer.h"
#include "bikeConfig.h"

int main() {

//    Bike♥
    BikeConfig Bike;

    BikeConfig Bike1("Bike1");
    BikeConfig Bike2("Bike2", 15000);
    BikeConfig Bike3("Bike3", 15000, 2);
    BikeConfig Bike4("Bike4", 15000, 3, "Ukraine");

    BikeConfig Bikes[3];
    Bikes[0].init("Bike[0]", 12000, 1, "Italy");
    Bikes[1].init("Bike[1]", 10000, 3, "France");
    Bikes[2].init("Bike[2]", 20000, 2, "Chilie");


//    Client♥
    Client Client1("Arsen", 19, "Ukraine", 1, 0);
    Client Client2("Danya", 18, "Italy", 0, 1);
    Client Client3("Vitaliy", 21, "Germany", 1, 1);


//    Employer♥

    cout << "Bikes♥_______________\n" << Bike.show() << endl
         << "1____________________\n" << Bike1.show() << endl
         << "2____________________\n" << Bike2.show() << endl
         << "3____________________\n" << Bike3.show() << endl
         << "3____________________\n" << Bike4.show() << endl
         << "4____________________\n" << Bikes[0].show() << endl
         << "5____________________\n" << Bikes[1].show() << endl
         << "6____________________\n" << Bikes[2].show() << endl << "\n"
         << "Clients♥_____________\n" << Client1.show() << endl
         << "2____________________\n" << Client2.show() << endl
         << "3____________________\n" << Client3.show() << endl;

    return 0;
}