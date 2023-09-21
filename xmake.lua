add_rules("mode.debug", "mode.release")

target("test")
    set_languages("c++17")
    set_kind("binary")
    add_files("chapter8/8.xQ4.cpp")