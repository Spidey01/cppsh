
solution "cppsh"
    configurations { "Release", "Debug" }

    project "cppsh"
        kind "ConsoleApp"
        language "C++"
        files { "**.hpp", "**.cpp" }

