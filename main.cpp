#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main(){
int h,w;//準備接收weigh,heigh的值
double bmi;
BMI data;//class BMI的object命名為data
ifstream read("file.in");
if(!read){
	cerr<<"Failed Opening"<<endl;
	exit(1);
}
ofstream write("file.out",ios::out);
        if(!write){
        cerr<<"Failed opening"<<endl;
        exit(1);
        }

while(read>>h>>w){
	if(h==0){
	break;}
	data.setheig(h);//將得到的值傳回class讓bmi計算
	data.setweig(w);
	bmi = data.countBMI(); 
	write << "\t" << setprecision(4) << left << bmi<<"\t";	
		if (bmi<15){
		   write << "\t" << "Very severly underweight" << endl;
		   }
		
		if (bmi>=15.0 && bmi<16.0){
		   write << "\t" << "Severly underweight" << endl;
		   }
		
		if (bmi>=16.0 && bmi<18.5){
		   write << "\t" << "Underweight" << endl;
		   }

		if (bmi>=18.5 && bmi<25){
		   write << "\t" << "Normal" << endl;
		   }
		
		if (bmi>=25 && bmi<30){
		   write << "\t" << "Overweight" << endl;
		   }
	
		if (bmi>=30 && bmi<35){
		   write << "\t" << "Obese Class I (Moderately obese)" << endl;
		   }

		if (bmi>=35 && bmi<40){
		   write << "\t" << "Obese Class II (Severely obese)" <<endl;
		   }

		if (bmi>=40){
		   write << "\t" << "Obese Class III (Very severely obese)" <<endl;   		    }
}
return 0;
}
