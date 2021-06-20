-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
--
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity sha256_compress_m_ram is 
    generic(
            DWIDTH     : integer := 32; 
            AWIDTH     : integer := 6; 
            MEM_SIZE    : integer := 64
    ); 
    port (
          addr0     : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          d0        : in std_logic_vector(DWIDTH-1 downto 0); 
          we0       : in std_logic; 
          q0        : out std_logic_vector(DWIDTH-1 downto 0);
          addr1     : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1        : out std_logic_vector(DWIDTH-1 downto 0);
          addr2     : in std_logic_vector(AWIDTH-1 downto 0); 
          ce2       : in std_logic; 
          q2        : out std_logic_vector(DWIDTH-1 downto 0);
          addr3     : in std_logic_vector(AWIDTH-1 downto 0); 
          ce3       : in std_logic; 
          q3        : out std_logic_vector(DWIDTH-1 downto 0);
          addr4     : in std_logic_vector(AWIDTH-1 downto 0); 
          ce4       : in std_logic; 
          q4        : out std_logic_vector(DWIDTH-1 downto 0);
          clk        : in std_logic 
    ); 
end entity; 


architecture rtl of sha256_compress_m_ram is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr2_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr3_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr4_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
shared variable ram0 : mem_array;

shared variable ram1 : mem_array;

shared variable ram2 : mem_array;

shared variable ram3 : mem_array;


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_memory_access_0: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= ram0(CONV_INTEGER(addr0_tmp));
            if (we0 = '1') then 
                ram0(CONV_INTEGER(addr0_tmp)) := d0; 
            end if;
        end if;
    end if;
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_memory_access_1: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce1 = '1') then 
            q1 <= ram0(CONV_INTEGER(addr1_tmp));
        end if;
    end if;
end process;

memory_access_guard_2: process (addr2) 
begin
      addr2_tmp <= addr2;
--synthesis translate_off
      if (CONV_INTEGER(addr2) > mem_size-1) then
           addr2_tmp <= (others => '0');
      else 
           addr2_tmp <= addr2;
      end if;
--synthesis translate_on
end process;

p_memory_access_2: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce2 = '1') then 
            q2 <= ram1(CONV_INTEGER(addr2_tmp));
        end if;
        if (ce0 = '1') then 
            if (we0 = '1') then 
                ram1(CONV_INTEGER(addr0)) := d0; 
            end if;
        end if;
    end if;
end process;

memory_access_guard_3: process (addr3) 
begin
      addr3_tmp <= addr3;
--synthesis translate_off
      if (CONV_INTEGER(addr3) > mem_size-1) then
           addr3_tmp <= (others => '0');
      else 
           addr3_tmp <= addr3;
      end if;
--synthesis translate_on
end process;

p_memory_access_3: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce3 = '1') then 
            q3 <= ram2(CONV_INTEGER(addr3_tmp));
        end if;
        if (ce0 = '1') then 
            if (we0 = '1') then 
                ram2(CONV_INTEGER(addr0)) := d0; 
            end if;
        end if;
    end if;
end process;

memory_access_guard_4: process (addr4) 
begin
      addr4_tmp <= addr4;
--synthesis translate_off
      if (CONV_INTEGER(addr4) > mem_size-1) then
           addr4_tmp <= (others => '0');
      else 
           addr4_tmp <= addr4;
      end if;
--synthesis translate_on
end process;

p_memory_access_4: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce4 = '1') then 
            q4 <= ram3(CONV_INTEGER(addr4_tmp));
        end if;
        if (ce0 = '1') then 
            if (we0 = '1') then 
                ram3(CONV_INTEGER(addr0)) := d0; 
            end if;
        end if;
    end if;
end process;


end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity sha256_compress_m is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address2 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address3 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce3 : IN STD_LOGIC;
        q3 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address4 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce4 : IN STD_LOGIC;
        q4 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of sha256_compress_m is
    component sha256_compress_m_ram is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            we0 : IN STD_LOGIC;
            d0 : IN STD_LOGIC_VECTOR;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR;
            addr2 : IN STD_LOGIC_VECTOR;
            ce2 : IN STD_LOGIC;
            q2 : OUT STD_LOGIC_VECTOR;
            addr3 : IN STD_LOGIC_VECTOR;
            ce3 : IN STD_LOGIC;
            q3 : OUT STD_LOGIC_VECTOR;
            addr4 : IN STD_LOGIC_VECTOR;
            ce4 : IN STD_LOGIC;
            q4 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    sha256_compress_m_ram_U :  component sha256_compress_m_ram
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        we0 => we0,
        d0 => d0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1,
        addr2 => address2,
        ce2 => ce2,
        q2 => q2,
        addr3 => address3,
        ce3 => ce3,
        q3 => q3,
        addr4 => address4,
        ce4 => ce4,
        q4 => q4);

end architecture;


