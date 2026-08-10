--Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
--Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
--Date        : Sat Aug  8 18:07:30 2026
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
    S_0 : out STD_LOGIC_VECTOR ( 8 downto 0 );
    S_1 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    S_2 : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
end fir_top_module_wrapper;

architecture STRUCTURE of fir_top_module_wrapper is
  component fir_top_module is
  port (
    S_0 : out STD_LOGIC_VECTOR ( 8 downto 0 );
    S_1 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    S_2 : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  end component fir_top_module;
begin
fir_top_module_i: component fir_top_module
     port map (
      S_0(8 downto 0) => S_0(8 downto 0),
      S_1(7 downto 0) => S_1(7 downto 0),
      S_2(7 downto 0) => S_2(7 downto 0)
    );
end STRUCTURE;
