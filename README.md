# Micromouse 2025
Hey, Welcome to my Cmake + Ninja build for micromouse software. The system using STM32CubeMX + VSCode as main IDE. We will use Cmake + Ninja for build system and OpenOCD to debug. If there are any question, feel free to ask!

# Environment Setup & Installing Prerequisites
## 1. Arm Toolchain
It is a collection of software development tool for working with ARM architecture. 
- Window System: Download it from online. try [here](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads). Common machine using Windows mingw-w64-x86_64 version (using .exe is the easiest to install). You may have to add it to system variable path. 
- Unix System (Linux): using your package installer. For example:  ```sudo apt-get install arm-none-eabi-gcc``` 
Make sure it worked: ```arm-none-eabi-gcc --version``` (worked for both system)


## 2. Build System: Cmake + Ninja
Cmake is a build system that will look into (CmakeLists.txt) to figure outs how compile process should be (what files to compile, what compliers and where to put output, etc...)
- Window System: try [here](https://cmake.org/download/). Again, may have to add to path.
- Unix System (Linux): ```sudo apt-get install cmake```
Make sure it worked: ```cmake --version```

Ninja is the build tool that actually compile the code.
- Window System: try [here](https://github.com/ninja-build/ninja/releases). Same with adding to path.
- Unix System (Linux): ```sudo apt-get install ninja-build```
Make sure it worked: ```ninja --version```

# Debugging
To debug, make sure you have openocd installed sudo apt-get install openocd On Windows, try here. Also may have to add to path. Additionally, grab the cortex-debug extension for VSCode. There are reference launch.json files found in the repository already under .vscode.
