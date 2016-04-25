#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int quersumme ( int a)
{

	int q=0;
	while(a>0){
    q= a % 10 + q;
    a = a/10;
	}
    return q;
}          
	


TEST_CASE ( " describe_gcd " , " gcd " )
{
REQUIRE ( quersumme (61) == 7);
REQUIRE ( quersumme (116077) == 22);
REQUIRE ( quersumme (11) == 2);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}