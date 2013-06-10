# Dotfiles
Speed up the boarding process. The concept of organization is based on Zach Holman's dotfiles at https://github.com/holman/dotfiles.

## TODO
- Install php from source with mcrypt etc
- Add homebrew installes
- <del>Add subl to PATH</del>
- <del>Remove mysql path export in bash_profile</del>
- Alias `git branch` to `git branch -v`
- <del>Source .bash_profile after installation</del>
- Show branch in prompt when navigating in git repos
- Save developer-specific data in ENV or plain text for updates without prompt

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
