#include "xcode/xcode.hpp"

#include <string>
#include <vector>

namespace xcode {

std::vector<MemoryRecord> XcodeCore::load_relevant_memory(const std::string& query) {
  std::vector<MemoryRecord> records;
  records.push_back(MemoryRecord{"mem-1", "PROJECT", query, "project", 0.80, 0.70});
  return records;
}

}  // namespace xcode
