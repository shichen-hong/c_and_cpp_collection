#include <gtest/gtest.h>
#include "../test2.cpp"

struct c_and_cpp_test
    : public ::testing::Test
{
    int *x;
    int GetX(){
        return *x;
    }

    virtual void SetUp() override {
        printf("Starting up.\n");
        x = new int(10);
    }

    virtual void TearDown() override {
        printf("Tearing down. \n");
        delete x;
    }
};

TEST_F(c_and_cpp_test, getX){
    EXPECT_EQ(10, GetX());
}

TEST(testTests, init){
    EXPECT_TRUE(true);
}

TEST(testTests_func, FibTest){
    EXPECT_EQ(5, getFib(4));
    EXPECT_EQ(8, getFib(5));
    EXPECT_EQ(-1, getFib(101));
}
 