# ADR-0001: State-first architecture

- Status: Accepted
- Date: 2026-08-12

## Context

XCODE is designed to survive context resets, model restarts, and long-running tasks. Conversation replay alone is insufficient for recoverable engineering work.

## Decision

Persist structured engineering state in SQLite and on disk, and treat the model as a reasoning component rather than the source of truth.

## Consequences

- durable process recovery
- explicit verification and evidence
- better auditing and security analysis
- more robust long-running engineering loops
