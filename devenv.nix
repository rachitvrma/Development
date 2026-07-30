{
  pkgs,
  lib,
  config,
  inputs,
  ...
}:

{
  # https://devenv.sh/basics/
  env.GREET = "devenv";

  # https://devenv.sh/languages/
  languages = {
    c = {
      enable = true;
      lsp.package = pkgs.clang-tools;
    };
    cplusplus = {
      enable = true;
      lsp.package = pkgs.clang-tools;
    };
  };

  # https://devenv.sh/basics/
  enterShell = ''
    echo "c/c++ devenv ready: $(gcc -dumpversion), $(cmake --version | head -1)"
  '';

  packages = with pkgs; [
    gf
    cppcheck
  ];

}
