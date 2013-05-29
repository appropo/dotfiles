# Dotfiles
Speed up the boarding process. The concept of organization is based on Zach Holman's dotfiles at https://github.com/holman/dotfiles.

## TODO
- add homebrew installes
- add subl to PATH (ln -s "/Applications/Sublime Text 2 app/Contents/SharedSupport/bin/subl" /usr/local/bin/
)
- remove mysql path export in bash_profile
- alias `git branch` to `git branch -v`
- source .bash_profile after installation
- show branch in prompt when navigating in git repos

## Getting started
1. `$ cd` to the directory you want your dotfiles to live in.
2. Clone this repo `$ git clone https://github.com/moritzhaller/dotfiles.git ./.dotfiles`.
3. Cd to the dotfiles directory `cd ./dotfiles`.
3. Create symlinks by running `./script/install` and following the instructions.

## Assumptions
These dotfiles are ment to work with bash under OSX.
