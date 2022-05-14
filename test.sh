#!/bin/bash

problem_name=$1
contest_dir=abc
contest_name=abc250
test_dir=test/${problem_name}

cd ${contest_dir}/${contest_name} || exit

if [ ! -d "$test_dir" ]; then
  oj dl -d "$test_dir" https://atcoder.jp/contests/${contest_name}/tasks/${contest_name}_"$problem_name"
fi

g++ "$problem_name".cpp -o target/"$problem_name".out


e_flag=0
while getopts :e OPT
do
  case $OPT in
    e) e_flag=1;;
    *) echo "Unknown option: $OPT" && exit
  esac
done

if [ $e_flag -eq 0 ]; then
  oj t -c target/"$problem_name".out test/"$problem_name"/*
else
  oj t -c target/"$problem_name".out test/"$problem_name"/* -e 1e-5
fi
