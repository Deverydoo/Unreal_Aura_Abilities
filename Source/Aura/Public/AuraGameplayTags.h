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
 

 /* Vital */
 FGameplayTag Attributes_Vital_Health;
 FGameplayTag Attributes_Vital_Mana;
 

 /* Message */
 FGameplayTag Attributes_Message_HealthPotion;
 FGameplayTag Attributes_Message_HealthCrystal;
 FGameplayTag Attributes_Message_ManaPotion;
 FGameplayTag Attributes_Message_ManaCrystal;

 
protected:

private:
 static FAuraGameplayTags GameplayTags;
};