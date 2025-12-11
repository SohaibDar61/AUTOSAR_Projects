/**
 * \authors  SOHAIP-DAR
 * 
 * \brief: header file for RTE main
 * \date: 4/10/2025
 */


#ifndef RTE_MAIN_H
#define RTE_MAIN_H

#include "Rte_Types.h"

/* structure for sender receiver buffer */
typedef struct{
Impl_MultiStateBtnType SpeedBtnState;
Impl_SpeedType Speed;
Impl_SpeedModeBtnType SpeedModeBtn;
}Rte_SenderReceiverBuffersType;

#endif