// Achievement: 15 fields, flags 0, hash D2EE2CA7
struct AchievementRec // sizeof(0x25)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 0
    char* field0C; // size 1, type 2, flag 8
    WORD field10; // size 1, type 5, flag 0
    WORD field12; // size 1, type 5, flag 0
    WORD field14; // size 1, type 5, flag 0
    WORD field16; // size 1, type 5, flag 0
    WORD field18; // size 1, type 5, flag 0
    WORD field1A; // size 1, type 5, flag 0
    WORD field1C; // size 1, type 5, flag 4
    BYTE field1E; // size 1, type 4, flag 0
    BYTE field1F; // size 1, type 4, flag 0
    BYTE field20; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// Achievement_Category: 4 fields, flags 0, hash 231B414D
struct Achievement_CategoryRec // sizeof(0xB)
{
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 0
    BYTE field06; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// AdventureJournal: 22 fields, flags 0, hash 8EEF1A97
struct AdventureJournalRec // sizeof(0x34)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    char* field14; // size 1, type 2, flag 8
    char* field18; // size 1, type 2, flag 8
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    WORD field20; // size 1, type 5, flag 4
    WORD field22[2]; // size 2, type 5, flag 4
    WORD field26; // size 1, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    BYTE field2A; // size 1, type 4, flag 4
    BYTE field2B; // size 1, type 4, flag 4
    BYTE field2C; // size 1, type 4, flag 4
    BYTE field2D; // size 1, type 4, flag 4
    BYTE field2E; // size 1, type 4, flag 4
    BYTE field2F; // size 1, type 4, flag 4
    BYTE field30[2]; // size 2, type 4, flag 4
    BYTE field32; // size 1, type 4, flag 4
    BYTE field33; // size 1, type 4, flag 4
};

// AdventureMapPOI: 13 fields, flags 0, hash 6275EEF7
struct AdventureMapPOIRec // sizeof(0x35)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    DWORD field08; // size 1, type 0, flag 0
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    BYTE field14; // size 1, type 4, flag 0
    DWORD field15; // size 1, type 0, flag 6
    DWORD field19; // size 1, type 0, flag 6
    DWORD field1D; // size 1, type 0, flag 6
    DWORD field21; // size 1, type 0, flag 6
    DWORD field25; // size 1, type 0, flag 6
    DWORD field29; // size 1, type 0, flag 6
    DWORD field2D; // size 1, type 0, flag 6
    DWORD field31; // size 1, type 0, flag 6
};

// AnimKitBoneSetAlias: 2 fields, flags 0, hash 37804DEA
struct AnimKitBoneSetAliasRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
};

// AnimKitBoneSet: 5 fields, flags 0, hash A88C80F8
struct AnimKitBoneSetRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 0
    BYTE field05; // size 1, type 4, flag 0
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 0
};

// AnimKitConfigBoneSet: 3 fields, flags 0, hash 5D9F4EB1
struct AnimKitConfigBoneSetRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// AnimKitConfig: 1 fields, flags 0, hash 141DB817
struct AnimKitConfigRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
};

// AnimKit: 3 fields, flags 0, hash B3AF6ECA
struct AnimKitRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// AnimKitPriority: 1 fields, flags 0, hash 51FD492D
struct AnimKitPriorityRec // sizeof(0x1)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
};

// AnimKitSegment: 16 fields, flags 0, hash 3E988108
struct AnimKitSegmentRec // sizeof(0x25)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 4
    float field0C; // size 1, type 3, flag 0
    DWORD field10; // size 1, type 0, flag 4
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 4
    BYTE field1A; // size 1, type 4, flag 4
    BYTE field1B; // size 1, type 4, flag 4
    BYTE field1C; // size 1, type 4, flag 4
    BYTE field1D; // size 1, type 4, flag 4
    BYTE field1E; // size 1, type 4, flag 4
    BYTE field1F; // size 1, type 4, flag 4
    BYTE field20; // size 1, type 4, flag 0
    DWORD field21; // size 1, type 0, flag 6
};

// AnimReplacement: 4 fields, flags 0, hash 536AA9E9
struct AnimReplacementRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// AnimReplacementSet: 1 fields, flags 0, hash E970BB7B
struct AnimReplacementSetRec // sizeof(0x1)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
};

// AreaGroupMember: 2 fields, flags 0, hash 9626FB2
struct AreaGroupMemberRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// AreaPOI: 13 fields, flags 0, hash DF3F054A
struct AreaPOIRec // sizeof(0x23)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 0
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 4
    WORD field1A; // size 1, type 5, flag 4
    BYTE field1C; // size 1, type 4, flag 4
    BYTE field1D; // size 1, type 4, flag 4
    BYTE field1E; // size 1, type 4, flag 4
    DWORD field1F; // size 1, type 0, flag 6
};

// AreaPOIState: 5 fields, flags 0, hash 49EFF4C0
struct AreaPOIStateRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    DWORD field08; // size 1, type 0, flag 6
};

// AreaTriggerActionSet: 1 fields, flags 0, hash 5C4BBB1F
struct AreaTriggerActionSetRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
};

// AreaTriggerBox: 1 fields, flags 0, hash 490CDD72
struct AreaTriggerBoxRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
};

// AreaTriggerCylinder: 3 fields, flags 0, hash AC92E4AD
struct AreaTriggerCylinderRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
};

// AreaTrigger: 15 fields, flags 0, hash 1A5081E1
struct AreaTriggerRec // sizeof(0x31)
{
    float field00[3]; // size 3, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    WORD field20; // size 1, type 5, flag 0
    WORD field22; // size 1, type 5, flag 0
    WORD field24; // size 1, type 5, flag 0
    WORD field26; // size 1, type 5, flag 0
    WORD field28; // size 1, type 5, flag 0
    BYTE field2A; // size 1, type 4, flag 0
    BYTE field2B; // size 1, type 4, flag 0
    BYTE field2C; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// AreaTriggerSphere: 1 fields, flags 0, hash 93073B25
struct AreaTriggerSphereRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
};

// ArmorLocation: 5 fields, flags 0, hash B1911544
struct ArmorLocationRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
};

// ArtifactAppearance: 15 fields, flags 0, hash ACE08AE7
struct ArtifactAppearanceRec // sizeof(0x2A)
{
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    DWORD field10; // size 1, type 0, flag 4
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 4
    BYTE field1A; // size 1, type 4, flag 4
    BYTE field1B; // size 1, type 4, flag 4
    BYTE field1C; // size 1, type 4, flag 4
    BYTE field1D; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field22; // size 1, type 0, flag 6
    DWORD field26; // size 1, type 0, flag 6
};

// ArtifactAppearanceSet: 8 fields, flags 0, hash E7121BA1
struct ArtifactAppearanceSetRec // sizeof(0x13)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
    BYTE field0E; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 6
};

// ArtifactCategory: 2 fields, flags 0, hash C572B485
struct ArtifactCategoryRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 0
};

// Artifact: 8 fields, flags 0, hash 165E45F
struct ArtifactRec // sizeof(0x16)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
};

// ArtifactPower: 6 fields, flags 0, hash F3AB984A
struct ArtifactPowerRec // sizeof(0x13)
{
    float field00[2]; // size 2, type 3, flag 0
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field0F; // size 1, type 0, flag 2
};

// ArtifactPowerLink: 2 fields, flags 0, hash 36787E77
struct ArtifactPowerLinkRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 5
    WORD field02; // size 1, type 5, flag 5
};

// ArtifactPowerRank: 5 fields, flags 0, hash 15E3C63B
struct ArtifactPowerRankRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 1
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    BYTE field0C; // size 1, type 4, flag 4
};

// ArtifactQuestXP: 1 fields, flags 0, hash CA31E679
struct ArtifactQuestXPRec // sizeof(0x28)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[10]; // size 10, type 0, flag 6
};

// ArtifactUnlock: 5 fields, flags 0, hash 57D1CB68
struct ArtifactUnlockRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    DWORD field06; // size 1, type 0, flag 6
};

// AuctionHouse: 4 fields, flags 0, hash B8F96456
struct AuctionHouseRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// BankBagSlotPrices: 1 fields, flags 0, hash DEEC5A60
struct BankBagSlotPricesRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
};

// BannedAddOns: 3 fields, flags 0, hash 3B7DA145
struct BannedAddOnsRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// BarberShopStyle: 8 fields, flags 0, hash 8F09B48B
struct BarberShopStyleRec // sizeof(0x14)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    float field08; // size 1, type 3, flag 0
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// BattlePetAbility: 7 fields, flags 0, hash CBA43BD7
struct BattlePetAbilityRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 4
    DWORD field10; // size 1, type 0, flag 6
};

// BattlePetAbilityEffect: 7 fields, flags 0, hash DD8B690E
struct BattlePetAbilityEffectRec // sizeof(0x19)
{
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08[6]; // size 6, type 5, flag 0
    BYTE field14; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// BattlePetAbilityState: 3 fields, flags 0, hash 3C556E43
struct BattlePetAbilityStateRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// BattlePetAbilityTurn: 6 fields, flags 0, hash ECD8ECDC
struct BattlePetAbilityTurnRec // sizeof(0xB)
{
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// BattlePetBreedQuality: 2 fields, flags 0, hash 1B5A4EA6
struct BattlePetBreedQualityRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// BattlePetBreedState: 3 fields, flags 0, hash 6AFB3206
struct BattlePetBreedStateRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
};

// BattlePetEffectProperties: 3 fields, flags 0, hash 63B4C4BA
struct BattlePetEffectPropertiesRec // sizeof(0x20)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00[6]; // size 6, type 2, flag 0
    WORD field18; // size 1, type 5, flag 4
    BYTE field1A[6]; // size 6, type 4, flag 4
};

// BattlePetNPCTeamMember: 1 fields, flags 0, hash F2059DFA
struct BattlePetNPCTeamMemberRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// BattlePetSpecies: 9 fields, flags 0, hash 6C93F9B1
struct BattlePetSpeciesRec // sizeof(0x1C)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// BattlePetSpeciesState: 3 fields, flags 0, hash 15D87DD0
struct BattlePetSpeciesStateRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// BattlePetSpeciesXAbility: 4 fields, flags 0, hash 44237314
struct BattlePetSpeciesXAbilityRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 0
};

// BattlePetState: 3 fields, flags 0, hash 8F447330
struct BattlePetStateRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// BattlePetVisual: 7 fields, flags 0, hash C3ADEB43
struct BattlePetVisualRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
};

// BattlemasterList: 15 fields, flags 0, hash 558D704E
struct BattlemasterListRec // sizeof(0x39)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    WORD field0C[16]; // size 16, type 5, flag 0
    WORD field2C; // size 1, type 5, flag 0
    WORD field2E; // size 1, type 5, flag 0
    BYTE field30; // size 1, type 4, flag 0
    BYTE field31; // size 1, type 4, flag 0
    BYTE field32; // size 1, type 4, flag 0
    BYTE field33; // size 1, type 4, flag 0
    BYTE field34; // size 1, type 4, flag 0
    BYTE field35; // size 1, type 4, flag 0
    BYTE field36; // size 1, type 4, flag 0
    BYTE field37; // size 1, type 4, flag 0
    BYTE field38; // size 1, type 4, flag 0
};

// Bounty: 4 fields, flags 0, hash 5B476B7C
struct BountyRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// BountySet: 2 fields, flags 0, hash CBD2A10A
struct BountySetRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// BroadcastText: 9 fields, flags 0, hash 21826BB
struct BroadcastTextRec // sizeof(0x24)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08[3]; // size 3, type 5, flag 4
    WORD field0E[3]; // size 3, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    DWORD field18[2]; // size 2, type 0, flag 6
    DWORD field20; // size 1, type 0, flag 2
};

// CameraEffect: 1 fields, flags 0, hash 4FA1379D
struct CameraEffectRec // sizeof(0x1)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
};

// CameraEffectEntry: 16 fields, flags 0, hash 9D41DE06
struct CameraEffectEntryRec // sizeof(0x2A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    WORD field20; // size 1, type 5, flag 4
    WORD field22; // size 1, type 5, flag 4
    BYTE field24; // size 1, type 4, flag 4
    BYTE field25; // size 1, type 4, flag 4
    BYTE field26; // size 1, type 4, flag 4
    BYTE field27; // size 1, type 4, flag 4
    BYTE field28; // size 1, type 4, flag 4
    BYTE field29; // size 1, type 4, flag 4
};

// CameraMode: 11 fields, flags 0, hash FD872EBD
struct CameraModeRec // sizeof(0x2B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
    float field0C[3]; // size 3, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    WORD field24; // size 1, type 5, flag 0
    BYTE field26; // size 1, type 4, flag 0
    BYTE field27; // size 1, type 4, flag 0
    BYTE field28; // size 1, type 4, flag 0
    BYTE field29; // size 1, type 4, flag 0
    BYTE field2A; // size 1, type 4, flag 0
};

// CameraShakes: 9 fields, flags 0, hash 48B883A1
struct CameraShakesRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    DWORD field14; // size 1, type 0, flag 6
};

// CastableRaidBuffs: 2 fields, flags 0, hash F7361166
struct CastableRaidBuffsRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
};

// Cfg_Categories: 5 fields, flags 0, hash C7ED797D
struct Cfg_CategoriesRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// Cfg_Configs: 4 fields, flags 0, hash 91F6599
struct Cfg_ConfigsRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// Cfg_Regions: 3 fields, flags 0, hash A77E7F0D
struct Cfg_RegionsRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04; // size 1, type 0, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// CharBaseInfo: 2 fields, flags 0, hash 3067A8F8
struct CharBaseInfoRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    BYTE field01; // size 1, type 4, flag 0
};

// CharBaseSection: 3 fields, flags 0, hash 5DA4CF6C
struct CharBaseSectionRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// CharComponentTextureLayouts: 2 fields, flags 0, hash A77C3E7B
struct CharComponentTextureLayoutsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 0
};

// CharComponentTextureSections: 7 fields, flags 0, hash FAA98CF5
struct CharComponentTextureSectionsRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 0
    WORD field04; // size 1, type 5, flag 0
    WORD field06; // size 1, type 5, flag 0
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 0
    BYTE field0A; // size 1, type 4, flag 4
};

// CharHairGeosets: 10 fields, flags 0, hash 11D3EE9C
struct CharHairGeosetsRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 0
    DWORD field0C; // size 1, type 0, flag 2
};

// CharSections: 7 fields, flags 0, hash 36304853
struct CharSectionsRec // sizeof(0x13)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[3]; // size 3, type 0, flag 0
    WORD field0C; // size 1, type 5, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 0
    BYTE field10; // size 1, type 4, flag 0
    BYTE field11; // size 1, type 4, flag 0
    BYTE field12; // size 1, type 4, flag 0
};

// CharShipmentContainer: 16 fields, flags 0, hash A7894FE7
struct CharShipmentContainerRec // sizeof(0x1F)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 4
    BYTE field1A; // size 1, type 4, flag 0
    DWORD field1B; // size 1, type 0, flag 6
};

// CharShipment: 8 fields, flags 0, hash B032B557
struct CharShipmentRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
};

// CharStartOutfit: 7 fields, flags 0, hash 7B41F581
struct CharStartOutfitRec // sizeof(0x69)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[24]; // size 24, type 0, flag 0
    DWORD field60; // size 1, type 0, flag 4
    BYTE field64; // size 1, type 4, flag 4
    BYTE field65; // size 1, type 4, flag 4
    BYTE field66; // size 1, type 4, flag 4
    BYTE field67; // size 1, type 4, flag 4
    BYTE field68; // size 1, type 4, flag 4
};

// CharTitles: 5 fields, flags 0, hash 85DF9E8E
struct CharTitlesRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 0
    BYTE field0C; // size 1, type 4, flag 0
};

// CharacterFaceBoneSet: 4 fields, flags 0, hash 4D62306F
struct CharacterFaceBoneSetRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// CharacterFacialHairStyles: 4 fields, flags 0, hash 212303C2
struct CharacterFacialHairStylesRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[5]; // size 5, type 0, flag 0
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
};

// CharacterLoadout: 3 fields, flags 0, hash E00A47FB
struct CharacterLoadoutRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 0
    BYTE field05; // size 1, type 4, flag 0
};

// CharacterLoadoutItem: 2 fields, flags 0, hash 65C39BA7
struct CharacterLoadoutItemRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
};

// ChatChannels: 4 fields, flags 0, hash CCFF87ED
struct ChatChannelsRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    BYTE field0C; // size 1, type 4, flag 0
};

// ChatProfanity: 2 fields, flags 0, hash 23F759C7
struct ChatProfanityRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 0
};

// ChrClassRaceSex: 6 fields, flags 0, hash 31DAFEBF
struct ChrClassRaceSexRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    BYTE field01; // size 1, type 4, flag 0
    BYTE field02; // size 1, type 4, flag 0
    DWORD field03; // size 1, type 0, flag 2
    DWORD field07; // size 1, type 0, flag 6
    DWORD field0B; // size 1, type 0, flag 6
};

// ChrClassTitle: 3 fields, flags 0, hash C0DC0837
struct ChrClassTitleRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
};

// ChrClassUIDisplay: 3 fields, flags 0, hash B0E2632B
struct ChrClassUIDisplayRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// ChrClassVillain: 3 fields, flags 0, hash 359587F6
struct ChrClassVillainRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// ChrClasses: 19 fields, flags 0, hash F5889D8C
struct ChrClassesRec // sizeof(0x31)
{
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 0
    DWORD field14; // size 1, type 0, flag 4
    DWORD field18; // size 1, type 0, flag 4
    DWORD field1C; // size 1, type 0, flag 4
    WORD field20; // size 1, type 5, flag 4
    WORD field22; // size 1, type 5, flag 4
    WORD field24; // size 1, type 5, flag 4
    BYTE field26; // size 1, type 4, flag 4
    BYTE field27; // size 1, type 4, flag 4
    BYTE field28; // size 1, type 4, flag 4
    BYTE field29; // size 1, type 4, flag 4
    BYTE field2A; // size 1, type 4, flag 4
    BYTE field2B; // size 1, type 4, flag 4
    BYTE field2C; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// ChrClassesXPowerTypes: 2 fields, flags 0, hash C0315ACF
struct ChrClassesXPowerTypesRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
};

// ChrRaces: 35 fields, flags 0, hash 53F1783C
struct ChrRacesRec // sizeof(0x78)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 0
    char* field08; // size 1, type 2, flag 0
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    char* field14; // size 1, type 2, flag 8
    char* field18[2]; // size 2, type 2, flag 0
    char* field20; // size 1, type 2, flag 0
    DWORD field24; // size 1, type 0, flag 0
    DWORD field28; // size 1, type 0, flag 0
    float field2C[3]; // size 3, type 3, flag 0
    float field38[3]; // size 3, type 3, flag 0
    DWORD field44; // size 1, type 0, flag 0
    WORD field48; // size 1, type 5, flag 0
    WORD field4A; // size 1, type 5, flag 0
    WORD field4C; // size 1, type 5, flag 4
    WORD field4E; // size 1, type 5, flag 4
    WORD field50; // size 1, type 5, flag 0
    WORD field52; // size 1, type 5, flag 0
    WORD field54; // size 1, type 5, flag 0
    WORD field56; // size 1, type 5, flag 0
    WORD field58; // size 1, type 5, flag 0
    BYTE field5A; // size 1, type 4, flag 0
    BYTE field5B; // size 1, type 4, flag 0
    BYTE field5C; // size 1, type 4, flag 0
    BYTE field5D; // size 1, type 4, flag 0
    BYTE field5E; // size 1, type 4, flag 0
    BYTE field5F; // size 1, type 4, flag 0
    BYTE field60; // size 1, type 4, flag 0
    BYTE field61; // size 1, type 4, flag 0
    BYTE field62; // size 1, type 4, flag 0
    BYTE field63; // size 1, type 4, flag 0
    DWORD field64; // size 1, type 0, flag 6
    DWORD field68; // size 1, type 0, flag 6
    DWORD field6C[3]; // size 3, type 0, flag 6
};

