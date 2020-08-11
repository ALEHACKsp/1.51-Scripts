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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 0x00000003;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_53 = 0x00000002;
	unk_0xB57F88F0123F4C38();
	if (unk_0x2EBF608FFE6CA406(0x00000020))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		func_104();
		switch (iLocal_54)
		{
			case 0x00000000:
				func_99();
				break;
			
			case 0x00000001:
				func_90();
				func_2();
				Global_1771C = 0x00000000;
				break;
			
			case 0x00000002:
				func_1();
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	iLocal_54 = 0x00000000;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0x00000000;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = 0x00000003;
	}
	else
	{
		iVar0 = func_85();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = 0x00000001;
		iLocal_66 = 0x00000000;
		iLocal_67 = 0x00000000;
		iLocal_74 = 0x00000000;
		iLocal_80 = 0x00000000;
	}
	if (iLocal_58 == 0x00000091)
	{
		return;
	}
	bVar1 = 0x00000000;
	if ((iLocal_55 == 0x00000006 && func_84(0x00000040)) || (iLocal_55 == 0x00000005 && unk_0x8A22C4C08282BF26(joaat("pilot_school")) > 0x00000000))
	{
		bVar1 = 0x00000001;
		iLocal_60 = 0x00000001;
	}
	func_78();
	if (Global_1771A || (Global_1771B && !func_75(0x00000000)))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000008)
			{
				func_74(iLocal_58, iVar2);
				iVar2++;
			}
			Global_1771A = 0x00000000;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || (!unk_0x8CD06866876216F2() && !func_73(iLocal_58))) || unk_0x991B1F0980C62628()) || func_72()) || unk_0x22A8E52414415B76()) || unk_0x757EF87A33649210()) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || Global_12B4C) || Global_1771C) || iLocal_61)
		{
			iLocal_82 = 0x00000001;
			iLocal_83 = unk_0x1C0640BA9A7327B3();
			if (unk_0x8CD06866876216F2())
			{
				iLocal_84 = unk_0x2B6E0A53779D29EA();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_83) > 0x00000BB8) || (unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), unk_0x04787588C7E736F8(iLocal_84, 0x00000BB8))))
			{
				iLocal_82 = 0x00000000;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_56) > 0x000007D0) || (unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), unk_0x04787588C7E736F8(iLocal_57, 0x000007D0)))) || bLocal_59)
	{
		if (iLocal_55 >= 0x00000008)
		{
			iLocal_55 = 0x00000000;
			iLocal_56 = unk_0x1C0640BA9A7327B3();
			if (unk_0x8CD06866876216F2())
			{
				iLocal_57 = unk_0x2B6E0A53779D29EA();
			}
		}
		iVar11 = 0x00000001;
		if (bLocal_59)
		{
			iVar11 = 0x00000008;
		}
		iVar12 = 0x00000000;
		while (iVar12 < iVar11)
		{
			bVar13 = 0x00000001;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_71(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x8CD06866876216F2())
			{
				iVar3 = func_70(iVar7, 0xFFFFFFFF, 0x00000000);
			}
			else if (iVar8 == 0x00000000)
			{
				iVar3 = Global_1B416.f_936.f_21B.f_953[iLocal_58];
			}
			else
			{
				unk_0x6FB46C25CCB7E6D5(iVar6, &iVar3, 0xFFFFFFFF);
			}
			iVar5 = iVar3;
			iVar3 = func_69(iVar3, 0x00000000, 0x00000064);
			if (func_56(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x8CD06866876216F2())
				{
					func_55(iVar7, iVar4, 0xFFFFFFFF, 0x00000001, 0x00000000);
				}
				else if (iVar8 == 0x00000000)
				{
					if (Global_1B416.f_936.f_21B.f_953[iLocal_58] == 0x00000000)
					{
						bVar13 = 0x00000000;
					}
					Global_1B416.f_936.f_21B.f_953[iLocal_58] = iVar4;
				}
				else
				{
					unk_0xCDC520E5E48E63D9(iVar6, iVar4, 0x00000001);
				}
				if (iVar4 > func_53(iLocal_58, iVar8, 0xFFFFFFFF))
				{
					if (unk_0x8CD06866876216F2())
					{
					}
					else if ((!Global_1B416.f_2378 && !func_52(0x00000000)) || !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_2[0x0000001B /*3*/], 0x00000002))
					{
						bVar13 = 0x00000000;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_51(iLocal_58, iVar8)));
					if ((iVar14 % func_51(iLocal_58, iVar8)) >= 0x00000000)
					{
						iVar15 = (iVar15 + func_51(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_51(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = 0x00000000;
					}
					if (func_46())
					{
						bVar13 = 0x00000000;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x8CD06866876216F2())
							{
								if (func_45(0x00000075, 0xFFFFFFFF) == 0x00000000)
								{
									if (!unk_0xFEBC1E4EC9E001F0() && func_9())
									{
										func_8("STAT_HELP2", 0xFFFFFFFF);
										func_4(0x00000075, 0x00000001, 0xFFFFFFFF, 0x00000001);
									}
								}
							}
							iLocal_61 = 0x00000001;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_51(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 0x00000064)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0x00000000)
							{
								unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_playing_time"), &iVar10, 0xFFFFFFFF);
								unk_0xCDC520E5E48E63D9(iVar9, iVar10, 0x00000001);
							}
							else if (iLocal_58 == 0x00000001)
							{
								unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_playing_time"), &iVar10, 0xFFFFFFFF);
								unk_0xCDC520E5E48E63D9(iVar9, iVar10, 0x00000001);
							}
							else if (iLocal_58 == 0x00000002)
							{
								unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_playing_time"), &iVar10, 0xFFFFFFFF);
								unk_0xCDC520E5E48E63D9(iVar9, iVar10, 0x00000001);
							}
							else if (iLocal_58 == 0x00000003)
							{
							}
						}
					}
				}
				func_74(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = 0x00000001;
				if (unk_0x8CD06866876216F2())
				{
					func_55(iVar7, iVar4, 0xFFFFFFFF, 0x00000001, 0x00000000);
				}
				else if (iVar8 == 0x00000000)
				{
					Global_1B416.f_936.f_21B.f_953[iLocal_58] = iVar4;
					bVar16 = 0x00000000;
				}
				else
				{
					unk_0xCDC520E5E48E63D9(iVar6, iVar4, 0x00000001);
				}
				if (bVar16)
				{
					func_74(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 0x00000001;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0x00000000)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_6();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1407E9;
}

int func_7()
{
	return 0x00000001;
	return 0x00000000;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_9()
{
	if ((unk_0x2BD7F414441CE892() && unk_0x0178C60FEA5C5A75()) && !func_44(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (Global_195CCA == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_195C36 == 0x00000001)
	{
		return 0x00000000;
	}
	if (func_43(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEA24327BC8283DFF())
	{
		return 0x00000000;
	}
	if (Global_1805FD == 0x00000001)
	{
		return 0x00000000;
	}
	if (unk_0x1C53FD812DB1E31C())
	{
		return 0x00000000;
	}
	if (Global_EC6CE)
	{
		return 0x00000000;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2EE == 0x00000001)
	{
		return 0x00000000;
	}
	if (func_42())
	{
		return 0x00000000;
	}
	if (func_41())
	{
		return 0x00000000;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(0x00000003, 0xFFFFFFFF))
			{
				if (func_37(&Global_259519, 0x000493E0, 0x00000000) == 0x00000001)
				{
					func_36(&Global_259517);
					func_34(0x00000003, 0xFFFFFFFF);
				}
				else if (func_37(&Global_259517, 0x00001B58, 0x00000000) == 0x00000000)
				{
					return 0x00000000;
				}
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (func_33())
	{
		return 0x00000000;
	}
	if (func_32())
	{
		return 0x00000000;
	}
	if (func_30())
	{
		return 0x00000000;
	}
	if (func_29())
	{
		return 0x00000000;
	}
	if (func_28())
	{
		return 0x00000000;
	}
	if (func_27())
	{
		return 0x00000000;
	}
	if (unk_0xF929B1A0A409FF93())
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0x18AF0C72ABD5543B())
	{
		if (func_26(unk_0x16F2683693E537C9()) == joaat("weapon_sniperrifle") || func_26(unk_0x16F2683693E537C9()) == joaat("weapon_heavysniper"))
		{
			return 0x00000000;
		}
	}
	if (unk_0x757EF87A33649210())
	{
		return 0x00000000;
	}
	if (func_25(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_24(0x0000000C, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (unk_0x2F1FB0453B36C270(0x00000013))
	{
		return 0x00000000;
	}
	if (func_23())
	{
		return 0x00000000;
	}
	if (func_22())
	{
		return 0x00000000;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23)
	{
		return 0x00000000;
	}
	if (Global_18052F)
	{
		return 0x00000000;
	}
	if (Global_180533)
	{
		return 0x00000000;
	}
	if (Global_180535)
	{
		return 0x00000000;
	}
	if (Global_2537E2.f_F3B.f_27)
	{
		return 0x00000000;
	}
	if (func_21(0x00000000))
	{
		return 0x00000000;
	}
	if (func_20())
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_F7F)
	{
		return 0x00000000;
	}
	if (Global_2537E2.f_EB5)
	{
		return 0x00000000;
	}
	if (!func_19(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_18(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (Global_2537E2.f_F3B.f_27 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_2567E2.f_B1E.f_19 == 0x00000001)
	{
		return 0x00000000;
	}
	if (func_17(0x00000001))
	{
		return 0x00000000;
	}
	if (func_15())
	{
		return 0x00000000;
	}
	if (unk_0x2F1FB0453B36C270(0x00000010))
	{
		return 0x00000000;
	}
	if (func_14())
	{
		return 0x00000000;
	}
	if (func_13())
	{
		return 0x00000000;
	}
	if (unk_0x8FA469D9C5F1A01F())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0x00000000;
		}
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2DC)
	{
		return 0x00000000;
	}
	if (func_10(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 0x0000001A);
	}
	return 0x00000000;
}

int func_11()
{
	return 0xFFFFFFFF;
}

bool func_12(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_13()
{
	return Global_2537E2.f_766.f_2BD != 0x00000000;
}

bool func_14()
{
	return Global_2537E2.f_BE7.f_242;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_14E99F.f_28 == 0x00000003;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_18(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D38C[iParam0 /*38*/].f_E, 0x00000000);
}

int func_19(int iParam0, bool bParam1, bool bParam2)
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

int func_20()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_21(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_22()
{
	return Global_150392.f_70;
}

bool func_23()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

int func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				if (Global_150392.f_89[iParam1])
				{
					return 0x00000001;
				}
				if (Global_150392.f_AA[iParam1])
				{
					return 0x00000001;
				}
			}
			break;
		
		default:
			if (unk_0xEAE0D21A50E6C7F4(Global_150392.f_416, iParam0))
			{
				return 0x00000001;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_150392.f_417, iParam0))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

bool func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

bool func_27()
{
	return Global_2564C8.f_250;
}

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 0x0000000D);
}

bool func_29()
{
	return Global_2564C8.f_24F;
}

int func_30()
{
	if (func_31() == 0x00000001 || func_31() == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_31()
{
	return Global_1406D3.f_12;
}

int func_32()
{
	if (func_31() == 0x00000003 || func_31() == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_33()
{
	if (unk_0x8A22C4C08282BF26(joaat("maintransition")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_6();
	}
	Global_152D85 = 0x00000000;
	if (unk_0xE0DC536BD2AC0301() == 0x00000000)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xD5F10CECBB7D51B6(0x00000000, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_4(0x00000078, 0x00000000, iParam1, 0x00000001);
			func_4(0x0000007C, 0x00000000, iParam1, 0x00000001);
			func_4(0x00000073, 0x00000000, iParam1, 0x00000001);
			func_4(0x00000077, 0x00000000, iParam1, 0x00000001);
			func_4(0x00000079, 0x00000000, iParam1, 0x00000001);
			func_4(0x0000007A, 0x00000000, iParam1, 0x00000001);
			func_4(0x0000007D, 0x00000000, iParam1, 0x00000001);
			func_55(0x00000517, 0x00000000, iParam1, 0x00000001, 0x00000000);
			func_55(0x00001C41, 0x00000000, iParam1, 0x00000001, 0x00000000);
			break;
	}
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000392;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000393;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000394;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000395;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000396;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_38(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

int func_40()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_41()
{
	return Global_14086D;
}

bool func_42()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_44(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000000D);
}

int func_45(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_46()
{
	if (!func_49(0x00000001))
	{
		return 0x00000000;
	}
	if (func_47())
	{
		return 0x00000000;
	}
	return Global_198C67;
}

bool func_47()
{
	return func_48(unk_0xD803B885F5E47A62());
}

int func_48(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

bool func_49(bool bParam0)
{
	return func_50(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_50(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_11();
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000014;
					break;
				
				case 0x00000001:
					return 0x00000014;
					break;
				
				case 0x00000003:
					return 0x00000014;
					break;
				
				case 0x00000002:
					return 0x00000014;
					break;
				
				case 0x00000004:
					return 0x00000014;
					break;
				
				case 0x00000005:
					return 0x00000014;
					break;
				
				case 0x00000006:
					return 0x00000014;
					break;
				
				case 0x00000007:
					return 0x00000014;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000014;
					break;
				
				case 0x00000001:
					return 0x00000014;
					break;
				
				case 0x00000003:
					return 0x00000014;
					break;
				
				case 0x00000002:
					return 0x00000014;
					break;
				
				case 0x00000004:
					return 0x00000014;
					break;
				
				case 0x00000005:
					return 0x00000014;
					break;
				
				case 0x00000006:
					return 0x00000014;
					break;
				
				case 0x00000007:
					return 0x00000014;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000014;
					break;
				
				case 0x00000001:
					return 0x00000014;
					break;
				
				case 0x00000003:
					return 0x00000014;
					break;
				
				case 0x00000002:
					return 0x00000014;
					break;
				
				case 0x00000004:
					return 0x00000014;
					break;
				
				case 0x00000005:
					return 0x00000014;
					break;
				
				case 0x00000006:
					return 0x00000014;
					break;
				
				case 0x00000007:
					return 0x00000014;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000014;
					break;
				
				case 0x00000001:
					return 0x00000014;
					break;
				
				case 0x00000003:
					return 0x00000014;
					break;
				
				case 0x00000002:
					return 0x00000014;
					break;
				
				case 0x00000004:
					return 0x00000014;
					break;
				
				case 0x00000005:
					return 0x00000014;
					break;
				
				case 0x00000006:
					return 0x00000014;
					break;
				
				case 0x00000007:
					return 0x00000014;
					break;
			}
			break;
	}
	return 0x00000001;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x8CD06866876216F2())
	{
		if (func_54(0x0000000E))
		{
			return 0x00000064;
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000002F;
					break;
				
				case 0x00000003:
					return 0x00000016;
					break;
				
				case 0x00000002:
					return 0x00000015;
					break;
				
				case 0x00000004:
					return 0x00000036;
					break;
				
				case 0x00000005:
					return 0x0000001F;
					break;
				
				case 0x00000006:
					return 0x0000004F;
					break;
				
				case 0x00000007:
					return 0x00000051;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x00000033;
					break;
				
				case 0x00000003:
					return 0x0000002E;
					break;
				
				case 0x00000002:
					return 0x00000031;
					break;
				
				case 0x00000004:
					return 0x00000047;
					break;
				
				case 0x00000005:
					return 0x00000013;
					break;
				
				case 0x00000006:
					return 0x00000018;
					break;
				
				case 0x00000007:
					return 0x00000015;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x00000017;
					break;
				
				case 0x00000003:
					return 0x0000001C;
					break;
				
				case 0x00000002:
					return 0x0000004F;
					break;
				
				case 0x00000004:
					return 0x0000001F;
					break;
				
				case 0x00000005:
					return 0x00000052;
					break;
				
				case 0x00000006:
					return 0x00000045;
					break;
				
				case 0x00000007:
					return 0x00000031;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					return func_70(0x000004C8, iParam2, 0x00000000);
					break;
				
				case 0x00000003:
					return func_70(0x000004CE, iParam2, 0x00000000);
					break;
				
				case 0x00000002:
					return func_70(0x000004CA, iParam2, 0x00000000);
					break;
				
				case 0x00000004:
					return func_70(0x000004CD, iParam2, 0x00000000);
					break;
				
				case 0x00000005:
					return func_70(0x000004CC, iParam2, 0x00000000);
					break;
				
				case 0x00000006:
					return func_70(0x000004C9, iParam2, 0x00000000);
					break;
				
				case 0x00000007:
					return func_70(0x000004CB, iParam2, 0x00000000);
					break;
			}
			break;
	}
	return 0x00000000;
}

bool func_54(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_55(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_57(iParam0, iParam1, 0x00000000, 0xFFFFFFFF);
	if (*uParam3 > iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000000:
			if (iParam0 == 0x00000000)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability_unlocked"), &iVar3, 0xFFFFFFFF);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability_unlocked"), &iVar3, 0xFFFFFFFF);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability_unlocked"), &iVar3, 0xFFFFFFFF);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = SYSTEM::TO_FLOAT(func_70(0x00000040, iParam3, 0x00000000));
			}
			break;
		
		case 0x00000001:
			if (iParam0 == 0x00000000)
			{
				unk_0x893A626C476B583D(joaat("sp0_dist_running"), &fVar1, 0xFFFFFFFF);
				fVar0 = ((fVar1 - Global_1B416.f_936.f_21B.f_933[iParam0]) / 175f);
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x893A626C476B583D(joaat("sp1_dist_running"), &fVar1, 0xFFFFFFFF);
				fVar0 = ((fVar1 - Global_1B416.f_936.f_21B.f_933[iParam0]) / 175f);
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x893A626C476B583D(joaat("sp2_dist_running"), &fVar1, 0xFFFFFFFF);
				fVar0 = ((fVar1 - Global_1B416.f_936.f_21B.f_933[iParam0]) / 175f);
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (func_68(0x00000014, iParam3) / 175f);
				func_65(&fVar0);
			}
			if (iParam0 == 0x00000000)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 0x00000001)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 0x00000002)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(func_63(0x00000032, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 0x00000000)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 0x00000001)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 0x00000002)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(func_63(0x0000002F, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + ((4f * Global_40001.f_5D11) * IntToFloat(func_70(0x00001C42, 0xFFFFFFFF, 0x00000000))));
			}
			if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 0x00000003:
			if (iParam0 == 0x00000000)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 0x00000001)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 0x00000002)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(func_63(0x00000034, iParam3))) / 30f);
				func_65(&fVar0);
			}
			break;
		
		case 0x00000002:
			if (iParam0 == 0x00000000)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_unarmed_hits"), &iVar3, 0xFFFFFFFF);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_937[iParam0])) / 20f);
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_unarmed_hits"), &iVar3, 0xFFFFFFFF);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_937[iParam0])) / 20f);
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_unarmed_hits"), &iVar3, 0xFFFFFFFF);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_937[iParam0])) / 20f);
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_70(0x000005DB, iParam3, 0x00000000)) / 20f);
				func_65(&fVar0);
			}
			break;
		
		case 0x00000004:
			if (iParam0 == 0x00000000)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_number_near_miss"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_93B[iParam0])) / 50f));
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_number_near_miss"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_93B[iParam0])) / 50f));
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_number_near_miss"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_93B[iParam0])) / 50f));
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + IntToFloat((func_70(0x00000070, iParam3, 0x00000000) / 0x00000032)));
				func_65(&fVar0);
			}
			break;
		
		case 0x00000005:
			if (iParam0 == 0x00000000)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 0x00000001)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 0x00000002)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(func_63(0x0000002B, iParam3))) / 10f);
			}
			if (iParam0 == 0x00000000)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 0x00000001)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 0x00000002)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(func_63(0x0000002D, iParam3))) / 10f));
			}
			if (iParam0 == 0x00000000)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_plane_landings"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_plane_landings"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_plane_landings"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + IntToFloat(func_70(0x0000003D, iParam3, 0x00000000)));
				func_65(&fVar0);
			}
			if ((iParam0 == 0x00000000 || iParam0 == 0x00000001) || iParam0 == 0x00000002)
			{
				iVar4 = func_61(iParam0, 0x00000000);
				if (iParam0 == 0x00000002)
				{
					if (iVar4 == 0x00000003)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 0x00000002)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 0x00000001)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000001);
				if (iParam0 == 0x00000002)
				{
					if (iVar4 == 0x00000003)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 0x00000002)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 0x00000001)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000002);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000003);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000006);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000004);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_61(iParam0, 0x00000005);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000007);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x00000008);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 0x0000000B);
				if (iVar4 == 0x00000003)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 0x00000002)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 0x00000001)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 0x00000007:
			if (iParam0 == 0x00000000)
			{
				unk_0x893A626C476B583D(joaat("sp0_dist_walk_st"), &fVar1, 0xFFFFFFFF);
				fVar0 = ((fVar1 - Global_1B416.f_936.f_21B.f_93F[iParam0]) / 45f);
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x893A626C476B583D(joaat("sp1_dist_walk_st"), &fVar1, 0xFFFFFFFF);
				fVar0 = ((fVar1 - Global_1B416.f_936.f_21B.f_93F[iParam0]) / 45f);
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x893A626C476B583D(joaat("sp2_dist_walk_st"), &fVar1, 0xFFFFFFFF);
				fVar0 = ((fVar1 - Global_1B416.f_936.f_21B.f_93F[iParam0]) / 45f);
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (func_68(0x00000013, iParam3) / 45f);
			}
			if (iParam0 == 0x00000000)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_kills_stealth"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_943[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_kills_stealth"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_943[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_kills_stealth"), &iVar3, 0xFFFFFFFF);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_1B416.f_936.f_21B.f_943[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 0x00000003)
			{
				iVar3 = func_70(0x00000022, iParam3, 0x00000000);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				func_65(&fVar0);
			}
			break;
		
		case 0x00000006:
			if (iParam0 == 0x00000000)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_hits_mission"), &iVar5, 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_hits_peds_vehicles"), &iVar6, 0xFFFFFFFF);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_1B416.f_936.f_21B.f_947[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_1B416.f_936.f_21B.f_94B[iParam0])) / 80f));
			}
			else if (iParam0 == 0x00000001)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_hits_mission"), &iVar5, 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_hits_peds_vehicles"), &iVar6, 0xFFFFFFFF);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_1B416.f_936.f_21B.f_947[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_1B416.f_936.f_21B.f_94B[iParam0])) / 80f));
			}
			else if (iParam0 == 0x00000002)
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_hits_mission"), &iVar5, 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_hits_peds_vehicles"), &iVar6, 0xFFFFFFFF);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_1B416.f_936.f_21B.f_947[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_1B416.f_936.f_21B.f_94B[iParam0])) / 80f));
			}
			else if (iParam0 == 0x00000003)
			{
				iVar6 = func_70(0x000000AB, iParam3, 0x00000000);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0x00000000 || iParam0 == 0x00000001) || iParam0 == 0x00000002)
			{
				iVar7 = 0x00000000;
				while (iVar7 < 0x00000016)
				{
					switch (func_60(iVar7, iParam0))
					{
						case 0x00000003:
							iVar8++;
							break;
						
						case 0x00000002:
							iVar9++;
							break;
						
						case 0x00000001:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 0x00000003)
			{
				fVar0 = (fVar0 + IntToFloat(func_59(joaat("mpply_shootingrange_wins")) * 1));
				func_65(&fVar0);
			}
			break;
	}
	if (iParam1 != 0x00000000)
	{
		iVar11 = func_53(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_51(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_51(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_51(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_51(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = func_69(iVar2, 0x00000000, 0x00000064);
	return iVar2;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
				case 0x00000003:
				case 0x00000002:
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					return Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					return func_70(0x00000048, iParam2, 0x00000000);
					break;
				
				case 0x00000003:
					return func_70(0x0000004A, iParam2, 0x00000000);
					break;
				
				case 0x00000002:
					return func_70(0x00000049, iParam2, 0x00000000);
					break;
				
				case 0x00000004:
					return func_70(0x0000004B, iParam2, 0x00000000);
					break;
				
				case 0x00000005:
					return func_70(0x0000004C, iParam2, 0x00000000);
					break;
				
				case 0x00000006:
					return func_70(0x0000004D, iParam2, 0x00000000);
					break;
				
				case 0x00000007:
					return func_70(0x0000004E, iParam2, 0x00000000);
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_60(int iParam0, int iParam1)
{
	return Global_1B416.f_4AC6[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 < 0x00000000 || iParam0 > 0x00000002)
	{
		return 0x00000000;
	}
	return Global_1B416.f_7BF[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = (iVar0 + (unk_0x959C6922055154B5(iParam0) * 0x00015180));
	iVar0 = (iVar0 + unk_0xBD23F6A10B02FA04(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xE9B04C7C30AF0165(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x7727F332D8C1AF5D(iParam0));
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	return Global_26E2D2[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = (iVar0 + unk_0x959C6922055154B5(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xBD23F6A10B02FA04(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xE9B04C7C30AF0165(iParam0));
	return iVar0;
}

var func_65(float fParam0)
{
	if (func_46())
	{
		if (func_66() < Global_40001.f_3197)
		{
			if (*fParam0 + (IntToFloat(func_66()) * Global_40001.f_3196)) <= IntToFloat(Global_40001.f_31A0)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_66()) * Global_40001.f_3196));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_66()
{
	if (func_49(0x00000001))
	{
		return Global_184507[func_67() /*876*/].f_D3.f_6;
	}
	return 0x00000000;
}

int func_67()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

float func_68(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2769B8[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x893A626C476B583D(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam3 = 0x00000040;
					break;
				
				case 0x00000001:
					*uParam3 = 0x00000041;
					break;
				
				case 0x00000003:
					*uParam3 = 0x00000043;
					break;
				
				case 0x00000002:
					*uParam3 = 0x00000042;
					break;
				
				case 0x00000004:
					*uParam3 = 0x00000044;
					break;
				
				case 0x00000005:
					*uParam3 = 0x00000045;
					break;
				
				case 0x00000006:
					*uParam3 = 0x00000046;
					break;
				
				case 0x00000007:
					*uParam3 = 0x00000047;
					break;
			}
			break;
	}
}

int func_72()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

bool func_73(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0x00000000 || iParam0 != 0x00000001) || iParam0 != 0x00000002) || iParam0 != 0x00000003)
	{
		return;
	}
	func_71(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_70(iVar3, 0xFFFFFFFF, 0x00000000);
	}
	else
	{
		unk_0x6FB46C25CCB7E6D5(iVar2, &iVar0, 0xFFFFFFFF);
	}
	switch (iParam1)
	{
		case 0x00000002:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			unk_0xF7599E37AEBF26E7(unk_0xD803B885F5E47A62(), fVar1, 0x00000001);
			break;
		
		case 0x00000007:
			if (unk_0x8A22C4C08282BF26(joaat("armenian3")) != 0x00000000 || unk_0x8A22C4C08282BF26(joaat("trevor3")) != 0x00000000)
			{
				Global_1771B = 0x00000001;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				unk_0x0FFE8B6DB75A4C39(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xE78BAF6C6D97879A(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xEE195B25E889FD63(unk_0xD803B885F5E47A62(), fVar1);
			}
			break;
	}
}

int func_75(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_76(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_76(int iParam0)
{
	return func_77(iParam0, Global_A1D7);
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000000F)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000009:
				case 0x0000000A:
				case 0x00000007:
				case 0x0000000D:
				case 0x0000000E:
					return 0x00000000;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000011)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
		case 0x00000008:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000006)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000011:
				case 0x0000000C:
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

void func_78()
{
	func_83();
	func_82();
	func_79();
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 0x00000003)
		{
			if (Global_200000[func_81() /*10930*/].f_181E.f_7)
			{
				iLocal_77 = func_62(func_63(0x00000093, 0xFFFFFFFF));
				Global_200000[func_81() /*10930*/].f_181E.f_7 = 0x00000000;
			}
			else
			{
				iLocal_77 = Global_200000[func_81() /*10930*/].f_181E.f_6;
			}
			if (Global_200000[func_81() /*10930*/].f_181E.f_4 == 0x00000000)
			{
				Global_200000[func_81() /*10930*/].f_181E.f_4 = unk_0xDD0E7998AE8AD485();
			}
			iLocal_79 = Global_200000[func_81() /*10930*/].f_181E.f_4;
			iLocal_78 = Global_200000[func_81() /*10930*/].f_181E.f_5;
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_8F4[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0x00000000:
						iLocal_77 = func_62(joaat("sp0_total_wheelie_time"));
						break;
					
					case 0x00000001:
						iLocal_77 = func_62(joaat("sp1_total_wheelie_time"));
						break;
					
					case 0x00000002:
						iLocal_77 = func_62(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_1B416.f_936.f_21B.f_8F4[iLocal_58] = 0x00000000;
			}
			else
			{
				iLocal_77 = Global_1B416.f_936.f_21B.f_8F0[iLocal_58];
			}
			if (Global_1B416.f_936.f_21B.f_8E8[iLocal_58] == 0x00000000)
			{
				Global_1B416.f_936.f_21B.f_8E8[iLocal_58] = unk_0xDD0E7998AE8AD485();
			}
			iLocal_79 = Global_1B416.f_936.f_21B.f_8E8[iLocal_58];
			iLocal_78 = Global_1B416.f_936.f_21B.f_8EC[iLocal_58];
		}
		iLocal_80 = 0x00000001;
		iLocal_81 = 0x00000001;
	}
	else if ((unk_0xDD0E7998AE8AD485() - iLocal_79) > 0x00015180)
	{
		iLocal_80 = 0x00000000;
		iLocal_81 = 0x00000000;
		iLocal_79 = unk_0xDD0E7998AE8AD485();
		iLocal_78 = 0x00000000;
		if (iLocal_58 == 0x00000003)
		{
			Global_200000[func_81() /*10930*/].f_181E.f_7 = 0x00000001;
		}
		else
		{
			Global_1B416.f_936.f_21B.f_8F4[iLocal_58] = 0x00000001;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0x00000000:
				iVar0 = func_62(joaat("sp0_total_wheelie_time"));
				break;
			
			case 0x00000001:
				iVar0 = func_62(joaat("sp1_total_wheelie_time"));
				break;
			
			case 0x00000002:
				iVar0 = func_62(joaat("sp2_total_wheelie_time"));
				break;
			
			case 0x00000003:
				iVar0 = func_62(func_63(0x00000093, 0xFFFFFFFF));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0x00000000)
		{
			func_80(iLocal_58, 0x00000004, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0xFBFCAFA958ABA1CE() / 0x000003E8) * 60))
		{
			iLocal_81 = 0x00000000;
		}
	}
	if (iLocal_58 == 0x00000003)
	{
		Global_200000[func_81() /*10930*/].f_181E.f_4 = iLocal_79;
		Global_200000[func_81() /*10930*/].f_181E.f_5 = iLocal_78;
	}
	else
	{
		Global_1B416.f_936.f_21B.f_8E8[iLocal_58] = iLocal_79;
		Global_1B416.f_936.f_21B.f_8EC[iLocal_58] = iLocal_78;
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0] = (Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 0x00000003:
			iVar1 = 0x00002CF7;
			switch (iParam1)
			{
				case 0x00000001:
					iVar1 = 0x00000048;
					break;
				
				case 0x00000003:
					iVar1 = 0x0000004A;
					break;
				
				case 0x00000002:
					iVar1 = 0x00000049;
					break;
				
				case 0x00000004:
					iVar1 = 0x0000004B;
					break;
				
				case 0x00000005:
					iVar1 = 0x0000004C;
					break;
				
				case 0x00000006:
					iVar1 = 0x0000004D;
					break;
				
				case 0x00000007:
					iVar1 = 0x0000004E;
					break;
			}
			if (iVar1 != 0x00002CF7)
			{
				iVar0 = func_70(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_55(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_82()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_74)
	{
		bVar0 = 0x00000001;
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar1 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if ((((unk_0xC844350D5D58C99A(iVar1) && unk_0xDF1306B443CD3D15(iVar1, 0x00000000)) && !unk_0xE934758D273C899A(iVar1)) && unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9()) && (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar1)) || unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar1))))
			{
				bVar0 = 0x00000000;
				if (unk_0x9C66D99E63E8E24C(iVar1) >= 53f)
				{
					func_80(iLocal_58, 0x00000004, 0x00000002);
					bVar0 = 0x00000001;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0x00000000;
			iLocal_75 = unk_0x1C0640BA9A7327B3();
			if (unk_0x8CD06866876216F2())
			{
				iLocal_76 = unk_0x2B6E0A53779D29EA();
			}
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar2 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (((unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000)) && unk_0x9C66D99E63E8E24C(iVar2) < 20f) && !unk_0xE934758D273C899A(iVar2))
		{
			if ((!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_75) > 0x00002710) || (unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), unk_0x04787588C7E736F8(iLocal_76, 0x00002710))))
			{
				iLocal_74 = 0x00000001;
			}
		}
	}
}

void func_83()
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (((unk_0xC844350D5D58C99A(iVar1) && unk_0xDF1306B443CD3D15(iVar1, 0x00000000)) && unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9()) && (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar1)) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar1))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar1))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar1))))
		{
			if (iLocal_66)
			{
				if (!unk_0xE934758D273C899A(iVar1))
				{
					if ((!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_68) > 0x000005DC) || (unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), unk_0x04787588C7E736F8(iLocal_69, 0x000005DC))))
					{
						iLocal_70 = unk_0x1C0640BA9A7327B3();
						if (unk_0x8CD06866876216F2())
						{
							iLocal_71 = unk_0x2B6E0A53779D29EA();
						}
						iLocal_67 = 0x00000001;
					}
					iLocal_66 = 0x00000000;
				}
			}
			if (iLocal_67)
			{
				if (!unk_0xE934758D273C899A(iVar1))
				{
					if (unk_0xF79A7BCA9E38BBBC(iVar1))
					{
						if ((((!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_70) > 0x00000014) || (!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_70) == 0x00000000)) || (unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), unk_0x04787588C7E736F8(iLocal_71, 0x00000014)))) || (unk_0x8CD06866876216F2() && unk_0x4F34DBDF4FE51E6C(unk_0x2B6E0A53779D29EA(), iLocal_71)))
						{
						}
						else
						{
							func_80(iLocal_58, 0x00000004, 0x00000001);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x1C0640BA9A7327B3() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = 0x00000001;
					}
				}
				else
				{
					bVar0 = 0x00000001;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!unk_0x8CD06866876216F2() && (unk_0x1C0640BA9A7327B3() - iLocal_72) > 0x000003E8) || (unk_0x8CD06866876216F2() && unk_0xE7E95E58E001D801(unk_0x2B6E0A53779D29EA(), unk_0x04787588C7E736F8(iLocal_73, 0x000003E8))))
				{
					if (unk_0xE934758D273C899A(iVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = unk_0x1C0640BA9A7327B3();
							if (unk_0x8CD06866876216F2())
							{
								iLocal_69 = unk_0x2B6E0A53779D29EA();
							}
							iLocal_66 = 0x00000001;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = 0x00000001;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x1C0640BA9A7327B3();
		if (unk_0x8CD06866876216F2())
		{
			iLocal_73 = unk_0x2B6E0A53779D29EA();
		}
		iLocal_66 = 0x00000000;
		iLocal_67 = 0x00000000;
	}
}

bool func_84(int iParam0)
{
	return (Global_1B083 && iParam0) != 0x00000000;
}

int func_85()
{
	func_86();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_86()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_88(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_87(unk_0x16F2683693E537C9());
			if (func_73(iVar0) && (!func_54(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_73(Global_1B416.f_936.f_21B.f_10E1))
				{
					Global_1B416.f_936.f_21B.f_10E2 = Global_1B416.f_936.f_21B.f_10E1;
				}
				Global_1B416.f_936.f_21B.f_10E3 = iVar0;
				Global_1B416.f_936.f_21B.f_10E1 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_10E1 != 0x00000091)
			{
				Global_1B416.f_936.f_21B.f_10E3 = Global_1B416.f_936.f_21B.f_10E1;
			}
			return;
		}
	}
	Global_1B416.f_936.f_21B.f_10E1 = 0x00000091;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_88(int iParam0)
{
	if (func_73(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_89(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_90()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0x00000000;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0x00000000:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 0x00000001:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 0x00000002:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 0x00000003:
				iVar1 = func_93(unk_0xD803B885F5E47A62());
				if (iVar1 == 0x00000000)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x5283D58F79627134(iVar1);
				}
				break;
		}
		unk_0x1E64CE678ED5F61E("PS_UPDATE");
		unk_0x6D99DF8263D35CE5(iLocal_65);
		unk_0x0B310D25EAD771D7(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0x00000000, sVar0, sVar0);
		iLocal_82 = 0x00000001;
		iLocal_83 = unk_0x1C0640BA9A7327B3() + 5000;
		if (unk_0x8CD06866876216F2())
		{
			iLocal_84 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001388);
		}
		iLocal_61 = 0x00000000;
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000017;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000018;
			break;
		
		case 0x00000002:
			return 0x00000019;
			break;
		
		case 0x00000004:
			return 0x0000000E;
			break;
		
		case 0x00000005:
			return 0x0000001B;
			break;
		
		case 0x00000006:
			return 0x00000011;
			break;
		
		case 0x00000007:
			return 0x0000001C;
			break;
	}
	return 0xFFFFFFFF;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "PSF_SPEC_AB";
			break;
		
		case 0x00000001:
			return "PSF_STAMINA";
			break;
		
		case 0x00000003:
			return "PSF_LUNG";
			break;
		
		case 0x00000002:
			return "PSF_STRENGTH";
			break;
		
		case 0x00000004:
			return "PSF_DRIVING";
			break;
		
		case 0x00000005:
			return "PSF_FLYING";
			break;
		
		case 0x00000006:
			return "PSF_SHOOTING";
			break;
		
		case 0x00000007:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_94(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_94(int iParam0, bool bParam1)
{
	if (!func_19(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_96(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_95(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (!func_19(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_97(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_97(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_98(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_98(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_99()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x89DE52DB50601487() != 0x00000001)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (!func_103(unk_0xD803B885F5E47A62()))
		{
			return;
		}
		if (func_102() != 0x00000000)
		{
			return;
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_102() == 0x00000000)
		{
			iLocal_53 = 0x00000001;
		}
	}
	else
	{
		iLocal_53 = 0x00000000;
	}
	if (!func_101())
	{
		func_100();
	}
	iLocal_55 = 0x00000000;
	iLocal_56 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		iLocal_57 = unk_0x2B6E0A53779D29EA();
	}
	iLocal_72 = unk_0x1C0640BA9A7327B3();
	if (unk_0x8CD06866876216F2())
	{
		iLocal_73 = unk_0x2B6E0A53779D29EA();
	}
	if (unk_0x8CD06866876216F2())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_200000[func_81() /*10930*/].f_181E.f_4F9, 0x00000002))
		{
			fVar0 = (SYSTEM::TO_FLOAT(func_70(0x000000C0, 0xFFFFFFFF, 0x00000000)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = func_69(iVar1, 0x00000000, 0x00000064);
			func_80(0x00000003, 0x00000002, iVar1);
			unk_0x5D96D8530B3D0904(&(Global_200000[func_81() /*10930*/].f_181E.f_4F9), 0x00000002);
		}
	}
	bLocal_59 = 0x00000001;
	iLocal_54 = 0x00000001;
}

void func_100()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000008)
		{
			if (iVar0 != 0x00000000)
			{
				func_71(0x00000003, iVar0, &uVar1, &iVar2);
				func_55(iVar2, func_53(0x00000003, iVar0, 0xFFFFFFFF), 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			iVar0++;
		}
		func_4(0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000001);
		Global_1771A = 0x00000001;
	}
	else
	{
		iVar3 = 0x00000000;
		while (iVar3 < 0x00000003)
		{
			iVar4 = 0x00000000;
			while (iVar4 < 0x00000008)
			{
				if (iVar4 != 0x00000000)
				{
					func_71(iVar3, iVar4, &iVar5, &uVar6);
					unk_0xCDC520E5E48E63D9(iVar5, func_53(iVar3, iVar4, 0xFFFFFFFF), 0x00000001);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_1B416.f_936.f_21B.f_953[0x00000000] = func_53(0x00000000, 0x00000000, 0xFFFFFFFF);
		Global_1B416.f_936.f_21B.f_953[0x00000001] = func_53(0x00000001, 0x00000000, 0xFFFFFFFF);
		Global_1B416.f_936.f_21B.f_953[0x00000002] = func_53(0x00000002, 0x00000000, 0xFFFFFFFF);
		Global_1B416.f_936.f_21B.f_932 = 0x00000001;
		Global_1771A = 0x00000001;
	}
}

int func_101()
{
	if (unk_0x8CD06866876216F2())
	{
		return 0x00000001;
	}
	return Global_1B416.f_936.f_21B.f_932;
}

int func_102()
{
	return Global_7830;
}

int func_103(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

void func_104()
{
	if (iLocal_54 != 0x00000000 && iLocal_53 != 0x00000002)
	{
		if (iLocal_53 == 0x00000000)
		{
			if (unk_0x8CD06866876216F2())
			{
				iLocal_53 = 0x00000002;
			}
			if (!func_101())
			{
				iLocal_53 = 0x00000002;
			}
		}
		else if (iLocal_53 == 0x00000001)
		{
			if ((!unk_0x8CD06866876216F2() || !func_103(unk_0xD803B885F5E47A62())) || func_102() != 0x00000000)
			{
				iLocal_53 = 0x00000002;
			}
		}
		if (iLocal_53 == 0x00000002)
		{
			iLocal_54 = 0x00000002;
		}
	}
}

