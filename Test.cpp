/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;




TEST_CASE("Test replacement of v and w") {
    string text = "xxx volvo yyy";
    CHECK(find(text, "volvo") == string("volvo"));
    CHECK(find(text, "wolvo") == string("volvo"));
    CHECK(find(text, "volwo") == string("volvo"));
    CHECK(find(text, "wolwo") == string("volvo"));
}


TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of p and f") {
    string text = "xxx puppy yyy";
    CHECK(find(text, "fuppy") == string("puppy"));
    CHECK(find(text, "pufpy") == string("puppy"));
    CHECK(find(text, "pupfy") == string("puppy"));
    CHECK(find(text, "fufpy") == string("puppy"));
    CHECK(find(text, "puffy") == string("puppy"));
    CHECK(find(text, "fuffy") == string("puppy"));
}
TEST_CASE("Test replacement of b and f") {
    string text = "xxx bubble yyy";
    CHECK(find(text, "bubble") == string("bubble"));
    CHECK(find(text, "fubble") == string("bubble"));
    CHECK(find(text, "bufble") == string("bubble"));
    CHECK(find(text, "bubfle") == string("bubble"));
    CHECK(find(text, "fufble") == string("bubble"));
    CHECK(find(text, "fubfle") == string("bubble"));
    CHECK(find(text, "buffle") == string("bubble"));
    CHECK(find(text, "fuffle") == string("bubble"));
}
TEST_CASE("Test replacement of g and j") {
    string text = "xxx juggling yyy";
    CHECK(find(text, "juggling") == string("juggling"));
    CHECK(find(text, "guggling") == string("juggling"));
    CHECK(find(text, "jujgling") == string("juggling"));
    CHECK(find(text, "jugjling") == string("juggling"));
    CHECK(find(text, "jugglinj") == string("juggling"));
    CHECK(find(text, "gujgling") == string("juggling"));
    CHECK(find(text, "gugjling") == string("juggling"));
    CHECK(find(text, "gugglinj") == string("juggling"));
    CHECK(find(text, "jujgling") == string("juggling"));
    CHECK(find(text, "jugjling") == string("juggling"));
    CHECK(find(text, "jugjlinj") == string("juggling"));
    CHECK(find(text, "jujjlinj") == string("juggling"));
    CHECK(find(text, "gujjlinj") == string("juggling"));
}


TEST_CASE("Test replacement of c and k") {
    string text = "xxx cocktail yyy";
    CHECK(find(text, "cocktail") == string("cocktail"));
    CHECK(find(text, "cocctail") == string("cocktail"));
    CHECK(find(text, "cokktail") == string("cocktail"));
    CHECK(find(text, "cokctail") == string("cocktail"));
    CHECK(find(text, "kocktail") == string("cocktail"));
    CHECK(find(text, "kokctail") == string("cocktail"));
    CHECK(find(text, "kokktail") == string("cocktail"));
    CHECK(find(text, "cocctail") == string("cocktail"));
}

TEST_CASE("Test replacement of c and k and q") {
    string text = "xxx quick yyy";
    CHECK(find(text, "quick") == string("quick"));
    CHECK(find(text, "cuick") == string("quick"));
    CHECK(find(text, "cuicc") == string("quick"));
    CHECK(find(text, "quicc") == string("quick"));
    
    CHECK(find(text, "quiqk") == string("quick"));
    CHECK(find(text, "quicq") == string("quick"));
    CHECK(find(text, "quiqq") == string("quick"));
    CHECK(find(text, "quick") == string("quick"));
    
    CHECK(find(text, "quikk") == string("quick"));
    CHECK(find(text, "kuick") == string("quick"));
    CHECK(find(text, "kuikq") == string("quick"));
    CHECK(find(text, "kuikk") == string("quick"));
}


TEST_CASE("Test replacement of s and z") {
    string text = "xxx sizzers yyy";
    CHECK(find(text, "sizzers") == string("sizzers"));
    CHECK(find(text, "siszers") == string("sizzers"));
    CHECK(find(text, "sizsers") == string("sizzers"));
    CHECK(find(text, "sissers") == string("sizzers"));
    CHECK(find(text, "zizzers") == string("sizzers"));
    CHECK(find(text, "ziszers") == string("sizzers"));
    CHECK(find(text, "zizsers") == string("sizzers"));
    CHECK(find(text, "zizzerz") == string("sizzers"));
    CHECK(find(text, "zisserz") == string("sizzers"));
    CHECK(find(text, "ziszerz") == string("sizzers"));
    CHECK(find(text, "sisserz") == string("sizzers"));
    CHECK(find(text, "zizzerz") == string("sizzers"));
    CHECK(find(text, "sissers") == string("sizzers"));
}

TEST_CASE("Test replacement of d and t") {
    string text = "xxx duty yyy";
    CHECK(find(text, "duty") == string("duty"));
    CHECK(find(text, "tuty") == string("duty"));
    CHECK(find(text, "tuty") == string("duty"));
    CHECK(find(text, "dudy") == string("duty"));
    CHECK(find(text, "tudy") == string("duty"));
    CHECK(find(text, "dudy") == string("duty"));
    CHECK(find(text, "Dudy") == string("duty"));
    CHECK(find(text, "DuDy") == string("duty"));
    CHECK(find(text, "TuTy") == string("duty"));
    CHECK(find(text, "tuDy") == string("duty"));
}


TEST_CASE("Test replacement of o and u") {
    string text = "xxx out yyy";
    CHECK(find(text, "uut") == string("out"));
    CHECK(find(text, "oot") == string("out"));
    CHECK(find(text, "out") == string("out"));
    CHECK(find(text, "uot") == string("out"));
}


TEST_CASE("Test replacement of o and u") {
    string text = "xxx out yyy";
    CHECK(find(text, "uut") == string("out"));
    CHECK(find(text, "oot") == string("out"));
    CHECK(find(text, "out") == string("out"));
    CHECK(find(text, "uot") == string("out"));
}

TEST_CASE("Test replacement of i and y") {
    string text = "xxx illy yyy";
    CHECK(find(text, "illy") == string("illy"));
    CHECK(find(text, "illi") == string("illy"));
    CHECK(find(text, "ylly") == string("illy"));
    CHECK(find(text, "ylli") == string("illy"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "hAppi") == string("Happi"));
    CHECK(find(text, "haPpi") == string("Happi"));
    CHECK(find(text, "hapPi") == string("Happi"));    
    CHECK(find(text, "happI") == string("Happi"));    
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
}



