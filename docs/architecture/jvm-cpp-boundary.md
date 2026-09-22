# Java/C++ boundary

The XCODE system uses Java for orchestration and C++ for the native engineering substrate.

## Boundary rules

- Java owns orchestration, policy, and workflow management.
- C++ owns indexing, graph, filesystem logic, hashing, security analysis, and execution helpers.
- The interface is a versioned protocol rather than ad hoc JNI calls.
- A request/response envelope is required for every Java-C++ exchange.

## Envelope fields

- requestId
- taskId
- sessionId
- operation
- payload
- status
- error
- metadata
- timestamp
- protocolVersion
