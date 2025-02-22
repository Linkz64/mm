/*
 * File: z_en_kujiya.c
 * Overlay: ovl_En_Kujiya
 * Description: Clock Town - Lottery Shop
 */

#include "z_en_kujiya.h"

#define FLAGS (ACTOR_FLAG_1 | ACTOR_FLAG_8 | ACTOR_FLAG_8000000)

#define THIS ((EnKujiya*)thisx)

void EnKujiya_Init(Actor* thisx, GlobalContext* globalCtx);
void EnKujiya_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnKujiya_Update(Actor* thisx, GlobalContext* globalCtx);
void EnKujiya_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80BB09BC(EnKujiya* this, GlobalContext* globalCtx);
void func_80BB0E58(EnKujiya* this, GlobalContext* globalCtx);
void func_80BB0F38(EnKujiya* this, GlobalContext* globalCtx);
void func_80BB0FA8(EnKujiya* this, GlobalContext* globalCtx);
void func_80BB1180(EnKujiya* this, GlobalContext* globalCtx);
void func_80BB1268(EnKujiya* this, GlobalContext* globalCtx);

#if 0
const ActorInit En_Kujiya_InitVars = {
    ACTOR_EN_KUJIYA,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_KUJIYA,
    sizeof(EnKujiya),
    (ActorFunc)EnKujiya_Init,
    (ActorFunc)EnKujiya_Destroy,
    (ActorFunc)EnKujiya_Update,
    (ActorFunc)EnKujiya_Draw,
};

#endif

extern UNK_TYPE D_06006198;

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/EnKujiya_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/EnKujiya_Destroy.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB09A8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB09BC.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0B28.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0BF8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0E44.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0E58.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0F24.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0F38.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0F94.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0FA8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB0FF8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB1088.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB10F8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB1168.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB1180.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB1250.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/func_80BB1268.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/EnKujiya_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Kujiya/EnKujiya_Draw.s")
