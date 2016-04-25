#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double mtk(double a){
	a=a*1.609344;
	return a;
}          
	


TEST_CASE ( " describe_gcd " , " gcd " )
{
REQUIRE ( mtk (1) == Approx (1.60934));
REQUIRE ( mtk (5) == Approx (8.04672));
REQUIRE ( mtk (30) == Approx (48.2803));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}