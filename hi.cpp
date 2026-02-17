#include <iostream>

// g++ hi.cpp -o bug
// ./bug

// https://www.codewithc.com/which-c-version-am-i-using-how-to-check-your-compiler-version/
void print_version() {
    #if defined(__cplusplus)
        std::cout << "C++ version: " << __cplusplus << std::endl;
    #else
        std::cout << 'C++ version could not be determined.' << std::endl;
    #endif
    
    #ifdef __GNUC__
        std::cout << "GCC version: " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << std::endl;
    #endif
    
    #ifdef __clang__
        std::cout << "Clang version: " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
    #endif
    
    #ifdef _MSC_VER
        std::cout << 'MSVC version: ' << _MSC_VER << std::endl;
    #endif

    return;
}

int main() {
  print_version();
  std::cout << "hi bug!" << std::endl;  
  return 0;
}
