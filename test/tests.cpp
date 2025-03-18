// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include "fun.h"

TEST(task1, test1) {
  const char * str = "qwe4  gftt e 555gr rrgr  grhh ";
  unsigned int result = faStr1(str);
  EXPECT_EQ(4, result);
}

TEST(task1, test2) {
  const char * str = "  qwe4 ";
  unsigned int result = faStr1(str);
  EXPECT_EQ(0, result);
}

TEST(task2, test3) {
  const char * str = "Hello, world!";
  unsigned int result = faStr2(str);
  EXPECT_EQ(0, result);
}

TEST(task2, test4) {
  const char * str = "Hello world!";
  unsigned int result = faStr2(str);
  EXPECT_EQ(1, result);
}

TEST(task3, test5) {
  const char * str = " bad dog ";
  unsigned int result = faStr3(str);
  EXPECT_EQ(3, result);
}

TEST(task3, test6) {
  const char * str = " six monkeys";
  unsigned int result = faStr3(str);
  EXPECT_EQ(5, result);
}

TEST(FaStr1Tests, BasicTests) {
  EXPECT_EQ(faStr1("Hello world"), 2);
  EXPECT_EQ(faStr1("Hello 123 world"), 1);
  EXPECT_EQ(faStr1("Just words without numbers"), 5);
  EXPECT_EQ(faStr1("Test 1 this"), 2);
  EXPECT_EQ(faStr1("No digits here!"), 3);
  EXPECT_EQ(faStr1("123abc"), 0);
  EXPECT_EQ(faStr1("A simple test with some 12345 numbers"), 4);
  EXPECT_EQ(faStr1("Word1 word2 word3"), 0);
  EXPECT_EQ(faStr1("Only words!"), 2);
  EXPECT_EQ(faStr1("No numbers at all"), 4);
  EXPECT_EQ(faStr1("Another test, just words"), 5);
  EXPECT_EQ(faStr1("Check 1 your 2 outputs"), 2);
  EXPECT_EQ(faStr1("Last one here"), 3);
  EXPECT_EQ(faStr1("Do not count 123"), 3);
  EXPECT_EQ(faStr1("Every test should pass!"), 5);
  EXPECT_EQ(faStr1("What about this 1?"), 5);
  EXPECT_EQ(faStr1("Edge case 1 2 3 4"), 1);
  EXPECT_EQ(faStr1("Empty string test"), 3);
  EXPECT_EQ(faStr1("Multiple  spaces     between"), 4);
  EXPECT_EQ(faStr1("Word with numbers 4example"), 1);
}
