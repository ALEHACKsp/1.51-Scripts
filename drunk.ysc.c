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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_44 = 0xFFFFFFFF;
	iLocal_45 = 0xFFFFFFFF;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_174();
	}
	Local_43 = { ScriptParam_55 };
	func_173();
	func_172();
	func_167(iLocal_44, 0x00000000, 0x00000000);
	SYSTEM::SETTIMERA(0x00000000);
	func_166();
	func_162();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_161(iLocal_44);
		func_160();
		func_158();
		func_151();
		func_167(iLocal_44, 0x00000000, 0x00000000);
		func_173();
		func_9();
		if ((unk_0x8CD06866876216F2() && !unk_0xA14BB9332558B949()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2567E1)
	{
		Global_440000.f_2F9AE = 0x00000000;
	}
}

bool func_3()
{
	return Global_2564C8.f_24F;
}

bool func_4()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

void func_5()
{
	Global_2564C8.f_290 = 0x00000001;
}

var func_6()
{
	return Global_2564C8.f_27B;
}

bool func_7()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_8()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2567E2.f_1.f_AFA, 0x00000003);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0x437347B10A200C4B(Local_43.f_1, 0x00000000))
	{
		func_174();
	}
	if (bLocal_46)
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			func_174();
		}
	}
	func_150();
	bVar0 = 0x00000001;
	switch (vLocal_52.x)
	{
		case 0x00000004:
			func_149();
			return;
		
		case 0x00000005:
			func_146();
			return;
		
		case 0x00000006:
			func_144();
			return;
		
		case 0x00000007:
			func_143();
			return;
		
		case 0x00000008:
			func_142();
			return;
		
		case 0x00000009:
			func_140();
			return;
		
		case 0x0000000A:
			func_139();
			func_136();
			func_135();
			return;
		
		case 0x0000000B:
			func_134();
			return;
		
		case 0x0000000C:
			break;
		
		default:
			bVar0 = 0x00000000;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_52.x == 0x0000000C)
	{
		return;
	}
	switch (vLocal_52.y)
	{
		case 0x00000001:
			if (!func_133())
			{
				func_121();
				func_136();
			}
			break;
		
		case 0x00000002:
			func_119();
			break;
		
		case 0x0000000C:
			func_106();
			break;
		
		case 0x00000003:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_199459.f_3, 0x0000001B))
	{
		unk_0x64B1AD81046CB800(Local_43.f_1, 0x00000BB8, 0x00000DAC, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
	}
	Global_198014 = 0x00000001;
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0x000009C4);
		while (unk_0xD0BB2359EC70FC37())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		func_105(&uVar0, 0x00000000, 0x00000000);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x4AE2D6991D4E4082(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
		}
		while ((unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x2EAFA036429F20FC(unk_0x16F2683693E537C9()))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x0674E58A79778E99(&(Global_199459.f_3), 0x0000001B);
		func_91(unk_0xD803B885F5E47A62(), 0x00000000, 0x0000E000, 0x00000000);
		Global_24B2D0.f_A70 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(Global_199459, 0x0000000F))
		{
			unk_0x0674E58A79778E99(&Global_199459, 0x0000000F);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_2, 0x00000006))
		{
			unk_0x0674E58A79778E99(&(Global_199459.f_2), 0x00000006);
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			Global_24B2D0.f_A71 = 0x00000001;
		}
		else
		{
			Global_24B2D0.f_A71 = 0x00000000;
		}
		if (unk_0xF45FDB21A0F137CB())
		{
			unk_0xC1B8EFD8630D086B(0x00000000);
		}
		if (func_87(0x00000001))
		{
			func_75(0x00000000);
		}
		func_73(0x00000001);
		func_174();
	}
	sVar1 = "";
	Var2.f_3 = 0x3F733333;
	Var2.f_1E = 0x4479C000;
	Var2.f_1F = 0x4479C000;
	Var2.f_34 = 0x4479C000;
	iVar3 = 0x00000007;
	switch (func_67())
	{
		case 0x00000000:
			if (func_65() != 0x00000002)
			{
				iVar3 = 0x00000000;
			}
			else
			{
				iVar3 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!func_64(0x0000007E))
			{
				iVar3 = 0x00000002;
			}
			else
			{
				iVar3 = 0x00000003;
			}
			break;
		
		case 0x00000002:
			if (!func_63(0x00000004))
			{
				if (func_64(0x0000003A))
				{
					iVar3 = 0x00000004;
				}
				if (func_64(0x0000003B))
				{
					iVar3 = 0x00000005;
				}
				if (iVar3 == 0x00000007)
				{
					if (!func_62())
					{
						iVar3 = 0x00000004;
					}
					else
					{
						iVar3 = 0x00000005;
					}
				}
			}
			else
			{
				iVar3 = 0x00000006;
			}
			break;
	}
	switch (iVar3)
	{
		case 0x00000000:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = 0x9072A713;
			break;
		
		case 0x00000001:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = 0x9072A713;
			break;
		
		case 0x00000002:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = 0x9072A713;
			break;
		
		case 0x00000003:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = 0x9072A713;
			break;
		
		case 0x00000004:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = 0x9072A713;
			break;
		
		case 0x00000005:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = 0x9072A713;
			break;
		
		case 0x00000006:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = 0x9072A713;
			break;
	}
	if (!unk_0x437347B10A200C4B(Local_43.f_1, 0x00000000))
	{
		unk_0xA47B46945FF6DE74(Local_43.f_1, Var2.f_5, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	SYSTEM::WAIT(0x000001F4);
	StringCopy(&(Var2.f_B), "", 16);
	Var2.f_F = -1f;
	func_12(sVar1, &Var2, "");
	func_11(0x0000007E, 0x00000001);
	func_174();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	vector3 vVar31;
	vector3 vVar32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
	}
	unk_0xD7AD2803AD9697F7(uParam1->f_5, 4500f);
	unk_0x58B5D6A0F1D7754D(uParam1->f_5, 4500f);
	unk_0x536F1BE96C726C4B(uParam1->f_5, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), uParam1->f_5, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
	SYSTEM::WAIT(0x00000000);
	unk_0x21387C9EECC2B220(0x00000001);
	unk_0x3F423BF5B8125A50(*uParam1);
	if (unk_0xEA6BC48857E0AC4C(uParam1->f_10))
	{
	}
	else
	{
		unk_0x3F423BF5B8125A50(uParam1->f_10);
	}
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0x00000000);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0x00000000, 0x00000001);
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0x00000000);
	}
	iVar1 = unk_0x1C0640BA9A7327B3() + 20000;
	bVar2 = 0x00000000;
	uParam1->f_21 = 0x00000000;
	while (!bVar2 && iVar1 > unk_0x1C0640BA9A7327B3())
	{
		bVar2 = 0x00000001;
		unk_0x3F423BF5B8125A50(*uParam1);
		if (!unk_0xB4AE0788C1587752(*uParam1))
		{
			bVar2 = 0x00000000;
		}
		if (!unk_0xEA6BC48857E0AC4C(uParam1->f_10))
		{
			unk_0x3F423BF5B8125A50(uParam1->f_10);
			if (!unk_0xB4AE0788C1587752(uParam1->f_10))
			{
				bVar2 = 0x00000000;
			}
		}
		if (!unk_0x757EF87A33649210())
		{
			unk_0x53491B90E4FD0E56(0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
	}
	func_54();
	if (!func_53(uParam1->f_16, 0f, 0f, 0f, 0x00000000))
	{
		unk_0xF858EFDE1871B5F2(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 0x00000000, 0x00000001);
		unk_0x28F5E4DA506AC0CA(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x536F1BE96C726C4B(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
	}
	unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x536F1BE96C726C4B(uParam1->f_5, 15f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x5B12BA0B3AB525F5();
	unk_0x58EA425DFE77472C();
	func_51();
	while (func_50())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
	{
		unk_0x82E51BCA72537B6C(0x000000FA);
	}
	unk_0x67E5ECB8FD7F5018(0x00000001);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar4 = unk_0xE9744DB7B8CA6965(uParam1->f_5, uParam1->f_8, 0x00000002);
		unk_0xC90224D9E95E5E3A(iVar4, 0x00000000);
		unk_0xEFC3DF9D33E248D8(iVar4, 0x00000000);
		iVar5 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000001);
		iVar6 = 0x00000004;
		if (uParam1->f_4 != 0x9072A713)
		{
			iVar6 |= 0x00000002;
		}
		func_48(unk_0x16F2683693E537C9(), uParam1->f_12);
		unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0x00000000, 0x447A0000, 0x00000000);
		unk_0xC46BC31D2529AD8C(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0xE4D02C9C8A550290(unk_0xD803B885F5E47A62(), 0x00000001);
		bVar3 = unk_0x4E3CE49FD6DA2735(unk_0x16F2683693E537C9(), 0x0000004D);
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x0000004D, 0x00000001);
		unk_0x93E9ED66DAB9FBE3(iVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		if (!unk_0xEA6BC48857E0AC4C(uParam1->f_10) && !unk_0xEA6BC48857E0AC4C(uParam1->f_11))
		{
			unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), uParam1->f_10, uParam1->f_11, 1000f, -1.5f, 0x00002710, 0x00000021, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	else
	{
		iVar4 = 0xFFFFFFFF;
	}
	if (!uParam1->f_19)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_47(sParam2, 0xFFFFFFFF);
			uParam1->f_19 = 0x00000001;
		}
	}
	bVar7 = 0x00000000;
	bVar8 = 0x00000000;
	uVar9 = 0x00000010;
	if (!unk_0xEA6BC48857E0AC4C(&(uParam1->f_B)))
	{
		iVar10 = func_67();
		iVar11 = 0xFFFFFFFF;
		sVar12 = "";
		switch (iVar10)
		{
			case 0x00000000:
				iVar11 = 0x00000000;
				sVar12 = "MICHAEL";
				break;
			
			case 0x00000001:
				iVar11 = 0x00000001;
				sVar12 = "FRANKLIN";
				break;
			
			case 0x00000002:
				iVar11 = 0x00000002;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, unk_0x16F2683693E537C9(), sVar12, 0x00000000, 0x00000001);
	}
	if (unk_0x69DF961355195C3C(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0x69DF961355195C3C(iVar4) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!bVar8)
			{
				if (!unk_0x757EF87A33649210())
				{
					if (!unk_0xEA6BC48857E0AC4C(uParam1->f_1A))
					{
						unk_0x82A772610883F395(uParam1->f_1A, 0x00000000, 0x00000000);
						bVar8 = 0x00000001;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam1->f_1B))
					{
						if (!unk_0xEA6BC48857E0AC4C(uParam1->f_1C))
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, uParam1->f_1C, uParam1->f_1B, 0x00000000);
							bVar8 = 0x00000001;
						}
						if (!unk_0xEA6BC48857E0AC4C(uParam1->f_1D))
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, uParam1->f_1D, uParam1->f_1B, 0x00000000);
							bVar8 = 0x00000001;
						}
					}
				}
			}
			unk_0x3FC8DBCC154CA56B();
			unk_0x3584F71E5CA29322(0x00000012);
			unk_0xECEC50E724D52DC1();
			func_40(0x00000000);
			iVar15 = unk_0x1C0640BA9A7327B3();
			if (iVar15 >= (Global_A3FE - 0x000001F4))
			{
				func_39(0x00000FA0);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0xA45992A6CE82FB43(iVar4);
			if (!unk_0xEA6BC48857E0AC4C(&(uParam1->f_B)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_F)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_B), 0x00000003, 0x00000000, 0x00000000, 0x00000000))
						{
							bVar7 = 0x00000001;
						}
					}
				}
			}
			iVar18 = 0x00000000;
			if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), unk_0x12AB0310C2281427(sVar13)))
			{
				iVar19 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C3) - 0x00000080);
				iVar20 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C4) - 0x00000080);
				if (((iVar19 < 0x00000040 && iVar19 > 0xFFFFFFC0) && iVar20 < 0x00000040) && iVar20 > 0xFFFFFFC0)
				{
				}
				else
				{
					iVar18 = 0x00000001;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0x00000000;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0x6C3F127AAF415E69() == 0x00000004 && uParam1->f_34 > 0f)
			{
				if (fVar0 >= uParam1->f_34)
				{
					if (!uParam1->f_20)
					{
						fVar21 = 1.5f;
						vVar22 = { unk_0xF1EE614CA05DDE75() };
						vVar23 = { unk_0x64430C979F516F7A(unk_0x16F2683693E537C9(), 0x0000796E, 0f, 0f, 0f) };
						fVar24 = unk_0x0EB28750412C3A5A(vVar22, vVar23, 0x00000001);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_22), unk_0x16F2683693E537C9(), func_67(), 1E-06f, 0x0000012C, 0x0000012C, 0x00000000, 0x00000000, 0x3E4CCCCD);
						func_19(&(uParam1->f_22), uParam1->f_35);
						if (!uParam1->f_21)
						{
							uParam1->f_22 = 0x00000001;
							uParam1->f_22.f_7 = unk_0x1C0640BA9A7327B3();
							uParam1->f_22.f_8 = 0x00000000;
							uParam1->f_21 = 0x00000001;
						}
						if (uParam1->f_39 == 999f)
						{
							uParam1->f_38 = 0f;
						}
						if (uParam1->f_39 == 999f)
						{
							vVar27 = { unk_0x9382F04ED9CDA21A(0x00000002) };
							fVar28 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
							fVar29 = vVar27.z;
							fVar30 = fVar28;
							uParam1->f_39 = (fVar29 - fVar30);
							if (uParam1->f_39 < 360f)
							{
								uParam1->f_39 = (uParam1->f_39 + 360f);
							}
							if (uParam1->f_39 > 360f)
							{
								uParam1->f_39 = (uParam1->f_39 - 360f);
							}
						}
						fVar25 = uParam1->f_38;
						fVar26 = uParam1->f_39;
						unk_0xEF6276132B396452(fVar25, 0x3F800000);
						unk_0x2FB9A57162E54BAB(fVar26);
						unk_0x474798B2993FFB5A(fVar25);
						unk_0x61752392D0C89CEC(fVar26);
						vVar31 = { unk_0xF1EE614CA05DDE75() };
						vVar32 = { unk_0x07DAF5424BC6779A() };
						fVar33 = unk_0x0EB28750412C3A5A(vVar31, vVar32, 0x00000001);
						iVar34 = SYSTEM::ROUND((fVar33 * 1000f));
						uParam1->f_20 = 0x00000001;
					}
					if (uParam1->f_20)
					{
						unk_0x61A3AC394D8DC0BC();
						if (func_16(&(uParam1->f_22), 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
						{
						}
					}
				}
			}
			if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), unk_0x12AB0310C2281427(sVar14)) || iVar18)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					switch (uParam1->f_4)
					{
						case 0x9072A713:
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0x9072A713, 0x00000001, 0x00000000, 0x00000000);
							unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
							break;
						
						case 0xD827C3DB:
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000001, 0x00000000, 0x00000000);
							unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000001F4, 0x00000000, 0x00000001, 0x00000000);
							if (unk_0x6C3F127AAF415E69() != 0x00000004)
							{
								if (uParam1->f_1F == 999f)
								{
									uParam1->f_1E = 0f;
								}
								if (uParam1->f_1F == 999f)
								{
									vVar37 = { unk_0x9382F04ED9CDA21A(0x00000002) };
									fVar38 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
									fVar39 = vVar37.z;
									fVar40 = fVar38;
									uParam1->f_1F = (fVar39 - fVar40);
									if (uParam1->f_1F < 360f)
									{
										uParam1->f_1F = (uParam1->f_1F + 360f);
									}
									if (uParam1->f_1F > 360f)
									{
										uParam1->f_1F = (uParam1->f_1F - 360f);
									}
								}
								fVar35 = uParam1->f_1E;
								fVar36 = uParam1->f_1F;
								unk_0xEF6276132B396452(fVar35, 0x3F800000);
								unk_0x2FB9A57162E54BAB(fVar36);
								vVar41 = { unk_0xF1EE614CA05DDE75() };
								vVar42 = { unk_0x07DAF5424BC6779A() };
								fVar43 = unk_0x0EB28750412C3A5A(vVar41, vVar42, 0x00000001);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000001, iVar44, 0x00000000, 0x00000000, 0x00000000);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x69DF961355195C3C(iVar4))
					{
						unk_0xB46854F2D1C7DFA9(iVar4);
						iVar4 = 0xFFFFFFFF;
					}
				}
			}
			SYSTEM::WAIT(0x00000000);
		}
	}
	if (!func_53(uParam1->f_16, 0f, 0f, 0f, 0x00000000))
	{
		unk_0xF5894FEB702E7E76(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 0x00000001);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	}
	bVar45 = unk_0x7686B2698B4F28AD();
	bVar46 = 0x00000000;
	if (uParam1->f_20)
	{
		unk_0x61A3AC394D8DC0BC();
		if (!func_16(&(uParam1->f_22), 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000))
		{
			bVar46 = 0x00000001;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0x991B1F0980C62628())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 0x00000002;
			func_15(0x00000001, 0x0000001A, &iVar47);
			func_15(0x00000001, 0x0000004F, &iVar47);
			func_15(0x00000001, 0x00000001, &iVar47);
			func_15(0x00000001, 0x00000002, &iVar47);
			func_15(0x00000000, 0x00000016, &iVar47);
			func_15(0x00000000, 0x00000024, &iVar47);
			func_15(0x00000000, 0x0000008E, &iVar47);
			func_15(0x00000000, 0x0000008D, &iVar47);
			func_15(0x00000000, 0x0000008C, &iVar47);
			func_15(0x00000000, 0x00000107, &iVar47);
			func_15(0x00000000, 0x00000108, &iVar47);
			SYSTEM::WAIT(0x00000000);
			bVar45 = unk_0x7686B2698B4F28AD();
			bVar46 = 0x00000000;
			if (uParam1->f_20)
			{
				unk_0x61A3AC394D8DC0BC();
				if (!func_16(&(uParam1->f_22), 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000))
				{
					bVar46 = 0x00000001;
				}
			}
		}
	}
	if (!unk_0xEA6BC48857E0AC4C(uParam1->f_10))
	{
		unk_0x8D17794CE3273D70(uParam1->f_10);
	}
	unk_0x8D17794CE3273D70(*uParam1);
	unk_0x9A8DDC7C522F5BF5(iVar5, 0x00000000);
	func_13(&(uParam1->f_22));
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x0000004D, bVar3);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0x00000000;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_1))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_2))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_2, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_3))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_3, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000000);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x38C3A68D7861DCFD(iParam0, iParam1, 0x00000001);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0x00000000:
			func_17();
			if (!unk_0x437347B10A200C4B(uParam0->f_5, 0x00000000))
			{
				func_14(uParam0);
				vVar0 = { unk_0xF1EE614CA05DDE75() };
				if (bParam1)
				{
					vVar0 = { vVar0 + unk_0x56E9E0FD5ACCD35D(uParam0->f_5) * FtoV(unk_0x6117725E0134737F()) };
				}
				vVar1 = { unk_0x5293C88BD2F4DE13(uParam0->f_5, vVar0) };
				vVar2 = { unk_0x9382F04ED9CDA21A(0x00000002) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - unk_0x835730A2D89F6093(uParam0->f_5, 0x00000002) };
				vVar5 = { (-SYSTEM::SIN(vVar3.z) * SYSTEM::COS(vVar3.x)), (SYSTEM::COS(vVar3.z) * SYSTEM::COS(vVar3.x)), SYSTEM::SIN(vVar3.x) };
				vVar6 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
				fVar7 = unk_0x1265A70A2DDA35AB();
				if (uParam0->f_11 > 0x00000000 || iParam6 != 0x00000000)
				{
					uParam0->f_3 = unk_0x92B061D59B9B540A(0x69D5F9D0, 0x00000000);
				}
				uParam0->f_1 = unk_0x92B061D59B9B540A(0x019286A9, 0x00000001);
				if (bParam1)
				{
					unk_0xC5940439E4EB9A33(uParam0->f_1, uParam0->f_5, vVar1, 0x00000001);
				}
				else
				{
					unk_0x608A456FDD8A83D8(uParam0->f_1, vVar0);
				}
				unk_0x5F3CBA6EB9341C90(uParam0->f_1, vVar2, 0x00000002);
				unk_0x5818C8D5303DCCF8(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x92B061D59B9B540A(0x019286A9, 0x00000001);
				if (bParam1 && !bParam4)
				{
					unk_0xC5940439E4EB9A33(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C), 0x00000001);
				}
				else
				{
					unk_0x608A456FDD8A83D8(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C));
				}
				unk_0x5F3CBA6EB9341C90(uParam0->f_2, vVar2, 0x00000002);
				unk_0x5818C8D5303DCCF8(uParam0->f_2, fVar7);
				if (uParam0->f_11 > 0x00000000 && iParam6 == 0x00000000)
				{
					uParam0->f_4 = unk_0x92B061D59B9B540A(0x019286A9, 0x00000001);
					if (bParam1 && !bParam4)
					{
						unk_0xC5940439E4EB9A33(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D), 0x00000001);
					}
					else
					{
						unk_0x608A456FDD8A83D8(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D));
					}
					unk_0x5F3CBA6EB9341C90(uParam0->f_4, vVar2, 0x00000002);
					unk_0x5818C8D5303DCCF8(uParam0->f_4, fVar7);
				}
				if (uParam0->f_11 > 0x00000000 || iParam6 != 0x00000000)
				{
					unk_0xF1FB1D7C450AAFA1(uParam0->f_3, uParam0->f_1, 0x00000000, 0x00000002);
					if (iParam6 == 0x00000000)
					{
						unk_0xF1FB1D7C450AAFA1(uParam0->f_3, uParam0->f_4, uParam0->f_11, 0x00000002);
					}
					unk_0xF1FB1D7C450AAFA1(uParam0->f_3, uParam0->f_2, (uParam0->f_E - uParam0->f_11), 0x00000002);
					unk_0x34570E685597AE09(uParam0->f_3, iParam6);
					unk_0xE3BB8E05FCEB3FBE(uParam0->f_3, 0x00000001);
				}
				else
				{
					unk_0xF1E4C781086FABC1(uParam0->f_2, uParam0->f_1, uParam0->f_E, 0x00000002, 0x00000002);
				}
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_7 = unk_0x1C0640BA9A7327B3();
				uParam0->f_8 = 0x00000000;
				*uParam0 = 0x00000001;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_7 + uParam0->f_10))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 0x00000001:
									unk_0x82A772610883F395("CamPushInFranklin", 0x00000000, 0x00000000);
									break;
								
								case 0x00000000:
									unk_0x82A772610883F395("CamPushInMichael", 0x00000000, 0x00000000);
									break;
								
								case 0x00000002:
									unk_0x82A772610883F395("CamPushInTrevor", 0x00000000, 0x00000000);
									break;
							}
						}
						else
						{
							unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
						}
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
						uParam0->f_8 = 0x00000001;
					}
				}
			}
			if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_7 + uParam0->f_F))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
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

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_C = fParam3;
	uParam0->f_E = iParam4;
	uParam0->f_F = iParam5;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = iParam7;
	uParam0->f_D = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_514E = 0x00000000;
	Global_5153 = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	return func_23(sParam2, iParam3, 0x00000000);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
					Global_5150 = 0x00000000;
					Global_514F = 0x00000000;
					Global_4C1D = 0x00000000;
				}
				else
				{
					func_37();
					return 0x00000000;
				}
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0x00000000;
		}
		if (func_36(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_35();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam2)
			{
				func_33();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam1 == 0x0000000D)
					{
					}
					else
					{
						return 0x00000000;
					}
				}
				if (Global_4C1E.f_1 > 0x00000003)
				{
					return 0x00000000;
				}
			}
			if (Global_4BFC == 0x00000001)
			{
				return 0x00000000;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (func_32())
				{
					return 0x00000000;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0x00000000;
				}
				if (!Global_12B4E)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0x00000000;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						return 0x00000000;
					}
				}
			}
			if (func_31())
			{
				return 0x00000000;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 0x00000007:
						return 0x00000000;
						break;
					
					case 0x00000008:
						return 0x00000000;
						break;
					
					case 0x00000009:
						break;
					
					case 0x0000000A:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000009))
				{
					return 0x00000000;
				}
			}
			func_30();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_29();
		func_24();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000002)
	{
	}
	else
	{
		func_37();
	}
	return 0x00000000;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 0x00000004);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

