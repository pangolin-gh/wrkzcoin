// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

/* Check if we have the <filesystem> header, or just <experimental/filesystem> */
#if defined(__cplusplus) && __cplusplus >= 201703L && defined(__has_include) && !defined __ANDROID__
#if __has_include(<filesystem>)
#define GHC_USE_STD_FS
#include <filesystem>
namespace fs = std::filesystem;
#endif
#endif
#if defined(__ANDROID__)
#include <ghc-filesystem/filesystem.hpp>
namespace fs = ghc::filesystem;
#endif

