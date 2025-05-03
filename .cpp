// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main(){
	double radius, height,totalVolume;
	const double GallonsPerday = 250;
	const double GallonPerMinute = 1.5;
	cout << "What is the total radius of the well : ";
	cin >> radius;
	cout << "What is the total radius pf the well : M";
	cin >> height;

	cout << "\n-----------------------------";
	totalVolume = 3.14159 * (radius * radius) * height;
	cout << "\nPlease note that the well will be able to take about " << totalVolume << " gallons";
	cout << "\n\nWould you like to know more fun facts about your well? (yes/no)";
	string answer;
	cin >> answer;

	if (answer == "yes") {
		cout << "\nit would take about " << totalVolume / GallonPerMinute << "minutes at a speed of " << GallonPerMinute << " Gallons per minutes to deplete the entire well";
		cout << "\nThats also means you will be able to live of the wells water for " << totalVolume / GallonsPerday << " days\n\n";
	}



}

