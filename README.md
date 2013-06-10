# Dotfiles
Speed up the boarding process. The concept of organization is based on Zach Holman's dotfiles at https://github.com/holman/dotfiles.

## TODO
- install php from source with mcrypt etc
- add homebrew installes
- <del>add subl to PATH</del>
- <del>remove mysql path export in bash_profile</del>
- alias `git branch` to `git branch -v`
- <del>source .bash_profile after installation</del>
- show branch in prompt when navigating in git repos

## Getting started
1. `$ cd` to the directory you want your dotfiles to live in.
2. Clone this repo `$ git clone https://github.com/moritzhaller/dotfiles.git ./.dotfiles`.
3. Cd to the dotfiles directory `cd ./dotfiles`.
3. Create symlinks by running `./script/install` and following the instructions.

## Update dotfiles
1. Cd into your dotfiles root-directory
2. Run the update script `$ ./script/update`

## Assumptions
These dotfiles are ment to work with bash under OSX.
