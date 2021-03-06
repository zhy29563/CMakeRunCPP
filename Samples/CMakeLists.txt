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
ADD_EXECUTABLE(001_memory_model             sources/itheima/phase_02_core_programing/001_memory_model.cpp)
ADD_EXECUTABLE(002_reference                sources/itheima/phase_02_core_programing/002_reference.cpp)
ADD_EXECUTABLE(003_reference_function       sources/itheima/phase_02_core_programing/003_reference_function.cpp)
ADD_EXECUTABLE(004_reference_essence        sources/itheima/phase_02_core_programing/004_reference_essence.cpp)
ADD_EXECUTABLE(005_reference_const          sources/itheima/phase_02_core_programing/005_reference_const.cpp)
ADD_EXECUTABLE(006_function_parameter       sources/itheima/phase_02_core_programing/006_function_parameter.cpp)
ADD_EXECUTABLE(007_function_overide         sources/itheima/phase_02_core_programing/007_function_overide.cpp)
ADD_EXECUTABLE(008_class_package            sources/itheima/phase_02_core_programing/008_class_package.cpp)
ADD_EXECUTABLE(009_difference_class_struct  sources/itheima/phase_02_core_programing/009_difference_class_struct.cpp)
ADD_EXECUTABLE(010_private_member           sources/itheima/phase_02_core_programing/010_private_member.cpp)
ADD_EXECUTABLE(011_class_init_del           sources/itheima/phase_02_core_programing/011_class_init_del.cpp)
ADD_EXECUTABLE(012_class_init_type          sources/itheima/phase_02_core_programing/012_class_init_type.cpp)
ADD_EXECUTABLE(013_class_init_invoke_time   sources/itheima/phase_02_core_programing/013_class_init_invoke_time.cpp)
ADD_EXECUTABLE(014_class_init_invoke_rule   sources/itheima/phase_02_core_programing/014_class_init_invoke_rule.cpp)
ADD_EXECUTABLE(015_class_init_deep_copy     sources/itheima/phase_02_core_programing/015_class_init_deep_copy.cpp)
ADD_EXECUTABLE(016_class_init_list          sources/itheima/phase_02_core_programing/016_class_init_list.cpp)
ADD_EXECUTABLE(017_class_member_is_class    sources/itheima/phase_02_core_programing/017_class_member_is_class.cpp)
ADD_EXECUTABLE(018_class_static_field       sources/itheima/phase_02_core_programing/018_class_static_field.cpp)
ADD_EXECUTABLE(019_class_static_function    sources/itheima/phase_02_core_programing/019_class_static_function.cpp)
ADD_EXECUTABLE(020_class_member_storage     sources/itheima/phase_02_core_programing/020_class_member_storage.cpp)
ADD_EXECUTABLE(021_class_this_pointer       sources/itheima/phase_02_core_programing/021_class_this_pointer.cpp)
ADD_EXECUTABLE(022_class_null_pointer       sources/itheima/phase_02_core_programing/022_class_null_pointer.cpp)
ADD_EXECUTABLE(023_class_member_const_func  sources/itheima/phase_02_core_programing/023_class_member_const_func.cpp)
ADD_EXECUTABLE(024_friend_global_function   sources/itheima/phase_02_core_programing/024_friend_global_function.cpp)
ADD_EXECUTABLE(025_friend_class             sources/itheima/phase_02_core_programing/025_friend_class.cpp)
ADD_EXECUTABLE(026_friend_member_function   sources/itheima/phase_02_core_programing/026_friend_member_function.cpp)
ADD_EXECUTABLE(027_operator_add             sources/itheima/phase_02_core_programing/027_operator_add.cpp)
ADD_EXECUTABLE(028_operator_lshfit          sources/itheima/phase_02_core_programing/028_operator_lshfit.cpp)
ADD_EXECUTABLE(029_operator_increse         sources/itheima/phase_02_core_programing/029_operator_increse.cpp)
ADD_EXECUTABLE(030_operator_assign          sources/itheima/phase_02_core_programing/030_operator_assign.cpp)
ADD_EXECUTABLE(031_operator_compare         sources/itheima/phase_02_core_programing/031_operator_compare.cpp)
ADD_EXECUTABLE(032_operator_function        sources/itheima/phase_02_core_programing/032_operator_function.cpp)
ADD_EXECUTABLE(033_inherit_import           sources/itheima/phase_02_core_programing/033_inherit_import.cpp)
ADD_EXECUTABLE(034_inherit                  sources/itheima/phase_02_core_programing/034_inherit.cpp)
ADD_EXECUTABLE(035_inherit_mode             sources/itheima/phase_02_core_programing/035_inherit_mode.cpp)
ADD_EXECUTABLE(036_inherit_object_model     sources/itheima/phase_02_core_programing/036_inherit_object_model.cpp)
ADD_EXECUTABLE(037_inherit_init_del_order   sources/itheima/phase_02_core_programing/037_inherit_init_del_order.cpp)
ADD_EXECUTABLE(038_inherit_samename_member  sources/itheima/phase_02_core_programing/038_inherit_samename_member.cpp)
ADD_EXECUTABLE(039_inherit_samename_static_member
                                            sources/itheima/phase_02_core_programing/039_inherit_samename_static_member.cpp)
