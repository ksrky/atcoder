#!/bin/bash

contest_name=$1

problem_list=(a b c d e f)

template=$(cat <<EOS
#include <bits/stdc++.h>

using namespace std;

int main() {

}
EOS
)

if [ ! -d ${contest_name} ]; then
  echo "[INFO] Creating files..."
  mkdir ${contest_name}
  cd ${contest_name}
  mkdir target \test

  for file in "${problem_list[@]}"
  do
      touch ${file}.cpp
      echo "$template" > ${file}.cpp
  done
  cd ..
  echo "[INFO] Done!"
else
  echo "[INFO] The directory already exists."
fi

echo "[INFO] Replacing contest name.."

sed -i -e "s/set(CONTEST_NAME .*)/set(CONTEST_NAME $contest_name)/g" ./CMakeLists.txt
sed -i -e "s/^contest_name=.*/contest_name=$contest_name/g" ./cptest.sh
