#!/bin/bash

problem_name=$1
contest_dir=abc
contest_name=abc249

cd ${contest_dir}/${contest_name} || exit

oj s https://atcoder.jp/contests/${contest_name}/tasks/${contest_name}_"$problem_name" "$problem_name".cpp -y
