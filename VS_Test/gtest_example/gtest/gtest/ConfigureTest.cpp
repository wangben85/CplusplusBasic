#include <gtest/gtest.h> 

#include "Configure.h" 

//TEST(test_Nanme, sub_test_name)
TEST(ConfigureTest, template_test)
{
    ASSERT_TRUE(1 == 1);
    ASSERT_FALSE(2 == 1);
}

TEST(ConfigureTest, addItem)
{
	// do some initialization 
	Configure* pc = new Configure();

	// validate the pointer is not null 
	ASSERT_TRUE(pc != NULL);
    EXPECT_EQ(pc->getSize(), 0); //Original size should be 0

	// call the method we want to test 
	pc->addItem("A");
	pc->addItem("B");
	pc->addItem("C");  //add three items

	// validate the result after operation 
	EXPECT_EQ(pc->getSize(), 3);
	EXPECT_STREQ(pc->getItem(0).c_str(), "A");
	EXPECT_STREQ(pc->getItem(1).c_str(), "B");
	EXPECT_STREQ(pc->getItem(2).c_str(), "C");

	delete pc;
}


TEST(ConfigureTest, deleteItem)
{
	// do some initialization 
	Configure* pcb = new Configure();

	// validate the pointer is not null 
	ASSERT_TRUE(pcb != NULL);

	// call the method we want to test 
	pcb->addItem("A");
	pcb->addItem("B");
	pcb->addItem("C");

	// call the method we want to test 
    pcb->deleteItem("B");

	// validate the result after operation 
	EXPECT_EQ(pcb->getSize(), 2);
	EXPECT_STREQ(pcb->getItem(0).c_str(), "A");
	EXPECT_STREQ(pcb->getItem(1).c_str(), "C");

	delete pcb;
}
