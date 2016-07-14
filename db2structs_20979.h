struct AchievementRec // sizeof(0x28)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    DWORD field0C; // size 4, type 0, unk 0
    char* field10; // size 4, type 2, unk 8
    WORD field14; // size 2, type 5, unk 0
    WORD field16; // size 2, type 5, unk 0
    WORD field18; // size 2, type 5, unk 0
    WORD field1A; // size 2, type 5, unk 0
    WORD field1C; // size 2, type 5, unk 0
    WORD field1E; // size 2, type 5, unk 0
    WORD field20; // size 2, type 5, unk 4
    BYTE field22; // size 1, type 4, unk 0
    BYTE field23; // size 1, type 4, unk 0
    BYTE field24; // size 1, type 4, unk 0
};

struct Achievement_CategoryRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 0
};

struct AdventureJournalRec // sizeof(0x34)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    char* field14; // size 4, type 2, unk 8
    char* field18; // size 4, type 2, unk 8
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    WORD field20; // size 2, type 5, unk 4
    WORD field22[2]; // size 4, type 5, unk 4
    WORD field26; // size 2, type 5, unk 4
    WORD field28; // size 2, type 5, unk 4
    BYTE field2A; // size 1, type 4, unk 4
    BYTE field2B; // size 1, type 4, unk 4
    BYTE field2C; // size 1, type 4, unk 4
    BYTE field2D; // size 1, type 4, unk 4
    BYTE field2E; // size 1, type 4, unk 4
    BYTE field2F; // size 1, type 4, unk 4
    BYTE field30[2]; // size 2, type 4, unk 4
    BYTE field32; // size 1, type 4, unk 4
    BYTE field33; // size 1, type 4, unk 4
};

struct AdventureMapPOIRec // sizeof(0x34)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[2]; // size 8, type 3, unk 0
    DWORD field0C; // size 4, type 0, unk 4
    DWORD field10; // size 4, type 0, unk 0
    char* field14; // size 4, type 2, unk 8
    char* field18; // size 4, type 2, unk 8
    DWORD field1C; // size 4, type 0, unk 4
    DWORD field20; // size 4, type 0, unk 4
    DWORD field24; // size 4, type 0, unk 4
    WORD field28; // size 2, type 5, unk 4
    WORD field2A; // size 2, type 5, unk 4
    WORD field2C; // size 2, type 5, unk 4
    WORD field2E; // size 2, type 5, unk 4
    BYTE field30; // size 1, type 4, unk 0
};

struct AnimKitBoneSetAliasRec // sizeof(0x2)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
};

struct AnimKitConfigBoneSetRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct AnimKitConfigRec // sizeof(0x4)
{
    DWORD field00; // size 4, type 0, unk 4
};

struct AnimKitRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct AnimKitPriorityRec // sizeof(0x1)
{
    BYTE field00; // size 1, type 4, unk 4
};

struct AnimKitSegmentRec // sizeof(0x28)
{
    DWORD field00; // size 4, type 0, unk 4
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 4
    float field10; // size 4, type 3, unk 0
    DWORD field14; // size 4, type 0, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    BYTE field1E; // size 1, type 4, unk 4
    BYTE field1F; // size 1, type 4, unk 4
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21; // size 1, type 4, unk 4
    BYTE field22; // size 1, type 4, unk 4
    BYTE field23; // size 1, type 4, unk 4
    BYTE field24; // size 1, type 4, unk 0
};

struct AnimReplacementRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct AnimReplacementSetRec // sizeof(0x1)
{
    BYTE field00; // size 1, type 4, unk 4
};

struct AreaGroupMemberRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct AreaPOIRec // sizeof(0x20)
{
    float field00[2]; // size 8, type 3, unk 0
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    WORD field10; // size 2, type 5, unk 4
    WORD field12; // size 2, type 5, unk 4
    WORD field14; // size 2, type 5, unk 0
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 4
    BYTE field1E; // size 1, type 4, unk 4
};

struct AreaPOIStateRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct AreaTriggerActionSetRec // sizeof(0x2)
{
    WORD field00; // size 2, type 5, unk 0
};

struct AreaTriggerBoxRec // sizeof(0xC)
{
    float field00[3]; // size 12, type 3, unk 0
};

struct AreaTriggerCylinderRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
};

struct AreaTriggerRec // sizeof(0x34)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[3]; // size 12, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    WORD field24; // size 2, type 5, unk 0
    WORD field26; // size 2, type 5, unk 0
    WORD field28; // size 2, type 5, unk 0
    WORD field2A; // size 2, type 5, unk 0
    WORD field2C; // size 2, type 5, unk 0
    BYTE field2E; // size 1, type 4, unk 0
    BYTE field2F; // size 1, type 4, unk 0
    BYTE field30; // size 1, type 4, unk 0
};

struct AreaTriggerSphereRec // sizeof(0x4)
{
    float field00; // size 4, type 3, unk 0
};

struct ArmorLocationRec // sizeof(0x14)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
};

struct ArtifactAppearanceRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    DWORD field08; // size 4, type 0, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    DWORD field14; // size 4, type 0, unk 4
    WORD field18; // size 2, type 5, unk 4
    BYTE field1A; // size 1, type 4, unk 4
    BYTE field1B; // size 1, type 4, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 4
    BYTE field1E; // size 1, type 4, unk 4
    BYTE field1F; // size 1, type 4, unk 4
};

struct ArtifactAppearanceSetRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
};

struct ArtifactRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct ArtifactPowerRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[2]; // size 8, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 0
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct ArtifactPowerLinkRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 5
    WORD field02; // size 2, type 5, unk 5
};

struct ArtifactPowerRankRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 1
    float field08; // size 4, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct ArtifactQuestXPRec // sizeof(0x14)
{
    WORD field00[10]; // size 20, type 5, unk 4
};

struct ArtifactUnlockRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct AuctionHouseRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct BankBagSlotPricesRec // sizeof(0x4)
{
    DWORD field00; // size 4, type 0, unk 4
};

struct BarberShopStyleRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    float field0C; // size 4, type 3, unk 0
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct BattlePetAbilityRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 0
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
};

struct BattlePetAbilityEffectRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    WORD field0A[6]; // size 12, type 5, unk 0
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
};

struct BattlePetAbilityStateRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct BattlePetAbilityTurnRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 0
};

struct BattlePetBreedQualityRec // sizeof(0x8)
{
    float field00; // size 4, type 3, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct BattlePetBreedStateRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct BattlePetEffectPropertiesRec // sizeof(0x20)
{
    char* field00[6]; // size 24, type 2, unk 0
    BYTE field18; // size 1, type 4, unk 4
    BYTE field19[6]; // size 6, type 4, unk 4
};

struct BattlePetNPCTeamMemberRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct BattlePetSpeciesRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    WORD field18; // size 2, type 5, unk 4
    BYTE field1A; // size 1, type 4, unk 4
    BYTE field1B; // size 1, type 4, unk 0
};

struct BattlePetSpeciesStateRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct BattlePetSpeciesXAbilityRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 0
};

struct BattlePetStateRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct BattlePetVisualRec // sizeof(0x10)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 4
};

struct BroadcastTextRec // sizeof(0x1C)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    WORD field08[3]; // size 6, type 5, unk 4
    WORD field0E[3]; // size 6, type 5, unk 4
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    BYTE field18; // size 1, type 4, unk 4
    BYTE field19; // size 1, type 4, unk 4
};

struct CameraEffectRec // sizeof(0x1)
{
    BYTE field00; // size 1, type 4, unk 4
};

struct CameraEffectEntryRec // sizeof(0x2C)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    WORD field20; // size 2, type 5, unk 4
    WORD field22; // size 2, type 5, unk 4
    BYTE field24; // size 1, type 4, unk 4
    BYTE field25; // size 1, type 4, unk 4
    BYTE field26; // size 1, type 4, unk 4
    BYTE field27; // size 1, type 4, unk 4
    BYTE field28; // size 1, type 4, unk 4
    BYTE field29; // size 1, type 4, unk 4
};

struct CameraModeRec // sizeof(0x2C)
{
    float field00[3]; // size 12, type 3, unk 0
    float field0C[3]; // size 12, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    WORD field24; // size 2, type 5, unk 0
    BYTE field26; // size 1, type 4, unk 0
    BYTE field27; // size 1, type 4, unk 0
    BYTE field28; // size 1, type 4, unk 0
    BYTE field29; // size 1, type 4, unk 0
    BYTE field2A; // size 1, type 4, unk 0
};

struct CameraShakesRec // sizeof(0x18)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
};

struct CastableRaidBuffsRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 4
    DWORD field04; // size 4, type 0, unk 4
};

struct Cfg_CategoriesRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 4
};

struct Cfg_ConfigsRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
    BYTE field08; // size 1, type 4, unk 4
};

struct Cfg_RegionsRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct CharBaseInfoRec // sizeof(0x2)
{
    BYTE field00; // size 1, type 4, unk 0
    BYTE field01; // size 1, type 4, unk 0
};

struct CharHairGeosetsRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 0
};

struct CharShipmentContainerRec // sizeof(0x1C)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
    BYTE field18; // size 1, type 4, unk 0
    BYTE field19; // size 1, type 4, unk 4
};

struct CharShipmentRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    BYTE field18; // size 1, type 4, unk 4
    BYTE field19; // size 1, type 4, unk 4
};

struct CharStartOutfitRec // sizeof(0x6C)
{
    DWORD field00[24]; // size 96, type 0, unk 0
    DWORD field60; // size 4, type 0, unk 4
    BYTE field64; // size 1, type 4, unk 4
    BYTE field65; // size 1, type 4, unk 4
    BYTE field66; // size 1, type 4, unk 4
    BYTE field67; // size 1, type 4, unk 4
    BYTE field68; // size 1, type 4, unk 4
};

struct CharTitlesRec // sizeof(0x10)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 0
    BYTE field0C; // size 1, type 4, unk 0
};

struct CharacterFaceBoneSetRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct CharacterLoadoutRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 0
    BYTE field05; // size 1, type 4, unk 0
};

struct CharacterLoadoutItemRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
};

struct ChatChannelsRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    BYTE field0C; // size 1, type 4, unk 0
};

struct ChatProfanityRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 0
};

struct ChrClassRaceSexRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 0
    BYTE field07; // size 1, type 4, unk 0
    BYTE field08; // size 1, type 4, unk 0
};

struct ChrClassTitleRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
};

struct ChrClassUIDisplayRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct ChrClassVillainRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct ChrClassesXPowerTypesRec // sizeof(0x2)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
};

struct ChrRacesRec // sizeof(0x70)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 0
    char* field0C; // size 4, type 2, unk 0
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    char* field18; // size 4, type 2, unk 8
    char* field1C[2]; // size 8, type 2, unk 0
    char* field24; // size 4, type 2, unk 0
    DWORD field28; // size 4, type 0, unk 0
    DWORD field2C; // size 4, type 0, unk 0
    float field30[3]; // size 12, type 3, unk 0
    float field3C[3]; // size 12, type 3, unk 0
    DWORD field48; // size 4, type 0, unk 0
    WORD field4C; // size 2, type 5, unk 0
    WORD field4E; // size 2, type 5, unk 0
    WORD field50; // size 2, type 5, unk 4
    WORD field52; // size 2, type 5, unk 4
    WORD field54; // size 2, type 5, unk 0
    WORD field56; // size 2, type 5, unk 0
    WORD field58; // size 2, type 5, unk 0
    WORD field5A; // size 2, type 5, unk 0
    WORD field5C; // size 2, type 5, unk 0
    WORD field5E; // size 2, type 5, unk 4
    WORD field60; // size 2, type 5, unk 4
    WORD field62; // size 2, type 5, unk 4
    BYTE field64; // size 1, type 4, unk 0
    BYTE field65; // size 1, type 4, unk 0
    BYTE field66; // size 1, type 4, unk 0
    BYTE field67; // size 1, type 4, unk 0
    BYTE field68; // size 1, type 4, unk 0
    BYTE field69; // size 1, type 4, unk 0
    BYTE field6A; // size 1, type 4, unk 0
    BYTE field6B; // size 1, type 4, unk 0
    BYTE field6C; // size 1, type 4, unk 0
};

