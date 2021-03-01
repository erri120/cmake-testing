#include <doctest/doctest.h>
#include <stuff.h>

TEST_CASE("Something") {
    auto s = stuff();
    CHECK(s.something() == true);
}