#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify ref_swap and val_swap functions")
{
	int num1 = 2;
	int num2 = 4;
	
	ref_swap(num1,num2);
	REQUIRE(num1 == 4);
	REQUIRE(num2 == 2);
	
	val_swap(num1,num2);
	REQUIRE(num1 == 4);
	REQUIRE(num2 == 2);
}