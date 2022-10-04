#pragma once

#include "tag-version.h"

enum ability_type
{
    ABIL_NON_ABILITY = -1,
    // Innate abilities and (Demonspawn) mutations.
    ABIL_SPIT_POISON = 1,
    ABIL_BREATHE_FIRE,
    ABIL_BREATHE_FROST,
    ABIL_BREATHE_POISON,
    ABIL_BREATHE_LIGHTNING,
    ABIL_BREATHE_POWER,
#if TAG_MAJOR_VERSION == 34
    ABIL_BREATHE_STICKY_FLAME,
#endif
    ABIL_BREATHE_STEAM,
    ABIL_BREATHE_MEPHITIC,
    ABIL_BREATHE_ACID,
    // Others
#if TAG_MAJOR_VERSION == 34
    ABIL_BLINK,
    ABIL_DELAYED_FIREBALL,
#endif
    // Abort duration-based spells
    ABIL_END_TRANSFORMATION,
#if TAG_MAJOR_VERSION == 34
    ABIL_STOP_SINGING, // From song of slaying
    ABIL_CANCEL_PPROJ,
#endif

    // Species-specific abilities.
    // Demonspawn-only
    ABIL_DAMNATION,
    ABIL_WORD_OF_CHAOS,
#if TAG_MAJOR_VERSION == 34
    ABIL_FLY,
    ABIL_WISP_BLINK,
    ABIL_STOP_FLYING,
    ABIL_MUMMY_RESTORATION,
#endif
    // Vampires
    ABIL_TRAN_BAT,
    ABIL_EXSANGUINATE,
    ABIL_REVIVIFY,
#if TAG_MAJOR_VERSION == 34
    ABIL_BOTTLE_BLOOD,
    // Deep Dwarves
    ABIL_HEAL_WOUNDS,
#endif
    // Formicids
    ABIL_DIG,
    ABIL_SHAFT_SELF,
    // Barachim
    ABIL_HOP,
#if TAG_MAJOR_VERSION == 34
    // Armataurs
    ABIL_ROLLING_CHARGE,
#endif
    // Storm Form
    ABIL_BLINKBOLT,
    ABIL_MAX_INTRINSIC = ABIL_BLINKBOLT,

    // Evoking items.
#if TAG_MAJOR_VERSION == 34
    ABIL_EVOKE_BERSERK = 40,
    ABIL_MIN_EVOKE = ABIL_EVOKE_BERSERK,
    ABIL_EVOKE_TELEPORTATION,
    ABIL_EVOKE_BLINK,
#else
    ABIL_EVOKE_BLINK = 40,
    ABIL_MIN_EVOKE = ABIL_EVOKE_BLINK,
#endif
    ABIL_EVOKE_TURN_INVISIBLE,
#if TAG_MAJOR_VERSION == 34
    ABIL_EVOKE_TURN_VISIBLE,
    ABIL_EVOKE_FLIGHT,
    ABIL_EVOKE_STOP_LEVITATING,
    ABIL_EVOKE_FOG,
    ABIL_EVOKE_TELEPORT_CONTROL,
    ABIL_EVOKE_TWISTER,
    ABIL_EVOKE_RATSKIN,
    ABIL_EVOKE_THUNDER,
#endif
    ABIL_EVOKE_ASMODEUS,
    ABIL_EVOKE_DISPATER,
    ABIL_EVOKE_OLGREB,
    ABIL_MAX_EVOKE = ABIL_EVOKE_ASMODEUS,

