
problem=$1
category=$2

rm -rf mycat

echo "Creating ${problem} with ${category} category..."

path=${category}/${problem}

problem_file=${path}/${problem}.h
test_file=${path}/test.cpp
cmake_file=${path}/CMakeLists.txt


sample_path=samples/problem

mkdir -p ${path}
cp ${sample_path}/problem.h ${problem_file}
cp ${sample_path}/test.cpp ${test_file}
cp ${sample_path}/CMakeLists.txt ${cmake_file}

# Creating pretty class name using CamelCase
problem_camel_case=$(sed -r 's/(^|_)(\w)/\U\2/g' <<< ${problem})

# Substituting this classname
sed -i "s/SolutionClass/${problem_camel_case}/" ${problem_file} ${test_file}
# sed -i "s/SolutionClass/${problem_camel_case}/" ${test_file}
sed -i "s/problem/${problem}/" ${test_file} ${cmake_file}
echo "add_task(${path})"  | tee -a CMakeLists.txt
