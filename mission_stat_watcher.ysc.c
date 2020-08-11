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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	iLocal_62 = iLocal_61;
	iLocal_63 = iLocal_62;
	fLocal_68 = 100f;
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	Global_F042 = 0x00000000;
	Global_F049 = 0x00000000;
	iVar0 = 0x00000001;
	if (unk_0x2EBF608FFE6CA406(0x00000012))
	{
		func_112();
		Global_11F87 = 0x00000000;
		Global_F043 = 0x00000000;
		Global_F05D = 0x00000000;
		unk_0x10FAF14A60A0DBE1();
	}
	iVar1 = 0x00000000;
	SYSTEM::WAIT(0x00000000);
	func_110();
	while (!Global_F041)
	{
		SYSTEM::WAIT(0x000000C8);
		if (Global_F049)
		{
			func_112();
			unk_0x10FAF14A60A0DBE1();
		}
	}
	Global_F050 = 0x00000000;
	Global_F043 = 0x00000001;
	while (!Global_F042)
	{
		if (Global_11F87 > 0x00000000)
		{
			func_104();
			if (Global_F064 == 0xFFFFFFFF)
			{
				Global_F064 = unk_0x1C0640BA9A7327B3();
			}
			else if ((unk_0x1C0640BA9A7327B3() - Global_F064) > 0x000003E8)
			{
				func_103();
			}
		}
		if (Global_F049)
		{
			func_112();
			Global_F043 = 0x00000000;
			unk_0x10FAF14A60A0DBE1();
		}
		SYSTEM::WAIT(0x00000000);
	}
	Global_F043 = 0x00000000;
	if (func_102())
	{
		while (func_102())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
	bVar2 = 0x00000000;
	while (!bVar2)
	{
		if (!Global_F044 == iLocal_70)
		{
			if (Global_F044)
			{
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_60 = 0x00000000;
				Global_F053 = 0x00000000;
			}
			iLocal_70 = Global_F044;
		}
		while (Global_F048)
		{
			SYSTEM::WAIT(0x000003E8);
		}
		if (Global_F042 && !Global_F049)
		{
			if (Global_F041 || iLocal_72)
			{
				Global_F046 = 0x00000000;
				if (bLocal_71)
				{
				}
				if (Global_F042)
				{
				}
				if (!bLocal_71 == Global_F042)
				{
					func_101(&Local_45);
					Local_45.f_232 = 0x00000001;
					func_100();
					func_99();
					iVar3 = 0x00000000;
					iVar3 = 0x00000000;
					while (iVar3 < Global_11F87)
					{
						if (Global_11F88[iVar3 /*9*/] > 0x00000000)
						{
							if (Global_F129[Global_11F88[iVar3 /*9*/] /*13*/] == 0x00000004)
							{
								if (!Global_F129[Global_11F88[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_F129[Global_11F88[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_11F88[iVar3 /*9*/].f_1 == 0x00000000)
										{
											Global_11F88[iVar3 /*9*/].f_3 = 0x00000005;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = 0x00000000;
					if ((Global_12C52 && !Global_F03E) || Global_F04A)
					{
						bVar4 = 0x00000001;
					}
					bVar5 = 0x00000000;
					if (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749())
					{
						bVar5 = 0x00000001;
					}
					else
					{
						if (Global_181DF.f_8)
						{
							bVar5 = 0x00000001;
						}
						if (Global_F05C)
						{
							bVar5 = 0x00000001;
						}
					}
					if (func_98(0x00000000))
					{
						bVar5 = 0x00000001;
						Global_F05C = 0x00000001;
					}
					iVar6 = Global_1201E;
					if (Global_F04B)
					{
						func_95(Global_F04C);
						iVar0 = 0x00000002;
						func_94(&Local_45, "HISHPA", &Global_F057, 0x00000000);
						if (iVar6 == 0x00000045 || iVar6 == 0x00000046)
						{
							func_93(&Local_45, 0x00000003, "ACTATAKE_AG", "", Global_1B416.f_1.f_7E[Global_F04C /*23*/], 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_93(&Local_45, 0x00000003, "POTATAKE", "", Global_1B416.f_1.f_7E[Global_F04C /*23*/], 0x00000000, 0x00000000, 0x00000000);
						}
						iVar7 = 0x00000000;
						iVar7 = 0x00000000;
						while (iVar7 < Global_172FE[Global_F04C /*38*/].f_25)
						{
							if (Global_172FE[Global_F04C /*38*/].f_1F[iVar7] > 0x00000000)
							{
								func_93(&Local_45, 0x00000003, func_92(Global_172FE[Global_F04C /*38*/].f_19[iVar7]), "", (0xFFFFFFFF * Global_172FE[Global_F04C /*38*/].f_1F[iVar7]), 0x00000000, 0x00000000, 0x00000000);
							}
							iVar7++;
						}
						if ((((Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_2[0x00000000] > 0x00000000 || iVar6 == 0x0000004A) || iVar6 == 0x0000004B) || iVar6 == 0x00000045) || iVar6 == 0x00000046)
						{
							func_93(&Local_45, 0x00000003, "ACTATAKE_M", "", Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_2[0x00000000], 0x00000000, 0x00000000, 0x00000000);
						}
						if ((Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_2[0x00000001] > 0x00000000 || iVar6 == 0x0000004A) || iVar6 == 0x0000004B)
						{
							func_93(&Local_45, 0x00000003, "ACTATAKE_F", "", Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_2[0x00000001], 0x00000000, 0x00000000, 0x00000000);
						}
						if ((Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_2[0x00000002] > 0x00000000 || iVar6 == 0x0000004A) || iVar6 == 0x0000004B)
						{
							func_93(&Local_45, 0x00000003, "ACTATAKE_T", "", Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_2[0x00000002], 0x00000000, 0x00000000, 0x00000000);
						}
						if (Global_172F4.f_7 > 0x00000000)
						{
							func_93(&Local_45, 0x00000003, "ACTATAKE_L", "", Global_172F4.f_7, 0x00000000, 0x00000000, 0x00000000);
						}
						iVar8 = func_90(func_91(Global_F04C));
						iVar9 = 0x00000000;
						iVar10 = 0x00000000;
						iVar7 = 0x00000000;
						while (iVar7 < Global_17235[iVar8 /*19*/])
						{
							if (!func_89(Global_1B416.f_1.f_C[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_11[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_11[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 0x0000004A || iVar6 == 0x0000004B)
						{
							func_93(&Local_45, 0x00000003, "LACKTAKE", "", iVar9, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_93(&Local_45, 0x00000003, "CREWTAKE", "", iVar9, 0x00000000, 0x00000000, 0x00000000);
						}
						if (iVar10 > 0x00000000)
						{
							if (!func_98(0x00000000))
							{
								switch (iVar6)
								{
									case 0x0000005A:
										unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_jewel_funeral"), iVar10, 0x00000001);
										break;
									
									case 0x0000005D:
										unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_paleto_funeral"), iVar10, 0x00000001);
										break;
									
									case 0x00000045:
									case 0x00000046:
										unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_bureau_funeral"), iVar10, 0x00000001);
										break;
									
									case 0x00000054:
									case 0x00000055:
										unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_bigs_funeral"), iVar10, 0x00000001);
										break;
									}
							}
							func_93(&Local_45, 0x00000003, "HSTENDPFUN", "", iVar10, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else
					{
						func_94(&Local_45, "MISHPA", &Global_F057, 0x00000000);
					}
					if (Global_11F87 > 0x00000000)
					{
						func_74(&Local_45);
					}
					if (!Global_F03E)
					{
						func_68();
					}
					while (!bVar5)
					{
						if (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749())
						{
							bVar5 = 0x00000001;
						}
						SYSTEM::WAIT(0x00000000);
					}
					if ((bVar5 || Global_F05C) && !bVar4)
					{
						if (!Global_F04A)
						{
							func_64(&Local_45, 0x00000000, 0x00000000);
						}
						bVar11 = 0x00000000;
						if (!Global_1201D)
						{
							switch (Global_1201E)
							{
								case 0x00000032:
								case 0x00000033:
								case 0x00000034:
									unk_0x7352ACF3368DF65F("HoldMissionCompleteWhenPrepared", 0x00000001);
									func_60(0x00000001);
									bVar11 = 0x00000001;
									break;
								
								default:
									unk_0x7352ACF3368DF65F("HoldMissionCompleteWhenPrepared", 0x00000001);
									func_60(0x00000000);
									bVar11 = 0x00000001;
									break;
							}
						}
						else
						{
							unk_0x7352ACF3368DF65F("HoldMissionCompleteWhenPrepared", 0x00000001);
							func_60(0x00000001);
							bVar11 = 0x00000001;
						}
						iVar1 = func_59();
						unk_0xD7992BEF7A9D109E("MISHSTA", 0x00000003);
						while (!unk_0x67C1D9E5B91B2E37(0x00000003))
						{
							SYSTEM::WAIT(0x00000000);
						}
						bLocal_73 = 0x00000001;
						while (unk_0x22A8E52414415B76())
						{
							SYSTEM::WAIT(0x00000000);
						}
						while (unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
						{
							SYSTEM::WAIT(0x00000000);
						}
						func_64(&Local_45, 0x00000001, 0x00000000);
						unk_0x7352ACF3368DF65F("HoldMissionCompleteWhenPrepared", 0x00000000);
						if (bVar11)
						{
							while (!unk_0x96871D785000ACAF())
							{
								SYSTEM::WAIT(0x00000000);
							}
						}
						unk_0x5372553242EA2414();
					}
					if (Global_F041)
					{
						iLocal_72 = 0x00000001;
						Global_F041 = 0x00000000;
					}
					SYSTEM::SETTIMERA(0x00000000);
				}
				if (bLocal_73 && !Global_F049)
				{
					if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
					{
						func_55(0x00000000);
					}
					if (Global_11F87 > 0x00000000 || Global_F03E)
					{
						if (Global_F05C)
						{
							unk_0xD9ACBBA59FD5A09E(0x00000007);
						}
						if (iVar1 && !Global_F03E)
						{
							Global_A56F = 0x00000001;
						}
						if (!Global_F04A)
						{
							if (func_21(&Local_45, 0x00000000, SYSTEM::TO_FLOAT(iVar0), 0x00000000, 0x00000000, 0x00000000))
							{
								Global_F049 = 0x00000001;
							}
							func_20();
						}
						if (Global_F05C)
						{
							unk_0xD9ACBBA59FD5A09E(0x00000007);
						}
					}
					func_19(0x00000001);
					if (!unk_0x0F1CCD77290EE12F())
					{
						func_17();
					}
					if (!func_16(0x00000000))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 0x00000002:
								func_11("AM_H_PASS", 0x00000003, 0x000007D0, 0x000009C4, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
								break;
							
							case 0x00000001:
								func_10(0x00000000);
								break;
							}
						}
				}
				bLocal_71 = Global_F042;
				if (Global_F03F)
				{
				}
				else
				{
					unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4());
					if (unk_0x7F6DC62EA9922664(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())) < 0x00000001)
					{
						Global_F04A = 0x00000001;
					}
					if (((((func_102() || func_9()) || Global_F049) || Global_12C5B) || Global_F04A) || !bLocal_73)
					{
						Global_F03E = 0x00000000;
						Global_F042 = 0x00000000;
						iLocal_72 = 0x00000000;
						Global_F045 = 0x00000000;
						Global_F046 = 0x00000000;
						Global_F050 = 0x00000000;
						Global_F053 = 0x00000000;
						func_19(0x00000000);
						func_2();
						Global_F049 = 0x00000000;
						bVar2 = 0x00000001;
					}
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
	func_1(&Local_45);
	Global_792C = 0x00000000;
	Global_F04D = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

void func_1(var uParam0)
{
	if (uParam0->f_1 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0x00000000;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0x00000000)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0x00000000;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(0x00000000);
		uParam0->f_234 = 0x00000000;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_98(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_19(0x00000000);
}

void func_2()
{
	if (Global_F048)
	{
		return;
	}
	Global_F051 = 0x00000000;
	Global_11F87 = 0x00000000;
	Global_F053 = 0x00000000;
	if (Global_F050)
	{
	}
	Global_F050 = 0x00000000;
	func_19(0x00000000);
	func_8();
	Global_1201F = 0x00000000;
	Global_F047 = 0x00000001;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_F03E = 0x00000000;
	Global_F05C = 0x00000000;
	Global_F064 = 0xFFFFFFFF;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_12042[iVar0 /*2*/].f_1 = 0xFFFFFFFF;
		iVar0++;
	}
	Global_1204B = 0x00000000;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		Global_12020[iVar0 /*2*/] = 0x00000000;
		Global_12020[iVar0 /*2*/].f_1 = 0xFFFFFFFF;
		iVar0++;
	}
	Global_12041 = 0x00000000;
}

void func_5()
{
	Global_F0E7 = 0x00000000;
}

void func_6()
{
	Global_F05B = 0x00000000;
	Global_F05F = func_7(joaat("sp0_shots"));
	Global_F05E = func_7(joaat("sp0_hits"));
	Global_F061 = func_7(joaat("sp1_shots"));
	Global_F060 = func_7(joaat("sp1_hits"));
	Global_F063 = func_7(joaat("sp2_shots"));
	Global_F062 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &uVar0, 0xFFFFFFFF);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_F065 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000040)
	{
		Global_F066[iVar0 /*2*/] = 0x00000000;
		iVar0++;
	}
}

var func_9()
{
	return Global_14086D;
}

void func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_4FB5.f_96[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_13();
	}
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_14(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_1AEC9))
	{
		return 0x00000001;
	}
	if (func_15(sParam0))
	{
		return 0x00000000;
	}
	return 0x00000002;
}

int func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5.f_96[iVar1], iVar0);
	}
	return 0x00000000;
}

void func_17()
{
	unk_0xC2127C0F64D6A3B9();
	func_18();
}

void func_18()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_19(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_20()
{
	Global_56C3.f_6 = 0x00000001;
}

int func_21(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xF4CCC8CB6DE7F1AE() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = unk_0xF4CCC8CB6DE7F1AE();
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0x28072FDD60CE3A6E(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000001))
		{
			uParam0->f_23F = 0x00000001;
			return 0x00000001;
		}
		if (unk_0x946BFA82EB988C81(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			uParam0->f_23F = 0x00000001;
			return 0x00000001;
		}
	}
	if (!uParam0->f_234)
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x31A33F7BCB08CB80(0x00000001);
			uParam0->f_234 = 0x00000001;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
	}
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000013);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x00000013, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x000000AB, 0x00000001);
	func_52(0x00000000);
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (unk_0xBB16188FFCC4B1B5() || (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749()))
		{
			unk_0x5D80F91A16C40CDE();
		}
	}
	Global_A3FD = 0x00000001;
	if (!uParam0->f_233)
	{
		switch (func_48(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			case 0x00000001:
				unk_0x82A772610883F395("SuccessFranklin", 0x000003E8, 0x00000000);
				break;
			
			case 0x00000002:
				unk_0x82A772610883F395("SuccessTrevor", 0x000003E8, 0x00000000);
				break;
			
			default:
				unk_0x82A772610883F395("SuccessMichael", 0x000003E8, 0x00000000);
				break;
		}
		uParam0->f_233 = 0x00000001;
	}
	if (uParam0->f_22E == 0x00000000)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 0x000005DC))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_47(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_47(25f)));
		if (uParam0->f_38 > 0x00000000)
		{
			uParam0->f_230 = (uParam0->f_230 + func_47((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_47(30f) - func_47(2f)));
		}
	}
	bVar0 = 0x00000001;
	while (bVar0)
	{
		func_19(0x00000001);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_26(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_25(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 0x0000014D))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0x00000000;
					uParam0->f_236 = 0x00000000;
					uParam0->f_23D = 0.75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_25(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0x00000000)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			unk_0x7E60D21B163E9D56();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 0x00000001;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 0x0000014D))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_25(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0xB8E3620B82AD47D7(0x00000002))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_22(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
					}
				}
			}
		}
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D8) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0x00000000) && unk_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_235 = 0x00000001;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 0x00001388))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_235 = 0x00000000;
					uParam0->f_23D = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0x00000000)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 0x00000001;
					uParam0->f_23D = 0.75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_22F = func_25((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_25((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_25((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_25((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7))
					{
						uParam0->f_231 = 0x00000000;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 0x000003E8 && uParam0->f_221)
			{
				bVar0 = 0x00000000;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0x00000000);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0x00000000);
			}
			return !bVar0;
		}
	}
	func_19(0x00000000);
	return 0x00000001;
}

void func_22(var uParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_24(unk_0xF59058FCB716F903(0x00000002, 0x000000D7, 0x00000001));
	func_23("ES_HELP");
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x3CAEA85DA607305E(0x000000D7);
	}
	unk_0x7E60D21B163E9D56();
	if (bParam1)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000001);
		func_24(unk_0xF59058FCB716F903(0x00000002, 0x000000D8, 0x00000001));
		func_23("ES_XPAND");
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x3CAEA85DA607305E(0x000000D8);
		}
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_23(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_24(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_26(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_46() * 0.25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_22C == 0x00000004)
				{
					func_45(&(uParam0->f_D));
				}
				else
				{
					func_23(&(uParam0->f_D));
				}
				if (unk_0x8CD06866876216F2())
				{
					unk_0x3CAEA85DA607305E(0x00000096);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000064);
				}
				unk_0x1200CC973A2399C8(0x00000001);
				if (uParam0->f_22C == 0x00000004)
				{
					unk_0x3CAEA85DA607305E((uParam0->f_38 - 0x00000001));
				}
				else
				{
					unk_0x3CAEA85DA607305E(uParam0->f_38);
				}
				unk_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_22C == 0x00000004 || uParam0->f_22C == 0x00000003)
				{
					unk_0x3CAEA85DA607305E(0x00000002);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000045);
				}
				unk_0x7E60D21B163E9D56();
				uParam0->f_2 = 0x00000001;
			}
			if ((uParam0->f_38 > 0x00000000 && !uParam0->f_3) && uParam0->f_23C > 0x00000258)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				unk_0x7C19E5E4784BD7CF(0.15f);
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
				uParam0->f_3 = 0x00000001;
			}
		}
		func_44();
		unk_0x6567AE843FADBA94(uParam0->f_1, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_47((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_46());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 0x00000004)
	{
		fVar7 = func_43(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x33D480CCE15C991A(0x00000000) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_43(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_46()) / 2.5f);
		if ((uParam0->f_22C == 0x00000001 || uParam0->f_22C == 0x00000000) && uParam0->f_22D != 0x00000000)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 0x00000005)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D7);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D8);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C8);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 0x00002710) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0x00000000)
				{
					uParam0->f_23A = (uParam0->f_23A * 0xFFFFFFFF);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0x00000000)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0x00000000)
					{
						func_40((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
					else
					{
						uParam0->f_23A = 0x00000000;
						uParam0->f_239 = 0x00000001;
						uParam0->f_237 = 0x00000000;
						uParam0->f_231 = 0x00000000;
						uParam0->f_232 = 0x00000000;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0x00000000;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (unk_0x757EF87A33649210())
			{
				unk_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0x00000000 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				unk_0x3584F71E5CA29322(0x00000007);
				unk_0x3584F71E5CA29322(0x00000008);
				unk_0x3584F71E5CA29322(0x00000009);
				unk_0x3584F71E5CA29322(0x00000006);
				unk_0x6567AE843FADBA94(uParam0->f_4, 0x000000FF, 0x000000FF, 0x000000FF, iVar0, 0x00000000);
			}
			if (uParam0->f_237)
			{
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000BC, 0x00000001);
				if (unk_0xD245978525608929(0x00000002, 0x000000BC))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_237 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_232 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 0x00000003;
					uParam0->f_23A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000BB, 0x00000001);
				if (unk_0xD245978525608929(0x00000002, 0x000000BB))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_237 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_232 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 0x00000004;
					uParam0->f_23A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000CA, 0x00000001);
				if (unk_0xD245978525608929(0x00000002, 0x000000CA))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_237 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_232 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 0x00000002;
					uParam0->f_23A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
			}
			else if (uParam0->f_232)
			{
				unk_0x3584F71E5CA29322(0x00000007);
				unk_0x3584F71E5CA29322(0x00000008);
				unk_0x3584F71E5CA29322(0x00000009);
				unk_0x3584F71E5CA29322(0x00000006);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7) || unk_0xD245978525608929(0x00000002, 0x000000C8))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_232 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
			}
		}
	}
	unk_0xA402F6C87C08815C(0x00000001, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, iVar0);
	unk_0xF1F881BAAAFB43B1(fVar9, fVar10);
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, 0.4f);
	fVar1 = (fVar1 - func_47(6f));
	fVar1 = (fVar1 + (func_47(30f) - func_47((2f * 2f))));
	fVar11 = (fVar2 - func_47((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
		func_44();
		unk_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_47((2f - 0.5f)) - 0.001388889f)), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_47((2f * 0.3f)));
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
	}
	iVar17 = 0x00000000;
	iVar17 = 0x00000000;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			func_36(uParam0, iVar17, (fVar1 + func_47(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_47(25f));
		if (uParam0->f_22C == 0x00000004)
		{
			if (iVar17 == (uParam0->f_240 - 0x00000001))
			{
				fVar1 = (fVar1 + func_47((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_47(2f));
					fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
					func_44();
					unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
					fVar1 = (fVar1 + func_47((2f * 0.3f)));
					if (uParam0->f_38 > 0x00000000)
					{
						fVar1 = (fVar1 + func_47((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 0x00000004)
	{
		return;
	}
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_47(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
			func_44();
			unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_29(0x00000007, 0x00000000, 0x00000001, &fVar18, &fVar19, 0x00000000);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0x00000000)
			{
				fVar20 = (fVar9 + ((0.119f / func_46()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_46()) / 2.5f));
				if (uParam0->f_22C == 0x00000001)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_46()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_46()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0x00000000)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 0x00000003)
			{
				unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
				unk_0xEEF67251E263A87F(0x00000001);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xEEF67251E263A87F(0x00000000);
			}
			unk_0xD3539A877EC25E86(1f, 0.4f);
			func_28(&(uParam0->f_226), fVar20, (fVar1 + func_47((2f * 2f))), 0x00000000, 0x00000000, 0x00000000);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(0x00000002);
			unk_0xD3539A877EC25E86(1f, 0.4f);
			unk_0xAAE406A7DA443B93(0x00000000);
			func_44();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xF1F881BAAAFB43B1(fVar20, fVar22);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0x00000000:
					unk_0x070005E852D4C0E9("PERCENTAGE");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_47((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0x6D99DF8263D35CE5(uParam0->f_22B);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_47((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_47((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_22A, 0x00000001);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_47((2f * 2f))), 0x00000000);
					break;
			}
			if (uParam0->f_22D != 0x00000000)
			{
				iVar25 = 0x000000FF;
				iVar26 = 0x000000FF;
				iVar27 = 0x000000FF;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 0x00000001:
						unk_0xA402F6C87C08815C(0x0000006B, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 0x00000003:
						unk_0xA402F6C87C08815C(0x0000006D, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 0x00000002:
						unk_0xA402F6C87C08815C(0x0000006C, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_47(10f)) + fVar29);
				if (uParam0->f_22C == 0xFFFFFFFF)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0x00000000);
			}
			fVar1 = (fVar1 + (func_47(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_44();
	if (bParam4)
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(sParam0);
	}
	else
	{
		unk_0x070005E852D4C0E9(sParam0);
	}
	unk_0xE0026608C37C7C41(fParam1, fParam2, 0x00000000);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_35(iParam0), 64);
	StringCopy(&cVar1, func_32(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_31())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_30(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_30(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 0x0000001E)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 0x0000001D && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 0x0000001E)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 0x0000001D)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000004:
		case 0x0000000B:
		case 0x0000001F:
		case 0x00000014:
		case 0x0000000F:
		case 0x0000000A:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000020:
		case 0x00000009:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x0000000E:
		case 0x00000012:
		case 0x00000013:
		case 0x00000011:
		case 0x0000001C:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003E:
			return 0.5f;
			break;
		
		case 0x0000003D:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_31()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_32(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_34(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_33(&uVar1);
			}
		}
		else
		{
			return func_33(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 0x00000003:
			sVar0[0x00000000] = "MP_hostCrown";
			sVar0[0x00000001] = "MP_hostCrown";
			break;
		
		case 0x00000015:
			sVar0[0x00000000] = "MP_SpecItem_Coke";
			sVar0[0x00000001] = "MP_SpecItem_Coke";
			break;
		
		case 0x00000016:
			sVar0[0x00000000] = "MP_SpecItem_Heroin";
			sVar0[0x00000001] = "MP_SpecItem_Heroin";
			break;
		
		case 0x00000017:
			sVar0[0x00000000] = "MP_SpecItem_Weed";
			sVar0[0x00000001] = "MP_SpecItem_Weed";
			break;
		
		case 0x00000018:
			sVar0[0x00000000] = "MP_SpecItem_Meth";
			sVar0[0x00000001] = "MP_SpecItem_Meth";
			break;
		
		case 0x00000019:
			sVar0[0x00000000] = "MP_SpecItem_Cash";
			sVar0[0x00000001] = "MP_SpecItem_Cash";
			break;
		
		case 0x00000001:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000002:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000004:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000006:
			sVar0[0x00000000] = "Shop_Box_CrossB";
			sVar0[0x00000001] = "Shop_Box_Cross";
			break;
		
		case 0x00000007:
			sVar0[0x00000000] = "Shop_Box_BlankB";
			sVar0[0x00000001] = "Shop_Box_Blank";
			break;
		
		case 0x00000005:
			sVar0[0x00000000] = "Shop_Box_TickB";
			sVar0[0x00000001] = "Shop_Box_Tick";
			break;
		
		case 0x00000008:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000009:
			sVar0[0x00000000] = "Shop_Clothing_Icon_B";
			sVar0[0x00000001] = "Shop_Clothing_Icon_A";
			break;
		
		case 0x0000000A:
			sVar0[0x00000000] = "Shop_GunClub_Icon_B";
			sVar0[0x00000001] = "Shop_GunClub_Icon_A";
			break;
		
		case 0x00000011:
			sVar0[0x00000000] = "Shop_Ammo_Icon_B";
			sVar0[0x00000001] = "Shop_Ammo_Icon_A";
			break;
		
		case 0x00000012:
			sVar0[0x00000000] = "Shop_Armour_Icon_B";
			sVar0[0x00000001] = "Shop_Armour_Icon_A";
			break;
		
		case 0x00000013:
			sVar0[0x00000000] = "Shop_Health_Icon_B";
			sVar0[0x00000001] = "Shop_Health_Icon_A";
			break;
		
		case 0x00000014:
			sVar0[0x00000000] = "Shop_MakeUp_Icon_B";
			sVar0[0x00000001] = "Shop_MakeUp_Icon_A";
			break;
		
		case 0x0000000B:
			sVar0[0x00000000] = "Shop_Tattoos_Icon_B";
			sVar0[0x00000001] = "Shop_Tattoos_Icon_A";
			break;
		
		case 0x0000000C:
			sVar0[0x00000000] = "Shop_Garage_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Icon_A";
			break;
		
		case 0x0000000D:
			sVar0[0x00000000] = "Shop_Garage_Bike_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 0x0000000E:
			sVar0[0x00000000] = "Shop_Barber_Icon_B";
			sVar0[0x00000001] = "Shop_Barber_Icon_A";
			break;
		
		case 0x0000000F:
			sVar0[0x00000000] = "shop_Lock";
			sVar0[0x00000001] = "shop_Lock";
			break;
		
		case 0x00000010:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x0000001A:
			sVar0[0x00000000] = "arrowleft";
			sVar0[0x00000001] = "arrowleft";
			break;
		
		case 0x0000001B:
			sVar0[0x00000000] = "arrowright";
			sVar0[0x00000001] = "arrowright";
			break;
		
		case 0x0000001C:
			sVar0[0x00000000] = "MP_AlertTriangle";
			sVar0[0x00000001] = "MP_AlertTriangle";
			break;
		
		case 0x0000001D:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x0000001F:
			sVar0[0x00000000] = "Shop_Michael_Icon_B";
			sVar0[0x00000001] = "Shop_Michael_Icon_A";
			break;
		
		case 0x00000020:
			sVar0[0x00000000] = "Shop_Franklin_Icon_B";
			sVar0[0x00000001] = "Shop_Franklin_Icon_A";
			break;
		
		case 0x00000021:
			sVar0[0x00000000] = "Shop_Trevor_Icon_B";
			sVar0[0x00000001] = "Shop_Trevor_Icon_A";
			break;
		
		case 0x00000033:
			sVar0[0x00000000] = "SaleIcon";
			sVar0[0x00000001] = "SaleIcon";
			break;
		
		case 0x00000034:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000036:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000037:
			sVar0[0x00000000] = "Shop_Lock_Arena";
			sVar0[0x00000001] = "Shop_Lock_Arena";
			break;
		
		case 0x00000038:
			sVar0[0x00000000] = "Card_Suit_Clubs";
			sVar0[0x00000001] = "Card_Suit_Clubs";
			break;
		
		case 0x00000039:
			sVar0[0x00000000] = "Card_Suit_Hearts";
			sVar0[0x00000001] = "Card_Suit_Hearts";
			break;
		
		case 0x0000003A:
			sVar0[0x00000000] = "Card_Suit_Spades";
			sVar0[0x00000001] = "Card_Suit_Spades";
			break;
		
		case 0x0000003B:
			sVar0[0x00000000] = "Card_Suit_Diamonds";
			sVar0[0x00000001] = "Card_Suit_Diamonds";
			break;
		
		case 0x0000003C:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003E:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003D:
			sVar0[0x00000000] = "Shop_Chips_A";
			sVar0[0x00000001] = "Shop_Chips_B";
			break;
		
		case 0x00000000:
			sVar0[0x00000000] = "";
			sVar0[0x00000001] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0x00000000];
	}
	return sVar0[0x00000001];
}

var func_33(var uParam0)
{
	return uParam0;
}

struct<13> func_34(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_35(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_34(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_33(&uVar0);
		}
		else
		{
			return func_33(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_36(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	unk_0xF1F881BAAAFB43B1(fParam3, fParam4);
	unk_0xEEF67251E263A87F(0x00000001);
	unk_0xD3539A877EC25E86(1f, func_38(14f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_44();
	if (uParam0->f_213[iParam1])
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		unk_0x070005E852D4C0E9(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 0x00000010 || uParam0->f_39[iParam1] == 0x00000011)
		{
			unk_0x6D99DF8263D35CE5(uParam0->f_1E9[iParam1]);
		}
	}
	unk_0xE0026608C37C7C41(fParam3, fParam2, 0x00000000);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			func_29(0x00000007, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_32(0x00000007, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000002:
			func_29(0x00000005, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_32(0x00000005, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000003:
			func_29(0x00000006, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_32(0x00000006, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0x00000000)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 0x0000000F)
	{
		unk_0xEEF67251E263A87F(0x00000001);
	}
	else
	{
		unk_0xEEF67251E263A87F(0x00000002);
	}
	unk_0xD3539A877EC25E86(1f, func_38(14f));
	if (uParam0->f_39[iParam1] == 0x00000005 || uParam0->f_39[iParam1] == 0x00000004)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_37(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0x00000001;
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_44();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 0x0000005D;
	iVar5 = 0x000000B6;
	iVar6 = 0x000000E5;
	if (iParam5 == 0x00000004)
	{
		iVar4 = 0x000000C2;
		iVar5 = 0x00000050;
		iVar6 = 0x00000050;
	}
	switch (iParam5)
	{
		case 0x00000004:
		case 0x00000005:
			unk_0xD3539A877EC25E86(1f, func_38(18f));
			unk_0x7BBAC160090910C3(0x00000004);
			if (iParam0 < 0x00000000)
			{
				unk_0xBBA442527B4BB1A6("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((0xFFFFFFFF * iParam0), 0x00000001);
				fVar1 = unk_0x79E367314AFBB5CA(0x00000000);
			}
			else
			{
				unk_0xBBA442527B4BB1A6("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 0x00000001);
				fVar1 = unk_0x79E367314AFBB5CA(0x00000000);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 0x000000FF, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 0x000000FF, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 0x000000FF, 0x00000000);
			unk_0xD3539A877EC25E86(1f, func_38(14f));
			break;
	}
	unk_0x3A820E495A7BA3E5(iVar0);
	switch (iParam5)
	{
		case 0x0000000B:
			unk_0x070005E852D4C0E9("PERCENTAGE");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 0x00000001:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("FO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 0x00000002:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("FO_TWO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x00000004:
		case 0x00000005:
			unk_0xD3539A877EC25E86(1f, func_38(18f));
		
		case 0x00000003:
			if (iParam0 < 0x00000000)
			{
				unk_0x070005E852D4C0E9("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((0xFFFFFFFF * iParam0), 0x00000001);
			}
			else
			{
				unk_0x070005E852D4C0E9("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 0x00000001);
			}
			break;
		
		case 0x00000006:
			unk_0x070005E852D4C0E9(sParam4);
			break;
		
		case 0x00000007:
			unk_0x070005E852D4C0E9("STRING");
			unk_0xD06AC7C87A34A6AD(sParam4);
			break;
		
		case 0x00000008:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x0000000E);
			break;
		
		case 0x00000009:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x00000006);
			break;
		
		case 0x0000000A:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x00000807);
			break;
		
		case 0x00000012:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x00000807);
			break;
		
		case 0x0000000C:
			unk_0x070005E852D4C0E9("AHD_DIST");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 0x0000000D:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x0000000F:
		case 0x0000000E:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x00000010:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x00000014:
			unk_0x070005E852D4C0E9(sParam4);
			break;
	}
	if (iParam5 != 0x00000011)
	{
		if (iParam5 == 0x00000004 || iParam5 == 0x00000005)
		{
			unk_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0x00000000);
			unk_0xD3539A877EC25E86(1f, func_38(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0x00000000);
		}
	}
}

float func_38(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_39(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_42(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_41(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_41(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

float func_43(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(0x00000001) / 2f);
}

void func_44()
{
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(0x00000007);
	}
	unk_0x5DD950F92F816F03(0x00000000);
}

void func_45(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_46()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_47(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_49(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_50(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_51(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_52(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_53(0x00000000))
		{
			func_55(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

int func_53(int iParam0)
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

bool func_54()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_55(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_58())
		{
			func_57(0x00000001, 0x00000001);
		}
		else
		{
			func_57(0x00000000, 0x00000000);
		}
	}
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
	}
	Global_5145 = 0x00000005;
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001E);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001E);
	}
	if (!func_56())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_56()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_53(0x00000000))
		{
			Global_4CD0 = 0x00000001;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 0x00000001)
	{
		Global_4CD0 = 0x00000000;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/] > 0x00000000)
		{
			if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/].f_7 == 0x00000000)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_60(bool bParam0)
{
	char* sVar0;
	
	unk_0x9CBC55A05A07FC47(0x00000000);
	switch (func_61())
	{
		case 0x00000000:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 0x00000001:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 0x00000002:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3D0B5872F36FB05C(sVar0);
}

int func_61()
{
	func_62();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_62()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_49(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_48(unk_0x16F2683693E537C9());
			if (func_51(iVar0) && (!func_63(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_51(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_63(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_64(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_C = iParam2;
	func_67(uParam0);
	func_66(uParam0);
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_226), "SPR_RESULT") || (unk_0x7F8A39872A07D2CE(&(uParam0->f_226), "") && uParam0->f_38 > 0x00000000))
	{
		uParam0->f_236 = 0x00000001;
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x0D3BE1DE0262A012("MPHud", 0x00000000);
	}
	if (uParam0->f_1 == 0x00000000)
	{
		unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
		unk_0x0D3BE1DE0262A012("MPLeaderboard", 0x00000000);
		unk_0x0D3BE1DE0262A012("MPHud", 0x00000000);
		uParam0->f_1 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0x00000000;
		uParam0->f_3 = 0x00000000;
	}
	uParam0->f_4 = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
	}
	else
	{
		if (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			return 0x00000000;
		}
		if (uParam0->f_232)
		{
			if (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				return 0x00000000;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_65(uParam0);
		}
		else if (uParam0->f_38 != 0x00000000)
		{
			func_22(uParam0, 0x00000001);
		}
		else
		{
			func_22(uParam0, 0x00000000);
		}
	}
	Global_12C53 = 0x00000001;
	return 0x00000001;
}

void func_65(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000002);
	func_24(unk_0xF59058FCB716F903(0x00000002, 0x000000BC, 0x00000001));
	func_23("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000001);
	func_24(unk_0xF59058FCB716F903(0x00000002, 0x000000BB, 0x00000001));
	func_23("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_24(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001));
	func_23("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_66(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, func_38(16f));
	if (uParam0->f_1F == 0x00000000)
	{
		if (uParam0->f_1D)
		{
			unk_0xBBA442527B4BB1A6("STRING");
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_D));
			fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
		}
		else
		{
			unk_0xBBA442527B4BB1A6(&(uParam0->f_D));
			fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
		}
	}
	else
	{
		unk_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0x00000000;
		iVar2 = 0x00000000;
		iVar3 = 0x00000000;
		iVar3 = 0x00000000;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0x00000000:
					unk_0x6D99DF8263D35CE5(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 0x00000001:
					unk_0x6B012227B3921E18(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 0x00000002:
					unk_0xD06AC7C87A34A6AD(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_67(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0x00000000;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0x00000000;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0x00000000;
	uParam0->f_233 = 0x00000000;
	uParam0->f_23C = 0x00000000;
	uParam0->f_234 = 0x00000000;
	uParam0->f_235 = 0x00000000;
	uParam0->f_236 = 0x00000000;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_23E = 0x00000000;
	uParam0->f_23F = 0x00000000;
	uParam0->f_23D = 1f;
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (Global_11F87 == 0x00000000)
	{
		return;
	}
	if (Global_1201E == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/].f_3 != 0x00000000)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	iVar2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		iVar3 = Global_11F88[iVar0 /*9*/];
		bVar4 = !Global_F129[iVar3 /*13*/].f_7;
		bVar5 = Global_F129[iVar3 /*13*/].f_8;
		uVar6 = Global_F129[iVar3 /*13*/].f_C;
		fVar7 = Global_F129[iVar3 /*13*/].f_9;
		bVar8 = 0x00000000;
		bVar8 = 0x00000000;
		if (func_73(iVar3, Global_11F88[iVar0 /*9*/].f_1))
		{
			bVar8 = 0x00000001;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 0x05F5E100);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_11F88[iVar0 /*9*/].f_1;
			iVar10 = SYSTEM::FLOOR((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_12019 = iVar1;
	Global_1201A = iVar2;
	if (unk_0x58424C49F8924842())
	{
		if (Global_1201D == 0x00000000)
		{
			iVar11 = Global_1201E;
			if (iVar11 == 0x0000005A)
			{
				if (Global_1B416.f_2378.f_63.f_CD[func_72(0x00000000)] == 0x00000002)
				{
					vVar12.f_2.f_1 = 0x00000004;
					vVar12.x = 0x000002CC;
					unk_0x31FF86F0FD3CE715(&vVar12);
					unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
					unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
					unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
					unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
					unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000032A), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000032B), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000032C), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000032D), 0f);
					unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x0000032E), 0f);
					unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000032F), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000330), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000331), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000332), 0f);
					unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000333), 0f);
					vVar12.x = 0x000002CD;
					unk_0x31FF86F0FD3CE715(&vVar12);
					unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
					unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
					unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
					unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
					unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000032A), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000032B), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000032C), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000032D), 0f);
					unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x0000032E), 0f);
					unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000032F), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000330), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000331), 0f);
					unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000332), 0f);
					unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000333), 0f);
				}
				else
				{
					func_70(iVar11);
				}
			}
			else if (iVar11 == 0x0000002F)
			{
				vVar13.f_2.f_1 = 0x00000004;
				vVar13.x = 0x000002A1;
				unk_0x31FF86F0FD3CE715(&vVar13);
				unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
				unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
				unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
				unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000019D), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000019E), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000019F), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001A0), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001A1), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001A2), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001A3), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001A4), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001A5), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001A6), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001A7), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001A8), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x000001A9), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000001AA), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001AB), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001AC), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008C, 0x00000000, 0f);
				vVar13.x = 0x000002A0;
				unk_0x31FF86F0FD3CE715(&vVar13);
				unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
				unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
				unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
				unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000019D), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000019E), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000019F), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001A0), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001A1), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001A2), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001A3), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001A4), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001A5), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001A6), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001A7), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001A8), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x000001A9), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000001AA), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001AB), 0f);
				unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001AC), 0f);
				unk_0x6106B2DBBCB1AA39(0x0000008C, 0x00000000, 0f);
			}
			else
			{
				func_70(iVar11);
			}
			Global_1B416.f_2378.f_14A[iVar11 /*6*/].f_4 = Global_12019;
		}
		else
		{
			func_69(Global_1201E);
		}
	}
}