    // Divine abilities
    // Zin
#if TAG_MAJOR_VERSION == 34
    ABIL_ZIN_SUSTENANCE = 1000,
    ABIL_FIRST_RELIGIOUS_ABILITY = ABIL_ZIN_SUSTENANCE,
    ABIL_ZIN_RECITE,
#else
    ABIL_ZIN_RECITE = 1000,
    ABIL_FIRST_RELIGIOUS_ABILITY = ABIL_ZIN_RECITE,
#endif
    ABIL_ZIN_VITALISATION,
    ABIL_ZIN_IMPRISON,
    ABIL_ZIN_SANCTUARY,
#if TAG_MAJOR_VERSION == 34
    ABIL_ZIN_CURE_ALL_MUTATIONS,
#endif
    ABIL_ZIN_DONATE_GOLD,
    // TSO
    ABIL_TSO_DIVINE_SHIELD = 1010,
    ABIL_TSO_CLEANSING_FLAME,
    ABIL_TSO_SUMMON_DIVINE_WARRIOR,
    ABIL_TSO_BLESS_WEAPON,
    // Kiku
#if TAG_MAJOR_VERSION == 34
    ABIL_KIKU_RECEIVE_CORPSES = 1020,
#endif
    ABIL_KIKU_TORMENT,
    ABIL_KIKU_BLESS_WEAPON,
    ABIL_KIKU_GIFT_CAPSTONE_SPELLS,
    ABIL_KIKU_UNEARTH_WRETCHES,
    // Yredelemnul
#if TAG_MAJOR_VERSION == 34
    ABIL_YRED_INJURY_MIRROR = 1030,
    ABIL_YRED_ANIMATE_REMAINS,
    ABIL_YRED_RECALL_UNDEAD_HARVEST,
    ABIL_YRED_ANIMATE_DEAD,
#else
    ABIL_YRED_RECALL_UNDEAD_HARVEST = 1030,
#endif
    ABIL_YRED_DRAIN_LIFE,
    ABIL_YRED_BIND_SOUL,
    ABIL_YRED_DARK_BARGAIN,
    // Vehumet
    // = 1040
    // Okawaru
    ABIL_OKAWARU_HEROISM = 1050,
    ABIL_OKAWARU_FINESSE,
    ABIL_OKAWARU_DUEL,
    // Makhleb
    ABIL_MAKHLEB_MINOR_DESTRUCTION = 1060,
    ABIL_MAKHLEB_LESSER_SERVANT_OF_MAKHLEB,
    ABIL_MAKHLEB_MAJOR_DESTRUCTION,
    ABIL_MAKHLEB_GREATER_SERVANT_OF_MAKHLEB,
    // Sif Muna
    ABIL_SIF_MUNA_CHANNEL_ENERGY = 1070,
    ABIL_SIF_MUNA_FORGET_SPELL,
#if TAG_MAJOR_VERSION == 34
    ABIL_SIF_MUNA_DIVINE_ENERGY,
    ABIL_SIF_MUNA_STOP_DIVINE_ENERGY,
#endif
    ABIL_SIF_MUNA_DIVINE_EXEGESIS,
    // Trog
    ABIL_TROG_BERSERK = 1080,
    ABIL_TROG_HAND,
    ABIL_TROG_BROTHERS_IN_ARMS,
    // Elyvilon
#if TAG_MAJOR_VERSION == 34
    ABIL_ELYVILON_LIFESAVING = 1090,
    ABIL_ELYVILON_LESSER_HEALING,
    ABIL_ELYVILON_LESSER_HEALING_OTHERS,
    ABIL_ELYVILON_PURIFICATION,
#else
    ABIL_ELYVILON_PURIFICATION = 1090,
#endif
    ABIL_ELYVILON_HEAL_SELF,
    ABIL_ELYVILON_HEAL_OTHER,
    ABIL_ELYVILON_DIVINE_VIGOUR,
    // Lugonu
    ABIL_LUGONU_ABYSS_EXIT = 1100,
    ABIL_LUGONU_BEND_SPACE,
    ABIL_LUGONU_BANISH,
    ABIL_LUGONU_CORRUPT,
    ABIL_LUGONU_ABYSS_ENTER,
    ABIL_LUGONU_BLESS_WEAPON,
    // Nemelex
#if TAG_MAJOR_VERSION == 34
    ABIL_NEMELEX_DRAW_ONE = 1110,
    ABIL_NEMELEX_PEEK_TWO,
#endif
    ABIL_NEMELEX_TRIPLE_DRAW = 1112,
    ABIL_NEMELEX_DEAL_FOUR,
    ABIL_NEMELEX_STACK_FIVE,

