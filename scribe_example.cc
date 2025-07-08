#include "scribe.h"

int main() {
  scribe("DEBUG") << "Hello " << "World";
  scribe("WARNING") << "Hello " << 42;
  return 0;
}
