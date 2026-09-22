# Protocols

The Java-to-C++ boundary uses versioned structured messages.

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

## Reasoning

This separation provides an explicit, evolvable boundary instead of JNI scattered through the codebase.
