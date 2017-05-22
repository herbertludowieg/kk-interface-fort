#include <iostream>
#include <string>

int main( int argc, char * argv ) {
  if ( argc < 2 ) {
    std::cout << "Usage: " << argv[0] << "[option] [file] {anchor}"
              << "\n[] are required {} are optional."
              << "\noptions:"
              << "\n--help     open help text"
              << "\n--kk       use the Krtamers-Kronig method"
              << "\n           needs a data file input"
              << "\n--mskk     use the Multiply-Subtractive 
              << "\n           Kramers Kronig method"
              << "\n           needs both a file and"
              << "\n           anchor file input"
              << "\n--cdkk     use the Chained Doubly-Subtractive"
              << "\n           Kramers-Kronig method"
              << "\n           needs both a file and"
              << "\n           anchor file input"
  }
}
