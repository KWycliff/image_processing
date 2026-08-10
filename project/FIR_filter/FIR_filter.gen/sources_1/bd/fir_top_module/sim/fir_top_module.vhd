--Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
--Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
--Date        : Sat Aug  8 18:07:30 2026
--Host        : Wycliff running 64-bit major release  (build 9200)
--Command     : generate_target fir_top_module.bd
--Design      : fir_top_module
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity fir_top_module is
  port (
    S_0 : out STD_LOGIC_VECTOR ( 8 downto 0 );
    S_1 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    S_2 : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute CORE_GENERATION_INFO : string;
  attribute CORE_GENERATION_INFO of fir_top_module : entity is "fir_top_module,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=fir_top_module,x_ipVersion=1.00.a,x_ipLanguage=VHDL,numBlks=4,numReposBlks=4,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}";
  attribute HW_HANDOFF : string;
  attribute HW_HANDOFF of fir_top_module : entity is "fir_top_module.hwdef";
end fir_top_module;

architecture STRUCTURE of fir_top_module is
  component fir_top_module_dds_compiler_0_0 is
  port (
    aclk : in STD_LOGIC;
    m_axis_data_tvalid : out STD_LOGIC;
    m_axis_data_tdata : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  end component fir_top_module_dds_compiler_0_0;
  component fir_top_module_dds_compiler_0_1 is
  port (
    aclk : in STD_LOGIC;
    m_axis_data_tvalid : out STD_LOGIC;
    m_axis_data_tdata : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  end component fir_top_module_dds_compiler_0_1;
  component fir_top_module_sim_clk_gen_0_0 is
  port (
    clk : out STD_LOGIC;
    sync_rst : out STD_LOGIC
  );
  end component fir_top_module_sim_clk_gen_0_0;
  component fir_top_module_c_addsub_0_0 is
  port (
    A : in STD_LOGIC_VECTOR ( 7 downto 0 );
    B : in STD_LOGIC_VECTOR ( 7 downto 0 );
    CLK : in STD_LOGIC;
    S : out STD_LOGIC_VECTOR ( 8 downto 0 )
  );
  end component fir_top_module_c_addsub_0_0;
  signal c_addsub_0_S : STD_LOGIC_VECTOR ( 8 downto 0 );
  signal dds_10M_m_axis_data_tdata : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal dds_500k_m_axis_data_tdata : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal sim_clk_gen_0_clk : STD_LOGIC;
  signal NLW_dds_10M_m_axis_data_tvalid_UNCONNECTED : STD_LOGIC;
  signal NLW_dds_500k_m_axis_data_tvalid_UNCONNECTED : STD_LOGIC;
  signal NLW_sim_clk_gen_0_sync_rst_UNCONNECTED : STD_LOGIC;
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of S_0 : signal is "xilinx.com:signal:data:1.0 DATA.S_0 DATA";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of S_0 : signal is "XIL_INTERFACENAME DATA.S_0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 9} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type generated dependency signed format bool minimum {} maximum {}} value TRUE}}}} DATA_WIDTH 9}";
  attribute X_INTERFACE_INFO of S_1 : signal is "xilinx.com:signal:data:1.0 DATA.S_1 DATA";
  attribute X_INTERFACE_PARAMETER of S_1 : signal is "XIL_INTERFACENAME DATA.S_1, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 9} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type generated dependency signed format bool minimum {} maximum {}} value TRUE}}}} DATA_WIDTH 9}";
  attribute X_INTERFACE_INFO of S_2 : signal is "xilinx.com:signal:data:1.0 DATA.S_2 DATA";
  attribute X_INTERFACE_PARAMETER of S_2 : signal is "XIL_INTERFACENAME DATA.S_2, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 9} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type generated dependency signed format bool minimum {} maximum {}} value TRUE}}}} DATA_WIDTH 9}";
begin
  S_0(8 downto 0) <= c_addsub_0_S(8 downto 0);
  S_1(7 downto 0) <= dds_500k_m_axis_data_tdata(7 downto 0);
  S_2(7 downto 0) <= dds_10M_m_axis_data_tdata(7 downto 0);
c_addsub_0: component fir_top_module_c_addsub_0_0
     port map (
      A(7 downto 0) => dds_10M_m_axis_data_tdata(7 downto 0),
      B(7 downto 0) => dds_500k_m_axis_data_tdata(7 downto 0),
      CLK => sim_clk_gen_0_clk,
      S(8 downto 0) => c_addsub_0_S(8 downto 0)
    );
dds_10M: component fir_top_module_dds_compiler_0_1
     port map (
      aclk => sim_clk_gen_0_clk,
      m_axis_data_tdata(7 downto 0) => dds_10M_m_axis_data_tdata(7 downto 0),
      m_axis_data_tvalid => NLW_dds_10M_m_axis_data_tvalid_UNCONNECTED
    );
dds_500k: component fir_top_module_dds_compiler_0_0
     port map (
      aclk => sim_clk_gen_0_clk,
      m_axis_data_tdata(7 downto 0) => dds_500k_m_axis_data_tdata(7 downto 0),
      m_axis_data_tvalid => NLW_dds_500k_m_axis_data_tvalid_UNCONNECTED
    );
sim_clk_gen_0: component fir_top_module_sim_clk_gen_0_0
     port map (
      clk => sim_clk_gen_0_clk,
      sync_rst => NLW_sim_clk_gen_0_sync_rst_UNCONNECTED
    );
end STRUCTURE;
