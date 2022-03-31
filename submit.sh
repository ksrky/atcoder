#!/bin/bash

problem_name=$1
contest_dir=abc
contest_name=abc235

cd ${contest_dir}/${contest_name}

oj s https://atcoder.jp/contests/${contest_name}/tasks/${contest_name}_${problem_name} ${problem_name}.cpp -y
