#include "wcfile.h"

// For testing purposes (didn't implement)
int main(int argc, char** argv) {
  if (argc != 3) {
    printf("Wrong number of arguments, should be:\n");
    printf("./challenge_app [input file] [output file]\n");
    exit(EXIT_FAILURE);
  }

  solve(argv[1], argv[2]);
}
