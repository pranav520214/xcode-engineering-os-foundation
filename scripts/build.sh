#!/usr/bin/env bash
set -euo pipefail
cmake -S cpp -B cpp/build
cmake --build cpp/build
ctest --test-dir cpp/build --output-on-failure
cd java
./gradlew test
