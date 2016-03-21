#include "BMIclass.h"

void BMI::setHeight(float h){
	height = h ; }

void BMI::setMass(float m){
	mass = m ; }

float BMI::getValue(){
	bmi = mass/(height*0.01)/(height*0.01);
	return bmi; }

string BMI::getCategory(){
	if(bmi<15 && bmi>0){
		name = "Very severely underweight" ; }
	   else if(bmi>=15 && bmi<16){
		   name = "Severely underweight" ; }
	   else if(bmi>=16 && bmi<18.5){
		   name = "Underweight" ; }
	   else if(bmi>=18.5 && bmi<25){
		   name = "Normal" ; }
	   else if(bmi>=25 && bmi<30){
		   name = "Overweight" ; }
	   else if(bmi>=30 && bmi<35){
		   name = "Obese Class I (Moderately obese)" ; }
	   else if(bmi>=35 && bmi<40){
		   name = "Obese Class II (Severely obese)" ; }
	      else{
		   name = "Obese Class III (Very severely obese) " ; }
	return name; }



