// Copyright Folkvang Studios inc

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/*
 * GameplayTags
 * Singleton for native gameplay tags.  
 */
struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get() { return GameplayTags; }
 static void InitializeNativeGameplayTags();

 /* Primary */
 FGameplayTag Attributes_Primary_Intelligence;
 FGameplayTag Attributes_Primary_Resilience;
 FGameplayTag Attributes_Primary_Strength;
 FGameplayTag Attributes_Primary_Vigor;

 /* Secondary */
 FGameplayTag Attributes_Secondary_Armor;
 FGameplayTag Attributes_Secondary_ArmorPenetration;
 FGameplayTag Attributes_Secondary_BlockChance;
 FGameplayTag Attributes_Secondary_CriticalHitChance;
 FGameplayTag Attributes_Secondary_CriticalHitDamage;
 FGameplayTag Attributes_Secondary_CriticalHitResistance;
 FGameplayTag Attributes_Secondary_HealthRegeneration;
 FGameplayTag Attributes_Secondary_ManaRegeneration;
 FGameplayTag Attributes_Secondary_MaxHealth;
 FGameplayTag Attributes_Secondary_MaxMana;

 /* Resistances */
 FGameplayTag Attributes_Resistance_Physical; // Boring regular damage.
 FGameplayTag Attributes_Resistance_Blunt; // Boring regular damage.
 FGameplayTag Attributes_Resistance_Pierce; // Boring regular damage.
 FGameplayTag Attributes_Resistance_Fire; // Boring regular damage.
 FGameplayTag Attributes_Resistance_Ice; // Boring regular damage.
 FGameplayTag Attributes_Resistance_Lightning; // Boring regular damage.
 FGameplayTag Attributes_Resistance_Arcane; // Boring regular damage.

 
 /* Vital */
 FGameplayTag Attributes_Vital_Health;
 FGameplayTag Attributes_Vital_Mana;
 

 /* Message */
 FGameplayTag Attributes_Message_HealthPotion;
 FGameplayTag Attributes_Message_HealthCrystal;
 FGameplayTag Attributes_Message_ManaPotion;
 FGameplayTag Attributes_Message_ManaCrystal;

 /* Input Tags */
 FGameplayTag InputTag_LMB;
 FGameplayTag InputTag_RMB;
 FGameplayTag InputTag_1;
 FGameplayTag InputTag_2;
 FGameplayTag InputTag_3;
 FGameplayTag InputTag_4;

 /* Damage Types */
 FGameplayTag Damage; // Boring regular damage.
 FGameplayTag Damage_Physical; // Boring regular damage.
 FGameplayTag Damage_Blunt; // Boring regular damage.
 FGameplayTag Damage_Pierce; // Boring regular damage.
 FGameplayTag Damage_Fire; // Boring regular damage.
 FGameplayTag Damage_Ice; // Boring regular damage.
 FGameplayTag Damage_Lightning; // Boring regular damage.
 FGameplayTag Damage_Arcane; // Boring regular damage.

 TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;
 
 // Tags dealing with Attacks.  
 FGameplayTag Abilities_Attack;

 

 // Damage reacts.
 FGameplayTag Effects_HitReact;
 
 /* Event Tags */
 FGameplayTag Event_Montage_Attack_Firebolt;
 FGameplayTag Event_Montage_Attack_Melee;
 
private:
 static FAuraGameplayTags GameplayTags;
};