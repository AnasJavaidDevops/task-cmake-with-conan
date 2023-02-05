# task-cmake-with-conan

This project is a simple c++ program builds with cmake and handles dependency by linking with conan package manager

# About the Project

1. Demonstrates C++ source file using functionality of a linked package POCO
2. Configuration of CMAKELISTS.TXT and CONANFILE.TXT files in project
3. Implements the usage of github actions triggered on every push and pull request.
4. Contains unit test to demonstrate ctest
5. Uses MATRIX to facilitate cross-platform compilation i-e Linux and Windows
6. Reusing artifacts across jobs by uploading and downloding.
7. Build and test are separate jobs.

# Usage
1. Clone the git repo.
2. Prerequisites- cmake and conan should be installed otherwise use github action for conan.
3. Once you are in the repo folder run following commands in terminal.
    $mkdir build && cd build
    $conan install ..
    $cmake .. -DCMAKE_BUILD_TYPE=Release
    $cmake --build .
    $bin/sleep


# Limitations

1. Folder hierarchy for source code and tests need to implemented
2. Build folder need to be added to separated configuration and compilation.
3. Test job is work in progress, though its tested and works but need more work.
