#include <stdio.h>
#include <stdint.h>

#include "local_inc/mapp.h"
#include  "../mhd_lib/inc/mhd_lib.h"
#include "local_inc/MPUCtrDev.h"


int  main(void)
{
    mHD_MPUGPIO_Test();  //Test MPU GPIO




    mHD_Software_Init();

//     mHD_Send_Msg_Cmd(Msg_Link,luozx);
//     sleep(1);
//     mHD_Read_Shm_ShareMemory_DevData(Run_data.Shmkey,Run_data.Semkey,&Dev_data);  //读取共享内存区
//     mHD_Data_DevData_Set();   //写入数据值
//     mHD_Write_Shm_ShareMemory_DevData(Run_data.Shmkey,Run_data.Semkey,&Dev_data);  //写入共享内存区
//     mHD_Send_Msg_Cmd(Msg_WritePara,luozx);
//     sleep(1);
//     mHD_Send_Msg_Cmd(Msg_ReadPara,luozx);
//     sleep(1);
//     mHD_Send_Msg_Cmd(Msg_StartScan,luozx);

    while(1)
    {
        mHD_keyboard_Cmd();
        mHD_Readmsg_Poll(luozx);
        mHD_CompDev_SigToRPU();
        //Dev_data.MData[1].DOutData[6] =1;
        //Dev_data.MData[1].PulseData[6] =10;
    }
    return 0;
}