// ChrSpecialization: 14 fields, flags 0, hash A00F8E60
struct ChrSpecializationRec // sizeof(0x2B)
{
    DWORD field00[2]; // size 2, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    char* field14; // size 1, type 2, flag 0
    WORD field18; // size 1, type 5, flag 0
    BYTE field1A; // size 1, type 4, flag 0
    BYTE field1B; // size 1, type 4, flag 0
    BYTE field1C; // size 1, type 4, flag 0
    BYTE field1D; // size 1, type 4, flag 0
    BYTE field1E; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field23; // size 1, type 0, flag 6
    DWORD field27; // size 1, type 0, flag 2
};

// ChrUpgradeBucket: 3 fields, flags 0, hash DDBC25B7
struct ChrUpgradeBucketRec // sizeof(0x7)
{
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// ChrUpgradeBucketSpell: 2 fields, flags 0, hash C6426A90
struct ChrUpgradeBucketSpellRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// ChrUpgradeTier: 4 fields, flags 0, hash 99F5DC12
struct ChrUpgradeTierRec // sizeof(0xA)
{
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// CinematicCamera: 4 fields, flags 0, hash C2CEFDF9
struct CinematicCameraRec // sizeof(0x16)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    float field04[3]; // size 3, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    WORD field14; // size 1, type 5, flag 4
};

// CinematicSequences: 2 fields, flags 0, hash 55EC00F0
struct CinematicSequencesRec // sizeof(0x12)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02[8]; // size 8, type 5, flag 4
};

// CombatCondition: 11 fields, flags 0, hash 15F55B6D
struct CombatConditionRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06[2]; // size 2, type 5, flag 4
    WORD field0A[2]; // size 2, type 5, flag 4
    BYTE field0E[2]; // size 2, type 4, flag 4
    BYTE field10[2]; // size 2, type 4, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13[2]; // size 2, type 4, flag 4
    BYTE field15[2]; // size 2, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
};

// ComponentModelFileData: 4 fields, flags 0, hash BE6AED26
struct ComponentModelFileDataRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 0
};

// ComponentTextureFileData: 3 fields, flags 0, hash 82408B8D
struct ComponentTextureFileDataRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// Creature: 12 fields, flags 0, hash C9D6B6B3
struct CreatureRec // sizeof(0x44)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[3]; // size 3, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10[4]; // size 4, type 0, flag 0
    float field20[4]; // size 4, type 3, flag 0
    char* field30; // size 1, type 2, flag 8
    char* field34; // size 1, type 2, flag 8
    char* field38; // size 1, type 2, flag 8
    char* field3C; // size 1, type 2, flag 8
    BYTE field40; // size 1, type 4, flag 4
    BYTE field41; // size 1, type 4, flag 4
    BYTE field42; // size 1, type 4, flag 4
    BYTE field43; // size 1, type 4, flag 4
};

// CreatureDifficulty: 6 fields, flags 0, hash C9E0A749
struct CreatureDifficultyRec // sizeof(0x25)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[7]; // size 7, type 0, flag 0
    WORD field20; // size 1, type 5, flag 4
    BYTE field22; // size 1, type 4, flag 0
    BYTE field23; // size 1, type 4, flag 0
    BYTE field24; // size 1, type 4, flag 0
};

// CreatureDispXUiCamera: 2 fields, flags 0, hash 3B5B6503
struct CreatureDispXUiCameraRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
};

// CreatureDisplayInfoCond: 15 fields, flags 0, hash 1183FBF1
struct CreatureDisplayInfoCondRec // sizeof(0x4A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[2]; // size 2, type 0, flag 0
    DWORD field0C[2]; // size 2, type 0, flag 0
    DWORD field14[2]; // size 2, type 0, flag 0
    BYTE field1C; // size 1, type 4, flag 0
    BYTE field1D; // size 1, type 4, flag 0
    DWORD field1E; // size 1, type 0, flag 6
    DWORD field22; // size 1, type 0, flag 6
    DWORD field26; // size 1, type 0, flag 6
    DWORD field2A; // size 1, type 0, flag 6
    DWORD field2E; // size 1, type 0, flag 6
    DWORD field32; // size 1, type 0, flag 6
    DWORD field36; // size 1, type 0, flag 6
    DWORD field3A; // size 1, type 0, flag 2
    DWORD field3E[3]; // size 3, type 0, flag 2
};

// CreatureDisplayInfo: 21 fields, flags 0, hash BFDAF9F1
struct CreatureDisplayInfoRec // sizeof(0x3E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    DWORD field0C[3]; // size 3, type 0, flag 0
    char* field18; // size 1, type 2, flag 0
    DWORD field1C; // size 1, type 0, flag 0
    DWORD field20; // size 1, type 0, flag 0
    DWORD field24; // size 1, type 0, flag 0
    float field28; // size 1, type 3, flag 0
    WORD field2C; // size 1, type 5, flag 4
    WORD field2E; // size 1, type 5, flag 4
    WORD field30; // size 1, type 5, flag 4
    WORD field32; // size 1, type 5, flag 4
    WORD field34; // size 1, type 5, flag 4
    WORD field36; // size 1, type 5, flag 4
    BYTE field38; // size 1, type 4, flag 4
    BYTE field39; // size 1, type 4, flag 0
    BYTE field3A; // size 1, type 4, flag 4
    BYTE field3B; // size 1, type 4, flag 4
    BYTE field3C; // size 1, type 4, flag 0
    BYTE field3D; // size 1, type 4, flag 0
};

// CreatureDisplayInfoExtra: 12 fields, flags 0, hash 66A5C5B7
struct CreatureDisplayInfoExtraRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 0
    BYTE field0A; // size 1, type 4, flag 0
    BYTE field0B; // size 1, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 0
    BYTE field10[3]; // size 3, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 0
};

// CreatureDisplayInfoTrn: 4 fields, flags 0, hash FD09B803
struct CreatureDisplayInfoTrnRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    float field08; // size 1, type 3, flag 0
    WORD field0C; // size 1, type 5, flag 4
};

// CreatureFamily: 10 fields, flags 0, hash 369F469F
struct CreatureFamilyRec // sizeof(0x1A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 0
    WORD field10[2]; // size 2, type 5, flag 0
    WORD field14; // size 1, type 5, flag 0
    BYTE field16; // size 1, type 4, flag 0
    BYTE field17; // size 1, type 4, flag 0
    BYTE field18; // size 1, type 4, flag 0
    BYTE field19; // size 1, type 4, flag 0
};

// CreatureImmunities: 9 fields, flags 0, hash 211E2DEF
struct CreatureImmunitiesRec // sizeof(0x71)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[2]; // size 2, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    DWORD field0D; // size 1, type 0, flag 6
    DWORD field11[8]; // size 8, type 0, flag 6
    DWORD field31[16]; // size 16, type 0, flag 6
};

// CreatureModelData: 30 fields, flags 0, hash 7F695FA5
struct CreatureModelDataRec // sizeof(0x8C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C[6]; // size 6, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
    float field44; // size 1, type 3, flag 0
    float field48; // size 1, type 3, flag 0
    float field4C; // size 1, type 3, flag 0
    float field50; // size 1, type 3, flag 0
    float field54; // size 1, type 3, flag 0
    float field58; // size 1, type 3, flag 0
    DWORD field5C; // size 1, type 0, flag 6
    DWORD field60; // size 1, type 0, flag 6
    DWORD field64; // size 1, type 0, flag 6
    DWORD field68; // size 1, type 0, flag 6
    DWORD field6C; // size 1, type 0, flag 6
    DWORD field70; // size 1, type 0, flag 6
    DWORD field74; // size 1, type 0, flag 6
    DWORD field78; // size 1, type 0, flag 6
    DWORD field7C; // size 1, type 0, flag 6
    DWORD field80; // size 1, type 0, flag 6
    DWORD field84; // size 1, type 0, flag 6
    DWORD field88; // size 1, type 0, flag 6
};

// CreatureMovementInfo: 1 fields, flags 0, hash CF156785
struct CreatureMovementInfoRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
};

// CreatureSoundData: 37 fields, flags 0, hash 91C188C0
struct CreatureSoundDataRec // sizeof(0xAA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    DWORD field0A; // size 1, type 0, flag 6
    DWORD field0E; // size 1, type 0, flag 6
    DWORD field12; // size 1, type 0, flag 6
    DWORD field16; // size 1, type 0, flag 6
    DWORD field1A; // size 1, type 0, flag 6
    DWORD field1E; // size 1, type 0, flag 6
    DWORD field22; // size 1, type 0, flag 6
    DWORD field26; // size 1, type 0, flag 6
    DWORD field2A; // size 1, type 0, flag 6
    DWORD field2E; // size 1, type 0, flag 6
    DWORD field32; // size 1, type 0, flag 6
    DWORD field36; // size 1, type 0, flag 6
    DWORD field3A; // size 1, type 0, flag 6
    DWORD field3E[5]; // size 5, type 0, flag 6
    DWORD field52[4]; // size 4, type 0, flag 6
    DWORD field62; // size 1, type 0, flag 6
    DWORD field66; // size 1, type 0, flag 6
    DWORD field6A; // size 1, type 0, flag 6
    DWORD field6E; // size 1, type 0, flag 6
    DWORD field72; // size 1, type 0, flag 6
    DWORD field76; // size 1, type 0, flag 6
    DWORD field7A; // size 1, type 0, flag 6
    DWORD field7E; // size 1, type 0, flag 6
    DWORD field82; // size 1, type 0, flag 6
    DWORD field86; // size 1, type 0, flag 6
    DWORD field8A; // size 1, type 0, flag 6
    DWORD field8E; // size 1, type 0, flag 6
    DWORD field92; // size 1, type 0, flag 6
    DWORD field96; // size 1, type 0, flag 6
    DWORD field9A; // size 1, type 0, flag 6
    DWORD field9E; // size 1, type 0, flag 6
    DWORD fieldA2; // size 1, type 0, flag 6
    DWORD fieldA6; // size 1, type 0, flag 6
};

// CreatureType: 2 fields, flags 0, hash 1F80AD3F
struct CreatureTypeRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
};

// Criteria: 11 fields, flags 0, hash EF23DC80
struct CriteriaRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    WORD field10; // size 1, type 5, flag 0
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 0
};

// CriteriaTree: 7 fields, flags 0, hash 4AD4429C
struct CriteriaTreeRec // sizeof(0x15)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 0
    BYTE field10; // size 1, type 4, flag 0
    DWORD field11; // size 1, type 0, flag 2
};

// CriteriaTreeXEffect: 2 fields, flags 0, hash E85A9D09
struct CriteriaTreeXEffectRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 0
};

// CurrencyCategory: 3 fields, flags 0, hash D3C46981
struct CurrencyCategoryRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// CurrencyTypes: 10 fields, flags 0, hash 2F51378E
struct CurrencyTypesRec // sizeof(0x23)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04[2]; // size 2, type 2, flag 0
    DWORD field0C; // size 1, type 0, flag 4
    DWORD field10; // size 1, type 0, flag 4
    DWORD field14; // size 1, type 0, flag 4
    char* field18; // size 1, type 2, flag 8
    BYTE field1C; // size 1, type 4, flag 4
    BYTE field1D; // size 1, type 4, flag 4
    BYTE field1E; // size 1, type 4, flag 4
    DWORD field1F; // size 1, type 0, flag 6
};

// Curve: 2 fields, flags 0, hash 4BD9DF7A
struct CurveRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
};

// CurvePoint: 3 fields, flags 0, hash 700ECA3A
struct CurvePointRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
};

// DeathThudLookups: 4 fields, flags 0, hash 4237038F
struct DeathThudLookupsRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    DWORD field02; // size 1, type 0, flag 6
    DWORD field06; // size 1, type 0, flag 6
};

// DecalProperties: 14 fields, flags 0, hash C7B7E435
struct DecalPropertiesRec // sizeof(0x32)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    BYTE field24; // size 1, type 4, flag 4
    BYTE field25; // size 1, type 4, flag 4
    DWORD field26; // size 1, type 0, flag 2
    DWORD field2A; // size 1, type 0, flag 2
    DWORD field2E; // size 1, type 0, flag 2
};

// DeclinedWordCases: 3 fields, flags 0, hash A4495A4A
struct DeclinedWordCasesRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 0
    DWORD field05; // size 1, type 0, flag 2
};

// DeclinedWord: 2 fields, flags 0, hash 2032D85F
struct DeclinedWordRec // sizeof(0x8)
{
    char* field00; // size 1, type 2, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// DestructibleModelData: 22 fields, flags 0, hash 7A74425D
struct DestructibleModelDataRec // sizeof(0x1B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 0
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 4
    BYTE field10; // size 1, type 4, flag 0
    BYTE field11; // size 1, type 4, flag 0
    BYTE field12; // size 1, type 4, flag 0
    BYTE field13; // size 1, type 4, flag 4
    BYTE field14; // size 1, type 4, flag 0
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 0
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 4
    BYTE field1A; // size 1, type 4, flag 4
};

// Difficulty: 13 fields, flags 0, hash CB297E3A
struct DifficultyRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
};

// DissolveEffect: 11 fields, flags 0, hash 8FDAC9B4
struct DissolveEffectRec // sizeof(0x26)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    BYTE field1C; // size 1, type 4, flag 0
    BYTE field1D; // size 1, type 4, flag 0
    DWORD field1E; // size 1, type 0, flag 2
    DWORD field22; // size 1, type 0, flag 2
};

// DungeonEncounter: 8 fields, flags 0, hash FB6E72FC
struct DungeonEncounterRec // sizeof(0x13)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 0
    WORD field0A; // size 1, type 5, flag 0
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    DWORD field0F; // size 1, type 0, flag 2
};

// DungeonMapChunk: 5 fields, flags 0, hash 8FC85876
struct DungeonMapChunkRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    DWORD field04; // size 1, type 0, flag 4
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
};

// DungeonMap: 7 fields, flags 0, hash 4E8538DF
struct DungeonMapRec // sizeof(0x1A)
{
    float field00[2]; // size 2, type 3, flag 0
    float field08[2]; // size 2, type 3, flag 0
    WORD field10; // size 1, type 5, flag 0
    WORD field12; // size 1, type 5, flag 0
    BYTE field14; // size 1, type 4, flag 0
    BYTE field15; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// DurabilityCosts: 2 fields, flags 0, hash B8CE321B
struct DurabilityCostsRec // sizeof(0x3A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00[21]; // size 21, type 5, flag 4
    WORD field2A[8]; // size 8, type 5, flag 4
};

// DurabilityQuality: 1 fields, flags 0, hash F7808C05
struct DurabilityQualityRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
};

// EdgeGlowEffect: 10 fields, flags 0, hash 803704B6
struct EdgeGlowEffectRec // sizeof(0x25)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    BYTE field24; // size 1, type 4, flag 0
};

// Emotes: 9 fields, flags 0, hash 21091B9A
struct EmotesRec // sizeof(0x1F)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 4
    WORD field0C; // size 1, type 5, flag 0
    BYTE field0E; // size 1, type 4, flag 4
    DWORD field0F; // size 1, type 0, flag 6
    DWORD field13; // size 1, type 0, flag 6
    DWORD field17; // size 1, type 0, flag 2
    DWORD field1B; // size 1, type 0, flag 2
};

// EmotesText: 2 fields, flags 0, hash ED4E8758
struct EmotesTextRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// EmotesTextData: 3 fields, flags 0, hash 7765D867
struct EmotesTextDataRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// EmotesTextSound: 5 fields, flags 0, hash 1D3AC587
struct EmotesTextSoundRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
    DWORD field05; // size 1, type 0, flag 6
};

// EnvironmentalDamage: 2 fields, flags 0, hash 6E5CA398
struct EnvironmentalDamageRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// Exhaustion: 8 fields, flags 0, hash 3386B543
struct ExhaustionRec // sizeof(0x20)
{
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    char* field10; // size 1, type 2, flag 8
    float field14; // size 1, type 3, flag 0
    char* field18; // size 1, type 2, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// Faction: 14 fields, flags 0, hash 6F624D7
struct FactionRec // sizeof(0x59)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[4]; // size 4, type 0, flag 4
    DWORD field10[4]; // size 4, type 0, flag 0
    float field20[2]; // size 2, type 3, flag 0
    char* field28; // size 1, type 2, flag 8
    char* field2C; // size 1, type 2, flag 8
    DWORD field30[4]; // size 4, type 0, flag 0
    WORD field40; // size 1, type 5, flag 0
    WORD field42[4]; // size 4, type 5, flag 4
    WORD field4A[4]; // size 4, type 5, flag 4
    WORD field52; // size 1, type 5, flag 4
    BYTE field54[2]; // size 2, type 4, flag 4
    BYTE field56; // size 1, type 4, flag 4
    BYTE field57; // size 1, type 4, flag 4
    BYTE field58; // size 1, type 4, flag 4
};

// FactionGroup: 3 fields, flags 0, hash 7A55B55D
struct FactionGroupRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
};

// FactionTemplate: 7 fields, flags 0, hash 1018ADD5
struct FactionTemplateRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04[4]; // size 4, type 5, flag 4
    WORD field0C[4]; // size 4, type 5, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
};

// FootstepTerrainLookup: 4 fields, flags 0, hash 52AC9461
struct FootstepTerrainLookupRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 0
    DWORD field03; // size 1, type 0, flag 6
    DWORD field07; // size 1, type 0, flag 6
};

// FriendshipRepReaction: 3 fields, flags 0, hash 13315BF9
struct FriendshipRepReactionRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// FriendshipReputation: 4 fields, flags 0, hash DF61E79
struct FriendshipReputationRec // sizeof(0xE)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    DWORD m_ID; // size 1, type 0, flag 6
};

// GMSurveyAnswers: 3 fields, flags 0, hash 4405A1CA
struct GMSurveyAnswersRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    DWORD field05; // size 1, type 0, flag 6
};

// GMSurveyCurrentSurvey: 1 fields, flags 0, hash 907149C9
struct GMSurveyCurrentSurveyRec // sizeof(0x1)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
};

// GMSurveyQuestions: 1 fields, flags 0, hash FEAFC1B9
struct GMSurveyQuestionsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// GMSurveySurveys: 1 fields, flags 0, hash C0B722F
struct GMSurveySurveysRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00[15]; // size 15, type 4, flag 4
};

// GameObjectArtKit: 2 fields, flags 0, hash 24BCED
struct GameObjectArtKitRec // sizeof(0x1C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00[3]; // size 3, type 2, flag 0
    char* field0C[4]; // size 4, type 2, flag 0
};

// GameObjectDiffAnimMap: 4 fields, flags 0, hash 174228A6
struct GameObjectDiffAnimMapRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// GameObjectDisplayInfo: 5 fields, flags 0, hash 6D100DCB
struct GameObjectDisplayInfoRec // sizeof(0x26)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04[6]; // size 6, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    WORD field24; // size 1, type 5, flag 0
};

// GameObjectDisplayInfoXSoundKit: 3 fields, flags 0, hash DB23FBD9
struct GameObjectDisplayInfoXSoundKitRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    DWORD field01; // size 1, type 0, flag 6
    DWORD field05; // size 1, type 0, flag 6
};

