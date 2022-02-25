# 指定最低的CMAKE版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.14 FATAL_ERROR)

# 创建项目
PROJECT(CPPSamples LANGUAGES CXX)

# 指定CPLUSPLUS标准
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_C_STANDARD 14)
SET(CMAKE_C_STANDARD_REQUIRED ON)


#######################################################################################################################
# 黑马程序员 匠心精作C++从0到1入门编程（https://www.bilibili.com/video/BV1et411b73Z?spm_id_from=333.999.0.0）
#######################################################################################################################
# 第一阶段  C++基础语法入门     通讯录管理系统
ADD_EXECUTABLE(001_hello_world              sources/itheima/phase_01_basic_grammer/001_hello_world.cpp)
ADD_EXECUTABLE(002_comments                 sources/itheima/phase_01_basic_grammer/002_comments.cpp)
ADD_EXECUTABLE(003_variable                 sources/itheima/phase_01_basic_grammer/003_variable.cpp)
ADD_EXECUTABLE(004_constant                 sources/itheima/phase_01_basic_grammer/004_constant.cpp)
ADD_EXECUTABLE(005_keyword                  sources/itheima/phase_01_basic_grammer/005_keyword.cpp)
ADD_EXECUTABLE(006_identification           sources/itheima/phase_01_basic_grammer/006_identification.cpp)
ADD_EXECUTABLE(007_datatype_integer         sources/itheima/phase_01_basic_grammer/007_datatype_integer.cpp)
ADD_EXECUTABLE(008_sizeof                   sources/itheima/phase_01_basic_grammer/008_sizeof.cpp)
ADD_EXECUTABLE(009_datatype_real            sources/itheima/phase_01_basic_grammer/009_datatype_real.cpp)
ADD_EXECUTABLE(010_datatype_char            sources/itheima/phase_01_basic_grammer/010_datatype_char.cpp)
ADD_EXECUTABLE(011_escape_character         sources/itheima/phase_01_basic_grammer/011_escape_character.cpp)
ADD_EXECUTABLE(012_datatype_string          sources/itheima/phase_01_basic_grammer/012_datatype_string.cpp)
ADD_EXECUTABLE(013_datatype_bool            sources/itheima/phase_01_basic_grammer/013_datatype_bool.cpp)
ADD_EXECUTABLE(014_data_input               sources/itheima/phase_01_basic_grammer/014_data_input.cpp)
ADD_EXECUTABLE(015_operator_math            sources/itheima/phase_01_basic_grammer/015_operator_math.cpp)
ADD_EXECUTABLE(016_operator_assign          sources/itheima/phase_01_basic_grammer/016_operator_assign.cpp)
ADD_EXECUTABLE(017_operator_compare         sources/itheima/phase_01_basic_grammer/017_operator_compare.cpp)
ADD_EXECUTABLE(018_operator_logical         sources/itheima/phase_01_basic_grammer/018_operator_logical.cpp)
ADD_EXECUTABLE(019_flow_if                  sources/itheima/phase_01_basic_grammer/019_flow_if.cpp)
ADD_EXECUTABLE(020_operator_three           sources/itheima/phase_01_basic_grammer/020_operator_three.cpp)
ADD_EXECUTABLE(021_flow_switch              sources/itheima/phase_01_basic_grammer/021_flow_switch.cpp)
ADD_EXECUTABLE(022_flow_while               sources/itheima/phase_01_basic_grammer/022_flow_while.cpp)
ADD_EXECUTABLE(023_flow_do_while            sources/itheima/phase_01_basic_grammer/023_flow_do_while.cpp)
ADD_EXECUTABLE(024_flow_for                 sources/itheima/phase_01_basic_grammer/024_flow_for.cpp)
ADD_EXECUTABLE(025_flow_break               sources/itheima/phase_01_basic_grammer/025_flow_break.cpp)
ADD_EXECUTABLE(026_flow_continue            sources/itheima/phase_01_basic_grammer/026_flow_continue.cpp)
ADD_EXECUTABLE(027_flow_goto                sources/itheima/phase_01_basic_grammer/027_flow_goto.cpp)
ADD_EXECUTABLE(028_array                    sources/itheima/phase_01_basic_grammer/028_array.cpp)
ADD_EXECUTABLE(029_array_one                sources/itheima/phase_01_basic_grammer/029_array_one.cpp)
ADD_EXECUTABLE(030_bubble_sort              sources/itheima/phase_01_basic_grammer/030_bubble_sort.cpp)
ADD_EXECUTABLE(031_array_two                sources/itheima/phase_01_basic_grammer/031_array_two.cpp)
ADD_EXECUTABLE(032_function                 sources/itheima/phase_01_basic_grammer/032_function.cpp)
ADD_EXECUTABLE(033_function_invoke          sources/itheima/phase_01_basic_grammer/033_function_invoke.cpp)
ADD_EXECUTABLE(034_function_input_by_value  sources/itheima/phase_01_basic_grammer/034_function_input_by_value.cpp)
ADD_EXECUTABLE(035_function_style           sources/itheima/phase_01_basic_grammer/035_function_style.cpp)
ADD_EXECUTABLE(037_function_head_source     sources/itheima/phase_01_basic_grammer/037_function_head_source.cpp
                                            sources/itheima/phase_01_basic_grammer/037_function_head.h
                                            sources/itheima/phase_01_basic_grammer/037_function_source.cpp)
ADD_EXECUTABLE(038_pointer                  sources/itheima/phase_01_basic_grammer/038_pointer.cpp)
ADD_EXECUTABLE(039_pointer_and_const        sources/itheima/phase_01_basic_grammer/039_pointer_and_const.cpp)
ADD_EXECUTABLE(040_pointer_and_array        sources/itheima/phase_01_basic_grammer/040_pointer_and_array.cpp)
ADD_EXECUTABLE(041_pointer_and_function     sources/itheima/phase_01_basic_grammer/041_pointer_and_function.cpp)
ADD_EXECUTABLE(042_pointer_array_function   sources/itheima/phase_01_basic_grammer/042_pointer_array_function.cpp)
ADD_EXECUTABLE(043_struct                   sources/itheima/phase_01_basic_grammer/043_struct.cpp)
ADD_EXECUTABLE(044_struct_array             sources/itheima/phase_01_basic_grammer/044_struct_array.cpp)
ADD_EXECUTABLE(045_struct_pointer           sources/itheima/phase_01_basic_grammer/045_struct_pointer.cpp)
ADD_EXECUTABLE(046_struct_nesting           sources/itheima/phase_01_basic_grammer/046_struct_nesting.cpp)
ADD_EXECUTABLE(047_struct_function          sources/itheima/phase_01_basic_grammer/047_struct_function.cpp)
ADD_EXECUTABLE(048_struct_const             sources/itheima/phase_01_basic_grammer/048_struct_const.cpp)
ADD_EXECUTABLE(049_struct_sample1           sources/itheima/phase_01_basic_grammer/049_struct_sample1.cpp)
ADD_EXECUTABLE(050_struct_sample2           sources/itheima/phase_01_basic_grammer/050_struct_sample2.cpp)

ADD_EXECUTABLE(999_sample_address_book      sources/itheima/phase_01_basic_grammer/999_sample_address_book.cpp)
#######################################################################################################################
# 第二阶段  C++核心编程         职工管理系统

#######################################################################################################################
# 第三阶段  C++提高编程         演讲比赛系统

#######################################################################################################################
# 综合大案例：机房预约系统
