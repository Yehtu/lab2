#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip> //for setprecision()
#include "BMIclass.h"
using namespace std;

int main(){
	float height, mass, bmi;
	string name;

	ifstream inFile("infile", ios::in); 
	if(!inFile) { 
	cerr << "Failed opening" << endl; 
	exit(1); }

	ofstream outFile("outfile", ios::out);
	if(!outFile) {
	cerr << "Failed opening" << endl; 
	exit(1); }

	while(inFile >> height >> mass){
	BMI family;
	family.setHeight(height);
	family.setMass(mass);
	family.getValue();
	family.getCategory();
	if (height<=0 || mass<=0){ break; }	
	outFile << fixed  << setprecision(2) << family.bmi << "\t" << family.name << endl; }

	return 0; }

	
	