    ABIL_NEMELEX_DRAW_STACK,
    ABIL_NEMELEX_DRAW_ESCAPE,
        ABIL_NEMELEX_FIRST_DECK = ABIL_NEMELEX_DRAW_ESCAPE,
    ABIL_NEMELEX_DRAW_DESTRUCTION,
    ABIL_NEMELEX_DRAW_SUMMONING,
        ABIL_NEMELEX_LAST_DECK = ABIL_NEMELEX_DRAW_SUMMONING,
    // Beogh
    ABIL_BEOGH_SMITING = 1120,
    ABIL_BEOGH_RECALL_ORCISH_FOLLOWERS,
    ABIL_BEOGH_GIFT_ITEM,
    ABIL_BEOGH_RESURRECTION,
    // Jiyva
#if TAG_MAJOR_VERSION == 34
    ABIL_JIYVA_CALL_JELLY = 1130,
    ABIL_JIYVA_JELLY_PARALYSE,
    ABIL_JIYVA_SLIMIFY,
#else
    ABIL_JIYVA_SLIMIFY = 1130,
#endif
#if TAG_MAJOR_VERSION == 34
    ABIL_JIYVA_CURE_BAD_MUTATION,
#endif
    ABIL_JIYVA_OOZEMANCY,
    // Fedhas
    ABIL_FEDHAS_WALL_OF_BRIARS = 1140,
    ABIL_FEDHAS_GROW_BALLISTOMYCETE,
    ABIL_FEDHAS_OVERGROW,
    ABIL_FEDHAS_GROW_OKLOB,
    // Cheibriados
    ABIL_CHEIBRIADOS_TIME_STEP = 1151,
    ABIL_CHEIBRIADOS_TIME_BEND,
    ABIL_CHEIBRIADOS_SLOUCH,
    ABIL_CHEIBRIADOS_DISTORTION,
    // Ashenzari
#if TAG_MAJOR_VERSION == 34
    ABIL_ASHENZARI_SCRYING = 1160,
    ABIL_ASHENZARI_TRANSFER_KNOWLEDGE,
    ABIL_ASHENZARI_END_TRANSFER,
    ABIL_ASHENZARI_CURSE,
#else
    ABIL_ASHENZARI_CURSE = 1160,
#endif
    ABIL_ASHENZARI_UNCURSE,
    // Dithmenos
    ABIL_DITHMENOS_SHADOW_STEP = 1170,
    ABIL_DITHMENOS_SHADOW_FORM,
    // Gozag
    ABIL_GOZAG_POTION_PETITION = 1180,
    ABIL_GOZAG_CALL_MERCHANT,
    ABIL_GOZAG_BRIBE_BRANCH,
    // Qazlal
    ABIL_QAZLAL_UPHEAVAL = 1190,
    ABIL_QAZLAL_ELEMENTAL_FORCE,
    ABIL_QAZLAL_DISASTER_AREA,
    // Ru
    ABIL_RU_DRAW_OUT_POWER = 1200,
    ABIL_RU_POWER_LEAP,
    ABIL_RU_APOCALYPSE,

