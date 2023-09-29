language "C++"
filter "configurations:Debug"
        symbols "On"

filter "configurations:Release"
    symbols "Off"
    optimize "On"

workspace "PANE"

    startproject "Game"
    configurations { "Debug","Release" }
    platforms { "Win64"}

    project "PanoramaEngine"

        defines {"PANE_BUILD_DLL"}

        kind "SharedLib"
        location "PanoramaEngine/project"
        targetdir "bin/PANE"

        files { "PanoramaEngine/src/**.h","PanoramaEngine/src/**.cpp" }

        libdirs
        {
            "PanoramaEngine/external/SFML/lib"
        }

        includedirs
        {
            "PanoramaEngine/external/SFML/include",
            "PanoramaEngine/src"
        }

        links { "sfml-graphics-d", "sfml-system-d","sfml-window-d" }

    
    project "Sandbox"
    kind "ConsoleApp"
    location "Sandbox/src"
    targetdir "bin/Sandbox"

    files { "Sandbox/src/**.h","Sandbox/src/**.cpp" }

    includedirs{ "PanoramaEngine/src/","PanoramaEngine/external/SFML/include","Sandbox/src" }

    links { "PanoramaEngine" }