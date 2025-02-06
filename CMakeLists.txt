cmake_minimum_required(VERSION 3.31)

project(MultiLanguage LANGUAGES C CXX)

# Add an executable target using your single source file.
add_executable(MultiLanguage MultiLanguage.cpp)
target_compile_features(MultiLanguage PUBLIC cxx_std_17)

# run the executable.
add_custom_target(run
    COMMAND $<TARGET_FILE:MultiLanguage>
    DEPENDS MultiLanguage
    COMMENT "Running MultiLanguage"
)
