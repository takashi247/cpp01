#!/bin/bash

GREEN="\033[32m"
RESET="\033[39m"

replace_test () {
	echo -e ${GREEN}${1}${RESET}
	eval $1
	echo ""
}

touch test_files/test_no_permission
chmod 000 test_files/test_no_permission

replace_test './replace test_files/no_file hoge hoge'
replace_test './replace test_files/test_no_permission hoge hoge'
replace_test './replace test_files/test_dir hoge hoge'
replace_test './replace test_files/test_dir/ hoge hoge'
replace_test './replace "" hoge hoge'

rm -rf test_files/test_no_permission