;; manifest.scm
;; Development environment for the DSA-in-C practice repo,
;; replaces devenv.nix (languages.c/cplusplus + packages).

(specifications->manifest
 '("gcc-toolchain"      ; gcc, g++, ld, make, libc — same role as languages.c/cplusplus
   "clang-toolchain"    ; clang/clang++, used for the clang-tools LSP in devenv.nix
   "cmake"              ; your enterShell echoed `cmake --version`, so keeping it explicit
   "gdb"                ; debugger
   "cppcheck"))         ; static analysis, matches your `packages` list
