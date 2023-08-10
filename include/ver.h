#pragma once

/*
ver.h
-----
Version definitions
*/

#define STRFY_(x) #x
#define STRFY(x) STRFY_(x)

#define VER_MAJOR 1
#define VER_MINOR 0
#define VER_PATCH 0

#define VER_STR STRFY(VER_MAJOR) "." STRFY(VER_MINOR) "." STRFY(VER_PATCH)
