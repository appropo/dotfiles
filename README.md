dotfiles
========

Speed up the boarding process. The concept of organization is based on Zach Holman's dotfiles at https://github.com/holman/dotfiles.

What happens
------------

- the bin folder gets symlinked into your $HOME directory
- all binaries will be available in global scope when the bash/.bashprofile gets symlinked and $HOME/bin is added to the $PATH environment variable
- OS X defaults are set