struct ChrSpecializationRec // sizeof(0x2C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[2]; // size 8, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    char* field14; // size 4, type 2, unk 8
    char* field18; // size 4, type 2, unk 8
    char* field1C; // size 4, type 2, unk 8
    char* field20; // size 4, type 2, unk 0
    WORD field24; // size 2, type 5, unk 0
    BYTE field26; // size 1, type 4, unk 0
    BYTE field27; // size 1, type 4, unk 0
    BYTE field28; // size 1, type 4, unk 0
    BYTE field29; // size 1, type 4, unk 0
    BYTE field2A; // size 1, type 4, unk 0
};

struct ChrUpgradeBucketRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct ChrUpgradeBucketSpellRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct ChrUpgradeTierRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct CinematicCameraRec // sizeof(0x18)
{
    char* field00; // size 4, type 2, unk 0
    float field04[3]; // size 12, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    WORD field14; // size 2, type 5, unk 4
};

struct CinematicSequencesRec // sizeof(0x12)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02[8]; // size 16, type 5, unk 4
};

struct CombatConditionRec // sizeof(0x18)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06[2]; // size 4, type 5, unk 4
    WORD field0A[2]; // size 4, type 5, unk 4
    BYTE field0E[2]; // size 2, type 4, unk 4
    BYTE field10[2]; // size 2, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13[2]; // size 2, type 4, unk 4
    BYTE field15[2]; // size 2, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
};

struct ComponentModelFileDataRec // sizeof(0x4)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 0
};

struct ComponentTextureFileDataRec // sizeof(0x3)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct ConversationLineRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 4
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct CreatureRec // sizeof(0x48)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[3]; // size 12, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14[4]; // size 16, type 0, unk 0
    float field24[4]; // size 16, type 3, unk 0
    char* field34; // size 4, type 2, unk 8
    char* field38; // size 4, type 2, unk 8
    char* field3C; // size 4, type 2, unk 8
    char* field40; // size 4, type 2, unk 8
    BYTE field44; // size 1, type 4, unk 4
    BYTE field45; // size 1, type 4, unk 4
    BYTE field46; // size 1, type 4, unk 4
    BYTE field47; // size 1, type 4, unk 4
};

struct CreatureDifficultyRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08[5]; // size 20, type 0, unk 0
    WORD field1C; // size 2, type 5, unk 4
    BYTE field1E; // size 1, type 4, unk 0
    BYTE field1F; // size 1, type 4, unk 0
    BYTE field20; // size 1, type 4, unk 0
};

struct CreatureDispXUiCameraRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
};

struct CreatureDisplayInfoCondRec // sizeof(0x44)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 4
    DWORD field10; // size 4, type 0, unk 4
    DWORD field14; // size 4, type 0, unk 4
    DWORD field18; // size 4, type 0, unk 4
    DWORD field1C; // size 4, type 0, unk 4
    DWORD field20; // size 4, type 0, unk 4
    DWORD field24[3]; // size 12, type 0, unk 4
    DWORD field30; // size 4, type 0, unk 0
    DWORD field34[3]; // size 12, type 0, unk 0
    BYTE field40; // size 1, type 4, unk 0
    BYTE field41; // size 1, type 4, unk 0
};

struct CreatureDisplayInfoRec // sizeof(0x40)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    DWORD field10[3]; // size 12, type 0, unk 0
    char* field1C; // size 4, type 2, unk 0
    DWORD field20; // size 4, type 0, unk 0
    DWORD field24; // size 4, type 0, unk 4
    DWORD field28; // size 4, type 0, unk 0
    WORD field2C; // size 2, type 5, unk 4
    WORD field2E; // size 2, type 5, unk 4
    WORD field30; // size 2, type 5, unk 4
    WORD field32; // size 2, type 5, unk 4
    WORD field34; // size 2, type 5, unk 4
    WORD field36; // size 2, type 5, unk 4
    BYTE field38; // size 1, type 4, unk 4
    BYTE field39; // size 1, type 4, unk 0
    BYTE field3A; // size 1, type 4, unk 4
    BYTE field3B; // size 1, type 4, unk 4
    BYTE field3C; // size 1, type 4, unk 0
    BYTE field3D; // size 1, type 4, unk 0
};

struct CreatureDisplayInfoExtraRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 0
    BYTE field09; // size 1, type 4, unk 0
    BYTE field0A; // size 1, type 4, unk 0
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 0
    BYTE field0E; // size 1, type 4, unk 0
    BYTE field0F; // size 1, type 4, unk 0
    BYTE field10[3]; // size 3, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 0
};

struct CreatureDisplayInfoTrnRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 4
};

struct CreatureFamilyRec // sizeof(0x1C)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 0
    WORD field10[2]; // size 4, type 5, unk 0
    WORD field14; // size 2, type 5, unk 0
    BYTE field16; // size 1, type 4, unk 0
    BYTE field17; // size 1, type 4, unk 0
    BYTE field18; // size 1, type 4, unk 0
    BYTE field19; // size 1, type 4, unk 0
};

struct CreatureImmunitiesRec // sizeof(0x28)
{
    DWORD field00[2]; // size 8, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C[8]; // size 8, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15[16]; // size 16, type 4, unk 4
    BYTE field25; // size 1, type 4, unk 4
};

struct CreatureMovementInfoRec // sizeof(0x4)
{
    float field00; // size 4, type 3, unk 0
};

struct CreatureSoundDataRec // sizeof(0x58)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
    WORD field12; // size 2, type 5, unk 4
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    WORD field20[5]; // size 10, type 5, unk 4
    WORD field2A[4]; // size 8, type 5, unk 4
    WORD field32; // size 2, type 5, unk 4
    WORD field34; // size 2, type 5, unk 4
    WORD field36; // size 2, type 5, unk 4
    WORD field38; // size 2, type 5, unk 4
    WORD field3A; // size 2, type 5, unk 4
    WORD field3C; // size 2, type 5, unk 4
    WORD field3E; // size 2, type 5, unk 4
    WORD field40; // size 2, type 5, unk 4
    WORD field42; // size 2, type 5, unk 4
    WORD field44; // size 2, type 5, unk 4
    WORD field46; // size 2, type 5, unk 4
    WORD field48; // size 2, type 5, unk 4
    WORD field4A; // size 2, type 5, unk 4
    WORD field4C; // size 2, type 5, unk 4
    WORD field4E; // size 2, type 5, unk 4
    BYTE field50; // size 1, type 4, unk 4
    BYTE field51; // size 1, type 4, unk 4
    BYTE field52; // size 1, type 4, unk 4
    BYTE field53; // size 1, type 4, unk 4
    BYTE field54; // size 1, type 4, unk 4
    BYTE field55; // size 1, type 4, unk 4
};

struct CreatureTypeRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
};

struct CriteriaRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 0
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 0
};

struct CriteriaTreeRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 0
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 0
    WORD field0E; // size 2, type 5, unk 0
    BYTE field10; // size 1, type 4, unk 0
};

struct CriteriaTreeXEffectRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 0
};

struct CurrencyCategoryRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct CurrencyTypesRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08[2]; // size 8, type 2, unk 0
    DWORD field10; // size 4, type 0, unk 4
    DWORD field14; // size 4, type 0, unk 4
    DWORD field18; // size 4, type 0, unk 4
    char* field1C; // size 4, type 2, unk 8
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21; // size 1, type 4, unk 4
    BYTE field22; // size 1, type 4, unk 4
    BYTE field23; // size 1, type 4, unk 4
};

struct CurveRec // sizeof(0x2)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
};

struct CurvePointRec // sizeof(0xC)
{
    float field00[2]; // size 8, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct DeathThudLookupsRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct DecalPropertiesRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    DWORD field1C; // size 4, type 0, unk 0
    BYTE field20; // size 1, type 4, unk 0
    BYTE field21; // size 1, type 4, unk 0
};

struct DeclinedWordCasesRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 0
};

struct DeclinedWordRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
};

struct DestructibleModelDataRec // sizeof(0x1C)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 0
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 0
    BYTE field0E; // size 1, type 4, unk 0
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 0
    BYTE field11; // size 1, type 4, unk 0
    BYTE field12; // size 1, type 4, unk 0
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 0
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 0
    BYTE field18; // size 1, type 4, unk 4
    BYTE field19; // size 1, type 4, unk 4
    BYTE field1A; // size 1, type 4, unk 4
};

struct DifficultyRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct DissolveEffectRec // sizeof(0x5C)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    DWORD field18[3]; // size 12, type 0, unk 0
    float field24[3]; // size 12, type 3, unk 0
    float field30[3]; // size 12, type 3, unk 0
    float field3C[3]; // size 12, type 3, unk 0
    float field48[3]; // size 12, type 3, unk 0
    DWORD field54; // size 4, type 0, unk 0
    BYTE field58; // size 1, type 4, unk 0
    BYTE field59; // size 1, type 4, unk 0
};

struct DungeonEncounterRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 0
    WORD field0A; // size 2, type 5, unk 0
    WORD field0C; // size 2, type 5, unk 0
    BYTE field0E; // size 1, type 4, unk 0
    BYTE field0F; // size 1, type 4, unk 0
    BYTE field10; // size 1, type 4, unk 0
};

struct DungeonMapChunkRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    DWORD field08; // size 4, type 0, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
};

struct DungeonMapRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[2]; // size 8, type 3, unk 0
    float field0C[2]; // size 8, type 3, unk 0
    WORD field14; // size 2, type 5, unk 0
    WORD field16; // size 2, type 5, unk 0
    BYTE field18; // size 1, type 4, unk 0
    BYTE field19; // size 1, type 4, unk 0
};

struct DurabilityCostsRec // sizeof(0x3A)
{
    WORD field00[21]; // size 42, type 5, unk 4
    WORD field2A[8]; // size 16, type 5, unk 4
};

struct DurabilityQualityRec // sizeof(0x4)
{
    float field00; // size 4, type 3, unk 0
};

struct EmotesRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 0
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    WORD field0C; // size 2, type 5, unk 0
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
};

struct EmotesTextRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct EmotesTextDataRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct EmotesTextSoundRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct EnvironmentalDamageRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct ExhaustionRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    char* field14; // size 4, type 2, unk 8
    float field18; // size 4, type 3, unk 0
    char* field1C; // size 4, type 2, unk 0
};

struct FactionGroupRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
};

struct FootstepTerrainLookupRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 0
};

struct FriendshipRepReactionRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct FriendshipReputationRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    WORD field0C; // size 2, type 5, unk 4
};

struct GMSurveyAnswersRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct GMSurveyCurrentSurveyRec // sizeof(0x1)
{
    BYTE field00; // size 1, type 4, unk 4
};

struct GMSurveyQuestionsRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct GMSurveySurveysRec // sizeof(0xF)
{
    BYTE field00[15]; // size 15, type 4, unk 4
};

struct GameObjectArtKitRec // sizeof(0x1C)
{
    char* field00[3]; // size 12, type 2, unk 0
    char* field0C[4]; // size 16, type 2, unk 0
};

struct GameObjectDiffAnimMapRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct GameObjectDisplayInfoRec // sizeof(0x28)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[6]; // size 24, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    WORD field24; // size 2, type 5, unk 0
};

struct GameObjectDisplayInfoXSoundKitRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 0
};

struct GameObjectsRec // sizeof(0x54)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[3]; // size 12, type 3, unk 0
    float field10[4]; // size 16, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    DWORD field24[8]; // size 32, type 0, unk 0
    char* field44; // size 4, type 2, unk 8
    WORD field48; // size 2, type 5, unk 4
    WORD field4A; // size 2, type 5, unk 4
    WORD field4C; // size 2, type 5, unk 4
    WORD field4E; // size 2, type 5, unk 4
    BYTE field50; // size 1, type 4, unk 4
    BYTE field51; // size 1, type 4, unk 4
};

struct GameTablesRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct GarrAbilityCategoryRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct GarrAbilityRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    DWORD field0C; // size 4, type 0, unk 0
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
};

