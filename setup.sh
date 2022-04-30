#!/bin/bash

read -r -p "Enter contest kind: " contest_dir
read -r -p "Enter contest name: " contest_name
read -r -p "Enter the number of problems: " n_problem

problem_list=(a b c d e f)

template=$(cat <<EOS
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {

}
EOS
)

if [ ! -d "$contest_dir" ]; then
  mkdir "$contest_dir"
fi
cd "$contest_dir" || exit

if [ ! -d "$contest_name" ]; then
  echo "[INFO] Creating files..."
  mkdir "$contest_name"
  cd "$contest_name" || exit
  mkdir target \test

  for file in "${problem_list[@]}"
  do
      touch "$file".cpp
      echo "$template" > "$file".cpp
  done
  cd ..
  echo "[INFO] Done!"
else
  echo "[INFO] The directory already exists."
fi

cd ../

echo "[INFO] Replacing contest name..."

sed -i -e "s/set(CONTEST_DIR .*)/set(CONTEST_DIR $contest_dir)/g" ./CMakeLists.txt
sed -i -e "s/set(CONTEST_NAME .*)/set(CONTEST_NAME $contest_name)/g" ./CMakeLists.txt
sed -i -e "s/^contest_dir=.*/contest_dir=$contest_dir/g" ./test.sh
sed -i -e "s/^contest_name=.*/contest_name=$contest_name/g" ./test.sh
sed -i -e "s/^contest_dir=.*/contest_dir=$contest_dir/g" ./submit.sh
sed -i -e "s/^contest_name=.*/contest_name=$contest_name/g" ./submit.sh

echo "[INFO] Done!"