// GameObjects: 12 fields, flags 0, hash 13C403A5
struct GameObjectsRec // sizeof(0x52)
{
    float field00[3]; // size 3, type 3, flag 0
    float field0C[4]; // size 4, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    DWORD field20[8]; // size 8, type 0, flag 0
    char* field40; // size 1, type 2, flag 8
    WORD field44; // size 1, type 5, flag 4
    WORD field46; // size 1, type 5, flag 4
    WORD field48; // size 1, type 5, flag 4
    WORD field4A; // size 1, type 5, flag 4
    BYTE field4C; // size 1, type 4, flag 4
    BYTE field4D; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GameTips: 4 fields, flags 0, hash 8978228D
struct GameTipsRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// GarrAbilityCategory: 1 fields, flags 0, hash 32D73CE8
struct GarrAbilityCategoryRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// GarrAbility: 8 fields, flags 0, hash E47316B8
struct GarrAbilityRec // sizeof(0x16)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 0
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GarrAbilityEffect: 12 fields, flags 0, hash A41CF54F
struct GarrAbilityEffectRec // sizeof(0x1C)
{
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GarrBuilding: 24 fields, flags 0, hash 345B0DB7
struct GarrBuildingRec // sizeof(0x3E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    char* field14; // size 1, type 2, flag 8
    DWORD field18; // size 1, type 0, flag 0
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    WORD field20; // size 1, type 5, flag 4
    WORD field22; // size 1, type 5, flag 4
    WORD field24; // size 1, type 5, flag 4
    WORD field26; // size 1, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    WORD field2A; // size 1, type 5, flag 4
    BYTE field2C; // size 1, type 4, flag 4
    BYTE field2D; // size 1, type 4, flag 4
    BYTE field2E; // size 1, type 4, flag 4
    BYTE field2F; // size 1, type 4, flag 4
    BYTE field30; // size 1, type 4, flag 4
    BYTE field31; // size 1, type 4, flag 4
    DWORD field32; // size 1, type 0, flag 2
    DWORD field36; // size 1, type 0, flag 2
    DWORD field3A; // size 1, type 0, flag 2
};

// GarrBuildingDoodadSet: 5 fields, flags 0, hash 9EBC6471
struct GarrBuildingDoodadSetRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// GarrBuildingPlotInst: 5 fields, flags 0, hash 94A9BA1E
struct GarrBuildingPlotInstRec // sizeof(0x11)
{
    float field00[2]; // size 2, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GarrClassSpec: 8 fields, flags 0, hash 4575BF0F
struct GarrClassSpecRec // sizeof(0x15)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    BYTE field10; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 6
};

// GarrClassSpecPlayerCond: 6 fields, flags 0, hash DB01B862
struct GarrClassSpecPlayerCondRec // sizeof(0x15)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
    DWORD field09; // size 1, type 0, flag 6
    DWORD field0D; // size 1, type 0, flag 6
    DWORD field11; // size 1, type 0, flag 2
};

// GarrEncounter: 7 fields, flags 0, hash A753AC92
struct GarrEncounterRec // sizeof(0x1A)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    DWORD field10; // size 1, type 0, flag 0
    WORD field14; // size 1, type 5, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GarrEncounterSetXEncounter: 2 fields, flags 0, hash 9EF63764
struct GarrEncounterSetXEncounterRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
};

// GarrEncounterXMechanic: 3 fields, flags 0, hash 46C53A0B
struct GarrEncounterXMechanicRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
};

// GarrFollItemSetMember: 4 fields, flags 0, hash 2A41D721
struct GarrFollItemSetMemberRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// GarrFollSupportSpell: 4 fields, flags 0, hash 76BC8305
struct GarrFollSupportSpellRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 4
    DWORD field09; // size 1, type 0, flag 6
};

// GarrFollower: 31 fields, flags 0, hash A8D85D45
struct GarrFollowerRec // sizeof(0x40)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    DWORD field10; // size 1, type 0, flag 0
    DWORD field14; // size 1, type 0, flag 0
    DWORD field18; // size 1, type 0, flag 4
    DWORD field1C; // size 1, type 0, flag 4
    WORD field20; // size 1, type 5, flag 4
    WORD field22; // size 1, type 5, flag 4
    WORD field24; // size 1, type 5, flag 4
    WORD field26; // size 1, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    WORD field2A; // size 1, type 5, flag 4
    BYTE field2C; // size 1, type 4, flag 4
    BYTE field2D; // size 1, type 4, flag 4
    BYTE field2E; // size 1, type 4, flag 4
    BYTE field2F; // size 1, type 4, flag 4
    BYTE field30; // size 1, type 4, flag 4
    BYTE field31; // size 1, type 4, flag 4
    BYTE field32; // size 1, type 4, flag 4
    BYTE field33; // size 1, type 4, flag 4
    BYTE field34; // size 1, type 4, flag 4
    BYTE field35; // size 1, type 4, flag 0
    BYTE field36; // size 1, type 4, flag 0
    BYTE field37; // size 1, type 4, flag 4
    BYTE field38; // size 1, type 4, flag 4
    BYTE field39; // size 1, type 4, flag 4
    BYTE field3A; // size 1, type 4, flag 4
    BYTE field3B; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GarrFollowerLevelXP: 4 fields, flags 0, hash DE342443
struct GarrFollowerLevelXPRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// GarrFollowerQuality: 7 fields, flags 0, hash 4205184C
struct GarrFollowerQualityRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    DWORD field0A; // size 1, type 0, flag 6
};

// GarrFollowerSetXFollower: 2 fields, flags 0, hash C1F2B6A1
struct GarrFollowerSetXFollowerRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
};

// GarrFollowerType: 7 fields, flags 0, hash BFCD2376
struct GarrFollowerTypeRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// GarrFollowerUICreature: 6 fields, flags 0, hash 9E19CD04
struct GarrFollowerUICreatureRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 4
};

// GarrFollowerXAbility: 3 fields, flags 0, hash 914D7D9B
struct GarrFollowerXAbilityRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// GarrMechanic: 3 fields, flags 0, hash 63AA03A4
struct GarrMechanicRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    BYTE field04; // size 1, type 4, flag 4
    DWORD field05; // size 1, type 0, flag 2
};

// GarrMechanicSetXMechanic: 3 fields, flags 0, hash DFE316B
struct GarrMechanicSetXMechanicRec // sizeof(0x9)
{
    BYTE field00; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field05; // size 1, type 0, flag 6
};

// GarrMechanicType: 5 fields, flags 0, hash A91F6CA8
struct GarrMechanicTypeRec // sizeof(0x11)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 0
    BYTE field0C; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// GarrMission: 29 fields, flags 0, hash DF5FA28
struct GarrMissionRec // sizeof(0x55)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 4
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    DWORD field14; // size 1, type 0, flag 4
    DWORD field18; // size 1, type 0, flag 4
    float field1C[2]; // size 2, type 3, flag 0
    float field24[2]; // size 2, type 3, flag 0
    WORD field2C; // size 1, type 5, flag 4
    WORD field2E; // size 1, type 5, flag 4
    WORD field30; // size 1, type 5, flag 4
    WORD field32; // size 1, type 5, flag 4
    WORD field34; // size 1, type 5, flag 4
    WORD field36; // size 1, type 5, flag 4
    BYTE field38; // size 1, type 4, flag 0
    BYTE field39; // size 1, type 4, flag 4
    BYTE field3A; // size 1, type 4, flag 4
    BYTE field3B; // size 1, type 4, flag 4
    BYTE field3C; // size 1, type 4, flag 4
    BYTE field3D; // size 1, type 4, flag 4
    BYTE field3E; // size 1, type 4, flag 4
    BYTE field3F; // size 1, type 4, flag 4
    BYTE field40; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field45; // size 1, type 0, flag 2
    DWORD field49; // size 1, type 0, flag 6
    DWORD field4D; // size 1, type 0, flag 6
    DWORD field51; // size 1, type 0, flag 6
};

// GarrMissionTexture: 2 fields, flags 0, hash 37FC4173
struct GarrMissionTextureRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
};

// GarrMissionType: 3 fields, flags 0, hash D8D9D218
struct GarrMissionTypeRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// GarrMissionXEncounter: 5 fields, flags 0, hash 6294C01F
struct GarrMissionXEncounterRec // sizeof(0x11)
{
    BYTE field00; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field05; // size 1, type 0, flag 6
    DWORD field09; // size 1, type 0, flag 6
    DWORD field0D; // size 1, type 0, flag 6
};

// GarrMissionXFollower: 3 fields, flags 0, hash BB693A32
struct GarrMissionXFollowerRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// GarrMssnBonusAbility: 5 fields, flags 0, hash C3369DE5
struct GarrMssnBonusAbilityRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// GarrPlotBuilding: 2 fields, flags 0, hash 73F2572B
struct GarrPlotBuildingRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
};

// GarrPlot: 7 fields, flags 0, hash 2CD8C002
struct GarrPlotRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    DWORD field0F[2]; // size 2, type 0, flag 6
};

// GarrPlotInstance: 2 fields, flags 0, hash F3F86C96
struct GarrPlotInstanceRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// GarrPlotUICategory: 2 fields, flags 0, hash FC6FEC6
struct GarrPlotUICategoryRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
};

// GarrSiteLevel: 9 fields, flags 0, hash 22C7158E
struct GarrSiteLevelRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
};

// GarrSiteLevelPlotInst: 4 fields, flags 0, hash 69B2A3AC
struct GarrSiteLevelPlotInstRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// GarrSpecialization: 7 fields, flags 0, hash 1EE674BD
struct GarrSpecializationRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04[2]; // size 2, type 3, flag 0
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
};

// GarrString: 1 fields, flags 0, hash E4FACA3A
struct GarrStringRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// GarrTalent: 20 fields, flags 0, hash 2400895C
struct GarrTalentRec // sizeof(0x47)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    DWORD field0C; // size 1, type 0, flag 0
    BYTE field10; // size 1, type 4, flag 0
    BYTE field11; // size 1, type 4, flag 0
    BYTE field12; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field17; // size 1, type 0, flag 6
    DWORD field1B; // size 1, type 0, flag 6
    DWORD field1F; // size 1, type 0, flag 6
    DWORD field23; // size 1, type 0, flag 2
    DWORD field27; // size 1, type 0, flag 6
    DWORD field2B; // size 1, type 0, flag 2
    DWORD field2F; // size 1, type 0, flag 6
    DWORD field33; // size 1, type 0, flag 6
    DWORD field37; // size 1, type 0, flag 2
    DWORD field3B; // size 1, type 0, flag 6
    DWORD field3F; // size 1, type 0, flag 2
    DWORD field43; // size 1, type 0, flag 2
};

// GarrTalentTree: 4 fields, flags 0, hash 9D6A097A
struct GarrTalentTreeRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    BYTE field01; // size 1, type 4, flag 0
    DWORD field02; // size 1, type 0, flag 2
    DWORD field06; // size 1, type 0, flag 2
};

// GarrType: 5 fields, flags 0, hash D16A730B
struct GarrTypeRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C; // size 1, type 0, flag 6
    DWORD field10; // size 1, type 0, flag 2
};

// GarrUiAnimClassInfo: 4 fields, flags 0, hash 25C3B70
struct GarrUiAnimClassInfoRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// GarrUiAnimRaceInfo: 13 fields, flags 0, hash 4C59D8A6
struct GarrUiAnimRaceInfoRec // sizeof(0x31)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    BYTE field30; // size 1, type 4, flag 4
};

// GemProperties: 3 fields, flags 0, hash 9C00EA6D
struct GemPropertiesRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// GlobalStrings: 3 fields, flags 0, hash BF0BC27A
struct GlobalStringsRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
};

// GlyphBindableSpell: 2 fields, flags 0, hash D3BA0F3
struct GlyphBindableSpellRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
};

// GlyphExclusiveCategory: 1 fields, flags 0, hash E122AC03
struct GlyphExclusiveCategoryRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// GlyphProperties: 4 fields, flags 0, hash FAF454A9
struct GlyphPropertiesRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// GlyphRequiredSpec: 2 fields, flags 0, hash 8E304E55
struct GlyphRequiredSpecRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// GroupFinderActivity: 14 fields, flags 0, hash AF32E8CA
struct GroupFinderActivityRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    BYTE field10; // size 1, type 4, flag 0
    BYTE field11; // size 1, type 4, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
};

// GroupFinderActivityGrp: 2 fields, flags 0, hash 357024D6
struct GroupFinderActivityGrpRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
};

// GroupFinderCategory: 3 fields, flags 0, hash 2FE6EF1A
struct GroupFinderCategoryRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// GuildColorBackground: 3 fields, flags 0, hash 7E831D78
struct GuildColorBackgroundRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// GuildColorBorder: 3 fields, flags 0, hash 13BE3875
struct GuildColorBorderRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// GuildColorEmblem: 3 fields, flags 0, hash 1B8B472E
struct GuildColorEmblemRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// GuildPerkSpells: 1 fields, flags 0, hash 1956414
struct GuildPerkSpellsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
};

// Heirloom: 10 fields, flags 0, hash 2E7BAFAE
struct HeirloomRec // sizeof(0x26)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    DWORD field14[2]; // size 2, type 0, flag 0
    WORD field1C[2]; // size 2, type 5, flag 4
    BYTE field20; // size 1, type 4, flag 4
    BYTE field21; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// HelmetAnimScaling: 3 fields, flags 0, hash 3C808B5A
struct HelmetAnimScalingRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// HelmetGeosetVisData: 1 fields, flags 0, hash 380E19DF
struct HelmetGeosetVisDataRec // sizeof(0x24)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[9]; // size 9, type 0, flag 0
};

// HighlightColor: 5 fields, flags 0, hash 52191C0A
struct HighlightColorRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
};

// HolidayDescriptions: 1 fields, flags 0, hash 2927A4BF
struct HolidayDescriptionsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// HolidayNames: 1 fields, flags 0, hash 5499185A
struct HolidayNamesRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// Holidays: 11 fields, flags 0, hash 758E7BCC
struct HolidaysRec // sizeof(0x6A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[16]; // size 16, type 0, flag 4
    char* field40; // size 1, type 2, flag 0
    WORD field44[10]; // size 10, type 5, flag 4
    WORD field58; // size 1, type 5, flag 4
    BYTE field5A; // size 1, type 4, flag 4
    BYTE field5B[10]; // size 10, type 4, flag 4
    BYTE field65; // size 1, type 4, flag 4
    BYTE field66; // size 1, type 4, flag 4
    BYTE field67; // size 1, type 4, flag 4
    BYTE field68; // size 1, type 4, flag 0
    BYTE field69; // size 1, type 4, flag 4
};

// ImportPriceArmor: 4 fields, flags 0, hash 3E372864
struct ImportPriceArmorRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
};

// ImportPriceQuality: 1 fields, flags 0, hash 3C615C13
struct ImportPriceQualityRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
};

// ImportPriceShield: 1 fields, flags 0, hash 2BDE6A98
struct ImportPriceShieldRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
};

// ImportPriceWeapon: 1 fields, flags 0, hash 976C8F98
struct ImportPriceWeaponRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
};

// InvasionClientData: 10 fields, flags 0, hash 18791515
struct InvasionClientDataRec // sizeof(0x2C)
{
    char* field00; // size 1, type 2, flag 8
    float field04[2]; // size 2, type 3, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 2
    DWORD field14; // size 1, type 0, flag 2
    DWORD field18; // size 1, type 0, flag 2
    DWORD field1C; // size 1, type 0, flag 2
    DWORD field20; // size 1, type 0, flag 6
    DWORD field24; // size 1, type 0, flag 2
    DWORD field28; // size 1, type 0, flag 2
};

// ItemAppearance: 4 fields, flags 0, hash 42261B89
struct ItemAppearanceRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    BYTE field0C; // size 1, type 4, flag 4
};

// ItemAppearanceXUiCamera: 2 fields, flags 0, hash 8C3E04CB
struct ItemAppearanceXUiCameraRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// ItemArmorQuality: 2 fields, flags 0, hash B94A5807
struct ItemArmorQualityRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 0
};

// ItemArmorShield: 2 fields, flags 0, hash FFBB8DC2
struct ItemArmorShieldRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 4
};

// ItemArmorTotal: 5 fields, flags 0, hash 29D50FE
struct ItemArmorTotalRec // sizeof(0x12)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    WORD field10; // size 1, type 5, flag 0
};

// ItemBagFamily: 1 fields, flags 0, hash 11301D47
struct ItemBagFamilyRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// ItemBonus: 4 fields, flags 0, hash 8318900A
struct ItemBonusRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[2]; // size 2, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// ItemBonusListLevelDelta: 2 fields, flags 0, hash 39606286
struct ItemBonusListLevelDeltaRec // sizeof(0x6)
{
    WORD field00; // size 1, type 5, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// ItemBonusTreeNode: 4 fields, flags 0, hash A67E0631
struct ItemBonusTreeNodeRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// ItemChildEquipment: 3 fields, flags 0, hash 1E8E6583
struct ItemChildEquipmentRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// ItemClass: 3 fields, flags 0, hash B977271E
struct ItemClassRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
};

// ItemContextPickerEntry: 5 fields, flags 0, hash 96A8C4D6
struct ItemContextPickerEntryRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    DWORD field02; // size 1, type 0, flag 6
    DWORD field06; // size 1, type 0, flag 2
    DWORD field0A; // size 1, type 0, flag 6
};

// ItemCurrencyCost: 1 fields, flags 0, hash 6FE05AE9
struct ItemCurrencyCostRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
};

// Item: 8 fields, flags 0, hash 50238EC2
struct ItemRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 0
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 4
};

// ItemDamageAmmo: 2 fields, flags 0, hash 9790C2EE
struct ItemDamageAmmoRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 4
};

// ItemDamageOneHandCaster: 2 fields, flags 0, hash F2972767
struct ItemDamageOneHandCasterRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 4
};

// ItemDamageOneHand: 2 fields, flags 0, hash E0A6BB08
struct ItemDamageOneHandRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 4
};

// ItemDamageTwoHandCaster: 2 fields, flags 0, hash 80A1A0FA
struct ItemDamageTwoHandCasterRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 4
};

// ItemDamageTwoHand: 2 fields, flags 0, hash D8C5FD43
struct ItemDamageTwoHandRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[7]; // size 7, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 4
};

// ItemDisenchantLoot: 6 fields, flags 0, hash 66A4506E
struct ItemDisenchantLootRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// ItemDisplayInfo: 15 fields, flags 0, hash 986F8CD0
struct ItemDisplayInfoRec // sizeof(0x58)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[2]; // size 2, type 0, flag 6
    DWORD field08[2]; // size 2, type 0, flag 2
    DWORD field10[3]; // size 3, type 0, flag 2
    DWORD field1C[3]; // size 3, type 0, flag 2
    DWORD field28; // size 1, type 0, flag 2
    DWORD field2C; // size 1, type 0, flag 6
    DWORD field30[2]; // size 2, type 0, flag 2
    DWORD field38; // size 1, type 0, flag 2
    DWORD field3C; // size 1, type 0, flag 2
    DWORD field40; // size 1, type 0, flag 6
    DWORD field44; // size 1, type 0, flag 2
    DWORD field48; // size 1, type 0, flag 2
    DWORD field4C; // size 1, type 0, flag 2
    DWORD field50; // size 1, type 0, flag 2
    DWORD field54; // size 1, type 0, flag 6
};

// ItemDisplayInfoMaterialRes: 3 fields, flags 0, hash F35AF3DB
struct ItemDisplayInfoMaterialResRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 0
};

