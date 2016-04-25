#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double zyl(double h, double r){ //r= radius h= höhe
	double u = 2*M_PI*r;		//umfang
	double M = u*h;			//fläche manter
	double A = M_PI*(r*r); //fläche kreis
	double O = M+(2*A);		//oberfläche
	double V = A*h; 		//voulem


	return O, V;
}   



	


TEST_CASE ( " describe_zyl " , " zyl " )
{
REQUIRE ( zyl (6, 2) == (Approx (100.53096491), Approx (75.39822369 )));
REQUIRE ( zyl (5, 1) == (Approx (37.69911184), Approx(15.70796327)));
REQUIRE ( zyl (1, 1) == (Approx (12.56637061), Approx (3.14159265 )));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}