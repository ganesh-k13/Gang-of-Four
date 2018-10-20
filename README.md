# GANG OF FOUR PATTERNS

[![Build Status](https://travis-ci.org/ganesh-k13/Gang-of-Four.svg?branch=master)](https://travis-ci.org/ganesh-k13/Gang-of-Four) ![stability-wip](https://img.shields.io/badge/stability-work_in_progress-lightgrey.svg) [![licensebuttons by-sa](https://licensebuttons.net/l/by-sa/3.0/88x31.png)](https://creativecommons.org/licenses/by-sa/4.0)

This repository contains implementations of GOF Patterns

### Installation

This package requires:
- g++

### Tests

```sh
$ ./test.sh
```

### How to contribute

To contibute follow the structure:

- Create a folder with name of pattern.
- Folder must contain makefile in it's folder.
- Makefile must produce test as output.

Sample structure:
```
.
├── Iterator
│   ├── include
│   │   ├── carray.h
│   │   └── utils.h
│   ├── makefile
│   ├── obj
│   │   ├── carray.o
│   │   └── test.o
│   ├── src
│   │   └── carray.cpp
│   ├── test
│   └── test.cpp

```

This is to enable test.sh to execute with no errors for Travis checks.

### License: Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)