// ItemDisplayXUiCamera: 2 fields, flags 0, hash E5973CC6
struct ItemDisplayXUiCameraRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// ItemEffect: 9 fields, flags 0, hash 4002A5B1
struct ItemEffectRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 0
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 0
};

// ItemExtendedCost: 10 fields, flags 0, hash BB858355
struct ItemExtendedCostRec // sizeof(0x43)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[5]; // size 5, type 0, flag 0
    DWORD field14[5]; // size 5, type 0, flag 4
    WORD field28[5]; // size 5, type 5, flag 4
    WORD field32; // size 1, type 5, flag 4
    WORD field34[5]; // size 5, type 5, flag 4
    BYTE field3E; // size 1, type 4, flag 4
    BYTE field3F; // size 1, type 4, flag 4
    BYTE field40; // size 1, type 4, flag 4
    BYTE field41; // size 1, type 4, flag 4
    BYTE field42; // size 1, type 4, flag 4
};

// ItemGroupSounds: 1 fields, flags 0, hash 9F4206C9
struct ItemGroupSoundsRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[4]; // size 4, type 0, flag 6
};

// ItemLimitCategoryCondition: 3 fields, flags 0, hash D80883F0
struct ItemLimitCategoryConditionRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    DWORD field01; // size 1, type 0, flag 2
    DWORD field05; // size 1, type 0, flag 6
};

// ItemLimitCategory: 3 fields, flags 0, hash 7BBA1EB1
struct ItemLimitCategoryRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// ItemModifiedAppearance: 6 fields, flags 0, hash E491AC55
struct ItemModifiedAppearanceRec // sizeof(0xD)
{
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 5
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// ItemModifiedAppearanceExtra: 5 fields, flags 0, hash D94C9544
struct ItemModifiedAppearanceExtraRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 0
    BYTE field0A; // size 1, type 4, flag 0
};

// ItemNameDescription: 2 fields, flags 0, hash 70C2E7FD
struct ItemNameDescriptionRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
};

// ItemPetFood: 1 fields, flags 0, hash 30DE185C
struct ItemPetFoodRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// ItemPriceBase: 3 fields, flags 0, hash 2DE09E95
struct ItemPriceBaseRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
};

// ItemRandomProperties: 2 fields, flags 0, hash 4BD338F
struct ItemRandomPropertiesRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04[5]; // size 5, type 5, flag 4
};

// ItemRandomSuffix: 4 fields, flags 0, hash E6811147
struct ItemRandomSuffixRec // sizeof(0x1C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 0
    WORD field08[5]; // size 5, type 5, flag 4
    WORD field12[5]; // size 5, type 5, flag 4
};

// ItemRangedDisplayInfo: 4 fields, flags 0, hash 88EAC09B
struct ItemRangedDisplayInfoRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C; // size 1, type 0, flag 6
};

// ItemSearchName: 13 fields, flags 0, hash 198E28B5
struct ItemSearchNameRec // sizeof(0x28)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04[3]; // size 3, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    DWORD field14; // size 1, type 0, flag 4
    WORD field18; // size 1, type 5, flag 4
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    BYTE field20; // size 1, type 4, flag 4
    BYTE field21; // size 1, type 4, flag 4
    BYTE field22; // size 1, type 4, flag 4
    BYTE field23; // size 1, type 4, flag 0
    DWORD field24; // size 1, type 0, flag 2
};

// ItemSet: 5 fields, flags 0, hash 8E741A98
struct ItemSetRec // sizeof(0x52)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04[17]; // size 17, type 0, flag 4
    WORD field48; // size 1, type 5, flag 4
    DWORD field4A; // size 1, type 0, flag 6
    DWORD field4E; // size 1, type 0, flag 6
};

// ItemSetSpell: 4 fields, flags 0, hash 8645BB79
struct ItemSetSpellRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// ItemSpec: 6 fields, flags 0, hash 8DA6E2A
struct ItemSpecRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// ItemSpecOverride: 2 fields, flags 0, hash 149AAE79
struct ItemSpecOverrideRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// ItemSubClass: 10 fields, flags 0, hash 95D8638F
struct ItemSubClassRec // sizeof(0x11)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 0
    BYTE field0B; // size 1, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 0
    BYTE field10; // size 1, type 4, flag 4
};

// ItemSubClassMask: 3 fields, flags 0, hash E5F0B775
struct ItemSubClassMaskRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
};

// ItemUpgrade: 5 fields, flags 0, hash 7006463B
struct ItemUpgradeRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// ItemVisualEffects: 1 fields, flags 0, hash 926C975E
struct ItemVisualEffectsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// ItemVisuals: 1 fields, flags 0, hash 77F6CC65
struct ItemVisualsRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00[5]; // size 5, type 5, flag 4
};

// ItemXBonusTree: 2 fields, flags 0, hash 325582EA
struct ItemXBonusTreeRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// JournalEncounterCreature: 7 fields, flags 0, hash ACF3ADCB
struct JournalEncounterCreatureRec // sizeof(0x17)
{
    DWORD field00; // size 1, type 0, flag 4
    DWORD field04; // size 1, type 0, flag 4
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    WORD field10; // size 1, type 5, flag 4
    BYTE field12; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// JournalEncounter: 10 fields, flags 0, hash 57382070
struct JournalEncounterRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    BYTE field18; // size 1, type 4, flag 0
    BYTE field19; // size 1, type 4, flag 4
    DWORD field1A; // size 1, type 0, flag 6
};

// JournalEncounterItem: 6 fields, flags 0, hash F7ED685F
struct JournalEncounterItemRec // sizeof(0xD)
{
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 0
    BYTE field07; // size 1, type 4, flag 0
    BYTE field08; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// JournalEncounterSection: 14 fields, flags 0, hash 7956786C
struct JournalEncounterSectionRec // sizeof(0x23)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 4
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 4
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    BYTE field20; // size 1, type 4, flag 4
    BYTE field21; // size 1, type 4, flag 4
    BYTE field22; // size 1, type 4, flag 0
};

// JournalEncounterXDifficulty: 2 fields, flags 0, hash A83B4856
struct JournalEncounterXDifficultyRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// JournalInstance: 11 fields, flags 0, hash 713E1C99
struct JournalInstanceRec // sizeof(0x22)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    char* field10; // size 1, type 2, flag 8
    char* field14; // size 1, type 2, flag 8
    WORD field18; // size 1, type 5, flag 4
    WORD field1A; // size 1, type 5, flag 4
    BYTE field1C; // size 1, type 4, flag 4
    BYTE field1D; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// JournalItemXDifficulty: 2 fields, flags 0, hash 286E3E37
struct JournalItemXDifficultyRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// JournalSectionXDifficulty: 2 fields, flags 0, hash B051170
struct JournalSectionXDifficultyRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// JournalTier: 1 fields, flags 0, hash 26D91FF9
struct JournalTierRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// JournalTierXInstance: 2 fields, flags 0, hash 23612F8C
struct JournalTierXInstanceRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// KeyChain: 1 fields, flags 0, hash 6D8A2694
struct KeyChainRec // sizeof(0x20)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00[32]; // size 32, type 4, flag 4
};

// KeystoneAffix: 3 fields, flags 0, hash C2E384E5
struct KeystoneAffixRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 0
};

// LanguageWords: 2 fields, flags 0, hash E849437C
struct LanguageWordsRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// Languages: 2 fields, flags 0, hash F3D3E512
struct LanguagesRec // sizeof(0x8)
{
    char* field00; // size 1, type 2, flag 8
    DWORD m_ID; // size 1, type 0, flag 6
};

// LfgDungeonExpansion: 7 fields, flags 0, hash F1FFC748
struct LfgDungeonExpansionRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
    DWORD field07; // size 1, type 0, flag 2
    DWORD field0B; // size 1, type 0, flag 2
};

// LfgDungeonGroup: 4 fields, flags 0, hash 23F64598
struct LfgDungeonGroupRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// LfgDungeons: 31 fields, flags 0, hash 999BB9C2
struct LfgDungeonsRec // sizeof(0x39)
{
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 4
    char* field08; // size 1, type 2, flag 0
    char* field0C; // size 1, type 2, flag 8
    DWORD field10; // size 1, type 0, flag 0
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 0
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    WORD field20; // size 1, type 5, flag 4
    WORD field22; // size 1, type 5, flag 4
    BYTE field24; // size 1, type 4, flag 4
    BYTE field25; // size 1, type 4, flag 4
    BYTE field26; // size 1, type 4, flag 4
    BYTE field27; // size 1, type 4, flag 4
    BYTE field28; // size 1, type 4, flag 4
    BYTE field29; // size 1, type 4, flag 0
    BYTE field2A; // size 1, type 4, flag 4
    BYTE field2B; // size 1, type 4, flag 4
    BYTE field2C; // size 1, type 4, flag 4
    BYTE field2D; // size 1, type 4, flag 4
    BYTE field2E; // size 1, type 4, flag 4
    BYTE field2F; // size 1, type 4, flag 4
    BYTE field30; // size 1, type 4, flag 4
    BYTE field31; // size 1, type 4, flag 4
    BYTE field32; // size 1, type 4, flag 4
    BYTE field33; // size 1, type 4, flag 4
    BYTE field34; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// LfgDungeonsGroupingMap: 3 fields, flags 0, hash D6D21146
struct LfgDungeonsGroupingMapRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// LfgRoleRequirement: 3 fields, flags 0, hash 7187CA05
struct LfgRoleRequirementRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// LoadingScreenTaxiSplines: 5 fields, flags 0, hash E6AE2B07
struct LoadingScreenTaxiSplinesRec // sizeof(0x55)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[10]; // size 10, type 3, flag 0
    float field28[10]; // size 10, type 3, flag 0
    WORD field50; // size 1, type 5, flag 4
    WORD field52; // size 1, type 5, flag 4
    BYTE field54; // size 1, type 4, flag 4
};

// LoadingScreens: 3 fields, flags 0, hash EF9DC6FF
struct LoadingScreensRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
};

// Locale: 4 fields, flags 0, hash 3F85ABB7
struct LocaleRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// Location: 2 fields, flags 0, hash 394C3727
struct LocationRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
    float field0C[3]; // size 3, type 3, flag 0
};

// Lock: 4 fields, flags 0, hash E9BECB23
struct LockRec // sizeof(0x40)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[8]; // size 8, type 0, flag 0
    WORD field20[8]; // size 8, type 5, flag 4
    BYTE field30[8]; // size 8, type 4, flag 4
    BYTE field38[8]; // size 8, type 4, flag 4
};

// LockType: 5 fields, flags 0, hash 9349B344
struct LockTypeRec // sizeof(0x14)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// LookAtController: 18 fields, flags 0, hash 5D20CF07
struct LookAtControllerRec // sizeof(0x31)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 4
    BYTE field1A; // size 1, type 4, flag 4
    BYTE field1B; // size 1, type 4, flag 4
    BYTE field1C; // size 1, type 4, flag 4
    DWORD field1D; // size 1, type 0, flag 6
    DWORD field21; // size 1, type 0, flag 6
    DWORD field25; // size 1, type 0, flag 6
    DWORD field29; // size 1, type 0, flag 6
    DWORD field2D; // size 1, type 0, flag 6
};

// MailTemplate: 1 fields, flags 0, hash E3C5B7D1
struct MailTemplateRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// ManifestInterfaceActionIcon: 1 fields, flags 0, hash 12A21181
struct ManifestInterfaceActionIconRec // sizeof(0x4)
{
    DWORD m_ID; // size 1, type 0, flag 2
};

// ManifestInterfaceData: 2 fields, flags 0, hash FEBBA57C
struct ManifestInterfaceDataRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
};

// ManifestInterfaceItemIcon: 1 fields, flags 0, hash 22B23D6
struct ManifestInterfaceItemIconRec // sizeof(0x4)
{
    DWORD m_ID; // size 1, type 0, flag 2
};

// ManifestInterfaceTOCData: 1 fields, flags 0, hash E50FD32C
struct ManifestInterfaceTOCDataRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// MapChallengeMode: 3 fields, flags 0, hash 383B4C27
struct MapChallengeModeRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02[3]; // size 3, type 5, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// MapDifficulty: 8 fields, flags 0, hash 9265F70D
struct MapDifficultyRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    DWORD field0B; // size 1, type 0, flag 6
};

// MapDifficultyXCondition: 4 fields, flags 0, hash B7A2B3BD
struct MapDifficultyXConditionRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C; // size 1, type 0, flag 2
};

// MarketingPromotionsXLocale: 7 fields, flags 0, hash A1D3F1AD
struct MarketingPromotionsXLocaleRec // sizeof(0x16)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    char* field10; // size 1, type 2, flag 0
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 0
};

// Material: 4 fields, flags 0, hash A4C11069
struct MaterialRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    DWORD field01; // size 1, type 0, flag 6
    DWORD field05; // size 1, type 0, flag 6
    DWORD field09; // size 1, type 0, flag 6
};

// MinorTalent: 3 fields, flags 0, hash 25A192A7
struct MinorTalentRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 1
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// ModifierTree: 7 fields, flags 0, hash 7E692D56
struct ModifierTreeRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
};

// MountCapability: 8 fields, flags 0, hash F66E0076
struct MountCapabilityRec // sizeof(0x17)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 0
    BYTE field0E; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field13; // size 1, type 0, flag 6
};

// Mount: 11 fields, flags 0, hash 96737A41
struct MountRec // sizeof(0x23)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    float field14; // size 1, type 3, flag 0
    WORD field18; // size 1, type 5, flag 4
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    BYTE field1E; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// MountTypeXCapability: 3 fields, flags 0, hash 28D9DEA9
struct MountTypeXCapabilityRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// Movie: 4 fields, flags 0, hash 32DFA13
struct MovieRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    DWORD field04; // size 1, type 0, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// MovieFileData: 1 fields, flags 0, hash B8B69B3D
struct MovieFileDataRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
};

// MovieVariation: 3 fields, flags 0, hash 12D121A8
struct MovieVariationRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    DWORD field06; // size 1, type 0, flag 6
};

// NPCSounds: 1 fields, flags 0, hash 495495DF
struct NPCSoundsRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[4]; // size 4, type 0, flag 6
};

// NameGen: 3 fields, flags 0, hash F5FA849B
struct NameGenRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// NamesProfanity: 2 fields, flags 0, hash DA82D96C
struct NamesProfanityRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 0
};

// NamesReserved: 1 fields, flags 0, hash 25C1CB13
struct NamesReservedRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// NamesReservedLocale: 2 fields, flags 0, hash 3ACAE305
struct NamesReservedLocaleRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// NpcModelItemSlotDisplayInfo: 3 fields, flags 0, hash 76C04C97
struct NpcModelItemSlotDisplayInfoRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 0
};

// ObjectEffect: 9 fields, flags 0, hash 67660235
struct ObjectEffectRec // sizeof(0x1B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    float field04[3]; // size 3, type 3, flag 0
    WORD field10; // size 1, type 5, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
    DWORD field17; // size 1, type 0, flag 6
};

// ObjectEffectGroup: 1 fields, flags 0, hash 4C6EBA83
struct ObjectEffectGroupRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// ObjectEffectModifier: 4 fields, flags 0, hash 62C90BAB
struct ObjectEffectModifierRec // sizeof(0x13)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[4]; // size 4, type 3, flag 0
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    BYTE field12; // size 1, type 4, flag 4
};

// ObjectEffectPackage: 1 fields, flags 0, hash 5E3E8F24
struct ObjectEffectPackageRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// ObjectEffectPackageElem: 3 fields, flags 0, hash CB2273C2
struct ObjectEffectPackageElemRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
};

// OutlineEffect: 6 fields, flags 0, hash B94046AE
struct OutlineEffectRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C; // size 1, type 0, flag 6
    DWORD field10; // size 1, type 0, flag 2
    DWORD field14; // size 1, type 0, flag 2
};

// OverrideSpellData: 3 fields, flags 0, hash CA75DF1C
struct OverrideSpellDataRec // sizeof(0x2D)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[10]; // size 10, type 0, flag 0
    DWORD field28; // size 1, type 0, flag 0
    BYTE field2C; // size 1, type 4, flag 4
};

// PageTextMaterial: 1 fields, flags 0, hash D243819F
struct PageTextMaterialRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// PaperDollItemFrame: 3 fields, flags 0, hash ADDB889C
struct PaperDollItemFrameRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// ParticleColor: 3 fields, flags 0, hash E89BEFDA
struct ParticleColorRec // sizeof(0x24)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[3]; // size 3, type 0, flag 0
    DWORD field0C[3]; // size 3, type 0, flag 0
    DWORD field18[3]; // size 3, type 0, flag 0
};

// Path: 7 fields, flags 0, hash 94F46395
struct PathRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// PathNode: 4 fields, flags 0, hash 3B9E4CA2
struct PathNodeRec // sizeof(0xC)
{
    DWORD m_ID; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 0
};

// PathNodeProperty: 5 fields, flags 0, hash FE21C024
struct PathNodePropertyRec // sizeof(0xD)
{
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field09; // size 1, type 0, flag 2
};

// PathProperty: 4 fields, flags 0, hash 8E54F60
struct PathPropertyRec // sizeof(0xB)
{
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// Phase: 1 fields, flags 0, hash F0D11963
struct PhaseRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
};

// PhaseShiftZoneSounds: 13 fields, flags 0, hash 7BB16543
struct PhaseShiftZoneSoundsRec // sizeof(0x1E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
    DWORD field0E; // size 1, type 0, flag 6
    DWORD field12; // size 1, type 0, flag 6
    DWORD field16; // size 1, type 0, flag 6
    DWORD field1A; // size 1, type 0, flag 6
};

