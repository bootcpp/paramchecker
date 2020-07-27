#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, bpmAreOk(100));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, spoAreOk(40));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
