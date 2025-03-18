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

TEST(FaStr2Tests, Test1) {
  const char* input = "Hello world";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test2) {
  const char* input = "This is a test.";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test3) {
  const char* input = "Test Hello";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test4) {
  const char* input = "abc Def ghi Jkl";
  EXPECT_EQ(faStr2(input), 2);
}

TEST(FaStr2Tests, Test5) {
  const char* input = "Test 1234 test";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test6) {
  const char* input = "No Words Here!!";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test7) {
  const char* input = "Hello";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test8) {
  const char* input = "Test123";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test9) {
  const char* input = "Hello World!";
  EXPECT_EQ(faStr2(input), 2);
}

TEST(FaStr2Tests, Test10) {
  const char* input = "One Word";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test11) {
  const char* input = "Not valid because of space after this";
  EXPECT_EQ(faStr2(input), 0);
}

TEST(FaStr2Tests, Test12) {
  const char* input = "Another test case with ValidWord";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test13) {
  const char* input = "test word";
  EXPECT_EQ(faStr2(input), 0);
}

TEST(FaStr2Tests, Test14) {
  const char* input = "Case with No valid words";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test15) {
  const char* input = "Word1 Word2";
  EXPECT_EQ(faStr2(input), 0);
}

TEST(FaStr2Tests, Test16) {
  const char* input = "word starts lowercase";
  EXPECT_EQ(faStr2(input), 0);
}

TEST(FaStr2Tests, Test17) {
  const char* input = "NoValidWordOnlyNumbers1234";
  EXPECT_EQ(faStr2(input), 1);
}

TEST(FaStr2Tests, Test18) {
  const char* input = "All caps ABC ABC";
  EXPECT_EQ(faStr2(input), 2);
}

TEST(FaStr2Tests, Test19) {
  const char* input = "Testing Capitalized First Letter";
  EXPECT_EQ(faStr2(input), 3);
}

TEST(FaStr2Tests, Test20) {
  const char* input = "Invalid 1st letter";
  EXPECT_EQ(faStr2(input), 0);
}

TEST(FaStr3Tests, Test1) {
  const char* input = "Hello world";
  EXPECT_EQ(faStr3(input), 5);
}

TEST(FaStr3Tests, Test2) {
  const char* input = "This is a test.";
  EXPECT_EQ(faStr3(input), 3);
}

TEST(FaStr3Tests, Test3) {
  const char* input = "Test Hello";
  EXPECT_EQ(faStr3(input), 4);
}

TEST(FaStr3Tests, Test4) {
  const char* input = "abc Def ghi Jkl";
  EXPECT_EQ(faStr3(input), 3);
}

TEST(FaStr3Tests, Test5) {
  const char* input = "Test123";
  EXPECT_EQ(faStr3(input), 0);
}

TEST(FaStr3Tests, Test6) {
  const char* input = "No valid words here!!";
  EXPECT_EQ(faStr3(input), 4);
}

TEST(FaStr3Tests, Test7) {
  const char* input = "Hello";
  EXPECT_EQ(faStr3(input), 5);
}

TEST(FaStr3Tests, Test8) {
  const char* input = "Test123 Test456";
  EXPECT_EQ(faStr3(input), 0);
}

TEST(FaStr3Tests, Test9) {
  const char* input = "  ";
  EXPECT_EQ(faStr3(input), 0);
}

TEST(FaStr3Tests, Test10) {
  const char* input = "The quick brown fox jumped over the lazy dog";
  EXPECT_EQ(faStr3(input), 3);
}

TEST(FaStr3Tests, Test11) {
  const char* input = "A b C D E";
  EXPECT_EQ(faStr3(input), 1);
}

TEST(FaStr3Tests, Test12) {
  const char* input = "Abc Def Ghi";
  EXPECT_EQ(faStr3(input), 3);
}

TEST(FaStr3Tests, Test13) {
  const char* input = "This   is a test";
  EXPECT_EQ(faStr3(input), 3);
}

TEST(FaStr3Tests, Test14) {
  const char* input = "One";
  EXPECT_EQ(faStr3(input), 3);
}

TEST(FaStr3Tests, Test15) {
  const char* input = "longest short test";
  EXPECT_EQ(faStr3(input), 5);
}

TEST(FaStr3Tests, Test16) {
  const char* input = "HELLO world";
  EXPECT_EQ(faStr3(input), 5);
}

TEST(FaStr3Tests, Test17) {
  const char* input = "single";
  EXPECT_EQ(faStr3(input), 6);
}

TEST(FaStr3Tests, Test18) {
  const char* input = "Multiple  spaces between words";
  EXPECT_EQ(faStr3(input), 5);
}

TEST(FaStr3Tests, Test19) {
  const char* input = "test";
  EXPECT_EQ(faStr3(input), 4);
}

TEST(FaStr3Tests, Test20) {
  const char* input = "";
  EXPECT_EQ(faStr3(input), 0);
}
