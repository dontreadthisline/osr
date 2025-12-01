#!/bin/bash
#brew install cmake ninja pkg-config mimalloc boost expat googletest
cmake -S . -B build \
  -GNinja \
  -DCMAKE_BUILD_TYPE=Release \
  -Wno-dev \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
cmake --build build
rm -rf compile_commands.json
rm -rf otest
ln -s build/compile_commands.json compile_commands.json
ln -s build/osr-test otest
