#include "xcode/xcode.hpp"

#include <string>
#include <vector>

namespace xcode {

std::vector<GraphNode> XcodeCore::index_repository(const std::string& root_path) {
  std::vector<GraphNode> out;
  out.push_back(GraphNode{"repo-1", "Repository", root_path, "{\"path\":\"" + root_path + "\"}"});
  return out;
}

}  // namespace xcode
