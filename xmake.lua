add_rules("mode.debug", "mode.release")

target("test")
    set_kind("binary")
    add_files("chapter7/7.xQ2.cpp")