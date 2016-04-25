#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double fract (double a){		//nachkommaanteil

	int b = a;				
    return a-b;
}          
	


TEST_CASE ( " describe_gcd " , " gcd " )
{

REQUIRE (fract (1.234) == Approx (0.234));
REQUIRE (fract (5.674) == Approx (0.674));
REQUIRE (fract (7.94) == Approx (0.94));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}