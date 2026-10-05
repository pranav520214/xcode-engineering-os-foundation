# XCODE

XCODE is a developer-first, local-first Engineering Operating System.

It is not a chatbot, not a prompt wrapper, and not a conventional coding assistant. XCODE is a durable engineering substrate that persists project state, graph relationships, memory, evidence, artifacts, security state, and task execution history so work can survive context loss and long-running engineering loops.

## Core principles

- The model is a reasoning component, not the source of truth.
- Engineering state is the source of truth.
- Persistent loops replace conversational memory as the primary operating model.
- Local-first execution is the default.
- Verification is required before claiming success.
- Security and integrity are architectural concerns, not afterthoughts.

## Repository layout

- cpp/: C++20 engineering substrate and native analysis engine
- java/: Java 21 orchestration, runtime, and workflow engine
- protocol/: versioned Java/C++ interoperability protocol definitions
- docs/: architecture, memory, graph, context, domain, security, and protocol documentation
- config/: runtime configuration and policy settings
- migrations/: SQLite schema evolution scripts
- tests/: system, integration, and security tests
- scripts/: ops and build utility scripts
- examples/: sample usage and domain configurations
- tools/: repository tooling and developer utilities

## Build overview

### C++

```bash
cmake -S cpp -B cpp/build
cmake --build cpp/build
ctest --test-dir cpp/build --output-on-failure
```

### Java

```bash
cd java
./gradlew test
```

## Key architecture areas

- C++ substrate: indexing, graph engine, search, file hashing, AST/symbol analysis, Git integration, process execution
- Java orchestration: sessions, loops, tasks, policies, provider routing, API runtime
- Protocol: structured, versioned request/response messages over IPC/RPC
- Memory: persistent working, task, project, architecture, expert, and security memory
- Verification: compile/test/security checks with evidence-backed claims

## Safety and evidence

XCODE treats model output as hypotheses until validated by tools, tests, compilation, and other engineering evidence.
