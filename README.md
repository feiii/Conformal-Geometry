# Harmonic map, holomorphic map and Hodge decomposition
This project discretizes conformal map from plane to compact Riemann surface. As a result, it allows us to show holomorphic 1-forms on the surface. This can be view as a rendering method, use which I displayed a video clip on torus (genus=1 surface). Feel free to change it to other image or videos and play with it.

For more computational geometry, please go to Xianfeng David Gu's homepage. Professor Gu gave a series of computational geometry lectures during summer 2020 (I gave two guest lectures ^_^), which I benefited a lot from. This project is based on his lectures. 
https://www3.cs.stonybrook.edu/~gu/lectures/2020/
## System

The code was ran on MacOS Catalina. 

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
Set up
```
mkdir build
cd build
cmake ..
```

Compile
```
make -j4
```

Run
```
HodgeDecomposition.exe data/boy.boy.m textures/xx.bmp
```
