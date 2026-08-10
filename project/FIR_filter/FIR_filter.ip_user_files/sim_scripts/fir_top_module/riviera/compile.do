transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {D:/repositories/image_processing/project/FIR_filter/FIR_filter.cache/compile_simlib/riviera}
vlib riviera/xbip_utils_v3_0_10
vlib riviera/axi_utils_v2_0_6
vlib riviera/xbip_pipe_v3_0_6
vlib riviera/xbip_bram18k_v3_0_6
vlib riviera/mult_gen_v12_0_18
vlib riviera/xbip_dsp48_wrapper_v3_0_4
vlib riviera/xbip_dsp48_addsub_v3_0_6
vlib riviera/xbip_dsp48_multadd_v3_0_6
vlib riviera/dds_compiler_v6_0_22
vlib riviera/xil_defaultlib
vlib riviera/sim_clk_gen_v1_0_3
vlib riviera/c_reg_fd_v12_0_6
vlib riviera/xbip_addsub_v3_0_6
vlib riviera/c_addsub_v12_0_15

vcom -work xbip_utils_v3_0_10 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/364f/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_18 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/ab19/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/5a54/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work dds_compiler_v6_0_22 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/a99f/hdl/dds_compiler_v6_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93  -incr \
"../../../bd/fir_top_module/ip/fir_top_module_dds_compiler_0_0/sim/fir_top_module_dds_compiler_0_0.vhd" \
"../../../bd/fir_top_module/ip/fir_top_module_dds_compiler_0_1/sim/fir_top_module_dds_compiler_0_1.vhd" \

vlog -work sim_clk_gen_v1_0_3  -incr -v2k5 -l xbip_utils_v3_0_10 -l axi_utils_v2_0_6 -l xbip_pipe_v3_0_6 -l xbip_bram18k_v3_0_6 -l mult_gen_v12_0_18 -l xbip_dsp48_wrapper_v3_0_4 -l xbip_dsp48_addsub_v3_0_6 -l xbip_dsp48_multadd_v3_0_6 -l dds_compiler_v6_0_22 -l xil_defaultlib -l sim_clk_gen_v1_0_3 -l c_reg_fd_v12_0_6 -l xbip_addsub_v3_0_6 -l c_addsub_v12_0_15 \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/fda6/hdl/sim_clk_gen_v1_0_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -v2k5 -l xbip_utils_v3_0_10 -l axi_utils_v2_0_6 -l xbip_pipe_v3_0_6 -l xbip_bram18k_v3_0_6 -l mult_gen_v12_0_18 -l xbip_dsp48_wrapper_v3_0_4 -l xbip_dsp48_addsub_v3_0_6 -l xbip_dsp48_multadd_v3_0_6 -l dds_compiler_v6_0_22 -l xil_defaultlib -l sim_clk_gen_v1_0_3 -l c_reg_fd_v12_0_6 -l xbip_addsub_v3_0_6 -l c_addsub_v12_0_15 \
"../../../bd/fir_top_module/ip/fir_top_module_sim_clk_gen_0_0/sim/fir_top_module_sim_clk_gen_0_0.v" \

vcom -work c_reg_fd_v12_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/edec/hdl/c_reg_fd_v12_0_vh_rfs.vhd" \

vcom -work xbip_addsub_v3_0_6 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/cfdd/hdl/xbip_addsub_v3_0_vh_rfs.vhd" \

vcom -work c_addsub_v12_0_15 -93  -incr \
"../../../../FIR_filter.gen/sources_1/bd/fir_top_module/ipshared/6b20/hdl/c_addsub_v12_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93  -incr \
"../../../bd/fir_top_module/ip/fir_top_module_c_addsub_0_0/sim/fir_top_module_c_addsub_0_0.vhd" \
"../../../bd/fir_top_module/sim/fir_top_module.vhd" \

vlog -work xil_defaultlib \
"glbl.v"

