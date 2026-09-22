#pragma once

#include <string>
#include <vector>

namespace xcode {

struct ProtocolMessage {
  std::string request_id;
  std::string task_id;
  std::string session_id;
  std::string operation;
  std::string payload;
  std::string status;
  std::string error;
  std::string metadata;
  std::string timestamp;
  std::string protocol_version;
};

struct ProjectState {
  std::string id;
  std::string name;
  std::string root_path;
};

struct GraphNode {
  std::string id;
  std::string type;
  std::string name;
  std::string metadata;
};

struct MemoryRecord {
  std::string id;
  std::string type;
  std::string content;
  std::string scope;
  double confidence = 0.0;
  double importance = 0.0;
};

class XcodeCore {
public:
  XcodeCore();
  ~XcodeCore();

  ProjectState initialize_project(const std::string& name, const std::string& root_path);
  std::vector<GraphNode> index_repository(const std::string& root_path);
  std::vector<MemoryRecord> load_relevant_memory(const std::string& query);
  ProtocolMessage send_protocol_message(const ProtocolMessage& msg);
};

}  // namespace xcode
