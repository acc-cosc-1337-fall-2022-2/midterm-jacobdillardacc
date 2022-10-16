#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify binary_to_decimal function")
{
	REQUIRE(binary_to_decimal("00001010") == 10);
	REQUIRE(binary_to_decimal("10101010") == 170);
	REQUIRE(binary_to_decimal("11111111") == 255);
}