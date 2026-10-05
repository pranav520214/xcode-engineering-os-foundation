# Memory system

XCODE uses persistent memory hierarchy rather than conversational context as the memory system.

## Memory types

- WORKING
- SESSION
- TASK
- PROJECT
- ARCHITECTURE
- EXPERT
- DOMAIN
- SECURITY
- NEGATIVE
- HISTORICAL
- EVIDENCE

## Required metadata

Each memory record persists:

- id
- type
- content
- scope
- confidence
- importance
- source
- provenance
- evidence IDs
- graph node IDs
- created time
- updated time
- version
- status

## Conflict handling

Conflicts are not silently overwritten. They are recorded, evaluated, and marked as superseded when evidence or source ordering supports it.
