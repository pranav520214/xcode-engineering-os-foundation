# XCODE Architecture

XCODE is an engineering operating system structured around persistent state rather than conversational replay.

## Design goals

- Durable engineering state across restarts and long-running tasks
- C++ engineering substrate for performance-sensitive native work
- Java orchestration layer for task, session, and workflow management
- Versioned protocol boundary between Java and C++
- Persistent memory and graph tracking with evidence provenance
- Verification before claims
- Security as a native architectural concern

## Key layers

1. Project and session runtime
2. Task and loop orchestration
3. Memory and graph persistence
4. Context compilation and budget management
5. Model provider abstraction
6. Tool execution and evidence gathering
7. Security validation and integrity checks
8. Artifact and Git provenance

## Required state sources

- tasks
- sessions
- events
- graph_nodes
- graph_edges
- memories
- evidence
- artifacts
- expert keycards
- security invariants
- predictions
- git commits
