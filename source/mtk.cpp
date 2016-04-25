#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double mtk(double a){
	a=a*1.609344;
	return a;
}

int main(){
	std::cout<<"Ja dann geben sie mal die Miles an \n";
	double a = 0;
	std::cin>>a;
	std::cout<< a <<" Meilen sind " << mtk(a) << " Kilometer \n";
	return 0;
}