struct GarrAbilityEffectRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    DWORD field10; // size 4, type 0, unk 0
    WORD field14; // size 2, type 5, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
    BYTE field18; // size 1, type 4, unk 4
    BYTE field19; // size 1, type 4, unk 4
    BYTE field1A; // size 1, type 4, unk 4
    BYTE field1B; // size 1, type 4, unk 4
};

struct GarrBuildingRec // sizeof(0x34)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    DWORD field18; // size 4, type 0, unk 0
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    WORD field20; // size 2, type 5, unk 4
    WORD field22; // size 2, type 5, unk 4
    WORD field24; // size 2, type 5, unk 4
    WORD field26; // size 2, type 5, unk 4
    BYTE field28; // size 1, type 4, unk 4
    BYTE field29; // size 1, type 4, unk 4
    BYTE field2A; // size 1, type 4, unk 4
    BYTE field2B; // size 1, type 4, unk 4
    BYTE field2C; // size 1, type 4, unk 4
    BYTE field2D; // size 1, type 4, unk 4
    BYTE field2E; // size 1, type 4, unk 4
    BYTE field2F; // size 1, type 4, unk 4
    BYTE field30; // size 1, type 4, unk 4
    BYTE field31; // size 1, type 4, unk 4
    BYTE field32; // size 1, type 4, unk 4
};

struct GarrBuildingDoodadSetRec // sizeof(0x5)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct GarrBuildingPlotInstRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[2]; // size 8, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct GarrClassSpecRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct GarrEncounterRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    DWORD field14; // size 4, type 0, unk 0
    BYTE field18; // size 1, type 4, unk 4
};

struct GarrEncounterSetXEncounterRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct GarrEncounterXMechanicRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct GarrFollItemSetMemberRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct GarrFollSupportSpellRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 4
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    BYTE field0C; // size 1, type 4, unk 4
};

struct GarrFollowerRec // sizeof(0x2C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 4
    BYTE field1E; // size 1, type 4, unk 4
    BYTE field1F; // size 1, type 4, unk 4
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21; // size 1, type 4, unk 4
    BYTE field22; // size 1, type 4, unk 4
    BYTE field23; // size 1, type 4, unk 4
    BYTE field24; // size 1, type 4, unk 4
    BYTE field25; // size 1, type 4, unk 4
    BYTE field26; // size 1, type 4, unk 4
    BYTE field27; // size 1, type 4, unk 0
    BYTE field28; // size 1, type 4, unk 0
    BYTE field29; // size 1, type 4, unk 4
    BYTE field2A; // size 1, type 4, unk 4
    BYTE field2B; // size 1, type 4, unk 4
};

struct GarrFollowerLevelXPRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct GarrFollowerQualityRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct GarrFollowerTypeRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct GarrFollowerXAbilityRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct GarrMechanicRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    DWORD field08; // size 4, type 0, unk 0
    BYTE field0C; // size 1, type 4, unk 4
};

struct GarrMechanicTypeRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    DWORD field0C; // size 4, type 0, unk 0
    BYTE field10; // size 1, type 4, unk 4
};

struct GarrMissionRec // sizeof(0x3C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 4
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    float field18[2]; // size 8, type 3, unk 0
    DWORD field20; // size 4, type 0, unk 4
    WORD field24; // size 2, type 5, unk 4
    WORD field26; // size 2, type 5, unk 4
    WORD field28; // size 2, type 5, unk 4
    WORD field2A; // size 2, type 5, unk 4
    BYTE field2C; // size 1, type 4, unk 0
    BYTE field2D; // size 1, type 4, unk 4
    BYTE field2E; // size 1, type 4, unk 4
    BYTE field2F; // size 1, type 4, unk 4
    BYTE field30; // size 1, type 4, unk 4
    BYTE field31; // size 1, type 4, unk 4
    BYTE field32; // size 1, type 4, unk 4
    BYTE field33; // size 1, type 4, unk 4
    BYTE field34; // size 1, type 4, unk 4
    BYTE field35; // size 1, type 4, unk 4
    BYTE field36; // size 1, type 4, unk 4
    BYTE field37; // size 1, type 4, unk 4
    BYTE field38; // size 1, type 4, unk 4
    BYTE field39; // size 1, type 4, unk 4
};

struct GarrMissionRewardRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
};

struct GarrMissionTextureRec // sizeof(0xC)
{
    float field00[2]; // size 8, type 3, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct GarrMissionTypeRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct GarrMissionXEncounterRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct GarrMssnBonusAbilityRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct GarrPlotBuildingRec // sizeof(0x2)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
};

struct GarrPlotRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F[2]; // size 2, type 4, unk 4
};

struct GarrPlotInstanceRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct GarrPlotUICategoryRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
};

struct GarrSiteLevelRec // sizeof(0x14)
{
    float field00[2]; // size 8, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
};

struct GarrSiteLevelPlotInstRec // sizeof(0xC)
{
    float field00[2]; // size 8, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct GarrSpecializationRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[2]; // size 8, type 3, unk 0
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
};

struct GarrTypeRec // sizeof(0x1)
{
    BYTE field00; // size 1, type 4, unk 4
};

struct GarrUiAnimClassInfoRec // sizeof(0x8)
{
    float field00; // size 4, type 3, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct GarrUiAnimRaceInfoRec // sizeof(0x34)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    BYTE field30; // size 1, type 4, unk 4
};

struct GemPropertiesRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct GlyphBindableSpellRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
};

struct GlyphExclusiveCategoryRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct GlyphPropertiesRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct GlyphRequiredSpecRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct GlyphSlotRec // sizeof(0x2)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
};

struct GroupFinderActivityRec // sizeof(0x18)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 0
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
};

struct GroupFinderActivityGrpRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
};

struct GroupFinderCategoryRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct GuildColorBackgroundRec // sizeof(0x3)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct GuildColorBorderRec // sizeof(0x3)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct GuildColorEmblemRec // sizeof(0x3)
{
    BYTE field00; // size 1, type 4, unk 4
    BYTE field01; // size 1, type 4, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct GuildPerkSpellsRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct HeirloomRec // sizeof(0x28)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    DWORD field18[2]; // size 8, type 0, unk 0
    WORD field20[2]; // size 4, type 5, unk 4
    BYTE field24; // size 1, type 4, unk 4
    BYTE field25; // size 1, type 4, unk 0
};

struct HelmetAnimScalingRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
};

struct HelmetGeosetVisDataRec // sizeof(0x24)
{
    DWORD field00[9]; // size 36, type 0, unk 0
};

struct HighlightColorRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
};

struct HolidayDescriptionsRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct HolidayNamesRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct HolidaysRec // sizeof(0x6C)
{
    DWORD field00[16]; // size 64, type 0, unk 4
    char* field40; // size 4, type 2, unk 0
    WORD field44[10]; // size 20, type 5, unk 4
    WORD field58; // size 2, type 5, unk 4
    BYTE field5A; // size 1, type 4, unk 4
    BYTE field5B[10]; // size 10, type 4, unk 4
    BYTE field65; // size 1, type 4, unk 4
    BYTE field66; // size 1, type 4, unk 4
    BYTE field67; // size 1, type 4, unk 4
    BYTE field68; // size 1, type 4, unk 0
    BYTE field69; // size 1, type 4, unk 4
};

struct ImportPriceArmorRec // sizeof(0x10)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
};

struct ImportPriceQualityRec // sizeof(0x4)
{
    float field00; // size 4, type 3, unk 0
};

struct ImportPriceShieldRec // sizeof(0x4)
{
    float field00; // size 4, type 3, unk 0
};

struct ImportPriceWeaponRec // sizeof(0x4)
{
    float field00; // size 4, type 3, unk 0
};

struct InvasionClientDataRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    float field18[2]; // size 8, type 3, unk 0
};

struct ItemAppearanceRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct ItemAppearanceXUiCameraRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct ItemArmorQualityRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 0
};

struct ItemArmorShieldRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
};

struct ItemArmorTotalRec // sizeof(0x14)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    WORD field10; // size 2, type 5, unk 0
};

struct ItemBagFamilyRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct ItemBonusRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[2]; // size 8, type 0, unk 0
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
};

struct ItemBonusListLevelDeltaRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
};

struct ItemBonusTreeNodeRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct ItemChildEquipmentRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct ItemClassRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
};

struct ItemCurrencyCostRec // sizeof(0x4)
{
    DWORD field00; // size 4, type 0, unk 0
};

struct ItemRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 0
    BYTE field07; // size 1, type 4, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct ItemDamageAmmoRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
};

struct ItemDamageOneHandCasterRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
};

struct ItemDamageOneHandRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
};

struct ItemDamageTwoHandCasterRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
};

struct ItemDamageTwoHandRec // sizeof(0x20)
{
    float field00[7]; // size 28, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
};

struct ItemDisenchantLootRec // sizeof(0xA)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct ItemDisplayInfoRec // sizeof(0x28)
{
    DWORD field00[2]; // size 8, type 0, unk 0
    DWORD field08[2]; // size 8, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    WORD field14; // size 2, type 5, unk 0
    WORD field16; // size 2, type 5, unk 4
    WORD field18[2]; // size 4, type 5, unk 0
    WORD field1C; // size 2, type 5, unk 0
    WORD field1E; // size 2, type 5, unk 0
    BYTE field20[3]; // size 3, type 4, unk 0
    BYTE field23[3]; // size 3, type 4, unk 0
    BYTE field26; // size 1, type 4, unk 4
    BYTE field27; // size 1, type 4, unk 0
};

struct ItemDisplayInfoMaterialResRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 0
};

struct ItemDisplayXUiCameraRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct ItemEffectRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    WORD field10; // size 2, type 5, unk 0
    WORD field12; // size 2, type 5, unk 4
    WORD field14; // size 2, type 5, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 0
};

struct ItemExtendedCostRec // sizeof(0x48)
{
    DWORD field00[5]; // size 20, type 0, unk 0
    DWORD field14[5]; // size 20, type 0, unk 4
    DWORD field28; // size 4, type 0, unk 4
    WORD field2C[5]; // size 10, type 5, unk 4
    WORD field36; // size 2, type 5, unk 4
    WORD field38[5]; // size 10, type 5, unk 4
    BYTE field42; // size 1, type 4, unk 4
    BYTE field43; // size 1, type 4, unk 4
    BYTE field44; // size 1, type 4, unk 4
    BYTE field45; // size 1, type 4, unk 4
    BYTE field46; // size 1, type 4, unk 4
};

struct ItemGroupSoundsRec // sizeof(0x8)
{
    WORD field00[4]; // size 8, type 5, unk 4
};

struct ItemLimitCategoryRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct ItemModifiedAppearanceRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 5
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct ItemModifiedAppearanceExtraRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 0
    BYTE field0A; // size 1, type 4, unk 0
};

struct ItemNameDescriptionRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04; // size 4, type 0, unk 0
};

struct ItemPetFoodRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct ItemPriceBaseRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
};

struct ItemRandomPropertiesRec // sizeof(0x10)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04[5]; // size 10, type 5, unk 4
};

struct ItemRandomSuffixRec // sizeof(0x1C)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 0
    WORD field08[5]; // size 10, type 5, unk 4
    WORD field12[5]; // size 10, type 5, unk 4
};

struct ItemRangedDisplayInfoRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
};

struct ItemSearchNameRec // sizeof(0x10)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04[3]; // size 12, type 0, unk 0
};

struct ItemSetRec // sizeof(0x4C)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04[17]; // size 68, type 0, unk 4
    WORD field48; // size 2, type 5, unk 4
    BYTE field4A; // size 1, type 4, unk 4
};

struct ItemSetSpellRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
};

