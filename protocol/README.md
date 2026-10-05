# XCODE Protocol

The XCODE protocol is a versioned, structured contract between Java orchestration and the native C++ substrate.

## Message envelope

Every request and result carries:

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

## Versioning

The protocol is versioned to allow C++ and Java to evolve independently while maintaining compatibility for existing operations.

## Schema

See [schema/xcode-protocol.json](schema/xcode-protocol.json).
