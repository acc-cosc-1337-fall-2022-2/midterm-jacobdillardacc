#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_cookie_ingredients function for 48 cookies")
{
	vector<double> resultvector;
	resultvector = get_cookie_ingredients(48);
	REQUIRE(resultvector[0] == 1.5);
	REQUIRE(resultvector[1] == 1);
	REQUIRE(resultvector[2] == 2.75);
}

TEST_CASE("Verify get_cookie_ingredients function for 96 cookies")
{
	vector<double> resultvector;
	resultvector = get_cookie_ingredients(96);
	REQUIRE(resultvector[0] == 3);
	REQUIRE(resultvector[1] == 2);
	REQUIRE(resultvector[2] == 5.5);
}

TEST_CASE("Verify get_cookie_ingredients function for 24 cookies")
{
	vector<double> resultvector;
	resultvector = get_cookie_ingredients(24);
	REQUIRE(resultvector[0] == 0.75);
	REQUIRE(resultvector[1] == 0.5);
	REQUIRE(resultvector[2] == 1.375);
}