struct ItemsparseRec // sizeof(0x104)
{
    DWORD field00[3]; // size 12, type 0, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    DWORD field14; // size 4, type 0, unk 4
    DWORD field18; // size 4, type 0, unk 4
    DWORD field1C; // size 4, type 0, unk 0
    DWORD field20; // size 4, type 0, unk 0
    DWORD field24; // size 4, type 0, unk 4
    DWORD field28; // size 4, type 0, unk 0
    DWORD field2C; // size 4, type 0, unk 0
    DWORD field30[10]; // size 40, type 0, unk 0
    float field58[10]; // size 40, type 3, unk 0
    float field80; // size 4, type 3, unk 0
    char* field84; // size 4, type 2, unk 8
    char* field88; // size 4, type 2, unk 8
    char* field8C; // size 4, type 2, unk 8
    char* field90; // size 4, type 2, unk 8
    char* field94; // size 4, type 2, unk 8
    DWORD field98; // size 4, type 0, unk 4
    float field9C; // size 4, type 3, unk 0
    DWORD fieldA0; // size 4, type 0, unk 4
    float fieldA4; // size 4, type 3, unk 0
    WORD fieldA8; // size 2, type 5, unk 4
    WORD fieldAA; // size 2, type 5, unk 4
    WORD fieldAC; // size 2, type 5, unk 4
    WORD fieldAE; // size 2, type 5, unk 4
    WORD fieldB0[10]; // size 20, type 5, unk 0
    WORD fieldC4; // size 2, type 5, unk 4
    WORD fieldC6; // size 2, type 5, unk 4
    WORD fieldC8; // size 2, type 5, unk 4
    WORD fieldCA; // size 2, type 5, unk 4
    WORD fieldCC; // size 2, type 5, unk 4
    WORD fieldCE; // size 2, type 5, unk 4
    WORD fieldD0; // size 2, type 5, unk 4
    WORD fieldD2; // size 2, type 5, unk 4
    WORD fieldD4; // size 2, type 5, unk 4
    WORD fieldD6; // size 2, type 5, unk 4
    WORD fieldD8; // size 2, type 5, unk 4
    WORD fieldDA; // size 2, type 5, unk 4
    WORD fieldDC; // size 2, type 5, unk 4
    WORD fieldDE; // size 2, type 5, unk 4
    WORD fieldE0; // size 2, type 5, unk 4
    BYTE fieldE2; // size 1, type 4, unk 4
    BYTE fieldE3; // size 1, type 4, unk 4
    BYTE fieldE4; // size 1, type 4, unk 4
    BYTE fieldE5; // size 1, type 4, unk 0
    BYTE fieldE6; // size 1, type 4, unk 4
    BYTE fieldE7; // size 1, type 4, unk 4
    BYTE fieldE8; // size 1, type 4, unk 4
    BYTE fieldE9; // size 1, type 4, unk 4
    BYTE fieldEA[10]; // size 10, type 4, unk 0
    BYTE fieldF4; // size 1, type 4, unk 4
    BYTE fieldF5; // size 1, type 4, unk 4
    BYTE fieldF6; // size 1, type 4, unk 4
    BYTE fieldF7; // size 1, type 4, unk 4
    BYTE fieldF8; // size 1, type 4, unk 4
    BYTE fieldF9; // size 1, type 4, unk 4
    BYTE fieldFA; // size 1, type 4, unk 4
    BYTE fieldFB[3]; // size 3, type 4, unk 4
    BYTE fieldFE; // size 1, type 4, unk 4
    BYTE fieldFF; // size 1, type 4, unk 4
    BYTE field100; // size 1, type 4, unk 4
};

struct ItemSpecRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct ItemSpecOverrideRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct ItemSubClassRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 0
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 0
    BYTE field0E; // size 1, type 4, unk 0
    BYTE field0F; // size 1, type 4, unk 0
    BYTE field10; // size 1, type 4, unk 4
};

struct ItemSubClassMaskRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
};

struct ItemToBattlePetSpeciesRec // sizeof(0x2)
{
    WORD field00; // size 2, type 5, unk 4
};

struct ItemToMountSpellRec // sizeof(0x4)
{
    DWORD field00; // size 4, type 0, unk 0
};

struct ItemUpgradeRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
};

struct ItemVisualEffectsRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct ItemVisualsRec // sizeof(0xA)
{
    WORD field00[5]; // size 10, type 5, unk 4
};

struct ItemXBonusTreeRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct JournalEncounterCreatureRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    WORD field14; // size 2, type 5, unk 4
    BYTE field16; // size 1, type 4, unk 4
};

struct JournalEncounterRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[2]; // size 8, type 3, unk 0
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 0
    BYTE field1E; // size 1, type 4, unk 4
};

struct JournalEncounterItemRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 0
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 4
};

struct JournalEncounterSectionRec // sizeof(0x24)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21; // size 1, type 4, unk 4
    BYTE field22; // size 1, type 4, unk 0
};

struct JournalEncounterXDifficultyRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct JournalInstanceRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 4
};

struct JournalItemXDifficultyRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct JournalSectionXDifficultyRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct JournalTierRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct JournalTierXInstanceRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct KeyChainRec // sizeof(0x20)
{
    BYTE field00[32]; // size 32, type 4, unk 4
};

struct KeystoneAffixRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    DWORD field08; // size 4, type 0, unk 0
};

struct LanguageWordsRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct LanguagesRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
};

struct LfgDungeonExpansionRec // sizeof(0xA)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
    BYTE field08; // size 1, type 4, unk 4
};

struct LfgDungeonGroupRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct LfgDungeonsGroupingMapRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct LfgRoleRequirementRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct LoadingScreenTaxiSplinesRec // sizeof(0x5C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[10]; // size 40, type 3, unk 0
    float field2C[10]; // size 40, type 3, unk 0
    WORD field54; // size 2, type 5, unk 4
    WORD field56; // size 2, type 5, unk 4
    BYTE field58; // size 1, type 4, unk 4
};

struct LoadingScreensRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
};

struct LocaleRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct LocationRec // sizeof(0x18)
{
    float field00[3]; // size 12, type 3, unk 0
    float field0C[3]; // size 12, type 3, unk 0
};

struct LockRec // sizeof(0x40)
{
    DWORD field00[8]; // size 32, type 0, unk 0
    WORD field20[8]; // size 16, type 5, unk 4
    BYTE field30[8]; // size 8, type 4, unk 4
    BYTE field38[8]; // size 8, type 4, unk 4
};

struct LockTypeRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 0
};

struct LookAtControllerRec // sizeof(0x24)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    WORD field10; // size 2, type 5, unk 4
    WORD field12; // size 2, type 5, unk 4
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    BYTE field1A; // size 1, type 4, unk 4
    BYTE field1B; // size 1, type 4, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 4
    BYTE field1E; // size 1, type 4, unk 4
    BYTE field1F; // size 1, type 4, unk 4
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21; // size 1, type 4, unk 4
    BYTE field22; // size 1, type 4, unk 4
};

struct MailTemplateRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct ManifestInterfaceTOCDataRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct MapChallengeModeRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct MarketingPromotionsXLocaleRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    char* field10; // size 4, type 2, unk 0
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 0
};

struct MaterialRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct MinorTalentRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 1
    DWORD field08; // size 4, type 0, unk 0
};

struct ModelManifestRec // sizeof(0x20)
{
    QWORD field00; // size 8, type 1, unk 4
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 4
    char* field10; // size 4, type 2, unk 0
    DWORD field14; // size 4, type 0, unk 4
    BYTE field18; // size 1, type 4, unk 4
};

struct ModelNameToManifestRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    DWORD field04; // size 4, type 0, unk 0
};

struct ModifierTreeRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 0
};

struct MountCapabilityRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 0
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct MountRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    BYTE field1E; // size 1, type 4, unk 0
};

struct MountTypeRec // sizeof(0x4)
{
    DWORD field00; // size 4, type 0, unk 0
};

struct MountTypeXCapabilityRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct MovieRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    DWORD field04; // size 4, type 0, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct MovieFileDataRec // sizeof(0x2)
{
    WORD field00; // size 2, type 5, unk 4
};

struct MovieVariationRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    WORD field0C; // size 2, type 5, unk 4
};

struct NPCSoundsRec // sizeof(0x8)
{
    WORD field00[4]; // size 8, type 5, unk 4
};

struct NameGenRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct NamesProfanityRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 0
};

struct NamesReservedRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct NamesReservedLocaleRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct NpcModelItemSlotDisplayInfoRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 0
};

struct ObjectEffectRec // sizeof(0x1C)
{
    char* field00; // size 4, type 2, unk 0
    float field04[3]; // size 12, type 3, unk 0
    WORD field10; // size 2, type 5, unk 4
    WORD field12; // size 2, type 5, unk 4
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
    BYTE field18; // size 1, type 4, unk 4
};

struct ObjectEffectGroupRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct ObjectEffectModifierRec // sizeof(0x14)
{
    float field00[4]; // size 16, type 3, unk 0
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
};

struct ObjectEffectPackageRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct ObjectEffectPackageElemRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
};

struct OutlineEffectRec // sizeof(0x10)
{
    float field00; // size 4, type 3, unk 0
    WORD field04; // size 2, type 5, unk 0
    WORD field06; // size 2, type 5, unk 0
    WORD field08; // size 2, type 5, unk 0
    WORD field0A; // size 2, type 5, unk 0
    BYTE field0C; // size 1, type 4, unk 0
};

struct OverrideSpellDataRec // sizeof(0x30)
{
    DWORD field00[10]; // size 40, type 0, unk 0
    DWORD field28; // size 4, type 0, unk 0
    BYTE field2C; // size 1, type 4, unk 4
};

struct PageTextMaterialRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct PaperDollItemFrameRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct ParticleColorRec // sizeof(0x24)
{
    DWORD field00[3]; // size 12, type 0, unk 0
    DWORD field0C[3]; // size 12, type 0, unk 0
    DWORD field18[3]; // size 12, type 0, unk 0
};

struct PathRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct PathNodeRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
};

struct PathNodePropertyRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct PathPropertyRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct PhaseRec // sizeof(0x2)
{
    WORD field00; // size 2, type 5, unk 4
};

struct PhaseShiftZoneSoundsRec // sizeof(0x14)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct PhaseXPhaseGroupRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct PlayerConditionRec // sizeof(0x12C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 4
    DWORD field10; // size 4, type 0, unk 4
    DWORD field14; // size 4, type 0, unk 4
    DWORD field18; // size 4, type 0, unk 4
    DWORD field1C[4]; // size 16, type 0, unk 0
    DWORD field2C; // size 4, type 0, unk 4
    DWORD field30[4]; // size 16, type 0, unk 0
    DWORD field40[2]; // size 8, type 0, unk 4
    DWORD field48; // size 4, type 0, unk 4
    DWORD field4C[4]; // size 16, type 0, unk 0
    DWORD field5C; // size 4, type 0, unk 4
    DWORD field60; // size 4, type 0, unk 4
    DWORD field64; // size 4, type 0, unk 4
    DWORD field68[6]; // size 24, type 0, unk 4
    char* field80; // size 4, type 2, unk 8
    DWORD field84[2]; // size 8, type 0, unk 0
    WORD field8C; // size 2, type 5, unk 4
    WORD field8E; // size 2, type 5, unk 4
    WORD field90; // size 2, type 5, unk 0
    WORD field92[4]; // size 8, type 5, unk 4
    WORD field9A[4]; // size 8, type 5, unk 4
    WORD fieldA2[4]; // size 8, type 5, unk 4
    WORD fieldAA[3]; // size 6, type 5, unk 4
    WORD fieldB0; // size 2, type 5, unk 4
    WORD fieldB2[4]; // size 8, type 5, unk 4
    WORD fieldBA[4]; // size 8, type 5, unk 4
    WORD fieldC2[4]; // size 8, type 5, unk 4
    WORD fieldCA[2]; // size 4, type 5, unk 4
    WORD fieldCE; // size 2, type 5, unk 4
    WORD fieldD0[4]; // size 8, type 5, unk 4
    WORD fieldD8[4]; // size 8, type 5, unk 4
    WORD fieldE0; // size 2, type 5, unk 4
    WORD fieldE2; // size 2, type 5, unk 4
    WORD fieldE4; // size 2, type 5, unk 4
    WORD fieldE6; // size 2, type 5, unk 4
    WORD fieldE8; // size 2, type 5, unk 4
    WORD fieldEA; // size 2, type 5, unk 4
    WORD fieldEC; // size 2, type 5, unk 4
    BYTE fieldEE; // size 1, type 4, unk 4
    BYTE fieldEF; // size 1, type 4, unk 0
    BYTE fieldF0; // size 1, type 4, unk 0
    BYTE fieldF1; // size 1, type 4, unk 4
    BYTE fieldF2; // size 1, type 4, unk 4
    BYTE fieldF3; // size 1, type 4, unk 4
    BYTE fieldF4[3]; // size 3, type 4, unk 4
    BYTE fieldF7; // size 1, type 4, unk 4
    BYTE fieldF8; // size 1, type 4, unk 0
    BYTE fieldF9; // size 1, type 4, unk 4
    BYTE fieldFA; // size 1, type 4, unk 4
    BYTE fieldFB; // size 1, type 4, unk 4
    BYTE fieldFC[4]; // size 4, type 4, unk 4
    BYTE field100; // size 1, type 4, unk 4
    BYTE field101[4]; // size 4, type 4, unk 4
    BYTE field105; // size 1, type 4, unk 4
    BYTE field106; // size 1, type 4, unk 4
    BYTE field107; // size 1, type 4, unk 4
    BYTE field108; // size 1, type 4, unk 4
    BYTE field109[4]; // size 4, type 4, unk 4
    BYTE field10D[4]; // size 4, type 4, unk 4
    BYTE field111[4]; // size 4, type 4, unk 4
    BYTE field115; // size 1, type 4, unk 4
    BYTE field116[4]; // size 4, type 4, unk 4
    BYTE field11A[4]; // size 4, type 4, unk 4
    BYTE field11E; // size 1, type 4, unk 0
    BYTE field11F; // size 1, type 4, unk 0
    BYTE field120; // size 1, type 4, unk 0
    BYTE field121; // size 1, type 4, unk 0
    BYTE field122; // size 1, type 4, unk 4
    BYTE field123; // size 1, type 4, unk 4
    BYTE field124; // size 1, type 4, unk 4
    BYTE field125; // size 1, type 4, unk 4
    BYTE field126; // size 1, type 4, unk 0
    BYTE field127; // size 1, type 4, unk 0
    BYTE field128; // size 1, type 4, unk 0
    BYTE field129; // size 1, type 4, unk 4
    BYTE field12A; // size 1, type 4, unk 4
};

