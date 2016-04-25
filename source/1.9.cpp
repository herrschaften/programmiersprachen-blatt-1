#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int sum ()
{
	int s=0;
	int l=0;
	int m=0;
		
	for (int i=1; s<997; ++i)
	{

		s = (i*3);			//alle 3er
		if (s%5){			//alle durch 3 und 5 teilbaren abfangen 
			m+=s;
		}
		
	}
	for (int i = 1; l < 996; ++i)
	{
		l=(i*5);				//alle 5er 
		m+=l;
	}
	return m;
}          
	


TEST_CASE ( " describe_sum " , " sum " )
{
REQUIRE ( sum () == 234168);

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}