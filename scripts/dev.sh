#!/usr/bin/env bash
set -euo pipefail
cmake -S cpp -B cpp/build
cmake --build cpp/build
cd java
./gradlew test