struct PositionerRec // sizeof(0x8)
{
    float field00; // size 4, type 3, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct PositionerStateRec // sizeof(0x10)
{
    float field00; // size 4, type 3, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
};

struct PositionerStateEntryRec // sizeof(0x14)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    BYTE field08; // size 1, type 4, unk 0
    BYTE field09; // size 1, type 4, unk 0
    BYTE field0A; // size 1, type 4, unk 0
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 0
    BYTE field0E; // size 1, type 4, unk 0
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct PowerDisplayRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct PowerTypeRec // sizeof(0x1C)
{
    char* field00; // size 4, type 2, unk 0
    char* field04; // size 4, type 2, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    WORD field10; // size 2, type 5, unk 0
    WORD field12; // size 2, type 5, unk 0
    WORD field14; // size 2, type 5, unk 0
    BYTE field16; // size 1, type 4, unk 0
    BYTE field17; // size 1, type 4, unk 0
    BYTE field18; // size 1, type 4, unk 0
    BYTE field19; // size 1, type 4, unk 0
    BYTE field1A; // size 1, type 4, unk 0
};

struct PrestigeLevelInfoRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct PvpDifficultyRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct PvpItemRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct PvpRewardRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
};

struct PvpTalentRec // sizeof(0x28)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    DWORD field18; // size 4, type 0, unk 0
    DWORD field1C; // size 4, type 0, unk 0
    DWORD field20; // size 4, type 0, unk 0
    char* field24; // size 4, type 2, unk 8
};

struct PvpTalentUnlockRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
};

struct QuestFactionRewardRec // sizeof(0x14)
{
    WORD field00[10]; // size 20, type 5, unk 0
};

struct QuestFeedbackEffectRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct QuestInfoRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct QuestLineRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct QuestLineXQuestRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
};

struct QuestMoneyRewardRec // sizeof(0x28)
{
    DWORD field00[10]; // size 40, type 0, unk 4
};

struct QuestObjectiveRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
};

struct QuestPOIBlobRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct QuestPOIPointCliTaskRec // sizeof(0xC)
{
    WORD field00; // size 2, type 5, unk 0
    WORD field02; // size 2, type 5, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct QuestPOIPointRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 0
    WORD field0A; // size 2, type 5, unk 0
};

struct QuestPackageItemRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct QuestSortRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct QuestV2CliTaskRec // sizeof(0x34)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    DWORD field14; // size 4, type 0, unk 0
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 0
    WORD field1E[3]; // size 6, type 5, unk 4
    WORD field24; // size 2, type 5, unk 4
    WORD field26; // size 2, type 5, unk 0
    BYTE field28; // size 1, type 4, unk 4
    BYTE field29; // size 1, type 4, unk 4
    BYTE field2A; // size 1, type 4, unk 4
    BYTE field2B; // size 1, type 4, unk 4
    BYTE field2C; // size 1, type 4, unk 4
    BYTE field2D; // size 1, type 4, unk 4
    BYTE field2E; // size 1, type 4, unk 4
    BYTE field2F; // size 1, type 4, unk 4
    BYTE field30; // size 1, type 4, unk 4
    BYTE field31; // size 1, type 4, unk 4
};

struct QuestV2Rec // sizeof(0x2)
{
    WORD field00; // size 2, type 5, unk 4
};

struct QuestXPRec // sizeof(0x14)
{
    WORD field00[10]; // size 20, type 5, unk 4
};

struct RacialMountsRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct RandPropPointsRec // sizeof(0x1E)
{
    WORD field00[5]; // size 10, type 5, unk 4
    WORD field0A[5]; // size 10, type 5, unk 4
    WORD field14[5]; // size 10, type 5, unk 4
};

struct ResearchBranchRec // sizeof(0x10)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 0
    DWORD field08; // size 4, type 0, unk 0
    WORD field0C; // size 2, type 5, unk 4
    BYTE field0E; // size 1, type 4, unk 4
};

struct ResearchFieldRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 4
};

struct ResearchProjectRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    DWORD field0C; // size 4, type 0, unk 0
    char* field10; // size 4, type 2, unk 0
    WORD field14; // size 2, type 5, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
    BYTE field18; // size 1, type 4, unk 4
};

struct ResearchSiteRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct ResistancesRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct RewardPackRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    float field08; // size 4, type 3, unk 0
    BYTE field0C; // size 1, type 4, unk 0
};

struct RewardPackXCurrencyTypeRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
};

struct RewardPackXItemRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
};

struct RulesetItemUpgradeRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct ScalingStatDistributionRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
};

struct ScenarioRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct ScenarioEventEntryRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
};

struct ScenarioStepRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
};

struct SceneScriptRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    char* field04; // size 4, type 2, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
};

struct SceneScriptPackageRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SceneScriptPackageMemberRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct ScheduledIntervalRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    WORD field10; // size 2, type 5, unk 0
    WORD field12; // size 2, type 5, unk 0
};

struct ScheduledWorldStateRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 1
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    DWORD field18; // size 4, type 0, unk 0
    DWORD field1C; // size 4, type 0, unk 0
    DWORD field20; // size 4, type 0, unk 0
};

struct ScheduledWorldStateGroupRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
};

struct ScreenEffectRec // sizeof(0x28)
{
    char* field00; // size 4, type 2, unk 0
    DWORD field04[4]; // size 16, type 0, unk 0
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    WORD field20; // size 2, type 5, unk 0
    BYTE field22; // size 1, type 4, unk 4
    BYTE field23; // size 1, type 4, unk 4
    BYTE field24; // size 1, type 4, unk 0
};

struct ScreenLocationRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SeamlessSiteRec // sizeof(0x4)
{
    DWORD field00; // size 4, type 0, unk 0
};

struct ServerMessagesRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct ShadowyEffectRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    BYTE field20; // size 1, type 4, unk 0
    BYTE field21; // size 1, type 4, unk 0
};

struct SkillLineAbilityRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 1
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 1
    WORD field10; // size 2, type 5, unk 0
    WORD field12; // size 2, type 5, unk 0
    WORD field14; // size 2, type 5, unk 0
    WORD field16; // size 2, type 5, unk 0
    WORD field18; // size 2, type 5, unk 0
    WORD field1A; // size 2, type 5, unk 0
    BYTE field1C; // size 1, type 4, unk 0
    BYTE field1D; // size 1, type 4, unk 0
};

struct SkillLineRec // sizeof(0x14)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    WORD field0C; // size 2, type 5, unk 0
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 0
    BYTE field11; // size 1, type 4, unk 0
    BYTE field12; // size 1, type 4, unk 4
};

struct SkillRaceClassInfoRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
    WORD field06; // size 2, type 5, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 0
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 0
};

struct SoundAmbienceRec // sizeof(0x6)
{
    WORD field00[2]; // size 4, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct SoundAmbienceFlavorRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
};

struct SoundFilterRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SoundFilterElemRec // sizeof(0x28)
{
    float field00[9]; // size 36, type 3, unk 0
    BYTE field24; // size 1, type 4, unk 0
    BYTE field25; // size 1, type 4, unk 0
};

struct SoundOverrideRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct SoundProviderPreferencesRec // sizeof(0x4C)
{
    char* field00; // size 4, type 2, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    float field30; // size 4, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    WORD field40; // size 2, type 5, unk 4
    WORD field42; // size 2, type 5, unk 0
    WORD field44; // size 2, type 5, unk 0
    WORD field46; // size 2, type 5, unk 0
    WORD field48; // size 2, type 5, unk 0
    BYTE field4A; // size 1, type 4, unk 0
    BYTE field4B; // size 1, type 4, unk 0
};

struct SourceInfoRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 4
    char* field04; // size 4, type 2, unk 8
    BYTE field08; // size 1, type 4, unk 0
    BYTE field09; // size 1, type 4, unk 0
};

struct SpamMessagesRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SpecializationSpellsRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 1
    DWORD field08; // size 4, type 0, unk 0
    char* field0C; // size 4, type 2, unk 8
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
};

struct SpellActionBarPrefRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct SpellActivationOverlayRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    float field0C; // size 4, type 3, unk 0
    DWORD field10[4]; // size 16, type 0, unk 0
    WORD field20; // size 2, type 5, unk 0
    BYTE field22; // size 1, type 4, unk 0
    BYTE field23; // size 1, type 4, unk 0
};

struct SpellAuraOptionsRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
};

struct SpellAuraRestrictionsRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
    BYTE field18; // size 1, type 4, unk 4
};

struct SpellAuraVisXChrSpecRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 0
    WORD field02; // size 2, type 5, unk 0
};

struct SpellAuraVisibilityRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 0
    BYTE field09; // size 1, type 4, unk 0
};

struct SpellCastTimesRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 0
};

struct SpellCastingRequirementsRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 4
};

struct SpellCategoriesRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
    WORD field06; // size 2, type 5, unk 0
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 0
    BYTE field0C; // size 1, type 4, unk 0
    BYTE field0D; // size 1, type 4, unk 0
    BYTE field0E; // size 1, type 4, unk 0
};

struct SpellCategoryRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 0
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 0
};

struct SpellClassOptionsRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[4]; // size 16, type 0, unk 0
    WORD field14; // size 2, type 5, unk 4
    BYTE field16; // size 1, type 4, unk 4
};

struct SpellCooldownsRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    BYTE field10; // size 1, type 4, unk 4
};

struct SpellRec // sizeof(0x1C)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    char* field0C; // size 4, type 2, unk 8
    char* field10; // size 4, type 2, unk 8
    DWORD field14; // size 4, type 0, unk 0
    WORD field18; // size 2, type 5, unk 0
};

struct SpellDescriptionVariablesRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SpellDispelTypeRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct SpellDurationRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
};