void func_69(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_70(int iParam0)
{
	vector3 vVar0;
	struct<13> Var1;
	var uVar2;
	
	vVar0.f_2.f_1 = 0x00000004;
	if (!unk_0x58424C49F8924842())
	{
		return;
	}
	if (unk_0x080E9D045AEE5605())
	{
		Var1 = { func_34(unk_0xD803B885F5E47A62()) };
		if (unk_0xF2EC2A39FF9E838D(&Var1))
		{
			if (unk_0xD9DA83C40D038174(&uVar2, 0x00000023, &Var1))
			{
				vVar0.y = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			vVar0.x = 0x00000241;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000000), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000094, func_71(0x00000001), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000002), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000003), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000004), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000005), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000006), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000007), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000008), 0f);
			vVar0.x = 0x00000391;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000000), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000094, func_71(0x00000001), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000002), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000003), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000004), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000005), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000006), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000007), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000008), 0f);
			return;
		
		case 0x00000001:
			vVar0.x = 0x00000240;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000009), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000000A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000000B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000000C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000000D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000000E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000000F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000010), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000011), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000012), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000013), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000014), 0f);
			vVar0.x = 0x0000023F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000009), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000000A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000000B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000000C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000000D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000000E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000000F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000010), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000011), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000012), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000013), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000014), 0f);
			return;
		
		case 0x00000002:
			vVar0.x = 0x00000243;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000015), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000016), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000017), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000018), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000019), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000001A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000001B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000001C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000001D), 0f);
			vVar0.x = 0x00000242;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000015), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000016), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000017), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000018), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000019), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000001A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000001B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000001C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000001D), 0f);
			return;
		
		case 0x00000003:
			vVar0.x = 0x0000031D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000001E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000001F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000020), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000021), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000022), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000023), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000024), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000025), 0f);
			vVar0.x = 0x0000031C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000001E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000001F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000020), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000021), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000022), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000023), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000024), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000025), 0f);
			return;
		
		case 0x00000004:
			vVar0.x = 0x0000031F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000002B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000002C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000002D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000002E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000002F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000030), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000031), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000032), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000033), 0f);
			vVar0.x = 0x0000031E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000002B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000002C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000002D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000002E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000002F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000030), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000031), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000032), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000033), 0f);
			return;
		
		case 0x00000005:
			vVar0.x = 0x00000321;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000039), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000003A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000003B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000003C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000003D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000003E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000003F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000040), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000041), 0f);
			vVar0.x = 0x00000320;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000039), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000003A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000003B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000003C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000003D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000003E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000003F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000040), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000041), 0f);
			return;
		
		case 0x00000006:
			vVar0.x = 0x00000323;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000047), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000048), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000049), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000004A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000004B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000004C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000004D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000004E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000004F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000050), 0f);
			vVar0.x = 0x00000322;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000047), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000048), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000049), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000004A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000004B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000004C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000004D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000004E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000004F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000050), 0f);
			return;
		
		case 0x00000007:
			vVar0.x = 0x00000325;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000056), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000057), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000058), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000059), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000005A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000005B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000005C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000005D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000005E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000005F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000060), 0f);
			vVar0.x = 0x00000324;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000056), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000057), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000058), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000059), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000005A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000005B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000005C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000005D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000005E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000005F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000060), 0f);
			return;
		
		case 0x00000009:
			vVar0.x = 0x0000027F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000066), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000067), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000068), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000069), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000006A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000006B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000006C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000006D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000006E), 0f);
			vVar0.x = 0x0000027E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000066), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000067), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000068), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000069), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000006A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000006B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000006C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000006D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000006E), 0f);
			return;
		
		case 0x00000008:
			vVar0.x = 0x00000281;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000006F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000070), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000071), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000072), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000073), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000074), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000075), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000076), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000077), 0f);
			vVar0.x = 0x00000280;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000006F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000070), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000071), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000072), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000073), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000074), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000075), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000076), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000077), 0f);
			return;
		
		case 0x0000000A:
			vVar0.x = 0x00000286;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000078), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000079), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000007A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000007B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000007C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000007D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000007E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000007F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000080), 0f);
			vVar0.x = 0x00000285;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000078), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000079), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000007A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000007B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000007C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000007D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000007E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000007F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000080), 0f);
			return;
		
		case 0x0000000B:
			vVar0.x = 0x0000029F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000081), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000082), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000083), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000084), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000085), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000086), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000087), 0f);
			vVar0.x = 0x0000029E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000081), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000082), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000083), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000084), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000085), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000086), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000087), 0f);
			return;
		
		case 0x0000000C:
			vVar0.x = 0x0000025B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000088), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000089), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000008A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000008B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000008C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000008D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000008E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000008F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000090), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000091), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000092), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000093), 0f);
			vVar0.x = 0x0000025A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000088), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000089), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000008A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000008B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000008C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000008D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000008E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000008F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000090), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000091), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000092), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000093), 0f);
			return;
		
		case 0x0000000D:
			vVar0.x = 0x0000025D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000094), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000095), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000096), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000097), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000098), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000099), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000009A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000009B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000009C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000009D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000009E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000009F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000A0), 0f);
			vVar0.x = 0x0000025C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000094), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000095), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000096), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000097), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000098), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000099), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000009A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000009B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000009C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000009D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000009E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000009F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000A0), 0f);
			return;
		
		case 0x0000000E:
			vVar0.x = 0x00000288;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000A1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000A2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000A3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000A4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000A5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000A6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000A7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000A8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000A9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000AA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000AB), 0f);
			vVar0.x = 0x00000287;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000A1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000A2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000A3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000A4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000A5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000A6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000A7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000A8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000A9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000AA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000AB), 0f);
			return;
		
		case 0x0000000F:
			vVar0.x = 0x0000028A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000AC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000AD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000AE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000AF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000B0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000B1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000B2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000B3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000B4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000000B5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000B6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000B7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000B8), 0f);
			vVar0.x = 0x00000289;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000AC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000AD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000AE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000AF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000B0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000B1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000B2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000B3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000B4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000000B5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000B6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000B7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000B8), 0f);
			return;
		
		case 0x00000010:
			vVar0.x = 0x00000290;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000B9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000BA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000BB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000BC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000BD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000BE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000BF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000C0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000000C1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000C2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000C3), 0f);
			vVar0.x = 0x0000028F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000B9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000BA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000BB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000BC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000BD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000BE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000BF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000C0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000000C1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000C2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000C3), 0f);
			return;
		
		case 0x00000011:
			vVar0.x = 0x00000247;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000C4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000C5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000C6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000C7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000C8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000C9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000CA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000CB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000CC), 0f);
			vVar0.x = 0x00000246;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000C4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000C5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000C6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000C7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000C8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000C9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000CA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000CB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000CC), 0f);
			return;
		
		case 0x00000012:
			vVar0.x = 0x00000249;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000CD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000CE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000CF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000D0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000D1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000D2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000D3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000D4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008C, func_71(0x000000D5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000D6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000D7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000D8), 0f);
			vVar0.x = 0x00000248;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000CD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000CE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000CF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000D0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000D1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000D2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000D3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000D4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008C, func_71(0x000000D5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000D6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000D7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000D8), 0f);
			return;
		
		case 0x00000013:
			vVar0.x = 0x0000024B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000D9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000DA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000DB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000DC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000DD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000000DE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000DF), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000E0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000E1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000E2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000E3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000E4), 0f);
			vVar0.x = 0x0000024A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000D9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000DA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000DB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000DC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000DD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000000DE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000000DF), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000000E0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000000E1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000000E2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000E3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000E4), 0f);
			return;
		
		case 0x00000014:
			vVar0.x = 0x00000261;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000E5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000E6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000E7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000000E8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000E9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000EA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000EB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000000EC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000ED), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000EE), 0f);
			vVar0.x = 0x00000260;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000E5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000E6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000E7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000000E8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000E9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000EA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000EB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000000EC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000ED), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000EE), 0f);
			return;
		
		case 0x00000015:
			vVar0.x = 0x0000026D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000EF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000F0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000F1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000F2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000F3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000F4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000F5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000F6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000F7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000F8), 0f);
			vVar0.x = 0x0000026C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000EF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000F0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000000F1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000000F2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000F3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000F4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000000F5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000F6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000F7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000000F8), 0f);
			return;
		
		case 0x00000016:
			vVar0.x = 0x000002A3;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000F9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000FA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000FB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000FC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000FD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000FE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000FF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000100), 0f);
			vVar0.x = 0x000002A2;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000000F9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000000FA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000000FB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000000FC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000000FD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000000FE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000000FF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000100), 0f);
			return;
		
		case 0x0000001A:
			vVar0.x = 0x000002C8;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000101), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000102), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000103), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000104), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000105), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000106), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000107), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000108), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000109), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000010A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000010B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000010C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000010D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000010E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000010F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000067, func_71(0x00000110), 0f);
			vVar0.x = 0x000002C7;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000101), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000102), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000103), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000104), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000105), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000106), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000107), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000108), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000109), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000010A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000010B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000010C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000010D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000010E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000010F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000067, func_71(0x00000110), 0f);
			return;
		
		case 0x0000001D:
			vVar0.x = 0x00000263;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000111), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000112), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000113), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000114), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000115), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000116), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000117), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000118), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000119), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000011A), 0f);
			vVar0.x = 0x00000262;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000111), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000112), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000113), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000114), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000115), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000116), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000117), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000118), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000119), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000011A), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000001E:
			vVar0.x = 0x00000267;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000011B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000011C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000011D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000011E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000011F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000120), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000121), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000122), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000123), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000124), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000125), 0f);
			vVar0.x = 0x00000266;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000011B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000011C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000011D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000011E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000011F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000120), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000121), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000122), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000123), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000124), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000125), 0f);
			return;
		
		case 0x0000001F:
			vVar0.x = 0x0000026F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000126), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000127), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000128), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000129), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000012A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000012B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000012C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000012D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000012E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000012F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000130), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000131), 0f);
			vVar0.x = 0x0000026E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000126), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000127), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000128), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000129), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000012A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000012B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000012C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000012D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000012E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000012F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000130), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000131), 0f);
			return;
		
		case 0x00000026:
			vVar0.x = 0x00000273;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000132), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000133), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000134), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000135), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000136), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000137), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000138), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000139), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000013A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000013B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000013C), 0f);
			vVar0.x = 0x00000272;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000132), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000133), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000134), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000135), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000136), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000137), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000138), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000139), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000013A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000013B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000013C), 0f);
			return;
		
		case 0x00000021:
			vVar0.x = 0x000002E5;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000013D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000013E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000013F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000140), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000141), 0f);
			vVar0.x = 0x000002E4;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000013D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000013E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000013F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000140), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000141), 0f);
			return;
		
		case 0x00000022:
			vVar0.x = 0x000002E9;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000142), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000143), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000144), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000145), 0f);
			vVar0.x = 0x000002E6;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000142), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000143), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000144), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000145), 0f);
			return;
		
		case 0x00000027:
			vVar0.x = 0x00000292;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000146), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000147), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000148), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000149), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000014A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000014B), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000014C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000014D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000014E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000014F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000150), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000151), 0f);
			vVar0.x = 0x00000291;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000146), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000147), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000148), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000149), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000014A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000014B), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000014C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000014D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000014E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000014F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000150), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000151), 0f);
			return;
		
		case 0x00000028:
			vVar0.x = 0x00000245;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000152), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000153), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000154), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000155), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008C, func_71(0x00000156), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000157), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000158), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000159), 0f);
			vVar0.x = 0x00000244;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000152), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000153), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000154), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000155), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008C, func_71(0x00000156), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000157), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000158), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000159), 0f);
			return;
		
		case 0x00000029:
			vVar0.x = 0x0000026B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000015A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000015B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000015C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000015D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000015E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000015F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000160), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000161), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000162), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000163), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000164), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000165), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000166), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000167), 0f);
			vVar0.x = 0x0000026A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000015A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000015B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000015C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000015D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000015E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000015F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000160), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000161), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000162), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000163), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000164), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000165), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000166), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000167), 0f);
			return;
		
		case 0x0000002A:
			vVar0.x = 0x000002C0;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000168), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000169), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000016A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000016B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000016C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000016D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000016E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000016F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000170), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000171), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000172), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000173), 0f);
			vVar0.x = 0x000002BF;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000168), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000169), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000016A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000016B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000016C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000016D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000016E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000016F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000170), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000171), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000172), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000173), 0f);
			return;
		
		case 0x0000002B:
			vVar0.x = 0x00000251;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000174), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000175), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000176), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000177), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000178), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000179), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000017A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000017B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000017C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000017D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000017E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000017F), 0f);
			vVar0.x = 0x00000250;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000174), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000175), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000176), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000177), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000178), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000179), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000017A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000017B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000017C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000017D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000017E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000017F), 0f);
			return;
		
		case 0x0000002C:
			vVar0.x = 0x0000024D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000180), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000181), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000182), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000183), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000184), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000185), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000186), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000187), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000188), 0f);
			vVar0.x = 0x0000024C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000180), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000181), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000182), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000183), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000184), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000185), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000186), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000187), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000188), 0f);
			return;
		
		case 0x0000002D:
			vVar0.x = 0x0000027B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000189), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000018A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000018B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000018C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000018D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000018E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000018F), 0f);
			vVar0.x = 0x0000027A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000189), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000018A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000018B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000018C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000018D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000018E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000018F), 0f);
			return;
		
		case 0x0000002E:
			vVar0.x = 0x0000029D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000190), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000191), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000192), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000193), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000194), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000195), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000196), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000197), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000198), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000199), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000019A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000019B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000019C), 0f);
			vVar0.x = 0x0000029C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000190), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000191), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000192), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000193), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000194), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000195), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000196), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000197), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000198), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000199), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000019A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000019B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000019C), 0f);
			return;
		
		case 0x0000002F:
			vVar0.x = 0x000002A1;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000019D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000019E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000019F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001A0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001A1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001A2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001A3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001A4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001A5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001A6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001A7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001A8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x000001A9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000001AA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001AB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001AC), 0f);
			vVar0.x = 0x000002A0;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000019D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000019E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000019F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001A0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001A1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001A2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001A3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001A4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001A5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001A6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001A7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001A8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x000001A9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000001AA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001AB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001AC), 0f);
			return;
		
		case 0x00000030:
			vVar0.x = 0x000002B6;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001AD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001AE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001AF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001B0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001B1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001B2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001B3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001B4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000001B5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001B6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001B7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001B8), 0f);
			vVar0.x = 0x000002B5;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001AD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001AE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001AF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001B0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001B1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001B2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001B3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001B4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000001B5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001B6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001B7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001B8), 0f);
			return;
		
		case 0x00000031:
			vVar0.x = 0x000002BE;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001B9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001BA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001BB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001BC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001BD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001BE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001BF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001C0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001C1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001C2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001C3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001C4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001C5), 0f);
			vVar0.x = 0x000002BD;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001B9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001BA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001BB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001BC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001BD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001BE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001BF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001C0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001C1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001C2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001C3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001C4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001C5), 0f);
			return;
		
		case 0x00000035:
			vVar0.x = 0x000002CA;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001C6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001C7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001C8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001C9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001CA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001CB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001CC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001CD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001CE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000001CF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001D0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001D1), 0f);
			vVar0.x = 0x000002C9;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001C6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001C7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001C8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001C9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001CA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001CB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001CC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001CD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001CE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000001CF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001D0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001D1), 0f);
			return;
		
		case 0x0000003C:
			vVar0.x = 0x00000329;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001D2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001D3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001D4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001D5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001D6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001D7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001D8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001D9), 0f);
			vVar0.x = 0x00000328;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001D2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001D3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001D4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001D5), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001D6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001D7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001D8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001D9), 0f);
			return;
		
		case 0x0000003D:
			vVar0.x = 0x0000027D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001DA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001DB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001DC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001DD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001DE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001DF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001E0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001E1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001E2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001E3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001E4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001E5), 0f);
			vVar0.x = 0x0000027C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001DA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001DB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001DC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001DD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001DE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001DF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001E0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001E1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000001E2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001E3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001E4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001E5), 0f);
			return;
		
		case 0x0000003E:
			vVar0.x = 0x00000257;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000001E6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001E7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001E8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001E9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000001EA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001EB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001EC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001ED), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001EE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001EF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001F0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001F1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001F2), 0f);
			vVar0.x = 0x00000256;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000001E6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001E7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001E8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000001E9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000001EA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001EB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001EC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001ED), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001EE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001EF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001F0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001F1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000001F2), 0f);
			return;
		
		case 0x0000003F:
			vVar0.x = 0x00000259;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001F3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001F4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001F5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000001F6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001F7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001F8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001F9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001FA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001FB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001FC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001FD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001FE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000001FF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000200), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000201), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000009, func_71(0x00000202), 0f);
			vVar0.x = 0x00000258;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000001F3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000001F4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000001F5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000001F6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000001F7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000001F8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000001F9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000001FA), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000001FB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000001FC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000001FD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000001FE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x000001FF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000200), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000201), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000009, func_71(0x00000202), 0f);
			return;
		
		case 0x00000040:
			vVar0.x = 0x0000025F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000203), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000204), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000205), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000206), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000207), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000208), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000209), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000020A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000020B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000020C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000020D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000020E), 0f);
			vVar0.x = 0x0000025E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000203), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000204), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000205), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000206), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000207), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000208), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000209), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000020A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000020B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000020C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000020D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000020E), 0f);
			return;
		
		case 0x00000042:
			vVar0.x = 0x000002A8;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000020F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000210), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000211), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000212), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000213), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000214), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000215), 0f);
			vVar0.x = 0x000002A4;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000020F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000210), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000211), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000212), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000213), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000214), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000215), 0f);
			return;
		
		case 0x00000043:
			vVar0.x = 0x000002A7;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000216), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000217), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000218), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000219), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000021A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000021B), 0f);
			vVar0.x = 0x000002A6;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000216), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000217), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000218), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000219), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000021A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000021B), 0f);
			return;
		
		case 0x00000044:
			vVar0.x = 0x000002D5;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000021C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000021D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000021E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000021F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000220), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000221), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000222), 0f);
			vVar0.x = 0x000002D4;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000021C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000021D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000021E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000021F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000220), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000221), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000222), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000045:
			vVar0.x = 0x000002AE;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000223), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000224), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000225), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000226), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000227), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000228), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000229), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000022A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000022B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000022C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000022D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000022E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000022F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000230), 0f);
			vVar0.x = 0x000002A9;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000223), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000224), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000225), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000226), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000227), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000228), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000229), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000022A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000022B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000022C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000022D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000022E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000022F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000230), 0f);
			return;
		
		case 0x00000046:
			vVar0.x = 0x000002D1;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000231), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000232), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000233), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000234), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000235), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000236), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000237), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000238), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000239), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000023A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000023B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000023C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000023D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000023E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000023F), 0f);
			vVar0.x = 0x000002D0;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000231), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000232), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000233), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000234), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000235), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000236), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000237), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000238), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000239), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000023A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000023B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000023C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000023D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000023E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000023F), 0f);
			return;
		
		case 0x00000047:
			vVar0.x = 0x00000269;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000240), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000241), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000242), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000243), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000244), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000245), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000246), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000247), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000248), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000249), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000024A), 0f);
			vVar0.x = 0x00000268;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000240), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000241), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000242), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000243), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000244), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000245), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000246), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000247), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000248), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000249), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000024A), 0f);
			return;
		
		case 0x00000048:
			vVar0.x = 0x000002D7;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000024B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000024C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000024D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000024E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000024F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000250), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000251), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000252), 0f);
			vVar0.x = 0x000002D6;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000024B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000024C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000024D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000024E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000024F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000250), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000251), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000252), 0f);
			return;
		
		case 0x00000049:
			vVar0.x = 0x000002D9;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000253), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000254), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000255), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000256), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000257), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000258), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000259), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000025A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000025B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000025C), 0f);
			vVar0.x = 0x000002D8;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000253), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000254), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x00000255), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000256), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000257), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000258), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000259), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000025A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000025B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000025C), 0f);
			return;
		
		case 0x0000004A:
			vVar0.x = 0x00000271;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000025D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000025E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000025F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000260), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000261), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000262), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000263), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000264), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000265), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000266), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000267), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000268), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000269), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000026A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000026B), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000026C), 0f);
			vVar0.x = 0x00000270;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000025D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x0000025E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000025F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x00000260), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000261), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000262), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000263), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000264), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000265), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000266), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000267), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000268), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000269), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000026A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000026B), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x0000026C), 0f);
			return;
		
		case 0x0000004B:
			vVar0.x = 0x000002CF;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000026D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000026E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000026F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000270), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000271), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000272), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000273), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000274), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000275), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000276), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000277), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000278), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000279), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000027A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000027B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000027C), 0f);
			vVar0.x = 0x000002CE;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000026D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000026E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000026F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000270), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000271), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000272), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000273), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000274), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000275), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000276), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x00000277), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000278), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x00000279), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000027A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000027B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x0000027C), 0f);
			return;
		
		case 0x0000004C:
			vVar0.x = 0x0000029B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000027D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000027E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000027F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000280), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000281), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000282), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000283), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000284), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000285), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000286), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000287), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000288), 0f);
			vVar0.x = 0x0000029A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000027D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000027E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000027F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000280), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000281), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x00000282), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000283), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000284), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000285), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000286), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000287), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000288), 0f);
			return;
		
		case 0x0000004E:
			vVar0.x = 0x000002DF;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000289), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000028A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000028B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000028C), 0f);
			vVar0.x = 0x000002DE;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000289), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000028A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000028B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000028C), 0f);
			return;
		
		case 0x0000004F:
			vVar0.x = 0x000002E1;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000028D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000028E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000028F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000290), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000291), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000292), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000293), 0f);
			vVar0.x = 0x000002E0;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000028D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000028E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000028F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000290), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000291), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000292), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000293), 0f);
			return;
		
		case 0x00000054:
			vVar0.x = 0x000002C2;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000294), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000295), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000296), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000297), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000298), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000299), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000029A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000029B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000029C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000029D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000029E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000029F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002A0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002A1), 0f);
			vVar0.x = 0x000002C1;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000294), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000295), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000296), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000297), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000298), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000299), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x0000029A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x0000029B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x0000029C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000029D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x0000029E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000029F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002A0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002A1), 0f);
			return;
		
		case 0x00000055:
			vVar0.x = 0x000002D3;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002A2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002A3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002A4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000002A5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000002A6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002A7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000002A8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002A9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000002AA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002AB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000002AC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002AD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000002AE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000002AF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002B0), 0f);
			vVar0.x = 0x000002D2;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002A2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002A3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002A4), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000002A5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000002A6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002A7), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000002A8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002A9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000002AA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002AB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000002AC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002AD), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000002AE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000002AF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002B0), 0f);
			return;
		
		case 0x00000056:
			vVar0.x = 0x00000253;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002B1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002B2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002B3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002B4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002B5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002B6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002B7), 0f);
			vVar0.x = 0x00000252;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002B1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002B2), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002B3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002B4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002B5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002B6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002B7), 0f);
			return;
		
		case 0x00000057:
			vVar0.x = 0x000002DB;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002B8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002B9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002BA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002BB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002BC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002BD), 0f);
			vVar0.x = 0x000002DA;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002B8), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002B9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002BA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002BB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002BC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002BD), 0f);
			return;
		
		case 0x00000058:
			vVar0.x = 0x000002DD;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002BE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002BF), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002C0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000002C1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002C2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002C3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002C4), 0f);
			vVar0.x = 0x000002DC;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002BE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002BF), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x000002C0), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008B, func_71(0x000002C1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002C2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002C3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002C4), 0f);
			return;
		
		case 0x0000005B:
			vVar0.x = 0x0000028C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000002C5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002C6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002C7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002C8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000002C9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000002CA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002CB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002CC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002CD), 0f);
			vVar0.x = 0x0000028B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000002C5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002C6), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002C7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002C8), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000002C9), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008E, func_71(0x000002CA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002CB), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002CC), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002CD), 0f);
			return;
		
		case 0x0000005C:
			vVar0.x = 0x000002E3;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002CE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000002CF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002D0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000002D1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000002D2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000002D3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000002D4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002D5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002D6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002D7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002D8), 0f);
			vVar0.x = 0x000002E2;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x000002CE), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000002CF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002D0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000002D1), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000002D2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000002D3), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x000002D4), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002D5), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002D6), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002D7), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002D8), 0f);
			return;
		
		case 0x0000005D:
			vVar0.x = 0x0000028E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002D9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002DA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000002DB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000002DC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000002DD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002DE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000002DF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000002E0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002E1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002E2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000002E3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002E4), 0f);
			vVar0.x = 0x0000028D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x000002D9), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x000002DA), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x000002DB), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x000002DC), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x000002DD), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x000002DE), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x000002DF), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000057, func_71(0x000002E0), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000001, func_71(0x000002E1), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x000002E2), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x000002E3), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x000002E4), 0f);
			return;
		
		case 0x0000005A:
			vVar0.x = 0x00000255;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000032A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000032B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000032C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000032D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x0000032E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000032F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000330), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000331), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000332), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000333), 0f);
			vVar0.x = 0x00000254;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x0000032A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x0000032B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000032C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000032D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008D, func_71(0x0000032E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000032F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000330), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000331), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000332), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000333), 0f);
			return;
		
		case 0x00000024:
			vVar0.x = 0x0000033F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000334), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000335), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000336), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000337), 0f);
			vVar0.x = 0x00000340;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000334), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000335), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000336), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000337), 0f);
			return;
		
		case 0x00000025:
			vVar0.x = 0x00000341;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000338), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000339), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000033A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000033B), 0f);
			vVar0.x = 0x00000342;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000338), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000339), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000033A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000033B), 0f);
			return;
		
		case 0x00000018:
			vVar0.x = 0x00000350;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000034E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000034F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000350), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000351), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000352), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000353), 0f);
			vVar0.x = 0x0000034F;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000034E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000034F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000350), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000351), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000352), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000353), 0f);
			return;
		
		case 0x00000019:
			vVar0.x = 0x0000034E;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000354), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000355), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000356), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000357), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000358), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000359), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000035A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000035B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000035C), 0f);
			vVar0.x = 0x0000034D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000354), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000355), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000356), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000005, func_71(0x00000357), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000358), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000359), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000035A), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000035B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000035C), 0f);
			return;
		
		case 0x0000003B:
			vVar0.x = 0x00000327;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000035D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000035E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000035F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000360), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000361), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000362), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000363), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000364), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000365), 0f);
			vVar0.x = 0x00000326;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000035D), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000035E), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x0000035F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000087, func_71(0x00000360), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000361), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000088, func_71(0x00000362), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000363), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000364), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000089, func_71(0x00000365), 0f);
			return;
		
		case 0x00000041:
			vVar0.x = 0x00000346;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000366), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000367), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000368), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000369), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000036A), 0f);
			vVar0.x = 0x00000345;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000366), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000367), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000368), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000369), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000036A), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000050:
			vVar0.x = 0x00000395;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000036B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000036C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000036D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000036E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000036F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000370), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000371), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000372), 0f);
			vVar0.x = 0x00000394;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000036B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000036C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000036D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000036E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000036F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000370), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000371), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000372), 0f);
			return;
		
		case 0x00000051:
			vVar0.x = 0x00000397;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000373), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000374), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000375), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000376), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000377), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000378), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000379), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000037A), 0f);
			vVar0.x = 0x00000396;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000373), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000374), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000375), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000376), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x00000377), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000378), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000379), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x0000037A), 0f);
			return;
		
		case 0x00000052:
			vVar0.x = 0x00000399;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000037B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000037C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000037D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000037E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000037F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000380), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000381), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000382), 0f);
			vVar0.x = 0x00000398;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x0000037B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000037C), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000037D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000037E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000037F), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x00000380), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000381), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000382), 0f);
			return;
		
		case 0x00000053:
			vVar0.x = 0x0000039B;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000383), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000384), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000385), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000386), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000387), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000388), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000389), 0f);
			vVar0.x = 0x0000039A;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x00000383), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000086, func_71(0x00000384), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005C, func_71(0x00000385), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000085, func_71(0x00000386), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x00000387), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x00000388), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000389), 0f);
			return;
		
		case 0x00000059:
			vVar0.x = 0x0000039D;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000038A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000038B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000038C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000038D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000038E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000038F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000390), 0f);
			vVar0.x = 0x0000039C;
			unk_0x31FF86F0FD3CE715(&vVar0);
			unk_0x6106B2DBBCB1AA39(0x00000083, Global_12019, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A2, Global_1201A, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007E, 0x00000001, 0f);
			unk_0x6106B2DBBCB1AA39(0x000000A1, Global_1201C, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000008A, func_71(0x0000038A), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000002, func_71(0x0000038B), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000007, func_71(0x0000038C), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000007F, func_71(0x0000038D), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005F, func_71(0x0000038E), 0f);
			unk_0x6106B2DBBCB1AA39(0x0000005A, func_71(0x0000038F), 0f);
			unk_0x6106B2DBBCB1AA39(0x00000084, func_71(0x00000390), 0f);
			return;
		
		default:
	}
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000299:
		case 0x000002A4:
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000005)
			{
				if (Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_B[iVar0] == 0x00000001)
				{
					iVar1 = (iVar1 + Global_1B416.f_1.f_7E[Global_F04C /*23*/].f_11[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/] == iParam0)
		{
			return Global_11F88[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000007;
			break;
		
		case 0x00000001:
			return 0x00000008;
			break;
		
		case 0x00000002:
			return 0x00000009;
			break;
		
		case 0x00000003:
			return 0x0000000A;
			break;
		
		case 0x00000004:
			return 0x0000000B;
			break;
	}
	return 0xFFFFFFFF;
}

int func_73(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		return 0x00000000;
	}
	switch (Global_F129[iParam0 /*13*/])
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000004:
		case 0x00000005:
		case 0x00000011:
			if (iParam1 < 0x00000001)
			{
				return 0x00000000;
			}
			break;
	}
	if (iParam1 == 0x7FFFFFFF)
	{
		return 0x00000000;
	}
	if (((iParam0 == 0x00000371 || iParam0 == 0x00000379) || iParam0 == 0x00000381) && Global_1B416.f_6143[0x00000004 /*4*/] == func_61())
	{
		Global_F129[iParam0 /*13*/].f_2 = 0x00000000;
	}
	if (Global_F129[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_F129[iParam0 /*13*/].f_2)
		{
			return 0x00000001;
		}
	}
	else if (iParam1 >= Global_F129[iParam0 /*13*/].f_2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_F03E)
	{
		Global_F04D = 0x00000000;
		return;
	}
	iLocal_61 = 0x00000000;
	iLocal_62 = 0x00000000;
	iVar0 = 0x00000000;
	if (func_98(0x00000000))
	{
		unk_0xB59067589E9A55F9();
		Global_F040 = 0x00000001;
		unk_0xEEBB42B52826AD64(0x00000021, 0x00000021);
	}
	iVar1 = 0xFFFFFFFF;
	iLocal_66 = 0x00000000;
	bVar2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		switch (Global_11F88[iVar0 /*9*/])
		{
			case 0x00000354:
			case 0x0000034E:
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000001;
				break;
		}
		if (func_85(uParam0, iVar0))
		{
		}
		if (Global_11F88[iVar0 /*9*/] >= 0x00000000)
		{
			if (!Global_F129[Global_11F88[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_62++;
				if (Global_11F88[iVar0 /*9*/].f_3 == 0x00000002)
				{
					bVar2 = 0x00000001;
				}
			}
		}
		switch (Global_11F88[iVar0 /*9*/])
		{
			case 0x00000054:
			case 0x00000064:
			case 0x00000045:
			case 0x00000029:
			case 0x00000036:
				iVar1 = Global_11F88[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_1201C = iLocal_61;
	fVar3 = func_80(uParam0, iLocal_61, iLocal_62, bVar2);
	if (func_98(0x00000000))
	{
		unk_0x89D5C1E0530EF293(Global_1201E);
		unk_0x89D5C1E0530EF293(SYSTEM::ROUND(fVar3));
		if (bVar2)
		{
			unk_0x89D5C1E0530EF293(0x00000001);
		}
		else
		{
			unk_0x89D5C1E0530EF293(0x00000000);
		}
		if (Global_1201D)
		{
			unk_0x89D5C1E0530EF293(0x00000001);
		}
		else
		{
			unk_0x89D5C1E0530EF293(0x00000000);
		}
		unk_0x99873DBE0FD8ABA3();
		Global_F040 = 0x00000000;
	}
	Global_F04D = 0x00000000;
	if (iVar1 > 0xFFFFFFFF)
	{
		fVar3 = SYSTEM::TO_FLOAT(iVar1);
	}
	func_75(fVar3, bVar2);
}

void func_75(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1201D)
	{
		iVar1 = Global_1201E;
		fVar0 = func_79(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_1B416.f_271B.f_16++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_78(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_1201E == 0xFFFFFFFF)
	{
	}
	else
	{
		iVar2 = Global_1201E;
		fVar0 = func_77(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_1B416.f_271B.f_16++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_76(iVar2, fParam0, bParam1);
		}
	}
}

void func_76(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1B416.f_2378.f_14A[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_1B416.f_2378.f_14A[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_7839 = 0x00000001;
}

float func_77(int iParam0)
{
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/].f_5;
}

void func_78(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1B416.f_4889[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_1B416.f_4889[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_7839 = 0x00000001;
}

var func_79(int iParam0)
{
	return Global_1B416.f_4889[iParam0 /*6*/].f_5;
}

float func_80(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_84(iParam1, iParam2, 0x00000000);
	iVar1 = func_83(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 0x00000001;
	}
	if (fVar0 == 0f)
	{
		func_82(uParam0, 0x00000001, "MTPHPER", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		return fVar0;
	}
	iVar2 = 0x00000000;
	switch (func_81(iVar1))
	{
		case 0x0000006D:
			iVar2 = 0x00000003;
			break;
		
		case 0x0000006C:
			iVar2 = 0x00000002;
			break;
		
		case 0x0000006B:
			iVar2 = 0x00000001;
			break;
	}
	switch (func_81(iVar1))
	{
		case 0x0000006D:
			func_82(uParam0, 0x00000001, "MTPHPER", SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000, iVar2, 0x00000000);
			break;
		
		case 0x0000006C:
			func_82(uParam0, 0x00000001, "MTPHPER", SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000, iVar2, 0x00000000);
			break;
		
		case 0x0000006B:
			func_82(uParam0, 0x00000001, "MTPHPER", SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000, iVar2, 0x00000000);
			break;
	}
	return fVar0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x0000006B;
	switch (iParam0)
	{
		case 0x00000003:
			iVar0 = 0x0000006D;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000006C;
			break;
		
		case 0x00000001:
			iVar0 = 0x0000006B;
			break;
	}
	return iVar0;
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

int func_83(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0x00000000;
	}
	if (fParam0 == 100f)
	{
		return 0x00000003;
	}
	else if (fParam0 > 50f)
	{
		return 0x00000002;
	}
	return 0x00000001;
}

float func_84(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_85(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_11F88[iParam1 /*9*/] >= 0x00000000)
	{
	}
	else
	{
		return 0x00000000;
	}
	Var2 = { Global_F129[Global_11F88[iParam1 /*9*/] /*13*/] };
	if (Var2 == 0x0000000F)
	{
		Global_11F88[iParam1 /*9*/].f_1 = iLocal_69;
	}
	if (Var2 == 0x00000009)
	{
		Global_11F88[iParam1 /*9*/].f_2 = fLocal_68;
	}
	if (Var2 == 0x0000000E)
	{
		Global_11F88[iParam1 /*9*/].f_1 = SYSTEM::FLOOR(Global_11F88[iParam1 /*9*/].f_2);
	}
	if (func_73(Global_11F88[iParam1 /*9*/], Global_11F88[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_11F88[iParam1 /*9*/].f_3 != 0x00000000)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0x00000000)
	{
		fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_11F88[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar3 = func_88(Var2.f_4);
	iVar4 = 0x00000000;
	switch (Global_11F88[iParam1 /*9*/])
	{
		case 0x0000002A:
		case 0x00000037:
		case 0x00000055:
		case 0x00000046:
		case 0x00000065:
			iVar4 = 0x00000001;
			break;
		
		case 0x00000054:
		case 0x00000064:
		case 0x00000045:
		case 0x00000029:
		case 0x00000036:
			iVar4 = 0x00000001;
			break;
	}
	if (Global_11F88[iParam1 /*9*/].f_3 == 0x00000000 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_11F88[iParam1 /*9*/].f_1 || iVar3 < 0x00000000) || iVar3 == 0xFFFFFFFF)
			{
				func_87(Global_11F88[iParam1 /*9*/].f_1, Global_11F88[iParam1 /*9*/]);
			}
		}
		else if ((Global_11F88[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0x00000000) || iVar3 == 0xFFFFFFFF)
		{
			func_87(Global_11F88[iParam1 /*9*/].f_1, Global_11F88[iParam1 /*9*/]);
		}
	}
	iVar5 = Global_11F88[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 0x00000001;
	}
	iVar6 = 0x00000001;
	if (fVar0 == 1f)
	{
		iLocal_61++;
		iVar6 = 0x00000002;
	}
	sVar7 = func_86(Global_11F88[iParam1 /*9*/]);
	if (Global_11F88[iParam1 /*9*/].f_3 != 0x00000000)
	{
		if (!func_98(0x00000000))
		{
			func_87(0xFFFFFFFF, Global_11F88[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_11F88[iParam1 /*9*/].f_3)
		{
			case 0x00000004:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 0x00000002:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 0x00000003:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 0x00000005:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_11F88[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_11F88[iParam1 /*9*/].f_3;
		func_93(uParam0, 0x00000006, sVar7, sVar8, Global_11F88[iParam1 /*9*/].f_1, 0x00000000, 0x00000003, 0x00000000);
	}
	else
	{
		iLocal_66 = 0x00000000;
		switch (Var2)
		{
			case 0x00000001:
				func_93(uParam0, 0x00000008, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x00000002:
				func_93(uParam0, 0x00000009, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x00000003:
				func_93(uParam0, 0x00000000, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x00000004:
			case 0x00000011:
				func_93(uParam0, 0x00000009, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x00000005:
				func_93(uParam0, 0x0000000B, sVar7, "", SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_11F88[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)), 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x00000006:
				func_93(uParam0, 0x00000000, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x00000007:
				if (iVar5 > Var2.f_2)
				{
					iVar5 = Var2.f_2;
				}
				func_93(uParam0, 0x00000002, sVar7, "", iVar5, Var2.f_2, iVar6, 0x00000000);
				break;
			
			case 0x00000008:
				iVar9 = Global_11F88[iParam1 /*9*/].f_1;
				if (iVar9 > Var2.f_2)
				{
					iVar9 = Var2.f_2;
				}
				func_93(uParam0, 0x00000002, sVar7, "", iVar9, Var2.f_2, iVar6, 0x00000000);
				break;
			
			case 0x00000009:
				func_93(uParam0, 0x0000000B, sVar7, "", SYSTEM::ROUND(Global_11F88[iParam1 /*9*/].f_2), 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x0000000A:
			case 0x0000000F:
			case 0x00000010:
				func_93(uParam0, 0x00000001, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x0000000B:
				func_93(uParam0, 0x0000000B, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x0000000E:
				func_93(uParam0, 0x0000000C, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			case 0x0000000C:
			case 0x0000000D:
				func_93(uParam0, 0x00000003, sVar7, "", Global_11F88[iParam1 /*9*/].f_1, 0x00000000, iVar6, 0x00000000);
				break;
			
			default:
				break;
			}
	}
	return 0x00000000;
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MISHSTA_0";
		
		case 0x00000009:
			return "MISHSTA_1";
		
		case 0x0000000A:
			return "MISHSTA_2";
		
		case 0x00000015:
			return "MISHSTA_1";
		
		case 0x00000016:
			return "MISHSTA_3";
		
		case 0x00000152:
			return "MISHSTA_0";
		
		case 0x00000153:
			return "MISHSTA_4";
		
		case 0x000000C4:
			return "MISHSTA_5";
		
		case 0x000000C5:
			return "MISHSTA_0";
		
		case 0x000000CD:
			return "MISHSTA_6";
		
		case 0x000000CE:
			return "MISHSTA_7";
		
		case 0x000000CF:
			return "MISHSTA_8";
		
		case 0x000000DA:
			return "MISHSTA_1";
		
		case 0x000000D9:
			return "MISHSTA_0";
		
		case 0x00000180:
			return "MISHSTA_1";
		
		case 0x00000181:
			return "MISHSTA_9";
		
		case 0x00000174:
			return "MISHSTA_10";
		
		case 0x00000175:
			return "MISHSTA_11";
		
		case 0x00000177:
			return "MISHSTA_1";
		
		case 0x00000176:
			return "MISHSTA_12";
		
		case 0x000001E6:
			return "MISHSTA_13";
		
		case 0x000001E7:
			return "MISHSTA_11";
		
		case 0x000001E8:
			return "MISHSTA_1";
		
		case 0x000001E9:
			return "MISHSTA_14";
		
		case 0x000001EA:
			return "MISHSTA_15";
		
		case 0x000001F3:
			return "MISHSTA_11";
		
		case 0x000001F4:
			return "MISHSTA_1";
		
		case 0x000001F5:
			return "MISHSTA_16";
		
		case 0x000001F6:
			return "MISHSTA_17";
		
		case 0x00000203:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000204:
			return "MISHSTA_18";
		
		case 0x00000205:
			return "MISHSTA_12";
		
		case 0x00000206:
			return "MISHSTA_19";
		
		case 0x00000089:
			return "MISHSTA_12";
		
		case 0x00000088:
			return "MISHSTA_20";
		
		case 0x00000094:
			return "MISHSTA_11";
		
		case 0x00000095:
			return "MISHSTA_12";
		
		case 0x00000096:
			return "MISHSTA_21";
		
		case 0x000000E5:
			return "MISHSTA_6";
		
		case 0x000000E6:
			return "MISHSTA_22";
		
		case 0x00000111:
			return "MISHSTA_10";
		
		case 0x00000112:
			return "MISHSTA_11";
		
		case 0x00000113:
			return "MISHSTA_1";
		
		case 0x00000114:
			return "MISHSTA_23";
		
		case 0x00000115:
			return "MISHSTA_12";
		
		case 0x0000011B:
			return "MISHSTA_1";
		
		case 0x0000011C:
			return "MISHSTA_10";
		
		case 0x0000011D:
			return "MISHSTA_11";
		
		case 0x0000015A:
			return "MISHSTA_1";
		
		case 0x000000EF:
			return "MISHSTA_1";
		
		case 0x000000F0:
			return "MISHSTA_24";
		
		case 0x000000F1:
			return "MISHSTA_25";
		
		case 0x000000F2:
			return "MISHSTA_26";
		
		case 0x00000126:
			return "MISHSTA_27";
		
		case 0x00000127:
			return "MISHSTA_28";
		
		case 0x00000128:
			return "MISHSTA_29";
		
		case 0x00000129:
			return "MISHSTA_30";
		
		case 0x0000012A:
			return "MISHSTA_31";
		
		case 0x00000134:
			return "MISHSTA_32";
		
		case 0x00000066:
			return "MISHSTA_0";
		
		case 0x00000073:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000072:
			return "MISHSTA_1";
		
		case 0x0000006F:
			return "MISHSTA_34";
		
		case 0x00000070:
			return "MISHSTA_35";
		
		case 0x00000071:
			return "MISHSTA_36";
		
		case 0x0000018C:
			return "MISHSTA_1";
		
		case 0x00000189:
			return "MISHSTA_37";
		
		case 0x0000018A:
			return "MISHSTA_38";
		
		case 0x0000018B:
			return "MISHSTA_39";
		
		case 0x00000078:
			return "MISHSTA_0";
		
		case 0x00000079:
			return "MISHSTA_6";
		
		case 0x0000007A:
			return "MISHSTA_40";
		
		case 0x0000007B:
			return "MISHSTA_41";
		
		case 0x0000007C:
			return "MISHSTA_42";
		
		case 0x000000A1:
			return "MISHSTA_43";
		
		case 0x000000AC:
			return "MISHSTA_43";
		
		case 0x000000AD:
			return "MISHSTA_1";
		
		case 0x000000AE:
			return "MISHSTA_11";
		
		case 0x000000AF:
			return "MISHSTA_44";
		
		case 0x000000B9:
			return "MISHSTA_1";
		
		case 0x000000BA:
			return "MISHSTA_6";
		
		case 0x000000BB:
			return "MISHSTA_45";
		
		case 0x00000146:
			return "MISHSTA_46";
		
		case 0x00000081:
			return "MISHSTA_1";
		
		case 0x00000082:
			return "MISHSTA_0";
		
		case 0x000001D2:
			return "MISHSTA_1";
		
		case 0x00000190:
			return "MISHSTA_1";
		
		case 0x00000191:
			return "MISHSTA_47";
		
		case 0x0000019D:
			return "MISHSTA_48";
		
		case 0x0000019E:
			return "MISHSTA_10";
		
		case 0x0000019F:
			return "MISHSTA_11";
		
		case 0x000001A0:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000001A1:
			return "MISHSTA_50";
		
		case 0x000000F9:
			return "MISHSTA_1";
		
		case 0x000001DA:
			return "MISHSTA_1";
		
		case 0x00000101:
			return "MISHSTA_1";
		
		case 0x0000020F:
			return "MISHSTA_51";
		
		case 0x00000210:
			return "MISHSTA_52";
		
		case 0x00000211:
			return "MISHSTA_53";
		
		case 0x00000216:
			return "MISHSTA_54";
		
		case 0x000002C5:
			return "MISHSTA_55";
		
		case 0x00000240:
			return "MISHSTA_1";
		
		case 0x00000241:
			return "MISHSTA_56";
		
		case 0x00000242:
			return "MISHSTA_57";
		
		case 0x00000243:
			return "MISHSTA_58";
		
		case 0x000002E6:
			return "MISHSTA_59";
		
		case 0x000002E5:
			return "MISHSTA_60";
		
		case 0x000002E7:
			return "MISHSTA_61";
		
		case 0x000002E9:
			return "MISHSTA_62";
		
		case 0x000002EC:
			return "MISHSTA_62";
		
		case 0x000002EB:
			return "MISHSTA_63";
		
		case 0x000002ED:
			return "MISHSTA_64";
		
		case 0x000002EE:
			return "MISHSTA_65";
		
		case 0x000002EF:
			return "MISHSTA_66";
		
		case 0x000002F2:
			return "MISHSTA_67";
		
		case 0x000002F1:
			return "MISHSTA_68";
		
		case 0x000002F5:
			return "MISHSTA_69";
		
		case 0x000002F4:
			return "MISHSTA_70";
		
		case 0x000002F3:
			return "MISHSTA_71";
		
		case 0x000002F7:
			return "MISHSTA_72";
		
		case 0x000002F6:
			return "MISHSTA_73";
		
		case 0x000002F9:
			return "MISHSTA_74";
		
		case 0x000002F8:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000002FA:
			return "MISHSTA_76";
		
		case 0x000002FB:
			return "MISHSTA_77";
		
		case 0x000002FE:
			return "MISHSTA_78";
		
		case 0x00000301:
			return "MISHSTA_79";
		
		case 0x00000300:
			return "MISHSTA_80";
		
		case 0x000002FF:
			return "MISHSTA_81";
		
		case 0x00000303:
			return "MISHSTA_82";
		
		case 0x00000302:
			return "MISHSTA_83";
		
		case 0x00000305:
			return "MISHSTA_84";
		
		case 0x00000304:
			return "MISHSTA_85";
		
		case 0x00000307:
			return "MISHSTA_86";
		
		case 0x00000306:
			return "MISHSTA_87";
		
		case 0x00000309:
			return "MISHSTA_88";
		
		case 0x00000308:
			return "MISHSTA_89";
		
		case 0x0000030B:
			return "MISHSTA_90";
		
		case 0x0000030A:
			return "MISHSTA_91";
		
		case 0x0000030E:
			return "MISHSTA_92";
		
		case 0x0000030C:
			return "MISHSTA_93";
		
		case 0x0000030D:
			return "MISHSTA_94";
		
		case 0x00000310:
			return "MISHSTA_95";
		
		case 0x0000030F:
			return "MISHSTA_96";
		
		case 0x00000312:
			return "MISHSTA_97";
		
		case 0x00000311:
			return "MISHSTA_98";
		
		case 0x00000314:
			return "MISHSTA_99";
		
		case 0x00000313:
			return "MISHSTA_100";
		
		case 0x00000315:
			return "MISHSTA_101";
		
		case 0x00000318:
			return "MISHSTA_102";
		
		case 0x00000317:
			return "MISHSTA_103";
		
		case 0x00000316:
			return "MISHSTA_104";
		
		case 0x00000319:
			return "MISHSTA_105";
		
		case 0x0000031A:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000031B:
			return "MISHSTA_0";
		
		case 0x0000031C:
			return "MISHSTA_107";
		
		case 0x0000031D:
			return "MISHSTA_108";
		
		case 0x0000031E:
			return "MISHSTA_109";
		
		case 0x0000031F:
			return "MISHSTA_110";
		
		case 0x00000320:
			return "MISHSTA_111";
		
		case 0x00000321:
			return "MISHSTA_112";
		
		case 0x00000322:
			return "MISHSTA_113";
		
		case 0x00000323:
			return "MISHSTA_114";
		
		case 0x00000324:
			return "MISHSTA_115";
		
		case 0x00000325:
			return "MISHSTA_116";
		
		case 0x00000326:
			return "MISHSTA_117";
		
		case 0x00000327:
			return "MISHSTA_118";
		
		case 0x00000328:
			return "MISHSTA_119";
		
		case 0x00000329:
			return "MISHSTA_120";
		
		case 0x000001AD:
			return "MISHSTA_1";
		
		case 0x000001B9:
			return "MISHSTA_1";
		
		case 0x00000004:
			return "MISHSTA_121";
		
		case 0x0000000D:
			return "MISHSTA_11";
		
		case 0x00000155:
			return "MISHSTA_122";
		
		case 0x00000005:
			return "MISHSTA_123";
		
		case 0x00000006:
			return "MISHSTA_124";
		
		case 0x00000014:
			return "MISHSTA_10";
		
		case 0x000000A9:
			return "MISHSTA_125";
		
		case 0x000002DB:
			return "MISHSTA_126";
		
		case 0x000002E1:
			return "MISHSTA_10";
		
		case 0x00000091:
			return "MISHSTA_127";
		
		case 0x0000009F:
			return "MISHSTA_10";
		
		case 0x00000161:
			return "MISHSTA_10";
		
		case 0x00000165:
			return "MISHSTA_11";
		
		case 0x0000025D:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000025E:
			return "MISHSTA_10";
		
		case 0x00000265:
			return "MISHSTA_128";
		
		case 0x00000268:
			return "MISHSTA_129";
		
		case 0x00000274:
			return "MISHSTA_130";
		
		case 0x00000135:
			return "MISHSTA_11";
		
		case 0x00000136:
			return "MISHSTA_10";
		
		case 0x00000139:
			return "MISHSTA_131";
		
		case 0x000001DD:
			return "MISHSTA_37";
		
		case 0x000001E2:
			return "MISHSTA_132";
		
		case 0x000001E4:
			return "MISHSTA_133";
		
		case 0x000002CB:
			return "MISHSTA_123";
		
		case 0x0000023A:
			return "MISHSTA_10";
		
		case 0x00000236:
			return "MISHSTA_11";
		
		case 0x00000235:
			return "MISHSTA_134";
		
		case 0x0000023C:
			return "MISHSTA_135";
		
		case 0x0000023E:
			return "MISHSTA_136";
		
		case 0x000001AF:
			return "MISHSTA_11";
		
		case 0x000001BB:
			return "MISHSTA_137";
		
		case 0x000001BE:
			return "MISHSTA_138";
		
		case 0x000001C4:
			return "MISHSTA_139";
		
		case 0x0000016C:
			return "MISHSTA_11";
		
		case 0x0000016D:
			return "MISHSTA_10";
		
		case 0x00000171:
			return "MISHSTA_140";
		
		case 0x0000029C:
			return "MISHSTA_11";
		
		case 0x0000029E:
			return "MISHSTA_141";
		
		case 0x000002A6:
			return "MISHSTA_11";
		
		case 0x00000109:
			return "MISHSTA_11";
		
		case 0x0000010A:
			return "MISHSTA_10";
		
		case 0x0000010E:
			return "MISHSTA_142";
		
		case 0x0000010F:
			return "MISHSTA_143";
		
		case 0x00000110:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000002FD:
			return "MISHSTA_145";
		
		case 0x000002FC:
			return "MISHSTA_146";
		
		case 0x0000014A:
			return "MISHSTA_11";
		
		case 0x0000014B:
			return "MISHSTA_10";
		
		case 0x00000283:
			return "MISHSTA_147";
		
		case 0x00000284:
			return "MISHSTA_148";
		
		case 0x00000285:
			return "MISHSTA_149";
		
		case 0x00000286:
			return "MISHSTA_150";
		
		case 0x00000194:
			return "MISHSTA_10";
		
		case 0x000002D1:
			return "MISHSTA_151";
		
		case 0x000002F0:
			return "MISHSTA_152";
		
		case 0x00000093:
			return "MISHSTA_1";
		
		case 0x00000150:
			return "MISHSTA_1";
		
		case 0x00000173:
			return "MISHSTA_1";
		
		case 0x0000022D:
			return "MISHSTA_1";
		
		case 0x0000023F:
			return "MISHSTA_1";
		
		case 0x00000275:
			return "MISHSTA_1";
		
		case 0x00000287:
			return "MISHSTA_1";
		
		case 0x000002AD:
			return "MISHSTA_1";
		
		case 0x000002B5:
			return "MISHSTA_1";
		
		case 0x000002E2:
			return "MISHSTA_1";
		
		case 0x0000028A:
			return "MISHSTA_0";
		
		case 0x00000289:
			return "MISHSTA_153";
		
		case 0x00000339:
			return "MISHSTA_154";
		
		case 0x00000338:
			return "MISHSTA_155";
		
		case 0x00000335:
			return "MISHSTA_156";
		
		case 0x00000334:
			return "MISHSTA_157";
		
		case 0x0000013F:
			return "MISHSTA_158";
		
		case 0x0000013E:
			return "MISHSTA_159";
		
		case 0x0000013D:
			return "MISHSTA_1";
		
		case 0x00000142:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000143:
			return "MISHSTA_0";
		
		case 0x00000144:
			return "MISHSTA_160";
		
		case 0x00000330:
			return "MISHSTA_161";
		
		case 0x0000032F:
			return "MISHSTA_162";
		
		case 0x0000032E:
			return "MISHSTA_163";
		
		case 0x000002EA:
			return "MISHSTA_164";
		
		case 0x00000202:
			return "MISHSTA_165";
		
		case 0x000002E8:
			return "MISHSTA_166";
		
		case 0x00000349:
			return "MISHSTA_167";
		
		case 0x00000348:
			return "MISHSTA_1";
		
		case 0x00000346:
			return "MISHSTA_167";
		
		case 0x0000033C:
			return "MISHSTA_1";
		
		case 0x0000033D:
			return "MISHSTA_167";
		
		case 0x0000033F:
			return "MISHSTA_1";
		
		case 0x00000340:
			return "MISHSTA_167";
		
		case 0x00000342:
			return "MISHSTA_1";
		
		case 0x00000343:
			return "MISHSTA_167";
		
		case 0x00000345:
			return "MISHSTA_1";
		
		case 0x000002E3:
			return "MISHSTA_168";
		
		case 0x0000026B:
			return "MISHSTA_169";
		
		case 0x00000230:
			return "MISHSTA_170";
		
		case 0x0000022F:
			return "MISHSTA_171";
		
		case 0x0000022E:
			return "MISHSTA_172";
		
		case 0x000002A1:
			return "MISHSTA_10";
		
		case 0x000002B0:
			return "MISHSTA_10";
		
		case 0x000002AF:
			return "MISHSTA_173";
		
		case 0x0000034C:
			return "MISHSTA_174";
		
		case 0x0000034D:
			return "MISHSTA_175";
		
		case 0x0000034B:
			return "MISHSTA_176";
		
		case 0x000000EC:
			return "MISHSTA_177";
		
		case 0x0000001D:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000006D:
			return "MISHSTA_179";
		
		case 0x0000006C:
			return "MISHSTA_180";
		
		case 0x00000087:
			return "MISHSTA_181";
		
		case 0x000000E3:
			return "MISHSTA_182";
		
		case 0x00000354:
			return "MISHSTA_183";
		
		case 0x0000034E:
			return "MISHSTA_184";
		
		case 0x000001B8:
			return "MISHSTA_185";
		
		case 0x00000360:
			return "MISHSTA_186";
		
		case 0x0000035F:
			return "MISHSTA_187";
		
		case 0x0000035D:
			return "MISHSTA_1";
		
		case 0x0000035E:
			return "MISHSTA_188";
		
		case 0x00000366:
			return "MISHSTA_1";
		
		case 0x00000220:
			return "MISHSTA_0";
		
		case 0x0000021F:
			return "MISHSTA_189";
		
		case 0x00000251:
			return "MISHSTA_190";
		
		case 0x00000250:
			return "MISHSTA_1";
		
		case 0x0000025B:
			return "MISHSTA_1";
		
		case 0x00000383:
			return "MISHSTA_1";
		
		case 0x00000384:
			return "MISHSTA_191";
		
		case 0x00000373:
			return "MISHSTA_192";
		
		case 0x0000037B:
			return "MISHSTA_192";
		
		case 0x00000291:
			return "MISHSTA_193";
		
		case 0x0000036B:
			return "MISHSTA_192";
		
		case 0x0000038A:
			return "MISHSTA_194";
		
		case 0x000002C2:
			return "MISHSTA_195";
		
		case 0x000002BB:
			return "MISHSTA_196";
		
		case 0x000002D6:
			return "MISHSTA_197";
		
		case 0x000000ED:
			return "MISHSTA_198";
		
		case 0x00000292:
			return "MISHSTA_1";
		
		case 0x0000036D:
			return "MISHSTA_0";
		
		case 0x00000375:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000037D:
			return "MISHSTA_0";
		
		case 0x000002B6:
			return "MISHSTA_110";
		
		case 0x00000371:
			return "MISHSTA_199";
		
		case 0x00000379:
			return "MISHSTA_199";
		
		case 0x00000381:
			return "MISHSTA_199";
		
		case 0x00000279:
			return "MISHSTA_200";
		
		case 0x00000278:
			return "MISHSTA_201";
		
		case 0x00000026:
			return "MISHSTA_202";
		
		case 0x00000029:
			return "MISHSTA_203";
		
		case 0x00000027:
			return "MISHSTA_204";
		
		case 0x00000028:
			return "MISHSTA_205";
		
		case 0x0000002A:
			return "MISHSTA_206";
		
		case 0x00000038:
			return "MISHSTA_205";
		
		case 0x00000034:
			return "MISHSTA_202";
		
		case 0x00000035:
			return "MISHSTA_207";
		
		case 0x00000036:
			return "MISHSTA_203";
		
		case 0x00000037:
			return "MISHSTA_206";
		
		case 0x00000046:
			return "MISHSTA_206";
		
		case 0x00000045:
			return "MISHSTA_203";
		
		case 0x00000043:
			return "MISHSTA_132";
		
		case 0x00000044:
			return "MISHSTA_205";
		
		case 0x00000042:
			return "MISHSTA_202";
		
		case 0x00000051:
			return "MISHSTA_202";
		
		case 0x00000052:
			return "MISHSTA_208";
		
		case 0x00000054:
			return "MISHSTA_203";
		
		case 0x00000053:
			return "MISHSTA_205";
		
		case 0x00000055:
			return "MISHSTA_206";
		
		case 0x00000061:
			return "MISHSTA_202";
		
		case 0x00000062:
			return "MISHSTA_209";
		
		case 0x00000064:
			return "MISHSTA_203";
		
		case 0x00000063:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000065:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_F129[iParam1 /*13*/].f_4;
	if (iVar0 == 0x00000000)
	{
		return;
	}
	Global_F129[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	unk_0xCDC520E5E48E63D9(iVar0, iVar1, 0x00000001);
	if (func_98(0x00000000) && Global_F040)
	{
		unk_0x89D5C1E0530EF293(iVar0);
		unk_0x89D5C1E0530EF293(iParam0);
		unk_0x89D5C1E0530EF293(iParam1);
	}
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	if (unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF))
	{
		return (iVar0 - 0x00000001);
	}
	return 0xFFFFFFFF;
}

bool func_89(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_76, iParam0);
}

int func_90(int iParam0)
{
	if (iParam0 == 0x0000000D || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_CD[iParam0];
}

int func_91(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000007;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000008;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000009;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000000A;
			break;
		
		case 0x00000004:
			iVar0 = 0x0000000B;
			break;
	}
	return iVar0;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "JCSLMVANR";
		
		case 0x00000002:
			return "JCHMDRAZ";
		
		case 0x00000003:
			return "HSTAGNCUT";
		
		case 0x00000004:
			return "UNSELLWEAP";
		
		case 0x00000000:
			return "HSTECUT";
		
		case 0x00000005:
			return "HSTSLWLD";
		
		case 0x00000006:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_93(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_38 == 0x0000000D)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_94(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0x00000000;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Global_172F4.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000004:
			Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 = 0x0C042C00;
			Global_1B416.f_1.f_7E[iParam0 /*23*/] = 0x0C042C00;
			break;
		
		case 0x00000003:
			Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 = 0x000510D1;
			Global_1B416.f_1.f_7E[iParam0 /*23*/] = 0x000510D1;
			break;
		
		case 0x00000001:
			Global_1B416.f_1.f_7E[iParam0 /*23*/] = 0x01312D00;
			Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 = 0x01312D00;
			break;
	}
	iVar0 = func_90(func_72(iParam0));
	iVar1 = Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0x00000000:
			func_97(iParam0, 0x00000002, 0x002625A0);
			break;
		
		case 0x00000001:
			func_97(iParam0, 0x00000004, 0x01312D00);
			break;
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		Global_1B416.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = 0x00000000;
		iVar2++;
	}
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < Global_172FE[iParam0 /*38*/].f_25)
	{
		if (Global_172FE[iParam0 /*38*/].f_1F[iVar2] > 0x00000000)
		{
			iVar3 = (iVar3 + Global_172FE[iParam0 /*38*/].f_1F[iVar2]);
			Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 = (Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 - Global_172FE[iParam0 /*38*/].f_1F[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 0x00000002)
	{
		iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1) * 0.78f));
		func_97(iParam0, 0x00000003, iVar4);
		Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 = (Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		iVar5 = Global_1B416.f_1.f_C[iVar0 /*6*/][iVar2];
		switch (Global_1B416.f_1.f_7E[iParam0 /*23*/].f_B[iVar2])
		{
			case 0x00000001:
			case 0x00000002:
			case 0x00000000:
				Global_1B416.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_1719B[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
				break;
			
			case 0x00000003:
				Global_1B416.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_1719B[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < Global_17235[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_1B416.f_1.f_7E[iParam0 /*23*/].f_11[iVar2]);
		iVar2++;
	}
	Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_2[0x00000000] = 0x00000000;
	Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_2[0x00000001] = 0x00000000;
	Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_2[0x00000002] = 0x00000000;
	Global_172F4.f_7 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_6[0x00000000] = 0f;
			Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_6[0x00000001] = 0f;
			Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_6[0x00000002] = -1f;
			Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_2[0x00000001] = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_2[0x00000001]);
			Global_172F4.f_7 = SYSTEM::CEIL((0.14f * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_172F4.f_7);
			Global_172F4.f_6 = 14f;
			Global_1B416.f_1.f_7E[0x00000000 /*23*/].f_2[0x00000000] = iVar1;
			break;
		
		case 0x00000001:
			Global_1B416.f_1.f_7E[0x00000001 /*23*/].f_6[0x00000000] = 0f;
			Global_1B416.f_1.f_7E[0x00000001 /*23*/].f_6[0x00000001] = 0f;
			Global_1B416.f_1.f_7E[0x00000001 /*23*/].f_6[0x00000002] = 0f;
			Global_1B416.f_1.f_7E[0x00000001 /*23*/].f_2[0x00000000] = 0x00000000;
			Global_1B416.f_1.f_7E[0x00000001 /*23*/].f_2[0x00000001] = 0x00000000;
			Global_1B416.f_1.f_7E[0x00000001 /*23*/].f_2[0x00000002] = 0x00000000;
			Global_172F4.f_6 = -1f;
			break;
		
		case 0x00000002:
			Global_1B416.f_1.f_7E[0x00000002 /*23*/].f_6[0x00000000] = 0f;
			Global_1B416.f_1.f_7E[0x00000002 /*23*/].f_6[0x00000001] = 0f;
			Global_1B416.f_1.f_7E[0x00000002 /*23*/].f_6[0x00000002] = 0f;
			Global_172F4.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_172F4.f_7);
			Global_172F4.f_6 = 12f;
			Global_1B416.f_1.f_7E[0x00000002 /*23*/].f_2[0x00000000] = (iVar1 / 0x00000003);
			Global_1B416.f_1.f_7E[0x00000002 /*23*/].f_2[0x00000001] = (iVar1 / 0x00000003);
			Global_1B416.f_1.f_7E[0x00000002 /*23*/].f_2[0x00000002] = (iVar1 / 0x00000003);
			Global_172F4.f_6 = 0f;
			break;
		
		case 0x00000003:
			Global_1B416.f_1.f_7E[0x00000003 /*23*/].f_6[0x00000000] = -1f;
			Global_1B416.f_1.f_7E[0x00000003 /*23*/].f_6[0x00000001] = 0f;
			Global_1B416.f_1.f_7E[0x00000003 /*23*/].f_6[0x00000002] = 0f;
			Global_172F4.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_172F4.f_7);
			Global_172F4.f_6 = 12f;
			Global_1B416.f_1.f_7E[0x00000003 /*23*/].f_2[0x00000001] = iVar1;
			break;
		
		case 0x00000004:
			Global_1B416.f_1.f_7E[0x00000004 /*23*/].f_6[0x00000000] = 0f;
			Global_1B416.f_1.f_7E[0x00000004 /*23*/].f_6[0x00000001] = 0f;
			Global_1B416.f_1.f_7E[0x00000004 /*23*/].f_6[0x00000002] = 0f;
			Global_172F4.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_172F4.f_7);
			Global_172F4.f_6 = 12f;
			Global_1B416.f_1.f_7E[0x00000004 /*23*/].f_2[0x00000000] = (iVar1 / 0x00000003);
			Global_1B416.f_1.f_7E[0x00000004 /*23*/].f_2[0x00000001] = (iVar1 / 0x00000003);
			Global_1B416.f_1.f_7E[0x00000004 /*23*/].f_2[0x00000002] = (iVar1 / 0x00000003);
			Global_172F4.f_6 = 0f;
			break;
	}
	iVar6 = Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1;
	if (Global_1B416.f_1.f_7E[iParam0 /*23*/].f_6[0x00000000] != -1f)
	{
		Global_1B416.f_1.f_7E[iParam0 /*23*/].f_6[0x00000000] = ((SYSTEM::TO_FLOAT(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_2[0x00000000]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_1B416.f_1.f_7E[iParam0 /*23*/].f_6[0x00000001] != -1f)
	{
		Global_1B416.f_1.f_7E[iParam0 /*23*/].f_6[0x00000001] = ((SYSTEM::TO_FLOAT(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_2[0x00000001]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_1B416.f_1.f_7E[iParam0 /*23*/].f_6[0x00000002] != -1f)
	{
		Global_1B416.f_1.f_7E[iParam0 /*23*/].f_6[0x00000002] = ((SYSTEM::TO_FLOAT(Global_1B416.f_1.f_7E[iParam0 /*23*/].f_2[0x00000002]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_172F4.f_6 != -1f)
	{
		Global_172F4.f_6 = ((SYSTEM::TO_FLOAT(Global_172F4.f_7) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("jewel_heist_raw_take"), Global_1B416.f_1.f_7E[iParam0 /*23*/], 0x00000001);
			break;
	}
	iVar7 = 0x00000000;
	iVar8 = 0x00000000;
	iVar8 = 0x00000000;
	while (iVar8 < 0x00000003)
	{
		iVar7 = (iVar7 + Global_1B416.f_1.f_7E[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_96(0x0000032A, Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1, 0x00000001);
			func_96(0x0000032B, iVar7, 0x00000001);
			break;
		
		case 0x00000001:
			switch (func_90(0x00000008))
			{
				case 0x00000003:
					func_96(0x00000262, Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1, 0x00000001);
					func_96(0x00000263, iVar7, 0x00000001);
					break;
				
				case 0x00000004:
					func_96(0x0000026E, Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1, 0x00000001);
					func_96(0x0000026F, iVar7, 0x00000001);
					break;
			}
			break;
		
		case 0x00000002:
			func_96(0x000002DE, Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1, 0x00000001);
			func_96(0x000002DF, iVar7, 0x00000001);
			break;
		
		case 0x00000003:
			switch (func_90(0x0000000A))
			{
				case 0x00000006:
					break;
				
				case 0x00000007:
					break;
			}
			break;
		
		case 0x00000004:
			switch (func_90(0x0000000B))
			{
				case 0x00000008:
					func_96(0x00000298, Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1, 0x00000001);
					func_96(0x0000029F, iVar7, 0x00000001);
					break;
				
				case 0x00000009:
					func_96(0x000002A2, Global_1B416.f_1.f_7E[iParam0 /*23*/].f_1, 0x00000001);
					func_96(0x000002AA, iVar7, 0x00000001);
					break;
			}
			break;
	}
	Global_172F4.f_3 = 0x00000001;
	Global_F048 = 0x00000000;
}

void func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_11F88[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_11F88[iVar0 /*9*/].f_1 = (Global_11F88[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_11F88[iVar0 /*9*/] != 0xFFFFFFFF)
	{
		if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000003)
		{
			if (Global_11F88[iVar0 /*9*/].f_1 > 0x00000001)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000001;
			}
			if (Global_11F88[iVar0 /*9*/].f_1 < 0x00000000)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
		}
	}
}

void func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0x00000000)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0x00000000)
	{
		iVar0 = (iVar0 * 0xFFFFFFFF);
	}
	bVar1 = 0x00000000;
	if (Global_172FE[iParam0 /*38*/].f_25 == 0x00000005)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = Global_172FE[iParam0 /*38*/].f_25;
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < iVar2)
	{
		if (Global_172FE[iParam0 /*38*/].f_19[iVar3] == iParam1)
		{
			Global_172FE[iParam0 /*38*/].f_19[iVar3] = iParam1;
			Global_172FE[iParam0 /*38*/].f_1F[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_jewel_drop_money"), iParam2, 0x00000001);
					break;
				
				case 0x00000002:
					unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_paleto_drop_money"), iParam2, 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_bigs_drop_money"), iParam2, 0x00000001);
					break;
			}
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_jewel_drop_money"), iParam2, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_jewel_madr_house"), iParam2, 0x00000001);
			break;
		
		case 0x00000004:
			unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 0x00000001);
			break;
		
		case 0x00000003:
			unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 0x00000001);
			break;
		
		case 0x00000005:
			unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 0x00000001);
			break;
		
		case 0x00000006:
			unk_0xCDC520E5E48E63D9(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 0x00000001);
			break;
	}
	Global_172FE[iParam0 /*38*/].f_19[Global_172FE[iParam0 /*38*/].f_25] = iParam1;
	Global_172FE[iParam0 /*38*/].f_1F[Global_172FE[iParam0 /*38*/].f_25] = iVar0;
	Global_172FE[iParam0 /*38*/].f_25++;
}

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_99()
{
	int iVar0;
	int iVar1;
	
	if (Global_11F87 > 0x00000010)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/].f_1 == 0x00000000)
		{
			if (Global_11F88[iVar0 /*9*/].f_2 != 0f)
			{
				Global_11F88[iVar0 /*9*/].f_1 = SYSTEM::FLOOR(Global_11F88[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_11F88[iVar0 /*9*/];
		if (iVar1 > 0x00000000)
		{
			if (Global_F129[iVar1 /*13*/] == 0x00000009)
			{
				Global_11F88[iVar0 /*9*/].f_1 = SYSTEM::ROUND(fLocal_68);
			}
			if (Global_F129[iVar1 /*13*/] == 0x0000000F)
			{
				Global_11F88[iVar0 /*9*/].f_1 = iLocal_69;
			}
		}
		iVar0++;
	}
}

void func_100()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_F05B)
	{
		return;
	}
	Global_F05B = 0x00000001;
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_F05F);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_F05E);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_F061));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_F060));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_F063));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_F062));
	SYSTEM::WAIT(0x00000000);
	fVar2 = 100f;
	if (!iVar0 == 0x00000000)
	{
		fVar3 = SYSTEM::TO_FLOAT(iVar0);
		fVar4 = SYSTEM::TO_FLOAT(iVar1);
		fVar2 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_68 = fVar2;
	iLocal_69 = iVar0;
}

void func_101(var uParam0)
{
	func_67(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

int func_102()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

void func_103()
{
	int iVar0;
	
	if (Global_7928 == 0x00000000 && !Global_792C)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		Global_11F88[iVar0 /*9*/].f_3 = 0x00000004;
		iVar0++;
	}
}

void func_104()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_105();
	if (((Global_F04E && unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4())) && !unk_0x39B7A3CCD2467CAB()) && !unk_0x798A3F1296751F46())
	{
		Global_F04E = 0x00000000;
	}
	if (Global_F047)
	{
		Global_F047 = 0x00000000;
		iLocal_60 = 0x00000000;
	}
	bVar0 = 0x00000001;
	bVar1 = 0x00000001;
	if (unk_0x798A3F1296751F46())
	{
		bVar0 = 0x00000000;
	}
	if (!unk_0x154B5473FBFD0156())
	{
		bVar0 = 0x00000000;
		bVar1 = 0x00000000;
	}
	if (Global_F04E)
	{
		bVar0 = 0x00000000;
		bVar1 = 0x00000000;
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		bVar0 = 0x00000000;
		bVar1 = 0x00000000;
	}
	if (bVar0)
	{
		iLocal_60 = SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f));
	}
	iVar2 = 0x00000000;
	fVar3 = 0f;
	iVar2 = 0x00000000;
	while (iVar2 < Global_11F87)
	{
		if (Global_11F88[iVar2 /*9*/] >= 0x00000000)
		{
			iVar4 = Global_F129[Global_11F88[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 0x00000006:
					if (Global_11F88[iVar2 /*9*/].f_6 != 0x00000000)
					{
						if (Global_11F88[iVar2 /*9*/].f_7 == 0x00000001)
						{
							Global_11F88[iVar2 /*9*/].f_8 = 0x00000000;
							Global_11F88[iVar2 /*9*/].f_1 = 0x00000000;
							Global_11F88[iVar2 /*9*/].f_7 = 0x00000000;
						}
						else if (unk_0xC844350D5D58C99A(Global_11F88[iVar2 /*9*/].f_6))
						{
							if (!unk_0x437347B10A200C4B(Global_11F88[iVar2 /*9*/].f_6, 0x00000000))
							{
								iLocal_64 = Global_11F88[iVar2 /*9*/].f_8;
								iLocal_63 = unk_0x7F6DC62EA9922664(Global_11F88[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - iLocal_63);
								if (iLocal_65 > 0x00000000)
								{
									Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_11F88[iVar2 /*9*/].f_1 < 0x00000000)
									{
										Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 * 0xFFFFFFFF);
									}
								}
								Global_11F88[iVar2 /*9*/].f_8 = iLocal_63;
							}
						}
						else
						{
							Global_11F88[iVar2 /*9*/].f_6 = 0x00000000;
						}
					}
					break;
				
				case 0x00000001:
					Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 0x00000002:
					if (Global_F04F)
					{
						Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					if (Global_F050)
					{
						if (Global_F052 == 0xFFFFFFFF || Global_11F88[iVar2 /*9*/] == Global_F052)
						{
							if (((Global_11F88[iVar2 /*9*/] == 0x00000153 || Global_11F88[iVar2 /*9*/] == 0x000000B3) || Global_11F88[iVar2 /*9*/] == 0x00000156) || Global_11F88[iVar2 /*9*/] == 0x000000EA)
							{
								Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 + SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
							}
							else
							{
								Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 0x00000005:
					if (bVar1)
					{
						if (Global_F054 == 0xFFFFFFFF || Global_F054 == Global_11F88[iVar2 /*9*/])
						{
							if (!Global_F053 == 0x00000000)
							{
								if (unk_0xC844350D5D58C99A(Global_F053))
								{
									if (!unk_0x437347B10A200C4B(Global_F053, 0x00000000))
									{
										if (unk_0xE2F1E99DD161A861(Global_F053))
										{
											fVar3 = unk_0x9C66D99E63E8E24C(Global_F053);
											if (fVar3 > Global_11F88[iVar2 /*9*/].f_2)
											{
												Global_11F88[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000009:
					break;
				
				case 0x0000000D:
					break;
				
				case 0x0000000C:
					break;
				
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000E:
					break;
				
				case 0x00000010:
					break;
				
				case 0x00000011:
					if (func_51(func_61()))
					{
						if (unk_0x3114787DB5A129EF(unk_0xA30EC016B12C03E4(), 0x00000000) && unk_0x6C5A65751EF69450(unk_0xA30EC016B12C03E4(), 0x00000000))
						{
							Global_11F88[iVar2 /*9*/].f_1 = (Global_11F88[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 0x0000000F:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_1204B == 0x00000000 && Global_12041 == 0x00000000) && Global_F0E7 == 0x00000000) && Global_F065 == 0x00000000) && !Global_1201F)
	{
		return;
	}
	iVar10 = 0x00000000;
	if (Global_F065 > 0x00000000)
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000040)
		{
			if (Global_F066[iVar0 /*2*/] != 0x00000000)
			{
				if (!unk_0xC844350D5D58C99A(Global_F066[iVar0 /*2*/]))
				{
					Global_F066[iVar0 /*2*/] = 0x00000000;
					Global_F065 = (Global_F065 - 0x00000001);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000000))
	{
		iVar3 = unk_0xB98DB26FBF676FA1(0x00000000, iVar0);
		switch (iVar3)
		{
			case 0x0000008E:
				unk_0x218F818E64020C17(0x00000000, iVar0, &iVar4, 0x00000001);
				if (unk_0xC844350D5D58C99A(iVar4))
				{
					unk_0x437347B10A200C4B(iVar4, 0x00000000);
					if (Global_F0E7 > 0x00000000)
					{
						iVar7 = unk_0x134B62B726CEC8E6(iVar4);
						iVar1 = 0x00000000;
						iVar1 = 0x00000000;
						while (iVar1 < Global_F0E7)
						{
							if (Global_F0E8[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_F0E8[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0xEC560E589DF8370E(iVar4) && unk_0x940C1429253D3B1B(iVar4) != unk_0x16F2683693E537C9())
					{
						iVar5 = unk_0xA390E7DD86EDBEA0(unk_0x940C1429253D3B1B(iVar4));
						iVar14 = 0x00000000;
						if (unk_0xC844350D5D58C99A(iVar5))
						{
							if (unk_0xE2F1E99DD161A861(iVar5))
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									iVar15 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
								}
								else
								{
									iVar15 = unk_0x728870EB733D12A1();
								}
								if (unk_0xC844350D5D58C99A(iVar15) && unk_0x96A5FE5834B81CE7(iVar5) == iVar15)
								{
									iVar14 = 0x00000001;
								}
							}
						}
						if ((unk_0xEC560E589DF8370E(iVar5) && unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()) == unk_0x940C1429253D3B1B(iVar5)) || iVar14)
						{
							if (unk_0xEC560E589DF8370E(iVar5))
							{
								iVar6 = unk_0xF71162D1C14C71E7(unk_0x940C1429253D3B1B(iVar4));
								if (Global_F065 > 0x00000000)
								{
									iVar11 = func_109(iVar4);
									if (iVar11 != 0xFFFFFFFF)
									{
										unk_0xBA7C39B3917A9F4D(unk_0x940C1429253D3B1B(Global_F066[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 0x0000796E || iLocal_67 == 0x00009995)
										{
											if (iVar6 != 0x00000000 && iVar6 != joaat("weapon_unarmed"))
											{
												func_108();
												Global_F066[iVar11 /*2*/] = 0x00000000;
												Global_F065 = (Global_F065 - 0x00000001);
											}
										}
									}
								}
								if (Global_1204B > 0x00000000)
								{
									iVar1 = 0x00000000;
									iVar1 = 0x00000000;
									while (iVar1 < Global_1204B)
									{
										if (Global_12042[iVar1 /*2*/] == iVar6)
										{
											func_96(Global_12042[iVar1 /*2*/].f_1, 0x00000001, 0x00000000);
										}
										iVar1++;
									}
								}
							}
							if (Global_1201F)
							{
								iVar12 = unk_0x940C1429253D3B1B(iVar4);
								iVar13 = unk_0x0A5D59F37DC7E974(iVar12);
								if (!unk_0xAF6690C489CC6203(iVar4) && ((((((!iVar13 == 0x00000016 && !iVar13 == 0x00000013) && !iVar13 == 0x00000011) && !iVar13 == 0x00000012) && !iVar13 == 0x0000001B) && !iVar13 == 0x0000001D) && !iVar13 == 0x0000001C))
								{
									iVar9 = unk_0x939EEE1C67526CDB(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), unk_0x940C1429253D3B1B(iVar4));
									switch (iVar9)
									{
										case 0x000000FF:
										case 0x00000000:
										case 0x00000001:
										case 0x00000002:
											if (unk_0x232B70EDA3C8983B(unk_0x940C1429253D3B1B(iVar4)))
											{
												func_107();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_12041 > 0x00000000)
							{
								iVar1 = 0x00000000;
								iVar2 = Global_12041;
								bVar8 = 0x00000000;
								while (!bVar8)
								{
									if (Global_12020[iVar1 /*2*/] != 0x00000000)
									{
										if (unk_0xC844350D5D58C99A(Global_12020[iVar1 /*2*/]))
										{
											if (unk_0x437347B10A200C4B(Global_12020[iVar1 /*2*/], 0x00000000))
											{
												if (Global_12020[iVar1 /*2*/] == iVar4)
												{
													func_96(Global_12020[iVar1 /*2*/].f_1, 0x00000001, 0x00000000);
													Global_12020[iVar1 /*2*/] = 0x00000000;
												}
											}
										}
										else
										{
											Global_12020[iVar1 /*2*/] = 0x00000000;
										}
										iVar2 = (iVar2 - 0x00000001);
									}
									iVar1++;
									if (iVar1 == 0x00000010 || iVar2 == 0x00000000)
									{
										bVar8 = 0x00000001;
									}
								}
								if (Global_12041 > 0x00000000)
								{
									while (Global_12020[(Global_12041 - 0x00000001) /*2*/] == 0x00000000 && Global_12041 > 0x00000001)
									{
										if (Global_12041 > 0x00000001)
										{
											Global_12041 = (Global_12041 - 0x00000001);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0x00000000)
	{
		func_106(iVar10);
	}
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		iVar1 = Global_11F88[iVar0 /*9*/];
		if (Global_F129[iVar1 /*13*/] == 0x0000000D)
		{
			Global_11F88[iVar0 /*9*/].f_1 = (Global_11F88[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		iVar1 = Global_11F88[iVar0 /*9*/];
		if (Global_F129[iVar1 /*13*/] == 0x00000010)
		{
			Global_11F88[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_108()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_F065 == 0x00000000)
	{
		return;
	}
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_11F87)
	{
		iVar2 = Global_11F88[iVar1 /*9*/];
		if (Global_F129[iVar2 /*13*/] == 0x00000007)
		{
			Global_11F88[iVar1 /*9*/].f_1++;
			bVar0 = 0x00000001;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (Global_F065 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000040)
	{
		if (Global_F066[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x70758C023947D588())
	{
		if (unk_0x65FF05B3CED7BD36() == 0x00000021)
		{
			if (unk_0x459E64B654F0E755() == 0x00000021)
			{
				iVar0 = unk_0x74EC3504C872C4B3();
				iVar1 = 0xFFFFFFFF;
				iVar2 = (iVar0 - 0x00000004);
				if (((iVar0 - 0x00000004) % 0x00000003) == 0x00000000)
				{
					iVar0 = ((iVar0 - 0x00000004) / 0x00000003);
					iVar3 = 0x00000000;
					iVar3 = 0x00000000;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0x9BC74E7EC22A2D8C(iVar3 * 3 + 1);
						iVar5 = unk_0x9BC74E7EC22A2D8C(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 0x00000054:
							case 0x00000064:
							case 0x00000045:
							case 0x00000029:
							case 0x00000036:
								iVar1 = iVar4;
								break;
						}
						func_87(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = unk_0x9BC74E7EC22A2D8C(iVar2);
					iVar7 = unk_0x9BC74E7EC22A2D8C(iVar2 + 1);
					bVar8 = 0x00000000;
					if (unk_0x9BC74E7EC22A2D8C(iVar2 + 2) > 0x00000000)
					{
						bVar8 = 0x00000001;
					}
					iVar9 = 0x00000000;
					if (unk_0x9BC74E7EC22A2D8C(iVar2 + 3) > 0x00000000)
					{
						iVar9 = 0x00000001;
					}
					Global_1201D = iVar9;
					Global_1201E = iVar6;
					if (iVar1 == 0xFFFFFFFF)
					{
						func_75(SYSTEM::TO_FLOAT(iVar7), bVar8);
					}
					else
					{
						func_75(SYSTEM::TO_FLOAT(iVar1), bVar8);
					}
				}
				func_111();
			}
		}
		if (unk_0x65FF05B3CED7BD36() == 0x0000000D)
		{
			if (unk_0x459E64B654F0E755() == 0x00000025)
			{
				iVar10 = unk_0x74EC3504C872C4B3();
				if (iVar10 == 0x00000003)
				{
					iVar11 = unk_0x9BC74E7EC22A2D8C(0x00000000);
					iVar12 = unk_0x9BC74E7EC22A2D8C(0x00000001);
					iVar13 = unk_0x9BC74E7EC22A2D8C(0x00000002);
					Global_1B416.f_92B[iVar11 /*2*/] = iVar12;
					Global_1B416.f_92B[iVar11 /*2*/].f_1 = iVar13;
					func_111();
				}
			}
		}
	}
}

int func_111()
{
	if (func_98(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

void func_112()
{
	Global_12C52 = 0x00000000;
	Global_12C53 = 0x00000000;
	Global_F048 = 0x00000000;
	SYSTEM::SETTIMERA(0x00000000);
	SYSTEM::SETTIMERB(0x00000000);
	unk_0x17D339215F817B98();
	iLocal_60 = 0x00000000;
	Global_F044 = 0x00000000;
	Global_F052 = 0xFFFFFFFF;
	iLocal_70 = 0x00000000;
	Global_F042 = 0x00000000;
	Global_F041 = 0x00000000;
	iLocal_72 = 0x00000000;
	Global_F053 = 0x00000000;
	Global_F051 = 0x00000000;
	Global_F03E = 0x00000000;
	Global_1204B = 0x00000000;
	Global_12041 = 0x00000000;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45);
		bLocal_73 = 0x00000000;
	}
	if (Global_3)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	Global_F04D = 0x00000000;
	Global_F049 = 0x00000000;
}