// PhaseXPhaseGroup: 2 fields, flags 0, hash 25CC2A59
struct PhaseXPhaseGroupRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// PlayerCondition: 79 fields, flags 0, hash B94C2807
struct PlayerConditionRec // sizeof(0x167)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 4
    DWORD field0C; // size 1, type 0, flag 4
    DWORD field10; // size 1, type 0, flag 4
    DWORD field14; // size 1, type 0, flag 4
    DWORD field18; // size 1, type 0, flag 4
    DWORD field1C; // size 1, type 0, flag 4
    DWORD field20[2]; // size 2, type 0, flag 4
    DWORD field28; // size 1, type 0, flag 4
    DWORD field2C[4]; // size 4, type 0, flag 0
    DWORD field3C; // size 1, type 0, flag 4
    DWORD field40; // size 1, type 0, flag 4
    DWORD field44; // size 1, type 0, flag 4
    char* field48; // size 1, type 2, flag 8
    WORD field4C; // size 1, type 5, flag 4
    WORD field4E; // size 1, type 5, flag 4
    WORD field50[4]; // size 4, type 5, flag 4
    WORD field58[4]; // size 4, type 5, flag 4
    WORD field60[4]; // size 4, type 5, flag 4
    WORD field68; // size 1, type 5, flag 4
    WORD field6A[4]; // size 4, type 5, flag 4
    WORD field72[4]; // size 4, type 5, flag 4
    WORD field7A[4]; // size 4, type 5, flag 4
    WORD field82[2]; // size 2, type 5, flag 4
    WORD field86; // size 1, type 5, flag 4
    WORD field88[4]; // size 4, type 5, flag 4
    WORD field90[4]; // size 4, type 5, flag 4
    WORD field98; // size 1, type 5, flag 4
    WORD field9A; // size 1, type 5, flag 4
    WORD field9C; // size 1, type 5, flag 4
    WORD field9E; // size 1, type 5, flag 4
    WORD fieldA0; // size 1, type 5, flag 4
    BYTE fieldA2; // size 1, type 4, flag 4
    BYTE fieldA3; // size 1, type 4, flag 0
    BYTE fieldA4; // size 1, type 4, flag 0
    BYTE fieldA5; // size 1, type 4, flag 4
    BYTE fieldA6; // size 1, type 4, flag 4
    BYTE fieldA7[3]; // size 3, type 4, flag 4
    BYTE fieldAA; // size 1, type 4, flag 4
    BYTE fieldAB; // size 1, type 4, flag 0
    BYTE fieldAC; // size 1, type 4, flag 4
    BYTE fieldAD; // size 1, type 4, flag 4
    BYTE fieldAE; // size 1, type 4, flag 4
    BYTE fieldAF; // size 1, type 4, flag 4
    BYTE fieldB0[4]; // size 4, type 4, flag 4
    BYTE fieldB4; // size 1, type 4, flag 4
    BYTE fieldB5; // size 1, type 4, flag 4
    BYTE fieldB6; // size 1, type 4, flag 4
    BYTE fieldB7[4]; // size 4, type 4, flag 4
    BYTE fieldBB[4]; // size 4, type 4, flag 4
    BYTE fieldBF[4]; // size 4, type 4, flag 4
    BYTE fieldC3; // size 1, type 4, flag 0
    BYTE fieldC4; // size 1, type 4, flag 0
    BYTE fieldC5; // size 1, type 4, flag 0
    BYTE fieldC6; // size 1, type 4, flag 0
    BYTE fieldC7; // size 1, type 4, flag 4
    BYTE fieldC8; // size 1, type 4, flag 4
    BYTE fieldC9; // size 1, type 4, flag 4
    BYTE fieldCA; // size 1, type 4, flag 0
    BYTE fieldCB; // size 1, type 4, flag 0
    BYTE fieldCC; // size 1, type 4, flag 0
    BYTE fieldCD; // size 1, type 4, flag 4
    BYTE fieldCE; // size 1, type 4, flag 4
    DWORD fieldCF; // size 1, type 0, flag 2
    DWORD fieldD3; // size 1, type 0, flag 2
    DWORD fieldD7[3]; // size 3, type 0, flag 6
    DWORD fieldE3[4]; // size 4, type 0, flag 2
    DWORD fieldF3[4]; // size 4, type 0, flag 2
    DWORD field103[4]; // size 4, type 0, flag 6
    DWORD field113; // size 1, type 0, flag 6
    DWORD field117[4]; // size 4, type 0, flag 6
    DWORD field127; // size 1, type 0, flag 6
    DWORD field12B[4]; // size 4, type 0, flag 6
    DWORD field13B[6]; // size 6, type 0, flag 6
    DWORD field153; // size 1, type 0, flag 6
    DWORD field157; // size 1, type 0, flag 2
    DWORD field15B; // size 1, type 0, flag 2
    DWORD field15F[2]; // size 2, type 0, flag 2
};

// Positioner: 4 fields, flags 0, hash 240D864E
struct PositionerRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// PositionerState: 8 fields, flags 0, hash 60C46E9D
struct PositionerStateRec // sizeof(0x1D)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    BYTE field04; // size 1, type 4, flag 4
    DWORD field05; // size 1, type 0, flag 6
    DWORD field09; // size 1, type 0, flag 6
    DWORD field0D; // size 1, type 0, flag 6
    DWORD field11; // size 1, type 0, flag 6
    DWORD field15; // size 1, type 0, flag 6
    DWORD field19; // size 1, type 0, flag 6
};

// PositionerStateEntry: 11 fields, flags 0, hash 461FDC45
struct PositionerStateEntryRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 0
    BYTE field0A; // size 1, type 4, flag 0
    BYTE field0B; // size 1, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 4
    DWORD field10; // size 1, type 0, flag 6
};

// PowerDisplay: 5 fields, flags 0, hash 61A51B8E
struct PowerDisplayRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// PowerType: 12 fields, flags 0, hash 8D899A57
struct PowerTypeRec // sizeof(0x1B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    WORD field10; // size 1, type 5, flag 0
    WORD field12; // size 1, type 5, flag 0
    WORD field14; // size 1, type 5, flag 0
    BYTE field16; // size 1, type 4, flag 0
    BYTE field17; // size 1, type 4, flag 0
    BYTE field18; // size 1, type 4, flag 0
    BYTE field19; // size 1, type 4, flag 0
    BYTE field1A; // size 1, type 4, flag 0
};

// PrestigeLevelInfo: 4 fields, flags 0, hash 51322141
struct PrestigeLevelInfoRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// PvpBracketTypes: 2 fields, flags 0, hash F7879101
struct PvpBracketTypesRec // sizeof(0x11)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    DWORD field01[4]; // size 4, type 0, flag 6
};

// PvpDifficulty: 4 fields, flags 0, hash CA844445
struct PvpDifficultyRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// PvpItem: 2 fields, flags 0, hash F996FA59
struct PvpItemRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// PvpReward: 3 fields, flags 0, hash 8B1B4749
struct PvpRewardRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// PvpTalent: 9 fields, flags 0, hash 63AE91A1
struct PvpTalentRec // sizeof(0x24)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    DWORD field0C; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 2
    DWORD field14; // size 1, type 0, flag 2
    DWORD field18; // size 1, type 0, flag 2
    DWORD field1C; // size 1, type 0, flag 2
    DWORD field20; // size 1, type 0, flag 2
};

// PvpTalentUnlock: 3 fields, flags 0, hash 38F4D4E2
struct PvpTalentUnlockRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// QuestFactionReward: 1 fields, flags 0, hash BFB87048
struct QuestFactionRewardRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00[10]; // size 10, type 5, flag 0
};

// QuestFeedbackEffect: 6 fields, flags 0, hash 79C72909
struct QuestFeedbackEffectRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// QuestInfo: 4 fields, flags 0, hash 2D11D732
struct QuestInfoRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// QuestLine: 1 fields, flags 0, hash EB57A423
struct QuestLineRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// QuestLineXQuest: 3 fields, flags 0, hash 8CC17856
struct QuestLineXQuestRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// QuestMoneyReward: 1 fields, flags 0, hash CF096091
struct QuestMoneyRewardRec // sizeof(0x28)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[10]; // size 10, type 0, flag 4
};

// QuestObjective: 8 fields, flags 0, hash 1325CA0
struct QuestObjectiveRec // sizeof(0x12)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
};

// QuestPOIBlob: 4 fields, flags 0, hash AE1CA308
struct QuestPOIBlobRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// QuestPOIPointCliTask: 6 fields, flags 0, hash 8FCA1265
struct QuestPOIPointCliTaskRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 0
    WORD field04; // size 1, type 5, flag 5
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
};

// QuestPOIPoint: 4 fields, flags 0, hash 83467FEB
struct QuestPOIPointRec // sizeof(0xC)
{
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
    WORD field06; // size 1, type 5, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// QuestPackageItem: 4 fields, flags 0, hash CC2F84F0
struct QuestPackageItemRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// QuestSort: 2 fields, flags 0, hash 5479CB09
struct QuestSortRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 0
};

// QuestV2CliTask: 23 fields, flags 0, hash F992211
struct QuestV2CliTaskRec // sizeof(0x37)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 0
    WORD field16[3]; // size 3, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    WORD field20; // size 1, type 5, flag 0
    BYTE field22; // size 1, type 4, flag 4
    BYTE field23; // size 1, type 4, flag 4
    BYTE field24; // size 1, type 4, flag 4
    BYTE field25; // size 1, type 4, flag 4
    BYTE field26; // size 1, type 4, flag 4
    BYTE field27; // size 1, type 4, flag 4
    BYTE field28; // size 1, type 4, flag 4
    BYTE field29; // size 1, type 4, flag 4
    BYTE field2A; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 6
    DWORD field2F; // size 1, type 0, flag 6
    DWORD field33; // size 1, type 0, flag 2
};

// QuestV2: 1 fields, flags 0, hash 3AC83109
struct QuestV2Rec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
};

// QuestXP: 1 fields, flags 0, hash 3D89A572
struct QuestXPRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00[10]; // size 10, type 5, flag 4
};

// RacialMounts: 2 fields, flags 0, hash 426026C2
struct RacialMountsRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// RandPropPoints: 3 fields, flags 0, hash 5D8CEFA6
struct RandPropPointsRec // sizeof(0x3C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[5]; // size 5, type 0, flag 6
    DWORD field14[5]; // size 5, type 0, flag 6
    DWORD field28[5]; // size 5, type 0, flag 6
};

// ResearchBranch: 5 fields, flags 0, hash 420F9A85
struct ResearchBranchRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 0
    DWORD field08; // size 1, type 0, flag 0
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
};

// ResearchField: 3 fields, flags 0, hash DDE2C5CF
struct ResearchFieldRec // sizeof(0x9)
{
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// ResearchProject: 9 fields, flags 0, hash 81560FC3
struct ResearchProjectRec // sizeof(0x1C)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    DWORD field08; // size 1, type 0, flag 0
    char* field0C; // size 1, type 2, flag 0
    WORD field10; // size 1, type 5, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field18; // size 1, type 0, flag 6
};

// ResearchSite: 4 fields, flags 0, hash 9C31AE60
struct ResearchSiteRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 0
    DWORD field0A; // size 1, type 0, flag 6
};

// Resistances: 3 fields, flags 0, hash 91BB4526
struct ResistancesRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    DWORD field05; // size 1, type 0, flag 6
};

// RewardPack: 6 fields, flags 0, hash CEF864BC
struct RewardPackRec // sizeof(0x12)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    float field04; // size 1, type 3, flag 0
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 4
    DWORD field0A; // size 1, type 0, flag 2
    DWORD field0E; // size 1, type 0, flag 6
};

// RewardPackXCurrencyType: 3 fields, flags 0, hash D3DCF67F
struct RewardPackXCurrencyTypeRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 2
};

// RewardPackXItem: 3 fields, flags 0, hash 7F87A2C7
struct RewardPackXItemRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// RulesetItemUpgrade: 2 fields, flags 0, hash 6DB7086C
struct RulesetItemUpgradeRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// ScalingStatDistribution: 3 fields, flags 0, hash 45D2FA27
struct ScalingStatDistributionRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    DWORD field02; // size 1, type 0, flag 2
    DWORD field06; // size 1, type 0, flag 2
};

// Scenario: 4 fields, flags 0, hash 830F3A66
struct ScenarioRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// ScenarioEventEntry: 2 fields, flags 0, hash C194468C
struct ScenarioEventEntryRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
};

// ScenarioStep: 9 fields, flags 0, hash 96679B72
struct ScenarioStepRec // sizeof(0x16)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    DWORD field12; // size 1, type 0, flag 2
};

// SceneScript: 4 fields, flags 0, hash D4B163CC
struct SceneScriptRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
};

// SceneScriptPackage: 1 fields, flags 0, hash E8CB5E09
struct SceneScriptPackageRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SceneScriptPackageMember: 4 fields, flags 0, hash E44DB71C
struct SceneScriptPackageMemberRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// ScheduledInterval: 5 fields, flags 0, hash B2BB19EB
struct ScheduledIntervalRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
    DWORD field0C; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 2
};

// ScheduledWorldState: 8 fields, flags 0, hash 3853E6B7
struct ScheduledWorldStateRec // sizeof(0x20)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 3
    DWORD field08; // size 1, type 0, flag 2
    DWORD field0C; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 2
    DWORD field14; // size 1, type 0, flag 2
    DWORD field18; // size 1, type 0, flag 2
    DWORD field1C; // size 1, type 0, flag 2
};

// ScheduledWorldStateGroup: 5 fields, flags 0, hash 57D3B0F1
struct ScheduledWorldStateGroupRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
    DWORD field0C; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 2
};

// ScheduledWorldStateXUniqCat: 3 fields, flags 0, hash 9716FC4C
struct ScheduledWorldStateXUniqCatRec // sizeof(0xC)
{
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
};

// ScreenEffect: 12 fields, flags 0, hash B33F3964
struct ScreenEffectRec // sizeof(0x2B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04[4]; // size 4, type 0, flag 0
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 4
    WORD field1A; // size 1, type 5, flag 0
    BYTE field1C; // size 1, type 4, flag 4
    BYTE field1D; // size 1, type 4, flag 4
    BYTE field1E; // size 1, type 4, flag 0
    DWORD field1F; // size 1, type 0, flag 6
    DWORD field23; // size 1, type 0, flag 6
    DWORD field27; // size 1, type 0, flag 6
};

// ScreenLocation: 1 fields, flags 0, hash 6CBB84DF
struct ScreenLocationRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SeamlessSite: 1 fields, flags 0, hash 1EF95B83
struct SeamlessSiteRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 2
};

// ServerMessages: 1 fields, flags 0, hash BD158365
struct ServerMessagesRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// ShadowyEffect: 10 fields, flags 0, hash ADACD19B
struct ShadowyEffectRec // sizeof(0x22)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    BYTE field20; // size 1, type 4, flag 0
    BYTE field21; // size 1, type 4, flag 0
};

// SkillLineAbility: 13 fields, flags 0, hash FF4446F6
struct SkillLineAbilityRec // sizeof(0x22)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 1
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 1
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 0
    WORD field12; // size 1, type 5, flag 0
    WORD field14; // size 1, type 5, flag 0
    WORD field16; // size 1, type 5, flag 0
    WORD field18; // size 1, type 5, flag 0
    WORD field1A; // size 1, type 5, flag 0
    BYTE field1C; // size 1, type 4, flag 0
    BYTE field1D; // size 1, type 4, flag 0
    DWORD field1E; // size 1, type 0, flag 2
};

// SkillLine: 8 fields, flags 0, hash B53DC9D6
struct SkillLineRec // sizeof(0x16)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 0
    WORD field0E; // size 1, type 5, flag 4
    BYTE field10; // size 1, type 4, flag 0
    BYTE field11; // size 1, type 4, flag 0
    DWORD field12; // size 1, type 0, flag 6
};

// SkillRaceClassInfo: 7 fields, flags 0, hash 6ADE420
struct SkillRaceClassInfoRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 0
    BYTE field0B; // size 1, type 4, flag 0
    DWORD field0C; // size 1, type 0, flag 2
};

// SoundAmbience: 4 fields, flags 0, hash 35F9DE58
struct SoundAmbienceRec // sizeof(0x11)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    DWORD field01[2]; // size 2, type 0, flag 6
    DWORD field09; // size 1, type 0, flag 6
    DWORD field0D; // size 1, type 0, flag 6
};

// SoundAmbienceFlavor: 3 fields, flags 0, hash 2691DC13
struct SoundAmbienceFlavorRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    DWORD field02; // size 1, type 0, flag 6
    DWORD field06; // size 1, type 0, flag 6
};

// SoundOverride: 4 fields, flags 0, hash 8E8053CC
struct SoundOverrideRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// SoundProviderPreferences: 23 fields, flags 0, hash BAA71EA8
struct SoundProviderPreferencesRec // sizeof(0x4C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    WORD field40; // size 1, type 5, flag 4
    WORD field42; // size 1, type 5, flag 0
    WORD field44; // size 1, type 5, flag 0
    WORD field46; // size 1, type 5, flag 0
    WORD field48; // size 1, type 5, flag 0
    BYTE field4A; // size 1, type 4, flag 0
    BYTE field4B; // size 1, type 4, flag 0
};

// SourceInfo: 4 fields, flags 0, hash 3C34F90F
struct SourceInfoRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 0
};

// SpamMessages: 1 fields, flags 0, hash 91AB8126
struct SpamMessagesRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SpecializationSpells: 6 fields, flags 0, hash 4FBA0E5C
struct SpecializationSpellsRec // sizeof(0x13)
{
    DWORD field00; // size 1, type 0, flag 1
    DWORD field04; // size 1, type 0, flag 0
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// SpellActionBarPref: 2 fields, flags 0, hash 84B0BDD7
struct SpellActionBarPrefRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// SpellActivationOverlay: 8 fields, flags 0, hash F8685781
struct SpellActivationOverlayRec // sizeof(0x26)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    float field0C; // size 1, type 3, flag 0
    DWORD field10[4]; // size 4, type 0, flag 0
    BYTE field20; // size 1, type 4, flag 0
    BYTE field21; // size 1, type 4, flag 0
    DWORD field22; // size 1, type 0, flag 6
};

// SpellAuraOptions: 8 fields, flags 0, hash F42FC065
struct SpellAuraOptionsRec // sizeof(0x15)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 4
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    BYTE field14; // size 1, type 4, flag 4
};

// SpellAuraRestrictions: 10 fields, flags 0, hash BA978F4E
struct SpellAuraRestrictionsRec // sizeof(0x19)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    BYTE field14; // size 1, type 4, flag 4
    BYTE field15; // size 1, type 4, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    BYTE field18; // size 1, type 4, flag 4
};

// SpellAuraVisXChrSpec: 2 fields, flags 0, hash 7CF13280
struct SpellAuraVisXChrSpecRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 0
};

// SpellAuraVisibility: 4 fields, flags 0, hash E86AED45
struct SpellAuraVisibilityRec // sizeof(0xA)
{
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 0
    BYTE field05; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// SpellCastTimes: 3 fields, flags 0, hash FDBA5A66
struct SpellCastTimesRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 0
};

// SpellCastingRequirements: 7 fields, flags 0, hash 61025756
struct SpellCastingRequirementsRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 4
};

// SpellCategories: 9 fields, flags 0, hash DBE7F829
struct SpellCategoriesRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
    WORD field06; // size 1, type 5, flag 0
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
};

// SpellCategory: 6 fields, flags 0, hash D0C3D18E
struct SpellCategoryRec // sizeof(0xF)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 0
    BYTE field09; // size 1, type 4, flag 4
    BYTE field0A; // size 1, type 4, flag 0
    DWORD field0B; // size 1, type 0, flag 2
};

// SpellClassOptions: 4 fields, flags 0, hash 288EAB81
struct SpellClassOptionsRec // sizeof(0x19)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[4]; // size 4, type 0, flag 0
    BYTE field14; // size 1, type 4, flag 4
    DWORD field15; // size 1, type 0, flag 6
};

// SpellCooldowns: 5 fields, flags 0, hash F9F37C57
struct SpellCooldownsRec // sizeof(0x11)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    BYTE field10; // size 1, type 4, flag 4
};

// Spell: 7 fields, flags 0, hash E111669E
struct SpellRec // sizeof(0x1C)
{
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    char* field0C; // size 1, type 2, flag 8
    DWORD field10; // size 1, type 0, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field18; // size 1, type 0, flag 2
};

// SpellDescriptionVariables: 1 fields, flags 0, hash 3CC89C00
struct SpellDescriptionVariablesRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SpellDispelType: 4 fields, flags 0, hash 2B7C0063
struct SpellDispelTypeRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    char* field04; // size 1, type 2, flag 0
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// SpellDuration: 3 fields, flags 0, hash B423FA7A
struct SpellDurationRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
};

