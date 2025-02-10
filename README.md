# MultiLanguage

An example of how compilers can handle non-ASCII characters.

Build in the traditional cmake way:

```console
mkdir build
cd build
cmake ..
make
```

To run:

```console
./MultiLanguage
```

To see how these C++ function names are handled at the assembly level:

```console
nm --demangle MultiLanguage
```

That produces lots of output. To see the functions:

```console
nm --demangle MultiLanguage | grep " T "
```
