--Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
--Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
--Date        : Tue Aug 11 11:31:23 2026
--Host        : Wycliff running 64-bit major release  (build 9200)
--Command     : generate_target fir_top_module_wrapper.bd
--Design      : fir_top_module_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity fir_top_module_wrapper is
  port (
    add_sub_out : out STD_LOGIC_VECTOR ( 8 downto 0 );
    m_axis_data_tdata_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    signal_10Mhz : out STD_LOGIC_VECTOR ( 7 downto 0 );
    signal_500k : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
end fir_top_module_wrapper;

architecture STRUCTURE of fir_top_module_wrapper is
  component fir_top_module is
  port (
    m_axis_data_tdata_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    add_sub_out : out STD_LOGIC_VECTOR ( 8 downto 0 );
    signal_500k : out STD_LOGIC_VECTOR ( 7 downto 0 );
    signal_10Mhz : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  end component fir_top_module;
begin
fir_top_module_i: component fir_top_module
     port map (
      add_sub_out(8 downto 0) => add_sub_out(8 downto 0),
      m_axis_data_tdata_0(31 downto 0) => m_axis_data_tdata_0(31 downto 0),
      signal_10Mhz(7 downto 0) => signal_10Mhz(7 downto 0),
      signal_500k(7 downto 0) => signal_500k(7 downto 0)
    );
end STRUCTURE;
