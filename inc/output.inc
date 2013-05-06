#!/bin/bash
#
# output.inc
#
# Helper functions for formatted ouput

source $dotfiles_root/inc/colors.inc

print_info () {
	printf "\r[$iyellow .. $color_off] $1\n"
}

print_prompt () {
	printf "\r[$ipurple >> $color_off] $1: "
}

print_success () {
	printf "\r[$igreen OK $color_off] $1\n"
}

fail () {
	printf "\r[$ired XX $color_off] $1\n"
	exit
}