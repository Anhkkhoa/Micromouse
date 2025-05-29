# Micromouse 2025
Hey, Welcome to my Cmake + Ninja build for micromouse software. The system using STM32CubeMX + VSCode as main IDE. We will use Cmake + Ninja for build system and OpenOCD to debug. If there are any question, feel free to ask any of lead members or prefer to Troubleshooting section

## Environment Setup & Installing Prerequisites
# 1. Arm Toolchain
It is a collection of software development tool for working with ARM architecture. 
- Window System: Download it from online. try [here](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads). Common machine using Windows mingw-w64-x86_64 version (using .exe is the easiest to install). You may have to add it to system variable path. 
- Unix System (Linux): using your package installer. For example:  ```sudo apt-get install arm-none-eabi-gcc``` 
Make sure it worked: ```arm-none-eabi-gcc --version``` (worked for both system)

If you want to cross-compile for 32-bit RPI, also install the arm32 toolchain: ```gcc-arm-linux-gnueabihf```.
On Windows, try [here](https://developer.arm.com/downloads/-/gnu-a). Make sure it worked: ```arm-linux-gnueabihf-gcc --version```

# 2. Build System: Cmake + Ninja
Cmake is a build system that will look into (CmakeLists.txt) to figure outs how compile process should be (what files to compile, what compliers and where to put output, etc...)
- Window System: try [here](https://cmake.org/download/). Again, may have to add to path.
- Unix System (Linux): ```sudo apt-get install cmake```
Make sure it worked: ```cmake --version```

Ninja is the build tool that actually compile the code.
- Window System: try [here](https://github.com/ninja-build/ninja/releases). Same with adding to path.
- Unix System (Linux): ```sudo apt-get install ninja-build```
Make sure it worked: ```ninja --version```

# 3. External Dependencies
Other libaries and tool for our project. Run this in your code terminal ```git submodule update --init --recursive```

##Troubleshooting