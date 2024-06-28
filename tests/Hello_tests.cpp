#include <gtest/gtest.h>
#include "library1/Hello.h"

TEST(HelloTests, BasicAssertions)
{
    EXPECT_STREQ(library1::Hello::HelloString().c_str(), "library1: Hello, World!");
}