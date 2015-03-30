#include <iostream>

using namespace std;


class BMI{

public:
	
BMI();
	
int getheig();
	
int getweig();
	
void setheig(int h);
	
void setweig(int w);
	
double countBMI();



private:
	
int heig,weig;
double ans;	
};

