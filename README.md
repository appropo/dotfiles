Dotfiles
========

Speed up the boarding process. The concept of organization is based on Zach Holman's dotfiles at https://github.com/holman/dotfiles.

What happens
------------

- The bin folder gets symlinked into your $HOME directory
- All binaries will be available in global scope when the bash/.bash_profile gets symlinked and $HOME/bin is added to the $PATH environment variable
- OS X defaults are set
