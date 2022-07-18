#!/bin/bash
gcc *.c -c -fPIC | touch liball.so
gcc *.o -shared -o liball.so