int func_25()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_28())
	{
		return 0x00000000;
	}
	if (func_26(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 0x00000014);
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_28()
{
	return 0xFFFFFFFF;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000045)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0x00000000);
	Global_5145 = 0x00000001;
}

void func_30()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0x00000000;
	Global_5176 = 0x00000000;
	Global_5177 = 0x00000000;
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000010);
}

int func_31()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000000;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 0x00000001;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_33()
{
	if (func_34(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				Global_4C1E = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				Global_4C1E = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				Global_4C1E = 0x00000002;
			}
			else
			{
				Global_4C1E = 0x00000000;
			}
		}
	}
	else
	{
		Global_4C1E = func_67();
		if (Global_4C1E == 0x00000091)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_4C1E > 0x00000003)
		{
			Global_4C1E = 0x00000003;
		}
	}
}

bool func_34(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000F)
	{
		Global_4E7E[iVar0 /*10*/] = 0x00000000;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0x00000000;
		Global_4E7E[iVar0 /*10*/].f_8 = 0x00000000;
		iVar0++;
	}
	Global_4E7E.f_A1 = 0xFFFFFF9D;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
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

void func_37()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 0x00000009) || Global_4C1D == 0x00000001)
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
		Global_4C1E.f_1 = 0x00000003;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
	if (iParam3 == 0x00000000)
	{
		Global_5520 = 0x00000001;
		Global_551E = 0x00000000;
	}
	else
	{
		Global_5520 = 0x00000000;
		Global_551E = 0x00000001;
	}
	if (iParam4 == 0x00000000)
	{
		Global_5521 = 0x00000001;
		Global_551F = 0x00000000;
	}
	else
	{
		Global_5521 = 0x00000000;
		Global_551F = 0x00000001;
	}
}

