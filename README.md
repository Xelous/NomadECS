# Xelous's Branch
The first thing to know is I am not the originator of this code, I am only an interested spectator, and am going to be using this code as a third part of my C++ Coding Guidelines video series as a) it's interesting code b) it's a quite well done ECS implementation and c) it's not in my coding standard.

The latter point is ONLY my point, I am not judging code, I am not deciding what may or may not be better, I am simply applying my own personal preferences as I iterate over the code, the purpose of which is to further my understanding of the code, but to also made the mode more readable to myself.

# Windows/Visual Studio 2017 (C++17)
My first step is to create an msvc subdirectory and begin adding a Windows Solution, though I aim to keep all the code cross platform (and it is with the makefiles already included) but I do prefer to use Visual Studio.

# NomadECS
Nomad ECS is an entity component system implemention. More information about this project can be found on its homepage: https://savas.ca/nomad. Star this repo if you're a fan!

## Install
This repository can be built by itself, but the easiest way to use it is alongside [Conan.io](https://conan.io/)

The package is hosted on Bintray: https://bintray.com/taurheim/nomad/NomadECS:taurheim

1. Follow the instructions here: https://docs.conan.io/en/latest/installation.html
1. Run `conan remote add nomad https://api.bintray.com/conan/taurheim/nomad`

Try building the example project by following instructions in the `example/` folder

## Disclaimer
This repository is still a work in progress - It's actually a simplified port of the more complex game engine I'm developing. This means that it might not cover every edge case or be the most performant in every scenario, instead it is primarily designed to show off ECS concepts and to accompany my blog posts at https://savas.ca/nomad.

Among the things still left to be done in this repo are:
- Fix memory ownership and add destructors
- Add unit tests
- Add component garbage collection (+ Blog post)
- Write demo game (+ Blog post)
- Support multiple worlds (+ Blog post)

Feel free to add issues for features that need adding or bugs that come up!