struct SpellEffectCameraShakesRec // sizeof(0x8)
{
    WORD field00[3]; // size 6, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct SpellEffectRec // sizeof(0x60)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    DWORD field18; // size 4, type 0, unk 0
    DWORD field1C; // size 4, type 0, unk 0
    DWORD field20[2]; // size 8, type 0, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    DWORD field30[4]; // size 16, type 0, unk 0
    DWORD field40; // size 4, type 0, unk 0
    float field44; // size 4, type 3, unk 0
    DWORD field48; // size 4, type 0, unk 0
    DWORD field4C; // size 4, type 0, unk 0
    float field50; // size 4, type 3, unk 0
    WORD field54; // size 2, type 5, unk 0
    WORD field56; // size 2, type 5, unk 0
    BYTE field58; // size 1, type 4, unk 0
    BYTE field59; // size 1, type 4, unk 4
    BYTE field5A; // size 1, type 4, unk 0
    BYTE field5B[2]; // size 2, type 4, unk 4
    BYTE field5D[2]; // size 2, type 4, unk 4
    BYTE field5F; // size 1, type 4, unk 0
};

struct SpellEffectEmissionRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 0
};

struct SpellEffectGroupSizeRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
};

struct SpellEffectScalingRec // sizeof(0x10)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    DWORD field0C; // size 4, type 0, unk 0
};

struct SpellEquippedItemsRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    BYTE field0C; // size 1, type 4, unk 0
};

struct SpellFlyoutRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 8
    char* field08; // size 4, type 2, unk 8
    WORD field0C; // size 2, type 5, unk 0
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct SpellFlyoutItemRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct SpellFocusObjectRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct SpellIconRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SpellInterruptsRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[2]; // size 8, type 0, unk 0
    DWORD field0C[2]; // size 8, type 0, unk 0
    WORD field14; // size 2, type 5, unk 0
    BYTE field16; // size 1, type 4, unk 4
};

struct SpellItemEnchantmentConditionRec // sizeof(0x1E)
{
    BYTE field00[5]; // size 5, type 4, unk 4
    BYTE field05[5]; // size 5, type 4, unk 4
    BYTE field0A[5]; // size 5, type 4, unk 4
    BYTE field0F[5]; // size 5, type 4, unk 4
    BYTE field14[5]; // size 5, type 4, unk 4
    BYTE field19[5]; // size 5, type 4, unk 4
};

struct SpellKeyboundOverrideRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 0
};

struct SpellLabelRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
};

struct SpellLearnSpellRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 1
    DWORD field08; // size 4, type 0, unk 0
};

struct SpellLevelsRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
    WORD field06; // size 2, type 5, unk 0
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct SpellMechanicRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 8
};

struct SpellMiscRec // sizeof(0x4C)
{
    DWORD field00[14]; // size 56, type 0, unk 0
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    WORD field40; // size 2, type 5, unk 4
    WORD field42; // size 2, type 5, unk 4
    WORD field44; // size 2, type 5, unk 4
    WORD field46; // size 2, type 5, unk 4
    WORD field48; // size 2, type 5, unk 4
    BYTE field4A; // size 1, type 4, unk 4
};

struct SpellMiscDifficultyRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct SpellMissileRec // sizeof(0x3C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    float field30; // size 4, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    BYTE field38; // size 1, type 4, unk 4
};

struct SpellMissileMotionRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct SpellPowerRec // sizeof(0x28)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    DWORD field14; // size 4, type 0, unk 0
    float field18; // size 4, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    WORD field20; // size 2, type 5, unk 4
    WORD field22; // size 2, type 5, unk 4
    BYTE field24; // size 1, type 4, unk 4
    BYTE field25; // size 1, type 4, unk 0
    BYTE field26; // size 1, type 4, unk 4
};

struct SpellPowerDifficultyRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct SpellProceduralEffectRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[4]; // size 16, type 3, unk 0
    BYTE field14; // size 1, type 4, unk 4
};

struct SpellProcsPerMinuteRec // sizeof(0x8)
{
    float field00; // size 4, type 3, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct SpellProcsPerMinuteModRec // sizeof(0x8)
{
    float field00; // size 4, type 3, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
};

struct SpellRadiusRec // sizeof(0x10)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
};

struct SpellRangeRec // sizeof(0x1C)
{
    float field00[2]; // size 8, type 3, unk 0
    float field08[2]; // size 8, type 3, unk 0
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    BYTE field18; // size 1, type 4, unk 4
};

struct SpellReagentsCurrencyRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct SpellReagentsRec // sizeof(0x34)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[8]; // size 32, type 0, unk 0
    WORD field24[8]; // size 16, type 5, unk 0
};

struct SpellScalingRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
    BYTE field06; // size 1, type 4, unk 0
    BYTE field07; // size 1, type 4, unk 4
};

struct SpellShapeshiftRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[2]; // size 8, type 0, unk 0
    DWORD field0C[2]; // size 8, type 0, unk 0
    BYTE field14; // size 1, type 4, unk 0
};

struct SpellShapeshiftFormRec // sizeof(0x2C)
{
    char* field00; // size 4, type 2, unk 8
    float field04; // size 4, type 3, unk 0
    DWORD field08; // size 4, type 0, unk 0
    WORD field0C; // size 2, type 5, unk 0
    WORD field0E; // size 2, type 5, unk 0
    WORD field10[4]; // size 8, type 5, unk 4
    WORD field18[8]; // size 16, type 5, unk 4
    BYTE field28; // size 1, type 4, unk 0
    BYTE field29; // size 1, type 4, unk 4
    BYTE field2A; // size 1, type 4, unk 0
};

struct SpellSpecialUnitEffectRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct SpellTargetRestrictionsRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    WORD field10; // size 2, type 5, unk 0
    WORD field12; // size 2, type 5, unk 0
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
};

struct SpellTotemsRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04[2]; // size 8, type 0, unk 0
    BYTE field0C[2]; // size 2, type 4, unk 4
};

struct SpellVisualAnimRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 0
    WORD field02; // size 2, type 5, unk 0
    WORD field04; // size 2, type 5, unk 4
};

struct SpellVisualColorEffectRec // sizeof(0x14)
{
    float field00; // size 4, type 3, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
};

struct SpellVisualRec // sizeof(0x70)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    DWORD field18; // size 4, type 0, unk 0
    DWORD field1C; // size 4, type 0, unk 0
    DWORD field20; // size 4, type 0, unk 4
    DWORD field24; // size 4, type 0, unk 0
    DWORD field28; // size 4, type 0, unk 0
    DWORD field2C; // size 4, type 0, unk 0
    DWORD field30; // size 4, type 0, unk 0
    DWORD field34; // size 4, type 0, unk 0
    DWORD field38; // size 4, type 0, unk 0
    DWORD field3C; // size 4, type 0, unk 0
    float field40[3]; // size 12, type 3, unk 0
    float field4C[3]; // size 12, type 3, unk 0
    DWORD field58; // size 4, type 0, unk 0
    DWORD field5C; // size 4, type 0, unk 0
    WORD field60; // size 2, type 5, unk 4
    WORD field62; // size 2, type 5, unk 4
    WORD field64; // size 2, type 5, unk 4
    WORD field66; // size 2, type 5, unk 4
    WORD field68; // size 2, type 5, unk 4
    WORD field6A; // size 2, type 5, unk 4
    BYTE field6C; // size 1, type 4, unk 0
    BYTE field6D; // size 1, type 4, unk 0
};

struct SpellVisualEffectNameRec // sizeof(0x2C)
{
    char* field00; // size 4, type 2, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    DWORD field1C; // size 4, type 0, unk 4
    DWORD field20; // size 4, type 0, unk 0
    DWORD field24; // size 4, type 0, unk 0
    BYTE field28; // size 1, type 4, unk 4
};

struct SpellVisualKitAreaModelRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
};

struct SpellVisualKitRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct SpellVisualKitEffectRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
};

struct SpellVisualKitModelAttachRec // sizeof(0x58)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08[3]; // size 12, type 3, unk 0
    float field14[3]; // size 12, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    float field30; // size 4, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    DWORD field40; // size 4, type 0, unk 4
    float field44; // size 4, type 3, unk 0
    WORD field48; // size 2, type 5, unk 4
    WORD field4A; // size 2, type 5, unk 0
    WORD field4C; // size 2, type 5, unk 0
    WORD field4E; // size 2, type 5, unk 0
    WORD field50; // size 2, type 5, unk 4
    BYTE field52; // size 1, type 4, unk 0
    BYTE field53; // size 1, type 4, unk 4
    BYTE field54; // size 1, type 4, unk 4
};

struct SpellVisualMissileRec // sizeof(0x3C)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 4
    float field10[3]; // size 12, type 3, unk 0
    float field1C[3]; // size 12, type 3, unk 0
    DWORD field28; // size 4, type 0, unk 4
    WORD field2C; // size 2, type 5, unk 4
    WORD field2E; // size 2, type 5, unk 4
    WORD field30; // size 2, type 5, unk 4
    WORD field32; // size 2, type 5, unk 4
    WORD field34; // size 2, type 5, unk 4
    WORD field36; // size 2, type 5, unk 4
    WORD field38; // size 2, type 5, unk 4
    BYTE field3A; // size 1, type 4, unk 0
    BYTE field3B; // size 1, type 4, unk 0
};

struct SpellXSpellVisualRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    float field08; // size 4, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
};

struct StationeryRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct StringLookupsRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct SummonPropertiesRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
};

struct TactKeyRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04[16]; // size 16, type 4, unk 4
};

struct TactKeyLookupRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04[8]; // size 8, type 4, unk 4
};

struct TaxiNodesRec // sizeof(0x2C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[3]; // size 12, type 3, unk 0
    char* field10; // size 4, type 2, unk 8
    DWORD field14[2]; // size 8, type 0, unk 0
    float field1C[2]; // size 8, type 3, unk 0
    WORD field24; // size 2, type 5, unk 4
    WORD field26; // size 2, type 5, unk 4
    WORD field28; // size 2, type 5, unk 4
    BYTE field2A; // size 1, type 4, unk 4
};

struct TaxiPathRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
};

struct TaxiPathNodeRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[3]; // size 12, type 3, unk 0
    DWORD field10; // size 4, type 0, unk 4
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    BYTE field1C; // size 1, type 4, unk 4
    BYTE field1D; // size 1, type 4, unk 4
};

struct TerrainTypeSoundsRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct TextureFileDataRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct TotemCategoryRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct ToyRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    char* field08; // size 4, type 2, unk 8
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 0
};

struct TradeSkillCategoryRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 4
};

struct TradeSkillItemRec // sizeof(0x2)
{
    WORD field00; // size 2, type 5, unk 4
};

struct TransformMatrixRec // sizeof(0x1C)
{
    float field00[3]; // size 12, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
};

struct TransportAnimationRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    float field08[3]; // size 12, type 3, unk 0
    BYTE field14; // size 1, type 4, unk 4
};

struct TransportPhysicsRec // sizeof(0x28)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
};

struct TransportRotationRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 4
    float field08[4]; // size 16, type 3, unk 0
};

struct TrophyRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
};

struct UiCamFbackTransmogChrRaceRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct UiCamFbackTransmogWeaponRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct UiCameraRec // sizeof(0x30)
{
    char* field00; // size 4, type 2, unk 0
    float field04[3]; // size 12, type 3, unk 0
    float field10[3]; // size 12, type 3, unk 0
    float field1C[3]; // size 12, type 3, unk 0
    WORD field28; // size 2, type 5, unk 0
    WORD field2A; // size 2, type 5, unk 0
    BYTE field2C; // size 1, type 4, unk 4
    BYTE field2D; // size 1, type 4, unk 0
    BYTE field2E; // size 1, type 4, unk 4
};

struct UiCameraTypeRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct UiTextureAtlasRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
};

struct UiTextureAtlasMemberRec // sizeof(0x20)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    DWORD field08; // size 4, type 0, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    DWORD field14; // size 4, type 0, unk 0
    DWORD field18; // size 4, type 0, unk 0
    WORD field1C; // size 2, type 5, unk 4
    BYTE field1E; // size 1, type 4, unk 4
};

struct UiTextureKitRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct UnitBloodRec // sizeof(0x20)
{
    char* field00[5]; // size 20, type 2, unk 0
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    BYTE field1A; // size 1, type 4, unk 4
    BYTE field1B; // size 1, type 4, unk 4
    BYTE field1C; // size 1, type 4, unk 4
};