void func_39(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_44(0x00000000))
		{
			func_41(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_43())
		{
			func_42(0x00000001, 0x00000001);
		}
		else
		{
			func_42(0x00000000, 0x00000000);
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
	if (!func_31())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0x00000000))
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

bool func_43()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 0x00000001;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0x00000000)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000000);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000001);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0x00000000)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000000);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000001);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 0x00000001))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000002))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000004))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000008))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000010))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000020))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000040))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000080))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000100))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000200))
	{
		unk_0xB5F20CC22A70F439(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0x00000000))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_50()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/] && !Global_175BD[iVar0 /*17*/].f_1)
		{
			if (Global_175BD[iVar0 /*17*/].f_3 == 0x00000000)
			{
				if ((Global_175BD[iVar0 /*17*/].f_5 != 0x00000058 && Global_175BD[iVar0 /*17*/].f_5 != 0x00000059) && Global_175BD[iVar0 /*17*/].f_5 != 0x0000005C)
				{
					func_52(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 0x00000058 && iParam0 != 0x00000059) && iParam0 != 0x0000005C)
		{
			Global_16A39[iParam0 /*2*/] = 0x00000001;
		}
	}
	else
	{
		Global_16A39[iParam0 /*2*/] = 0x00000000;
	}
}

bool func_53(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_54()
{
	func_55();
	func_73(0x00000001);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		if (!iVar1 == 0xFFFFFFFF)
		{
			func_167(0x00000001, iVar1, 0x00000001);
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_A575[iVar2 /*5*/] == 0x00000000)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000005)
	{
		return;
	}
	if (!Global_A575[iParam0 /*5*/].f_1 == 0x00000000)
	{
		if (Global_A575[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_A662 = 0x00000000;
		}
	}
	Global_A575[iParam0 /*5*/] = 0x0000000D;
	Global_A575[iParam0 /*5*/].f_1 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_2 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_3 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_4 = 0x00000000;
	Global_A573 = (Global_A573 - 0x00000001);
	if (Global_A573 < 0x00000000)
	{
		Global_A573 = 0x00000000;
	}
}

int func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		func_61(0x00000000);
		unk_0x536F1BE96C726C4B(vParam0, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x2FB9A57162E54BAB(0f);
			}
		}
		unk_0x9E632F16E887F781(vParam0, 4500f, 0x00000000);
		SYSTEM::WAIT(0x00000000);
		unk_0x536F1BE96C726C4B(vParam0, 5000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x75CFD6AD66ADFDD1(vParam0, 5000f, 0x00000000);
		unk_0xD7AD2803AD9697F7(vParam0, 5000f);
		unk_0x58B5D6A0F1D7754D(vParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0x00000000);
		func_61(0x00000001);
		if (!unk_0xEB880D98B5988D0C())
		{
			while (!unk_0x9E632F16E887F781(vParam0, 4500f, 0x00000000))
			{
				SYSTEM::WAIT(0x00000000);
				if (SYSTEM::TIMERA() > 0x000007D0)
				{
					unk_0x21387C9EECC2B220(0x00000000);
					return 0x00000000;
				}
			}
		}
		SYSTEM::SETTIMERA(0x00000000);
		while (!unk_0x68367101660E33F0())
		{
			SYSTEM::WAIT(0x00000000);
			if (SYSTEM::TIMERA() > 0x00004E20)
			{
				unk_0x21387C9EECC2B220(0x00000000);
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				return 0x00000000;
			}
		}
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				unk_0x21387C9EECC2B220(0x00000000);
				SYSTEM::SETTIMERA(0x00000000);
				unk_0x5B12BA0B3AB525F5();
				if (iParam3 == 0x00000001)
				{
					unk_0x58EA425DFE77472C();
				}
				else
				{
					SYSTEM::SETTIMERA(0x00001388);
				}
				unk_0xAC7897419A704C8B();
			}
		}
		while ((!unk_0x0E750251F52DCB41() && !func_58()) && SYSTEM::TIMERA() < 0x000005DC)
		{
			SYSTEM::WAIT(0x00000000);
		}
		if (SYSTEM::TIMERA() > 0x000005DC)
		{
			if (iParam3 == 0x00000001)
			{
			}
		}
		if (iParam2 == 0x00000001)
		{
			unk_0xE82754C349C7B581(vParam0, &(vParam0.f_2), 0x00000000, 0x00000000);
			unk_0x536F1BE96C726C4B(vParam0, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
				}
			}
		}
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0x2FB9A57162E54BAB(0f);
		func_61(0x00000000);
		return 0x00000001;
	}
	func_61(0x00000000);
	return 0x00000000;
}

