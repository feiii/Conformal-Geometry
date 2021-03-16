# Harmonic map, holomorphic map and Hodge decomposition on compact Riemman surface

This C++ code is used to implement geometric algorithms of the above maths concept. This allows us to realize holomorphic 1-forms on the surface and use it to render images/videos. For example, I have pasted a video clip on torus using conformal map from plane to torus. Feel free to change any texture or image/video you want!

## System

The code was run on MacOS Catalina.

## Directory Structure

``` txt
cutgraph            -- Folder for cut graph algorithm.
harmonic_map        -- Folder for harmonic map algorithm. 
data                -- Some models.
CMakeLists.txt      -- CMake configuration file.
resources           -- Some resources needed.
3rdparty            -- MeshLib and freeglut libraries.
```

## Configuration
Configuration:
``` txt
mkdir build
cd build
cmake ..
```

Compile:
``` txt
make -j4
```

Run:
``` txt
HodgeDecomposition.exe data/boy/boy.m textures/xx.bmp
```