struct UnitBloodLevelsRec // sizeof(0x3)
{
    BYTE field00[3]; // size 3, type 4, unk 4
};

struct UnitConditionRec // sizeof(0x34)
{
    DWORD field00[8]; // size 32, type 0, unk 0
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21[8]; // size 8, type 4, unk 4
    BYTE field29[8]; // size 8, type 4, unk 0
};

struct UnitPowerBarRec // sizeof(0x5C)
{
    DWORD field00; // size 4, type 0, unk 4
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    DWORD field0C[6]; // size 24, type 0, unk 0
    DWORD field24[6]; // size 24, type 0, unk 0
    char* field3C; // size 4, type 2, unk 8
    char* field40; // size 4, type 2, unk 8
    char* field44; // size 4, type 2, unk 8
    char* field48; // size 4, type 2, unk 8
    float field4C; // size 4, type 3, unk 0
    float field50; // size 4, type 3, unk 0
    WORD field54; // size 2, type 5, unk 4
    WORD field56; // size 2, type 5, unk 4
    BYTE field58; // size 1, type 4, unk 4
    BYTE field59; // size 1, type 4, unk 4
    BYTE field5A; // size 1, type 4, unk 4
};

struct VehicleSeatRec // sizeof(0xC8)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
    float field0C[3]; // size 12, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    float field30; // size 4, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    float field40; // size 4, type 3, unk 0
    float field44; // size 4, type 3, unk 0
    float field48; // size 4, type 3, unk 0
    float field4C; // size 4, type 3, unk 0
    float field50; // size 4, type 3, unk 0
    float field54; // size 4, type 3, unk 0
    float field58; // size 4, type 3, unk 0
    float field5C; // size 4, type 3, unk 0
    float field60; // size 4, type 3, unk 0
    float field64; // size 4, type 3, unk 0
    float field68; // size 4, type 3, unk 0
    float field6C; // size 4, type 3, unk 0
    float field70; // size 4, type 3, unk 0
    float field74[3]; // size 12, type 3, unk 0
    float field80; // size 4, type 3, unk 0
    float field84; // size 4, type 3, unk 0
    float field88; // size 4, type 3, unk 0
    float field8C; // size 4, type 3, unk 0
    float field90; // size 4, type 3, unk 0
    DWORD field94; // size 4, type 0, unk 0
    WORD field98; // size 2, type 5, unk 0
    WORD field9A; // size 2, type 5, unk 0
    WORD field9C; // size 2, type 5, unk 0
    WORD field9E; // size 2, type 5, unk 0
    WORD fieldA0; // size 2, type 5, unk 0
    WORD fieldA2; // size 2, type 5, unk 0
    WORD fieldA4; // size 2, type 5, unk 0
    WORD fieldA6; // size 2, type 5, unk 0
    WORD fieldA8; // size 2, type 5, unk 0
    WORD fieldAA; // size 2, type 5, unk 0
    WORD fieldAC; // size 2, type 5, unk 0
    WORD fieldAE; // size 2, type 5, unk 0
    WORD fieldB0; // size 2, type 5, unk 0
    WORD fieldB2; // size 2, type 5, unk 0
    WORD fieldB4; // size 2, type 5, unk 0
    WORD fieldB6; // size 2, type 5, unk 0
    WORD fieldB8; // size 2, type 5, unk 0
    WORD fieldBA; // size 2, type 5, unk 0
    WORD fieldBC; // size 2, type 5, unk 0
    WORD fieldBE; // size 2, type 5, unk 0
    WORD fieldC0; // size 2, type 5, unk 0
    BYTE fieldC2; // size 1, type 4, unk 0
    BYTE fieldC3; // size 1, type 4, unk 0
    BYTE fieldC4; // size 1, type 4, unk 0
    BYTE fieldC5; // size 1, type 4, unk 0
    BYTE fieldC6; // size 1, type 4, unk 0
    BYTE fieldC7; // size 1, type 4, unk 0
};

struct VehicleUIIndSeatRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct VehicleUIIndicatorRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct VignetteRec // sizeof(0x18)
{
    char* field00; // size 4, type 2, unk 8
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    DWORD field0C; // size 4, type 0, unk 0
    DWORD field10; // size 4, type 0, unk 0
    BYTE field14; // size 1, type 4, unk 4
    BYTE field15; // size 1, type 4, unk 4
};

struct VocalUISoundsRec // sizeof(0x8)
{
    WORD field00[2]; // size 4, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct WbAccessControlListRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    BYTE field06; // size 1, type 4, unk 4
    BYTE field07; // size 1, type 4, unk 4
    BYTE field08; // size 1, type 4, unk 4
};

struct WbCertBlacklistRec // sizeof(0x18)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04[20]; // size 20, type 4, unk 4
};

struct WbCertWhitelistRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct WbPermissionsRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct WeaponImpactSoundsRec // sizeof(0x5C)
{
    WORD field00[11]; // size 22, type 5, unk 4
    WORD field16[11]; // size 22, type 5, unk 4
    WORD field2C[11]; // size 22, type 5, unk 4
    WORD field42[11]; // size 22, type 5, unk 4
    BYTE field58; // size 1, type 4, unk 4
    BYTE field59; // size 1, type 4, unk 4
    BYTE field5A; // size 1, type 4, unk 4
};

struct WeaponSwingSounds2Rec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct WeaponTrailRec // sizeof(0x4C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    DWORD field10[3]; // size 12, type 0, unk 0
    float field1C[3]; // size 12, type 3, unk 0
    float field28[3]; // size 12, type 3, unk 0
    float field34[3]; // size 12, type 3, unk 0
    float field40[3]; // size 12, type 3, unk 0
};

struct WeaponTrailModelDefRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct WeaponTrailParamRec // sizeof(0x1C)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    WORD field14; // size 2, type 5, unk 4
    BYTE field16; // size 1, type 4, unk 4
    BYTE field17; // size 1, type 4, unk 4
    BYTE field18; // size 1, type 4, unk 4
    BYTE field19; // size 1, type 4, unk 4
};

struct WmoMinimapTextureRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 0
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct WorldBossLockoutRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    WORD field04; // size 2, type 5, unk 4
};

struct WorldChunkSoundsRec // sizeof(0x8)
{
    WORD field00; // size 2, type 5, unk 4
    BYTE field02; // size 1, type 4, unk 4
    BYTE field03; // size 1, type 4, unk 4
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
    BYTE field06; // size 1, type 4, unk 4
};

struct WorldEffectRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct WorldElapsedTimerRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 8
    BYTE field04; // size 1, type 4, unk 4
    BYTE field05; // size 1, type 4, unk 4
};

struct WorldMapContinentRec // sizeof(0x28)
{
    float field00[2]; // size 8, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C[2]; // size 8, type 3, unk 0
    float field14[2]; // size 8, type 3, unk 0
    WORD field1C; // size 2, type 5, unk 0
    WORD field1E; // size 2, type 5, unk 4
    BYTE field20; // size 1, type 4, unk 4
    BYTE field21; // size 1, type 4, unk 4
    BYTE field22; // size 1, type 4, unk 4
    BYTE field23; // size 1, type 4, unk 4
    BYTE field24; // size 1, type 4, unk 4
};

struct WorldMapOverlayRec // sizeof(0x20)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06[4]; // size 8, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    WORD field10; // size 2, type 5, unk 4
    WORD field12; // size 2, type 5, unk 4
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 4
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
};

struct WorldMapTransformsRec // sizeof(0x30)
{
    float field00[6]; // size 24, type 3, unk 0
    float field18[2]; // size 8, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    WORD field24; // size 2, type 5, unk 4
    WORD field26; // size 2, type 5, unk 4
    WORD field28; // size 2, type 5, unk 4
    WORD field2A; // size 2, type 5, unk 4
    BYTE field2C; // size 1, type 4, unk 4
};

struct WorldStateExpressionRec // sizeof(0x4)
{
    char* field00; // size 4, type 2, unk 0
};

struct WorldStateUIRec // sizeof(0x30)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    char* field08; // size 4, type 2, unk 0
    char* field0C; // size 4, type 2, unk 0
    char* field10; // size 4, type 2, unk 8
    char* field14; // size 4, type 2, unk 8
    char* field18; // size 4, type 2, unk 8
    WORD field1C; // size 2, type 5, unk 0
    WORD field1E; // size 2, type 5, unk 4
    WORD field20; // size 2, type 5, unk 4
    WORD field22; // size 2, type 5, unk 4
    WORD field24[3]; // size 6, type 5, unk 4
    BYTE field2A; // size 1, type 4, unk 4
    BYTE field2B; // size 1, type 4, unk 4
    BYTE field2C; // size 1, type 4, unk 4
    BYTE field2D; // size 1, type 4, unk 4
};

struct WorldStateZoneSoundsRec // sizeof(0x14)
{
    DWORD field00; // size 4, type 0, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 4
    WORD field0A; // size 2, type 5, unk 4
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 4
};

struct World_PVP_AreaRec // sizeof(0xC)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct ZoneIntroMusicTableRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
};

struct ZoneMusicRec // sizeof(0x18)
{
    char* field00; // size 4, type 2, unk 0
    DWORD field04[2]; // size 8, type 0, unk 4
    DWORD field0C[2]; // size 8, type 0, unk 4
    WORD field14[2]; // size 4, type 5, unk 4
};

struct AreaTableRec // sizeof(0x38)
{
    DWORD field00[2]; // size 8, type 0, unk 0
    char* field08; // size 4, type 2, unk 0
    float field0C; // size 4, type 3, unk 0
    char* field10; // size 4, type 2, unk 8
    WORD field14; // size 2, type 5, unk 4
    WORD field16; // size 2, type 5, unk 4
    WORD field18; // size 2, type 5, unk 0
    WORD field1A; // size 2, type 5, unk 4
    WORD field1C; // size 2, type 5, unk 4
    WORD field1E; // size 2, type 5, unk 4
    WORD field20[4]; // size 8, type 5, unk 4
    WORD field28; // size 2, type 5, unk 4
    WORD field2A; // size 2, type 5, unk 4
    WORD field2C; // size 2, type 5, unk 0
    BYTE field2E; // size 1, type 4, unk 4
    BYTE field2F; // size 1, type 4, unk 4
    BYTE field30; // size 1, type 4, unk 0
    BYTE field31; // size 1, type 4, unk 4
    BYTE field32; // size 1, type 4, unk 4
    BYTE field33; // size 1, type 4, unk 4
    BYTE field34; // size 1, type 4, unk 4
    BYTE field35; // size 1, type 4, unk 4
    BYTE field36; // size 1, type 4, unk 4
};

struct DeviceBlacklistRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct DeviceDefaultSettingsRec // sizeof(0x6)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
    BYTE field04; // size 1, type 4, unk 4
};

struct DriverBlacklistRec // sizeof(0x10)
{
    DWORD field00; // size 4, type 0, unk 4
    DWORD field04; // size 4, type 0, unk 4
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
};

struct FootprintTexturesRec // sizeof(0x8)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
};

struct FullScreenEffectRec // sizeof(0x9C)
{
    DWORD field00; // size 4, type 0, unk 4
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    float field30; // size 4, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    float field40; // size 4, type 3, unk 0
    float field44; // size 4, type 3, unk 0
    float field48; // size 4, type 3, unk 0
    float field4C; // size 4, type 3, unk 0
    DWORD field50; // size 4, type 0, unk 4
    DWORD field54; // size 4, type 0, unk 4
    float field58; // size 4, type 3, unk 0
    float field5C; // size 4, type 3, unk 0
    float field60; // size 4, type 3, unk 0
    float field64; // size 4, type 3, unk 0
    float field68; // size 4, type 3, unk 0
    float field6C; // size 4, type 3, unk 0
    float field70; // size 4, type 3, unk 0
    float field74; // size 4, type 3, unk 0
    float field78; // size 4, type 3, unk 0
    float field7C; // size 4, type 3, unk 0
    float field80; // size 4, type 3, unk 0
    float field84; // size 4, type 3, unk 0
    float field88; // size 4, type 3, unk 0
    float field8C; // size 4, type 3, unk 0
    DWORD field90; // size 4, type 0, unk 4
    DWORD field94; // size 4, type 0, unk 4
    BYTE field98; // size 1, type 4, unk 4
};

