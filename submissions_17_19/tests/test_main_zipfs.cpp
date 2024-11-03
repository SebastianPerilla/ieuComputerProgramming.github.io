#include "zipfs.h"
#include <gtest/gtest.h>

TEST(ReadBook, NoFile) {
    testing::internal::CaptureStdout();
    readBook("no_file.txt");
    std::string output = testing::internal::GetCapturedStdout();
    std::string expected = "failed to open no_file.txt\n";
    EXPECT_EQ(output, expected);
}