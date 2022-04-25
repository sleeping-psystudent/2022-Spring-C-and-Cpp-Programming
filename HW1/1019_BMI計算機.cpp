#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int height, weight;
	cin>>height>>weight;
	double BMI=(double)weight/pow((double)height/(double)100, 2);
	printf("%.2f\n", BMI);
	if (BMI >= 35) cout<<"Obese Class III"<<endl;
	else if (BMI >= 30) cout<<"Obese Class II"<<endl;
	else if (BMI >=27) cout<<"Obese Class I"<<endl;
	else if (BMI >=24) cout<<"Overweight"<<endl;
	else if (BMI >=18.5) cout<<"Normal"<<endl;
	else cout<< "Underweight"<<endl;
}
