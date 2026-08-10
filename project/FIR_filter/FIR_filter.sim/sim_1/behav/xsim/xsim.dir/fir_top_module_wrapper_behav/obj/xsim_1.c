/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_2(char*, char *);
IKI_DLLESPEC extern void execute_3(char*, char *);
IKI_DLLESPEC extern void execute_4(char*, char *);
IKI_DLLESPEC extern void execute_5(char*, char *);
IKI_DLLESPEC extern void execute_6(char*, char *);
IKI_DLLESPEC extern void execute_7(char*, char *);
IKI_DLLESPEC extern void execute_8(char*, char *);
IKI_DLLESPEC extern void execute_9(char*, char *);
IKI_DLLESPEC extern void execute_10(char*, char *);
IKI_DLLESPEC extern void execute_11(char*, char *);
IKI_DLLESPEC extern void execute_41(char*, char *);
IKI_DLLESPEC extern void execute_42(char*, char *);
IKI_DLLESPEC extern void execute_43(char*, char *);
IKI_DLLESPEC extern void execute_268(char*, char *);
IKI_DLLESPEC extern void execute_271(char*, char *);
IKI_DLLESPEC extern void execute_95(char*, char *);
IKI_DLLESPEC extern void execute_97(char*, char *);
IKI_DLLESPEC extern void execute_99(char*, char *);
IKI_DLLESPEC extern void execute_101(char*, char *);
IKI_DLLESPEC extern void execute_105(char*, char *);
IKI_DLLESPEC extern void execute_108(char*, char *);
IKI_DLLESPEC extern void execute_113(char*, char *);
IKI_DLLESPEC extern void execute_115(char*, char *);
IKI_DLLESPEC extern void execute_117(char*, char *);
IKI_DLLESPEC extern void execute_119(char*, char *);
IKI_DLLESPEC extern void execute_264(char*, char *);
IKI_DLLESPEC extern void execute_265(char*, char *);
IKI_DLLESPEC extern void execute_133(char*, char *);
IKI_DLLESPEC extern void execute_137(char*, char *);
IKI_DLLESPEC extern void execute_136(char*, char *);
IKI_DLLESPEC extern void execute_139(char*, char *);
IKI_DLLESPEC extern void execute_144(char*, char *);
IKI_DLLESPEC extern void execute_147(char*, char *);
IKI_DLLESPEC extern void execute_150(char*, char *);
IKI_DLLESPEC extern void execute_153(char*, char *);
IKI_DLLESPEC extern void execute_156(char*, char *);
IKI_DLLESPEC extern void execute_158(char*, char *);
IKI_DLLESPEC extern void execute_159(char*, char *);
IKI_DLLESPEC extern void execute_160(char*, char *);
IKI_DLLESPEC extern void execute_165(char*, char *);
IKI_DLLESPEC extern void execute_168(char*, char *);
IKI_DLLESPEC extern void execute_170(char*, char *);
IKI_DLLESPEC extern void execute_174(char*, char *);
IKI_DLLESPEC extern void execute_176(char*, char *);
IKI_DLLESPEC extern void execute_180(char*, char *);
IKI_DLLESPEC extern void execute_213(char*, char *);
IKI_DLLESPEC extern void execute_214(char*, char *);
IKI_DLLESPEC extern void execute_217(char*, char *);
IKI_DLLESPEC extern void execute_208(char*, char *);
IKI_DLLESPEC extern void execute_189(char*, char *);
IKI_DLLESPEC extern void execute_192(char*, char *);
IKI_DLLESPEC extern void execute_195(char*, char *);
IKI_DLLESPEC extern void execute_198(char*, char *);
IKI_DLLESPEC extern void execute_201(char*, char *);
IKI_DLLESPEC extern void execute_207(char*, char *);
IKI_DLLESPEC extern void execute_203(char*, char *);
IKI_DLLESPEC extern void execute_204(char*, char *);
IKI_DLLESPEC extern void execute_205(char*, char *);
IKI_DLLESPEC extern void execute_219(char*, char *);
IKI_DLLESPEC extern void execute_221(char*, char *);
IKI_DLLESPEC extern void execute_349(char*, char *);
IKI_DLLESPEC extern void execute_399(char*, char *);
IKI_DLLESPEC extern void execute_676(char*, char *);
IKI_DLLESPEC extern void execute_677(char*, char *);
IKI_DLLESPEC extern void execute_685(char*, char *);
IKI_DLLESPEC extern void execute_693(char*, char *);
IKI_DLLESPEC extern void execute_694(char*, char *);
IKI_DLLESPEC extern void execute_401(char*, char *);
IKI_DLLESPEC extern void execute_406(char*, char *);
IKI_DLLESPEC extern void execute_415(char*, char *);
IKI_DLLESPEC extern void execute_410(char*, char *);
IKI_DLLESPEC extern void execute_683(char*, char *);
IKI_DLLESPEC extern void execute_680(char*, char *);
IKI_DLLESPEC extern void execute_681(char*, char *);
IKI_DLLESPEC extern void execute_689(char*, char *);
IKI_DLLESPEC extern void execute_690(char*, char *);
IKI_DLLESPEC extern void execute_691(char*, char *);
IKI_DLLESPEC extern void execute_367(char*, char *);
IKI_DLLESPEC extern void execute_368(char*, char *);
IKI_DLLESPEC extern void execute_374(char*, char *);
IKI_DLLESPEC extern void execute_358(char*, char *);
IKI_DLLESPEC extern void execute_364(char*, char *);
IKI_DLLESPEC extern void execute_365(char*, char *);
IKI_DLLESPEC extern void execute_362(char*, char *);
IKI_DLLESPEC extern void execute_370(char*, char *);
IKI_DLLESPEC extern void execute_372(char*, char *);
IKI_DLLESPEC extern void execute_423(char*, char *);
IKI_DLLESPEC extern void execute_668(char*, char *);
IKI_DLLESPEC extern void execute_669(char*, char *);
IKI_DLLESPEC extern void execute_427(char*, char *);
IKI_DLLESPEC extern void execute_429(char*, char *);
IKI_DLLESPEC extern void execute_469(char*, char *);
IKI_DLLESPEC extern void execute_471(char*, char *);
IKI_DLLESPEC extern void execute_472(char*, char *);
IKI_DLLESPEC extern void execute_546(char*, char *);
IKI_DLLESPEC extern void execute_555(char*, char *);
IKI_DLLESPEC extern void execute_562(char*, char *);
IKI_DLLESPEC extern void execute_574(char*, char *);
IKI_DLLESPEC extern void execute_643(char*, char *);
IKI_DLLESPEC extern void execute_644(char*, char *);
IKI_DLLESPEC extern void execute_659(char*, char *);
IKI_DLLESPEC extern void execute_642(char*, char *);
IKI_DLLESPEC extern void execute_647(char*, char *);
IKI_DLLESPEC extern void execute_648(char*, char *);
IKI_DLLESPEC extern void execute_435(char*, char *);
IKI_DLLESPEC extern void execute_436(char*, char *);
IKI_DLLESPEC extern void execute_437(char*, char *);
IKI_DLLESPEC extern void execute_443(char*, char *);
IKI_DLLESPEC extern void execute_461(char*, char *);
IKI_DLLESPEC extern void execute_462(char*, char *);
IKI_DLLESPEC extern void execute_464(char*, char *);
IKI_DLLESPEC extern void execute_452(char*, char *);
IKI_DLLESPEC extern void execute_458(char*, char *);
IKI_DLLESPEC extern void execute_459(char*, char *);
IKI_DLLESPEC extern void execute_456(char*, char *);
IKI_DLLESPEC extern void execute_493(char*, char *);
IKI_DLLESPEC extern void execute_484(char*, char *);
IKI_DLLESPEC extern void execute_485(char*, char *);
IKI_DLLESPEC extern void execute_489(char*, char *);
IKI_DLLESPEC extern void execute_496(char*, char *);
IKI_DLLESPEC extern void execute_529(char*, char *);
IKI_DLLESPEC extern void execute_531(char*, char *);
IKI_DLLESPEC extern void execute_532(char*, char *);
IKI_DLLESPEC extern void execute_500(char*, char *);
IKI_DLLESPEC extern void execute_505(char*, char *);
IKI_DLLESPEC extern void execute_523(char*, char *);
IKI_DLLESPEC extern void execute_524(char*, char *);
IKI_DLLESPEC extern void execute_526(char*, char *);
IKI_DLLESPEC extern void execute_514(char*, char *);
IKI_DLLESPEC extern void execute_520(char*, char *);
IKI_DLLESPEC extern void execute_521(char*, char *);
IKI_DLLESPEC extern void execute_518(char*, char *);
IKI_DLLESPEC extern void execute_536(char*, char *);
IKI_DLLESPEC extern void execute_537(char*, char *);
IKI_DLLESPEC extern void execute_538(char*, char *);
IKI_DLLESPEC extern void execute_551(char*, char *);
IKI_DLLESPEC extern void execute_617(char*, char *);
IKI_DLLESPEC extern void execute_585(char*, char *);
IKI_DLLESPEC extern void execute_588(char*, char *);
IKI_DLLESPEC extern void execute_591(char*, char *);
IKI_DLLESPEC extern void execute_592(char*, char *);
IKI_DLLESPEC extern void execute_603(char*, char *);
IKI_DLLESPEC extern void execute_604(char*, char *);
IKI_DLLESPEC extern void execute_624(char*, char *);
IKI_DLLESPEC extern void execute_625(char*, char *);
IKI_DLLESPEC extern void execute_608(char*, char *);
IKI_DLLESPEC extern void execute_609(char*, char *);
IKI_DLLESPEC extern void execute_613(char*, char *);
IKI_DLLESPEC extern void execute_596(char*, char *);
IKI_DLLESPEC extern void execute_665(char*, char *);
IKI_DLLESPEC extern void execute_717(char*, char *);
IKI_DLLESPEC extern void execute_767(char*, char *);
IKI_DLLESPEC extern void execute_1040(char*, char *);
IKI_DLLESPEC extern void execute_1041(char*, char *);
IKI_DLLESPEC extern void execute_1049(char*, char *);
IKI_DLLESPEC extern void execute_1057(char*, char *);
IKI_DLLESPEC extern void execute_1058(char*, char *);
IKI_DLLESPEC extern void execute_769(char*, char *);
IKI_DLLESPEC extern void execute_774(char*, char *);
IKI_DLLESPEC extern void execute_783(char*, char *);
IKI_DLLESPEC extern void execute_778(char*, char *);
IKI_DLLESPEC extern void execute_1047(char*, char *);
IKI_DLLESPEC extern void execute_1044(char*, char *);
IKI_DLLESPEC extern void execute_1045(char*, char *);
IKI_DLLESPEC extern void execute_1053(char*, char *);
IKI_DLLESPEC extern void execute_1054(char*, char *);
IKI_DLLESPEC extern void execute_1055(char*, char *);
IKI_DLLESPEC extern void execute_791(char*, char *);
IKI_DLLESPEC extern void execute_1032(char*, char *);
IKI_DLLESPEC extern void execute_1033(char*, char *);
IKI_DLLESPEC extern void execute_795(char*, char *);
IKI_DLLESPEC extern void execute_797(char*, char *);
IKI_DLLESPEC extern void execute_837(char*, char *);
IKI_DLLESPEC extern void execute_839(char*, char *);
IKI_DLLESPEC extern void execute_840(char*, char *);
IKI_DLLESPEC extern void execute_914(char*, char *);
IKI_DLLESPEC extern void execute_923(char*, char *);
IKI_DLLESPEC extern void execute_930(char*, char *);
IKI_DLLESPEC extern void execute_942(char*, char *);
IKI_DLLESPEC extern void execute_1007(char*, char *);
IKI_DLLESPEC extern void execute_1008(char*, char *);
IKI_DLLESPEC extern void execute_1023(char*, char *);
IKI_DLLESPEC extern void execute_1006(char*, char *);
IKI_DLLESPEC extern void execute_1011(char*, char *);
IKI_DLLESPEC extern void execute_1012(char*, char *);
IKI_DLLESPEC extern void execute_861(char*, char *);
IKI_DLLESPEC extern void execute_852(char*, char *);
IKI_DLLESPEC extern void execute_853(char*, char *);
IKI_DLLESPEC extern void execute_857(char*, char *);
IKI_DLLESPEC extern void execute_864(char*, char *);
IKI_DLLESPEC extern void execute_897(char*, char *);
IKI_DLLESPEC extern void execute_899(char*, char *);
IKI_DLLESPEC extern void execute_900(char*, char *);
IKI_DLLESPEC extern void execute_1082(char*, char *);
IKI_DLLESPEC extern void execute_1083(char*, char *);
IKI_DLLESPEC extern void execute_1076(char*, char *);
IKI_DLLESPEC extern void execute_1077(char*, char *);
IKI_DLLESPEC extern void execute_1078(char*, char *);
IKI_DLLESPEC extern void execute_1079(char*, char *);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_69(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_70(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_71(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_72(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_75(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_208(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_209(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_215(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_216(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_219(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_220(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_221(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_242(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_246(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_253(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_262(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_348(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_365(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_366(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_493(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_494(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_500(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_501(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_504(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_505(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_506(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_527(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_531(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_538(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_547(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_633(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_650(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_651(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_734(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_735(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[239] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_5, (funcp)execute_6, (funcp)execute_7, (funcp)execute_8, (funcp)execute_9, (funcp)execute_10, (funcp)execute_11, (funcp)execute_41, (funcp)execute_42, (funcp)execute_43, (funcp)execute_268, (funcp)execute_271, (funcp)execute_95, (funcp)execute_97, (funcp)execute_99, (funcp)execute_101, (funcp)execute_105, (funcp)execute_108, (funcp)execute_113, (funcp)execute_115, (funcp)execute_117, (funcp)execute_119, (funcp)execute_264, (funcp)execute_265, (funcp)execute_133, (funcp)execute_137, (funcp)execute_136, (funcp)execute_139, (funcp)execute_144, (funcp)execute_147, (funcp)execute_150, (funcp)execute_153, (funcp)execute_156, (funcp)execute_158, (funcp)execute_159, (funcp)execute_160, (funcp)execute_165, (funcp)execute_168, (funcp)execute_170, (funcp)execute_174, (funcp)execute_176, (funcp)execute_180, (funcp)execute_213, (funcp)execute_214, (funcp)execute_217, (funcp)execute_208, (funcp)execute_189, (funcp)execute_192, (funcp)execute_195, (funcp)execute_198, (funcp)execute_201, (funcp)execute_207, (funcp)execute_203, (funcp)execute_204, (funcp)execute_205, (funcp)execute_219, (funcp)execute_221, (funcp)execute_349, (funcp)execute_399, (funcp)execute_676, (funcp)execute_677, (funcp)execute_685, (funcp)execute_693, (funcp)execute_694, (funcp)execute_401, (funcp)execute_406, (funcp)execute_415, (funcp)execute_410, (funcp)execute_683, (funcp)execute_680, (funcp)execute_681, (funcp)execute_689, (funcp)execute_690, (funcp)execute_691, (funcp)execute_367, (funcp)execute_368, (funcp)execute_374, (funcp)execute_358, (funcp)execute_364, (funcp)execute_365, (funcp)execute_362, (funcp)execute_370, (funcp)execute_372, (funcp)execute_423, (funcp)execute_668, (funcp)execute_669, (funcp)execute_427, (funcp)execute_429, (funcp)execute_469, (funcp)execute_471, (funcp)execute_472, (funcp)execute_546, (funcp)execute_555, (funcp)execute_562, (funcp)execute_574, (funcp)execute_643, (funcp)execute_644, (funcp)execute_659, (funcp)execute_642, (funcp)execute_647, (funcp)execute_648, (funcp)execute_435, (funcp)execute_436, (funcp)execute_437, (funcp)execute_443, (funcp)execute_461, (funcp)execute_462, (funcp)execute_464, (funcp)execute_452, (funcp)execute_458, (funcp)execute_459, (funcp)execute_456, (funcp)execute_493, (funcp)execute_484, (funcp)execute_485, (funcp)execute_489, (funcp)execute_496, (funcp)execute_529, (funcp)execute_531, (funcp)execute_532, (funcp)execute_500, (funcp)execute_505, (funcp)execute_523, (funcp)execute_524, (funcp)execute_526, (funcp)execute_514, (funcp)execute_520, (funcp)execute_521, (funcp)execute_518, (funcp)execute_536, (funcp)execute_537, (funcp)execute_538, (funcp)execute_551, (funcp)execute_617, (funcp)execute_585, (funcp)execute_588, (funcp)execute_591, (funcp)execute_592, (funcp)execute_603, (funcp)execute_604, (funcp)execute_624, (funcp)execute_625, (funcp)execute_608, (funcp)execute_609, (funcp)execute_613, (funcp)execute_596, (funcp)execute_665, (funcp)execute_717, (funcp)execute_767, (funcp)execute_1040, (funcp)execute_1041, (funcp)execute_1049, (funcp)execute_1057, (funcp)execute_1058, (funcp)execute_769, (funcp)execute_774, (funcp)execute_783, (funcp)execute_778, (funcp)execute_1047, (funcp)execute_1044, (funcp)execute_1045, (funcp)execute_1053, (funcp)execute_1054, (funcp)execute_1055, (funcp)execute_791, (funcp)execute_1032, (funcp)execute_1033, (funcp)execute_795, (funcp)execute_797, (funcp)execute_837, (funcp)execute_839, (funcp)execute_840, (funcp)execute_914, (funcp)execute_923, (funcp)execute_930, (funcp)execute_942, (funcp)execute_1007, (funcp)execute_1008, (funcp)execute_1023, (funcp)execute_1006, (funcp)execute_1011, (funcp)execute_1012, (funcp)execute_861, (funcp)execute_852, (funcp)execute_853, (funcp)execute_857, (funcp)execute_864, (funcp)execute_897, (funcp)execute_899, (funcp)execute_900, (funcp)execute_1082, (funcp)execute_1083, (funcp)execute_1076, (funcp)execute_1077, (funcp)execute_1078, (funcp)execute_1079, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_36, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_69, (funcp)transaction_70, (funcp)transaction_71, (funcp)transaction_72, (funcp)transaction_75, (funcp)transaction_208, (funcp)transaction_209, (funcp)transaction_215, (funcp)transaction_216, (funcp)transaction_219, (funcp)transaction_220, (funcp)transaction_221, (funcp)transaction_242, (funcp)transaction_246, (funcp)transaction_253, (funcp)transaction_262, (funcp)transaction_348, (funcp)transaction_365, (funcp)transaction_366, (funcp)transaction_493, (funcp)transaction_494, (funcp)transaction_500, (funcp)transaction_501, (funcp)transaction_504, (funcp)transaction_505, (funcp)transaction_506, (funcp)transaction_527, (funcp)transaction_531, (funcp)transaction_538, (funcp)transaction_547, (funcp)transaction_633, (funcp)transaction_650, (funcp)transaction_651, (funcp)transaction_734, (funcp)transaction_735};
const int NumRelocateId= 239;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/fir_top_module_wrapper_behav/xsim.reloc",  (void **)funcTab, 239);
	iki_vhdl_file_variable_register(dp + 185592);
	iki_vhdl_file_variable_register(dp + 185648);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/fir_top_module_wrapper_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/fir_top_module_wrapper_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_xsimdir_location_if_remapped(argc, argv)  ;
    iki_set_sv_type_file_path_name("xsim.dir/fir_top_module_wrapper_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/fir_top_module_wrapper_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/fir_top_module_wrapper_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
