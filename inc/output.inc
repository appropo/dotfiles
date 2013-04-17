#!/bin/bash
#
# output.inc
#
# Helper functions for formatted ouput

source $dotfiles_root/inc/colors.inc

print_info () {
	printf "\r[$yellow .. $color_off] $1\n"
}

print_success () {
	printf "\r[$green OK $color_off] $1\n"
}

fail () {
	printf "\r[$red FAIL $color_off] $1\n"
	exit
}