    ABIL_RU_SACRIFICE_PURITY,
        ABIL_FIRST_SACRIFICE = ABIL_RU_SACRIFICE_PURITY,
    ABIL_RU_SACRIFICE_WORDS,
    ABIL_RU_SACRIFICE_DRINK,
    ABIL_RU_SACRIFICE_ESSENCE,
    ABIL_RU_SACRIFICE_HEALTH,
    ABIL_RU_SACRIFICE_STEALTH,
    ABIL_RU_SACRIFICE_ARTIFICE,
    ABIL_RU_SACRIFICE_LOVE,
    ABIL_RU_SACRIFICE_COURAGE,
    ABIL_RU_SACRIFICE_ARCANA,
    ABIL_RU_SACRIFICE_NIMBLENESS,
    ABIL_RU_SACRIFICE_DURABILITY,
    ABIL_RU_SACRIFICE_HAND,
    ABIL_RU_SACRIFICE_EXPERIENCE,
    ABIL_RU_SACRIFICE_SKILL,
    ABIL_RU_SACRIFICE_EYE,
    ABIL_RU_SACRIFICE_RESISTANCE,
        ABIL_FINAL_SACRIFICE = ABIL_RU_SACRIFICE_RESISTANCE,
    ABIL_RU_REJECT_SACRIFICES,

#if TAG_MAJOR_VERSION == 34
    // Pakellas
    ABIL_PAKELLAS_DEVICE_SURGE = 1230,
    ABIL_PAKELLAS_QUICK_CHARGE,
    ABIL_PAKELLAS_SUPERCHARGE,
#endif

    // Uskayaw
    ABIL_USKAYAW_STOMP = 1240,
    ABIL_USKAYAW_LINE_PASS,
    ABIL_USKAYAW_GRAND_FINALE,

    // Hepliaklqana
    ABIL_HEPLIAKLQANA_RECALL = 1250,
    ABIL_HEPLIAKLQANA_IDEALISE,
    ABIL_HEPLIAKLQANA_TRANSFERENCE,

    ABIL_HEPLIAKLQANA_TYPE_KNIGHT,
        ABIL_HEPLIAKLQANA_FIRST_TYPE = ABIL_HEPLIAKLQANA_TYPE_KNIGHT,
    ABIL_HEPLIAKLQANA_TYPE_BATTLEMAGE,
    ABIL_HEPLIAKLQANA_TYPE_HEXER,
        ABIL_HEPLIAKLQANA_LAST_TYPE = ABIL_HEPLIAKLQANA_TYPE_HEXER,

    ABIL_HEPLIAKLQANA_IDENTITY,

#if TAG_MAJOR_VERSION == 34
    ABIL_HEPLIAKLQANA_KNIGHT_REACHING,
    ABIL_HEPLIAKLQANA_KNIGHT_CLEAVING,
    ABIL_HEPLIAKLQANA_BATTLEMAGE_FORCE_LANCE,
    ABIL_HEPLIAKLQANA_BATTLEMAGE_MAGMA,
    ABIL_HEPLIAKLQANA_HEXER_MASS_CONFUSION,
    ABIL_HEPLIAKLQANA_HEXER_ENGLACIATION,
#endif

    // Wu Jian
    ABIL_WU_JIAN_SERPENTS_LASH = 1280,
    ABIL_WU_JIAN_HEAVENLY_STORM,
    ABIL_WU_JIAN_LUNGE,
    ABIL_WU_JIAN_WHIRLWIND,
    ABIL_WU_JIAN_WALLJUMP,

    // Ignis
#if TAG_MAJOR_VERSION == 34
    ABIL_IGNIS_SEA_OF_FIRE = 1300,
    ABIL_IGNIS_FOXFIRE,
    ABIL_IGNIS_RISING_FLAME,
    ABIL_IGNIS_FIERY_ARMOUR,
#else
    ABIL_IGNIS_FIERY_ARMOUR = 1300,
    ABIL_IGNIS_FOXFIRE,
    ABIL_IGNIS_RISING_FLAME,
#endif

    // For both Yred and Beogh
    ABIL_STOP_RECALL = 1500,
    ABIL_LAST_RELIGIOUS_ABILITY = ABIL_STOP_RECALL,

    // General divine (pseudo) abilities.
    ABIL_RENOUNCE_RELIGION,
    ABIL_CONVERT_TO_BEOGH,

#ifdef WIZARD
    ABIL_WIZ_BUILD_TERRAIN = 10000,
    ABIL_FIRST_WIZ = ABIL_WIZ_BUILD_TERRAIN,
    ABIL_WIZ_SET_TERRAIN,
    ABIL_WIZ_CLEAR_TERRAIN,
#endif
    NUM_ABILITIES
};