// SpellEffectCameraShakes: 2 fields, flags 0, hash 73985069
struct SpellEffectCameraShakesRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00[3]; // size 3, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// SpellEffect: 25 fields, flags 0, hash F04238A5
struct SpellEffectRec // sizeof(0x7C)
{
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    DWORD field14[4]; // size 4, type 0, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field30; // size 1, type 0, flag 2
    DWORD field34; // size 1, type 0, flag 6
    DWORD field38; // size 1, type 0, flag 2
    DWORD field3C; // size 1, type 0, flag 2
    DWORD field40; // size 1, type 0, flag 2
    DWORD field44; // size 1, type 0, flag 2
    DWORD field48; // size 1, type 0, flag 2
    DWORD field4C; // size 1, type 0, flag 2
    DWORD field50; // size 1, type 0, flag 2
    DWORD field54[2]; // size 2, type 0, flag 2
    DWORD field5C[2]; // size 2, type 0, flag 6
    DWORD field64; // size 1, type 0, flag 2
    DWORD field68[2]; // size 2, type 0, flag 6
    DWORD field70; // size 1, type 0, flag 2
    DWORD field74; // size 1, type 0, flag 2
    DWORD field78; // size 1, type 0, flag 2
};

// SpellEffectEmission: 4 fields, flags 0, hash C327CDC8
struct SpellEffectEmissionRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 0
};

// SpellEffectGroupSize: 2 fields, flags 0, hash 23BF7E10
struct SpellEffectGroupSizeRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
};

// SpellEffectScaling: 4 fields, flags 0, hash 9DADE032
struct SpellEffectScalingRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    DWORD field0C; // size 1, type 0, flag 0
};

// SpellEquippedItems: 4 fields, flags 0, hash E44ABBD4
struct SpellEquippedItemsRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    BYTE field0C; // size 1, type 4, flag 0
};

// SpellFlyout: 6 fields, flags 0, hash B4BC3BE6
struct SpellFlyoutRec // sizeof(0x13)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    DWORD field0F; // size 1, type 0, flag 2
};

// SpellFlyoutItem: 3 fields, flags 0, hash D0BEE46B
struct SpellFlyoutItemRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// SpellFocusObject: 1 fields, flags 0, hash B99DB712
struct SpellFocusObjectRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// SpellIcon: 1 fields, flags 0, hash E38DEC
struct SpellIconRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SpellInterrupts: 5 fields, flags 0, hash 668FAE03
struct SpellInterruptsRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[2]; // size 2, type 0, flag 0
    DWORD field0C[2]; // size 2, type 0, flag 0
    WORD field14; // size 1, type 5, flag 0
    BYTE field16; // size 1, type 4, flag 4
};

// SpellItemEnchantmentCondition: 6 fields, flags 0, hash F9513930
struct SpellItemEnchantmentConditionRec // sizeof(0x2D)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00[5]; // size 5, type 4, flag 4
    BYTE field05[5]; // size 5, type 4, flag 4
    BYTE field0A[5]; // size 5, type 4, flag 4
    BYTE field0F[5]; // size 5, type 4, flag 4
    BYTE field14[5]; // size 5, type 4, flag 4
    DWORD field19[5]; // size 5, type 0, flag 6
};

// SpellItemEnchantment: 19 fields, flags 0, hash E05AC589
struct SpellItemEnchantmentRec // sizeof(0x41)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[3]; // size 3, type 0, flag 4
    char* field0C; // size 1, type 2, flag 8
    float field10[3]; // size 3, type 3, flag 0
    DWORD field1C; // size 1, type 0, flag 4
    DWORD field20; // size 1, type 0, flag 4
    WORD field24[3]; // size 3, type 5, flag 0
    WORD field2A; // size 1, type 5, flag 4
    WORD field2C; // size 1, type 5, flag 4
    WORD field2E; // size 1, type 5, flag 4
    WORD field30; // size 1, type 5, flag 4
    WORD field32; // size 1, type 5, flag 4
    BYTE field34; // size 1, type 4, flag 4
    BYTE field35[3]; // size 3, type 4, flag 4
    BYTE field38; // size 1, type 4, flag 4
    BYTE field39; // size 1, type 4, flag 4
    BYTE field3A; // size 1, type 4, flag 4
    BYTE field3B; // size 1, type 4, flag 0
    BYTE field3C; // size 1, type 4, flag 0
    DWORD field3D; // size 1, type 0, flag 6
};

// SpellKeyboundOverride: 3 fields, flags 0, hash D4B64DCD
struct SpellKeyboundOverrideRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 0
    BYTE field08; // size 1, type 4, flag 0
};

// SpellLabel: 2 fields, flags 0, hash 30769020
struct SpellLabelRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 6
};

// SpellLearnSpell: 3 fields, flags 0, hash DBEDF603
struct SpellLearnSpellRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 1
    DWORD field08; // size 1, type 0, flag 0
};

// SpellLevels: 6 fields, flags 0, hash 1DDEC5E6
struct SpellLevelsRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
    WORD field06; // size 1, type 5, flag 0
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// SpellMechanic: 1 fields, flags 0, hash 726D2B3E
struct SpellMechanicRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
};

// SpellMisc: 9 fields, flags 0, hash C603EE28
struct SpellMiscRec // sizeof(0x4B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[14]; // size 14, type 0, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    WORD field40; // size 1, type 5, flag 4
    WORD field42; // size 1, type 5, flag 4
    WORD field44; // size 1, type 5, flag 4
    WORD field46; // size 1, type 5, flag 4
    WORD field48; // size 1, type 5, flag 4
    BYTE field4A; // size 1, type 4, flag 4
};

// SpellMiscDifficulty: 3 fields, flags 0, hash 7FC0A695
struct SpellMiscDifficultyRec // sizeof(0x9)
{
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// SpellMissile: 15 fields, flags 0, hash 688F7A07
struct SpellMissileRec // sizeof(0x39)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    BYTE field38; // size 1, type 4, flag 4
};

// SpellMissileMotion: 4 fields, flags 0, hash 37717679
struct SpellMissileMotionRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// SpellPower: 14 fields, flags 0, hash A1ACE1DF
struct SpellPowerRec // sizeof(0x32)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    DWORD field10; // size 1, type 0, flag 0
    float field14; // size 1, type 3, flag 0
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field1E; // size 1, type 0, flag 2
    DWORD field22; // size 1, type 0, flag 2
    DWORD field26; // size 1, type 0, flag 6
    DWORD field2A; // size 1, type 0, flag 6
    DWORD field2E; // size 1, type 0, flag 2
};

// SpellPowerDifficulty: 3 fields, flags 0, hash 7EA08450
struct SpellPowerDifficultyRec // sizeof(0x6)
{
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// SpellProceduralEffect: 3 fields, flags 0, hash F6BC85DF
struct SpellProceduralEffectRec // sizeof(0x15)
{
    float field00[4]; // size 4, type 3, flag 0
    BYTE field10; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// SpellProcsPerMinute: 2 fields, flags 0, hash D0768C6C
struct SpellProcsPerMinuteRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// SpellProcsPerMinuteMod: 4 fields, flags 0, hash EB24B92C
struct SpellProcsPerMinuteModRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    WORD field04; // size 1, type 5, flag 0
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
};

// SpellRadius: 4 fields, flags 0, hash AB7E4841
struct SpellRadiusRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
};

// SpellRange: 5 fields, flags 0, hash E051A69C
struct SpellRangeRec // sizeof(0x19)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    float field08[2]; // size 2, type 3, flag 0
    char* field10; // size 1, type 2, flag 8
    char* field14; // size 1, type 2, flag 8
    BYTE field18; // size 1, type 4, flag 4
};

// SpellReagentsCurrency: 3 fields, flags 0, hash 2049B60C
struct SpellReagentsCurrencyRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// SpellReagents: 3 fields, flags 0, hash AB66C99F
struct SpellReagentsRec // sizeof(0x34)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[8]; // size 8, type 0, flag 0
    WORD field24[8]; // size 8, type 5, flag 0
};

// SpellScaling: 5 fields, flags 0, hash 40E92D65
struct SpellScalingRec // sizeof(0x12)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
    DWORD field06; // size 1, type 0, flag 2
    DWORD field0A; // size 1, type 0, flag 6
    DWORD field0E; // size 1, type 0, flag 6
};

// SpellShapeshift: 4 fields, flags 0, hash BC91EA17
struct SpellShapeshiftRec // sizeof(0x15)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[2]; // size 2, type 0, flag 0
    DWORD field0C[2]; // size 2, type 0, flag 0
    BYTE field14; // size 1, type 4, flag 0
};

// SpellShapeshiftForm: 10 fields, flags 0, hash F952B945
struct SpellShapeshiftFormRec // sizeof(0x2C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    float field04; // size 1, type 3, flag 0
    DWORD field08; // size 1, type 0, flag 0
    WORD field0C; // size 1, type 5, flag 0
    WORD field0E; // size 1, type 5, flag 0
    WORD field10[4]; // size 4, type 5, flag 4
    WORD field18[8]; // size 8, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    BYTE field2A; // size 1, type 4, flag 0
    BYTE field2B; // size 1, type 4, flag 0
};

// SpellSpecialUnitEffect: 2 fields, flags 0, hash AFADE934
struct SpellSpecialUnitEffectRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    DWORD field02; // size 1, type 0, flag 6
};

// SpellTargetRestrictions: 8 fields, flags 0, hash E064A75C
struct SpellTargetRestrictionsRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    WORD field10; // size 1, type 5, flag 0
    BYTE field12; // size 1, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
    DWORD field14; // size 1, type 0, flag 6
};

// SpellTotems: 3 fields, flags 0, hash A50F8A31
struct SpellTotemsRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04[2]; // size 2, type 0, flag 0
    WORD field0C[2]; // size 2, type 5, flag 4
};

// SpellVisualAnim: 3 fields, flags 0, hash 3334A75E
struct SpellVisualAnimRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 0
    WORD field02; // size 1, type 5, flag 0
    WORD field04; // size 1, type 5, flag 4
};

// SpellVisualColorEffect: 11 fields, flags 0, hash 58E72946
struct SpellVisualColorEffectRec // sizeof(0x1C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    DWORD field04; // size 1, type 0, flag 0
    float field08; // size 1, type 3, flag 0
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    DWORD field18; // size 1, type 0, flag 6
};

// SpellVisual: 28 fields, flags 0, hash F72496D9
struct SpellVisualRec // sizeof(0x74)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    DWORD field14; // size 1, type 0, flag 0
    DWORD field18; // size 1, type 0, flag 0
    DWORD field1C; // size 1, type 0, flag 0
    DWORD field20; // size 1, type 0, flag 0
    DWORD field24; // size 1, type 0, flag 0
    DWORD field28; // size 1, type 0, flag 0
    DWORD field2C; // size 1, type 0, flag 0
    DWORD field30; // size 1, type 0, flag 0
    DWORD field34; // size 1, type 0, flag 0
    DWORD field38; // size 1, type 0, flag 0
    float field3C[3]; // size 3, type 3, flag 0
    float field48[3]; // size 3, type 3, flag 0
    DWORD field54; // size 1, type 0, flag 0
    DWORD field58; // size 1, type 0, flag 0
    WORD field5C; // size 1, type 5, flag 4
    WORD field5E; // size 1, type 5, flag 4
    WORD field60; // size 1, type 5, flag 4
    BYTE field62; // size 1, type 4, flag 0
    BYTE field63; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 6
    DWORD field68; // size 1, type 0, flag 6
    DWORD field6C; // size 1, type 0, flag 6
    DWORD field70; // size 1, type 0, flag 6
};

// SpellVisualEffectName: 13 fields, flags 0, hash 2E18F32
struct SpellVisualEffectNameRec // sizeof(0x31)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    DWORD field1C; // size 1, type 0, flag 4
    DWORD field20; // size 1, type 0, flag 0
    DWORD field24; // size 1, type 0, flag 0
    BYTE field28; // size 1, type 4, flag 4
    DWORD field29; // size 1, type 0, flag 6
    DWORD field2D; // size 1, type 0, flag 2
};

// SpellVisualKitAreaModel: 6 fields, flags 0, hash 208AB51D
struct SpellVisualKitAreaModelRec // sizeof(0x13)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    WORD field10; // size 1, type 5, flag 4
    BYTE field12; // size 1, type 4, flag 4
};

// SpellVisualKit: 6 fields, flags 0, hash F483EADB
struct SpellVisualKitRec // sizeof(0x14)
{
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 6
};

// SpellVisualKitEffect: 3 fields, flags 0, hash 4666ED42
struct SpellVisualKitEffectRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
};

// SpellVisualKitModelAttach: 22 fields, flags 0, hash F07194C3
struct SpellVisualKitModelAttachRec // sizeof(0x56)
{
    DWORD field00; // size 1, type 0, flag 0
    float field04[3]; // size 3, type 3, flag 0
    float field10[3]; // size 3, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    DWORD field3C; // size 1, type 0, flag 4
    float field40; // size 1, type 3, flag 0
    WORD field44; // size 1, type 5, flag 4
    WORD field46; // size 1, type 5, flag 4
    WORD field48; // size 1, type 5, flag 0
    WORD field4A; // size 1, type 5, flag 0
    WORD field4C; // size 1, type 5, flag 0
    WORD field4E; // size 1, type 5, flag 4
    BYTE field50; // size 1, type 4, flag 0
    BYTE field51; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// SpellVisualMissile: 16 fields, flags 0, hash 51A28350
struct SpellVisualMissileRec // sizeof(0x3E)
{
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 4
    float field0C[3]; // size 3, type 3, flag 0
    float field18[3]; // size 3, type 3, flag 0
    WORD field24; // size 1, type 5, flag 4
    WORD field26; // size 1, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    WORD field2A; // size 1, type 5, flag 4
    WORD field2C; // size 1, type 5, flag 4
    WORD field2E; // size 1, type 5, flag 4
    BYTE field30; // size 1, type 4, flag 0
    BYTE field31; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field36; // size 1, type 0, flag 6
    DWORD field3A; // size 1, type 0, flag 6
};

// SpellXSpellVisual: 8 fields, flags 0, hash 27B7A01A
struct SpellXSpellVisualRec // sizeof(0x14)
{
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// Stationery: 3 fields, flags 0, hash AF0DC253
struct StationeryRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
    DWORD field05; // size 1, type 0, flag 6
};

// StringLookups: 1 fields, flags 0, hash 4A5D42EB
struct StringLookupsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SummonProperties: 5 fields, flags 0, hash 33C9E1A8
struct SummonPropertiesRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 2
    DWORD field0C; // size 1, type 0, flag 2
    DWORD field10; // size 1, type 0, flag 2
};

// TactKey: 1 fields, flags 0, hash DF2F53CF
struct TactKeyRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00[16]; // size 16, type 4, flag 4
};

// TactKeyLookup: 1 fields, flags 0, hash AFC190D1
struct TactKeyLookupRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00[8]; // size 8, type 4, flag 4
};

// Talent: 9 fields, flags 0, hash F9A4265F
struct TalentRec // sizeof(0x14)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 5
    DWORD field04; // size 1, type 0, flag 4
    char* field08; // size 1, type 2, flag 8
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11[2]; // size 2, type 4, flag 4
    BYTE field13; // size 1, type 4, flag 4
};

// TaxiNodes: 9 fields, flags 0, hash 50D91A78
struct TaxiNodesRec // sizeof(0x2B)
{
    float field00[3]; // size 3, type 3, flag 0
    char* field0C; // size 1, type 2, flag 8
    DWORD field10[2]; // size 2, type 0, flag 0
    float field18[2]; // size 2, type 3, flag 0
    WORD field20; // size 1, type 5, flag 4
    WORD field22; // size 1, type 5, flag 4
    WORD field24; // size 1, type 5, flag 4
    BYTE field26; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// TaxiPath: 4 fields, flags 0, hash AB30A45C
struct TaxiPathRec // sizeof(0xC)
{
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 6
};

// TaxiPathNode: 9 fields, flags 0, hash E5E988BC
struct TaxiPathNodeRec // sizeof(0x1E)
{
    float field00[3]; // size 3, type 3, flag 0
    DWORD field0C; // size 1, type 0, flag 4
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// TerrainTypeSounds: 1 fields, flags 0, hash F3EB5A27
struct TerrainTypeSoundsRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// TextureFileData: 3 fields, flags 0, hash 1A473014
struct TextureFileDataRec // sizeof(0x9)
{
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// TotemCategory: 3 fields, flags 0, hash A7A2F29A
struct TotemCategoryRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    DWORD field04; // size 1, type 0, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// Toy: 5 fields, flags 0, hash 7B03245C
struct ToyRec // sizeof(0xE)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// TradeSkillCategory: 5 fields, flags 0, hash 253A9B6B
struct TradeSkillCategoryRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 4
};

// TradeSkillItem: 2 fields, flags 0, hash B50CA635
struct TradeSkillItemRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 0
};

// TransformMatrix: 5 fields, flags 0, hash A5DF5FA
struct TransformMatrixRec // sizeof(0x1C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
};

// TransmogSet: 4 fields, flags 0, hash 15393898
struct TransmogSetRec // sizeof(0x10)
{
    DWORD m_ID; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 2
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C; // size 1, type 0, flag 2
};

// TransmogSetItem: 4 fields, flags 0, hash 1E21AFB4
struct TransmogSetItemRec // sizeof(0x10)
{
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C; // size 1, type 0, flag 2
};

// TransportAnimation: 4 fields, flags 0, hash 6B9AEBE5
struct TransportAnimationRec // sizeof(0x15)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 4
    float field08[3]; // size 3, type 3, flag 0
    BYTE field14; // size 1, type 4, flag 4
};

// TransportPhysics: 10 fields, flags 0, hash D04684DD
struct TransportPhysicsRec // sizeof(0x28)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
};

// TransportRotation: 3 fields, flags 0, hash 9645753D
struct TransportRotationRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 4
    float field08[4]; // size 4, type 3, flag 0
};

// Trophy: 4 fields, flags 0, hash F13B375C
struct TrophyRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// UiCamFbackTransmogChrRace: 5 fields, flags 0, hash 4D4AF767
struct UiCamFbackTransmogChrRaceRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// UiCamFbackTransmogWeapon: 4 fields, flags 0, hash 4193DD76
struct UiCamFbackTransmogWeaponRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// UiCamera: 9 fields, flags 0, hash F6A91AC1
struct UiCameraRec // sizeof(0x31)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    float field04[3]; // size 3, type 3, flag 0
    float field10[3]; // size 3, type 3, flag 0
    float field1C[3]; // size 3, type 3, flag 0
    WORD field28; // size 1, type 5, flag 0
    BYTE field2A; // size 1, type 4, flag 4
    BYTE field2B; // size 1, type 4, flag 0
    BYTE field2C; // size 1, type 4, flag 4
    DWORD field2D; // size 1, type 0, flag 2
};

// UiCameraType: 3 fields, flags 0, hash 36886009
struct UiCameraTypeRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04; // size 1, type 0, flag 6
    DWORD field08; // size 1, type 0, flag 6
};

// UiMapPOI: 7 fields, flags 0, hash BA5C035B
struct UiMapPOIRec // sizeof(0x24)
{
    DWORD field00; // size 1, type 0, flag 0
    float field04[3]; // size 3, type 3, flag 0
    DWORD field10; // size 1, type 0, flag 0
    DWORD field14; // size 1, type 0, flag 0
    DWORD field18; // size 1, type 0, flag 0
    DWORD field1C; // size 1, type 0, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// UiTextureAtlas: 3 fields, flags 0, hash 894D3B63
struct UiTextureAtlasRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// UiTextureAtlasMember: 8 fields, flags 0, hash B5307A56
struct UiTextureAtlasMemberRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 0
    WORD field08; // size 1, type 5, flag 0
    WORD field0A; // size 1, type 5, flag 0
    WORD field0C; // size 1, type 5, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 4
};