ADD_EXECUTABLE(040_inherit_multi            sources/itheima/phase_02_core_programing/040_inherit_multi.cpp)
ADD_EXECUTABLE(041_inherit_diamond          sources/itheima/phase_02_core_programing/041_inherit_diamond.cpp)
ADD_EXECUTABLE(042_polymorphism             sources/itheima/phase_02_core_programing/042_polymorphism.cpp)
ADD_EXECUTABLE(043_polymorphism_calculator  sources/itheima/phase_02_core_programing/043_polymorphism_calculator.cpp)
ADD_EXECUTABLE(044_polymorphism_abstract_class
                                            sources/itheima/phase_02_core_programing/044_polymorphism_abstract_class.cpp)
ADD_EXECUTABLE(045_polymorphism_drinking    sources/itheima/phase_02_core_programing/045_polymorphism_drinking.cpp)
ADD_EXECUTABLE(046_polymorphism_virtual_init_del
                                            sources/itheima/phase_02_core_programing/046_polymorphism_virtual_init_del.cpp)
ADD_EXECUTABLE(047_polymorphism_computer    sources/itheima/phase_02_core_programing/047_polymorphism_computer.cpp)
ADD_EXECUTABLE(048_file                     sources/itheima/phase_02_core_programing/048_file.cpp)
ADD_EXECUTABLE(049_file_ascii_write         sources/itheima/phase_02_core_programing/049_file_ascii_write.cpp)
ADD_EXECUTABLE(050_file_ascii_read          sources/itheima/phase_02_core_programing/050_file_ascii_read.cpp)
ADD_EXECUTABLE(051_file_binary_write        sources/itheima/phase_02_core_programing/051_file_binary_write.cpp)
ADD_EXECUTABLE(052_file_binary_read         sources/itheima/phase_02_core_programing/052_file_binary_read.cpp)


ADD_EXECUTABLE(999_example_employee_system  sources/itheima/phase_02_core_programing/999_example_employee_system.cpp
                                            sources/itheima/phase_02_core_programing/999_example_workerManager.h
                                            sources/itheima/phase_02_core_programing/999_example_workerManager.cpp
                                            sources/itheima/phase_02_core_programing/999_example_worker.h
                                            sources/itheima/phase_02_core_programing/999_example_employee.h
                                            sources/itheima/phase_02_core_programing/999_example_employee.cpp
                                            sources/itheima/phase_02_core_programing/999_example_manager.h
                                            sources/itheima/phase_02_core_programing/999_example_manager.cpp
                                            sources/itheima/phase_02_core_programing/999_example_boss.h
                                            sources/itheima/phase_02_core_programing/999_example_boss.cpp)
#######################################################################################################################
# 第三阶段  C++提高编程         演讲比赛系统
ADD_EXECUTABLE(001_template                 sources/itheima/phase_03_generic_programing/001_template.cpp)
ADD_EXECUTABLE(002_template_function        sources/itheima/phase_03_generic_programing/002_template_function.cpp)
ADD_EXECUTABLE(003_template_function_warn   sources/itheima/phase_03_generic_programing/003_template_function_warn.cpp)
ADD_EXECUTABLE(004_template_function_example
                                            sources/itheima/phase_03_generic_programing/004_template_function_example.cpp)
ADD_EXECUTABLE(005_template_function_difference
                                            sources/itheima/phase_03_generic_programing/005_template_function_difference.cpp)
