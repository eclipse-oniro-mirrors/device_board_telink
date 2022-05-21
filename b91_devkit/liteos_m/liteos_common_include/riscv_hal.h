/******************************************************************************
 * Copyright (c) 2022 Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *****************************************************************************/

#ifndef _RISCV_HAL_H
#define _RISCV_HAL_H

#include "los_compiler.h"
#include "los_context.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

extern VOID HalIrqDisable(UINT32 vector);
extern VOID HalIrqEnable(UINT32 vector);
extern VOID HalSetLocalInterPri(UINT32 vector, UINT16 prior);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* _RISCV_HAL_H */
