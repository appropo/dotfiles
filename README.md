dotfiles
========

Speed up the boarding process

Directory structure
-------------------

dotfiles
 bash
 bin
 git
 script

What happens
------------

### bin: binaries
- the bin folder gets symlinked into your $HOME directory
- all binaries will be available in global scope when the bash/.bashprofile gets symlinked and $HOME/bin is added to the $PATH environment variable