struct GroundEffectDoodadRec // sizeof(0x10)
{
    char* field00; // size 4, type 2, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    BYTE field0C; // size 1, type 4, unk 4
};

struct GroundEffectTextureRec // sizeof(0xE)
{
    WORD field00[4]; // size 8, type 5, unk 4
    BYTE field08[4]; // size 4, type 4, unk 4
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
};

struct LightParamsRec // sizeof(0x2C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18[3]; // size 12, type 3, unk 0
    WORD field24; // size 2, type 5, unk 4
    BYTE field26; // size 1, type 4, unk 4
    BYTE field27; // size 1, type 4, unk 4
    BYTE field28; // size 1, type 4, unk 0
};

struct LightSkyboxRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    BYTE field04; // size 1, type 4, unk 4
};

struct LiquidMaterialRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    DWORD field08; // size 4, type 0, unk 0
};

struct LiquidObjectRec // sizeof(0xC)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    WORD field08; // size 2, type 5, unk 0
    BYTE field0A; // size 1, type 4, unk 4
    BYTE field0B; // size 1, type 4, unk 4
};

struct MapRec // sizeof(0x40)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    DWORD field08[2]; // size 8, type 0, unk 0
    float field10; // size 4, type 3, unk 0
    float field14[2]; // size 8, type 3, unk 0
    DWORD field1C; // size 4, type 0, unk 4
    char* field20; // size 4, type 2, unk 8
    char* field24; // size 4, type 2, unk 8
    char* field28; // size 4, type 2, unk 8
    WORD field2C; // size 2, type 5, unk 4
    WORD field2E; // size 2, type 5, unk 0
    WORD field30; // size 2, type 5, unk 0
    WORD field32; // size 2, type 5, unk 0
    WORD field34; // size 2, type 5, unk 0
    WORD field36; // size 2, type 5, unk 0
    BYTE field38; // size 1, type 4, unk 4
    BYTE field39; // size 1, type 4, unk 4
    BYTE field3A; // size 1, type 4, unk 4
    BYTE field3B; // size 1, type 4, unk 4
    BYTE field3C; // size 1, type 4, unk 4
};

struct ModelFileDataRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    DWORD field04; // size 4, type 0, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct SoundBusRec // sizeof(0x18)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    BYTE field0C; // size 1, type 4, unk 4
    BYTE field0D; // size 1, type 4, unk 4
    BYTE field0E; // size 1, type 4, unk 4
    BYTE field0F; // size 1, type 4, unk 4
    BYTE field10; // size 1, type 4, unk 4
    BYTE field11; // size 1, type 4, unk 4
    BYTE field12; // size 1, type 4, unk 4
    BYTE field13; // size 1, type 4, unk 4
    BYTE field14; // size 1, type 4, unk 4
};

struct SoundEmitterPillPointsRec // sizeof(0x10)
{
    float field00[3]; // size 12, type 3, unk 0
    WORD field0C; // size 2, type 5, unk 4
};

struct SoundEmittersRec // sizeof(0x2C)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04[3]; // size 12, type 3, unk 0
    float field10[3]; // size 12, type 3, unk 0
    char* field1C; // size 4, type 2, unk 0
    WORD field20; // size 2, type 5, unk 4
    WORD field22; // size 2, type 5, unk 4
    WORD field24; // size 2, type 5, unk 0
    WORD field26; // size 2, type 5, unk 4
    BYTE field28; // size 1, type 4, unk 4
    BYTE field29; // size 1, type 4, unk 4
    BYTE field2A; // size 1, type 4, unk 4
    BYTE field2B; // size 1, type 4, unk 4
};

struct SoundKitAdvancedRec // sizeof(0x60)
{
    float field00; // size 4, type 3, unk 0
    DWORD field04; // size 4, type 0, unk 4
    DWORD field08; // size 4, type 0, unk 4
    DWORD field0C; // size 4, type 0, unk 4
    DWORD field10; // size 4, type 0, unk 4
    DWORD field14; // size 4, type 0, unk 4
    DWORD field18; // size 4, type 0, unk 4
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    DWORD field30; // size 4, type 0, unk 4
    DWORD field34; // size 4, type 0, unk 4
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    float field40; // size 4, type 3, unk 0
    float field44; // size 4, type 3, unk 0
    float field48; // size 4, type 3, unk 0
    float field4C; // size 4, type 3, unk 0
    DWORD field50; // size 4, type 0, unk 0
    WORD field54; // size 2, type 5, unk 4
    WORD field56; // size 2, type 5, unk 4
    WORD field58; // size 2, type 5, unk 4
    BYTE field5A; // size 1, type 4, unk 4
    BYTE field5B; // size 1, type 4, unk 4
    BYTE field5C; // size 1, type 4, unk 4
};

struct SoundKitChildRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct SoundKitRec // sizeof(0x34)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    WORD field28; // size 2, type 5, unk 4
    WORD field2A; // size 2, type 5, unk 4
    BYTE field2C; // size 1, type 4, unk 4
    BYTE field2D; // size 1, type 4, unk 4
    BYTE field2E; // size 1, type 4, unk 4
    BYTE field2F; // size 1, type 4, unk 4
    BYTE field30; // size 1, type 4, unk 4
};

struct SoundKitEntryRec // sizeof(0xC)
{
    DWORD field00; // size 4, type 0, unk 0
    float field04; // size 4, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

struct SoundKitFallbackRec // sizeof(0x4)
{
    WORD field00; // size 2, type 5, unk 4
    WORD field02; // size 2, type 5, unk 4
};

struct SpellChainEffectsRec // sizeof(0x108)
{
    float field00; // size 4, type 3, unk 0
    float field04; // size 4, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C; // size 4, type 3, unk 0
    DWORD field10; // size 4, type 0, unk 4
    DWORD field14; // size 4, type 0, unk 4
    float field18; // size 4, type 3, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    float field30; // size 4, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    float field38; // size 4, type 3, unk 0
    float field3C; // size 4, type 3, unk 0
    float field40; // size 4, type 3, unk 0
    float field44; // size 4, type 3, unk 0
    float field48; // size 4, type 3, unk 0
    float field4C; // size 4, type 3, unk 0
    float field50; // size 4, type 3, unk 0
    float field54; // size 4, type 3, unk 0
    float field58; // size 4, type 3, unk 0
    float field5C; // size 4, type 3, unk 0
    float field60; // size 4, type 3, unk 0
    float field64; // size 4, type 3, unk 0
    float field68; // size 4, type 3, unk 0
    float field6C; // size 4, type 3, unk 0
    float field70; // size 4, type 3, unk 0
    float field74; // size 4, type 3, unk 0
    float field78; // size 4, type 3, unk 0
    float field7C; // size 4, type 3, unk 0
    float field80; // size 4, type 3, unk 0
    float field84; // size 4, type 3, unk 0
    float field88; // size 4, type 3, unk 0
    float field8C; // size 4, type 3, unk 0
    float field90; // size 4, type 3, unk 0
    float field94[3]; // size 12, type 3, unk 0
    float fieldA0[3]; // size 12, type 3, unk 0
    float fieldAC[3]; // size 12, type 3, unk 0
    float fieldB8[3]; // size 12, type 3, unk 0
    DWORD fieldC4; // size 4, type 0, unk 4
    float fieldC8; // size 4, type 3, unk 0
    float fieldCC; // size 4, type 3, unk 0
    char* fieldD0[3]; // size 12, type 2, unk 0
    char* fieldDC; // size 4, type 2, unk 0
    WORD fieldE0; // size 2, type 5, unk 4
    WORD fieldE2; // size 2, type 5, unk 4
    WORD fieldE4[11]; // size 22, type 5, unk 4
    WORD fieldFA; // size 2, type 5, unk 4
    BYTE fieldFC; // size 1, type 4, unk 4
    BYTE fieldFD; // size 1, type 4, unk 4
    BYTE fieldFE; // size 1, type 4, unk 4
    BYTE fieldFF; // size 1, type 4, unk 4
    BYTE field100; // size 1, type 4, unk 4
    BYTE field101; // size 1, type 4, unk 4
    BYTE field102; // size 1, type 4, unk 4
    BYTE field103; // size 1, type 4, unk 4
    BYTE field104; // size 1, type 4, unk 4
    BYTE field105; // size 1, type 4, unk 4
    BYTE field106; // size 1, type 4, unk 4
    BYTE field107; // size 1, type 4, unk 4
};

struct TerrainMaterialRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    char* field04; // size 4, type 2, unk 0
    BYTE field08; // size 1, type 4, unk 4
};

struct TerrainTypeRec // sizeof(0xC)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
    BYTE field08; // size 1, type 4, unk 4
    BYTE field09; // size 1, type 4, unk 4
};

struct TextureBlendSetRec // sizeof(0x3C)
{
    DWORD field00[3]; // size 12, type 0, unk 0
    float field0C[3]; // size 12, type 3, unk 0
    float field18[3]; // size 12, type 3, unk 0
    float field24[3]; // size 12, type 3, unk 0
    float field30[3]; // size 12, type 3, unk 0
};

struct VideoHardwareRec // sizeof(0x24)
{
    DWORD field00; // size 4, type 0, unk 0
    char* field04; // size 4, type 2, unk 0
    char* field08; // size 4, type 2, unk 0
    WORD field0C; // size 2, type 5, unk 4
    WORD field0E; // size 2, type 5, unk 4
    BYTE field10; // size 1, type 4, unk 0
    BYTE field11; // size 1, type 4, unk 0
    BYTE field12; // size 1, type 4, unk 0
    BYTE field13; // size 1, type 4, unk 0
    BYTE field14; // size 1, type 4, unk 0
    BYTE field15; // size 1, type 4, unk 0
    BYTE field16; // size 1, type 4, unk 0
    BYTE field17; // size 1, type 4, unk 0
    BYTE field18; // size 1, type 4, unk 0
    BYTE field19; // size 1, type 4, unk 0
    BYTE field1A; // size 1, type 4, unk 0
    BYTE field1B; // size 1, type 4, unk 0
    BYTE field1C; // size 1, type 4, unk 0
    BYTE field1D; // size 1, type 4, unk 0
    BYTE field1E; // size 1, type 4, unk 0
    BYTE field1F; // size 1, type 4, unk 0
    BYTE field20; // size 1, type 4, unk 0
};

struct WeatherRec // sizeof(0x38)
{
    float field00[2]; // size 8, type 3, unk 0
    float field08; // size 4, type 3, unk 0
    float field0C[3]; // size 12, type 3, unk 0
    char* field18; // size 4, type 2, unk 0
    float field1C; // size 4, type 3, unk 0
    float field20; // size 4, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28; // size 4, type 3, unk 0
    float field2C; // size 4, type 3, unk 0
    WORD field30; // size 2, type 5, unk 4
    WORD field32; // size 2, type 5, unk 4
    BYTE field34; // size 1, type 4, unk 4
    BYTE field35; // size 1, type 4, unk 4
    BYTE field36; // size 1, type 4, unk 4
};

struct WindSettingsRec // sizeof(0x40)
{
    float field00; // size 4, type 3, unk 0
    float field04[3]; // size 12, type 3, unk 0
    float field10; // size 4, type 3, unk 0
    float field14; // size 4, type 3, unk 0
    float field18[3]; // size 12, type 3, unk 0
    float field24; // size 4, type 3, unk 0
    float field28[3]; // size 12, type 3, unk 0
    float field34; // size 4, type 3, unk 0
    float field38; // size 4, type 3, unk 0
    BYTE field3C; // size 1, type 4, unk 4
};

struct ZoneLightRec // sizeof(0x8)
{
    char* field00; // size 4, type 2, unk 0
    WORD field04; // size 2, type 5, unk 4
    WORD field06; // size 2, type 5, unk 4
};

struct ZoneLightPointRec // sizeof(0xC)
{
    float field00[2]; // size 8, type 3, unk 0
    WORD field08; // size 2, type 5, unk 4
    BYTE field0A; // size 1, type 4, unk 4
};