ADD_EXECUTABLE(006_template_function_invoke_rule
                                            sources/itheima/phase_03_generic_programing/006_template_function_invoke_rule.cpp)
ADD_EXECUTABLE(007_template_function_limitation
                                            sources/itheima/phase_03_generic_programing/007_template_function_limitation.cpp)
ADD_EXECUTABLE(008_template_class           sources/itheima/phase_03_generic_programing/008_template_class.cpp)
ADD_EXECUTABLE(009_template_class_vs_function
                                            sources/itheima/phase_03_generic_programing/009_template_class_vs_function.cpp)
ADD_EXECUTABLE(010_template_class_gen_member_time
                                            sources/itheima/phase_03_generic_programing/010_template_class_gen_member_time.cpp)
ADD_EXECUTABLE(011_template_class_as_param  sources/itheima/phase_03_generic_programing/011_template_class_as_param.cpp)
ADD_EXECUTABLE(012_template_class_inherit   sources/itheima/phase_03_generic_programing/012_template_class_inherit.cpp)
ADD_EXECUTABLE(013_template_class_member    sources/itheima/phase_03_generic_programing/013_template_class_member.cpp)
ADD_EXECUTABLE(014_template_class_difference_file
                                            sources/itheima/phase_03_generic_programing/014_template_class_difference_file.cpp
                                            sources/itheima/phase_03_generic_programing/014_template_class_person.h
                                            sources/itheima/phase_03_generic_programing/014_template_class_person.cpp
                                            sources/itheima/phase_03_generic_programing/014_template_class_person.hpp)
ADD_EXECUTABLE(015_template_class_friend    sources/itheima/phase_03_generic_programing/015_template_class_friend.cpp)
ADD_EXECUTABLE(016_template_class_example   sources/itheima/phase_03_generic_programing/016_template_class_example.cpp
                                            sources/itheima/phase_03_generic_programing/016_template_class_array.hpp)
ADD_EXECUTABLE(017_stl                      sources/itheima/phase_03_generic_programing/017_stl.cpp)
ADD_EXECUTABLE(018_stl_basic_type           sources/itheima/phase_03_generic_programing/018_stl_basic_type.cpp)
ADD_EXECUTABLE(019_stl_customed_type        sources/itheima/phase_03_generic_programing/019_stl_customed_type.cpp)
ADD_EXECUTABLE(020_stl_nesting              sources/itheima/phase_03_generic_programing/020_stl_nesting.cpp)
ADD_EXECUTABLE(021_stl_string               sources/itheima/phase_03_generic_programing/021_stl_string.cpp)
ADD_EXECUTABLE(022_stl_vector               sources/itheima/phase_03_generic_programing/022_stl_vector.cpp)
ADD_EXECUTABLE(023_stl_deque                sources/itheima/phase_03_generic_programing/023_stl_deque.cpp)
ADD_EXECUTABLE(024_stl_vector_deque_example sources/itheima/phase_03_generic_programing/024_stl_vector_deque_example.cpp)
ADD_EXECUTABLE(025_stl_stack                sources/itheima/phase_03_generic_programing/025_stl_stack.cpp)
ADD_EXECUTABLE(026_stl_queue                sources/itheima/phase_03_generic_programing/026_stl_queue.cpp)
ADD_EXECUTABLE(027_stl_list                 sources/itheima/phase_03_generic_programing/027_stl_list.cpp)
ADD_EXECUTABLE(028_stl_set_multiset         sources/itheima/phase_03_generic_programing/028_stl_set_multiset.cpp)
ADD_EXECUTABLE(029_stl_map_multimap         sources/itheima/phase_03_generic_programing/029_stl_map_multimap.cpp)
ADD_EXECUTABLE(030_stl_example              sources/itheima/phase_03_generic_programing/030_stl_example.cpp)
ADD_EXECUTABLE(031_stl_function             sources/itheima/phase_03_generic_programing/031_stl_function.cpp)
ADD_EXECUTABLE(033_stl_function_itself      sources/itheima/phase_03_generic_programing/033_stl_function_itself.cpp)
ADD_EXECUTABLE(034_stl_algorithm            sources/itheima/phase_03_generic_programing/034_stl_algorithm.cpp)
#######################################################################################################################
# 综合大案例：机房预约系统
