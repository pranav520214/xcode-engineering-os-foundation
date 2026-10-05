#include "xcode/xcode.hpp"

#include <cassert>

int main() {
  xcode::XcodeCore core;
  auto project = core.initialize_project("xcode", ".");
  assert(project.name == "xcode");
  auto nodes = core.index_repository(".");
  assert(!nodes.empty());
  auto memory = core.load_relevant_memory("test");
  assert(!memory.empty());
  return 0;
}
