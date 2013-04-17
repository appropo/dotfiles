#!/bin/bash
#
# output.inc
#
# Helper functions for formatted ouput

source $dotfiles_root/inc/colors.inc

print_info () {
	printf "\r[$yellow .. $color_off] $1\n"
}

print_prompt () {
	printf "\r[$purple >> $color_off] $1: "
}

print_success () {
	printf "\r[$green OK $color_off] $1\n"
}

fail () {
	printf "\r[$red XX $color_off] $1\n"
	exit
}