#include "xcode/xcode.hpp"

#include <utility>

namespace xcode {

XcodeCore::XcodeCore() = default;
XcodeCore::~XcodeCore() = default;

ProjectState XcodeCore::initialize_project(const std::string& name, const std::string& root_path) {
  return ProjectState{.id = "project-1", .name = name, .root_path = root_path};
}

std::vector<GraphNode> XcodeCore::index_repository(const std::string& root_path) {
  std::vector<GraphNode> nodes;
  nodes.push_back(GraphNode{"repo-1", "Repository", root_path, "{" + std::string("\"path\":\"" + root_path + "\"") + "}"});
  return nodes;
}

std::vector<MemoryRecord> XcodeCore::load_relevant_memory(const std::string& query) {
  std::vector<MemoryRecord> records;
  records.push_back(MemoryRecord{"mem-1", "PROJECT", query, "project", 0.8, 0.7});
  return records;
}

ProtocolMessage XcodeCore::send_protocol_message(const ProtocolMessage& msg) {
  return msg;
}

}  // namespace xcode
