/*This program uses struct function to display info on vehicles in an array.
By Joshua Scott 10/17/18*/
#include<iostream>
#include<string.h>

using namespace std;

struct Car
{
	char Manufacturer[25]; // Will have maximum of 25 characters long
	char Model[25]; //Will have max 25 characters
	int year;
	int mileage;
	double price;
};

int main()
{

	struct Car CarList[4];
	strcpy(CarList[0].Manufacturer, " Toyota "); strcpy(CarList[0].Model, " Camry "); CarList[0].year = 2017;
	CarList[0].mileage = 17000; CarList[0].price = 15299.99;
	strcpy(CarList[1].Manufacturer, " Honda "); strcpy(CarList[1].Model, " Pilot "); CarList[1].year = 2014;
	CarList[1].mileage = 58000; CarList[1].price = 8799.99;
	strcpy(CarList[2].Manufacturer, " Ford "); strcpy(CarList[2].Model, " Focus "); CarList[2].year = 2015;
	CarList[2].mileage = 34234; CarList[2].price = 6799.99;
	strcpy(CarList[3].Manufacturer, " Toyota "); strcpy(CarList[3].Model, " Corola "); CarList[3].year = 2013;
	CarList[3].mileage = 97000; CarList[3].price = 5289.99;

	int choice = 0;  // creates counter

	while (choice > 4 || choice < 1) {

		cout << "Please enter a number [1-4]: ";   //Retrieves selection from user
		cin >> choice;

		if (0 < choice && choice < 5) {

			cout << "Manufacturer: " << CarList[choice - 1].Manufacturer << " Model: " << CarList[choice - 1].Model;
			cout << " Year: " << CarList[choice - 1].year;
			cout << " Mileage: " << CarList[choice - 1].mileage << " Price: $" << CarList[choice - 1].price;
		}
	}
	return 0;
}
