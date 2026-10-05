#include "xcode/xcode.hpp"

#include <iostream>

int main() {
  xcode::XcodeCore core;
  auto project = core.initialize_project("xcode", ".");
  std::cout << "project=" << project.name << " root=" << project.root_path << '\n';
  return 0;
}