bool func_58()
{
	return !Global_126B1.f_229;
}

void func_59()
{
	Global_126B1.f_229 = 0x00000001;
	Global_126B1.f_22A = 0x00000000;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		Global_126B1[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iVar0 == 0x00000000)
	{
		if (iParam0 == 0x00000001)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002))
			{
				unk_0x21387C9EECC2B220(0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000002);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002))
		{
			unk_0x21387C9EECC2B220(0x00000000);
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000002);
		}
	}
}

int func_62()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_63(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_64(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_65()
{
	if (Global_978C[0x0000000B] == 0x00000001)
	{
		return 0x00000004;
	}
	if (!func_66(0x00000015))
	{
		return 0x00000000;
	}
	if (!func_64(0x00000082))
	{
		return 0x00000001;
	}
	if (!func_64(0x00000083))
	{
		return 0x00000002;
	}
	if (!func_66(0x00000016))
	{
		return 0x00000001;
	}
	if (!func_66(0x00000031))
	{
		return 0x00000003;
	}
	if (!func_66(0x0000001C))
	{
		return 0x00000001;
	}
	return 0x00000003;
}

int func_66(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_71(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_70(unk_0x16F2683693E537C9());
			if (func_69(iVar0) && (!func_34(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_69(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_69(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_72(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x36629DB72EBCB78C(0f);
	unk_0x58478905E1A5347E(0f);
	unk_0xA480BA3CD1C5E797(0f);
	unk_0x051C254DA616D646(0x00000001);
	unk_0xE788E9364E3EB9B1(0f);
	unk_0x7E7993893F7C203D(0x00000001);
	unk_0x435B8A00821D00E7(0x00000000);
	if (unk_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x8910D3D58E0132B8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xEA6BC48857E0AC4C(&Global_A64E))
	{
		if (unk_0x562F77A7F33D2E46(&Global_A64E))
		{
			unk_0x8910D3D58E0132B8(&Global_A64E);
		}
	}
	if (unk_0x9F4FE516EAACCFC5(Global_A643))
	{
		if (unk_0xB3FFA20AEA3A2D9C(Global_A643))
		{
			unk_0x97271F6489B78F2D(Global_A643, 0f);
			unk_0x10486C0590CF176C(Global_A643, 0x00000001);
		}
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(0x00000000);
	}
	if (bParam0)
	{
		if (unk_0xE0FCC099E413CCBA() != 0xFFFFFFFF || unk_0x21AA848387F2A52A() != 0xFFFFFFFF)
		{
			unk_0x225CFE81EA219E44();
		}
		else if (unk_0x991B1F0980C62628())
		{
			unk_0x225CFE81EA219E44();
		}
	}
	Global_A649 = 0f;
	StringCopy(&Global_A64A, "", 16);
	StringCopy(&Global_A64E, "", 64);
	StringCopy(&Global_A65E, "", 16);
	func_74();
}

void func_74()
{
	Global_A642 = 0x00000000;
	Global_A643 = 0x00000000;
	Global_A644 = 0x00000000;
	Global_A645 = 0x00007530;
	Global_A646 = 0f;
	Global_A648 = 0f;
	Global_A647 = 0f;
	Global_A649 = 0f;
	StringCopy(&Global_A64A, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_40001.f_451C;
			break;
		
		case 0x00000001:
			iVar0 = Global_40001.f_4512;
			break;
		
		case 0x00000002:
			iVar0 = Global_40001.f_451D;
			break;
		
		case 0x00000003:
			iVar0 = Global_40001.f_4515;
			break;
		
		case 0x00000004:
			iVar0 = Global_40001.f_4511;
			break;
		
		case 0x00000006:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000007:
			iVar0 = Global_40001.f_4520;
			break;
		
		case 0x00000008:
			iVar0 = Global_40001.f_4521;
			break;
		
		case 0x00000009:
			iVar0 = Global_40001.f_4524;
			break;
		
		case 0x00000016:
			iVar0 = Global_40001.f_4525;
			break;
		
		case 0x00000017:
			iVar0 = Global_40001.f_451E;
			break;
		
		case 0x00000019:
			iVar0 = Global_40001.f_4897;
			break;
		
		case 0x0000001A:
			iVar0 = Global_40001.f_4896;
			break;
	}
	if (iVar0 != 0x00000000)
	{
		unk_0xF9647457141B11A7(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(0x00000F80, 0xFFFFFFFF, 0x00000000);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (iVar0 > 0x0000270F)
	{
		iVar0 = 0x0000270F;
	}
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1EA = iVar0;
	func_77(0x00000F80, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1407E9;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 + iParam0);
	if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 < 0xFFFFD8F1)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 0x0000270F;
	}
	else if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 > 0x0000270F)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 0x0000270F;
	}
}

int func_82()
{
	if (Global_198C74.f_3 != 0x00000000)
	{
		return Global_198C74.f_3;
	}
	return 0xFFFFFFFF;
}

int func_83()
{
	if (Global_198C74.f_2 != 0x00000000)
	{
		return Global_198C74.f_2;
	}
	return 0xFFFFFFFF;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return 0xFFFFFFFF;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000001];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return 0xFFFFFFFF;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000000];
}

int func_86()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0xD803B885F5E47A62(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 0x00000001);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_28() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_28())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_102())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_100(unk_0xD803B885F5E47A62(), 0x00000000) && !func_99()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_96(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_95(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_94();
					func_93();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_95(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_92(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_93()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_94()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_96(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (bParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (bParam0 == 0x00000001)
			{
				func_98();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_100(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_98()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

bool func_99()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_101(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_79();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_102()
{
	if (func_103() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_103()
{
	return Global_1406D3.f_12;
}

int func_104()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
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

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0x00000000;
	if (!func_107(Global_A58F[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x09AC81E49EA267F7(0x000001F4, 0x00000BB8);
	vLocal_52.x = 0x00000005;
	Local_51.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == 0xFFFFFFFE)
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(Local_43.f_1))
	{
		if (unk_0x405E212DDE472467(Local_43.f_1, 0x00000000) || unk_0x81A5359F25512A04(Local_43.f_1))
		{
			return 0x00000000;
		}
		if (unk_0x4B111E6C3450F2E0(Local_43.f_1))
		{
			return 0x00000000;
		}
		if (func_114(Local_43.f_1))
		{
			return 0x00000000;
		}
	}
	if ((Global_A58F[iLocal_54 /*5*/].f_3 < 0x00000003 && Global_A58F[iLocal_54 /*5*/].f_3 != 0x00000000) && Global_A58F[iLocal_54 /*5*/].f_3 > Global_A58F[iLocal_54 /*5*/].f_4)
	{
		return 0x00000000;
	}
	if ((Global_A58F[iLocal_54 /*5*/].f_4 < 0x00000009 && Global_A58F[iLocal_54 /*5*/].f_4 != 0x00000000) && Global_A58F[iLocal_54 /*5*/].f_4 > Global_A58F[iLocal_54 /*5*/].f_3)
	{
		return 0x00000000;
	}
	sVar1 = func_113(iParam0);
	if (unk_0xEA6BC48857E0AC4C(sVar1))
	{
		return 0x00000000;
	}
	if (func_114(Local_43.f_1))
	{
		return 0x00000000;
	}
	unk_0x4E09E67A27F104A7(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0x00000000:
				sVar3 = "";
				break;
			
			case 0x00000002:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 0x00000001:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0xEA6BC48857E0AC4C(sVar2) && !unk_0xEA6BC48857E0AC4C(sVar3))
		{
			unk_0x3F423BF5B8125A50(sVar2);
			while (!unk_0xB4AE0788C1587752(sVar2))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_43.f_1))
			{
				unk_0xC6EB89C59F2AF6B8(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0x59F02DA2266A744C(sVar1))
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(Local_43.f_1))
	{
		return 0x00000000;
	}
	unk_0x79C43E2BAC7C696F(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x6C3F127AAF415E69() == 0x00000004)
	{
		unk_0x8A3A3812E5562303(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x6569264C5DBAC6F6(Local_43.f_1, 0x00000000, sVar1, "idle", 2f, 0x00000001);
	vLocal_52.z = sVar1;
	bLocal_47 = 0x00000001;
	iVar4 = 0x00000000;
	switch (func_70(Local_43.f_1))
	{
		case 0x00000000:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 0x00000001:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 0x00000002:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x34BFC6F0CB887BC2(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xCED082ADD3739B9F(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xDCDFC17557D5706C(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x9DD8618CA5BF832D(Local_43.f_1, 0x000000C8, 0x00000001);
	unk_0x9DD8618CA5BF832D(Local_43.f_1, 0x0000002E, 0x00000001);
	unk_0xA245D14CC59CDD36(Local_43.f_1, 0x00000000);
	unk_0xBAFED2F6486F771A(Local_43.f_1, 0x00040000, 0x00000001);
	unk_0x8024D396B2F92112(Local_43.f_1, 0x00000001);
	return 0x00000001;
}

bool func_108()
{
	return func_109(unk_0xD803B885F5E47A62());
}

int func_109(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_110(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001) || unk_0x81A5359F25512A04(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0xD1960163A3042274(iParam0, 0x87B9A382) != 0x00000007)
	{
		return 0x00000000;
	}
	if (unk_0xD1960163A3042274(iParam0, 0x6A67A5CC) != 0x00000007)
	{
		return 0x00000000;
	}
	if (unk_0x168558745A6AC21E(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0xE934758D273C899A(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x869EFD0BC0868856(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x39E5E51C6E21A69B(iParam0))
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (func_112())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		if (!unk_0x552B9E1FD4519F80(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
		if (unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
		if (func_111())
		{
			return 0x00000000;
		}
	}
	vVar0 = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_111()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_112()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "move_m@drunk@verydrunk";
			break;
		
		case 0x00000001:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 0x00000002:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_114(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (unk_0xEA6BC48857E0AC4C(vLocal_52.z))
	{
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return unk_0x7F8A39872A07D2CE(vLocal_52.z, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	return Global_A58F[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A58F[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
		{
			return Global_A58F[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_118()
{
	int iVar0;
	
	if (Local_51 == 0xFFFFFFFE)
	{
		return 0xFFFFFFFE;
	}
	if (Local_51 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = (Local_51 - SYSTEM::TIMERA());
	if (iVar0 < 0x00000000)
	{
		return 0xFFFFFFFE;
	}
	if (iVar0 > 0x0000FFFE)
	{
		iVar0 = 0x0000FFFE;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		vLocal_52.x = 0x00000005;
		Local_51.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_52.x = 0x00000006;
}

bool func_120()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Local_43.f_4 == 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(Local_43.f_4, 0x00000000))
	{
		return 0x00000000;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(Local_43.f_1, 0x00000001) };
	vVar1 = { unk_0x68F4C0EC296D3901(Local_43.f_4, 0x00000001) };
	fVar2 = unk_0x0EB28750412C3A5A(vVar0, vVar1, 0x00000001);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x16F2683693E537C9())
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000024, 0x00000001);
		if (unk_0x5F596B0E13677FE9(Local_43.f_1))
		{
			if (Global_A58F[iLocal_54 /*5*/].f_2 == 0x00000000 || Global_A58F[iLocal_54 /*5*/].f_2 == 0x00000002)
			{
				unk_0x6E8BDA9057564534(Local_43.f_1, 0x00000000, 0x00000000);
			}
		}
		if (unk_0x82F88FD400E98881(Local_43.f_1))
		{
			unk_0xDB4B1656BA06B94E(Local_43.f_1, 0x00000000);
		}
	}
	if (Local_51 != 0xFFFFFFFE)
	{
		if (Local_51 == 0xFFFFFFFF)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_2 != 0x00000000)
			{
				Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
			}
		}
		else
		{
			iVar0 = (Local_51 - SYSTEM::TIMERA());
			if (iVar0 <= 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			iVar0 = (iVar0 / 0x000003E8) + 1;
			if (Global_A58F[iLocal_54 /*5*/].f_2 == 0x00000000)
			{
				if (iVar0 < 0x0000001E)
				{
					Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000002;
					if (!func_107(0x00000002))
					{
						Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
						return;
					}
				}
			}
			if (Global_A58F[iLocal_54 /*5*/].f_2 == 0x00000002)
			{
				if (iVar0 < 0x0000000A)
				{
					Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000001;
					if (!func_107(0x00000002))
					{
						Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000002;
						return;
					}
				}
			}
			if (Global_A58F[iLocal_54 /*5*/].f_2 == 0x00000001)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xB4ECF989E2C1DAC8(Local_43.f_1, sVar1, sLocal_50, 0x00000003))
			{
				unk_0xFB131B855F2FD560(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A || Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F) || unk_0xEAE0D21A50E6C7F4(Global_A667, 0x00000009))
	{
		if (unk_0xD1960163A3042274(Local_43.f_1, 0x6A67A5CC) == 0x00000001 && !unk_0xEAE0D21A50E6C7F4(Global_199459.f_3, 0x0000001B))
		{
			return;
		}
		if (unk_0x7DECE00E09F41C95(Local_43.f_1))
		{
			return;
		}
		if (unk_0x405E212DDE472467(Local_43.f_1, 0x00000001))
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if (((unk_0x8CD06866876216F2() && Local_43.f_1 == unk_0x16F2683693E537C9()) && func_132(unk_0xD803B885F5E47A62())) && Global_40001.f_5D23)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if ((unk_0x8CD06866876216F2() && Local_43.f_1 == unk_0x16F2683693E537C9()) && func_131())
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if ((unk_0x8CD06866876216F2() && unk_0xA14BB9332558B949()) && func_130())
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if (((unk_0x8CD06866876216F2() && Local_43.f_1 == unk_0x16F2683693E537C9()) && func_129(unk_0xD803B885F5E47A62())) && Global_40001.f_6683)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if (((unk_0x8CD06866876216F2() && Local_43.f_1 == unk_0x16F2683693E537C9()) && func_126(unk_0xD803B885F5E47A62())) && Global_40001.f_66A4)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if ((unk_0x8CD06866876216F2() && Local_43.f_1 == unk_0x16F2683693E537C9()) && func_122(unk_0xD803B885F5E47A62()) == 0x0000000F)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		if (((unk_0x8CD06866876216F2() && Local_43.f_1 == unk_0x16F2683693E537C9()) && Global_12061) && !Global_A574)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
			return;
		}
		vLocal_52.y = 0x00000003;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 0x000000F3)
	{
		return func_123(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_127(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_127(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

var func_130()
{
	return Global_2564C8.f_13;
}

var func_131()
{
	return Global_265AC9;
}

int func_132(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_127(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_133()
{
	int iVar0;
	
	if (!unk_0x0E0E6175453415CB(Local_43.f_1))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	iVar0 = unk_0x6937EA2286828455(Local_43.f_1, 0x00000000);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == Local_43.f_1)
	{
		return 0x00000000;
	}
	Local_43.f_4 = iVar0;
	vLocal_52.x = 0x00000007;
	return 0x00000001;
}

void func_134()
{
	if (!unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
	{
		vLocal_52.x = 0x00000004;
		return;
	}
}

void func_135()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	fVar1 = unk_0x9C66D99E63E8E24C(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	vVar3 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar4 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!unk_0x9E9FD30CF64A88A8(vVar3, vVar4) && !unk_0x029064EA9141FCC2(vVar3, vVar4))
	{
		return;
	}
	unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
	func_11(0x00000049, 0x00000001);
}

void func_136()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
	{
		iVar1 = unk_0x6937EA2286828455(Local_43.f_1, 0x00000000);
		iVar2 = unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x8CD06866876216F2() && !unk_0xAFE0D3608EDA7039(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x16F2683693E537C9() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x6C3F127AAF415E69() == 0x00000004)
	{
		fLocal_49 = 0f;
		func_138(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_4)
	{
		func_138(iVar0, fLocal_49);
		return;
	}
	if (unk_0xEC560E589DF8370E(iVar0))
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = unk_0x9C66D99E63E8E24C(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_138(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == 0xFFFFFFFF)
	{
		fLocal_49 = func_137(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 0x00001388)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 0x00003A98)
		{
			fLocal_49 = func_137(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 0x00007530)
		{
			fLocal_49 = func_137(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 0x0000AFC8)
		{
			fLocal_49 = func_137(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 0x000927C0)
		{
			fLocal_49 = func_137(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_137(iVar0, 0.13f, 0.06f);
		}
	}
	func_138(iVar0, fLocal_49);
}

float func_137(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x79833B02DBD2A244(-fParam1, fParam1);
	fVar1 = unk_0x79833B02DBD2A244(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xEC560E589DF8370E(iParam0))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x940C1429253D3B1B(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x134B62B726CEC8E6(iParam0);
		if (unk_0x7D8B2A8F9EA82DB7(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_138(int iParam0, float fParam1)
{
	if (unk_0x8CD06866876216F2() && !unk_0xAFE0D3608EDA7039(iParam0))
	{
		return;
	}
	if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x95AFA8C4F50B2E00(unk_0x940C1429253D3B1B(iParam0), fParam1);
	}
	else if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0xBB59E14911FBDDF9(unk_0x96A5FE5834B81CE7(iParam0), fParam1);
	}
}

void func_139()
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
	{
		vLocal_52.x = 0x00000004;
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A || Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
		{
			if (Global_A58F[iLocal_54 /*5*/].f_3 >= 0x0000000A)
			{
				Global_A58F[iLocal_54 /*5*/].f_3 = 0x00000009;
			}
			if (Global_A58F[iLocal_54 /*5*/].f_4 >= 0x0000000F)
			{
				Global_A58F[iLocal_54 /*5*/].f_4 = 0x0000000E;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(Local_43.f_1, 0x00000000);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0x75CDA8644CD3B5F5(Local_43.f_1, 0x00000000, 0x00000000);
		vLocal_52.x = 0x0000000B;
		return;
	}
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x153011FC);
	if (!iVar0 == 0x00000007)
	{
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
	{
		vLocal_52.x = 0x00000004;
		Local_51.f_3 = 0xFFFFFFFE;
		return;
	}
	iVar1 = unk_0x6937EA2286828455(Local_43.f_1, 0x00000000);
	iVar2 = unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000);
	if (iVar2 == Local_43.f_1)
	{
		func_141();
		Local_51.f_3 = 0xFFFFFFFE;
		return;
	}
	unk_0x16A6C233289238AA(Local_43.f_1, iVar1, 0x00000000);
	vLocal_52.x = 0x00000009;
	Local_51.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_141()
{
	if (vLocal_52.x == 0x0000000A)
	{
		return;
	}
	vLocal_52.x = 0x0000000A;
	if (iLocal_44 == 0xFFFFFFFF)
	{
		return;
	}
	func_167(iLocal_44, 0x00000002, 0x00000005);
	Local_51.f_4 = SYSTEM::TIMERA();
	fLocal_49 = 0f;
}

void func_142()
{
	if (unk_0x0E0E6175453415CB(Local_43.f_1))
	{
		vLocal_52.x = 0x0000000A;
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_3)
	{
		return;
	}
	vLocal_52.x = 0x00000004;
	Local_51.f_3 = 0xFFFFFFFE;
}

void func_143()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0x00000000;
	bVar1 = 0x00000000;
	if (bVar1 || unk_0x0E0E6175453415CB(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0x6937EA2286828455(Local_43.f_1, 0x00000000);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0x75CDA8644CD3B5F5(Local_43.f_1, 0x00000000, 0x00000000);
				vLocal_52.x = 0x0000000B;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_141();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_141();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0xA30B8362589C124A(Local_43.f_4, 0xFFFFFFFF, 0x00000000);
		if (iVar2 == Local_43.f_1)
		{
			func_141();
			return;
		}
		unk_0x16A6C233289238AA(Local_43.f_1, iVar0, 0x00000000);
		vLocal_52.x = 0x00000009;
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0xA3BF0AA5A2608191(Local_43.f_1);
		vLocal_52.x = 0x00000004;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0xD1960163A3042274(Local_43.f_1, 0x950B6492);
		if (iVar3 == 0x00000007)
		{
			if (!unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
			{
				unk_0xA3BF0AA5A2608191(Local_43.f_1);
				vLocal_52.x = 0x00000004;
				return;
			}
		}
	}
}

void func_144()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0x00000000)
	{
		vLocal_52.x = 0x00000004;
		return;
	}
	if (!unk_0xDF1306B443CD3D15(Local_43.f_4, 0x00000000))
	{
		Local_43.f_4 = 0x00000000;
		vLocal_52.x = 0x00000004;
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(Local_43.f_1, 0x00000001) };
	vVar1 = { unk_0x68F4C0EC296D3901(Local_43.f_4, 0x00000001) };
	fVar2 = unk_0x0EB28750412C3A5A(vVar0, vVar1, 0x00000001);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_A58F[iLocal_54 /*5*/].f_2))
		{
			vLocal_52.x = 0x0000000C;
			return;
		}
		vLocal_52.x = 0x00000005;
		Local_51.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = unk_0xD6DF381716822EFE(Local_43.f_4);
	iVar4 = 0x00000000;
	bVar5 = 0x00000001;
	iVar4 = 0x00000001;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (unk_0xBBA8A868118C90ED(Local_43.f_4, iVar4, 0x00000000))
			{
				bVar5 = 0x00000000;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = 0x00000000;
			iVar4 = 0xFFFFFFFF;
		}
	}
	if (iVar4 == 0xFFFFFFFF)
	{
		if (iVar4 == 0xFFFFFFFF)
		{
			vLocal_52.x = 0x00000004;
			return;
		}
	}
	func_145();
	unk_0x5B1D360B9C6F0A09(Local_43.f_1, Local_43.f_4, 0xFFFFFFFF, iVar4, 2f, 0x00000001, 0x00000000);
	vLocal_52.x = 0x00000007;
}

void func_145()
{
	if (!unk_0xC844350D5D58C99A(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xEB6A8945D1AC98A1(Local_43.f_1))
	{
		unk_0x76D5D8AF296F50CE(Local_43.f_1, 0x3E800000);
		unk_0xDDB2A6FA0667363C(Local_43.f_1);
		unk_0x95E9A490A3D0029F(Local_43.f_1, 0x00000000, 0xC1000000);
		vLocal_52.z = "";
		unk_0x16BEAC335EC5109B(Local_43.f_1);
		unk_0x9DD8618CA5BF832D(Local_43.f_1, 0x000000C8, 0x00000000);
		unk_0x9DD8618CA5BF832D(Local_43.f_1, 0x0000002E, 0x00000000);
		unk_0xA245D14CC59CDD36(Local_43.f_1, 0x00000001);
		unk_0xBAFED2F6486F771A(Local_43.f_1, 0x00040000, 0x00000000);
		unk_0x8024D396B2F92112(Local_43.f_1, 0x00000000);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = 0x00000000;
}

void func_146()
{
	if (SYSTEM::TIMERA() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_147();
	Local_51.f_2 = 0xFFFFFFFE;
	vLocal_52.x = 0x0000000C;
}

int func_147()
{
	if (!func_114(Local_43.f_1))
	{
		return 0x00000000;
	}
	if (!bLocal_47)
	{
		return 0x00000000;
	}
	func_148(Local_43.f_1);
	vLocal_52.z = "";
	Global_26B66F.f_11BC = 0x00000001;
	return 0x00000001;
}

void func_148(int iParam0)
{
	unk_0x76D5D8AF296F50CE(iParam0, 0x3E800000);
	unk_0x95E9A490A3D0029F(iParam0, 0x00000000, 0xC1000000);
	unk_0x9DD8618CA5BF832D(iParam0, 0x000000C8, 0x00000000);
	unk_0xA245D14CC59CDD36(iParam0, 0x00000001);
	unk_0xBAFED2F6486F771A(iParam0, 0x00040000, 0x00000000);
	unk_0x8024D396B2F92112(iParam0, 0x00000000);
}

void func_149()
{
	int iVar0;
	
	if (Local_51 == 0xFFFFFFFF)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
	}
	else if (Global_A58F[iLocal_54 /*5*/].f_3 < 0x00000003 && Global_A58F[iLocal_54 /*5*/].f_3 != 0x00000000)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0xFFFFFFFF;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		iVar0 = (iVar0 / 0x000003E8) + 1;
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
		if (iVar0 < 0x0000001E)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000002;
		}
		if (iVar0 < 0x0000000A)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000001;
		}
	}
	if (unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
	{
		vLocal_52.x = 0x0000000A;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		vLocal_52.x = 0x0000000C;
		return;
	}
	if (Local_51 == 0xFFFFFFFE)
	{
		return;
	}
	if (!func_107(Global_A58F[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	vLocal_52.x = 0x0000000C;
}

void func_150()
{
}

void func_151()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000006;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000010)
	{
		iVar0 = Global_A5E0[iVar1 /*6*/].f_2;
		if (!iVar0 == 0x00000006)
		{
			if (Global_A5E0[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_153(iVar1);
				func_152(iVar1);
			}
			else if (Global_A5E0[iVar1 /*6*/].f_1 == 0x00000002)
			{
				if (!iLocal_45 == 0xFFFFFFFF)
				{
					if (iLocal_45 == Global_A5E0[iVar1 /*6*/])
					{
						func_153(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_152(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000010)
	{
		return;
	}
	Global_A5E0[iParam0 /*6*/] = 0xFFFFFFFF;
	Global_A5E0[iParam0 /*6*/].f_1 = 0xFFFFFFFF;
	Global_A5E0[iParam0 /*6*/].f_2 = 0x00000006;
	Global_A5E0[iParam0 /*6*/].f_3 = 0x00000000;
	Global_A5E0[iParam0 /*6*/].f_4 = 0x00000000;
}

void func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_A5E0[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0x00000001:
			func_174();
			break;
		
		case 0x00000002:
			func_157(Global_A5E0[iParam0 /*6*/].f_4);
			break;
		
		case 0x00000003:
			func_156(Global_A5E0[iParam0 /*6*/].f_5);
			break;
		
		case 0x00000004:
			func_155();
			break;
		
		case 0x00000005:
			func_154();
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000006:
			break;
		
		default:
			break;
	}
}

void func_154()
{
	vLocal_52.y = 0x00000002;
}

void func_155()
{
	int iVar0;
	
	Global_A58F[iLocal_54 /*5*/].f_4++;
	if (Local_51 == 0xFFFFFFFF)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
	}
	else if (Global_A58F[iLocal_54 /*5*/].f_4 < 0x00000009 && Global_A58F[iLocal_54 /*5*/].f_4 != 0x00000000)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0xFFFFFFFF;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		iVar0 = (iVar0 / 0x000003E8) + 1;
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
		if (iVar0 < 0x0000001E)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000002;
		}
		if (iVar0 < 0x0000000A)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000001;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_A58F[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_156(int iParam0)
{
	int iVar0;
	
	Global_A58F[iLocal_54 /*5*/].f_3 = (Global_A58F[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == 0xFFFFFFFF)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
	}
	else if (Global_A58F[iLocal_54 /*5*/].f_3 < 0x00000003 && Global_A58F[iLocal_54 /*5*/].f_3 != 0x00000000)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0xFFFFFFFF;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		iVar0 = (iVar0 / 0x000003E8) + 1;
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
		if (iVar0 < 0x0000001E)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000002;
		}
		if (iVar0 < 0x0000000A)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000001;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_A58F[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_157(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_158()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = 0xFFFFFFFF;
		return;
	}
	if (iLocal_53 < 0x00000000)
	{
		iLocal_53 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		return;
	}
	iVar0 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_159();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_159()
{
}

void func_160()
{
	if (!Local_51 == 0xFFFFFFFF)
	{
		if (!Local_51 == 0xFFFFFFFE)
		{
			if (SYSTEM::TIMERA() >= Local_51)
			{
				func_145();
				Local_51 = 0xFFFFFFFE;
				vLocal_52.x = 0x0000000C;
			}
		}
		if (SYSTEM::TIMERA() > Local_51.f_1)
		{
			func_174();
		}
	}
}

void func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam0 == Global_A5E0[iVar0 /*6*/])
		{
			func_152(iVar0);
		}
		iVar0++;
	}
}

void func_162()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_52.x = 0x00000004;
	if (!unk_0x437347B10A200C4B(Local_43.f_1, 0x00000000))
	{
		if (unk_0x0E0E6175453415CB(Local_43.f_1))
		{
			vLocal_52.x = 0x0000000A;
		}
	}
	if (bLocal_46)
	{
		func_165();
		func_11(0x00000047, 0x00000001);
		if (unk_0x8CD06866876216F2())
		{
			iVar0 = func_80(0x00000809, 0xFFFFFFFF, 0x00000000);
			iVar1 = (iVar0 / 0x0000000A) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_163(iVar1);
			}
			func_77(0x00000809, iVar0 + 1, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
		else
		{
			iVar2 = 0x00000000;
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_sp_num_times_drunk"), &iVar2, 0xFFFFFFFF);
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_sp_num_times_drunk"), &iVar3, 0xFFFFFFFF);
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_sp_num_times_drunk"), &iVar4, 0xFFFFFFFF);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 0x0000000A) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_163(iVar6);
			}
			switch (func_67())
			{
				case 0x00000000:
					unk_0xCDC520E5E48E63D9(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 0x00000001);
					break;
				
				case 0x00000001:
					unk_0xCDC520E5E48E63D9(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 0x00000001);
					break;
				
				case 0x00000002:
					unk_0xCDC520E5E48E63D9(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 0x00000001);
					break;
				}
		}
		vLocal_52.y = 0x00000001;
		return;
	}
	vLocal_52.y = 0x0000000C;
	if (Local_51 == 0xFFFFFFFF)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
	}
	else if (Global_A58F[iLocal_54 /*5*/].f_3 < 0x00000003 && Global_A58F[iLocal_54 /*5*/].f_3 != 0x00000000)
	{
		Global_A58F[iLocal_54 /*5*/].f_2 = 0xFFFFFFFF;
	}
	else
	{
		iVar7 = (Local_51 - SYSTEM::TIMERA());
		if (iVar7 <= 0x00000000)
		{
			iVar7 = 0x00000000;
		}
		iVar7 = (iVar7 / 0x000003E8) + 1;
		Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000000;
		if (iVar7 < 0x0000001E)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000002;
		}
		if (iVar7 < 0x0000000A)
		{
			Global_A58F[iLocal_54 /*5*/].f_2 = 0x00000001;
		}
	}
}

void func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = func_164(0x00000051);
	Global_24D752[iVar0 /*83*/] = 0x00000051;
	Global_24D752[iVar0 /*83*/].f_11 = iParam0;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "", 64);
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000013;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000013)
	{
		if (Global_24D752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		else if (Global_24D752[iVar1 /*83*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		iVar1++;
	}
	return iVar0;
}

void func_165()
{
}

void func_166()
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = 0xFFFFFFFE;
	Local_51.f_3 = 0xFFFFFFFE;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	func_168(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam2 == 0x00000006)
	{
		return;
	}
	if (func_170(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_169();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_A5E0[iVar0 /*6*/] = iParam0;
	Global_A5E0[iVar0 /*6*/].f_1 = iParam1;
	Global_A5E0[iVar0 /*6*/].f_2 = iParam2;
	Global_A5E0[iVar0 /*6*/].f_3 = iParam3;
	Global_A5E0[iVar0 /*6*/].f_4 = iParam4;
	Global_A5E0[iVar0 /*6*/].f_5 = iParam5;
}

int func_169()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A5E0[iVar0 /*6*/].f_2 == 0x00000006)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	if (func_171(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam2 == Global_A5E0[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_A5E0[iVar0 /*6*/])
			{
				if (iParam1 == Global_A5E0[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_172()
{
	int iVar0;
	
	bLocal_46 = 0x00000000;
	if (Local_43.f_1 == unk_0x16F2683693E537C9())
	{
		bLocal_46 = 0x00000001;
		Global_A663 = 0x00000001;
		Global_A665++;
	}
	if (!unk_0x437347B10A200C4B(Local_43.f_1, 0x00000000))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 0x00000011:
				unk_0x4F39CC3882DD074E(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 0x00000013:
				unk_0x4F39CC3882DD074E(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_173()
{
	if (!iLocal_44 == 0xFFFFFFFF)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == 0xFFFFFFFF)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_174()
{
	int iVar0;
	
	if (!func_34(0x00000000) && !func_34(0x00000003))
	{
		if (!unk_0x437347B10A200C4B(Local_43.f_1, 0x00000000))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_A58F[iLocal_54 /*5*/].f_4 > 0x00000000)
			{
				switch (iVar0)
				{
					case 0x00000000:
						func_176(Local_43.f_1, "POST_STONED", 0x00000018);
						break;
					
					case 0x00000001:
						func_176(Local_43.f_1, "POST_STONED", 0x00000018);
						break;
					
					case 0x00000002:
						func_176(Local_43.f_1, "POST_STONED", 0x00000018);
						break;
					}
			}
			switch (iVar0)
			{
				case 0x00000011:
					unk_0x4F39CC3882DD074E(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 0x00000013:
					unk_0x4F39CC3882DD074E(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_145();
	if (bLocal_46)
	{
		Global_A663 = 0x00000000;
	}
	func_175();
	unk_0x8D17794CE3273D70(func_113(0x00000000));
	unk_0x8D17794CE3273D70(func_113(0x00000002));
	unk_0x8D17794CE3273D70(func_113(0x00000001));
	Global_198014 = 0x00000000;
	if (unk_0x8A22C4C08282BF26(joaat("appemail")) > 0x00000000)
	{
		func_41(0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x437347B10A200C4B(Local_43.f_1, 0x00000000))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (unk_0x405E212DDE472467(Local_43.f_1, 0x00000000))
	{
		iVar1 = unk_0x6937EA2286828455(Local_43.f_1, 0x00000000);
		iVar2 = unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x6C3F127AAF415E69() == 0x00000004 || !unk_0x16F2683693E537C9() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_138(iVar0, 0f);
}

void func_176(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_177(iParam2), 0x00000001);
}

int func_177(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

