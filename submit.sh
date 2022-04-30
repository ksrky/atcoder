#!/bin/bash

problem_name=$1
contest_dir=extra
contest_name=typical_algorithm

cd ${contest_dir}/${contest_name} || exit

oj s https://atcoder.jp/contests/${contest_name}/tasks/${contest_name}_"$problem_name" "$problem_name".cpp -y
