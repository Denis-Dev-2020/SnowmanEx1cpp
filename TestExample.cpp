/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces("___ \n.....\n\\(o.o)/\n(] [)\n(" ")"));
    CHECK(nospaces(snowman(12222212)) == nospaces("\n_\n/_\\n(-.-)\n/(> <)\\n(___)"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(33333333)) == nospaces("___ \n.....\n\\(o.o)/\n(] [)\n(" ")"));
    CHECK(nospaces(snowman(33331111)) == nospaces("\n_\n/_\\n(-.-)\n/(> <)\\n(___)"));
    CHECK(nospaces(snowman(44444432)) == nospaces("\n___\n(_*_)\n(- -)\n(> <)\n(" ")"));
    CHECK(nospaces(snowman(33232124)) == nospaces("\n_\n/_\\ \n\\(o_O) \n(] [)>\n(   )"));
    CHECK(nospaces(snowman(11443322)) == nospaces("\n_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(44444432)) == nospaces("\n___\n(_*_)\n(- -)\n(> <)\n(" ")"));
    CHECK(nospaces(snowman(11223344)) == nospaces("\n_\n/_\\ \n\\(o_O) \n(] [)>\n(   )"));
    CHECK(nospaces(snowman(14234213)) == nospaces("\n_===_\n(.,.)\n<( : )>\n( : )"));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(100));
    CHECK_THROWS(snowman(101));
    CHECK_THROWS(snowman(102));
    CHECK_THROWS(snowman(103));
    CHECK_THROWS(snowman(104));
    CHECK_THROWS(snowman(105));
    CHECK_THROWS(snowman(106));
    CHECK_THROWS(snowman(107));
    CHECK_THROWS(snowman(108));
    CHECK_THROWS(snowman(109));
    CHECK_THROWS(snowman(110));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(112));
    CHECK_THROWS(snowman(113));
    CHECK_THROWS(snowman(114));
    /* Add more checks here */
}