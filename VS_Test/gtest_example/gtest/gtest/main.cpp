#include <gtest/gtest.h> 

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);

	// Runs all tests using Google Test. 
	RUN_ALL_TESTS();

	system("pause");

	return 0;
}