easy_sqlite_logging
===================

A really easy to use, basic library to log messages to sqlite as easy as using printf

# How to Use
## Clone the Repository
First clone this repository into a folder in your project like so:
```bash
git clone https://github.com/amorri40/easy_sqlite_logging.git
```

## Include the main file
Now add the main include file to your project like so:
```C++
#include "../../easy_sqlite_logging/include/easy_sqlite_logging.h"
```

## Compile and LINK TO THE LIBRARY
Now you need to make sure the files in easy_sqlite_logging/src are compiled and linked to your project, this really depends on your build system such as Makefile/SConstruct etc, but you need to add the following files
- ../easy_sqlite_logging/src/easy_sqlite_logging.cpp
- ../easy_sqlite_logging/src/customised_sqlite_logging.cpp
- ../easy_sqlite_logging/src/sqlite3.c

## Initialise the library at initialisation time
Now to initialise the library just call this once in your initialization:
```C++
initialise_easy_sqlite_library();
```