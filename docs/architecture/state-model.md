# Persistent state model

XCODE persists state in SQLite and on disk. The database stores metadata and relationships, while large artifacts remain on disk.

## Entities

- projects
- repositories
- sessions
- tasks
- events
- graph_nodes
- graph_edges
- memories
- evidence
- artifacts
- context_snapshots
- tool_calls
- experts
- expert_keycards
- domains
- decisions
- security_invariants
- threats
- findings
- predictions
- tests
- git_commits

## State transition model

PLAN -> EXECUTE -> OBSERVE -> VERIFY -> UPDATE STATE -> REPLAN

## Recovery guarantee

All state transitions are append-oriented and auditable.
