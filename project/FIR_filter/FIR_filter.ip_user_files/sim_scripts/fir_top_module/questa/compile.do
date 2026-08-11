vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xbip_utils_v3_0_10
vlib questa_lib/msim/axi_utils_v2_0_6
vlib questa_lib/msim/xbip_pipe_v3_0_6
vlib questa_lib/msim/xbip_bram18k_v3_0_6
vlib questa_lib/msim/mult_gen_v12_0_18
vlib questa_lib/msim/xbip_dsp48_wrapper_v3_0_4
vlib questa_lib/msim/xbip_dsp48_addsub_v3_0_6
vlib questa_lib/msim/xbip_dsp48_multadd_v3_0_6
vlib questa_lib/msim/dds_compiler_v6_0_22
vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/sim_clk_gen_v1_0_3
vlib questa_lib/msim/c_reg_fd_v12_0_6
vlib questa_lib/msim/xbip_addsub_v3_0_6
vlib questa_lib/msim/c_addsub_v12_0_15
vlib questa_lib/msim/fir_compiler_v7_2_19
vlib questa_lib/msim/xlconstant_v1_1_7

vmap xbip_utils_v3_0_10 questa_lib/msim/xbip_utils_v3_0_10
vmap axi_utils_v2_0_6 questa_lib/msim/axi_utils_v2_0_6
vmap xbip_pipe_v3_0_6 questa_lib/msim/xbip_pipe_v3_0_6
vmap xbip_bram18k_v3_0_6 questa_lib/msim/xbip_bram18k_v3_0_6
vmap mult_gen_v12_0_18 questa_lib/msim/mult_gen_v12_0_18
vmap xbip_dsp48_wrapper_v3_0_4 questa_lib/msim/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_6 questa_lib/msim/xbip_dsp48_addsub_v3_0_6
vmap xbip_dsp48_multadd_v3_0_6 questa_lib/msim/xbip_dsp48_multadd_v3_0_6
vmap dds_compiler_v6_0_22 questa_lib/msim/dds_compiler_v6_0_22
vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap sim_clk_gen_v1_0_3 questa_lib/msim/sim_clk_gen_v1_0_3
vmap c_reg_fd_v12_0_6 questa_lib/msim/c_reg_fd_v12_0_6
vmap xbip_addsub_v3_0_6 questa_lib/msim/xbip_addsub_v3_0_6
vmap c_addsub_v12_0_15 questa_lib/msim/c_addsub_v12_0_15
vmap fir_compiler_v7_2_19 questa_lib/msim/fir_compiler_v7_2_19
vmap xlconstant_v1_1_7 questa_lib/msim/xlconstant_v1_1_7

vcom -work xbip_utils_v3_0_10  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/364f/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_18  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/ab19/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/5a54/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work dds_compiler_v6_0_22  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/a99f/hdl/dds_compiler_v6_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/fir_top_module/ip/fir_top_module_dds_compiler_0_0/sim/fir_top_module_dds_compiler_0_0.vhd" \
"../../../bd/fir_top_module/ip/fir_top_module_dds_compiler_0_1/sim/fir_top_module_dds_compiler_0_1.vhd" \

vlog -work sim_clk_gen_v1_0_3  -incr -mfcu  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/fda6/hdl/sim_clk_gen_v1_0_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  \
"../../../bd/fir_top_module/ip/fir_top_module_sim_clk_gen_0_0/sim/fir_top_module_sim_clk_gen_0_0.v" \

vcom -work c_reg_fd_v12_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/edec/hdl/c_reg_fd_v12_0_vh_rfs.vhd" \

vcom -work xbip_addsub_v3_0_6  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/cfdd/hdl/xbip_addsub_v3_0_vh_rfs.vhd" \

vcom -work c_addsub_v12_0_15  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/6b20/hdl/c_addsub_v12_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/fir_top_module/ip/fir_top_module_c_addsub_0_0/sim/fir_top_module_c_addsub_0_0.vhd" \
"../../../bd/fir_top_module/sim/fir_top_module.vhd" \

vcom -work fir_compiler_v7_2_19  -93  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/d2b0/hdl/fir_compiler_v7_2_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/fir_top_module/ip/fir_top_module_fir_compiler_0_0/sim/fir_top_module_fir_compiler_0_0.vhd" \

vlog -work xlconstant_v1_1_7  -incr -mfcu  \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/b0f2/hdl/xlconstant_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  \
"../../../bd/fir_top_module/ip/fir_top_module_xlconstant_0_0/sim/fir_top_module_xlconstant_0_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

