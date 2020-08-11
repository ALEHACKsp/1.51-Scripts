#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 0x00000001;
	iLocal_3 = 0x00000086;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000001;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000086;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x0000000C;
	iLocal_11 = 0x0000000C;
	fLocal_14 = 0.001f;
	iLocal_17 = 0xFFFFFFFF;
	sLocal_20 = "NULL";
	while (0x00000001)
	{
		if (func_7() || Global_19BCAD == 0x00000001)
		{
			func_6();
		}
		if (func_1(&uLocal_21, &Global_4713A))
		{
			func_6();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (uParam0->f_2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), uParam0->f_1)) >= uParam0->f_3)
		{
			func_5();
		}
	}
	else
	{
		if (!*uParam1)
		{
			return 0x00000000;
		}
		iVar4 = 0x00000005;
		if (unk_0x37A36997770AEFC3())
		{
			iVar5 = 0x0000092C;
			iVar6 = (uParam0->f_4 + iVar4);
			iVar7 = func_4(*uParam0);
			iVar2 = uParam0->f_4;
			while (iVar2 <= iVar6)
			{
				if (iVar2 < iVar5)
				{
					func_2(iVar2, &Var3);
					if (iVar2 >= Var3.f_4 && iVar2 != 0x0000001B)
					{
						if (iVar7 != 0x00000000 && Var3.f_5 != 0x00000000)
						{
							if (unk_0x2C74C956CB924005(iVar7, Var3.f_5, &fVar0))
							{
								if (fVar0 > Var3.f_1 || fVar0 < Var3)
								{
									uParam0->f_2 = 0x00000001;
									uParam0->f_3 = unk_0x09AC81E49EA267F7(0x00004E20, 0x00007530);
									uParam0->f_1 = unk_0x1C0640BA9A7327B3();
								}
							}
							else if (unk_0x3D810BD7C6FDF2DD(iVar7, Var3.f_5, &iVar1))
							{
								if (iVar1 > Var3.f_3 || iVar1 < Var3.f_2)
								{
									uParam0->f_2 = 0x00000001;
									uParam0->f_3 = unk_0x09AC81E49EA267F7(0x00004E20, 0x00007530);
									uParam0->f_1 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
				}
				uParam0->f_4++;
				iVar2++;
			}
			if (uParam0->f_4 >= 0x0000092C)
			{
				uParam0->f_4 = 0x00000000;
				*uParam0++;
				if (*uParam0 >= 0x0000001D)
				{
					*uParam0 = 0x00000000;
					*uParam1 = 0x00000000;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_2(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CASH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("MAX_HEALTH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("MAX_ARMOR_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("HOLD_UP_CASH_REWARD_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("HEALTH_REGEN_RATE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("HEALTH_REGEN_MAX_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("PED_DROP_CASH_MULTIPLIER");
			uParam1->f_4 = 0x00000000;
			break;
		
		case 0x00000008:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x307FD9CE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000009:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_1_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000000A:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_2_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000000B:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_3_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_4_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000000D:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_5_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = 2000f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("HIGH_TUTORIAL_WALLET_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = 2000f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = joaat("LOW_TUTORIAL_WALLET_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("HIGH_TUTORIAL_BANK_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("LOW_TUTORIAL_BANK_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WIN_DEATHMATCH_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("KILLSTREAK_BONUS_ON_DEATHMATCH_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WIN_RACE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("CASH_MODIFIER_CRATE_DROP_GANG_ATTACK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = 0f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("HIGH_ROCKSTAR_MISSIONS_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("LOW_ROCKSTAR_MISSIONS_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("CARMOD_CAR_VAL_SELL_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("IMP_EXP_EARN_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("EARNINGS_IMPORT_EXPORT_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("HIGH_HOLD_UPS_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = joaat("LOW_HOLD_UPS_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("HIGH_LESTER_NPC_TARGET_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("LOW_LESTER_NPC_TARGET_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_CASH_AWARD_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER_LO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER_HI");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("IMPROMPTU_DM_ENTRY_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_EXPENSES_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_ENTRY_FEE_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("MAX_BET_LIMIT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("MIN_BET_LIMIT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = 50f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("SHORT_ODDS_LIMIT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = 1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("LONG_ODDS_LIMIT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = 10f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("BOOKIE_RAKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = 0f;
			uParam1->f_1 = 120000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0001D4C0;
			uParam1->f_5 = joaat("MAX_BET_TOTAL_AMOUNT_ON_A_SINGLE_PLAYER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ARMORED_TRUCK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_BOUNTIES_KILLER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_BOUNTIES_TARGET");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_CRATE_DROP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_CRATE_DROP_ENEMY_KILLS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_GANG_ATTACK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_GANG_ATTACK_ENEMY_KILLS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_HOLD_UPS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_IMPORTEXPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LESTER_NPC_TARGET");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_ARM_WRESTLING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_GOLF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_ALL_GOLF_BONUSES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_SHOOTING_RANGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_WIN");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_TAKING_PART");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_GAME");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_SET");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_RALLY");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000043:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_DEAD_CENTRE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_IN_THE_CIRCLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_CLIP_THE_OUTER_RING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_RACE_TO_POINT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_KILL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_1ST_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_2ND_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_3RD_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_3_KILLS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_6_KILLS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_10_KILLS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_HEADSHOT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000004F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_END_KILLSTREAK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000050:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_REVENGE_KILLSTREAK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000051:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_POWER_PLAY_PLAYER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_PODIUM_FINISH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_WIN_WITHOUT_DYING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DM_POWER_PLAYS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DM_FINAL_KILL_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000059:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_RUNOVERUSINGVEHICLEDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000005A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_2_WITHIN_10_SECONDSDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000005B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_FIRST_30_SECONDSDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000005C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_CLOSE_TO_DEATHDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000005D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LEAST_5_HEADSHOT_KILLSDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPLAYERMELEEATTACK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_MORE_KILLS_NO_HEALTH_PACKSDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_WITH_A_KD_RATIO_OF_AT_LEAST_2DM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000061:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_WIN_USING_ONLY_PISTOLDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_TOP_3DM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_GET_A_KILL_STREAKVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_TWO_ENEMIES_WITHIN_10SEC_OF_EACH_OTHERVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_ENEMY_WITHIN_THE_60_SECONDSVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLENEMY_WHILE_YOUR_VEHICLE_IS_ON_FIREVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_RECOVER_FROM_DEATHSTREAK_FINISH_WITH_MORE_KILLS_THAN_DEATHSVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000068:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPLAYERWHENDEADVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000069:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISHMOREKILLSTHANDEATHSVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000006A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_GETFIRSTKILLVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000006B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPOWERPLAYERVDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000006C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISHVDMINTOP3VDM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000006D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_MISSIONS_BONUSES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000006E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_ALL_ENEMIES_ON_A_MISSION");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000006F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ONLY_KILL_ENEMIES_WITH_HEADSHOTS_INDIVIDUAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000070:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ONLY_KILL_ENEMIES_WITH_HEADSHOTS_TEAM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000071:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_NOT_LOSING_ANY_LIVES_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_DELIVER_A_PACKAGE_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000073:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_DIFFICULTY_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000074:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_WINNERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000075:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_LOSERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_SURVIVOR_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_1ST_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_2ND_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_3RD_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_5_TIMES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000007B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_10_TIMES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000007C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_15_TIMES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_SLIPSTREAM_FOR_5_SECONDS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_BE_IN_FIRST_PLACE_FOR_A_WHOLE_LAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000007F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_GO_IN_TO_1ST_PLACE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_CLEAN_LAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FASTEST_LAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_PERSONAL_BEST_LAP");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000083:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_FLYING_UNDER_BRIDGES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000084:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_WAVE_REACHED");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_ENEMY_KILL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_VEHICLE_DESTROYED");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000087:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_BRONZE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000088:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_SILVER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000089:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_GOLD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000008A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_PLATINUM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000008B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_1_BUDDY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000008C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_2_BUDDIES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000008D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_3_BUDDIES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000008E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_1_STAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000008F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_2_STAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000090:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_3_STAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000091:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_4_STAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000092:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_5_STAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000093:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_TIME_WITH_5STAR_WANTED_LEVEL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000094:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_STUNT_JUMPS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000095:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xDAD728C5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("PSANDQS_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("EGOCHASER_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("METEORITE_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("REDWOOD_HEALTH_DEPLETE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("ORANGOTANG_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("BOURGEOIX_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_PLATINUM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("CRATE_DROP_CASH_MAX");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("CRATE_DROP_CASH_TOTAL_MAX");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = joaat("CRATE_DROP_SPECIAL_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = -1f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("CRATE_DROP_XP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("CRATE_DROP_SPECIAL_XP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A2:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_BULLSEYE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A3:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_LEG_WON");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A4:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_TAKING_PART");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A5:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_MATCH_WIN");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A6:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("XP_MODIFIER_BUDDY_IN_CAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A7:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("KILLSTREAK_BONUS_ON_MISSION_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A8:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("HOSPITAL_BILL_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000A9:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("CASH_DROP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000AA:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("WANTED_LEVEL_BAIL_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000AB:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("RACE_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000AC:
			*uParam1 = 50f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("RACE_RP_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000AD:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("RACE_RP_MIN_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000AE:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000004;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("RACE_RP_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000AF:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = joaat("RACE_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B0:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("RACE_RP_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B1:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("RACE_RP_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("RACE_RP_END_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B3:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("DM_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B4:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("DM_RP_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B5:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("DM_RP_MIN_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B6:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000004;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("DM_RP_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B7:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = joaat("DM_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B8:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("DM_RP_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000B9:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("DM_RP_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000BA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("DM_RP_END_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000BB:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("PARACHUTING_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000BC:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("PARACHUTING_RP_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000BD:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("PARACHUTING_RP_MIN_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000BE:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000004;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("PARACHUTING_RP_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000BF:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = joaat("PARACHUTING_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C0:
			*uParam1 = 200f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_RP_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C1:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("PARACHUTING_RP_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("PARACHUTING_RP_END_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C3:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("PARACHUTING_RP_POINT_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C4:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("PARACHUTING_RP_POINT_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C5:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("LTS_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C6:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("LTS_RP_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C7:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("LTS_RP_MIN_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C8:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0x00000004;
			uParam1->f_3 = 0x00000010;
			uParam1->f_5 = joaat("LTS_RP_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000C9:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = joaat("LTS_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000CA:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_RP_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000CB:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("LTS_RP_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000CC:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("LTS_RP_END_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000CD:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000000C;
			uParam1->f_5 = joaat("RACE_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000CE:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("RACE_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000CF:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("RACE_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D0:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("RACE_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D1:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("RACE_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D2:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("RACE_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D3:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("RACE_END_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D4:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000000C;
			uParam1->f_5 = joaat("DM_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D5:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("DM_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D6:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("DM_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000464:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0x00000004;
			uParam1->f_3 = 0x00000010;
			uParam1->f_5 = 0xF79AD57A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000465:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0x00000004;
			uParam1->f_3 = 0x00000010;
			uParam1->f_5 = 0xF4A04E86;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D7:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("DM_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D8:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("DM_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000D9:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("DM_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000DA:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("DM_END_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000DB:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000000C;
			uParam1->f_5 = joaat("PARACHUTING_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000DC:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("PARACHUTING_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000DD:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("PARACHUTING_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000DE:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("PARACHUTING_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000DF:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("PARACHUTING_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E0:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("PARACHUTING_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E1:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("PARACHUTING_END_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E2:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000000C;
			uParam1->f_5 = joaat("LTS_PLAYER_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E3:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000032;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("LTS_BASIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E4:
			*uParam1 = 2f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x0000000C;
			uParam1->f_5 = joaat("LTS_MAX_PLAYERS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E5:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("LTS_MAX_JOB_DECIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E6:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("LTS_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E7:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000014;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("LTS_RANK_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E8:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("LTS_END_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000E9:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000EA:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000EB:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000EC:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000ED:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000EE:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000EF:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F0:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F1:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F2:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F3:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F4:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F5:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F6:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F7:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F8:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000F9:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000FA:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000FB:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000FC:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000FD:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000FE:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000000FF:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000100:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000101:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000102:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000103:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000104:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000105:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000106:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000107:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000108:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000109:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000010A:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_1MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000010B:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000010C:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_2MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000010D:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000010E:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_3MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000010F:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000110:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_4MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000111:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000112:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_1MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000113:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000114:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_2MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000115:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000116:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_3MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000117:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000118:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_4MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000119:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000011A:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000011B:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000011C:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000011D:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000011E:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000011F:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000120:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000121:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000122:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000123:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000124:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000125:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000126:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000127:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000128:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000129:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = joaat("RP_REWARD_PER_LIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000012B:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("MAX_CASH_WAGER_FOR_HEAD_TO_HEAD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000012A:
			*uParam1 = 1f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("ELO_BANDING_SPACING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000012C:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("MAX_CASH_WAGER_FOR_CREW_CHALLENGES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000012D:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("RP_REWARD_LIKE_CAP");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000019:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("HIGH_SELLING_VEHICLES_MAX_VALUE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xD4E21C39;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000012F:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 0x0000002D;
			uParam1->f_3 = 0x00000037;
			uParam1->f_5 = joaat("CHEAT_THRESHOLD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000130:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 0x0000001E;
			uParam1->f_3 = 0x00000031;
			uParam1->f_5 = joaat("CHEAT_THRESHOLD_NOTCHEATER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000131:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x0000000F;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("CHEAT_RESET_MINUTES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000132:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000133:
			*uParam1 = 0f;
			uParam1->f_1 = 6000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001770;
			uParam1->f_5 = joaat("GOOD_BOY_CASH_AWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000134:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY_HELPFUL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000135:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY_FRIENDLY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000136:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_GRIEFING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000137:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_LANGUAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000138:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("AMOUNT_TO_DESTORYED_PVEHICLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000139:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("AMOUNT_TO_VOTED_OUT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000013A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_VC_ANNOY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000013B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_TAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000013C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_UGC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000013D:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 0x0000002D;
			uParam1->f_3 = 0x00000037;
			uParam1->f_5 = joaat("BADSPORT_THRESHOLD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000013E:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 0x0000001E;
			uParam1->f_3 = 0x00000031;
			uParam1->f_5 = joaat("BADSPORT_THRESHOLD_NOTCHEATER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000013F:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x0000000F;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("BADSPORT_RESET_MINUTES");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000140:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000006;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_1ST_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000141:
			*uParam1 = 0f;
			uParam1->f_1 = 8f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000008;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_2ND_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000142:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000010;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_3RD_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000143:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000020;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_4TH_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000144:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000040;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_5TH_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000145:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000040;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_6TH_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000146:
			*uParam1 = 0f;
			uParam1->f_1 = 128f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000080;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_7TH_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000147:
			*uParam1 = 0f;
			uParam1->f_1 = 256f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000100;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_8TH_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000148:
			*uParam1 = 0f;
			uParam1->f_1 = 512f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000200;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_9TH_OFFENCE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000149:
			*uParam1 = 0f;
			uParam1->f_1 = 1024f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000400;
			uParam1->f_5 = 0x33FCA1AF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000014A:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BADSPORT_BY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000014B:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("KICK_VOTES_NEEDED_RATIO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000014C:
			*uParam1 = 400f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000190;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xB2111FE4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000014D:
			*uParam1 = 70f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000046;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("SHOP_DISCOUNT_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000014E:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("SHOP_GOODBOY_DISCOUNT_PERCENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000014F:
			*uParam1 = 200f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0x000000C8;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = 0x70371A81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000150:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x0000000A;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("COMMENDREPORT_MAX_STRENGTH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000151:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("MAX_NUMBER_STOLEN_VEHICLES_SOLD_DAILY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000152:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("SURVIVAL_CASH_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000153:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("ROCKSTAR_VERIFIED_RP_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000154:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("IDLE_DM_BOUNTY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000156:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("Selling_Stolen_Personal_Vehicle_Cap");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000155:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("Selling_Purchased_Personal_Vehicle_Cap");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000157:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("Selling_Stolen_Vehicle_Cap");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000158:
			*uParam1 = 6000f;
			uParam1->f_1 = 15700f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00003D54;
			uParam1->f_5 = joaat("ASSAULT_SMG_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000159:
			*uParam1 = 6000f;
			uParam1->f_1 = 16300f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00003FAC;
			uParam1->f_5 = joaat("CARBINE_RIFLE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000015A:
			*uParam1 = 7000f;
			uParam1->f_1 = 17800f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004588;
			uParam1->f_5 = joaat("ADVANCED_RIFLE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000015B:
			*uParam1 = 7000f;
			uParam1->f_1 = 16900f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004204;
			uParam1->f_5 = joaat("MG_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000015C:
			*uParam1 = 7000f;
			uParam1->f_1 = 18500f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004844;
			uParam1->f_5 = joaat("COMBAT_MG_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000015D:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("ASSAULT_SHOTGUN_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000015E:
			*uParam1 = 19000f;
			uParam1->f_1 = 47700f;
			uParam1->f_2 = 0x00004A38;
			uParam1->f_3 = 0x0000BA54;
			uParam1->f_5 = joaat("HEAVY_SNIPER_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000015F:
			*uParam1 = 10000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("SNIPER_RIFLE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000160:
			*uParam1 = 16000f;
			uParam1->f_1 = 40500f;
			uParam1->f_2 = 0x00003E80;
			uParam1->f_3 = 0x00009E34;
			uParam1->f_5 = joaat("GRENADE_LAUNCHER_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000161:
			*uParam1 = 13000f;
			uParam1->f_1 = 32800f;
			uParam1->f_2 = 0x000032C8;
			uParam1->f_3 = 0x00008020;
			uParam1->f_5 = joaat("RPG_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000162:
			*uParam1 = 25000f;
			uParam1->f_1 = 62500f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0000F424;
			uParam1->f_5 = joaat("MINIGUN_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000163:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000164:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_PISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000165:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000166:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000167:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000168:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000169:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000016A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000016B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000016C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000016D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000016E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000016F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000170:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000171:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000172:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000173:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000174:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000175:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000176:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000177:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000178:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000179:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000017A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000017B:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00030570;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000017C:
			*uParam1 = 185000f;
			uParam1->f_1 = 466300f;
			uParam1->f_2 = 0x0002D2A8;
			uParam1->f_3 = 0x00071D7C;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000017D:
			*uParam1 = 194000f;
			uParam1->f_1 = 488800f;
			uParam1->f_2 = 0x0002F5D0;
			uParam1->f_3 = 0x00077560;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000017E:
			*uParam1 = 189000f;
			uParam1->f_1 = 477500f;
			uParam1->f_2 = 0x0002E248;
			uParam1->f_3 = 0x0007493C;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000017F:
			*uParam1 = 107000f;
			uParam1->f_1 = 271300f;
			uParam1->f_2 = 0x0001A1F8;
			uParam1->f_3 = 0x000423C4;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000180:
			*uParam1 = 110000f;
			uParam1->f_1 = 278800f;
			uParam1->f_2 = 0x0001ADB0;
			uParam1->f_3 = 0x00044110;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000181:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 0x00018A88;
			uParam1->f_3 = 0x0003E92C;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000182:
			*uParam1 = 99000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x000182B8;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000183:
			*uParam1 = 166000f;
			uParam1->f_1 = 418800f;
			uParam1->f_2 = 0x00028870;
			uParam1->f_3 = 0x000663F0;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000184:
			*uParam1 = 158000f;
			uParam1->f_1 = 398800f;
			uParam1->f_2 = 0x00026930;
			uParam1->f_3 = 0x000615D0;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_10_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000185:
			*uParam1 = 150000f;
			uParam1->f_1 = 380000f;
			uParam1->f_2 = 0x000249F0;
			uParam1->f_3 = 0x0005CC60;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_11_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000186:
			*uParam1 = 116000f;
			uParam1->f_1 = 293800f;
			uParam1->f_2 = 0x0001C520;
			uParam1->f_3 = 0x00047BA8;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_12_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000187:
			*uParam1 = 122000f;
			uParam1->f_1 = 308800f;
			uParam1->f_2 = 0x0001DC90;
			uParam1->f_3 = 0x0004B640;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_13_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000188:
			*uParam1 = 119000f;
			uParam1->f_1 = 301300f;
			uParam1->f_2 = 0x0001D0D8;
			uParam1->f_3 = 0x000498F4;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_14_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000189:
			*uParam1 = 125000f;
			uParam1->f_1 = 316300f;
			uParam1->f_2 = 0x0001E848;
			uParam1->f_3 = 0x0004D38C;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_15_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000018A:
			*uParam1 = 134000f;
			uParam1->f_1 = 337500f;
			uParam1->f_2 = 0x00020B70;
			uParam1->f_3 = 0x0005265C;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_16_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000018B:
			*uParam1 = 142000f;
			uParam1->f_1 = 357500f;
			uParam1->f_2 = 0x00022AB0;
			uParam1->f_3 = 0x0005747C;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_17_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000018C:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 0x0000FA00;
			uParam1->f_3 = 0x00027AC4;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000018D:
			*uParam1 = 63000f;
			uParam1->f_1 = 160000f;
			uParam1->f_2 = 0x0000F618;
			uParam1->f_3 = 0x00027100;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000018E:
			*uParam1 = 62000f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 0x0000F230;
			uParam1->f_3 = 0x0002673C;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000018F:
			*uParam1 = 72000f;
			uParam1->f_1 = 182500f;
			uParam1->f_2 = 0x00011940;
			uParam1->f_3 = 0x0002C8E4;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000190:
			*uParam1 = 62000f;
			uParam1->f_1 = 156300f;
			uParam1->f_2 = 0x0000F230;
			uParam1->f_3 = 0x0002628C;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000191:
			*uParam1 = 70000f;
			uParam1->f_1 = 176300f;
			uParam1->f_2 = 0x00011170;
			uParam1->f_3 = 0x0002B0AC;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000192:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 0x00012110;
			uParam1->f_3 = 0x0002DC6C;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000193:
			*uParam1 = 68000f;
			uParam1->f_1 = 171300f;
			uParam1->f_2 = 0x000109A0;
			uParam1->f_3 = 0x00029D24;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000194:
			*uParam1 = 66000f;
			uParam1->f_1 = 167500f;
			uParam1->f_2 = 0x000101D0;
			uParam1->f_3 = 0x00028E4C;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000195:
			*uParam1 = 57000f;
			uParam1->f_1 = 143800f;
			uParam1->f_2 = 0x0000DEA8;
			uParam1->f_3 = 0x000231B8;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000196:
			*uParam1 = 49000f;
			uParam1->f_1 = 123800f;
			uParam1->f_2 = 0x0000BF68;
			uParam1->f_3 = 0x0001E398;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000197:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00009C40;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000198:
			*uParam1 = 43000f;
			uParam1->f_1 = 108800f;
			uParam1->f_2 = 0x0000A7F8;
			uParam1->f_3 = 0x0001A900;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000199:
			*uParam1 = 55000f;
			uParam1->f_1 = 140000f;
			uParam1->f_2 = 0x0000D6D8;
			uParam1->f_3 = 0x000222E0;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000019A:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 0x0000CB20;
			uParam1->f_3 = 0x000200E4;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000019B:
			*uParam1 = 46000f;
			uParam1->f_1 = 116300f;
			uParam1->f_2 = 0x0000B3B0;
			uParam1->f_3 = 0x0001C64C;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000019C:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 0x00012110;
			uParam1->f_3 = 0x0002DC6C;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000019D:
			*uParam1 = 38000f;
			uParam1->f_1 = 96900f;
			uParam1->f_2 = 0x00009470;
			uParam1->f_3 = 0x00017A84;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000019E:
			*uParam1 = 71000f;
			uParam1->f_1 = 178100f;
			uParam1->f_2 = 0x00011558;
			uParam1->f_3 = 0x0002B7B4;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000019F:
			*uParam1 = 67000f;
			uParam1->f_1 = 168800f;
			uParam1->f_2 = 0x000105B8;
			uParam1->f_3 = 0x00029360;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A0:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 0x000088B8;
			uParam1->f_3 = 0x000155CC;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A1:
			*uParam1 = 14750f;
			uParam1->f_1 = 36900f;
			uParam1->f_2 = 0x0000399E;
			uParam1->f_3 = 0x00009024;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A2:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00003E80;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A3:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00002EE0;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A4:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00009C40;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A5:
			*uParam1 = 36000f;
			uParam1->f_1 = 90600f;
			uParam1->f_2 = 0x00008CA0;
			uParam1->f_3 = 0x000161E8;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A6:
			*uParam1 = 13000f;
			uParam1->f_1 = 33100f;
			uParam1->f_2 = 0x000032C8;
			uParam1->f_3 = 0x0000814C;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A7:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 0x000032C8;
			uParam1->f_3 = 0x00007EF4;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A8:
			*uParam1 = 13750f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 0x000035B6;
			uParam1->f_3 = 0x00008660;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001A9:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00003E80;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001AA:
			*uParam1 = 15750f;
			uParam1->f_1 = 39400f;
			uParam1->f_2 = 0x00003D86;
			uParam1->f_3 = 0x000099E8;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001AB:
			*uParam1 = 14000f;
			uParam1->f_1 = 36300f;
			uParam1->f_2 = 0x000036B0;
			uParam1->f_3 = 0x00008DCC;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001AC:
			*uParam1 = 31000f;
			uParam1->f_1 = 78100f;
			uParam1->f_2 = 0x00007918;
			uParam1->f_3 = 0x00013114;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001AD:
			*uParam1 = 14000f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x000036B0;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001AE:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 0x00007D00;
			uParam1->f_3 = 0x00013D94;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_14_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001AF:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 0x00009088;
			uParam1->f_3 = 0x00016E68;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_16_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B0:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 0x0000CB20;
			uParam1->f_3 = 0x000200E4;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_17_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B1:
			*uParam1 = 33000f;
			uParam1->f_1 = 84400f;
			uParam1->f_2 = 0x000080E8;
			uParam1->f_3 = 0x000149B0;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_18_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B2:
			*uParam1 = 56000f;
			uParam1->f_1 = 140600f;
			uParam1->f_2 = 0x0000DAC0;
			uParam1->f_3 = 0x00022538;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_19_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B3:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x0000E678;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_20_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B4:
			*uParam1 = 17000f;
			uParam1->f_1 = 42500f;
			uParam1->f_2 = 0x00004268;
			uParam1->f_3 = 0x0000A604;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_21_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B5:
			*uParam1 = 16750f;
			uParam1->f_1 = 41900f;
			uParam1->f_2 = 0x0000416E;
			uParam1->f_3 = 0x0000A3AC;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_22_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B6:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 0x00004268;
			uParam1->f_3 = 0x0000AB18;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_23_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B7:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 0x00078D98;
			uParam1->f_3 = 0x001312D0;
			uParam1->f_5 = joaat("ADDER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B8:
			*uParam1 = 272000f;
			uParam1->f_1 = 687500f;
			uParam1->f_2 = 0x00042680;
			uParam1->f_3 = 0x000A7D8C;
			uParam1->f_5 = joaat("AIRBUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001B9:
			*uParam1 = 903000f;
			uParam1->f_1 = 2281300f;
			uParam1->f_2 = 0x000DC758;
			uParam1->f_3 = 0x0022CF54;
			uParam1->f_5 = joaat("ANNIHILATOR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001BA:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 0x0000AFC8;
			uParam1->f_3 = 0x0001B774;
			uParam1->f_5 = joaat("BALLER2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001BB:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 0x00036718;
			uParam1->f_3 = 0x00089544;
			uParam1->f_5 = joaat("BARRACKS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001BC:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004970;
			uParam1->f_5 = joaat("BATI_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001BD:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004970;
			uParam1->f_5 = joaat("BATI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001BE:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001F40;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BFINJECTION_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001BF:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x0000927C;
			uParam1->f_5 = joaat("BISON_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C0:
			*uParam1 = 77000f;
			uParam1->f_1 = 193800f;
			uParam1->f_2 = 0x00012CC8;
			uParam1->f_3 = 0x0002F508;
			uParam1->f_5 = joaat("BULLET_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C1:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 0x0003C8C0;
			uParam1->f_3 = 0x00098968;
			uParam1->f_5 = joaat("BUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C2:
			*uParam1 = 866000f;
			uParam1->f_1 = 2187500f;
			uParam1->f_2 = 0x000D36D0;
			uParam1->f_3 = 0x002160EC;
			uParam1->f_5 = joaat("BUZZARD_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C3:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 0x00017AE8;
			uParam1->f_3 = 0x0003B858;
			uParam1->f_5 = joaat("CARBONIZZARE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C4:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 0x000088B8;
			uParam1->f_3 = 0x000155CC;
			uParam1->f_5 = joaat("CAVALCADE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C5:
			*uParam1 = 322000f;
			uParam1->f_1 = 812500f;
			uParam1->f_2 = 0x0004E9D0;
			uParam1->f_3 = 0x000C65D4;
			uParam1->f_5 = joaat("CHEETAH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C6:
			*uParam1 = 260000f;
			uParam1->f_1 = 656300f;
			uParam1->f_2 = 0x0003F7A0;
			uParam1->f_3 = 0x000A03AC;
			uParam1->f_5 = joaat("COACH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C7:
			*uParam1 = 92000f;
			uParam1->f_1 = 231300f;
			uParam1->f_2 = 0x00016760;
			uParam1->f_3 = 0x00038784;
			uParam1->f_5 = joaat("COGCABRIO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C8:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x0001E848;
			uParam1->f_5 = joaat("COMET2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001C9:
			*uParam1 = 68000f;
			uParam1->f_1 = 172500f;
			uParam1->f_2 = 0x000109A0;
			uParam1->f_3 = 0x0002A1D4;
			uParam1->f_5 = joaat("COQUETTE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001CA:
			*uParam1 = 111000f;
			uParam1->f_1 = 281300f;
			uParam1->f_2 = 0x0001B198;
			uParam1->f_3 = 0x00044AD4;
			uParam1->f_5 = joaat("CRUSADER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001CB:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x0001D0D8;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("CUBAN800_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001CC:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00002EE0;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DILETTANTE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001CD:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = joaat("DOUBLE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001CE:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 0x00078D98;
			uParam1->f_3 = 0x001312D0;
			uParam1->f_5 = joaat("DUMP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001CF:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 0x00021340;
			uParam1->f_3 = 0x00053EF8;
			uParam1->f_5 = joaat("DUSTER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D0:
			*uParam1 = 394000f;
			uParam1->f_1 = 993800f;
			uParam1->f_2 = 0x00060310;
			uParam1->f_3 = 0x000F2A08;
			uParam1->f_5 = joaat("ENTITYXF_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000001D1:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 0x00018A88;
			uParam1->f_3 = 0x0003E92C;
			uParam1->f_5 = joaat("EXEMPLAR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D2:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 0x0000AFC8;
			uParam1->f_3 = 0x0001B774;
			uParam1->f_5 = joaat("FELON_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D3:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 0x0000B798;
			uParam1->f_3 = 0x0001D010;
			uParam1->f_5 = joaat("FELON2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D4:
			*uParam1 = 72000f;
			uParam1->f_1 = 181300f;
			uParam1->f_2 = 0x00011940;
			uParam1->f_3 = 0x0002C434;
			uParam1->f_5 = joaat("FELTZER2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D5:
			*uParam1 = 644000f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 0x0009D3A0;
			uParam1->f_3 = 0x0018CBA8;
			uParam1->f_5 = joaat("FROGGER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D6:
			*uParam1 = 12000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00002EE0;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = joaat("FUGITIVE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D7:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00003E80;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("GAUNTLET_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D8:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004970;
			uParam1->f_5 = joaat("HEXER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001D9:
			*uParam1 = 218000f;
			uParam1->f_1 = 550000f;
			uParam1->f_2 = 0x00035390;
			uParam1->f_3 = 0x00086470;
			uParam1->f_5 = joaat("INFERNUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001DA:
			*uParam1 = 9000f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 0x00002328;
			uParam1->f_3 = 0x000057E4;
			uParam1->f_5 = joaat("ISSI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001DB:
			*uParam1 = 173000f;
			uParam1->f_1 = 437500f;
			uParam1->f_2 = 0x0002A3C8;
			uParam1->f_3 = 0x0006ACFC;
			uParam1->f_5 = joaat("JB700_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001DC:
			*uParam1 = 148000f;
			uParam1->f_1 = 373800f;
			uParam1->f_2 = 0x00024220;
			uParam1->f_3 = 0x0005B428;
			uParam1->f_5 = joaat("JETMAX_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001DD:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004970;
			uParam1->f_5 = joaat("JOURNEY_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001DE:
			*uParam1 = 804000f;
			uParam1->f_1 = 2031300f;
			uParam1->f_2 = 0x000C44A0;
			uParam1->f_3 = 0x001EFEC4;
			uParam1->f_5 = joaat("LUXOR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001DF:
			*uParam1 = 149000f;
			uParam1->f_1 = 375000f;
			uParam1->f_2 = 0x00024608;
			uParam1->f_3 = 0x0005B8D8;
			uParam1->f_5 = joaat("MAMMATUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E0:
			*uParam1 = 205000f;
			uParam1->f_1 = 517500f;
			uParam1->f_2 = 0x000320C8;
			uParam1->f_3 = 0x0007E57C;
			uParam1->f_5 = joaat("MARQUIS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E1:
			*uParam1 = 386000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 0x0005E3D0;
			uParam1->f_3 = 0x000EE098;
			uParam1->f_5 = joaat("MAVERICK_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E2:
			*uParam1 = 243000f;
			uParam1->f_1 = 612500f;
			uParam1->f_2 = 0x0003B538;
			uParam1->f_3 = 0x00095894;
			uParam1->f_5 = joaat("MONROE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E3:
			*uParam1 = 13000f;
			uParam1->f_1 = 33800f;
			uParam1->f_2 = 0x000032C8;
			uParam1->f_3 = 0x00008408;
			uParam1->f_5 = joaat("MULE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E4:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x0000E678;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = joaat("NINEF_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E5:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 0x0000FA00;
			uParam1->f_3 = 0x00027AC4;
			uParam1->f_5 = joaat("NINEF2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E6:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00009C40;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("ORACLE2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E7:
			*uParam1 = 69000f;
			uParam1->f_1 = 175000f;
			uParam1->f_2 = 0x00010D88;
			uParam1->f_3 = 0x0002AB98;
			uParam1->f_5 = joaat("RAPIDGT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E8:
			*uParam1 = 65000f;
			uParam1->f_1 = 165000f;
			uParam1->f_2 = 0x0000FDE8;
			uParam1->f_3 = 0x00028488;
			uParam1->f_5 = joaat("RAPIDGT2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001E9:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x0000927C;
			uParam1->f_5 = joaat("RENTALBUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001EA:
			*uParam1 = 743000f;
			uParam1->f_1 = 1875000f;
			uParam1->f_2 = 0x000B5658;
			uParam1->f_3 = 0x001C9C38;
			uParam1->f_5 = joaat("RHINO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001EB:
			*uParam1 = 42000f;
			uParam1->f_1 = 106300f;
			uParam1->f_2 = 0x0000A410;
			uParam1->f_3 = 0x00019F3C;
			uParam1->f_5 = joaat("ROCOTO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001EC:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("RUFFIAN_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001ED:
			*uParam1 = 22000f;
			uParam1->f_1 = 56300f;
			uParam1->f_2 = 0x000055F0;
			uParam1->f_3 = 0x0000DBEC;
			uParam1->f_5 = joaat("SANDKING_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001EE:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00009C40;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("SCHWARZER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001EF:
			*uParam1 = 8000f;
			uParam1->f_1 = 21100f;
			uParam1->f_2 = 0x00001F40;
			uParam1->f_3 = 0x0000526C;
			uParam1->f_5 = joaat("SEASHARK_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F0:
			*uParam1 = 569000f;
			uParam1->f_1 = 1437500f;
			uParam1->f_2 = 0x0008AEA8;
			uParam1->f_3 = 0x0015EF3C;
			uParam1->f_5 = joaat("SHAMAL_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F1:
			*uParam1 = 97000f;
			uParam1->f_1 = 245800f;
			uParam1->f_2 = 0x00017AE8;
			uParam1->f_3 = 0x0003C028;
			uParam1->f_5 = joaat("SQUALO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F2:
			*uParam1 = 421000f;
			uParam1->f_1 = 1062500f;
			uParam1->f_2 = 0x00066C88;
			uParam1->f_3 = 0x00103664;
			uParam1->f_5 = joaat("STINGER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F3:
			*uParam1 = 433000f;
			uParam1->f_1 = 1093800f;
			uParam1->f_2 = 0x00069B68;
			uParam1->f_3 = 0x0010B0A8;
			uParam1->f_5 = joaat("STINGERGT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F4:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x0000927C;
			uParam1->f_5 = joaat("STRETCH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F5:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 0x0001E460;
			uParam1->f_3 = 0x0004C4B4;
			uParam1->f_5 = joaat("STUNT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F6:
			*uParam1 = 12000f;
			uParam1->f_1 = 31500f;
			uParam1->f_2 = 0x00002EE0;
			uParam1->f_3 = 0x00007B0C;
			uParam1->f_5 = joaat("SUNTRAP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F7:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 0x0001E460;
			uParam1->f_3 = 0x0004C4B4;
			uParam1->f_5 = joaat("SUPERD_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F8:
			*uParam1 = 54000f;
			uParam1->f_1 = 137500f;
			uParam1->f_2 = 0x0000D2F0;
			uParam1->f_3 = 0x0002191C;
			uParam1->f_5 = joaat("SURANO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001F9:
			*uParam1 = 990000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000F1B30;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("TITAN_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001FA:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("TRIBIKE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001FB:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("TRIBIKE2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001FC:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("TRIBIKE3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001FD:
			*uParam1 = 11000f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 0x00002AF8;
			uParam1->f_3 = 0x00006B6C;
			uParam1->f_5 = joaat("TROPIC_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001FE:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x0001D0D8;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("VACCA_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000001FF:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 0x00036718;
			uParam1->f_3 = 0x00089544;
			uParam1->f_5 = joaat("VELUM_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000200:
			*uParam1 = 10000f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000066BC;
			uParam1->f_5 = joaat("VIGERO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000201:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 0x00012110;
			uParam1->f_3 = 0x0002DC6C;
			uParam1->f_5 = joaat("VOLTIC_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000202:
			*uParam1 = 30000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00007530;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = joaat("ZION_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000203:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 0x00007D00;
			uParam1->f_3 = 0x00013D94;
			uParam1->f_5 = joaat("ZION2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000204:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 0x00072BF0;
			uParam1->f_3 = 0x00121EAC;
			uParam1->f_5 = joaat("ZTYPE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000205:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = joaat("ASEA_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000206:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000207:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000208:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000209:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000020A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000020B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000020C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000020D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000020E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000020F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000210:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000211:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000212:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000213:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000214:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000215:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000216:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000217:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000218:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000219:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSHIGHEND_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000021A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSSPORT_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000021B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSLOWRIDER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000021C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSSUV_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000021D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSMUSCLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000021E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSTUNER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000021F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSOFFROAD_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000220:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSBIKE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000221:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000222:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000223:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000224:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000225:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000226:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000227:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000228:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000229:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000022A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000022B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000022C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000022D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000022E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000022F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000230:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000231:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000232:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000233:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000234:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000235:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000236:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000237:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000238:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000239:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000023A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000023B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000023C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000023D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000023E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000023F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000240:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000241:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000242:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000243:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000244:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000245:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000246:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000247:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000248:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000249:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000024A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000024B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000024C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000024D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000024E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000024F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000250:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000251:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000252:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000253:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000254:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000255:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000256:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000257:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000258:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000259:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000025A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000025B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000025C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000025D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000025E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000025F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000260:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000261:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000262:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000263:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000264:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000265:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000266:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000267:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000268:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000269:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000026A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000026B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000026C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000026D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000026E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000026F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000270:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000271:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000272:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000273:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000274:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000275:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000276:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000277:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000278:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000279:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000027A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000027B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000027C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000027D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000027E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000027F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000280:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000281:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000282:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000283:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000284:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000285:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000286:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000287:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000288:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000289:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000028A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000028B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000028C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000028D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000028E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000028F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000290:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000291:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000292:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000293:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000294:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Male_Masks_Bone_Skull");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000295:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Male_Masks_Pogo");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000296:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Male_Masks_Green_Ape");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000297:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Male_Masks_Pink_Ape");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000298:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Male_Masks_Red_Monster");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000299:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Female_Masks_Bone_Skull");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000029A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Female_Masks_Pogo");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000029B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Female_Masks_Green_Ape");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000029C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Female_Masks_Pink_Ape");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000029D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("Discount_Female_Masks_Red_Monster");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000029E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_SERPENTINE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000029F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_TRAPPEDINABOX_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A0:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_CLOWNING_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A1:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HEAD_BANGER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HUSTLER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A3:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_WIN_EVER_MODE_ONCE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HOLD_UP_SHOPS_4_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A5:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x721744CC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A6:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x3A9AB861;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A7:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x0AA66B27;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A8:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_13_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002A9:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_16_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002AA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_17_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002AB:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_19_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002AC:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x54296273;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002AD:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_25_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002AE:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_38_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002AF:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("TATTOO_MP_FM_46_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B0:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_RED_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B1:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_ORANGE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_YELLOW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B3:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_BLACK_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_BLUE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B5:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_RAINBOW_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B6:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_RED_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B7:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_YELLOWWHITEBLUE_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B8:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_WHITEREDBROWN_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002B9:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLUEWHITERED_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002BA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLUE_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000002BB:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLACK_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002BC:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BROWNYELLOW_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002BD:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_WEAPON_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002BE:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_WEAPON_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002BF:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_PISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C0:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CMBTPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C1:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_APPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MICROSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C3:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ASLTRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C5:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CRBNRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C6:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ADVRRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C7:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C8:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CMBTMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002C9:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_PUMP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002CA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SAWOFF_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002CB:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ASLTSHTGN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002CC:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SNIPERRFL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002CD:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_GRNLAUNCH_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002CE:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_RPG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002CF:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MINIGUN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D0:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_PISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D1:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CMBTPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_APPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D3:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MICROSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D5:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ASLTRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D6:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CRBNRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D7:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ADVRRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D8:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002D9:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CMBTMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002DA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_PUMP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002DB:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SAWOFF_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002DC:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ASLTSHTGN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002DD:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SNIPERRFL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002DE:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_GRNLAUNCH_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002DF:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_RPG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E0:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MINIGUN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E1:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_DLC_ASSAULTSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_DLC_ASSAULTSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E3:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x0B88C7D6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x497BFF1F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E5:
			*uParam1 = 5000f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00007D00;
			uParam1->f_5 = joaat("BODHI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E6:
			*uParam1 = 10000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00011170;
			uParam1->f_5 = joaat("DUNE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E7:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 0x00004268;
			uParam1->f_3 = 0x0000AB18;
			uParam1->f_5 = joaat("SADLER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E8:
			*uParam1 = 19000f;
			uParam1->f_1 = 47500f;
			uParam1->f_2 = 0x00004A38;
			uParam1->f_3 = 0x0000B98C;
			uParam1->f_5 = joaat("SANDKING2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002E9:
			*uParam1 = 371000f;
			uParam1->f_1 = 937500f;
			uParam1->f_2 = 0x0005A938;
			uParam1->f_3 = 0x000E4E1C;
			uParam1->f_5 = joaat("VALENTINE_MODIFIER_CADDY_SEDAN");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002EA:
			*uParam1 = 7000f;
			uParam1->f_1 = 18300f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x0000477C;
			uParam1->f_5 = joaat("VALENTINE_MODIFIER_CADDY_GUSENBERG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002EB:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 0x00012110;
			uParam1->f_3 = 0x0002DC6C;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_ALPHA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002EC:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 0x00017AE8;
			uParam1->f_3 = 0x0003B858;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_HUNTLEY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002ED:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x0001D0D8;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_JESTER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002EE:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 0x00021340;
			uParam1->f_3 = 0x00053EF8;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_MASSACRO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002EF:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 0x0003C8C0;
			uParam1->f_3 = 0x00098968;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_TURISMOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F0:
			*uParam1 = 359000f;
			uParam1->f_1 = 906300f;
			uParam1->f_2 = 0x00057A58;
			uParam1->f_3 = 0x000DD43C;
			uParam1->f_5 = joaat("business_vehicles_Zentorno");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F1:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 0x000032C8;
			uParam1->f_3 = 0x00007EF4;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_ASTEROPE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F2:
			*uParam1 = 11000f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 0x00002AF8;
			uParam1->f_3 = 0x00007080;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_BOBCATXL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F3:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 0x000088B8;
			uParam1->f_3 = 0x000155CC;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_CAVALCADE2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F4:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 0x00004268;
			uParam1->f_3 = 0x0000AB18;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_GRANGER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F5:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001F40;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_INTRUDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F6:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x0000927C;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_MINIVAN");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F7:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_PREMIER");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000002F8:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00003E80;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_RADI");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002F9:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_STANIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002FA:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_STRATUM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002FB:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x00004970;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_WASHINGTON");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002FC:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 0x00072BF0;
			uParam1->f_3 = 0x00121EAC;
			uParam1->f_5 = joaat("BUSINESS_VEHICLE_VESTRA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002FD:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("XP_TUNABLE_COLLECT_MISSION_PACKAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002FE:
			*uParam1 = 0f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000096;
			uParam1->f_5 = joaat("XP_TUNABLE_VOTE_FOR_CONTENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000002FF:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("XP_TUNABLE_CTF_CASH_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000300:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("XP_TUNABLE_CTF_XP_REWARD_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000301:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_CTF_PED");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000302:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000258;
			uParam1->f_5 = joaat("EXPIRED_CHALLENGE_BASIC_XP_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000303:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("JOB_RP_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000304:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_DM_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000305:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_RACE_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000306:
			*uParam1 = 0f;
			uParam1->f_1 = 7500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001D4C;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_MISSION_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000307:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("MISSION_AI_KILL_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000308:
			*uParam1 = 0f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = joaat("MISSION_AI_KILL_AMOUNT_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000309:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = joaat("RACE_WORLD_RECORD_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000030A:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("KILL_A_MUGGER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000030B:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("SING_IN_SHOWER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000030C:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("PLAYLIST_WINNER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000030D:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("LESTER_BOUNTY_CUT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000030E:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("REQUEST_A_JOB_FEE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000030F:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("MECHANIC_DAILY_FEE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000310:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("PLAYER_CASHDROP_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000311:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("PLAYLIST_ENTRY_FEE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000312:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = joaat("MUGGER_AMOUNT_STEAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000313:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("MUGGER_STEAL_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000314:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_1_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000315:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_2_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000316:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_3_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000317:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_4_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000318:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_5_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000319:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 0x00009088;
			uParam1->f_3 = 0x00016E68;
			uParam1->f_5 = joaat("BUSINESS2_THRUST_PRICE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000031A:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("DLC_FASHION_HOCKEY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000031B:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 0x00001450;
			uParam1->f_3 = 0x0000332C;
			uParam1->f_5 = joaat("DLC_METAL_WARRIOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000031C:
			*uParam1 = 5600f;
			uParam1->f_1 = 14100f;
			uParam1->f_2 = 0x000015E0;
			uParam1->f_3 = 0x00003714;
			uParam1->f_5 = joaat("DLC_CIRCUIT_WARRIOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000031D:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_CARBON_WARRIOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000031E:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_SNS_PISTOL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000031F:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_SNS_PISTOL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000320:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_SPECIAL_CARBINE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000321:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_SPECIAL_CARBINE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000322:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_HEAVY_PISTOL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000323:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_HEAVY_PISTOL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000324:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_BULLPUP_RIFLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000325:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_BULLPUP_RIFLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000326:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x000026AC;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0x002281A3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000327:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 0x000025E4;
			uParam1->f_3 = 0x00005F50;
			uParam1->f_5 = 0xC77856FE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000328:
			*uParam1 = 5900f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x0000170C;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_PIRATE_SKULL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000329:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x000026AC;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_CREW_EMBLEM_CHEST");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000032A:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 0x000025E4;
			uParam1->f_3 = 0x00005F50;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_CREW_EMBLEM_ARM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000032B:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x000026AC;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000032C:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 0x00002968;
			uParam1->f_3 = 0x00006914;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000032D:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 0x00002C88;
			uParam1->f_3 = 0x00007080;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000032E:
			*uParam1 = 12100f;
			uParam1->f_1 = 30600f;
			uParam1->f_2 = 0x00002F44;
			uParam1->f_3 = 0x00007788;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000032F:
			*uParam1 = 12900f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 0x00003264;
			uParam1->f_3 = 0x00007EF4;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_5");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000330:
			*uParam1 = 13600f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 0x00003520;
			uParam1->f_3 = 0x00008660;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_6");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000331:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_7");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000332:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 0x000090EC;
			uParam1->f_3 = 0x00016E68;
			uParam1->f_5 = joaat("DLC_VEHICLE_BF_BIFTA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000333:
			*uParam1 = 19800f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00004D58;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("DLC_VEHICLE_CANIS_KALAHARI");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000334:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DLC_VEHICLE_BRAVADO_PARADISE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000335:
			*uParam1 = 160900f;
			uParam1->f_1 = 406300f;
			uParam1->f_2 = 0x00027484;
			uParam1->f_3 = 0x0006331C;
			uParam1->f_5 = joaat("DLC_VEHICLE_PEGASSI_SPEEDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000336:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 0x000090EC;
			uParam1->f_3 = 0x00016E68;
			uParam1->f_5 = joaat("DLC_VEHICLE_DINKA_THRUST");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000337:
			*uParam1 = 85100f;
			uParam1->f_1 = 215000f;
			uParam1->f_2 = 0x00014C6C;
			uParam1->f_3 = 0x000347D8;
			uParam1->f_5 = joaat("DLC_VEHICLE_COIL_VOLTIC_TOPLESS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000338:
			*uParam1 = 62400f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 0x0000F3C0;
			uParam1->f_3 = 0x0002673C;
			uParam1->f_5 = joaat("DLC_VEHICLE_BRAVADO_BANSHEE_TOPLESS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000339:
			*uParam1 = 78700f;
			uParam1->f_1 = 198800f;
			uParam1->f_2 = 0x0001336C;
			uParam1->f_3 = 0x00030890;
			uParam1->f_5 = joaat("DLC_VEHICLE_INVERTO_COQUETTE_TOPLESS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000033A:
			*uParam1 = 431100f;
			uParam1->f_1 = 1088800f;
			uParam1->f_2 = 0x000693FC;
			uParam1->f_3 = 0x00109D20;
			uParam1->f_5 = joaat("DLC_VEHICLE_GROTTI_STINGER_TOPLESS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000033B:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 0x00004394;
			uParam1->f_3 = 0x0000AB18;
			uParam1->f_5 = joaat("DLC_VEHICLE_VAPID_DOMINATOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000033C:
			*uParam1 = 39600f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00009AB0;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x61361453;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000033D:
			*uParam1 = 17800f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 0x00004588;
			uParam1->f_3 = 0x0000AFC8;
			uParam1->f_5 = joaat("DLC_VEHICLE_SCHYSTER_FUSILADE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000033E:
			*uParam1 = 11900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00002E7C;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = joaat("DLC_VEHICLE_MAIBATSU_PENUMBRA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000033F:
			*uParam1 = 29700f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00007404;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = joaat("DLC_VEHICLE_UBERMACHT_SENTINEL_XS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000340:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 0x0000B798;
			uParam1->f_3 = 0x0001D010;
			uParam1->f_5 = joaat("DLC_VEHICLE_UBERMACHT_SENTINEL");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000341:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000342:
			*uParam1 = 6000f;
			uParam1->f_1 = 15100f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00003AFC;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000343:
			*uParam1 = 5700f;
			uParam1->f_1 = 14400f;
			uParam1->f_2 = 0x00001644;
			uParam1->f_3 = 0x00003840;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000344:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 0x00001838;
			uParam1->f_3 = 0x00003CF0;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000345:
			*uParam1 = 5600f;
			uParam1->f_1 = 14200f;
			uParam1->f_2 = 0x000015E0;
			uParam1->f_3 = 0x00003778;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000346:
			*uParam1 = 7300f;
			uParam1->f_1 = 18400f;
			uParam1->f_2 = 0x00001C84;
			uParam1->f_3 = 0x000047E0;
			uParam1->f_5 = joaat("DLC_WEAPON_SPECIAL_CARBINE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000347:
			*uParam1 = 7200f;
			uParam1->f_1 = 18100f;
			uParam1->f_2 = 0x00001C20;
			uParam1->f_3 = 0x000046B4;
			uParam1->f_5 = joaat("DLC_WEAPON_BULLPUP_RIFLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000348:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("REQUEST_COPS_TURN_BLIND_EYE_FEE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000349:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x000026AC;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("DLC_FEMALE_TATTOOS_CREW_EMBLEM_CHEST");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000034A:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 0x000025E4;
			uParam1->f_3 = 0x00005F50;
			uParam1->f_5 = joaat("DLC_FEMALE_TATTOOS_CREW_EMBLEM_ARM");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000034B:
			*uParam1 = 0.1f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("MENTAL_STATE_RP_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000034C:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("MENTAL_STATE_RP_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000034D:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("SURVIVAL_RP_CAP_PER_WAVE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000429:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("REQUEST_A_HEIST_FEE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000034E:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_THRESHOLD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000034F:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_AMOUNT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000350:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_UNDER_THRESHOLD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000351:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000005;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_DIVIDER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000352:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("MENTAL_STATE_BLOW_UP_VEHICLE_INCREASE_AMOUNT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000353:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PED_INCREASE_AMOUNT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000354:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("MENTAL_STATE_DECREASE_AMOUNT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000355:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("MENTAL_STATE_DECREASE_RATE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000356:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00030570;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = joaat("DLC_hipster_modifier_Vulcar_Pigalle");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000357:
			*uParam1 = 0f;
			uParam1->f_1 = 40f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000028;
			uParam1->f_5 = joaat("NUMBER_OF_CHALLENGES_PER_DAY");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000358:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 0x00001450;
			uParam1->f_3 = 0x0000332C;
			uParam1->f_5 = joaat("DLC_HIPSTER_CLOTHING_FEMALE_PURPLE_FLORAL_BABYDOLL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000359:
			*uParam1 = 79200f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00013560;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_VAPID_BLADE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000035A:
			*uParam1 = 99000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x000182B8;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BENEFACTOR_GLENDA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000035B:
			*uParam1 = 69300f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00010EB4;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_DECLASSE_RHAPSODY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000035C:
			*uParam1 = 59400f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x0000E808;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_VULCAR_WARRENER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000035D:
			*uParam1 = 42100f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x0000A474;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BENEFACTOR_PANTO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000035E:
			*uParam1 = 123300f;
			uParam1->f_1 = 400000f;
			uParam1->f_2 = 0x0001E1A4;
			uParam1->f_3 = 0x00061A80;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_DUBSTA3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000035F:
			*uParam1 = 24800f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x000060E0;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BLAZER3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000360:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 0x00004394;
			uParam1->f_3 = 0x0000AB18;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BUFFALO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000361:
			*uParam1 = 47500f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x0000B98C;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BUFFALO2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000362:
			*uParam1 = 10900f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002A94;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_REBEL2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000363:
			*uParam1 = 5400f;
			uParam1->f_1 = 13800f;
			uParam1->f_2 = 0x00001518;
			uParam1->f_3 = 0x000035E8;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_SURFER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000364:
			*uParam1 = 27200f;
			uParam1->f_1 = 68800f;
			uParam1->f_2 = 0x00006A40;
			uParam1->f_3 = 0x00010CC0;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_TAILGATER");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000365:
			*uParam1 = 7900f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001EDC;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_YOUGA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000366:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000030D4;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_PURE_BLACK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000367:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x000026AC;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000368:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 0x00002968;
			uParam1->f_3 = 0x00006914;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000369:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 0x00002C88;
			uParam1->f_3 = 0x00007080;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000036A:
			*uParam1 = 25000f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0000EA60;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000036B:
			*uParam1 = 11100f;
			uParam1->f_1 = 28100f;
			uParam1->f_2 = 0x00002B5C;
			uParam1->f_3 = 0x00006DC4;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_PINK_TIRE_SMOKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000036C:
			*uParam1 = 8200f;
			uParam1->f_1 = 20600f;
			uParam1->f_2 = 0x00002008;
			uParam1->f_3 = 0x00005078;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BROWN_TIRE_SMOKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000036D:
			*uParam1 = 6000f;
			uParam1->f_1 = 15200f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00003B60;
			uParam1->f_5 = joaat("DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000036E:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 0x000028A0;
			uParam1->f_3 = 0x000066BC;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_GREY_CAT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000036F:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 0x000028A0;
			uParam1->f_3 = 0x000066BC;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_TABBY_CAT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000370:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 0x00002A94;
			uParam1->f_3 = 0x00006B6C;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_RED_FOX");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000371:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 0x00002A94;
			uParam1->f_3 = 0x00006B6C;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_BROWN_FOX");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000372:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x000072D8;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_BROWN_OWL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000373:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x000072D8;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_WHITE_OWL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000374:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_GRAY_RACOON");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000375:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DLC_HIPSTER_MASK_BLACK_RACOON");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000376:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 0x000028A0;
			uParam1->f_3 = 0x000066BC;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_GRAY_CAT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000377:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 0x000028A0;
			uParam1->f_3 = 0x000066BC;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_TABBY_CAT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000378:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 0x00002A94;
			uParam1->f_3 = 0x00006B6C;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_RED_FOX");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000379:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 0x00002A94;
			uParam1->f_3 = 0x00006B6C;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BROWN_FOX");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000037A:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x000072D8;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BROWN_OWL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000037B:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x000072D8;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_WHITE_OWL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000037C:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_GRAY_RACOON");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000037D:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00007A44;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BLACK_RACOON");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000037E:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("HIPSTER_VEHICLE_PURE_GOLD_METAL_RESPRAY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000037F:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("HIPSTER_VEHICLE_BRUSHED_GOLD_METAL_RESPRAY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000380:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xF4BE6161;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000381:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("Car_impound_fee");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000382:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x0007A120;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_HYDRA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000383:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x0007A120;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_BESRA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000384:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x0007A120;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_MILJET");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000385:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_COQUETTE2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000386:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000387:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000388:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000389:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardxp");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000038A:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardcap");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000038B:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("PURCHASED_TATTOO_APPLICATION_FEE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000038C:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("SURVIVAL_COMPLETE_BONUS");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000038D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_1_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000038E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_2_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000038F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_3_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000390:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_4_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000391:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_5_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000392:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_6_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000393:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_7_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000394:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_8_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000395:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000006;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_9_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000396:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000006;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_10_PERCENTAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000397:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_BASE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000398:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_EASY");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000399:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_NORMAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000039A:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_HARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000039B:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_RANK_CAP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000039C:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_BASIC_VALUE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003B5:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_FLIGHT_SCHOOL_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B4:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_ELITAS_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B3:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_BRAZIL_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B2:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_JAPAN_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B1:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_AUSTRALIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B0:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_SPAIN_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003AF:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_GERMANY_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003AE:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_FRANCE_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003AD:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_CANADA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003AC:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_SCOTLAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003AB:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_UNITED_KINGDOM_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003AA:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_USA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A9:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001D4C;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("PS_SUNRISE_CHUTE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A8:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001D4C;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("PS_AIRBORNE_CHUTE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A7:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001D4C;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("PS_HIGH_ALTITUDE_CHUTE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A6:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001D4C;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("PS_SHADOW_CHUTE");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003A5:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001D4C;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("PS_DESERT_CHUTE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A4:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001D4C;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("PS_AIR_FORCE_CHUTE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A3:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PS_SWIFT_LIVERY_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A2:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PS_SWIFT_LIVERY_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A1:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x0007A120;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PS_BUCKINGHAM_MILJET");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000039D:
			*uParam1 = 10000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = joaat("PS_FLIGHT_SUIT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000039E:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("PS_INVERTO_COQUETTE_CLASSIC");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000039F:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("PS_INVERTO_COQUETTE_CLASSIC_TOPLESS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003A0:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("PS_WESTERN_BESRA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003FC:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = joaat("REQUEST_HELI_PICKUP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003FD:
			*uParam1 = 0f;
			uParam1->f_1 = 750f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000002EE;
			uParam1->f_5 = joaat("REQUEST_BOAT_PICKUP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003FE:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000258;
			uParam1->f_5 = joaat("REQUEST_PEGASUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003FF:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = joaat("REQUEST_THIEF1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000400:
			*uParam1 = 0f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000057E4;
			uParam1->f_5 = joaat("REQUEST_ARMY_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003B6:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B7:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B8:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003B9:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003BA:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003BB:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003BC:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003BD:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003BE:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003BF:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C0:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C1:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C2:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C3:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C4:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003C5:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C6:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C7:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C8:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003C9:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003CA:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003CB:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003CC:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003CD:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003CE:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003CF:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D0:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D1:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D2:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D3:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D4:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D5:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D6:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D7:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003D8:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003D9:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003DA:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003DB:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003DC:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003DD:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003DE:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003DF:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E0:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E1:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E2:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E3:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E4:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E5:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E6:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003E7:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E8:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003E9:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003EA:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003EB:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003EC:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003ED:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003EE:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000003EF:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F0:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F1:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F2:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F3:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F4:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F5:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F6:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F7:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F8:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003F9:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003FA:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000003FB:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000401:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("CARS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000402:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("CARMOD_SHOP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000403:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("CLOTHES_SHOP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000404:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("HAIRDO_SHOP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000405:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("TATTOO_SHOP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000406:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("WEAPONS_SHOP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000407:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("PLANES_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000408:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("HELIS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000409:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("BOATS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040A:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("PROPERTY_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040B:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("BIKES_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040C:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040D:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_XP");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000040E:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("ELEGY2_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040F:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x0001E848;
			uParam1->f_5 = joaat("KHAMELION_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000410:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 0x0000AFC8;
			uParam1->f_3 = 0x0001B774;
			uParam1->f_5 = joaat("HOTKNIFE_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000411:
			*uParam1 = 20000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("CARBONRS_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000412:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CRATEDROPBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000413:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("SECURITYVANBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000414:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("IMPORTEXPORTBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000415:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("JOYRIDERBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000416:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("LESTERKILLTARGETBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000417:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("PLANETAKEDOWNBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000418:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("DISTRACTPOLICEBASEWEIGHTING");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000419:
			*uParam1 = 0f;
			uParam1->f_1 = 19f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000013;
			uParam1->f_5 = joaat("NUMBER_OF_SCRIPTS_IN_HISTORY_LIST");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000041A:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_ITALY_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000041B:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_SWITZERLAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000041C:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_JAMAICA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000041D:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_COLOMBIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000041E:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_NORWAY_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000041F:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_SWEDEN_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000420:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_BELGIUM_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000421:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_MEXICO_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000422:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_AUSTRIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000423:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_RUSSIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000424:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_ARGENTINA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000425:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_TURKEY_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000426:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_IRELAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000427:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_WALES_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000428:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("PS_ENGLAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000430:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = joaat("CASH_REWARD_BET_STAKE_GIFT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000431:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000019;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("DISABLE_EVENT_DISTRACT_COPS");
			break;
		
		case 0x00000433:
			*uParam1 = 2f;
			uParam1->f_1 = SYSTEM::TO_FLOAT(0x00000020);
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = func_3();
			uParam1->f_5 = 0x33CE23DF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000432:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000019;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x544CC597;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000434:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_M_BLACK_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000435:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_M_GRAY_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000436:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_M_CHARCOAL_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000437:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_M_TAN_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000438:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_M_FOREST_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000439:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_M_BLACK_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000043A:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_M_GRAY_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000043B:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_M_CHARCOAL_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000043C:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x000013EC;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_M_TAN_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000043D:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001450;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_M_GREEN_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000043E:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_F_BLACK_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000043F:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_F_GRAY_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000440:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_F_CHARCOAL_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000441:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_F_TAN_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000442:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = joaat("LTS_F_FOREST_BULLETPROOF");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000443:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_F_BLACK_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000444:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_F_GRAY_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000445:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_F_CHARCOAL_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000446:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x000013EC;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_F_TAN_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000447:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001450;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = joaat("LTS_F_GREEN_SKELETAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000448:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x00009C40;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("LTS_LCC_INNOVATION");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000449:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x00009C40;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("LTS_SHITZU_HAKUCHOU");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000044A:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("LTS_LAMPADATI_FURORE_GT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000044B:
			*uParam1 = 25000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = joaat("LTS_CANIS_KALAHARI_TOPLESS");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000044C:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("LTS_HEAVY_SHOTGUN");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000044D:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("LTS_HEAVY_SHOTGUN_SUPPRESSOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000044E:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("LTS_MARKSMAN_RIFLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000044F:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = joaat("LTS_MARKSMAN_RIFLE_SUPPRESSOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000450:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_FINLAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000451:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_DENMARK_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000452:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_NETHERLANDS_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000453:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_PORTUGAL_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000454:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_CHINA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000455:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_CROATIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000456:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_CZECH_REPUBLIC_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000457:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_HUNGARY_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000458:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_LIECHTENSTEIN_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000459:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_MALTA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000045A:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_NEW_ZEALAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000045B:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_NIGERIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000045C:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_POLAND_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000045D:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_PUERTO_RICO_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000045E:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_SLOVAKIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000045F:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_SLOVENIA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000460:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_SOUTH_AFRICA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000461:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_SOUTH_KOREA_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000462:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_PALESTINE_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000463:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = joaat("LTS_ISRAEL_CHUTE_BAG");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000466:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xA88F4A17;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000467:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_BRUTE_BOXVILLE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000468:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = 0x9010713F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000469:
			*uParam1 = 60000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x0000EA60;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x26230334;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000046A:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_DINKA_ENDURO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000046B:
			*uParam1 = 30000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00007530;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x115107C5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000046C:
			*uParam1 = 185000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0002D2A8;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xD22DD93B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000046D:
			*uParam1 = 120000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0001D4C0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_MAMMOTH_HYDRA");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000046E:
			*uParam1 = 65000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x0000FDE8;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_HVY_INSURGENT_PICKUP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000046F:
			*uParam1 = 330000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00050910;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("VEHICLES_HEIST_HVY_INSURGENT");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000470:
			*uParam1 = 35000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x000088B8;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0xD990A32A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000471:
			*uParam1 = 65000f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x0000FDE8;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0xCDCE4FC5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000472:
			*uParam1 = 200000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_PRINCIPE_LECTRO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000473:
			*uParam1 = 15000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_MAIBATSU_MULE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000474:
			*uParam1 = 800000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000C3500;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_SAVAGE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000475:
			*uParam1 = 350000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x00055730;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_KARIN_TECHNICAL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000476:
			*uParam1 = 900000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000DBBA0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = joaat("VEHICLES_HEIST_BUCKINGHAM_VALKYRIE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000477:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x5B45BEED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000042A:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0xAE6339F9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000042B:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x00EE1EE6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000042C:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x0264DF06;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000042D:
			*uParam1 = 0f;
			uParam1->f_1 = 2E+07f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x01312D00;
			uParam1->f_5 = 0x4228914B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000478:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x95F0D674;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000479:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0xD41573CE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000047A:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x9AD797AA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000047B:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0xE37A0732;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000047C:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("HEIST_SERIES_A_FUNDING_CASH_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000047D:
			*uParam1 = 0f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = 0xA479C369;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040C:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_CASH");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000040D:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_XP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000431:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000019;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("DISABLE_EVENT_DISTRACT_COPS");
			break;
		
		case 0x00000432:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000019;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x544CC597;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000047E:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = 0xBDEF513F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000047F:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = 0xC8B37794;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000480:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = 0xD6CA706E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000481:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("CASH_REWARD_OVERRIDE_ELITE_OBJECTIVES_SERIES_A");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000482:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = 0xB92E083B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000483:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0xE4767783;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000484:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x2BA615BC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000485:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x68408BD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000486:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = 0xE2CE258E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000487:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x49B12241;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000488:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = 0xBC091A81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000489:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x0C09E808;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000048A:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xFDCB7365;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000048B:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = 0x33632F3F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000048C:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x3EF32430;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000048D:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x0E61D3F3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000048E:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x08652AB0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000048F:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x8E1D37CA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000490:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = 0x8AE69D38;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000491:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x87F0CB75;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000492:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x3D34AE07;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000493:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = 0x4DCD3F82;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000494:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x5B9874D5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000495:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x13C8FDFA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000496:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = 0x82EF5BCF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000497:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xEA1B3F17;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000498:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00124F80;
			uParam1->f_5 = 0x909A7757;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000499:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xD5D85320;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000049A:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x9C7FA44A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000049B:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x0000012C;
			uParam1->f_5 = 0xBC2B5281;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000049C:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0xFFFFFFFF;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x8C1F1899;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A4:
			*uParam1 = 0f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00011940;
			uParam1->f_5 = 0xEA322232;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A3:
			*uParam1 = 0f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00008CA0;
			uParam1->f_5 = 0xF8F3149F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A8:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x4A05D9D2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A9:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xEF039459;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A5:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xFB722619;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A6:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xB791E62E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004A7:
			*uParam1 = 0f;
			uParam1->f_1 = 45f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000002D;
			uParam1->f_5 = 0xE0886034;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C9:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0x5F2B827F;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000042E:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x7437EC8B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000042F:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xB38B577B;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000004AA:
			*uParam1 = 20790f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x00005136;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0xD752AFDF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004AB:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x0003C6CC;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x06F11724;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004AC:
			*uParam1 = 30690f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000077E2;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x2AA35C4B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004AD:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x0003C6CC;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("CGTONG_CHEVAL_MARSHALL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004AE:
			*uParam1 = 35145f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x00008949;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0xDDB81CCD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004AF:
			*uParam1 = 655875f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000A0203;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x99FF569D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B0:
			*uParam1 = 200f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x000000C8;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x8F9C9C4E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B1:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xFC2EF235;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B2:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x219C2FFF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B3:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0x31AD05F2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B4:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x284545B5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B5:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x73CC81CD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B6:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x3C5306D7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B7:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xC0CADF9D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B8:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x7E613A10;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004B9:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xCC89E97F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004BA:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x04B8777C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004BB:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xF2BC617C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004BC:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x8C39D584;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004BD:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = 0xE5B0D64D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004BE:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xDA42F620;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004BF:
			*uParam1 = 10000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x106EE197;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000004C0:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DINKA_JESTER_RACECAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C1:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C2:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_RAT_TRUCK");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C3:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_SLAMVAN");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C4:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_BRAVADO_SPRUNK_BUFFALO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C5:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_VAPID_PISSWASSER_DOMINATOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C6:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_BRAVADO_REDWOOD_GAUNTLET");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C7:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DECLASSE_BURGER_SHOT_STALLION");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004C8:
			*uParam1 = 30000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x00007530;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("WEAPONS_XMAS14_HOMING_LAUNCHER");
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000004CA:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_FIRST_PLAY_CASH_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004CB:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_REPLAY_CASH_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004CC:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00030D40;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_MINIMUM_TOTAL_CASH_TAKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004CD:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_MAXIMUM_TOTAL_CASH_TAKE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004CE:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004CF:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D0:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D1:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_4");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D2:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_5");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D3:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_6");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D4:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0xE80492B3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D5:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x19AE7606;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D6:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x7C2A3B04;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D7:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xEC8FEE44;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D8:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x62B9A56D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004D9:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x918E00A1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004DA:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x6A8533AA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004DB:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xCD639CFC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004DC:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = 0x23C26398;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004DD:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x46E67C52;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004DE:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x25C279E7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004DF:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000006;
			uParam1->f_5 = 0xC33DDB72;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E0:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000006;
			uParam1->f_5 = 0xF309E3DA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("RP_HEISTS_GOLD_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E2:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("RP_HEISTS_SILVER_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E3:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("RP_HEISTS_BRONZE_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E4:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xA180F74D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E5:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x63606DC0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E6:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xD88A396D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E7:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x582BA875;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E8:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x7E209BC8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004E9:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xC0A9A807;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004EA:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xE8521228;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004EB:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xF5DCE3DE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004EC:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x7F0E06FB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004ED:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x936ECFD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004EE:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x43DAF3A7;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000004EF:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xB45BAC67;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F0:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x8B80ED9C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x10C49904;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F2:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xF0615EF4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F3:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xF13E1407;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F4:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xB201C3CD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F5:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xBF643DFA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F6:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x1916C97C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F7:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x8F8EB66A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F8:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x7F2E15A9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004F9:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0xF416FF7D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004FA:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0xE1B95AC2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004FB:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x3DFC1342;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004FC:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = 0x2388038C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004FD:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = 0x1C57752B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004FE:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = 0x07154AA7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000004FF:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x200FFC98;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000500:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x09D0D01A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000501:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xC413C4A1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000502:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xF566A746;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000503:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x241B6808;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000504:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x3B44965E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000505:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x29EFF3B5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000506:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x170ACDEB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000507:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x055B2A8C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000508:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xF04D0070;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000509:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xDF06DDE4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000050A:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x7565E191;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000050B:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xE0836E41;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000050C:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xA69E89B1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000050D:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x73FE677A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000050E:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x9A26A082;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000050F:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x84F2F27F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000510:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x7990971E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000511:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xB9315286;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000512:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xAA1EE21D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000513:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x5BECA633;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000514:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x66A17DFE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000515:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xFEF94C34;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000516:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x7F49695E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000517:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x87F7039F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000518:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x4D78360D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000519:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x5010123A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000051A:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x3BF8887C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000051B:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x4E232CD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000051C:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x4445A052;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000051D:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xFA8FBA78;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000051E:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xA84F8EE0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000051F:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xA45F9AD3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000520:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xF1EC1413;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000521:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x6E00A039;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000522:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = 0x55606388;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000523:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xCF65A0B6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000524:
			*uParam1 = 0f;
			uParam1->f_1 = 12000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002EE0;
			uParam1->f_5 = 0x205AD863;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000525:
			*uParam1 = 0.1f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x9D8F2AD7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000526:
			*uParam1 = 0.0001f;
			uParam1->f_1 = 1.5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x1646903E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000527:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x7516E325;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000528:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x8231F4A3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000529:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xC79E1227;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000052A:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xA3FE26ED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000052B:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = joaat("EXPENSES_HEIST_COST_PERCENTAGE_SERIES_A");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000052C:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x09B3771A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000052D:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xB8973EF9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000052E:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xB6534615;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000052F:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x6B9A9045;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000530:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = joaat("HEISTS_PREP_PERCENTAGE_CUT_SERIES_A");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000531:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x1005D71A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000532:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000010;
			uParam1->f_5 = 0x967F5B42;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000533:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000020;
			uParam1->f_5 = 0x97415F06;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000534:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x98E87431;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000535:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 0x00001964;
			uParam1->f_3 = 0x00009858;
			uParam1->f_5 = 0x99996024;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000536:
			*uParam1 = 6250f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 0x0000186A;
			uParam1->f_3 = 0x00009470;
			uParam1->f_5 = 0xA2127CF0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000537:
			*uParam1 = 5900f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 0x0000170C;
			uParam1->f_3 = 0x00008CA0;
			uParam1->f_5 = 0x310FB07D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000538:
			*uParam1 = 6150f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 0x00001806;
			uParam1->f_3 = 0x00009088;
			uParam1->f_5 = 0xFF7F665F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000539:
			*uParam1 = 5750f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x00001676;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0xCC094B30;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000053A:
			*uParam1 = 6050f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 0x000017A2;
			uParam1->f_3 = 0x00009088;
			uParam1->f_5 = 0xE4639FFA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000053B:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 0x00001612;
			uParam1->f_3 = 0x000084D0;
			uParam1->f_5 = 0xF4748181;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000053C:
			*uParam1 = 5850f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x000016DA;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0xE8556AC9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000053D:
			*uParam1 = 5600f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 0x000015E0;
			uParam1->f_3 = 0x000084D0;
			uParam1->f_5 = 0xD896A2DC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000053E:
			*uParam1 = 6000f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00008CA0;
			uParam1->f_5 = 0xE0005DE9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000053F:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 0x0000189C;
			uParam1->f_3 = 0x00009470;
			uParam1->f_5 = 0x3DDE3C62;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000540:
			*uParam1 = 6400f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 0x00001900;
			uParam1->f_3 = 0x00009858;
			uParam1->f_5 = 0xD2CF2DA1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000541:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001356;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x5D64F68C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000542:
			*uParam1 = 5050f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 0x000013BA;
			uParam1->f_3 = 0x00007918;
			uParam1->f_5 = 0x8224E742;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000543:
			*uParam1 = 5150f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 0x0000141E;
			uParam1->f_3 = 0x00007918;
			uParam1->f_5 = 0xC2AEC98D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000544:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001356;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0xFD3DC235;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000545:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x0000122A;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0xF1D9D99B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000546:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 0x00001130;
			uParam1->f_3 = 0x00006590;
			uParam1->f_5 = 0x0E756145;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000547:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x0000122A;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0x3CF473B8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000548:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x0000125C;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0xF3F6F2C2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000549:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x000011F8;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0xAAB3CBD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000054A:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x00000DDE;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x5C61E924;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000054B:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x00000DAC;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x7D54D34B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000054C:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 0x00000E74;
			uParam1->f_3 = 0x000055F0;
			uParam1->f_5 = 0x1A20608E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000054D:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000D48;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x2BFF6688;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000054E:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001036;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0xC93A4A8C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000054F:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001004;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0xAE27B78E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000550:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x0000122A;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0x1D7A2EB8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000551:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 0x00001130;
			uParam1->f_3 = 0x00006590;
			uParam1->f_5 = 0xB37111AE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000552:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x0000122A;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0xEA36AF34;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000553:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x0000125C;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0x8C2627F4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000554:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x000011F8;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0x3F482BF9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000555:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x00000DDE;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0xE4723A7A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000556:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x00000DAC;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x0A68C4FF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000557:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 0x00000E74;
			uParam1->f_3 = 0x000055F0;
			uParam1->f_5 = 0xE42D5B46;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000558:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000D48;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xB489F85F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000559:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001036;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0x325692AF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000055A:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001004;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0xC1BB8A69;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000055B:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 0x0000299A;
			uParam1->f_3 = 0x0000FA00;
			uParam1->f_5 = 0x91B36217;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000055C:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x00011170;
			uParam1->f_5 = 0x68AD82D3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000055D:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x00001A5E;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0x162F1B72;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000055E:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 0x00001E78;
			uParam1->f_3 = 0x0000B798;
			uParam1->f_5 = 0x5D210B51;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000055F:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 0x00002EAE;
			uParam1->f_3 = 0x00011940;
			uParam1->f_5 = 0x55509FDB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000560:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 0x00003EB2;
			uParam1->f_3 = 0x00017AE8;
			uParam1->f_5 = 0x87AAAD69;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000561:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 0x00003F48;
			uParam1->f_3 = 0x00017ED0;
			uParam1->f_5 = 0x42D4AD84;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000562:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 0x000035B6;
			uParam1->f_3 = 0x00014438;
			uParam1->f_5 = 0x00F57B2C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000563:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 0x00003A66;
			uParam1->f_3 = 0x00015F90;
			uParam1->f_5 = 0xA63794FE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000564:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x00001AC2;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0x24B051DE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000565:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x0000AFC8;
			uParam1->f_5 = 0x54A90029;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000566:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 0x0000283C;
			uParam1->f_3 = 0x0000F230;
			uParam1->f_5 = 0x50BA9657;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000567:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 0x00002BC0;
			uParam1->f_3 = 0x000109A0;
			uParam1->f_5 = 0x2317A798;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000568:
			*uParam1 = 6450f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 0x00001932;
			uParam1->f_3 = 0x00009858;
			uParam1->f_5 = 0xFD4A158C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000569:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 0x00001AF4;
			uParam1->f_3 = 0x0000A410;
			uParam1->f_5 = 0x38B27334;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000056A:
			*uParam1 = 5800f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x000016A8;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0x3BFFB1EC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000056B:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 0x000021FC;
			uParam1->f_3 = 0x0000CF08;
			uParam1->f_5 = 0xA12811C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000056C:
			*uParam1 = 8350f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x0000209E;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x9E0C96C0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000056D:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x171A4EF0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000056E:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0xDA6FC536;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000056F:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A28;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0xA57B6185;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000570:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x08CEECC7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000571:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CB2;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xDAD543C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000572:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001004;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0xE4BA22D7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000573:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x4BD35BD9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000574:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 0x00001162;
			uParam1->f_3 = 0x00006978;
			uParam1->f_5 = 0x33C83F63;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000575:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xE065638B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000576:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001356;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0xB9CD79E6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000577:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x534959F3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000578:
			*uParam1 = 4900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001324;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x93D65F60;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000579:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001356;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0xFA761F24;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000057A:
			*uParam1 = 4800f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 0x000012C0;
			uParam1->f_3 = 0x00007148;
			uParam1->f_5 = 0xEC94DA8F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000057B:
			*uParam1 = 7400f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 0x00001CE8;
			uParam1->f_3 = 0x0000ABE0;
			uParam1->f_5 = 0x405428F4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000057C:
			*uParam1 = 7150f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 0x00001BEE;
			uParam1->f_3 = 0x0000A7F8;
			uParam1->f_5 = 0x174AC010;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000057D:
			*uParam1 = 6800f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x00001A90;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0x50611A03;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000057E:
			*uParam1 = 7050f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 0x00001B8A;
			uParam1->f_3 = 0x0000A410;
			uParam1->f_5 = 0xDBC94E00;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000057F:
			*uParam1 = 6650f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000019FA;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0x2684D2C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000580:
			*uParam1 = 6950f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 0x00001B26;
			uParam1->f_3 = 0x0000A410;
			uParam1->f_5 = 0x0A11B7DD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000581:
			*uParam1 = 6550f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x00001996;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0x0E58DC26;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000582:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x00001A5E;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0x6F7CCDC2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000583:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 0x00001964;
			uParam1->f_3 = 0x00009858;
			uParam1->f_5 = 0x62E56AD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000584:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 0x00001AF4;
			uParam1->f_3 = 0x0000A410;
			uParam1->f_5 = 0x66833724;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000585:
			*uParam1 = 7200f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 0x00001C20;
			uParam1->f_3 = 0x0000A7F8;
			uParam1->f_5 = 0xF3AF208C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000586:
			*uParam1 = 7300f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 0x00001C84;
			uParam1->f_3 = 0x0000ABE0;
			uParam1->f_5 = 0xCCD1FA57;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000587:
			*uParam1 = 5400f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 0x00001518;
			uParam1->f_3 = 0x00007D00;
			uParam1->f_5 = 0x513BB9BF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000588:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 0x00001612;
			uParam1->f_3 = 0x000084D0;
			uParam1->f_5 = 0x4E9A5B27;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000589:
			*uParam1 = 5250f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 0x00001482;
			uParam1->f_3 = 0x00007D00;
			uParam1->f_5 = 0xD67CAA55;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000058A:
			*uParam1 = 5550f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 0x000015AE;
			uParam1->f_3 = 0x000080E8;
			uParam1->f_5 = 0x3FFA0043;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000058B:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 0x0000299A;
			uParam1->f_3 = 0x0000FA00;
			uParam1->f_5 = 0xC541F721;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000058C:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x00011170;
			uParam1->f_5 = 0x0AEFFD66;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000058D:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x00001A5E;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0xF6365950;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000058E:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 0x00001E78;
			uParam1->f_3 = 0x0000B798;
			uParam1->f_5 = 0x6F954558;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000058F:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 0x00002EAE;
			uParam1->f_3 = 0x00011940;
			uParam1->f_5 = 0xADFE3511;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000590:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 0x00003EB2;
			uParam1->f_3 = 0x00017AE8;
			uParam1->f_5 = 0xA142A206;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000591:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 0x00003F48;
			uParam1->f_3 = 0x00017ED0;
			uParam1->f_5 = 0xC878420F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000592:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 0x000035B6;
			uParam1->f_3 = 0x00014438;
			uParam1->f_5 = 0xF480F570;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000593:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 0x00003A66;
			uParam1->f_3 = 0x00015F90;
			uParam1->f_5 = 0x94627DFE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000594:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x00001AC2;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0xB555684C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000595:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x0000AFC8;
			uParam1->f_5 = 0x46D11CD7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000596:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 0x0000283C;
			uParam1->f_3 = 0x0000F230;
			uParam1->f_5 = 0x707FE833;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000597:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 0x00002BC0;
			uParam1->f_3 = 0x000109A0;
			uParam1->f_5 = 0x505E2931;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000598:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 0x000021FC;
			uParam1->f_3 = 0x0000CF08;
			uParam1->f_5 = 0x18D47A77;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000599:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 0x00001AF4;
			uParam1->f_3 = 0x0000A410;
			uParam1->f_5 = 0x3258283F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000059A:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 0x0000189C;
			uParam1->f_3 = 0x00009470;
			uParam1->f_5 = 0xFE55E46A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000059B:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x0000AFC8;
			uParam1->f_5 = 0xFA2D0E50;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000059C:
			*uParam1 = 9450f;
			uParam1->f_1 = 57000f;
			uParam1->f_2 = 0x000024EA;
			uParam1->f_3 = 0x0000DEA8;
			uParam1->f_5 = 0xA2F5906E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000059D:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 0x0000189C;
			uParam1->f_3 = 0x00009470;
			uParam1->f_5 = 0x25728757;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000059E:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x1DC61011;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000059F:
			*uParam1 = 2750f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000ABE;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x0C14CCC5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A0:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x994FEB87;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A1:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x00001004;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0x894B9C16;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A2:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x9533FE95;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A3:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 0x00001162;
			uParam1->f_3 = 0x00006978;
			uParam1->f_5 = 0x6C16A64B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x9F36E677;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A5:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x7B9B9E20;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A6:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x893CCAE2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A7:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x33AE87D3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A8:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x7C5B01E0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005A9:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x7A737ECF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005AA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x8F1EDF83;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005AB:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xB9504836;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005AC:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xBFC4D318;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005AD:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xF2235E14;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005AE:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x3D1A365D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005AF:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x4695D689;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B0:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x6D8D8001;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000005B1:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x5784DFB7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B2:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x58C92615;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B3:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xAA097FC3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B4:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xEFE1A589;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B5:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x5CAD3646;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B6:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xE702BB59;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B7:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xBB175E72;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B8:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xEE0746EA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005B9:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x7BDFC54D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005BA:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xF935FA1E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005BB:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x08B117C3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005BC:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x95FC0291;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005BD:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x0CD12C11;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005BE:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x8EDE7E67;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005BF:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x2215E1DC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C0:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x7AE3DB0A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C1:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x12850626;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C2:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x41569C92;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C3:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xB24EB460;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C4:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x13D245DE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C5:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xBDE4C9AD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C6:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xE222B0CB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C7:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x6D103B4A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C8:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001D1A;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x57624D47;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005C9:
			*uParam1 = 5900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x0000170C;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xD6A85578;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005CA:
			*uParam1 = 7100f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 0x00001BBC;
			uParam1->f_3 = 0x000055F0;
			uParam1->f_5 = 0x72AFB26B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005CB:
			*uParam1 = 6050f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x000017A2;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x44C66EF8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005CC:
			*uParam1 = 12400f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 0x00003070;
			uParam1->f_3 = 0x00009470;
			uParam1->f_5 = 0x9F3B72A2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005CD:
			*uParam1 = 6150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00001806;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x55769BFF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005CE:
			*uParam1 = 8900f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 0x000022C4;
			uParam1->f_3 = 0x00006978;
			uParam1->f_5 = 0x17C9AF9E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005CF:
			*uParam1 = 9500f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 0x0000251C;
			uParam1->f_3 = 0x00007148;
			uParam1->f_5 = 0xB6AB66B5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D0:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x0000209E;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0x5DD67E46;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D1:
			*uParam1 = 9000f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 0x00002328;
			uParam1->f_3 = 0x00006978;
			uParam1->f_5 = 0xEF472FFA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D2:
			*uParam1 = 8050f;
			uParam1->f_1 = 24000f;
			uParam1->f_2 = 0x00001F72;
			uParam1->f_3 = 0x00005DC0;
			uParam1->f_5 = 0x11A49098;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D3:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 0x0000209E;
			uParam1->f_3 = 0x000061A8;
			uParam1->f_5 = 0x9B143483;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D4:
			*uParam1 = 11150f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 0x00002B8E;
			uParam1->f_3 = 0x000084D0;
			uParam1->f_5 = 0xF164FD9F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D5:
			*uParam1 = 6350f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x000018CE;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x0F6D0E4C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D6:
			*uParam1 = 13500f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 0x000034BC;
			uParam1->f_3 = 0x0000A028;
			uParam1->f_5 = 0xAB457F8B;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000005D7:
			*uParam1 = 480000f;
			uParam1->f_1 = 1463000f;
			uParam1->f_2 = 0x00075300;
			uParam1->f_3 = 0x001652D8;
			uParam1->f_5 = 0x4EFB2845;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D8:
			*uParam1 = 2500000f;
			uParam1->f_1 = 1.25E+07f;
			uParam1->f_2 = 0x002625A0;
			uParam1->f_3 = 0x00BEBC20;
			uParam1->f_5 = joaat("LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005D9:
			*uParam1 = 950000f;
			uParam1->f_1 = 2925000f;
			uParam1->f_2 = 0x000E7EF0;
			uParam1->f_3 = 0x002CA1C8;
			uParam1->f_5 = 0xD9982846;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005DA:
			*uParam1 = 2500000f;
			uParam1->f_1 = 7725000f;
			uParam1->f_2 = 0x002625A0;
			uParam1->f_3 = 0x0075DFC8;
			uParam1->f_5 = 0x9429579F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005DB:
			*uParam1 = 95000f;
			uParam1->f_1 = 293000f;
			uParam1->f_2 = 0x00017318;
			uParam1->f_3 = 0x00047888;
			uParam1->f_5 = 0x76C6AFBE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005DC:
			*uParam1 = 400000f;
			uParam1->f_1 = 1268000f;
			uParam1->f_2 = 0x00061A80;
			uParam1->f_3 = 0x00135920;
			uParam1->f_5 = 0x38FCFA7B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005DD:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x485176F9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005DE:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x9A96F7EC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005DF:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x81DBC355;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E0:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x5AF224BF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E1:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x1C3D6D7D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E2:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x840EF66E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E3:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x76F43129;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E4:
			*uParam1 = 5800f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x000016A8;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xEFAC9FD2;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000005E5:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xDAE9296C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E6:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x9EFB67D0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E7:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C4E;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x17CC042E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E8:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x951B5C64;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005E9:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000BEA;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x51529059;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005EA:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x79DC011D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005EB:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A28;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x98CA01EC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005EC:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x1E7D857F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005ED:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x7381CC1A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005EE:
			*uParam1 = 2750f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000ABE;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0xD20BB41C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005EF:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x671E2595;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F0:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CB2;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xA0F8A441;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F1:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x68130B4D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F2:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x1914C0F0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F3:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x04080F55;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F4:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x406FD0CF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F5:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CE4;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xA7F4F468;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F6:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CE4;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x179B06FB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F7:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0xE0138711;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F8:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0xEF77F66D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005F9:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x6F44643D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005FA:
			*uParam1 = 2850f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xEF51CFA6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005FB:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x6572264F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005FC:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x8F17B388;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005FD:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x136E4A1B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005FE:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x6D5EB4A4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000005FF:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x491BD80A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000600:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xCF0D678A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000601:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x00001644;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0xF81ED318;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000602:
			*uParam1 = 6000f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00009088;
			uParam1->f_5 = 0x18C720DF;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000603:
			*uParam1 = 5400f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 0x00001518;
			uParam1->f_3 = 0x000080E8;
			uParam1->f_5 = 0x5290BC04;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000604:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x00001644;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0x264C9A9A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000605:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x66B79476;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000606:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x5DAC0DFB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000607:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x653526D0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000608:
			*uParam1 = 2950f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000B86;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x1D4B10FA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000609:
			*uParam1 = 2900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000B54;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x6189AB9F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000060A:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000BEA;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x343F1B7C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000060B:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x7CAD7E44;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000060C:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C1C;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0xBE18F840;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000060D:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A28;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x6256CEE2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000060E:
			*uParam1 = 8150f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001FD6;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x4FE7B083;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000060F:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C4E;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x01BA856B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000610:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C4E;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x61AEE959;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000611:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C1C;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x6008A6DF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000612:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C1C;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x01179F0F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000613:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xCE19D0B3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000614:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x3EC72DDF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000615:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A28;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x0D506FE6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000616:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x9D4F32C0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000617:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0xCE271686;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000618:
			*uParam1 = 2750f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000ABE;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x2EA0A358;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000619:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x519FC39D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000061A:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CB2;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x3E123E2E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000061B:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x97C1F9B0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000061C:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x0B54BBCB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000061D:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x41B01C29;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000061E:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000C80;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x8C99E37A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000061F:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CE4;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x4092A84C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000620:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000CE4;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xE71B0256;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000621:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x73335348;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000622:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0xFBAAD20C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000623:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0xDC19BC03;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000624:
			*uParam1 = 2850f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x5355D68F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000625:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0x18A8BC4A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000626:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x2FE72555;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000627:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 0x00000A5A;
			uParam1->f_3 = 0x00003E80;
			uParam1->f_5 = 0xDB0A5C1D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000628:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0xDA8FE639;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000629:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0xFC0C473C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000062A:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x2FB785AB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000062B:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x00001644;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0xCEDEB8B1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000062C:
			*uParam1 = 6000f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 0x00001770;
			uParam1->f_3 = 0x00009088;
			uParam1->f_5 = 0x2D00DC46;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000062D:
			*uParam1 = 5400f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 0x00001518;
			uParam1->f_3 = 0x000080E8;
			uParam1->f_5 = 0xC04EA7C5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000062E:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x00001644;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0x6FC35F89;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000062F:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000A8C;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x05F225A0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000630:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000B22;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0xE39B7BF2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000631:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00000AF0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x42804F9E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000632:
			*uParam1 = 2950f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000B86;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0xFF822E62;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000633:
			*uParam1 = 2900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 0x00000B54;
			uParam1->f_3 = 0x00004650;
			uParam1->f_5 = 0x5247089A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000634:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x00000BEA;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x3F6A4ED0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000635:
			*uParam1 = 8000f;
			uParam1->f_1 = 49000f;
			uParam1->f_2 = 0x00001F40;
			uParam1->f_3 = 0x0000BF68;
			uParam1->f_5 = 0x1BE16CC7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000636:
			*uParam1 = 9800f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0x00002648;
			uParam1->f_3 = 0x0000EA60;
			uParam1->f_5 = 0xB1595DB5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000637:
			*uParam1 = 6950f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 0x00001B26;
			uParam1->f_3 = 0x0000A7F8;
			uParam1->f_5 = 0xF322431D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000638:
			*uParam1 = 5950f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 0x0000173E;
			uParam1->f_3 = 0x00009088;
			uParam1->f_5 = 0xBF829E68;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000639:
			*uParam1 = 7750f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 0x00001E46;
			uParam1->f_3 = 0x0000B798;
			uParam1->f_5 = 0xABB83FD3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000063A:
			*uParam1 = 8250f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x0000203A;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x62BA38C0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000063B:
			*uParam1 = 9500f;
			uParam1->f_1 = 58000f;
			uParam1->f_2 = 0x0000251C;
			uParam1->f_3 = 0x0000E290;
			uParam1->f_5 = 0xEFC22E9D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000063C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xB5EA4A3B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000063D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xEC50B189;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000063E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xAC5492CB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000063F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xCD23ADB1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000640:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xEB92D2AA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000641:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x209A16F0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000642:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x55A35600;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000643:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xBBEBC5A5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000644:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x769C090F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000645:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xEA1D682B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000646:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xA7370748;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000647:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x05EF54C2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000648:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x81E15D5C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000649:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x8AB3A68D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000064A:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x907DE596;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000064B:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xDCF240CE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000064C:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x31380500;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000064D:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xDCC0D00A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000064E:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x2D69D064;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000064F:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x29114614;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000650:
			*uParam1 = 350000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00055730;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x95F8E6D8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000651:
			*uParam1 = 100000f;
			uParam1->f_1 = 340000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x00053020;
			uParam1->f_5 = 0x08A58309;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000652:
			*uParam1 = 340000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00053020;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x0CDD70F6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000653:
			*uParam1 = 1000000f;
			uParam1->f_1 = 3300000f;
			uParam1->f_2 = 0x000F4240;
			uParam1->f_3 = 0x00325AA0;
			uParam1->f_5 = 0x444C07A0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000654:
			*uParam1 = 850000f;
			uParam1->f_1 = 2625000f;
			uParam1->f_2 = 0x000CF850;
			uParam1->f_3 = 0x00280DE8;
			uParam1->f_5 = 0xE307969C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000655:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = joaat("LUXE2_DINKA_VINDICATOR");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000656:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x00011170;
			uParam1->f_5 = 0xB0D59820;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000657:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x00011170;
			uParam1->f_5 = 0x6023FF44;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000658:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x00011170;
			uParam1->f_5 = 0x8644CB85;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000659:
			*uParam1 = 3000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x3488FE8F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000065A:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xB64EECAC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000065B:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0xF5ADF343;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000065C:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x56680542;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000065D:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x3DE4ABA4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000065E:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x6853E25B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000065F:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0xC0DBD2ED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000660:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x2D8736F9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000661:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0xDFF23DE9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000662:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0x8A3342EC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000663:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 0x000009C4;
			uParam1->f_3 = 0x00005208;
			uParam1->f_5 = 0xA284370F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000664:
			*uParam1 = 5450f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x0000154A;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x5BAB8DFB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000665:
			*uParam1 = 5050f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0x000013BA;
			uParam1->f_3 = 0x00003A98;
			uParam1->f_5 = 0x7A5C7CC4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000666:
			*uParam1 = 7250f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 0x00001C52;
			uParam1->f_3 = 0x000055F0;
			uParam1->f_5 = 0x62CF7CC4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000667:
			*uParam1 = 6550f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00001996;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x071336A1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000668:
			*uParam1 = 13100f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x0000332C;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0xFA6D7AD0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000669:
			*uParam1 = 9200f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 0x000023F0;
			uParam1->f_3 = 0x00006D60;
			uParam1->f_5 = 0xF954851E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000066A:
			*uParam1 = 10650f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 0x0000299A;
			uParam1->f_3 = 0x00007D00;
			uParam1->f_5 = 0xD1BE9D3B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000066B:
			*uParam1 = 11600f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 0x00002D50;
			uParam1->f_3 = 0x000088B8;
			uParam1->f_5 = 0x6E4EDDFA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000066C:
			*uParam1 = 14100f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 0x00003714;
			uParam1->f_3 = 0x0000A7F8;
			uParam1->f_5 = 0x0EDD07F9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000066D:
			*uParam1 = 7700f;
			uParam1->f_1 = 23000f;
			uParam1->f_2 = 0x00001E14;
			uParam1->f_3 = 0x000059D8;
			uParam1->f_5 = 0x910C6CBA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000066E:
			*uParam1 = 5700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x00001644;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x2B046CAD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000066F:
			*uParam1 = 7300f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 0x00001C84;
			uParam1->f_3 = 0x000055F0;
			uParam1->f_5 = 0x26A50DC4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000670:
			*uParam1 = 6300f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 0x0000189C;
			uParam1->f_3 = 0x00004A38;
			uParam1->f_5 = 0x30652005;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000671:
			*uParam1 = 5600f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 0x000015E0;
			uParam1->f_3 = 0x00004268;
			uParam1->f_5 = 0x23CC8538;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000672:
			*uParam1 = 14850f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 0x00003A02;
			uParam1->f_3 = 0x0000AFC8;
			uParam1->f_5 = 0x1A80BACB;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000673:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x94F109F8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000674:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x83C8C2A8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000675:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x46644000;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000676:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x4861EC52;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000677:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xB92D8C94;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000678:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x9F116605;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000679:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xCDF08870;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000067A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x5A96FA3A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000067B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xDC58F0B7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000067C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x66904688;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000067D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x03042B2B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000067E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xE5C888CF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000067F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xB8D38152;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000680:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x2601C082;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000681:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x58B0ECB9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000682:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x20DE6274;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000683:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x53EBD514;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000684:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xF6F3C768;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000685:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x7365BC13;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000686:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x8C116EB3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000687:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xE0B8B190;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C8:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x68BEDD1A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C9:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x1D86A53E;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000688:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x8CFB35B0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000689:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x351B7BC1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000068A:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x9A035689;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000068B:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xEDA2B6C0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000068C:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xCCBE38FF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000068D:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xD7C404DF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000068E:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x088CFBC7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000068F:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x38F14A02;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000690:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xA19281B6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000691:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x34D3FBE0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000692:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xBBF56092;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000693:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x35022370;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000694:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xD8F1CF43;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000695:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x471162D3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000696:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x1CA034BC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000697:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x66C2DFDF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000698:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x82D7B455;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000699:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x8B19B8A7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000069A:
			*uParam1 = 100f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000064;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xE878B6B6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000069B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xC5F6F7DB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000069C:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000064;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x2086E1ED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000069D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x99824A10;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000069E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xB3D36DD8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000069F:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x0CB3591B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A0:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0xE2BC9814;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A1:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xB940A175;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A2:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xB3CACB2C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A3:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xBC914C91;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A4:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x8668046A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A5:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x9D71D23F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000078D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x1316208A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000078E:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xBAF43912;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000078F:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x4886718A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000790:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xC905D832;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000791:
			*uParam1 = 100f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000064;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x8AC06FBA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000792:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x0F808AF0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000793:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000064;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xFE5A790F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000794:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x7722450F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000795:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xC8DD8911;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000796:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0xAC9374B0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000797:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0x9BB60676;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000798:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x1D84CACC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000799:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xD2625BA8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000079A:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x705860C7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000079B:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xF8200148;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000079C:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x9217CA63;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000006A6:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x66F472AE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A7:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x3E7E6112;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A8:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x133E3D6B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006A9:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x71EE3409;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006AA:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x5E2F4F85;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006AB:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x42D14ED9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006AC:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x52CA62FE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006AD:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xFC17C229;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006AE:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xEE6A26CE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006AF:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0xE2CC0F92;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B0:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x52E4EE81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B1:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0x0C951FDE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B2:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0xDD7EDAB6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B3:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0xB94C9D82;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B4:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xEC0FF169;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B5:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x34750A31;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B6:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x66A89779;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B7:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x742AC81F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B8:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xF04EFE3D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006B9:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0x8DB650B4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006BA:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0x711B952E;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000006BB:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x213777EB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006BC:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xFC67AD5B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006BD:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xB1E29882;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006BE:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x7C638188;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006BF:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000493E0;
			uParam1->f_5 = 0xFE7199B6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C0:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xB31A108E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C1:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x526DA2FB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C2:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xB758E7B4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C3:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xE0B26AE4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C4:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x610A85DF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C5:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0x72381A38;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C6:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xB3211B77;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C7:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x4343C042;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C8:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x01B7F1C0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006C9:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xA7097B4F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006CA:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x4B9CCFCD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006CB:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x001B7740;
			uParam1->f_5 = 0xFF840798;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006CC:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0x217721F1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006CD:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x25090A38;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006CE:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xC502D180;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006CF:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x21104FA8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D0:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x5DE5EB0D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xD8579BFD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D2:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xCB1DE36B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D3:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x72452E5F;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000006D4:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0036EE80;
			uParam1->f_5 = 0x0BFA38B0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D5:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000927C0;
			uParam1->f_5 = 0xE5934E4F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D6:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x8E03559B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D7:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xBE230733;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D8:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000064;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xE01795D9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006D9:
			*uParam1 = 1f;
			uParam1->f_1 = 1.15f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x68BD8BEA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006DA:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000EA60;
			uParam1->f_5 = 0xDC9F600B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006DB:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000EA60;
			uParam1->f_5 = 0x1A27154A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006DC:
			*uParam1 = 3f;
			uParam1->f_1 = 15f;
			uParam1->f_2 = 0x00000003;
			uParam1->f_3 = 0x0000000F;
			uParam1->f_5 = 0xFBD21F0D;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000006DD:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x02EC053A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006DE:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xAE42EC8D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006DF:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x6DA9C3E7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E0:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x7760AED5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E1:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xD09D8F13;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E2:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("HOT_TARGET_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E3:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x06B624BD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E4:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x327E965A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E5:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xE9E036E5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E6:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0x9DEB6747;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E7:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xFBC862E9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E8:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x391CEAFF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006E9:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xDE2FB85B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006EA:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xBB765E9B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006EB:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x430F6C73;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006EC:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x0A6D1A2D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006ED:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x2A1EED08;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006EE:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xC26B3CB3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006EF:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xC9F8F87A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F0:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xACC93C45;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F1:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xBE32D7A0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F2:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xE09139D4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F3:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0x9C5C9BC3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F4:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xB308C2DC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F5:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0xB51B43A8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F6:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0x47379BC3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F7:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000BB8;
			uParam1->f_5 = 0x09BDCDC8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F8:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x8CF873E6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006F9:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0xBD28A96D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006FA:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x1B454F10;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006FB:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0xC6DA1BBF;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000006FC:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0xAF86C1CF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006FD:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xA8779C87;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006FE:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("CHECKPOINT_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000006FF:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x3631037D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000700:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xB433726E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000701:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xF49CC67E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000702:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x61253710;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000703:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xDF31B76C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000704:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xCF43DBE3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000705:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xA688D035;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000706:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x94253ACF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000707:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x71720B4E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000708:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("HELICOPTER_HOT_TARGET_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000709:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xDF9CC746;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000070A:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xF7BA118A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000070B:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xD13F5CED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000070C:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xC2A4175A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000070D:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x5C74A7A2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000070E:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xDACE1160;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000070F:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xED14B5ED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000710:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x3EFDD9BE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000711:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x50B07D23;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000712:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x42A1A0FA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000713:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x34480447;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000714:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x36A70909;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000715:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x68F0ED9C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000716:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x524BC052;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000717:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x50D89AA8;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000718:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x17DF4F31;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000719:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xFDD98C25;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000071A:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x03FE1CE2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000071B:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x7F65C5AE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000071C:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xDF0FDE65;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000071D:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0xB112F0F3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000071E:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x4A55A417;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000071F:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0x3D113B69;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000720:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x2D94EDC2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000721:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("DEAD_DROP_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000722:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xCD6F6E3C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000723:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x70DBBA23;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000724:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0x4A240E9A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000725:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x1B80C13C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000726:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xC79C6B93;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000727:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xE8068D7B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000079D:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x2683C20F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000079E:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = 0xAA95B48B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000079F:
			*uParam1 = 2f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000002;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x759336E7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007CA:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xCF84C6F9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007CB:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x2A8E7E99;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000728:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x82DDB599;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000729:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x60DC0369;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000072A:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x301FCF48;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000072B:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("CHALLENGE_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000072C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xF73F2707;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000072D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x11845B91;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000072E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x22AAFDDE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000072F:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xACF8127A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000730:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x4C38245E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000731:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xE6B7AF6D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000732:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0xE73E00DF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000733:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xF2E644DC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000734:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xCA894E70;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000735:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x742CF4AF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000736:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x4503F7E8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000737:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x4BCA6CB0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000738:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x0A00016B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000739:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xDD57C44D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000073A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xAA9B5ED1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000073B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x99E4BD64;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000073C:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0xD692EF35;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000073D:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x0D709C5C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000073E:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x6E755DE3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000073F:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x43B21C91;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000740:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xD28E3D92;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000741:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x395CFD9C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000742:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x7B3AE6BF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000743:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("HOT_PROPERTY_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000744:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0xFF8C7826;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000745:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x227F00FA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000746:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xC0A3D066;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000747:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xDF020D16;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000748:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xED3CA98B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000749:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xFBBB4688;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000074A:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0xFB3E4929;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000074B:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0xEDD9CD4B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000074C:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x1D2F88BC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000074D:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0xE6BA9721;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000074E:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xE61676E5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000074F:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x110F9AB3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000750:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x7FFB179E;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000751:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x6D33DC1B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000752:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xA32BE105;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000753:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0x854D6945;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000754:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xC624AD48;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000755:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xE472EC26;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000756:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xFDF43E85;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000757:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("PASS_THE_PARCEL_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000758:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x860EE29F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000759:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("KING_OF_THE_CASTLE_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000075A:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x157EE0AC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000075B:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000001F4;
			uParam1->f_5 = 0x29E9740F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000075C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x1CDDBFD4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000075D:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x2A145A41;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000075E:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x5F70C4F9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000075F:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x56260D6C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000760:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000002;
			uParam1->f_5 = 0x71D50168;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000761:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x46A24583;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000762:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0x9902F157;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000763:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000000C8;
			uParam1->f_5 = 0x1B007E70;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000764:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xD60EE567;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000765:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x17148830;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000766:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x753DF4DB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000767:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x03A7D20E;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000768:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x30DE9EF8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000769:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x79F4CC63;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000076A:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xE1ED48DC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000076B:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x4921C4B2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000076C:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0xF7AF47EB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000076D:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = 0x5E736255;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000076E:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000032;
			uParam1->f_5 = 0x9E467D46;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000076F:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x3FD4960D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000770:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x221E5A9D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000771:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x2D817163;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000772:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x67CA65F8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000773:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000001E;
			uParam1->f_5 = 0x1171B944;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000774:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0xCAC42F9D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000775:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0xDD7A5509;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000776:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0xEE37F684;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000777:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x81481CA6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000778:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x8F0AB82B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000779:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0x46B62783;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000077A:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0xCD5A9076;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000077B:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000007D0;
			uParam1->f_5 = joaat("HUNT_THE_BEAST_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000077C:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00002710;
			uParam1->f_5 = 0x470F176C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000077D:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000EA60;
			uParam1->f_5 = 0x4EDDC0D5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000077E:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x5CA5FAB5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000077F:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xB0F62722;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000780:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x78F32223;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000781:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xE392425D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000782:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0xEC1A6035;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000783:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0xE7AA5EF3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000784:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000003E8;
			uParam1->f_5 = 0xF1C4F54C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000785:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000014;
			uParam1->f_5 = 0x89857CB7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000786:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x549E26CF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C4:
			*uParam1 = 0f;
			uParam1->f_1 = 3600f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000E10;
			uParam1->f_5 = 0x6322E4F1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C5:
			*uParam1 = 0f;
			uParam1->f_1 = 3600f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000E10;
			uParam1->f_5 = 0x9F86B239;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000787:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 0x1CE17957;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000788:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 0x734C3D02;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000789:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 0x5CE4EF96;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000078A:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 0xB680B3D5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000078B:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 0xB85487E5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000078C:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 0xEF57F472;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A0:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0036EE80;
			uParam1->f_5 = 0x5D710320;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A1:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0036EE80;
			uParam1->f_5 = 0x1E8146BF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A2:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000003C;
			uParam1->f_5 = 0x46B3F35E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A3:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x9976FE55;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A4:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CRIMINAL_DAMAGE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A5:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xB4600706;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A6:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("HUNT_THE_BEAST_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A7:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xAB695E04;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A8:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("KILL_LIST_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007A9:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x47442F3C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007AA:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007AB:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x341A899E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007AC:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("PENNED_IN_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007AD:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x52CAE5DE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007AE:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CHECKPOINTS_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007AF:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x558922C2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B0:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("CHALLENGE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x46A9D688;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B2:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x9C42AF52;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B3:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xCB6B1A14;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B4:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("MOVING_TARGET_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B5:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x1F087571;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B6:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("HELI_MOVING_TARGET_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B7:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x8F76F5E4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B8:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("HOLD_THE_WHEEL_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007B9:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x8A07C865;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007BA:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("HOT_PROPERTY_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007BB:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0x15532C25;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007BC:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("DEAD_DROP_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007BD:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xF20E7A17;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007BE:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = joaat("KING_OF_THE_CASTLE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007BF:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = 0xCBBFD929;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C0:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00000001;
			uParam1->f_5 = 0x4CBCCA16;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C1:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0xC0561F2C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C2:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00001388;
			uParam1->f_5 = 0x34C11E19;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C3:
			*uParam1 = 0f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x004C4B40;
			uParam1->f_5 = 0x3B2C8FB4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C6:
			*uParam1 = 0f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x004C4B40;
			uParam1->f_5 = 0x20B09050;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007C7:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0000000A;
			uParam1->f_5 = 0x971EF066;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007CC:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000064;
			uParam1->f_5 = 0x8C2BA2BF;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000007CD:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xF5A226E5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007CE:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x3613F189;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007CF:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x809BDD94;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D0:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x13CC3834;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D1:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x7F7C5A51;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D2:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xB108F779;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D3:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x2B2DB335;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D4:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x029F3D65;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D5:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xF009F4A5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D6:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x9776099B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D7:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0xF626A96F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D8:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x6947FBED;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007D9:
			*uParam1 = 2000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x2817075C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007DA:
			*uParam1 = 3000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00000BB8;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x2114EE3B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007DB:
			*uParam1 = 100000f;
			uParam1->f_1 = 340000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x00053020;
			uParam1->f_5 = 0x7C8FF4E2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007DC:
			*uParam1 = 195000f;
			uParam1->f_1 = 468000f;
			uParam1->f_2 = 0x0002F9B8;
			uParam1->f_3 = 0x00072420;
			uParam1->f_5 = 0x6A641111;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007DD:
			*uParam1 = 92500f;
			uParam1->f_1 = 222000f;
			uParam1->f_2 = 0x00016954;
			uParam1->f_3 = 0x00036330;
			uParam1->f_5 = 0xFF029CE3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007DE:
			*uParam1 = 167500f;
			uParam1->f_1 = 402000f;
			uParam1->f_2 = 0x00028E4C;
			uParam1->f_3 = 0x00062250;
			uParam1->f_5 = 0x546AF29C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007DF:
			*uParam1 = 185000f;
			uParam1->f_1 = 444000f;
			uParam1->f_2 = 0x0002D2A8;
			uParam1->f_3 = 0x0006C660;
			uParam1->f_5 = 0xCAF1F90A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E0:
			*uParam1 = 200000f;
			uParam1->f_1 = 480000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x00075300;
			uParam1->f_5 = 0x4173A668;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E1:
			*uParam1 = 210000f;
			uParam1->f_1 = 504000f;
			uParam1->f_2 = 0x00033450;
			uParam1->f_3 = 0x0007B0C0;
			uParam1->f_5 = 0xD4C2CF1D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E2:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x20A09422;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E3:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x6CE0EFE1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E4:
			*uParam1 = 7000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001B58;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x42AA31C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E5:
			*uParam1 = 1500f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x000005DC;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = joaat("PRIMARY_MACHINE_PISTOL");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E6:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0x3FEE7EFF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E7:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xE37994E3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E8:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x3297AE87;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007E9:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xB2766450;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007EA:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xE020F9C9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007EB:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xAB4CE800;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007EC:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xA0788065;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007ED:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xEBBBE2FF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007EE:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x5EB229F5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007EF:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x60414F26;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F0:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x9F971CF2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F1:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xF0B3D7BD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F2:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xF0B88901;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F3:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xEBBA8D95;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000007F4:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x1DA63C11;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F5:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x4D496DD8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F6:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x6E3E5913;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F7:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x7E0A1277;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F8:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xDBD2728B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007F9:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x58C39D70;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007FA:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x110C407F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007FB:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xF3E77F1D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007FC:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xC6966C51;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007FD:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x4F51D5A8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007FE:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x919EC643;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000007FF:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x4EBD67F1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000800:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x250903F8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000801:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xD1CA7600;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000802:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x034B78FC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000803:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x4A4871DD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000804:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x11F225FD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000805:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x9D70B933;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000806:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xF0A7AF69;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000807:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x9E2D65A0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000808:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xF7264450;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000809:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xB89ED2B3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000080A:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x63489E7D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000080B:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xBEFEDC6B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000080C:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x78E2FFD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000080D:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x709E6EEA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000080E:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x377FAEA3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000080F:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x52B96D2C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000810:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xEA2D0820;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000811:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x0B6CD31E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000812:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x8A4CFB58;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000813:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x52556871;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000814:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xC142990C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000815:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x6A1AD3EB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000816:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x41A41F81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000817:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0xD1E46EA7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000818:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x5DA3BCAC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000819:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x030798AC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000081A:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000124F8;
			uParam1->f_5 = 0x17C4D1D9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000081B:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x21BA8B61;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000081C:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x94AA132A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000081D:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0x0C1697BD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000081E:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 0x00003A98;
			uParam1->f_3 = 0x000249F0;
			uParam1->f_5 = 0xD099A0C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000081F:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00004E20;
			uParam1->f_5 = 0xB0432F8A;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000820:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x5A03DB6E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000821:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x48A4F642;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000822:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x2F9B000A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000823:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x68468543;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000824:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x97ADA855;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000825:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xD0A861C8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000826:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xF31799A9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000827:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xE6EA6AEE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000828:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xA36356A7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000829:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xD5F7D8EA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000082A:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x20BB61E7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000082B:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xD48FD47F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000082C:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x6DE85BC6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000082D:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x4B69C93E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000082E:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xE99DCB81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000082F:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x06DA1895;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000830:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xD8AAC7C8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000831:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xCA65D91E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000832:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x7AA4AF18;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000833:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xB6FE7A32;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000834:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x95D169D3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000835:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x4C4AAEA8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000836:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x8D0F91B5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000837:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x271ADA90;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000838:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x0A6308EB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000839:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x170F200E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000083A:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xE29B753F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000083B:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x6ABEC3B4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000083C:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xFDEECCFE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000083D:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x14357503;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000083E:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xF52356F7;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x0000083F:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xB8C3953E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000840:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0x8165295F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000841:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0xBC5809F6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000842:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0xF640EEF9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000843:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0x91FA4A93;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000844:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0x9F992AC6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000845:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0x000003E8;
			uParam1->f_3 = 0x00009C40;
			uParam1->f_5 = 0x828CA146;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000846:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xAB0B7E16;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000847:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x94734976;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000848:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x8B789AAD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000849:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x5599231B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000084A:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x377D32FA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000084B:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x5DDF980D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000084C:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x70400402;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000084D:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x9C3B2756;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000084E:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x24706FB8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000084F:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x982EB8C0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000850:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0xED9F1EE8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000851:
			*uParam1 = 5000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xA0517DAE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000852:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000003;
			uParam1->f_5 = 0xE11D5384;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000853:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000004;
			uParam1->f_5 = 0xD104C6E5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000854:
			*uParam1 = 1f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000006;
			uParam1->f_5 = 0xEE0855E9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000855:
			*uParam1 = 1f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0x00000001;
			uParam1->f_3 = 0x00000005;
			uParam1->f_5 = 0xFEC0E155;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A5:
			*uParam1 = 5000f;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xE37C4B58;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A6:
			*uParam1 = 200000f;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0xA99AF3A7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A7:
			*uParam1 = 50000f;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0x94BAB17C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A8:
			*uParam1 = 200000f;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x95D1607A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A9:
			*uParam1 = 200000f;
			uParam1->f_3 = 0x003D0900;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x003D0900;
			uParam1->f_5 = 0x984C3BE6;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x00000856:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0xA6911320;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000857:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xF89A014D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000858:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x1DD6A784;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000859:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x5E31CA68;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000085A:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0xEB39E6B1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000085B:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x6B06540B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000085C:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x43C126FD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000085D:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x13C4DFE8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000085E:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x007270E0;
			uParam1->f_5 = joaat("APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_TURRETED_LIMO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000085F:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x1D4FD440;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000860:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xCC3B3BDA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000861:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x5DCD517E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000862:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xA783D607;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000863:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x372F952E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000864:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x27C5E843;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000865:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x9E70ECF0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000866:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x007270E0;
			uParam1->f_5 = joaat("APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000867:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 0x000493E0;
			uParam1->f_3 = 0x007270E0;
			uParam1->f_5 = joaat("APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO_CARBON");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000868:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xFBC40ABA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000869:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x537DED4B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000086A:
			*uParam1 = 2000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x51F68578;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000086B:
			*uParam1 = 100000f;
			uParam1->f_1 = 3E+07f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x01C9C380;
			uParam1->f_5 = 0xC5CDD19F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000086C:
			*uParam1 = 100000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = 0x5E986B0E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000086D:
			*uParam1 = 100000f;
			uParam1->f_1 = 3.5E+07f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x02160EC0;
			uParam1->f_5 = 0xBDB7A008;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000086E:
			*uParam1 = 100000f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x004C4B40;
			uParam1->f_5 = 0x5E0169E8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000086F:
			*uParam1 = 100000f;
			uParam1->f_1 = 4E+07f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x02625A00;
			uParam1->f_5 = 0x8BF5D5F7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000870:
			*uParam1 = 100000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x00989680;
			uParam1->f_5 = 0x4B392A5A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000871:
			*uParam1 = 25000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0xFBC53C08;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000872:
			*uParam1 = 100000f;
			uParam1->f_1 = 3750000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x00393870;
			uParam1->f_5 = 0x6D2B8FB3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000873:
			*uParam1 = 25000f;
			uParam1->f_1 = 1750000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001AB3F0;
			uParam1->f_5 = 0x1F9F4AA2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000874:
			*uParam1 = 25000f;
			uParam1->f_1 = 1575000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00180858;
			uParam1->f_5 = 0x67644261;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000875:
			*uParam1 = 25000f;
			uParam1->f_1 = 1650000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00192D50;
			uParam1->f_5 = 0x66639587;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000876:
			*uParam1 = 25000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x454677F3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000877:
			*uParam1 = 25000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xAC6DB3F4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000878:
			*uParam1 = 25000f;
			uParam1->f_1 = 2625000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00280DE8;
			uParam1->f_5 = 0x9C7FA69C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000879:
			*uParam1 = 25000f;
			uParam1->f_1 = 2750000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0029F630;
			uParam1->f_5 = 0x9C9E700A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000087A:
			*uParam1 = 25000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = 0x511270E8;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000087B:
			*uParam1 = 25000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0xE8F668EA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000087C:
			*uParam1 = 25000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0xAE1C5956;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000087D:
			*uParam1 = 25000f;
			uParam1->f_1 = 675000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000A4CB8;
			uParam1->f_5 = 0x587478AF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000087E:
			*uParam1 = 25000f;
			uParam1->f_1 = 2250000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00225510;
			uParam1->f_5 = 0x5212FA7E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000087F:
			*uParam1 = 25000f;
			uParam1->f_1 = 2375000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00243D58;
			uParam1->f_5 = 0x0DAC7D1C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000880:
			*uParam1 = 25000f;
			uParam1->f_1 = 3175000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00307258;
			uParam1->f_5 = 0xBF695CFF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000881:
			*uParam1 = 25000f;
			uParam1->f_1 = 1575000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00180858;
			uParam1->f_5 = 0x81B2B5A5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000882:
			*uParam1 = 25000f;
			uParam1->f_1 = 3100000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x002F4D60;
			uParam1->f_5 = 0x86FE9518;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000883:
			*uParam1 = 25000f;
			uParam1->f_1 = 1825000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001BD8E8;
			uParam1->f_5 = 0xCD3074D5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000884:
			*uParam1 = 25000f;
			uParam1->f_1 = 2475000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0025C3F8;
			uParam1->f_5 = 0x560A3E5B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000885:
			*uParam1 = 25000f;
			uParam1->f_1 = 850000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000CF850;
			uParam1->f_5 = 0xC2CA7908;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000886:
			*uParam1 = 25000f;
			uParam1->f_1 = 1700000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0019F0A0;
			uParam1->f_5 = 0xB0C3144B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000887:
			*uParam1 = 25000f;
			uParam1->f_1 = 2125000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00206CC8;
			uParam1->f_5 = 0x5A9D4667;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000888:
			*uParam1 = 25000f;
			uParam1->f_1 = 1100000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x0010C8E0;
			uParam1->f_5 = 0x3D430647;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000889:
			*uParam1 = 25000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x000EE098;
			uParam1->f_5 = 0x1ABEA1F7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000088A:
			*uParam1 = 25000f;
			uParam1->f_1 = 3250000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x00319750;
			uParam1->f_5 = 0x7EBFEF22;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000088B:
			*uParam1 = 25000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001312D0;
			uParam1->f_5 = 0x0BBB4058;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000088C:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_1");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000088D:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_2");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000088E:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_3");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000088F:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_3655_WILD_OATS_DRIVE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000890:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2044_NORTH_CONKER_AVENUE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000891:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2868_HILLCREST_AVENUE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000892:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2862_HILLCREST_AVENUE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000893:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_3677_WHISPYMOUND_DRIVE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000894:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2117_MILTON_ROAD");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000895:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2866_HILLCREST_AVENUE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000896:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2874_HILLCREST_AVENUE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000897:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2113_MAD_WAYNE_THUNDER_DRIVE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000898:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2045_NORTH_CONKER_AVENUE");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000899:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0xD8A5DD87;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000089A:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x2E85D172;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000089B:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x3EB65CE4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000089C:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0xF09A36C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000089D:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0xDF09F653;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000089E:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x8BC0BDEF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000089F:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x8D4D5916;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A0:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x4A6C692E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A1:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0x000061A8;
			uParam1->f_3 = 0x001E8480;
			uParam1->f_5 = 0x1C26FED4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A2:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x7A1A8D81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A3:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x87DF290A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008A4:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xD701C74E;
			uParam1->f_4 = 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000008AA:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x332DE96D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008AB:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xBBF92224;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008AC:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x48D0E237;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008AD:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xC3EC6555;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008AE:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x3A5CBAB3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008AF:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x1FC143A9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B0:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xCA964401;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B1:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xC3F02F39;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B2:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x18000AD1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B3:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x9FBF4DA9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B4:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x9D72F3B2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B5:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xBF62E2BE;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B6:
			*uParam1 = 50000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0xAAAFD7B7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B7:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x99E46A2E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B8:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0xF84A6333;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008B9:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0xC5F99AF1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008BA:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x3CFB6347;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008BB:
			*uParam1 = 170000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0x00029810;
			uParam1->f_3 = 0x002625A0;
			uParam1->f_5 = 0xC460BC16;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008BC:
			*uParam1 = 80000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00013880;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xECC26FB3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008BD:
			*uParam1 = 120000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0001D4C0;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x95F27D28;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008BE:
			*uParam1 = 100000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xDC825555;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008BF:
			*uParam1 = 90000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00015F90;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x5FE4E774;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C0:
			*uParam1 = 55000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000D6D8;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x94A792AA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C1:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x0D83EF2C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C2:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x21BAE54E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C3:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x70C56A10;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C4:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x1927915C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C5:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x6682532A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C6:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x424CD9EC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C7:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x4244CFD6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C8:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xBAC7D0DD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008C9:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x21A45CCB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008CA:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x89803477;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008CB:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x184672BF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008CC:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x0D969D96;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008CD:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x0080D906;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008CE:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x50A2EF8D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008CF:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xBD07DC2F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D0:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x0FCEF7F5;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D1:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x19B1C9A1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D2:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0xD9306601;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D3:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x1D2BDBEC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D4:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x00013880;
			uParam1->f_5 = 0x7046CDCA;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D5:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0016E360;
			uParam1->f_5 = 0x0CD0A711;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D6:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x6C3F0972;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D7:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0x00001388;
			uParam1->f_3 = 0x00007530;
			uParam1->f_5 = 0x06FF846F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D8:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x4E0EF543;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008D9:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xD0B1366E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008DA:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x0A0D1C87;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008DB:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0xF9C5774B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008DC:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0x000007D0;
			uParam1->f_3 = 0x0000C350;
			uParam1->f_5 = 0x9E90572E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008DD:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x3CB9BDC3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008DE:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x5DC9E5C7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008DF:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x622CD2E3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E0:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xB4E648CF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E1:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x0B4A9B21;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E2:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x71DC7E4F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E3:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0xE25E4E74;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E4:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x638CC606;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E5:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x1C06C84E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E6:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x430F1E9A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E7:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x000186A0;
			uParam1->f_5 = 0x24909CFD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E8:
			*uParam1 = 20000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xFB54CB39;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008E9:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x9957501A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008EA:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xD703A925;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008EB:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0x878A7B53;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008EC:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xADA018E4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008ED:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x96607664;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008EE:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x1C039A44;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008EF:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x9F9EB746;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F0:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0x24F9B6D4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F1:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xAF5C944C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F2:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x23FE2AA9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F3:
			*uParam1 = 100000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x00989680;
			uParam1->f_5 = 0xE76987A1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F4:
			*uParam1 = 500000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 0x0007A120;
			uParam1->f_3 = 0x00989680;
			uParam1->f_5 = joaat("BIKER_WEBSITE_NAGASAKI_SHOTARO");
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F5:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xDEF924FD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F6:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x33338E24;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F7:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 0x00002710;
			uParam1->f_3 = 0x0003D090;
			uParam1->f_5 = 0x27F58B23;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F8:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0x00004E20;
			uParam1->f_3 = 0x0007A120;
			uParam1->f_5 = 0x7F34DB4A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008F9:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xB74E403B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008FA:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x793856B3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008FB:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x78969B56;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008FC:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xAD249C58;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008FD:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x30D8DEEF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008FE:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x307ED529;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x000008FF:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x1C18466C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000900:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x49FC193D;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000901:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0xC0E6DD2F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000902:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x63856BA9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000903:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x96A217A7;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000904:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0x0000C350;
			uParam1->f_3 = 0x000F4240;
			uParam1->f_5 = 0x0CFC425B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000905:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x58BB8BA9;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000906:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xC87EE941;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000907:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x99DB62E2;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000908:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xEF4024C4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000909:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x14663300;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000090A:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x7DBED757;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000090B:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xDDABBF69;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000090C:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xEB348EFC;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000090D:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x4DE14848;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000090E:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x9A67E7BB;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000090F:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x4B157110;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000910:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xA06CCA9F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000911:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xDF00E0F0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000912:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x59453C81;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000913:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xB8C5F484;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000914:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x0608812F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000915:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xCAC70BB0;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000916:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x409F45BF;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000917:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x291CD66A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000918:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xC9BEDC2A;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000919:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x866390B3;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000091A:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x0C9D2DE4;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000091B:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xCA71BA74;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000091C:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x644A8DF6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000091D:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x114D9F33;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000091E:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xD1762D4F;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000091F:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xE8D0D07C;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000920:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x18AF27CD;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000921:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xD9CEAA8B;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000922:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x59983DA6;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000923:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x88348759;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000924:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x2F632C2E;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000925:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x00030D40;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x64769895;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000926:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xA32FA392;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000927:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x000186A0;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0xB673D772;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x00000929:
			*uParam1 = 0f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x0018CBA8;
			uParam1->f_5 = 0x1905A5C1;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000092A:
			*uParam1 = 0f;
			uParam1->f_1 = 2375000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x00243D58;
			uParam1->f_5 = 0xCE94FB41;
			uParam1->f_4 = 0x00000001;
			break;
		
		case 0x0000092B:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0x00000000;
			uParam1->f_3 = 0x002DC6C0;
			uParam1->f_5 = 0x112A6E1E;
			uParam1->f_4 = 0x00000001;
			break;
	}
}

int func_3()
{
	if (Global_25818D)
	{
		return 0x00000020;
	}
	return (0x00000020 - Global_25818E);
}

int func_4(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 >= 0x0000001C)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 0x0000001C), 64);
		return unk_0x12AB0310C2281427(&cVar0);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0B5EE873;
			break;
		
		case 0x00000001:
			return 0x38CEB237;
			break;
		
		case 0x00000002:
			return 0x53599429;
			break;
		
		case 0x00000003:
			return 0xEE611088;
			break;
		
		case 0x00000004:
			return 0xBB04D34F;
			break;
		
		case 0x00000005:
			return 0x3AEFBEA0;
			break;
		
		case 0x00000006:
			return 0x43FE68BD;
			break;
		
		case 0x00000007:
			return 0x7030EBCC;
			break;
		
		case 0x00000008:
			return 0xC32348A0;
			break;
		
		case 0x00000009:
			return 0x3D76C61B;
			break;
		
		case 0x0000000A:
			return 0xC795D7FC;
			break;
		
		case 0x0000000B:
			return 0xEA4446C2;
			break;
		
		case 0x0000000C:
			return 0xF4175CBB;
			break;
		
		case 0x0000000D:
			return 0xCC580A3A;
			break;
		
		case 0x0000000E:
			return 0x4434A3F6;
			break;
		
		case 0x0000000F:
			return 0x202DE323;
			break;
		
		case 0x00000010:
			return 0x2217A8F1;
			break;
		
		case 0x00000011:
			return 0x30C5F8C6;
			break;
		
		case 0x00000012:
			return 0xF508B799;
			break;
		
		case 0x00000013:
			return 0xFCDE7FF3;
			break;
		
		case 0x0000001A:
			return 0xE86E24FE;
			break;
		
		case 0x00000014:
			return 0xBDD1A4F5;
			break;
		
		case 0x00000015:
			return 0xAD9BAC56;
			break;
		
		case 0x00000016:
			return 0x56A36BC3;
			break;
		
		case 0x00000017:
			break;
		
		case 0x00000018:
			return 0x67F82C09;
			break;
		
		case 0x00000019:
			return 0x9BDECF20;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001D:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0x00000000;
}

void func_5()
{
	unk_0x7134353BBA0D7C9C();
	unk_0x37FAE5D526D939DB(-9f, -9f, -9f, -10f, -10f, -10f, -25f, -25f, -25f, -28f, -28f, -28f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000);
	unk_0x7D6CA5F52B3748BF(-9f, -9f, -9f, -10f, -10f, -10f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	func_5();
}

void func_6()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_7()
{
	var uVar0;
	
	func_15(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_14())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_13())
	{
		return 0x00000001;
	}
	if (func_12(0x0000009F))
	{
		if (!func_11())
		{
			return 0x00000001;
		}
	}
	if (func_12(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_8() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_8()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_8()
{
	switch (func_10())
	{
		case 0x00000000:
			return func_9();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_9()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_7830;
}

bool func_11()
{
	return Global_2564C8.f_256;
}

int func_12(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_13()
{
	return Global_258C08;
}

bool func_14()
{
	return Global_2564C8.f_251;
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_16(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_18(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_17(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_17(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_18(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

