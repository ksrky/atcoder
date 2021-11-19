#!/bin/bash

problem_name=$1
contest_name=abc190
test_dir=test/${problem_name}

cd ${contest_name}

if [ ! -d ${test_dir} ]; then
  oj dl -d ${test_dir} https://atcoder.jp/contests/${contest_name}/tasks/${contest_name}_${problem_name}
fi

g++ ${problem_name}.cpp -o target/${problem_name}.out
oj t -c target/${problem_name}.out test/${problem_name}/*
# oj t -c target/${problem_name}.out test/${problem_name}/* -e 1e-5
