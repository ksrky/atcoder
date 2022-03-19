#!/bin/bash

problem_name=$1
contest_dir=abc
contest_name=abc237
test_dir=test/${problem_name}

cd ${contest_dir}/${contest_name}

if [ ! -d ${test_dir} ]; then
  oj dl -d ${test_dir} https://atcoder.jp/contests/${contest_name}/tasks/${contest_name}_${problem_name}
fi

g++ ${problem_name}.cpp -o target/${problem_name}.out


eflag=0
while getopts e OPT
do
  case $OPT in
    e) eflag=1;;
  esac
done

if [ $eflag -eq 0 ]; then
  oj t -c target/${problem_name}.out test/${problem_name}/*
else
  oj t -c target/${problem_name}.out test/${problem_name}/* -e 1e-5
fi
