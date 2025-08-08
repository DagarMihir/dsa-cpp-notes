{
  "tests": [
    {
      "test_name": "FibonacciSequenceTest",
      "test_code": "#include \"gtest/gtest.h\"\n#include \"5.2.2-fibonacci.cpp\"\n\nTEST(FibonacciTest, LargeInput) {\n  stringstream ss;\n  streambuf* oldCout = cout.rdbuf();\n  cout.rdbuf(ss.rdbuf());\n\n  int n = 20;\n\n  int a = 0;\n  int b = 1;\n  cout << a << \" \" << b << \" \";\n  for (int i = 1; i <= n; i++) {\n\n    int nextNumber = a + b;\n    cout << nextNumber << \" \";\n\n    a = b;\n    b = nextNumber;\n  }\n\n  cout.rdbuf(oldCout);\n  string expected = \"0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 \";\n  EXPECT_EQ(ss.str(), expected);\n}"
    }
  ]
}