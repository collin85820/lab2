#include "BMI.h"
using namespace std;


BMI::BMI(){
	weig = 0;//初始化
	heig = 0;
}
int BMI::getheig(){
	return heig;	// 從heig得到值
}
int BMI::getweig(){
	return weig;//從weig得到值
}

void BMI::setheig(int h){
	heig = h;//更新heig的值
}
void BMI::setweig(int w){
	weig = w;//更新weig的值
}
double BMI::countBMI(){	
	ans = (double)weig/(((double)heig/100)*((double)heig/100));
	return ans;
}	
