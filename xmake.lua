add_rules("mode.debug", "mode.release")

target("test")
    set_kind("binary")
    add_files("chapter6/6.xQ2/mian.cpp")