// UiTextureKit: 1 fields, flags 0, hash 15EC48BB
struct UiTextureKitRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// UnitBlood: 7 fields, flags 0, hash DB7B2578
struct UnitBloodRec // sizeof(0x26)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00[5]; // size 5, type 2, flag 0
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 4
    DWORD field1A; // size 1, type 0, flag 6
    DWORD field1E; // size 1, type 0, flag 6
    DWORD field22; // size 1, type 0, flag 6
};

// UnitBloodLevels: 1 fields, flags 0, hash B19E2A8
struct UnitBloodLevelsRec // sizeof(0x3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00[3]; // size 3, type 4, flag 4
};

// UnitCondition: 4 fields, flags 0, hash E540EFD
struct UnitConditionRec // sizeof(0x31)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[8]; // size 8, type 0, flag 0
    BYTE field20; // size 1, type 4, flag 4
    BYTE field21[8]; // size 8, type 4, flag 4
    BYTE field29[8]; // size 8, type 4, flag 0
};

// UnitPowerBar: 16 fields, flags 0, hash 4541CDC7
struct UnitPowerBarRec // sizeof(0x5E)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    DWORD field08[6]; // size 6, type 0, flag 0
    DWORD field20[6]; // size 6, type 0, flag 0
    char* field38; // size 1, type 2, flag 8
    char* field3C; // size 1, type 2, flag 8
    char* field40; // size 1, type 2, flag 8
    char* field44; // size 1, type 2, flag 8
    float field48; // size 1, type 3, flag 0
    float field4C; // size 1, type 3, flag 0
    WORD field50; // size 1, type 5, flag 4
    WORD field52; // size 1, type 5, flag 4
    BYTE field54; // size 1, type 4, flag 4
    BYTE field55; // size 1, type 4, flag 4
    DWORD field56; // size 1, type 0, flag 6
    DWORD field5A; // size 1, type 0, flag 6
};

// Vehicle: 29 fields, flags 0, hash A9F6ABF
struct VehicleRec // sizeof(0x82)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
    float field44; // size 1, type 3, flag 0
    float field48[2]; // size 2, type 3, flag 0
    char* field50; // size 1, type 2, flag 0
    char* field54; // size 1, type 2, flag 0
    char* field58[2]; // size 2, type 2, flag 0
    float field60; // size 1, type 3, flag 0
    float field64; // size 1, type 3, flag 0
    WORD field68[8]; // size 8, type 5, flag 4
    WORD field78; // size 1, type 5, flag 4
    WORD field7A[3]; // size 3, type 5, flag 4
    BYTE field80; // size 1, type 4, flag 4
    BYTE field81; // size 1, type 4, flag 4
};

// VehicleSeat: 61 fields, flags 0, hash D4A85CEB
struct VehicleSeatRec // sizeof(0xCC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    float field0C[3]; // size 3, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
    float field44; // size 1, type 3, flag 0
    float field48; // size 1, type 3, flag 0
    float field4C; // size 1, type 3, flag 0
    float field50; // size 1, type 3, flag 0
    float field54; // size 1, type 3, flag 0
    float field58; // size 1, type 3, flag 0
    float field5C; // size 1, type 3, flag 0
    float field60; // size 1, type 3, flag 0
    float field64; // size 1, type 3, flag 0
    float field68; // size 1, type 3, flag 0
    float field6C; // size 1, type 3, flag 0
    float field70; // size 1, type 3, flag 0
    float field74[3]; // size 3, type 3, flag 0
    float field80; // size 1, type 3, flag 0
    float field84; // size 1, type 3, flag 0
    float field88; // size 1, type 3, flag 0
    float field8C; // size 1, type 3, flag 0
    float field90; // size 1, type 3, flag 0
    DWORD field94; // size 1, type 0, flag 0
    WORD field98; // size 1, type 5, flag 0
    WORD field9A; // size 1, type 5, flag 0
    WORD field9C; // size 1, type 5, flag 0
    WORD field9E; // size 1, type 5, flag 0
    WORD fieldA0; // size 1, type 5, flag 0
    WORD fieldA2; // size 1, type 5, flag 0
    WORD fieldA4; // size 1, type 5, flag 0
    WORD fieldA6; // size 1, type 5, flag 0
    WORD fieldA8; // size 1, type 5, flag 0
    WORD fieldAA; // size 1, type 5, flag 0
    WORD fieldAC; // size 1, type 5, flag 0
    WORD fieldAE; // size 1, type 5, flag 0
    WORD fieldB0; // size 1, type 5, flag 0
    WORD fieldB2; // size 1, type 5, flag 0
    WORD fieldB4; // size 1, type 5, flag 0
    WORD fieldB6; // size 1, type 5, flag 0
    WORD fieldB8; // size 1, type 5, flag 0
    WORD fieldBA; // size 1, type 5, flag 0
    WORD fieldBC; // size 1, type 5, flag 0
    BYTE fieldBE; // size 1, type 4, flag 0
    BYTE fieldBF; // size 1, type 4, flag 0
    BYTE fieldC0; // size 1, type 4, flag 0
    BYTE fieldC1; // size 1, type 4, flag 0
    BYTE fieldC2; // size 1, type 4, flag 0
    BYTE fieldC3; // size 1, type 4, flag 0
    DWORD fieldC4; // size 1, type 0, flag 6
    DWORD fieldC8; // size 1, type 0, flag 6
};

// VehicleUIIndSeat: 4 fields, flags 0, hash 739EAFD1
struct VehicleUIIndSeatRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
};

// VehicleUIIndicator: 1 fields, flags 0, hash 81D11838
struct VehicleUIIndicatorRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// Vignette: 7 fields, flags 0, hash EFB13552
struct VignetteRec // sizeof(0x17)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    WORD field0C; // size 1, type 5, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    DWORD field0F; // size 1, type 0, flag 6
    DWORD field13; // size 1, type 0, flag 6
};

// VocalUISounds: 4 fields, flags 0, hash 5223195A
struct VocalUISoundsRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
    DWORD field03[2]; // size 2, type 0, flag 6
};

// WbAccessControlList: 5 fields, flags 0, hash 580B4EF3
struct WbAccessControlListRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    BYTE field07; // size 1, type 4, flag 4
    BYTE field08; // size 1, type 4, flag 4
};

// WbCertBlacklist: 2 fields, flags 0, hash CDAB90DF
struct WbCertBlacklistRec // sizeof(0x18)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04[20]; // size 20, type 4, flag 4
};

// WbCertWhitelist: 4 fields, flags 0, hash 885585BD
struct WbCertWhitelistRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// WbPermissions: 2 fields, flags 0, hash F827ECFB
struct WbPermissionsRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// WeaponImpactSounds: 7 fields, flags 0, hash AE23C39A
struct WeaponImpactSoundsRec // sizeof(0xB3)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    BYTE field02; // size 1, type 4, flag 4
    DWORD field03[11]; // size 11, type 0, flag 6
    DWORD field2F[11]; // size 11, type 0, flag 6
    DWORD field5B[11]; // size 11, type 0, flag 6
    DWORD field87[11]; // size 11, type 0, flag 6
};

// WeaponSwingSounds2: 3 fields, flags 0, hash C809AA0D
struct WeaponSwingSounds2Rec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    BYTE field01; // size 1, type 4, flag 4
    DWORD field02; // size 1, type 0, flag 6
};

// WeaponTrail: 9 fields, flags 0, hash A42476ED
struct WeaponTrailRec // sizeof(0x4C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    DWORD field10[3]; // size 3, type 0, flag 0
    float field1C[3]; // size 3, type 3, flag 0
    float field28[3]; // size 3, type 3, flag 0
    float field34[3]; // size 3, type 3, flag 0
    float field40[3]; // size 3, type 3, flag 0
};

// WeaponTrailModelDef: 3 fields, flags 0, hash A0E73181
struct WeaponTrailModelDefRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// WeaponTrailParam: 10 fields, flags 0, hash 3CEEC8C5
struct WeaponTrailParamRec // sizeof(0x1A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 4
};

// WorldBossLockout: 2 fields, flags 0, hash F416A54C
struct WorldBossLockoutRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    WORD field04; // size 1, type 5, flag 4
};

// WorldChunkSounds: 6 fields, flags 0, hash 9959835E
struct WorldChunkSoundsRec // sizeof(0x7)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    BYTE field02; // size 1, type 4, flag 4
    BYTE field03; // size 1, type 4, flag 4
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
    BYTE field06; // size 1, type 4, flag 4
};

// WorldEffect: 6 fields, flags 0, hash DA728027
struct WorldEffectRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// WorldElapsedTimer: 3 fields, flags 0, hash C7A973A1
struct WorldElapsedTimerRec // sizeof(0x6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 8
    BYTE field04; // size 1, type 4, flag 4
    BYTE field05; // size 1, type 4, flag 4
};

// WorldMapArea: 17 fields, flags 0, hash 53B09981
struct WorldMapAreaRec // sizeof(0x2C)
{
    char* field00; // size 1, type 2, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    WORD field14; // size 1, type 5, flag 0
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 0
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    BYTE field20; // size 1, type 4, flag 4
    BYTE field21; // size 1, type 4, flag 4
    BYTE field22; // size 1, type 4, flag 4
    BYTE field23; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field28; // size 1, type 0, flag 6
};

// WorldMapContinent: 11 fields, flags 0, hash 8BD32359
struct WorldMapContinentRec // sizeof(0x25)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C[2]; // size 2, type 3, flag 0
    float field14[2]; // size 2, type 3, flag 0
    WORD field1C; // size 1, type 5, flag 0
    WORD field1E; // size 1, type 5, flag 4
    BYTE field20; // size 1, type 4, flag 4
    BYTE field21; // size 1, type 4, flag 4
    BYTE field22; // size 1, type 4, flag 4
    BYTE field23; // size 1, type 4, flag 4
    BYTE field24; // size 1, type 4, flag 4
};

// WorldMapOverlay: 13 fields, flags 0, hash 1D740E72
struct WorldMapOverlayRec // sizeof(0x3C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    DWORD field08; // size 1, type 0, flag 6
    DWORD field0C[4]; // size 4, type 0, flag 6
    DWORD field1C; // size 1, type 0, flag 2
    DWORD field20; // size 1, type 0, flag 2
    DWORD field24; // size 1, type 0, flag 2
    DWORD field28; // size 1, type 0, flag 2
    DWORD field2C; // size 1, type 0, flag 2
    DWORD field30; // size 1, type 0, flag 2
    DWORD field34; // size 1, type 0, flag 6
    DWORD field38; // size 1, type 0, flag 6
};

// WorldMapTransforms: 9 fields, flags 0, hash 1621F58B
struct WorldMapTransformsRec // sizeof(0x2F)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[6]; // size 6, type 3, flag 0
    float field18[2]; // size 2, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    WORD field24; // size 1, type 5, flag 4
    WORD field26; // size 1, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    WORD field2A; // size 1, type 5, flag 4
    WORD field2C; // size 1, type 5, flag 4
    BYTE field2E; // size 1, type 4, flag 4
};

// WorldStateExpression: 1 fields, flags 0, hash 1D53EB74
struct WorldStateExpressionRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// WorldStateUI: 16 fields, flags 0, hash 31314060
struct WorldStateUIRec // sizeof(0x2E)
{
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    char* field08; // size 1, type 2, flag 0
    char* field0C; // size 1, type 2, flag 8
    char* field10; // size 1, type 2, flag 8
    char* field14; // size 1, type 2, flag 8
    WORD field18; // size 1, type 5, flag 0
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    WORD field20[3]; // size 3, type 5, flag 4
    BYTE field26; // size 1, type 4, flag 4
    BYTE field27; // size 1, type 4, flag 4
    BYTE field28; // size 1, type 4, flag 4
    BYTE field29; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// WorldStateZoneSounds: 8 fields, flags 0, hash 4DABD3FB
struct WorldStateZoneSoundsRec // sizeof(0x11)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    BYTE field10; // size 1, type 4, flag 4
};

// World_PVP_Area: 7 fields, flags 0, hash AFE24F5A
struct World_PVP_AreaRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// ZoneIntroMusicTable: 4 fields, flags 0, hash 21497AB7
struct ZoneIntroMusicTableRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    BYTE field06; // size 1, type 4, flag 4
    DWORD field07; // size 1, type 0, flag 6
};

// ZoneMusic: 4 fields, flags 0, hash F2A7C540
struct ZoneMusicRec // sizeof(0x1C)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04[2]; // size 2, type 0, flag 4
    DWORD field0C[2]; // size 2, type 0, flag 4
    DWORD field14[2]; // size 2, type 0, flag 6
};

// AnimationData: 5 fields, flags 0, hash 9CAF5A21
struct AnimationDataRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04; // size 1, type 0, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    BYTE field0C; // size 1, type 4, flag 4
};

// AreaTable: 23 fields, flags 0, hash 7253EB43
struct AreaTableRec // sizeof(0x3A)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[2]; // size 2, type 0, flag 0
    char* field08; // size 1, type 2, flag 0
    float field0C; // size 1, type 3, flag 0
    char* field10; // size 1, type 2, flag 8
    WORD field14; // size 1, type 5, flag 4
    WORD field16; // size 1, type 5, flag 4
    WORD field18; // size 1, type 5, flag 0
    WORD field1A; // size 1, type 5, flag 4
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 4
    WORD field20[4]; // size 4, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    WORD field2A; // size 1, type 5, flag 4
    WORD field2C; // size 1, type 5, flag 0
    BYTE field2E; // size 1, type 4, flag 4
    BYTE field2F; // size 1, type 4, flag 4
    BYTE field30; // size 1, type 4, flag 0
    BYTE field31; // size 1, type 4, flag 4
    BYTE field32; // size 1, type 4, flag 4
    BYTE field33; // size 1, type 4, flag 4
    BYTE field34; // size 1, type 4, flag 4
    BYTE field35; // size 1, type 4, flag 4
    DWORD field36; // size 1, type 0, flag 6
};

// BoneWindModifierModel: 2 fields, flags 0, hash 15D0EFA4
struct BoneWindModifierModelRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
};

// BoneWindModifiers: 2 fields, flags 0, hash 6519F1A9
struct BoneWindModifiersRec // sizeof(0x10)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
};

// CloakDampening: 7 fields, flags 0, hash DCC61EF0
struct CloakDampeningRec // sizeof(0x44)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[5]; // size 5, type 3, flag 0
    float field14[5]; // size 5, type 3, flag 0
    float field28[2]; // size 2, type 3, flag 0
    float field30[2]; // size 2, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
};

// DeviceBlacklist: 2 fields, flags 0, hash 3A9E3494
struct DeviceBlacklistRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
};

// DeviceDefaultSettings: 3 fields, flags 0, hash D007E829
struct DeviceDefaultSettingsRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00; // size 1, type 5, flag 4
    WORD field02; // size 1, type 5, flag 4
    BYTE field04; // size 1, type 4, flag 4
};

// DriverBlacklist: 7 fields, flags 0, hash 4F10F976
struct DriverBlacklistRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    DWORD field04; // size 1, type 0, flag 4
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
};

// FootprintTextures: 2 fields, flags 0, hash 2BBD5BA1
struct FootprintTexturesRec // sizeof(0x8)
{
    char* field00; // size 1, type 2, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// FullScreenEffect: 39 fields, flags 0, hash 85401935
struct FullScreenEffectRec // sizeof(0x99)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
    float field44; // size 1, type 3, flag 0
    float field48; // size 1, type 3, flag 0
    DWORD field4C; // size 1, type 0, flag 4
    DWORD field50; // size 1, type 0, flag 4
    float field54; // size 1, type 3, flag 0
    float field58; // size 1, type 3, flag 0
    float field5C; // size 1, type 3, flag 0
    float field60; // size 1, type 3, flag 0
    float field64; // size 1, type 3, flag 0
    float field68; // size 1, type 3, flag 0
    float field6C; // size 1, type 3, flag 0
    float field70; // size 1, type 3, flag 0
    float field74; // size 1, type 3, flag 0
    float field78; // size 1, type 3, flag 0
    float field7C; // size 1, type 3, flag 0
    float field80; // size 1, type 3, flag 0
    float field84; // size 1, type 3, flag 0
    float field88; // size 1, type 3, flag 0
    BYTE field8C; // size 1, type 4, flag 4
    DWORD field8D; // size 1, type 0, flag 6
    DWORD field91; // size 1, type 0, flag 6
    DWORD field95; // size 1, type 0, flag 6
};

// GroundEffectDoodad: 4 fields, flags 0, hash A5945ACA
struct GroundEffectDoodadRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    BYTE field0C; // size 1, type 4, flag 4
};

// GroundEffectTexture: 4 fields, flags 0, hash 8108D98D
struct GroundEffectTextureRec // sizeof(0x11)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    WORD field00[4]; // size 4, type 5, flag 4
    BYTE field08[4]; // size 4, type 4, flag 0
    BYTE field0C; // size 1, type 4, flag 4
    DWORD field0D; // size 1, type 0, flag 6
};

// Light: 5 fields, flags 0, hash 5CCAA0BA
struct LightRec // sizeof(0x26)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    WORD field14; // size 1, type 5, flag 0
    WORD field16[8]; // size 8, type 5, flag 4
};

// LightData: 35 fields, flags 0, hash AD67EBF
struct LightDataRec // sizeof(0x88)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    DWORD field04; // size 1, type 0, flag 0
    DWORD field08; // size 1, type 0, flag 0
    DWORD field0C; // size 1, type 0, flag 0
    DWORD field10; // size 1, type 0, flag 0
    DWORD field14; // size 1, type 0, flag 0
    DWORD field18; // size 1, type 0, flag 0
    DWORD field1C; // size 1, type 0, flag 0
    DWORD field20; // size 1, type 0, flag 0
    DWORD field24; // size 1, type 0, flag 0
    DWORD field28; // size 1, type 0, flag 0
    DWORD field2C; // size 1, type 0, flag 0
    DWORD field30; // size 1, type 0, flag 0
    DWORD field34; // size 1, type 0, flag 0
    DWORD field38; // size 1, type 0, flag 0
    DWORD field3C; // size 1, type 0, flag 0
    DWORD field40; // size 1, type 0, flag 0
    DWORD field44; // size 1, type 0, flag 0
    float field48; // size 1, type 3, flag 0
    float field4C; // size 1, type 3, flag 0
    float field50; // size 1, type 3, flag 0
    float field54; // size 1, type 3, flag 0
    float field58; // size 1, type 3, flag 0
    float field5C; // size 1, type 3, flag 0
    float field60; // size 1, type 3, flag 0
    float field64; // size 1, type 3, flag 0
    float field68; // size 1, type 3, flag 0
    DWORD field6C; // size 1, type 0, flag 4
    DWORD field70; // size 1, type 0, flag 4
    DWORD field74; // size 1, type 0, flag 4
    DWORD field78; // size 1, type 0, flag 4
    DWORD field7C; // size 1, type 0, flag 0
    DWORD field80; // size 1, type 0, flag 0
    WORD field84; // size 1, type 5, flag 4
    WORD field86; // size 1, type 5, flag 4
};

// LightParams: 11 fields, flags 0, hash C67F0D98
struct LightParamsRec // sizeof(0x29)
{
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14[3]; // size 3, type 3, flag 0
    WORD field20; // size 1, type 5, flag 4
    BYTE field22; // size 1, type 4, flag 4
    BYTE field23; // size 1, type 4, flag 4
    BYTE field24; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
};

// LightSkybox: 2 fields, flags 0, hash D364D557
struct LightSkyboxRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// LiquidMaterial: 2 fields, flags 0, hash 8C379329
struct LiquidMaterialRec // sizeof(0x2)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 0
    BYTE field01; // size 1, type 4, flag 0
};

