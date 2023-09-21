int main() {
  int a{5};   // No conversion needed
  int b{'a'}; // numeric promotion char to int
  // int c{5.4};                   // won’t compile due to narrowing conversion
  int d{true};                  // numeric promotion bool to int
  int e{static_cast<int>(5.4)}; // numeric conversion double to int

  double f{5.0f}; // numeric promotion float to double
  double g{5};    // numeric promotion int to double

  // Extra credit section
  long h{5}; // numeric conversion int to long same 4bytes

  // float i{f};   // 1i (uses previously defined variable f)won’t compile due
  // to
  //  narrowing conversion double to float
  float j{5.0}; // 1j numeric conversion
}