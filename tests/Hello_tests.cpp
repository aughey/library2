#include <gtest/gtest.h>
#include "library2/Hello.h"

TEST(HelloTests, BasicAssertions)
{
    EXPECT_STREQ(library2::Hello::HelloString().c_str(), "library2: Hello, World!");
}
