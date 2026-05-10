add_rules("mode.debug", "mode.release")

add_requires("libsdl2")
add_requires("volk")
add_requires("vulkan-memory-allocator")
add_requires("glm")
add_requires("tinyobjloader")
add_requires("ktx")

target("hello_vulkan")
    set_kind("binary")
    set_languages("c++17")
    add_files("src/*.cpp")
    add_syslinks("vulkan")
    add_packages(
        "libsdl2",
        "volk",
        "vulkan-memory-allocator",
        "glm",
        "tinyobjloader",
        "ktx"
    )
