/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_14200569635128536707_2373678439_init();
    work_m_10491284385871501132_1296224219_init();
    work_m_02200288348264907813_1684398682_init();
    work_m_12223715709673398512_1053850373_init();
    work_m_11102583955476278535_3763316916_init();
    work_m_05268184138808651824_3115452497_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05268184138808651824_3115452497");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
