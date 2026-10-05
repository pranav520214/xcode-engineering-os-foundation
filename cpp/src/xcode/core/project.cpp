#include "xcode/xcode.hpp"

#include <string>

namespace xcode {

ProjectState XcodeCore::initialize_project(const std::string& name, const std::string& root_path) {
  return ProjectState{"project-1", name, root_path};
}

}  // namespace xcode
