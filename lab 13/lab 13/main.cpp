#include "catch_amalgamated.hpp"


bool is_prim(int x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i * i <= x; i ++) {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }

    return true;
}



TEST_CASE("prim") {
    REQUIRE(is_prim(2));
    REQUIRE(is_prim(5));
    REQUIRE_FALSE(is_prim(4));
    REQUIRE_FALSE(is_prim(12));
    REQUIRE(is_prim(17));
}