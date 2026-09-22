# Context engine

The context engine compiles only relevant state for each model invocation.

## Pipeline

REQUEST -> INTENT -> TASK -> GRAPH RETRIEVAL -> MEMORY RETRIEVAL -> EXPERT KNOWLEDGE -> DOMAIN KNOWLEDGE -> RELEVANT CODE -> SECURITY STATE -> GIT STATE -> TEST STATE -> EVIDENCE -> RANKING -> DEDUPLICATION -> COMPRESSION -> TOKEN BUDGET -> MODEL

## Requirements

- no full conversation replay
- no full repository dump
- no full memory sweep
- no blind tool-output ingestion
- all context must be traceable through ContextSnapshot records