// LiquidObject: 5 fields, flags 0, hash FC2A0DFF
struct LiquidObjectRec // sizeof(0xC)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 0
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
};

// LiquidType: 19 fields, flags 0, hash 6613BED3
struct LiquidTypeRec // sizeof(0xA6)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04; // size 1, type 0, flag 4
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    char* field1C[6]; // size 6, type 2, flag 0
    DWORD field34[2]; // size 2, type 0, flag 0
    float field3C[18]; // size 18, type 3, flag 0
    DWORD field84[4]; // size 4, type 0, flag 4
    WORD field94; // size 1, type 5, flag 4
    WORD field96; // size 1, type 5, flag 4
    BYTE field98; // size 1, type 4, flag 4
    BYTE field99; // size 1, type 4, flag 4
    BYTE field9A; // size 1, type 4, flag 4
    BYTE field9B; // size 1, type 4, flag 4
    BYTE field9C[6]; // size 6, type 4, flag 4
    DWORD fieldA2; // size 1, type 0, flag 6
};

// ManifestMP3: 1 fields, flags 0, hash 353E4F0C
struct ManifestMP3Rec // sizeof(0x4)
{
    DWORD m_ID; // size 1, type 0, flag 2
};

// Map: 19 fields, flags 0, hash BD84CD62
struct MapRec // sizeof(0x37)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    DWORD field04[2]; // size 2, type 0, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10[2]; // size 2, type 3, flag 0
    char* field18; // size 1, type 2, flag 8
    char* field1C; // size 1, type 2, flag 8
    char* field20; // size 1, type 2, flag 8
    WORD field24; // size 1, type 5, flag 4
    WORD field26; // size 1, type 5, flag 0
    WORD field28; // size 1, type 5, flag 0
    WORD field2A; // size 1, type 5, flag 0
    WORD field2C; // size 1, type 5, flag 0
    WORD field2E; // size 1, type 5, flag 0
    WORD field30; // size 1, type 5, flag 0
    BYTE field32; // size 1, type 4, flag 4
    BYTE field33; // size 1, type 4, flag 4
    BYTE field34; // size 1, type 4, flag 4
    BYTE field35; // size 1, type 4, flag 4
    BYTE field36; // size 1, type 4, flag 4
};

// ModelAnimCloakDampening: 3 fields, flags 0, hash 115B0A10
struct ModelAnimCloakDampeningRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    BYTE field00; // size 1, type 4, flag 4
    DWORD field01; // size 1, type 0, flag 6
    DWORD field05; // size 1, type 0, flag 6
};

// ModelFileData: 3 fields, flags 0, hash A161E42C
struct ModelFileDataRec // sizeof(0x9)
{
    BYTE field00; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field05; // size 1, type 0, flag 6
};

// ModelRibbonQuality: 2 fields, flags 0, hash 326D6E8F
struct ModelRibbonQualityRec // sizeof(0x5)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    BYTE field04; // size 1, type 4, flag 4
};

// RibbonQuality: 4 fields, flags 0, hash 8E858136
struct RibbonQualityRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    BYTE field0C; // size 1, type 4, flag 4
};

// SoundBus: 12 fields, flags 0, hash 72CA15A
struct SoundBusRec // sizeof(0x16)
{
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
    BYTE field0B; // size 1, type 4, flag 4
    BYTE field0C; // size 1, type 4, flag 4
    BYTE field0D; // size 1, type 4, flag 4
    BYTE field0E; // size 1, type 4, flag 4
    BYTE field0F; // size 1, type 4, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// SoundEmitterPillPoints: 2 fields, flags 0, hash D8A1D70C
struct SoundEmitterPillPointsRec // sizeof(0xE)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[3]; // size 3, type 3, flag 0
    WORD field0C; // size 1, type 5, flag 4
};

// SoundEmitters: 12 fields, flags 0, hash C638B8D4
struct SoundEmittersRec // sizeof(0x2E)
{
    float field00[3]; // size 3, type 3, flag 0
    float field0C[3]; // size 3, type 3, flag 0
    char* field18; // size 1, type 2, flag 0
    WORD field1C; // size 1, type 5, flag 4
    WORD field1E; // size 1, type 5, flag 0
    WORD field20; // size 1, type 5, flag 4
    BYTE field22; // size 1, type 4, flag 4
    BYTE field23; // size 1, type 4, flag 4
    BYTE field24; // size 1, type 4, flag 4
    BYTE field25; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field2A; // size 1, type 0, flag 6
};

// SoundFilter: 1 fields, flags 0, hash EF0A657
struct SoundFilterRec // sizeof(0x4)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
};

// SoundFilterElem: 3 fields, flags 0, hash A17FA21E
struct SoundFilterElemRec // sizeof(0x26)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[9]; // size 9, type 3, flag 0
    BYTE field24; // size 1, type 4, flag 0
    BYTE field25; // size 1, type 4, flag 0
};

// SoundKitAdvanced: 32 fields, flags 0, hash C0A5F8C6
struct SoundKitAdvancedRec // sizeof(0x72)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 4
    DWORD field0C; // size 1, type 0, flag 4
    DWORD field10; // size 1, type 0, flag 4
    DWORD field14; // size 1, type 0, flag 4
    DWORD field18; // size 1, type 0, flag 4
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    DWORD field30; // size 1, type 0, flag 4
    DWORD field34; // size 1, type 0, flag 4
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
    float field44; // size 1, type 3, flag 0
    float field48; // size 1, type 3, flag 0
    float field4C; // size 1, type 3, flag 0
    DWORD field50; // size 1, type 0, flag 0
    WORD field54; // size 1, type 5, flag 4
    BYTE field56; // size 1, type 4, flag 4
    BYTE field57; // size 1, type 4, flag 4
    BYTE field58; // size 1, type 4, flag 4
    BYTE field59; // size 1, type 4, flag 4
    DWORD field5A; // size 1, type 0, flag 6
    DWORD field5E; // size 1, type 0, flag 2
    DWORD field62; // size 1, type 0, flag 6
    DWORD field66; // size 1, type 0, flag 6
    DWORD field6A; // size 1, type 0, flag 6
    DWORD field6E; // size 1, type 0, flag 6
};

// SoundKitChild: 2 fields, flags 0, hash 2BE0E266
struct SoundKitChildRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
};

// SoundKit: 17 fields, flags 0, hash 36237731
struct SoundKitRec // sizeof(0x32)
{
    char* field00; // size 1, type 2, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    WORD field24; // size 1, type 5, flag 4
    WORD field26; // size 1, type 5, flag 4
    WORD field28; // size 1, type 5, flag 4
    BYTE field2A; // size 1, type 4, flag 4
    BYTE field2B; // size 1, type 4, flag 4
    BYTE field2C; // size 1, type 4, flag 4
    BYTE field2D; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
};

// SoundKitEntry: 4 fields, flags 0, hash C2B150C7
struct SoundKitEntryRec // sizeof(0xD)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    float field04; // size 1, type 3, flag 0
    BYTE field08; // size 1, type 4, flag 4
    DWORD field09; // size 1, type 0, flag 6
};

// SoundKitFallback: 2 fields, flags 0, hash E98312F8
struct SoundKitFallbackRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 6
    DWORD field04; // size 1, type 0, flag 6
};

// SpellChainEffects: 62 fields, flags 0, hash 1EDACEA1
struct SpellChainEffectsRec // sizeof(0x10B)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04; // size 1, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C; // size 1, type 3, flag 0
    DWORD field10; // size 1, type 0, flag 4
    DWORD field14; // size 1, type 0, flag 4
    float field18; // size 1, type 3, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    float field30; // size 1, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    float field3C; // size 1, type 3, flag 0
    float field40; // size 1, type 3, flag 0
    float field44; // size 1, type 3, flag 0
    float field48; // size 1, type 3, flag 0
    float field4C; // size 1, type 3, flag 0
    float field50; // size 1, type 3, flag 0
    float field54; // size 1, type 3, flag 0
    float field58; // size 1, type 3, flag 0
    float field5C; // size 1, type 3, flag 0
    float field60; // size 1, type 3, flag 0
    float field64; // size 1, type 3, flag 0
    float field68; // size 1, type 3, flag 0
    float field6C; // size 1, type 3, flag 0
    float field70; // size 1, type 3, flag 0
    float field74; // size 1, type 3, flag 0
    float field78; // size 1, type 3, flag 0
    float field7C; // size 1, type 3, flag 0
    float field80; // size 1, type 3, flag 0
    float field84; // size 1, type 3, flag 0
    float field88; // size 1, type 3, flag 0
    float field8C; // size 1, type 3, flag 0
    float field90; // size 1, type 3, flag 0
    float field94[3]; // size 3, type 3, flag 0
    float fieldA0[3]; // size 3, type 3, flag 0
    float fieldAC[3]; // size 3, type 3, flag 0
    float fieldB8[3]; // size 3, type 3, flag 0
    DWORD fieldC4; // size 1, type 0, flag 4
    float fieldC8; // size 1, type 3, flag 0
    float fieldCC; // size 1, type 3, flag 0
    char* fieldD0[3]; // size 3, type 2, flag 0
    char* fieldDC; // size 1, type 2, flag 0
    WORD fieldE0; // size 1, type 5, flag 4
    WORD fieldE2; // size 1, type 5, flag 4
    WORD fieldE4[11]; // size 11, type 5, flag 4
    WORD fieldFA; // size 1, type 5, flag 4
    BYTE fieldFC; // size 1, type 4, flag 4
    BYTE fieldFD; // size 1, type 4, flag 4
    BYTE fieldFE; // size 1, type 4, flag 4
    BYTE fieldFF; // size 1, type 4, flag 4
    BYTE field100; // size 1, type 4, flag 4
    BYTE field101; // size 1, type 4, flag 4
    BYTE field102; // size 1, type 4, flag 4
    BYTE field103; // size 1, type 4, flag 4
    BYTE field104; // size 1, type 4, flag 4
    BYTE field105; // size 1, type 4, flag 4
    BYTE field106; // size 1, type 4, flag 4
    DWORD field107; // size 1, type 0, flag 6
};

// Startup_Strings: 2 fields, flags 0, hash FB0657CD
struct Startup_StringsRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 8
};

// TerrainMaterial: 3 fields, flags 0, hash 32573345
struct TerrainMaterialRec // sizeof(0x9)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    BYTE field08; // size 1, type 4, flag 4
};

// TerrainType: 5 fields, flags 0, hash 8F38A4B1
struct TerrainTypeRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

// TextureBlendSet: 10 fields, flags 0, hash 95C24ED7
struct TextureBlendSetRec // sizeof(0x50)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[3]; // size 3, type 0, flag 0
    float field0C[3]; // size 3, type 3, flag 0
    float field18[3]; // size 3, type 3, flag 0
    float field24[3]; // size 3, type 3, flag 0
    float field30[3]; // size 3, type 3, flag 0
    float field3C[4]; // size 4, type 3, flag 0
    BYTE field4C; // size 1, type 4, flag 4
    BYTE field4D; // size 1, type 4, flag 4
    BYTE field4E; // size 1, type 4, flag 4
    BYTE field4F; // size 1, type 4, flag 4
};

// VideoHardware: 22 fields, flags 0, hash 404980FC
struct VideoHardwareRec // sizeof(0x36)
{
    char* field00; // size 1, type 2, flag 0
    char* field04; // size 1, type 2, flag 0
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    BYTE field0C; // size 1, type 4, flag 0
    BYTE field0D; // size 1, type 4, flag 0
    BYTE field0E; // size 1, type 4, flag 0
    BYTE field0F; // size 1, type 4, flag 0
    BYTE field10; // size 1, type 4, flag 0
    BYTE field11; // size 1, type 4, flag 0
    BYTE field12; // size 1, type 4, flag 0
    BYTE field13; // size 1, type 4, flag 0
    BYTE field14; // size 1, type 4, flag 0
    BYTE field15; // size 1, type 4, flag 0
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field1A; // size 1, type 0, flag 2
    DWORD field1E; // size 1, type 0, flag 2
    DWORD field22; // size 1, type 0, flag 2
    DWORD field26; // size 1, type 0, flag 2
    DWORD field2A; // size 1, type 0, flag 2
    DWORD field2E; // size 1, type 0, flag 2
    DWORD field32; // size 1, type 0, flag 2
};

// WMOAreaTable: 15 fields, flags 0, hash C74FBDEB
struct WMOAreaTableRec // sizeof(0x22)
{
    DWORD field00; // size 1, type 0, flag 0
    char* field04; // size 1, type 2, flag 8
    WORD field08; // size 1, type 5, flag 4
    WORD field0A; // size 1, type 5, flag 4
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    WORD field10; // size 1, type 5, flag 4
    WORD field12; // size 1, type 5, flag 4
    WORD field14; // size 1, type 5, flag 4
    BYTE field16; // size 1, type 4, flag 4
    BYTE field17; // size 1, type 4, flag 4
    BYTE field18; // size 1, type 4, flag 4
    BYTE field19; // size 1, type 4, flag 4
    DWORD m_ID; // size 1, type 0, flag 2
    DWORD field1E; // size 1, type 0, flag 6
};

// Weather: 14 fields, flags 0, hash C3062B9A
struct WeatherRec // sizeof(0x39)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    float field08; // size 1, type 3, flag 0
    float field0C[3]; // size 3, type 3, flag 0
    char* field18; // size 1, type 2, flag 0
    float field1C; // size 1, type 3, flag 0
    float field20; // size 1, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28; // size 1, type 3, flag 0
    float field2C; // size 1, type 3, flag 0
    WORD field30; // size 1, type 5, flag 4
    BYTE field32; // size 1, type 4, flag 4
    BYTE field33; // size 1, type 4, flag 4
    BYTE field34; // size 1, type 4, flag 4
    DWORD field35; // size 1, type 0, flag 6
};

// WindSettings: 10 fields, flags 0, hash 72B25981
struct WindSettingsRec // sizeof(0x3D)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00; // size 1, type 3, flag 0
    float field04[3]; // size 3, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    float field14; // size 1, type 3, flag 0
    float field18[3]; // size 3, type 3, flag 0
    float field24; // size 1, type 3, flag 0
    float field28[3]; // size 3, type 3, flag 0
    float field34; // size 1, type 3, flag 0
    float field38; // size 1, type 3, flag 0
    BYTE field3C; // size 1, type 4, flag 4
};

// ZoneLight: 3 fields, flags 0, hash 59F2EB50
struct ZoneLightRec // sizeof(0x8)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    char* field00; // size 1, type 2, flag 0
    WORD field04; // size 1, type 5, flag 4
    WORD field06; // size 1, type 5, flag 4
};

// ZoneLightPoint: 3 fields, flags 0, hash 1CF9216D
struct ZoneLightPointRec // sizeof(0xB)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    float field00[2]; // size 2, type 3, flag 0
    WORD field08; // size 1, type 5, flag 4
    BYTE field0A; // size 1, type 4, flag 4
};

// ConversationLine: 8 fields, flags 1, hash C794A036
struct ConversationLineRec // sizeof(0x13)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 4
    DWORD field04; // size 1, type 0, flag 4
    DWORD field08; // size 1, type 0, flag 0
    WORD field0C; // size 1, type 5, flag 4
    WORD field0E; // size 1, type 5, flag 4
    BYTE field10; // size 1, type 4, flag 4
    BYTE field11; // size 1, type 4, flag 4
    BYTE field12; // size 1, type 4, flag 4
};

// Itemsparse: 63 fields, flags 1, hash 919BE54E
struct ItemsparseRec // sizeof(0x102)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00[3]; // size 3, type 0, flag 0
    float field0C; // size 1, type 3, flag 0
    float field10; // size 1, type 3, flag 0
    DWORD field14; // size 1, type 0, flag 4
    DWORD field18; // size 1, type 0, flag 4
    DWORD field1C; // size 1, type 0, flag 0
    DWORD field20; // size 1, type 0, flag 0
    DWORD field24; // size 1, type 0, flag 4
    DWORD field28; // size 1, type 0, flag 0
    DWORD field2C; // size 1, type 0, flag 0
    DWORD field30[10]; // size 10, type 0, flag 0
    float field58[10]; // size 10, type 3, flag 0
    float field80; // size 1, type 3, flag 0
    char* field84; // size 1, type 2, flag 8
    char* field88; // size 1, type 2, flag 8
    char* field8C; // size 1, type 2, flag 8
    char* field90; // size 1, type 2, flag 8
    char* field94; // size 1, type 2, flag 8
    DWORD field98; // size 1, type 0, flag 4
    float field9C; // size 1, type 3, flag 0
    DWORD fieldA0; // size 1, type 0, flag 4
    float fieldA4; // size 1, type 3, flag 0
    WORD fieldA8; // size 1, type 5, flag 4
    WORD fieldAA; // size 1, type 5, flag 4
    WORD fieldAC; // size 1, type 5, flag 4
    WORD fieldAE; // size 1, type 5, flag 4
    WORD fieldB0[10]; // size 10, type 5, flag 0
    WORD fieldC4; // size 1, type 5, flag 4
    WORD fieldC6; // size 1, type 5, flag 4
    WORD fieldC8; // size 1, type 5, flag 4
    WORD fieldCA; // size 1, type 5, flag 4
    WORD fieldCC; // size 1, type 5, flag 4
    WORD fieldCE; // size 1, type 5, flag 4
    WORD fieldD0; // size 1, type 5, flag 4
    WORD fieldD2; // size 1, type 5, flag 4
    WORD fieldD4; // size 1, type 5, flag 4
    WORD fieldD6; // size 1, type 5, flag 4
    WORD fieldD8; // size 1, type 5, flag 4
    WORD fieldDA; // size 1, type 5, flag 4
    WORD fieldDC; // size 1, type 5, flag 4
    WORD fieldDE; // size 1, type 5, flag 4
    WORD fieldE0; // size 1, type 5, flag 4
    BYTE fieldE2; // size 1, type 4, flag 4
    BYTE fieldE3; // size 1, type 4, flag 4
    BYTE fieldE4; // size 1, type 4, flag 4
    BYTE fieldE5; // size 1, type 4, flag 0
    BYTE fieldE6; // size 1, type 4, flag 4
    BYTE fieldE7; // size 1, type 4, flag 4
    BYTE fieldE8; // size 1, type 4, flag 4
    BYTE fieldE9; // size 1, type 4, flag 4
    BYTE fieldEA[10]; // size 10, type 4, flag 0
    BYTE fieldF4; // size 1, type 4, flag 4
    BYTE fieldF5; // size 1, type 4, flag 4
    BYTE fieldF6; // size 1, type 4, flag 4
    BYTE fieldF7; // size 1, type 4, flag 4
    BYTE fieldF8; // size 1, type 4, flag 4
    BYTE fieldF9; // size 1, type 4, flag 4
    BYTE fieldFA; // size 1, type 4, flag 4
    BYTE fieldFB[3]; // size 3, type 4, flag 4
    BYTE fieldFE; // size 1, type 4, flag 4
    BYTE fieldFF; // size 1, type 4, flag 4
    BYTE field100; // size 1, type 4, flag 4
    BYTE field101; // size 1, type 4, flag 4
};

// WmoMinimapTexture: 5 fields, flags 1, hash B1C5A0F8
struct WmoMinimapTextureRec // sizeof(0xA)
{
    //DWORD m_ID; // size 1, type 0, flag 0
    DWORD field00; // size 1, type 0, flag 0
    WORD field04; // size 1, type 5, flag 0
    WORD field06; // size 1, type 5, flag 4
    BYTE field08; // size 1, type 4, flag 4
    BYTE field09; // size 1, type 4, flag 4
};

