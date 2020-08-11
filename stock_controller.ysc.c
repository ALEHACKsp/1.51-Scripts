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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	vector3 vLocal_28 = { 0f, 0f, 0f };
	int iLocal_29 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
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
	iLocal_20 = 0xFFFFFFF1;
	iLocal_21 = 0xFFFFFFF1;
	iLocal_22 = 0xFFFFFFFF;
	iLocal_26 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_98();
	}
	if (unk_0x8A22C4C08282BF26(joaat("stock_controller")) > 0x00000001)
	{
		func_98();
	}
	Global_F038 = 0x00000001;
	iLocal_22 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(0x000001E0) / 16f));
	func_97();
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000CC)
	{
		if (!Global_DFA6[iVar0 /*7*/])
		{
			if (Global_DFA6[iVar0 /*7*/].f_2)
			{
				if (!Global_DFA6[iVar0 /*7*/].f_4)
				{
					unk_0x6FB46C25CCB7E6D5(Global_DFA6[iVar0 /*7*/].f_3, &(Global_DFA6[iVar0 /*7*/].f_5), 0xFFFFFFFF);
				}
				else
				{
					fVar1 = 0f;
					unk_0x893A626C476B583D(Global_DFA6[iVar0 /*7*/].f_3, &fVar1, 0xFFFFFFFF);
					Global_DFA6[iVar0 /*7*/].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_95();
	func_94();
	func_91();
	Global_F038 = 0x00000000;
	func_90(0x00000001);
	func_87();
	func_84();
	while (0x00000001)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000003)
		{
			if (!Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 < 0x0000000B)
			{
				Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
			}
			iVar2++;
		}
		func_80();
		if (!unk_0x8CD06866876216F2() && !func_79(0x0000000E))
		{
			func_68();
			iVar3 = 0x00000010;
			while (func_67() && iVar3 >= 0x00000000)
			{
				iVar3 = (iVar3 - 0x00000001);
				func_47();
				Global_E542 = 0x00000001;
				func_41();
				Global_F03A = 0x00000001;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0x00000000);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
			while (Global_E53B > 0x00000000)
			{
				func_11(&iLocal_20, 0x00000000, 0x000001E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_11(&iLocal_21, 0x00000000, 0x000001E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				Global_E53B = (Global_E53B - 0x00000001);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4());
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return;
	}
	iVar1 = func_3(iVar0);
	if (unk_0x4E861BC5B1EDA7BD(iVar1))
	{
		func_2(0x00000059, 0x00000001);
		if (unk_0x9C66D99E63E8E24C(iVar1) > 5f)
		{
			func_2(0x0000005A, 0x00000001);
		}
	}
}

void func_2(int iParam0, int iParam1)
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

int func_3(int iParam0)
{
	return iParam0;
}

void func_4()
{
	int iVar0;
	
	if (!unk_0x58424C49F8924842())
	{
		if (Global_E53C)
		{
			Global_E53C = 0x00000000;
			Global_E53D = unk_0x1C0640BA9A7327B3();
			Global_F039 = 0x00000001;
		}
		return;
	}
	if (Global_E53C)
	{
		if (!unk_0x8B696FEFCEC6AA26())
		{
			iVar0 = func_5();
			Global_E53C = 0x00000000;
			if (iVar0 < 0x00000005)
			{
				Global_F039 = 0x00000000;
			}
		}
	}
}

int func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	if (!unk_0x58424C49F8924842() || !unk_0x999A3BFD3E9B5D2C())
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000050)
	{
		if (Global_D233[iVar0 /*36*/].f_8)
		{
			if (Global_D233[iVar0 /*36*/].f_23 > 0xFFFFFFFF)
			{
				iVar2 = Global_DD74[Global_D233[iVar0 /*36*/].f_23 /*7*/];
				unk_0x893A626C476B583D(iVar2, &(Global_D233[iVar0 /*36*/].f_9), 0xFFFFFFFF);
				if (Global_D233[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					unk_0x43B7F203CA37F346(iVar2, 0x00000000, &(Global_D233[iVar0 /*36*/].f_21));
					Global_D233[iVar0 /*36*/].f_1F = Global_D233[iVar0 /*36*/].f_9;
					Global_D233[iVar0 /*36*/].f_20 = Global_D233[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_D233[iVar0 /*36*/].f_21);
					iVar4 = 0x00000000;
					while (iVar4 < 0x00000004)
					{
						fVar5 = 0f;
						unk_0x43B7F203CA37F346(iVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_D233[iVar0 /*36*/].f_1F)
						{
							Global_D233[iVar0 /*36*/].f_1F = fVar5;
						}
						if (fVar5 < Global_D233[iVar0 /*36*/].f_20)
						{
							Global_D233[iVar0 /*36*/].f_20 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_D233[iVar0 /*36*/].f_1F)
					{
						Global_D233[iVar0 /*36*/].f_1F = fVar6;
					}
					if (fVar6 < Global_D233[iVar0 /*36*/].f_20)
					{
						Global_D233[iVar0 /*36*/].f_20 = fVar6;
					}
					Global_D233[iVar0 /*36*/].f_21 = (fVar6 - fVar3);
					Global_D233[iVar0 /*36*/].f_22 = ((Global_D233[iVar0 /*36*/].f_21 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_D233[iParam0 /*36*/].f_9 * func_7(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 0x0000003D:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 0x00000049:
			if (func_10(0x00000019))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_10(0x0000004A) || func_10(0x0000004B))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_10(0x0000000E))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(0x00000010))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(0x00000030))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(0x00000018))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(0x0000001B))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 0x00000042:
			if (func_10(0x00000031))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_10(0x0000000A))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 0x0000003B:
			if (func_10(0x0000005D))
			{
				if (!func_10(0x0000002F))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(0x00000026))
			{
				if (!func_10(0x0000001C))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(0x00000054))
			{
				if (!func_10(0x0000001C))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 0x00000045:
			if (func_10(0x0000005A))
			{
				if (!func_10(0x0000000E))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 0x00000010:
			if (func_10(0x0000001C))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 0x00000034:
			if (func_10(0x0000005D))
			{
				if (!func_10(0x0000001C))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 0x00000038:
			if (func_10(0x0000003D))
			{
				if (!func_10(0x00000031))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_1B416.f_504F.f_1BA < 0x00000001)
	{
		return fVar0;
	}
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000008)
	{
		if (Global_1B416.f_504F.f_1BB[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > 0xFFFFFFFF)
	{
		fVar0 = func_9(Global_1B416.f_504F.f_1C4[iVar1], Global_1B416.f_504F.f_1CD[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_8(0x00000000, iVar4);
		iVar6 = func_8(0x00000001, iVar4);
		iVar7 = func_8(0x00000002, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0x00000000)
		{
			iVar8 = ((Global_E53E[0x00000000] + Global_E53E[0x00000001]) + Global_E53E[0x00000002]);
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000A)
			{
				if (Global_1B416.f_504F.f_16[iVar2] > 0x00000000)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_1B416.f_504F.f_B[iVar2]));
				}
				if (Global_1B416.f_504F.f_37[iVar2] > 0x00000000)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_1B416.f_504F.f_2C[iVar2]));
				}
				if (Global_1B416.f_504F.f_58[iVar2] > 0x00000000)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_1B416.f_504F.f_4D[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 0x29B92700;
			iVar10 = 0x3B9ACA00;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000009)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1B416.f_504F.f_16[iParam1];
			break;
		
		case 0x00000001:
			return Global_1B416.f_504F.f_37[iParam1];
			break;
		
		case 0x00000002:
			return Global_1B416.f_504F.f_58[iParam1];
			break;
	}
	return 0x00000000;
}

float func_9(int iParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 0x00000001)
	{
		return 1f;
	}
	bVar1 = unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000000);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0x00000000;
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000003))
	{
		iVar3++;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000004))
	{
		iVar3 += 2;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000005))
	{
		iVar3 += 4;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000014))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((0x00000003 * iVar3));
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000002))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000001))
	{
		if (func_10(0x00000015))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000010))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000011))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000012))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000013))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000001))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000006))
		{
			fVar6 = 0f;
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000008))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000009))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x0000000A))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000007))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x0000000B))
		{
			fVar8 = 0f;
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x0000000D))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x0000000E))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x0000000F))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x0000000C))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_10(int iParam0)
{
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	int iVar9;
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((iParam4 == 0x00000000 && iParam3 == 0x00000000) && iParam2 == 0x00000000) && iParam1 == 0x00000000)
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	if (iParam2 < 0x00000000)
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam4 < 0x00000000)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0x00000000)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0x00000000)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0x00000000)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0x00000000)
	{
		iParam5++;
		iVar6 = (iVar1 - 0x00000001);
		iVar7 = iVar0;
		if (iVar6 < 0x00000000)
		{
			iVar6 = 0x0000000B;
			iVar7 = (iVar7 - 0x00000001);
		}
		iVar8 = iVar6;
		iVar9 = func_19(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0x00000000)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_18(iParam0, iParam1);
	func_17(iParam0, iParam2);
	func_16(iParam0, iParam3);
	func_15(iParam0, iParam5);
	func_14(iParam0, iParam4);
	func_13(iParam0, iParam6);
}

void func_13(int iParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*iParam0 |= 0x80000000;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*iParam0 = (*iParam0 - *iParam0 & 0x80000000);
	}
}

void func_14(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(*iParam0);
	iVar1 = func_25(*iParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_19(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x000001F0);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x0000000F);
	*iParam0 = (*iParam0 || iParam1);
}

void func_16(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x00003E00);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x000FC000);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_18(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x03F00000);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_19(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

int func_20(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_21(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_22(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_23(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_24(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_25(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_26(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_26(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_27()
{
	int iVar0;
	
	if (Global_1B416.f_504F.f_1BA < 0x00000001)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1CD[iVar0], 0x00000001))
		{
			if (Global_1B416.f_504F.f_1C4[iVar0] > 0x00000000)
			{
				Global_1B416.f_504F.f_1C4[iVar0] = (Global_1B416.f_504F.f_1C4[iVar0] - 0x00000001);
				if (Global_1B416.f_504F.f_1C4[iVar0] < 0x00000001)
				{
					Global_1B416.f_504F.f_1C4[iVar0] = 0x00000000;
					Global_1B416.f_504F.f_1BA = (Global_1B416.f_504F.f_1BA - 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000050)
	{
		func_29(iVar0, bParam0);
		SYSTEM::WAIT(0x00000000);
		if (!bParam0)
		{
			func_68();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (Global_D233[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_D233[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_D233[iParam0 /*36*/].f_E[Global_D233[iParam0 /*36*/].f_D] = fVar0;
	if (fVar0 > Global_D233[iParam0 /*36*/].f_1F)
	{
		Global_D233[iParam0 /*36*/].f_1F = fVar0;
	}
	if (fVar0 < Global_D233[iParam0 /*36*/].f_20)
	{
		Global_D233[iParam0 /*36*/].f_20 = fVar0;
	}
	Global_D233[iParam0 /*36*/].f_D++;
	if (Global_D233[iParam0 /*36*/].f_D >= 0x00000010)
	{
		Global_D233[iParam0 /*36*/].f_D = 0x00000000;
	}
	fVar1 = 0f;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000010)
	{
		fVar1 = (fVar1 + Global_D233[iParam0 /*36*/].f_E[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(0x00000010));
	Global_D233[iParam0 /*36*/].f_21 = (fVar0 - fVar1);
	Global_D233[iParam0 /*36*/].f_22 = ((Global_D233[iParam0 /*36*/].f_21 / fVar1) * 100f);
}

int func_30()
{
	int iVar0;
	
	if (iLocal_20 == 0xFFFFFFF1)
	{
		iLocal_20 = func_37();
		iVar0 = func_22(iLocal_20);
		if (iVar0 == 0x00000018)
		{
			iVar0 = 0x00000000;
		}
		if (func_36(iVar0, 0x00000000, 0x00000008))
		{
			func_16(&iLocal_20, 0x00000008);
		}
		else if (func_36(iVar0, 0x00000008, 0x00000010))
		{
			func_16(&iLocal_20, 0x00000010);
		}
		else if (func_36(iVar0, 0x00000010, 0x00000018))
		{
			func_16(&iLocal_20, 0x00000000);
			func_35(&iLocal_20, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		}
		func_17(&iLocal_20, 0x00000000);
		func_18(&iLocal_20, 0x00000000);
		iLocal_21 = iLocal_20;
		return 0x00000000;
	}
	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, 0x00000001, 0x00000008))
		{
			return 0x00000000;
		}
		func_35(&iLocal_20, 0x00000000, 0x000001E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_31(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_33(Global_1406D1))
	{
		if (bParam1)
		{
			iVar0 = func_37();
			iVar1 = func_22(Global_1406D1);
			iVar2 = func_21(Global_1406D1);
			func_16(&iVar0, iVar1);
			func_17(&iVar0, iVar2);
			func_18(&iVar0, 0x00000000);
			if (func_32(func_37(), iVar0))
			{
				func_35(&iVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			}
			iVar3 = 0x00000000;
			while (func_32(iVar0, *iParam0) && iVar3 < 0x00000018)
			{
				func_35(iParam0, 0x00000000, 0x00000000, iParam2, 0x00000000, 0x00000000, 0x00000000);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_33(iParam1) || !func_33(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	iVar0 = func_20(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_21(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_22(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_25(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_24(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_23(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_19(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_34(int iParam0)
{
	return func_32(func_37(), iParam0);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((((iParam6 == 0x00000000 && iParam5 == 0x00000000) && iParam4 == 0x00000000) && iParam3 == 0x00000000) && iParam2 == 0x00000000) && iParam1 == 0x00000000)
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	if (iParam2 < 0x00000000)
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam4 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x00000000)
	{
		return;
	}
	if (iParam6 < 0x00000000)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 0x0000003C)
	{
		iParam2++;
		iVar5 = (iVar5 - 0x0000003C);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 0x0000003C)
	{
		iParam3++;
		iVar4 = (iVar4 - 0x0000003C);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 0x00000018)
	{
		iParam4++;
		iVar3 = (iVar3 - 0x00000018);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_19(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_19(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0x00000018)
	{
		iParam1 = 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000018)
	{
		iParam2 = 0x00000000;
	}
	if (iParam2 < 0x00000000 || iParam2 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam1 == iParam2)
	{
		return 0x00000001;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 0x00000018;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	if (!bVar0)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37()
{
	var uVar0;
	
	func_18(&uVar0, unk_0x4460E481B9E33ADA());
	func_17(&uVar0, unk_0x8D199E381D262EEF());
	func_16(&uVar0, unk_0xD8A54335F18763BA());
	func_14(&uVar0, unk_0x972A296334C9D57B());
	func_15(&uVar0, unk_0x118229AD063C3C1D());
	func_13(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_38()
{
	SYSTEM::WAIT(0x00000000);
	func_68();
}

void func_39()
{
	int iVar0;
	
	iVar0 = unk_0xFC21F7E0F4D92523();
	if (iLocal_26 != iVar0)
	{
		if (iLocal_25 > 0x00000030)
		{
			switch (func_40(iLocal_26))
			{
				case 0x00000001:
					func_2(0x00000055, 0x00000001);
					break;
				
				case 0x00000002:
					func_2(0x00000054, 0x00000001);
					break;
				
				case 0x00000003:
					func_2(0x00000056, 0x00000001);
					break;
				
				case 0x00000004:
					func_2(0x00000057, 0x00000001);
					break;
				}
		}
		iLocal_25 = 0x00000000;
		iLocal_26 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 0x00000001:
			func_2(0x0000004D, 0x00000001);
			break;
		
		case 0x00000002:
			func_2(0x0000004C, 0x00000001);
			break;
		
		case 0x00000003:
			func_2(0x0000004F, 0x00000001);
			break;
		
		case 0x00000004:
			func_2(0x00000050, 0x00000001);
			break;
		
		case 0x00000000:
			break;
	}
	func_2(0x0000004E, 0x00000001);
	iLocal_25++;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
			return 0x00000004;
			break;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
			return 0x00000002;
			break;
	}
	return 0x00000000;
}

void func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	func_68();
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000CC)
	{
		if (!Global_DFA6[iVar0 /*7*/])
		{
			if (Global_DFA6[iVar0 /*7*/].f_2)
			{
				iVar1 = 0x00000000;
				if (!Global_DFA6[iVar0 /*7*/].f_4)
				{
					unk_0x6FB46C25CCB7E6D5(Global_DFA6[iVar0 /*7*/].f_3, &iVar1, 0xFFFFFFFF);
				}
				else
				{
					fVar2 = 0f;
					unk_0x893A626C476B583D(Global_DFA6[iVar0 /*7*/].f_3, &fVar2, 0xFFFFFFFF);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_DFA6[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_DFA6[iVar0 /*7*/].f_5;
					}
				}
				Global_DFA6[iVar0 /*7*/].f_6 = (iVar1 - Global_DFA6[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 0x00000014) == 0x00000000)
		{
			SYSTEM::WAIT(0x00000000);
			func_68();
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000050)
	{
		if (!Global_D233[iVar0 /*36*/].f_8)
		{
			if (!Global_D233[iVar0 /*36*/].f_A == 0f)
			{
				Global_D233[iVar0 /*36*/].f_B = Global_D233[iVar0 /*36*/].f_A;
			}
		}
		if ((iVar0 % 0x00000028) == 0x00000000)
		{
			SYSTEM::WAIT(0x00000000);
			func_68();
		}
		iVar0++;
	}
	iVar4 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000050)
	{
		if (!Global_D233[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_D233[iVar0 /*36*/].f_A != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_D233[iVar0 /*36*/].f_9) * Global_D233[iVar0 /*36*/].f_A) - Global_D233[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((unk_0x79833B02DBD2A244(-Global_DE86[iVar4 /*7*/].f_6, Global_DE86[iVar4 /*7*/].f_6) * 0.1f) * Global_D233[iVar0 /*36*/].f_9));
			Global_DE86[iVar4 /*7*/] = (Global_DE86[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_DE86[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_DE86[iVar4 /*7*/].f_1);
			}
			fVar5 = func_46(fVar5, -Global_DE86[iVar4 /*7*/].f_5, Global_DE86[iVar4 /*7*/].f_5);
			iVar6 = 0x0000003D;
			if (((iVar0 == iVar6 && func_45(0x0000002C)) && !func_45(0x00000040)) && fVar5 > 0f)
			{
				Global_D233[iVar0 /*36*/].f_9 = (Global_D233[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_D233[iVar0 /*36*/].f_9 = (Global_D233[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_D233[iVar0 /*36*/].f_9 > Global_DE86[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_D233[iVar0 /*36*/].f_9 - Global_DE86[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_D233[iVar0 /*36*/].f_9 = (Global_D233[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_D233[iVar0 /*36*/].f_9 < Global_DE86[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_DE86[iVar4 /*7*/].f_4 - Global_D233[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_D233[iVar0 /*36*/].f_9 = (Global_D233[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_DE86[iVar4 /*7*/] = (Global_DE86[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_DE86[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_D233[iVar0 /*36*/].f_9 > 0f)
			{
				Global_D233[iVar0 /*36*/].f_9 = (-1f * Global_D233[iVar0 /*36*/].f_9);
				Global_D233[iVar0 /*36*/].f_9 = (Global_D233[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 0x00000014) == 0x00000000)
		{
			SYSTEM::WAIT(0x00000000);
			func_68();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000CC)
	{
		if (!Global_DFA6[iVar0 /*7*/])
		{
			if (Global_DFA6[iVar0 /*7*/].f_2)
			{
				Global_DFA6[iVar0 /*7*/].f_5 = (Global_DFA6[iVar0 /*7*/].f_5 + Global_DFA6[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000050)
	{
		if (!Global_D233[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 0x0000002A)
			{
				Global_1B416.f_504F.f_67[iVar0] = Global_D233[iVar1 /*36*/].f_9;
				if (Global_D233[iVar1 /*36*/].f_1F > Global_1B416.f_504F.f_92[iVar0])
				{
					Global_1B416.f_504F.f_92[iVar0] = Global_D233[iVar1 /*36*/].f_1F;
				}
				if (Global_1B416.f_504F.f_BD[iVar0] == 0f)
				{
					Global_1B416.f_504F.f_BD[iVar0] = Global_D233[iVar1 /*36*/].f_20;
				}
				else if (Global_D233[iVar1 /*36*/].f_20 < Global_1B416.f_504F.f_BD[iVar0])
				{
					Global_1B416.f_504F.f_BD[iVar0] = Global_D233[iVar1 /*36*/].f_20;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (Global_D233[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = func_8(0x00000000, iParam0);
	iVar1 = func_8(0x00000001, iParam0);
	iVar2 = func_8(0x00000002, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 0x00000001)
	{
		return 1f;
	}
	iVar3 = 0x3B9ACA00;
	iVar4 = ((Global_E53E[0x00000000] + Global_E53E[0x00000001]) + Global_E53E[0x00000002]);
	if (Global_E53E[0x00000000] > iVar3)
	{
		return 0f;
	}
	if (Global_E53E[0x00000001] > iVar3)
	{
		return 0f;
	}
	if (Global_E53E[0x00000002] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0x00000000;
	while (iVar6 < 0x0000000A)
	{
		iVar7 = func_8(0x00000000, iVar6);
		if (iVar7 > 0x00000000)
		{
			fVar5 = (fVar5 + (func_6(func_44(0x00000000, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(0x00000001, iVar6) > 0x00000000)
		{
			fVar5 = (fVar5 + (func_6(func_44(0x00000001, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(0x00000002, iVar6) > 0x00000000)
		{
			fVar5 = (fVar5 + (func_6(func_44(0x00000002, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 0x29B92700;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000009)
	{
		return 0x0000001F;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1B416.f_504F[iParam1];
		
		case 0x00000001:
			return Global_1B416.f_504F.f_21[iParam1];
		
		case 0x00000002:
			return Global_1B416.f_504F.f_42[iParam1];
		
		default:
	}
	return 0x0000001F;
}

int func_45(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2)
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

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
	{
		iVar0 = unk_0x179932739160BA96(unk_0xA30EC016B12C03E4());
		if (iVar0 == 0x00000000)
		{
			func_2(0x0000004B, 0x00000001);
		}
		iVar1 = unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4());
		if (unk_0x405E212DDE472467(iVar1, 0x00000000))
		{
			iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
			if (iVar2 != 0x00000000)
			{
				if (func_58(iVar2))
				{
					iVar3 = unk_0x134B62B726CEC8E6(iVar2);
					func_56(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			iVar4 = unk_0x78CE7F4A02231950(iVar1);
			func_54(iVar4);
			switch (iVar4)
			{
				case joaat("weapon_molotov"):
				case joaat("weapon_petrolcan"):
					switch (func_48())
					{
						case 0x00000000:
							func_2(0x00000093, 0x00000001);
							break;
						
						case 0x00000001:
							func_2(0x00000094, 0x00000001);
							break;
						
						case 0x00000002:
							func_2(0x00000095, 0x00000001);
							break;
					}
					break;
				}
			}
	}
}

int func_48()
{
	func_49();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_49()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_52(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_51(unk_0x16F2683693E537C9());
			if (func_50(iVar0) && (!func_79(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_50(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_50(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_53(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case 0x00000000:
			func_2(0x00000033, 0x00000001);
			break;
		
		case 0x00000001:
			func_2(0x00000034, 0x00000001);
			break;
		
		case 0x00000002:
			func_2(0x00000035, 0x00000001);
			break;
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_stickybomb"):
		case joaat("weapon_stungun"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_appistol"):
			return 0x00000000;
			break;
		
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_rpg"):
		case joaat("weapon_mg"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_pistol"):
			return 0x00000001;
			break;
		
		case joaat("weapon_grenade"):
		case joaat("weapon_minigun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_combatpistol"):
			return 0x00000002;
			break;
		
		default:
			return 0x00000003;
			break;
	}
	return 0x00000003;
}

void func_56(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0x00000000:
			func_2(0x00000027, 0x00000001);
			break;
		
		case 0x00000001:
			func_2(0x00000023, 0x00000001);
			break;
		
		case 0x00000002:
			func_2(0x00000020, 0x00000001);
			break;
		
		case 0x00000003:
			func_2(0x00000026, 0x00000001);
			break;
		
		case 0x00000004:
			func_2(0x0000001F, 0x00000001);
			break;
		
		case 0x00000005:
			func_2(0x00000021, 0x00000001);
			break;
		
		case 0x00000006:
			func_2(0x00000024, 0x00000001);
			break;
		
		case 0x00000007:
			func_2(0x00000025, 0x00000001);
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			func_2(0x00000022, 0x00000001);
			break;
	}
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 0x00000003;
			break;
		
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 0x00000002;
			break;
		
		case joaat("fusilade"):
			return 0x00000006;
			break;
		
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 0x00000001;
			break;
		
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 0x00000004;
			break;
		
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0x00000000;
			break;
		
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 0x00000007;
			break;
	}
	return 0x00000008;
}

int func_58(int iParam0)
{
	var uVar0;
	
	if (Global_12B4E)
	{
		return unk_0xF566283DA9533594(iParam0);
	}
	if (func_61(iParam0, &uVar0))
	{
		return 0x00000000;
	}
	if (func_60(iParam0))
	{
		return 0x00000000;
	}
	if (func_59(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Global_17769[iVar0]))
		{
			if (Global_17769[iVar0] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar0], 0x00000000))
			{
				if (Global_1774B[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_61(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (Global_126B1.f_1E4[iVar0] == iParam0)
		{
			if (func_62(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A) && Global_126B1.f_22B[0x00000000 /*21*/].f_4 == unk_0x134B62B726CEC8E6(iParam0))
				{
					*uParam1 = iVar0;
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0x00000000;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000091;
	uParam0->f_D = 0xFFFFFFFF;
	uParam0->f_E = 0x00000000;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000000:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000B:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000C:
			uParam0->f_E = 0x00000000;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_E = 0x00000001;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			uParam0->f_E = 0x00000002;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			uParam0->f_E = 0x00000003;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			uParam0->f_E = 0x00000004;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			uParam0->f_E = 0x00000005;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			uParam0->f_E = 0x00000006;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			uParam0->f_E = 0x00000007;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			uParam0->f_E = 0x00000008;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000168;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			uParam0->f_E = 0x00000009;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			uParam0->f_E = 0x0000000A;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			uParam0->f_E = 0x0000000B;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
			iVar1 = (iParam1 - 0x0000001A);
			uParam0->f_E = (0x0000000C + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
			iVar1 = (iParam1 - 0x0000001D);
			uParam0->f_E = (0x0000000F + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
			iVar1 = (iParam1 - 0x00000020);
			uParam0->f_E = (0x00000012 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			uParam0->f_E = 0x00000015;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			uParam0->f_E = 0x00000016;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 0x0000007E;
			uParam0->f_B = 0x0000007E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 0x0000009D;
			uParam0->f_B = 0x0000009D;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 0x73920F8E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000037:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000038:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000039:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 0x00000194;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_64())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_64())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x0000000A))
	{
		uParam0->f_4 = Global_1B416.f_7FE8.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 0x0000000E)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_63(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_1B416.f_7FE8.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_1B416.f_7FE8.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000013))
	{
		if (!func_63(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_63(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

bool func_63(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_64()
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

int func_65(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_66(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 0x00000001;
	uParam1->f_54 = 0x000000FF;
	uParam1->f_55 = 0x000000FF;
	uParam1->f_56 = 0x000000FF;
	uParam1->f_61 = 0x00000001;
	uParam1->f_3 = 0x000003E8;
	uParam1->f_1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[0x00000080] && !Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0x00000000;
					uParam1->f_9 = 0x00000001;
					uParam1->f_B[0x00000000] = 0x00000001;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 0x0000002B;
					uParam1->f_6 = 0x0000002B;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_9 = 0x00000000;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 0x00000020;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[0x00000077])
					{
						uParam1->f_B[0x00000001] = 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (iParam2 == 0x00000001)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 0x00000002)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000076])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 0x00000035;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000003B;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_A = 0x00000001;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0x00000000] = 0x00000001;
					uParam1->f_B[0x00000001] = 0x00000001;
					uParam1->f_B[0x00000002] = 0x00000001;
					uParam1->f_B[0x00000003] = 0x00000001;
					uParam1->f_B[0x00000004] = 0x00000001;
					uParam1->f_B[0x00000005] = 0x00000001;
					uParam1->f_B[0x00000006] = 0x00000001;
					uParam1->f_B[0x00000007] = 0x00000001;
					uParam1->f_B[0x00000008] = 0x00000001;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_67()
{
	if (iLocal_21 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	if (func_34(iLocal_21))
	{
		if (func_31(&iLocal_21, 0x00000001, 0x00000008))
		{
			return 0x00000000;
		}
		func_35(&iLocal_21, 0x00000000, iLocal_22, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (Global_E543)
	{
		Global_E543 = 0x00000000;
		switch (func_57(Global_E544))
		{
			case 0x00000000:
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				func_2(0x0000001D, 0x00000001);
				break;
			
			case 0x00000004:
			case 0x00000005:
			case 0x00000006:
			case 0x00000007:
				func_2(0x0000001E, 0x00000001);
				break;
			}
	}
	iVar0 = 0x00000000;
	bVar4 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000000))
	{
		iVar2 = unk_0xB98DB26FBF676FA1(0x00000000, iVar0);
		switch (iVar2)
		{
			case 0x0000008E:
				unk_0x218F818E64020C17(0x00000000, iVar0, &iVar1, 0x00000001);
				func_78(iVar1);
				bVar4 = 0x00000001;
				if (unk_0x8CD06866876216F2())
				{
					if (unk_0xC844350D5D58C99A(iVar1))
					{
						if (!unk_0xAFE0D3608EDA7039(iVar1))
						{
							bVar4 = 0x00000000;
						}
					}
					else
					{
						bVar4 = 0x00000000;
					}
				}
				if (bVar4)
				{
					if (unk_0xC844350D5D58C99A(iVar1))
					{
						if (unk_0xEC560E589DF8370E(iVar1))
						{
							func_74(iVar1);
						}
						else if (unk_0xE2F1E99DD161A861(iVar1))
						{
							if (func_73(unk_0x96A5FE5834B81CE7(iVar1)))
							{
								func_2(0x00000003, 0x00000001);
							}
							func_72(unk_0x134B62B726CEC8E6(iVar1));
						}
						else if (unk_0x6BC06B42AD71CD8B(iVar1))
						{
							switch (unk_0x134B62B726CEC8E6(iVar1))
							{
								case 0xB9435467:
								case 0x4836EEC4:
								case joaat("prop_news_disp_02a_s"):
								case 0x51F60242:
								case 0x2AF3343D:
								case 0x36AF4BB5:
								case 0x0F917D7A:
								case 0xD2EE0584:
								case 0xAD903AC1:
								case 0xCE0001C8:
								case 0xAD2E315F:
								case 0x4D99B4BE:
								case 0x4CB9FC22:
								case 0xAC2EB945:
									func_2(0x00000044, 0x00000001);
									break;
								
								case 0xC6CE113D:
								case 0x51400793:
								case 0x445E59CA:
								case 0x561CFD47:
								case 0xCCA7BC7B:
									func_2(0x00000080, 0x00000001);
									break;
								}
							}
						}
				}
				break;
			
			case 0x0000008D:
				unk_0x218F818E64020C17(0x00000000, iVar0, &iVar1, 0x00000001);
				func_78(iVar1);
				bVar4 = 0x00000001;
				if (unk_0x8CD06866876216F2())
				{
					if (unk_0xC844350D5D58C99A(iVar1))
					{
						if (!unk_0xAFE0D3608EDA7039(iVar1))
						{
							bVar4 = 0x00000000;
						}
					}
					else
					{
						bVar4 = 0x00000000;
					}
				}
				if (bVar4)
				{
					if (unk_0xC844350D5D58C99A(iVar1))
					{
						if (unk_0xEC560E589DF8370E(iVar1))
						{
							iVar3 = unk_0x940C1429253D3B1B(iVar1);
							if (func_48() == 0x00000000 && iVar3 != unk_0x16F2683693E537C9())
							{
								if (unk_0x437347B10A200C4B(iVar1, 0x00000000) || IntToFloat(unk_0x7F6DC62EA9922664(iVar1)) < (0.5f * IntToFloat(unk_0x65BC0B7172CA52DD(iVar3))))
								{
									if (unk_0xEC560E589DF8370E(iVar1) && unk_0x232B70EDA3C8983B(unk_0x940C1429253D3B1B(iVar1)))
									{
										if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
										{
											func_70(0x00000003);
										}
									}
								}
							}
							func_2(0x0000006F, 0x00000001);
							func_2(0x0000007C, 0x00000001);
							if (unk_0x4E861BC5B1EDA7BD(iVar1))
							{
								func_2(0x00000082, 0x00000001);
							}
						}
						else if (unk_0xE2F1E99DD161A861(iVar1))
						{
							func_69(unk_0x134B62B726CEC8E6(iVar1));
							func_2(0x0000006F, 0x00000001);
						}
						else if (unk_0x6BC06B42AD71CD8B(iVar1))
						{
							func_2(0x0000006F, 0x00000001);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_69(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0x00000000:
			func_2(0x0000002F, 0x00000001);
			break;
		
		case 0x00000001:
			func_2(0x0000002B, 0x00000001);
			break;
		
		case 0x00000002:
			func_2(0x00000029, 0x00000001);
			break;
		
		case 0x00000003:
			func_2(0x0000002E, 0x00000001);
			break;
		
		case 0x00000004:
			func_2(0x00000028, 0x00000001);
			break;
		
		case 0x00000005:
			func_2(0x0000002A, 0x00000001);
			break;
		
		case 0x00000006:
			func_2(0x0000002C, 0x00000001);
			break;
		
		case 0x00000007:
			func_2(0x0000002D, 0x00000001);
			break;
	}
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_71(&Global_173EC, 0x00000001);
			break;
		
		case 0x00000001:
			func_71(&Global_173EE, 0x00000003);
			break;
		
		case 0x00000002:
			func_71(&Global_173F2, 0x00000001);
			break;
		
		case 0x00000003:
			func_71(&Global_173F4, 0x00000001);
			break;
		
		case 0x00000004:
			func_71(&Global_173F6, 0x00000001);
			break;
		
		case 0x00000005:
			func_71(&Global_173F8, 0x00000001);
			break;
		
		case 0x00000006:
			func_71(&Global_173FA, 0x00000001);
			break;
		
		case 0x00000007:
			func_71(&Global_173FC, 0x00000002);
			break;
		
		case 0x00000008:
			func_71(&Global_173FF, 0x00000001);
			break;
		
		case 0x00000009:
			func_71(&Global_17401, 0x00000001);
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 0x00000001))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0x00000000:
			func_2(0x0000000B, 0x00000001);
			break;
		
		case 0x00000001:
			func_2(0x00000006, 0x00000001);
			break;
		
		case 0x00000002:
			func_2(0x00000001, 0x00000001);
			break;
		
		case 0x00000003:
			func_2(0x0000000A, 0x00000001);
			break;
		
		case 0x00000004:
			func_2(0x00000000, 0x00000001);
			break;
		
		case 0x00000005:
			func_2(0x00000002, 0x00000001);
			break;
		
		case 0x00000006:
			func_2(0x00000008, 0x00000001);
			break;
		
		case 0x00000007:
			func_2(0x00000009, 0x00000001);
			break;
	}
	if (iParam0 == joaat("taxi"))
	{
		func_2(0x00000064, 0x00000001);
	}
	func_2(0x0000006F, 0x00000001);
}

int func_73(int iParam0)
{
	if (unk_0x67303E186EA6C9A0(iParam0) >= 0x00000000)
	{
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000000) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000003) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000004) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000005) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000006) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000007) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000B) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000C) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000D) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000E) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000F) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000010) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000017) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000018) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000001) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000002) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000008) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000009) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (unk_0xB97ED2A4B56844DE(iParam0, 0x00000012))
		{
			return 0x00000001;
		}
		if (unk_0xB97ED2A4B56844DE(iParam0, 0x00000016))
		{
			return 0x00000001;
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x940C1429253D3B1B(iParam0);
	if (unk_0xE147126C9AD09A60(iParam0))
	{
		iVar1 = unk_0xA390E7DD86EDBEA0(iVar0);
		if (unk_0xE2F1E99DD161A861(iVar1))
		{
			iVar2 = unk_0x134B62B726CEC8E6(iVar1);
			func_77(iVar2, unk_0x0A5D59F37DC7E974(iVar0));
		}
		else
		{
			iVar3 = unk_0xF71162D1C14C71E7(iVar0);
			iVar4 = unk_0x134B62B726CEC8E6(iParam0);
			func_76(iVar3, unk_0x0A5D59F37DC7E974(iVar0), iVar4);
		}
	}
	if (unk_0x4E861BC5B1EDA7BD(iParam0))
	{
		func_2(0x00000081, 0x00000001);
	}
	if (!func_75(iParam0))
	{
		return;
	}
	func_2(0x0000006F, 0x00000001);
	iVar5 = unk_0x1C0640BA9A7327B3();
	iVar6 = (iVar5 - iLocal_23);
	iLocal_23 = iVar5;
	if (iVar6 > 0x000007D0)
	{
		iLocal_24 = 0x00000000;
	}
	else
	{
		iLocal_24++;
		if (iLocal_24 == 0x00000003)
		{
			func_2(0x0000007F, 0x00000001);
		}
	}
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAFE0D3608EDA7039(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA390E7DD86EDBEA0(unk_0x940C1429253D3B1B(iParam0));
	if (func_3(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())) == iVar0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_55(iParam0);
	if (iVar0 == 0x00000000)
	{
		func_2(0x0000006C, 0x00000001);
	}
	switch (iParam1)
	{
		case 0x00000004:
		case 0x00000005:
			switch (iVar0)
			{
				case 0x00000000:
					func_2(0x0000003F, 0x00000001);
					break;
				
				case 0x00000001:
					func_2(0x00000040, 0x00000001);
					break;
				
				case 0x00000002:
					func_2(0x00000041, 0x00000001);
					break;
			}
			break;
		
		case 0x00000016:
			switch (iVar0)
			{
				case 0x00000000:
					func_2(0x00000039, 0x00000001);
					break;
				
				case 0x00000001:
					func_2(0x0000003A, 0x00000001);
					break;
				
				case 0x00000002:
					func_2(0x0000003B, 0x00000001);
					break;
			}
			break;
		
		case 0x0000001B:
		case 0x00000006:
			switch (iVar0)
			{
				case 0x00000000:
					func_2(0x00000036, 0x00000001);
					break;
				
				case 0x00000001:
					func_2(0x00000037, 0x00000001);
					break;
				
				case 0x00000002:
					func_2(0x00000038, 0x00000001);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("s_f_y_hooker_01"):
			func_2(0x00000079, 0x00000001);
			break;
		
		case joaat("a_f_m_bodybuild_01"):
		case joaat("a_m_m_beach_02"):
		case joaat("a_m_y_musclbeac_02"):
		case joaat("a_m_y_runner_01"):
		case joaat("a_m_y_roadcyc_01"):
		case joaat("a_m_y_skater_01"):
		case joaat("a_m_y_skater_02"):
		case joaat("a_m_y_sunbathe_01"):
		case joaat("a_m_y_surfer_01"):
		case joaat("a_m_y_yoga_01"):
		case joaat("s_m_y_baywatch_01"):
		case joaat("s_m_y_marine_02"):
			func_2(0x00000045, 0x00000001);
			break;
		
		case joaat("s_m_y_dealer_01"):
			func_2(0x0000007D, 0x00000001);
			break;
	}
}

void func_77(int iParam0, int iParam1)
{
	func_2(0x00000030, 0x00000001);
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(0x00000004, 0x00000001);
			break;
		
		case joaat("tanker"):
			func_2(0x00000005, 0x00000001);
			func_2(0x00000007, 0x00000001);
			func_2(0x0000005B, 0x00000001);
			break;
		
		case joaat("packer"):
			func_2(0x00000007, 0x00000001);
			break;
		
		case joaat("phantom"):
			func_2(0x00000005, 0x00000001);
			break;
	}
	switch (func_57(iParam0))
	{
		case 0x00000000:
			func_2(0x0000006D, 0x00000001);
			break;
		
		case 0x00000001:
			func_2(0x00000068, 0x00000001);
			switch (iParam1)
			{
				case 0x00000004:
				case 0x00000005:
					func_2(0x0000003C, 0x00000001);
					break;
			}
			break;
		
		case 0x00000002:
			func_2(0x00000066, 0x00000001);
			break;
		
		case 0x00000003:
			func_2(0x0000006B, 0x00000001);
			break;
		
		case 0x00000004:
			func_2(0x00000065, 0x00000001);
			break;
		
		case 0x00000005:
			func_2(0x00000067, 0x00000001);
			break;
		
		case 0x00000006:
			func_2(0x00000069, 0x00000001);
			switch (iParam1)
			{
				case 0x00000004:
				case 0x00000005:
					func_2(0x0000003D, 0x00000001);
					break;
			}
			break;
		
		case 0x00000007:
			func_2(0x0000006A, 0x00000001);
			switch (iParam1)
			{
				case 0x00000004:
				case 0x00000005:
					func_2(0x0000003E, 0x00000001);
					break;
			}
			break;
	}
}

void func_78(int iParam0)
{
	unk_0xC844350D5D58C99A(iParam0);
	unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

bool func_79(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		iLocal_29 = 0x00000000;
		return;
	}
	if (func_82(unk_0xA30EC016B12C03E4(), 0xFFFFFFFF))
	{
		iLocal_29 = 0x00000000;
		return;
	}
	if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000);
		if (iLocal_29 != iVar0)
		{
			vLocal_27 = { vLocal_28 };
			iLocal_29 = iVar0;
		}
		if (iVar0 == 0x00000000)
		{
			return;
		}
		vLocal_27 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
		if (iLocal_29 == 0x00000000)
		{
			vLocal_28 = { vLocal_27 };
			iLocal_29 = iVar0;
			return;
		}
		iVar1 = unk_0x134B62B726CEC8E6(iVar0);
		if (func_81(iVar1, unk_0x0EB28750412C3A5A(vLocal_27, vLocal_28, 0x00000000)))
		{
			vLocal_28 = { vLocal_27 };
		}
	}
}

int func_81(int iParam0, float fParam1)
{
	if (fParam1 < 10f)
	{
		return 0x00000000;
	}
	switch (func_57(iParam0))
	{
		case 0x00000000:
			func_2(0x0000001C, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000001:
			func_2(0x00000018, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000002:
			func_2(0x00000015, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000003:
			func_2(0x0000001B, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000004:
			func_2(0x00000014, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000005:
			func_2(0x00000016, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000006:
			func_2(0x00000019, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 0x00000007:
			func_2(0x0000001A, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(0x00000017, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (func_48())
			{
				case 0x00000000:
					func_2(0x0000008D, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 0x00000001:
					func_2(0x0000008E, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 0x00000002:
					func_2(0x0000008F, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 0x00000001;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83(iParam0, 0x00000001, 0x00000001))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_83(int iParam0, bool bParam1, bool bParam2)
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

void func_84()
{
	func_85(0x00000000);
	func_85(0x00000001);
	func_85(0x00000002);
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000050)
	{
		if (Global_D233[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_D233[iVar0 /*36*/].f_23;
			if (iVar1 > 0xFFFFFFFF)
			{
				iVar2 = func_86(iParam0, iVar0);
				if (Global_D233[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0x00000000;
				}
				unk_0xCDC520E5E48E63D9(Global_DD74[iVar1 /*7*/].f_3[iParam0], iVar2, 0x00000001);
			}
		}
		iVar0++;
	}
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		switch (iParam0)
		{
			case 0x00000000:
				if (Global_1B416.f_504F[iVar0] == iParam1)
				{
					if (Global_1B416.f_504F.f_16[iVar0] > 0x00000000)
					{
						return Global_1B416.f_504F.f_16[iVar0];
					}
				}
				break;
			
			case 0x00000001:
				if (Global_1B416.f_504F.f_21[iVar0] == iParam1)
				{
					if (Global_1B416.f_504F.f_37[iVar0] > 0x00000000)
					{
						return Global_1B416.f_504F.f_37[iVar0];
					}
				}
				break;
			
			case 0x00000002:
				if (Global_1B416.f_504F.f_42[iVar0] == iParam1)
				{
					if (Global_1B416.f_504F.f_58[iVar0] > 0x00000000)
					{
						return Global_1B416.f_504F.f_58[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_87()
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_E65D;
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_E660[iVar0 /*14*/].f_D > 0x00000000)
		{
			Global_E660[iVar0 /*14*/].f_D = (Global_E660[iVar0 /*14*/].f_D - 0x00000001);
		}
		else if (func_89(iVar0))
		{
			func_88(&(Global_E660[iVar0 /*14*/]), 0xFFFFFFFF);
			Global_E660[iVar0 /*14*/].f_D = 0x0000EA60;
		}
		SYSTEM::WAIT(0x00000000);
		func_68();
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = *uParam0;
	if (iParam1 != 0xFFFFFFFF)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (Global_EFAE[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_A = (uParam0->f_A + 0.05f);
			return 0x00000000;
		}
		iVar1++;
	}
	iVar1 = 0x00000000;
	fVar2 = 0f;
	iVar3 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (Global_EFAE[iVar0 /*34*/][iVar1 /*11*/].f_A > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_EFAE[iVar0 /*34*/][iVar1 /*11*/].f_A;
		}
		iVar1++;
	}
	if (iVar3 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (uParam0->f_A <= Global_EFAE[iVar0 /*34*/][iVar3 /*11*/].f_A)
	{
		uParam0->f_A = (uParam0->f_A + 1f);
		Global_EFAE[iVar0 /*34*/][iVar3 /*11*/].f_A = uParam0->f_A;
		Global_EFAE[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_EFAE[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_EFAE[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_EFAE[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_89(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	iVar0 = Global_E660[iParam0 /*14*/].f_C;
	fVar1 = Global_D233[iVar0 /*36*/].f_9;
	iVar2 = Global_D233[iVar0 /*36*/].f_D;
	while (iVar2 > 0x0000000F)
	{
		iVar2 = (iVar2 - 0x00000010);
	}
	iVar3 = (iVar2 - 0x0000000A);
	while (iVar3 < 0x00000000)
	{
		iVar3 = (0x00000010 + iVar3);
	}
	fVar4 = Global_D233[iVar0 /*36*/].f_E[iVar3];
	Global_D233[iVar0 /*36*/].f_E[Global_D233[iVar0 /*36*/].f_D] = func_6(iVar0);
	iVar5 = 0x00000000;
	iVar6 = 0x00000000;
	iVar7 = 0x00000000;
	iVar8 = iVar3 + 1;
	if (iVar8 == 0x00000010)
	{
		iVar8 = 0x00000000;
	}
	iVar9 = 0x00000000;
	iVar10 = iVar8;
	iVar11 = 0x00000000;
	iVar12 = 0x00000000;
	iVar9 = 0x00000000;
	while (iVar9 < 0x00000008)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 0x00000010)
		{
			iVar11 = 0x00000000;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 0x00000010)
		{
			iVar12 = 0x00000000;
		}
		if (Global_D233[iVar0 /*36*/].f_E[iVar10] < Global_D233[iVar0 /*36*/].f_E[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_D233[iVar0 /*36*/].f_E[iVar11] - Global_D233[iVar0 /*36*/].f_E[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_D233[iVar0 /*36*/].f_E[iVar10] - Global_D233[iVar0 /*36*/].f_E[iVar11]));
		}
		if (Global_D233[iVar0 /*36*/].f_E[iVar10] < Global_D233[iVar0 /*36*/].f_E[iVar11] && Global_D233[iVar0 /*36*/].f_E[iVar12] < Global_D233[iVar0 /*36*/].f_E[iVar11])
		{
			iVar5++;
		}
		if (Global_D233[iVar0 /*36*/].f_E[iVar10] > Global_D233[iVar0 /*36*/].f_E[iVar11] && Global_D233[iVar0 /*36*/].f_E[iVar12] > Global_D233[iVar0 /*36*/].f_E[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 0x00000010)
		{
			iVar10 = 0x00000000;
		}
		iVar9++;
	}
	if (iVar6 < 0x00000000)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0x00000000)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_E660[iParam0 /*14*/].f_B)
	{
		case 0x00000000:
			if (iVar6 < 0x00000006)
			{
				return 0x00000000;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x00000001:
			if (iVar7 < 0x00000006)
			{
				return 0x00000000;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x00000002:
			if (iVar5 < 0x00000007)
			{
				return 0x00000000;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_90(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_91()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000050)
	{
		if (iVar0 < 0x0000002A)
		{
			if (!Global_D233[iVar1 /*36*/].f_8)
			{
				if (Global_1B416.f_504F.f_67[iVar0] > 0f)
				{
					Global_D233[iVar1 /*36*/].f_9 = Global_1B416.f_504F.f_67[iVar0];
				}
				if (Global_1B416.f_504F.f_92[iVar0] > 0f)
				{
					Global_D233[iVar1 /*36*/].f_1F = Global_1B416.f_504F.f_92[iVar0];
				}
				if (Global_1B416.f_504F.f_BD[iVar0] > 0f)
				{
					Global_D233[iVar1 /*36*/].f_20 = Global_1B416.f_504F.f_BD[iVar0];
				}
				iVar0++;
			}
			if ((Global_D233[iVar1 /*36*/].f_20 > 0f && Global_D233[iVar1 /*36*/].f_1F > 0f) && Global_D233[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_D233[iVar1 /*36*/].f_9;
				if (fVar2 > Global_D233[iVar1 /*36*/].f_1F)
				{
					Global_D233[iVar1 /*36*/].f_1F = fVar2;
				}
				if (fVar2 < Global_D233[iVar1 /*36*/].f_20)
				{
					Global_D233[iVar1 /*36*/].f_20 = fVar2;
				}
				iVar3 = 0x00000000;
				fVar4 = (Global_D233[iVar1 /*36*/].f_1F - Global_D233[iVar1 /*36*/].f_20);
				fVar5 = 0f;
				fVar10 = 2.147484E+09f;
				fVar11 = -2.147484E+09f;
				iVar3 = 0x0000000F;
				while (iVar3 >= 0x00000000)
				{
					fVar6 = ((fVar4 * unk_0x79833B02DBD2A244(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 0x0000000F)
					{
						fVar12 = ((Global_D233[iVar1 /*36*/].f_1F - Global_D233[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_D233[iVar1 /*36*/].f_9 - Global_D233[iVar1 /*36*/].f_20) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = unk_0x79833B02DBD2A244((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_D233[iVar1 /*36*/].f_E[iVar3] = Global_D233[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_D233[iVar1 /*36*/].f_1F - Global_D233[iVar1 /*36*/].f_E[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_D233[iVar1 /*36*/].f_E[iVar3 + 1] - Global_D233[iVar1 /*36*/].f_20) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = unk_0x79833B02DBD2A244((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_D233[iVar1 /*36*/].f_E[iVar3] = (Global_D233[iVar1 /*36*/].f_E[iVar3 + 1] + fVar7);
					}
					fVar10 = func_93(fVar10, Global_D233[iVar1 /*36*/].f_E[iVar3]);
					fVar11 = func_92(fVar11, Global_D233[iVar1 /*36*/].f_E[iVar3]);
					fVar5 = (fVar5 + Global_D233[iVar1 /*36*/].f_E[iVar3]);
					iVar3 = (iVar3 + 0xFFFFFFFF);
				}
				Global_D233[iVar1 /*36*/].f_20 = fVar10;
				Global_D233[iVar1 /*36*/].f_1F = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_D233[iVar1 /*36*/].f_21 = (Global_D233[iVar1 /*36*/].f_9 - fVar5);
				Global_D233[iVar1 /*36*/].f_22 = ((Global_D233[iVar1 /*36*/].f_21 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0x00000000;
					while (iVar3 <= 0x0000000F)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_D233[iVar1 /*36*/].f_E[iVar3] = (Global_D233[iVar1 /*36*/].f_E[iVar3] * (unk_0x79833B02DBD2A244(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 0x0000000F)
						{
							Global_D233[iVar1 /*36*/].f_E[iVar3] = (Global_D233[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_D233[iVar1 /*36*/].f_E[iVar3]);
						Global_D233[iVar1 /*36*/].f_20 = func_93(Global_D233[iVar1 /*36*/].f_20, Global_D233[iVar1 /*36*/].f_E[iVar3]);
						Global_D233[iVar1 /*36*/].f_1F = func_92(Global_D233[iVar1 /*36*/].f_1F, Global_D233[iVar1 /*36*/].f_E[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_D233[iVar1 /*36*/].f_21 = (Global_D233[iVar1 /*36*/].f_9 - fVar5);
					Global_D233[iVar1 /*36*/].f_22 = ((Global_D233[iVar1 /*36*/].f_21 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

float func_92(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_94()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!Global_1B416.f_504F.f_65)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000050)
		{
			if (!Global_D233[iVar0 /*36*/].f_8)
			{
				Global_D233[iVar0 /*36*/].f_9 = unk_0x79833B02DBD2A244(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 <= 0x0000000F)
		{
			func_28(0x00000001);
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000050)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_D233[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_D233[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_D233[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_D233[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_D233[iVar0 /*36*/].f_9 = (Global_D233[iVar0 /*36*/].f_9 * unk_0x79833B02DBD2A244(fVar2, fVar3));
				Global_D233[iVar0 /*36*/].f_9 = func_93(func_92(unk_0x755FF954DAE327E1(Global_D233[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_1B416.f_504F.f_65 = 0x00000001;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_E65D = 0x00000000;
	Global_E65F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			StringCopy(&(Global_EFAE[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT", 16);
			StringCopy(&(Global_EFAE[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT", 16);
			iVar1++;
		}
		iVar0++;
	}
	func_96(0x00000037, "ECL_P_SR_H", "ECL_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000037, "ECL_P_SF_H", "ECL_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000037, "ECL_P_RF_H", "ECL_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000033, "BGR_P_SR_H", "BGR_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000033, "BGR_P_SF_H", "BGR_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000034, "CLK_P_SR_H", "CLK_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000034, "CLK_P_SF_H", "CLK_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000034, "CLK_P_RF_H", "CLK_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000030, "BEN_P_SR_H", "BEN_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000030, "BEN_P_SF_H", "BEN_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000030, "BEN_P_RF_H", "BEN_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x0000000D, "FLC_P_SR_H", "FLC_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x0000000D, "FLC_P_SF_H", "FLC_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x0000000D, "FLC_P_RF_H", "FLC_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000040, "PRO_P_SR_H", "PRO_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000040, "PRO_P_SF_H", "PRO_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000040, "PRO_P_RF_H", "PRO_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000046, "UNI_P_SR_H", "UNI_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000046, "UNI_P_SF_H", "UNI_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000046, "UNI_P_RF_H", "UNI_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x0000003C, "KRP_P_SR_H", "KRP_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x0000003C, "KRP_P_SF_H", "KRP_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x0000003C, "KRP_P_RF_H", "KRP_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000038, "FUS_P_SR_H", "FUS_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000038, "FUS_P_SF_H", "FUS_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000038, "FUS_P_RF_H", "FUS_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x0000003A, "GOP_P_SR_H", "GOP_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x0000003A, "GOP_P_SF_H", "GOP_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x0000003A, "GOP_P_RF_H", "GOP_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000035, "BAN_P_SR_H", "BAN_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000035, "BAN_P_SF_H", "BAN_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000035, "BAN_P_RF_H", "BAN_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x0000003E, "MAX_P_SR_H", "MAX_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x0000003E, "MAX_P_SF_H", "MAX_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x0000003E, "MAX_P_RF_H", "MAX_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x00000039, "GAS_P_SR_H", "GAS_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x00000039, "GAS_P_SF_H", "GAS_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x00000039, "GAS_P_RF_H", "GAS_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x0000003B, "GRU_P_SR_H", "GRU_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x0000003B, "GRU_P_SF_H", "GRU_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x0000003B, "GRU_P_RF_H", "GRU_P_RF_C", 0x00000002, 0x00000000);
	func_96(0x0000002C, "PMP_P_SR_H", "PMP_P_SR_C", 0x00000000, 0x00000000);
	func_96(0x0000002C, "PMP_P_SF_H", "PMP_P_SF_C", 0x00000001, 0x00000000);
	func_96(0x0000002C, "PMP_P_RF_H", "PMP_P_RF_C", 0x00000002, 0x00000000);
	iVar2 = unk_0x09AC81E49EA267F7(0x00000000, (Global_E65D - 0x00000001));
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			Global_EFAE[iVar0 /*34*/][iVar1 /*11*/].f_A = 5000f;
			while (!func_88(&(Global_E660[iVar2 /*14*/]), iVar0))
			{
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, (Global_E65D - 0x00000001));
				SYSTEM::WAIT(0x000007D0);
			}
			Global_E660[iVar2 /*14*/].f_A = 0f;
			iVar2 = unk_0x09AC81E49EA267F7(0x00000000, (Global_E65D - 0x00000001));
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (Global_E65D == 0x00000096)
	{
		return;
	}
	Global_E660[Global_E65D /*14*/].f_B = iParam3;
	Global_E660[Global_E65D /*14*/] = iParam4;
	StringCopy(&(Global_E660[Global_E65D /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_E660[Global_E65D /*14*/].f_5), sParam2, 16);
	Global_E660[Global_E65D /*14*/].f_9 = Global_E65F;
	Global_E660[Global_E65D /*14*/].f_C = iParam0;
	Global_E65D++;
	Global_E65F++;
}

void func_97()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000050)
	{
		Global_D233[iVar0 /*36*/].f_21 = 0f;
		Global_D233[iVar0 /*36*/].f_D = 0x00000000;
		Global_D233[iVar0 /*36*/].f_C = 0x00000000;
		Global_D233[iVar0 /*36*/].f_1F = 0f;
		Global_D233[iVar0 /*36*/].f_20 = 3.402823E+38f;
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000010)
		{
			Global_D233[iVar0 /*36*/].f_E[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000CC)
	{
		Global_DFA6[iVar0 /*7*/].f_2 = 0x00000000;
		iVar0++;
	}
	StringCopy(&(Global_D233[0x00000000 /*36*/]), "BSS_BSTR_0", 16);
	StringCopy(&(Global_D233[0x00000000 /*36*/].f_4), "BSS_BSTR_1", 16);
	Global_D233[0x00000000 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000000 /*36*/].f_23 = 0x00000000;
	StringCopy(&(Global_D233[0x00000001 /*36*/]), "BSS_BSTR_2", 16);
	StringCopy(&(Global_D233[0x00000001 /*36*/].f_4), "BSS_BSTR_3", 16);
	Global_D233[0x00000001 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000001 /*36*/].f_23 = 0x00000001;
	StringCopy(&(Global_D233[0x00000002 /*36*/]), "BSS_BSTR_4", 16);
	StringCopy(&(Global_D233[0x00000002 /*36*/].f_4), "BSS_BSTR_5", 16);
	Global_D233[0x00000002 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000002 /*36*/].f_23 = 0x00000000;
	StringCopy(&(Global_D233[0x00000003 /*36*/]), "BSS_BSTR_6", 16);
	StringCopy(&(Global_D233[0x00000003 /*36*/].f_4), "BSS_BSTR_7", 16);
	Global_D233[0x00000003 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000003 /*36*/].f_23 = 0x00000002;
	StringCopy(&(Global_D233[0x00000004 /*36*/]), "BSS_BSTR_8", 16);
	StringCopy(&(Global_D233[0x00000004 /*36*/].f_4), "BSS_BSTR_9", 16);
	Global_D233[0x00000004 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000004 /*36*/].f_23 = 0x00000003;
	StringCopy(&(Global_D233[0x00000005 /*36*/]), "BSS_BSTR_10", 16);
	StringCopy(&(Global_D233[0x00000005 /*36*/].f_4), "BSS_BSTR_11", 16);
	Global_D233[0x00000005 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000005 /*36*/].f_23 = 0x00000004;
	StringCopy(&(Global_D233[0x00000006 /*36*/]), "BSS_BSTR_12", 16);
	StringCopy(&(Global_D233[0x00000006 /*36*/].f_4), "BSS_BSTR_13", 16);
	Global_D233[0x00000006 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000006 /*36*/].f_23 = 0x00000005;
	StringCopy(&(Global_D233[0x00000007 /*36*/]), "BSS_BSTR_14", 16);
	StringCopy(&(Global_D233[0x00000007 /*36*/].f_4), "BSS_BSTR_15", 16);
	Global_D233[0x00000007 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000007 /*36*/].f_23 = 0x00000006;
	StringCopy(&(Global_D233[0x00000008 /*36*/]), "BSS_BSTR_16", 16);
	StringCopy(&(Global_D233[0x00000008 /*36*/].f_4), "BSS_BSTR_16", 16);
	Global_D233[0x00000008 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000008 /*36*/].f_23 = 0x00000007;
	StringCopy(&(Global_D233[0x00000009 /*36*/]), "BSS_BSTR_17", 16);
	StringCopy(&(Global_D233[0x00000009 /*36*/].f_4), "BSS_BSTR_18", 16);
	Global_D233[0x00000009 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000009 /*36*/].f_23 = 0x00000008;
	StringCopy(&(Global_D233[0x0000000A /*36*/]), "BSS_BSTR_19", 16);
	StringCopy(&(Global_D233[0x0000000A /*36*/].f_4), "BSS_BSTR_20", 16);
	Global_D233[0x0000000A /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000000A /*36*/].f_23 = 0x00000009;
	StringCopy(&(Global_D233[0x0000000B /*36*/]), "BSS_BSTR_21", 16);
	StringCopy(&(Global_D233[0x0000000B /*36*/].f_4), "BSS_BSTR_22", 16);
	Global_D233[0x0000000B /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000000B /*36*/].f_23 = 0x0000000A;
	StringCopy(&(Global_D233[0x0000000C /*36*/]), "BSS_BSTR_23", 16);
	StringCopy(&(Global_D233[0x0000000C /*36*/].f_4), "BSS_BSTR_24", 16);
	Global_D233[0x0000000C /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000000C /*36*/].f_23 = 0x0000000B;
	StringCopy(&(Global_D233[0x0000000D /*36*/]), "BSS_BSTR_25", 16);
	StringCopy(&(Global_D233[0x0000000D /*36*/].f_4), "BSS_BSTR_26", 16);
	Global_D233[0x0000000D /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000000D /*36*/].f_23 = 0x00000001;
	StringCopy(&(Global_D233[0x0000000E /*36*/]), "BSS_BSTR_27", 16);
	StringCopy(&(Global_D233[0x0000000E /*36*/].f_4), "BSS_BSTR_28", 16);
	Global_D233[0x0000000E /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000000E /*36*/].f_23 = 0x00000002;
	StringCopy(&(Global_D233[0x0000000F /*36*/]), "BSS_BSTR_29", 16);
	StringCopy(&(Global_D233[0x0000000F /*36*/].f_4), "BSS_BSTR_30", 16);
	Global_D233[0x0000000F /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000000F /*36*/].f_23 = 0x0000000C;
	StringCopy(&(Global_D233[0x00000010 /*36*/]), "BSS_BSTR_31", 16);
	StringCopy(&(Global_D233[0x00000010 /*36*/].f_4), "BSS_BSTR_32", 16);
	Global_D233[0x00000010 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000010 /*36*/].f_23 = 0x00000003;
	StringCopy(&(Global_D233[0x00000011 /*36*/]), "BSS_BSTR_33", 16);
	StringCopy(&(Global_D233[0x00000011 /*36*/].f_4), "BSS_BSTR_34", 16);
	Global_D233[0x00000011 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000011 /*36*/].f_23 = 0x00000004;
	StringCopy(&(Global_D233[0x00000012 /*36*/]), "BSS_BSTR_35", 16);
	StringCopy(&(Global_D233[0x00000012 /*36*/].f_4), "BSS_BSTR_36", 16);
	Global_D233[0x00000012 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000012 /*36*/].f_23 = 0x00000005;
	StringCopy(&(Global_D233[0x00000013 /*36*/]), "BSS_BSTR_37", 16);
	StringCopy(&(Global_D233[0x00000013 /*36*/].f_4), "BSS_BSTR_38", 16);
	Global_D233[0x00000013 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000013 /*36*/].f_23 = 0x00000006;
	StringCopy(&(Global_D233[0x00000014 /*36*/]), "BSS_BSTR_39", 16);
	StringCopy(&(Global_D233[0x00000014 /*36*/].f_4), "BSS_BSTR_40", 16);
	Global_D233[0x00000014 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000014 /*36*/].f_23 = 0x0000000D;
	StringCopy(&(Global_D233[0x00000015 /*36*/]), "BSS_BSTR_41", 16);
	StringCopy(&(Global_D233[0x00000015 /*36*/].f_4), "BSS_BSTR_42", 16);
	Global_D233[0x00000015 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000015 /*36*/].f_23 = 0x0000000E;
	StringCopy(&(Global_D233[0x00000016 /*36*/]), "BSS_BSTR_43", 16);
	StringCopy(&(Global_D233[0x00000016 /*36*/].f_4), "BSS_BSTR_44", 16);
	Global_D233[0x00000016 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000016 /*36*/].f_23 = 0x0000000F;
	StringCopy(&(Global_D233[0x00000017 /*36*/]), "BSS_BSTR_45", 16);
	StringCopy(&(Global_D233[0x00000017 /*36*/].f_4), "BSS_BSTR_46", 16);
	Global_D233[0x00000017 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000017 /*36*/].f_23 = 0x00000010;
	StringCopy(&(Global_D233[0x00000018 /*36*/]), "BSS_BSTR_47", 16);
	StringCopy(&(Global_D233[0x00000018 /*36*/].f_4), "BSS_BSTR_48", 16);
	Global_D233[0x00000018 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000018 /*36*/].f_23 = 0x00000007;
	StringCopy(&(Global_D233[0x00000019 /*36*/]), "BSS_BSTR_49", 16);
	StringCopy(&(Global_D233[0x00000019 /*36*/].f_4), "BSS_BSTR_50", 16);
	Global_D233[0x00000019 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000019 /*36*/].f_23 = 0x00000011;
	StringCopy(&(Global_D233[0x0000001A /*36*/]), "BSS_BSTR_51", 16);
	StringCopy(&(Global_D233[0x0000001A /*36*/].f_4), "BSS_BSTR_52", 16);
	Global_D233[0x0000001A /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000001A /*36*/].f_23 = 0x00000008;
	StringCopy(&(Global_D233[0x0000001B /*36*/]), "BSS_BSTR_53", 16);
	StringCopy(&(Global_D233[0x0000001B /*36*/].f_4), "BSS_BSTR_54", 16);
	Global_D233[0x0000001B /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000001B /*36*/].f_23 = 0x00000012;
	StringCopy(&(Global_D233[0x0000001C /*36*/]), "BSS_BSTR_55", 16);
	StringCopy(&(Global_D233[0x0000001C /*36*/].f_4), "BSS_BSTR_56", 16);
	Global_D233[0x0000001C /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000001C /*36*/].f_23 = 0x00000013;
	StringCopy(&(Global_D233[0x0000001D /*36*/]), "BSS_BSTR_57", 16);
	StringCopy(&(Global_D233[0x0000001D /*36*/].f_4), "BSS_BSTR_58", 16);
	Global_D233[0x0000001D /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000001D /*36*/].f_23 = 0x00000009;
	StringCopy(&(Global_D233[0x0000001E /*36*/]), "BSS_BSTR_59", 16);
	StringCopy(&(Global_D233[0x0000001E /*36*/].f_4), "BSS_BSTR_60", 16);
	Global_D233[0x0000001E /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000001E /*36*/].f_23 = 0x00000014;
	StringCopy(&(Global_D233[0x0000001F /*36*/]), "BSS_BSTR_61", 16);
	StringCopy(&(Global_D233[0x0000001F /*36*/].f_4), "BSS_BSTR_62", 16);
	Global_D233[0x0000001F /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000001F /*36*/].f_23 = 0x00000015;
	StringCopy(&(Global_D233[0x00000020 /*36*/]), "BSS_BSTR_63", 16);
	StringCopy(&(Global_D233[0x00000020 /*36*/].f_4), "BSS_BSTR_64", 16);
	Global_D233[0x00000020 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000020 /*36*/].f_23 = 0x00000016;
	StringCopy(&(Global_D233[0x00000021 /*36*/]), "BSS_BSTR_65", 16);
	StringCopy(&(Global_D233[0x00000021 /*36*/].f_4), "BSS_BSTR_66", 16);
	Global_D233[0x00000021 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000021 /*36*/].f_23 = 0x00000017;
	StringCopy(&(Global_D233[0x00000022 /*36*/]), "BSS_BSTR_67", 16);
	StringCopy(&(Global_D233[0x00000022 /*36*/].f_4), "BSS_BSTR_68", 16);
	Global_D233[0x00000022 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000022 /*36*/].f_23 = 0x00000018;
	StringCopy(&(Global_D233[0x00000023 /*36*/]), "BSS_BSTR_69", 16);
	StringCopy(&(Global_D233[0x00000023 /*36*/].f_4), "BSS_BSTR_70", 16);
	Global_D233[0x00000023 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000023 /*36*/].f_23 = 0x00000019;
	StringCopy(&(Global_D233[0x00000024 /*36*/]), "BSS_BSTR_71", 16);
	StringCopy(&(Global_D233[0x00000024 /*36*/].f_4), "BSS_BSTR_72", 16);
	Global_D233[0x00000024 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000024 /*36*/].f_23 = 0x0000001A;
	StringCopy(&(Global_D233[0x00000025 /*36*/]), "BSS_BSTR_73", 16);
	StringCopy(&(Global_D233[0x00000025 /*36*/].f_4), "BSS_BSTR_74", 16);
	Global_D233[0x00000025 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000025 /*36*/].f_23 = 0x0000001B;
	StringCopy(&(Global_D233[0x00000026 /*36*/]), "BSS_BSTR_75", 16);
	StringCopy(&(Global_D233[0x00000026 /*36*/].f_4), "BSS_BSTR_76", 16);
	Global_D233[0x00000026 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000026 /*36*/].f_23 = 0x0000001C;
	StringCopy(&(Global_D233[0x00000027 /*36*/]), "BSS_BSTR_77", 16);
	StringCopy(&(Global_D233[0x00000027 /*36*/].f_4), "BSS_BSTR_78", 16);
	Global_D233[0x00000027 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000027 /*36*/].f_23 = 0x0000001D;
	StringCopy(&(Global_D233[0x00000028 /*36*/]), "BSS_BSTR_79", 16);
	StringCopy(&(Global_D233[0x00000028 /*36*/].f_4), "BSS_BSTR_80", 16);
	Global_D233[0x00000028 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000028 /*36*/].f_23 = 0x0000000A;
	StringCopy(&(Global_D233[0x00000029 /*36*/]), "BSS_BSTR_81", 16);
	StringCopy(&(Global_D233[0x00000029 /*36*/].f_4), "BSS_BSTR_82", 16);
	Global_D233[0x00000029 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000029 /*36*/].f_23 = 0x0000001E;
	StringCopy(&(Global_D233[0x0000002A /*36*/]), "BSS_BSTR_83", 16);
	StringCopy(&(Global_D233[0x0000002A /*36*/].f_4), "BSS_BSTR_84", 16);
	Global_D233[0x0000002A /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000002A /*36*/].f_23 = 0x0000001F;
	StringCopy(&(Global_D233[0x0000002B /*36*/]), "BSS_BSTR_85", 16);
	StringCopy(&(Global_D233[0x0000002B /*36*/].f_4), "BSS_BSTR_86", 16);
	Global_D233[0x0000002B /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000002B /*36*/].f_23 = 0x00000020;
	StringCopy(&(Global_D233[0x0000002C /*36*/]), "BSS_BSTR_87", 16);
	StringCopy(&(Global_D233[0x0000002C /*36*/].f_4), "BSS_BSTR_88", 16);
	Global_D233[0x0000002C /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000002C /*36*/].f_23 = 0x00000021;
	StringCopy(&(Global_D233[0x0000002D /*36*/]), "BSS_BSTR_89", 16);
	StringCopy(&(Global_D233[0x0000002D /*36*/].f_4), "BSS_BSTR_90", 16);
	Global_D233[0x0000002D /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000002D /*36*/].f_23 = 0x00000022;
	StringCopy(&(Global_D233[0x0000002E /*36*/]), "BSS_BSTR_91", 16);
	StringCopy(&(Global_D233[0x0000002E /*36*/].f_4), "BSS_BSTR_92", 16);
	Global_D233[0x0000002E /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000002E /*36*/].f_23 = 0x00000023;
	StringCopy(&(Global_D233[0x0000002F /*36*/]), "BSS_BSTR_93", 16);
	StringCopy(&(Global_D233[0x0000002F /*36*/].f_4), "BSS_BSTR_94", 16);
	Global_D233[0x0000002F /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000002F /*36*/].f_23 = 0x0000000B;
	StringCopy(&(Global_D233[0x00000030 /*36*/]), "BSS_BSTR_95", 16);
	StringCopy(&(Global_D233[0x00000030 /*36*/].f_4), "BSS_BSTR_96", 16);
	Global_D233[0x00000030 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000030 /*36*/].f_23 = 0x0000000C;
	StringCopy(&(Global_D233[0x00000031 /*36*/]), "BSS_BSTR_97", 16);
	StringCopy(&(Global_D233[0x00000031 /*36*/].f_4), "BSS_BSTR_98", 16);
	Global_D233[0x00000031 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000031 /*36*/].f_23 = 0x0000000D;
	StringCopy(&(Global_D233[0x00000032 /*36*/]), "BSS_BSTR_99", 16);
	StringCopy(&(Global_D233[0x00000032 /*36*/].f_4), "BSS_BSTR_100", 16);
	Global_D233[0x00000032 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000032 /*36*/].f_23 = 0x0000000E;
	StringCopy(&(Global_D233[0x00000033 /*36*/]), "BSS_BSTR_101", 16);
	StringCopy(&(Global_D233[0x00000033 /*36*/].f_4), "BSS_BSTR_102", 16);
	Global_D233[0x00000033 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000033 /*36*/].f_23 = 0x0000000F;
	StringCopy(&(Global_D233[0x00000034 /*36*/]), "BSS_BSTR_103", 16);
	StringCopy(&(Global_D233[0x00000034 /*36*/].f_4), "BSS_BSTR_104", 16);
	Global_D233[0x00000034 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000034 /*36*/].f_23 = 0x00000010;
	StringCopy(&(Global_D233[0x00000035 /*36*/]), "BSS_BSTR_105", 16);
	StringCopy(&(Global_D233[0x00000035 /*36*/].f_4), "BSS_BSTR_106", 16);
	Global_D233[0x00000035 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000035 /*36*/].f_23 = 0x00000011;
	StringCopy(&(Global_D233[0x00000036 /*36*/]), "BSS_BSTR_107", 16);
	StringCopy(&(Global_D233[0x00000036 /*36*/].f_4), "BSS_BSTR_108", 16);
	Global_D233[0x00000036 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000036 /*36*/].f_23 = 0x00000012;
	StringCopy(&(Global_D233[0x00000037 /*36*/]), "BSS_BSTR_109", 16);
	StringCopy(&(Global_D233[0x00000037 /*36*/].f_4), "BSS_BSTR_110", 16);
	Global_D233[0x00000037 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000037 /*36*/].f_23 = 0x00000013;
	StringCopy(&(Global_D233[0x00000038 /*36*/]), "BSS_BSTR_111", 16);
	StringCopy(&(Global_D233[0x00000038 /*36*/].f_4), "BSS_BSTR_112", 16);
	Global_D233[0x00000038 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000038 /*36*/].f_23 = 0x00000014;
	StringCopy(&(Global_D233[0x00000039 /*36*/]), "BSS_BSTR_113", 16);
	StringCopy(&(Global_D233[0x00000039 /*36*/].f_4), "BSS_BSTR_114", 16);
	Global_D233[0x00000039 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000039 /*36*/].f_23 = 0x00000015;
	StringCopy(&(Global_D233[0x0000003A /*36*/]), "BSS_BSTR_115", 16);
	StringCopy(&(Global_D233[0x0000003A /*36*/].f_4), "BSS_BSTR_116", 16);
	Global_D233[0x0000003A /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000003A /*36*/].f_23 = 0x00000016;
	StringCopy(&(Global_D233[0x0000003B /*36*/]), "BSS_BSTR_117", 16);
	StringCopy(&(Global_D233[0x0000003B /*36*/].f_4), "BSS_BSTR_118", 16);
	Global_D233[0x0000003B /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000003B /*36*/].f_23 = 0x00000017;
	StringCopy(&(Global_D233[0x0000003C /*36*/]), "BSS_BSTR_119", 16);
	StringCopy(&(Global_D233[0x0000003C /*36*/].f_4), "BSS_BSTR_120", 16);
	Global_D233[0x0000003C /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000003C /*36*/].f_23 = 0x00000018;
	StringCopy(&(Global_D233[0x0000003D /*36*/]), "BSS_BSTR_121", 16);
	StringCopy(&(Global_D233[0x0000003D /*36*/].f_4), "BSS_BSTR_122", 16);
	Global_D233[0x0000003D /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000003D /*36*/].f_23 = 0x00000019;
	StringCopy(&(Global_D233[0x0000003E /*36*/]), "BSS_BSTR_123", 16);
	StringCopy(&(Global_D233[0x0000003E /*36*/].f_4), "BSS_BSTR_124", 16);
	Global_D233[0x0000003E /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000003E /*36*/].f_23 = 0x0000001A;
	StringCopy(&(Global_D233[0x0000003F /*36*/]), "BSS_BSTR_125", 16);
	StringCopy(&(Global_D233[0x0000003F /*36*/].f_4), "BSS_BSTR_126", 16);
	Global_D233[0x0000003F /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000003F /*36*/].f_23 = 0x0000001B;
	StringCopy(&(Global_D233[0x00000040 /*36*/]), "BSS_BSTR_127", 16);
	StringCopy(&(Global_D233[0x00000040 /*36*/].f_4), "BSS_BSTR_128", 16);
	Global_D233[0x00000040 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000040 /*36*/].f_23 = 0x0000001C;
	StringCopy(&(Global_D233[0x00000041 /*36*/]), "BSS_BSTR_129", 16);
	StringCopy(&(Global_D233[0x00000041 /*36*/].f_4), "BSS_BSTR_130", 16);
	Global_D233[0x00000041 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000041 /*36*/].f_23 = 0x0000001D;
	StringCopy(&(Global_D233[0x00000042 /*36*/]), "BSS_BSTR_131", 16);
	StringCopy(&(Global_D233[0x00000042 /*36*/].f_4), "BSS_BSTR_132", 16);
	Global_D233[0x00000042 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000042 /*36*/].f_23 = 0x0000001E;
	StringCopy(&(Global_D233[0x00000043 /*36*/]), "BSS_BSTR_133", 16);
	StringCopy(&(Global_D233[0x00000043 /*36*/].f_4), "BSS_BSTR_134", 16);
	Global_D233[0x00000043 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000043 /*36*/].f_23 = 0x0000001F;
	StringCopy(&(Global_D233[0x00000044 /*36*/]), "BSS_BSTR_135", 16);
	StringCopy(&(Global_D233[0x00000044 /*36*/].f_4), "BSS_BSTR_136", 16);
	Global_D233[0x00000044 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000044 /*36*/].f_23 = 0x00000020;
	StringCopy(&(Global_D233[0x00000045 /*36*/]), "BSS_BSTR_137", 16);
	StringCopy(&(Global_D233[0x00000045 /*36*/].f_4), "BSS_BSTR_138", 16);
	Global_D233[0x00000045 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000045 /*36*/].f_23 = 0x00000021;
	StringCopy(&(Global_D233[0x00000046 /*36*/]), "BSS_BSTR_139", 16);
	StringCopy(&(Global_D233[0x00000046 /*36*/].f_4), "BSS_BSTR_140", 16);
	Global_D233[0x00000046 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000046 /*36*/].f_23 = 0x00000022;
	StringCopy(&(Global_D233[0x00000047 /*36*/]), "BSS_BSTR_141", 16);
	StringCopy(&(Global_D233[0x00000047 /*36*/].f_4), "BSS_BSTR_142", 16);
	Global_D233[0x00000047 /*36*/].f_8 = 0x00000001;
	Global_D233[0x00000047 /*36*/].f_23 = 0x00000024;
	StringCopy(&(Global_D233[0x00000048 /*36*/]), "BSS_BSTR_143", 16);
	StringCopy(&(Global_D233[0x00000048 /*36*/].f_4), "BSS_BSTR_144", 16);
	Global_D233[0x00000048 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000048 /*36*/].f_23 = 0x00000023;
	StringCopy(&(Global_D233[0x00000049 /*36*/]), "BSS_BSTR_145", 16);
	StringCopy(&(Global_D233[0x00000049 /*36*/].f_4), "BSS_BSTR_146", 16);
	Global_D233[0x00000049 /*36*/].f_8 = 0x00000000;
	Global_D233[0x00000049 /*36*/].f_23 = 0x00000024;
	StringCopy(&(Global_D233[0x0000004A /*36*/]), "BSS_BSTR_147", 16);
	StringCopy(&(Global_D233[0x0000004A /*36*/].f_4), "BSS_BSTR_148", 16);
	Global_D233[0x0000004A /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000004A /*36*/].f_23 = 0x00000025;
	StringCopy(&(Global_D233[0x0000004B /*36*/]), "BSS_BSTR_149", 16);
	StringCopy(&(Global_D233[0x0000004B /*36*/].f_4), "BSS_BSTR_150", 16);
	Global_D233[0x0000004B /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000004B /*36*/].f_23 = 0x00000026;
	StringCopy(&(Global_D233[0x0000004C /*36*/]), "BSS_BSTR_151", 16);
	StringCopy(&(Global_D233[0x0000004C /*36*/].f_4), "BSS_BSTR_152", 16);
	Global_D233[0x0000004C /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000004C /*36*/].f_23 = 0x00000025;
	StringCopy(&(Global_D233[0x0000004D /*36*/]), "BSS_BSTR_153", 16);
	StringCopy(&(Global_D233[0x0000004D /*36*/].f_4), "BSS_BSTR_154", 16);
	Global_D233[0x0000004D /*36*/].f_8 = 0x00000001;
	Global_D233[0x0000004D /*36*/].f_23 = 0x00000026;
	StringCopy(&(Global_D233[0x0000004E /*36*/]), "BSS_BSTR_155", 16);
	StringCopy(&(Global_D233[0x0000004E /*36*/].f_4), "BSS_BSTR_156", 16);
	Global_D233[0x0000004E /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000004E /*36*/].f_23 = 0x00000027;
	StringCopy(&(Global_D233[0x0000004F /*36*/]), "BSS_BSTR_157", 16);
	StringCopy(&(Global_D233[0x0000004F /*36*/].f_4), "BSS_BSTR_158", 16);
	Global_D233[0x0000004F /*36*/].f_8 = 0x00000000;
	Global_D233[0x0000004F /*36*/].f_23 = 0x00000028;
	Global_DE86[0x00000000 /*7*/].f_2 = 1f;
	Global_DE86[0x00000000 /*7*/].f_1 = 1f;
	Global_DE86[0x00000000 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000000 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000000 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000000 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000001 /*7*/].f_2 = 1f;
	Global_DE86[0x00000001 /*7*/].f_1 = 1f;
	Global_DE86[0x00000001 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000001 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000001 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000001 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000002 /*7*/].f_2 = 1f;
	Global_DE86[0x00000002 /*7*/].f_1 = 1f;
	Global_DE86[0x00000002 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000002 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000002 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000002 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000003 /*7*/].f_2 = 1f;
	Global_DE86[0x00000003 /*7*/].f_1 = 1f;
	Global_DE86[0x00000003 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000003 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000003 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000003 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000004 /*7*/].f_2 = 1f;
	Global_DE86[0x00000004 /*7*/].f_1 = 1f;
	Global_DE86[0x00000004 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000004 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000004 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000004 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000005 /*7*/].f_2 = 1f;
	Global_DE86[0x00000005 /*7*/].f_1 = 1f;
	Global_DE86[0x00000005 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000005 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000005 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000005 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000006 /*7*/].f_2 = 1f;
	Global_DE86[0x00000006 /*7*/].f_1 = 1f;
	Global_DE86[0x00000006 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000006 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000006 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000006 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000007 /*7*/].f_2 = 1f;
	Global_DE86[0x00000007 /*7*/].f_1 = 1f;
	Global_DE86[0x00000007 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000007 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000007 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000007 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000008 /*7*/].f_2 = 1f;
	Global_DE86[0x00000008 /*7*/].f_1 = 1f;
	Global_DE86[0x00000008 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000008 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000008 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000008 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000009 /*7*/].f_2 = 1f;
	Global_DE86[0x00000009 /*7*/].f_1 = 1f;
	Global_DE86[0x00000009 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000009 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000009 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000009 /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000000A /*7*/].f_2 = 1f;
	Global_DE86[0x0000000A /*7*/].f_1 = 1f;
	Global_DE86[0x0000000A /*7*/].f_3 = 1000f;
	Global_DE86[0x0000000A /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000000A /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000000A /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000000B /*7*/].f_2 = 1f;
	Global_DE86[0x0000000B /*7*/].f_1 = 1f;
	Global_DE86[0x0000000B /*7*/].f_3 = 1000f;
	Global_DE86[0x0000000B /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000000B /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000000B /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000000C /*7*/].f_2 = 1f;
	Global_DE86[0x0000000C /*7*/].f_1 = 1f;
	Global_DE86[0x0000000C /*7*/].f_3 = 1000f;
	Global_DE86[0x0000000C /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000000C /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000000C /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000000D /*7*/].f_2 = 1f;
	Global_DE86[0x0000000D /*7*/].f_1 = 1f;
	Global_DE86[0x0000000D /*7*/].f_3 = 1000f;
	Global_DE86[0x0000000D /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000000D /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000000D /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000000E /*7*/].f_2 = 1f;
	Global_DE86[0x0000000E /*7*/].f_1 = 1f;
	Global_DE86[0x0000000E /*7*/].f_3 = 1000f;
	Global_DE86[0x0000000E /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000000E /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000000E /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000000F /*7*/].f_2 = 1f;
	Global_DE86[0x0000000F /*7*/].f_1 = 1f;
	Global_DE86[0x0000000F /*7*/].f_3 = 1000f;
	Global_DE86[0x0000000F /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000000F /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000000F /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000010 /*7*/].f_2 = 1f;
	Global_DE86[0x00000010 /*7*/].f_1 = 1f;
	Global_DE86[0x00000010 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000010 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000010 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000010 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000011 /*7*/].f_2 = 1f;
	Global_DE86[0x00000011 /*7*/].f_1 = 1f;
	Global_DE86[0x00000011 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000011 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000011 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000011 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000012 /*7*/].f_2 = 1f;
	Global_DE86[0x00000012 /*7*/].f_1 = 1f;
	Global_DE86[0x00000012 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000012 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000012 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000012 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000013 /*7*/].f_2 = 1f;
	Global_DE86[0x00000013 /*7*/].f_1 = 1f;
	Global_DE86[0x00000013 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000013 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000013 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000013 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000014 /*7*/].f_2 = 1f;
	Global_DE86[0x00000014 /*7*/].f_1 = 1f;
	Global_DE86[0x00000014 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000014 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000014 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000014 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000015 /*7*/].f_2 = 1f;
	Global_DE86[0x00000015 /*7*/].f_1 = 1f;
	Global_DE86[0x00000015 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000015 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000015 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000015 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000016 /*7*/].f_2 = 1f;
	Global_DE86[0x00000016 /*7*/].f_1 = 1f;
	Global_DE86[0x00000016 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000016 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000016 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000016 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000017 /*7*/].f_2 = 1f;
	Global_DE86[0x00000017 /*7*/].f_1 = 1f;
	Global_DE86[0x00000017 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000017 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000017 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000017 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000018 /*7*/].f_2 = 1f;
	Global_DE86[0x00000018 /*7*/].f_1 = 1f;
	Global_DE86[0x00000018 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000018 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000018 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000018 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000019 /*7*/].f_2 = 1f;
	Global_DE86[0x00000019 /*7*/].f_1 = 1f;
	Global_DE86[0x00000019 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000019 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000019 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000019 /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000001A /*7*/].f_2 = 1f;
	Global_DE86[0x0000001A /*7*/].f_1 = 1f;
	Global_DE86[0x0000001A /*7*/].f_3 = 1000f;
	Global_DE86[0x0000001A /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000001A /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000001A /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000001B /*7*/].f_2 = 1f;
	Global_DE86[0x0000001B /*7*/].f_1 = 1f;
	Global_DE86[0x0000001B /*7*/].f_3 = 1000f;
	Global_DE86[0x0000001B /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000001B /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000001B /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000001C /*7*/].f_2 = 1f;
	Global_DE86[0x0000001C /*7*/].f_1 = 1f;
	Global_DE86[0x0000001C /*7*/].f_3 = 1000f;
	Global_DE86[0x0000001C /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000001C /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000001C /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000001D /*7*/].f_2 = 1f;
	Global_DE86[0x0000001D /*7*/].f_1 = 1f;
	Global_DE86[0x0000001D /*7*/].f_3 = 1000f;
	Global_DE86[0x0000001D /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000001D /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000001D /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000001E /*7*/].f_2 = 1f;
	Global_DE86[0x0000001E /*7*/].f_1 = 1f;
	Global_DE86[0x0000001E /*7*/].f_3 = 1000f;
	Global_DE86[0x0000001E /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000001E /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000001E /*7*/].f_6 = 0.1f;
	Global_DE86[0x0000001F /*7*/].f_2 = 1f;
	Global_DE86[0x0000001F /*7*/].f_1 = 1f;
	Global_DE86[0x0000001F /*7*/].f_3 = 1000f;
	Global_DE86[0x0000001F /*7*/].f_4 = 3.5f;
	Global_DE86[0x0000001F /*7*/].f_5 = 3.5f;
	Global_DE86[0x0000001F /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000020 /*7*/].f_2 = 1f;
	Global_DE86[0x00000020 /*7*/].f_1 = 1f;
	Global_DE86[0x00000020 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000020 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000020 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000020 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000021 /*7*/].f_2 = 1f;
	Global_DE86[0x00000021 /*7*/].f_1 = 1f;
	Global_DE86[0x00000021 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000021 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000021 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000021 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000022 /*7*/].f_2 = 1f;
	Global_DE86[0x00000022 /*7*/].f_1 = 1f;
	Global_DE86[0x00000022 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000022 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000022 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000022 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000023 /*7*/].f_2 = 1f;
	Global_DE86[0x00000023 /*7*/].f_1 = 1f;
	Global_DE86[0x00000023 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000023 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000023 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000023 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000024 /*7*/].f_2 = 1f;
	Global_DE86[0x00000024 /*7*/].f_1 = 1f;
	Global_DE86[0x00000024 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000024 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000024 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000024 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000025 /*7*/].f_2 = 1f;
	Global_DE86[0x00000025 /*7*/].f_1 = 1f;
	Global_DE86[0x00000025 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000025 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000025 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000025 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000026 /*7*/].f_2 = 1f;
	Global_DE86[0x00000026 /*7*/].f_1 = 1f;
	Global_DE86[0x00000026 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000026 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000026 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000026 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000027 /*7*/].f_2 = 1f;
	Global_DE86[0x00000027 /*7*/].f_1 = 1f;
	Global_DE86[0x00000027 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000027 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000027 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000027 /*7*/].f_6 = 0.1f;
	Global_DE86[0x00000028 /*7*/].f_2 = 1f;
	Global_DE86[0x00000028 /*7*/].f_1 = 1f;
	Global_DE86[0x00000028 /*7*/].f_3 = 1000f;
	Global_DE86[0x00000028 /*7*/].f_4 = 3.5f;
	Global_DE86[0x00000028 /*7*/].f_5 = 3.5f;
	Global_DE86[0x00000028 /*7*/].f_6 = 0.1f;
	Global_DFA6[0x00000000 /*7*/].f_1 = joaat("sm_brvecdesbfa");
	Global_DFA6[0x00000000 /*7*/] = 0x00000001;
	Global_DFA6[0x00000001 /*7*/].f_1 = joaat("sm_brvecdesbru");
	Global_DFA6[0x00000001 /*7*/] = 0x00000001;
	Global_DFA6[0x00000003 /*7*/].f_1 = joaat("sm_brvecdeslsc");
	Global_DFA6[0x00000003 /*7*/] = 0x00000001;
	Global_DFA6[0x00000004 /*7*/].f_1 = joaat("sm_brvecdeslst");
	Global_DFA6[0x00000004 /*7*/] = 0x00000001;
	Global_DFA6[0x00000005 /*7*/].f_1 = joaat("sm_brvecdesltd");
	Global_DFA6[0x00000005 /*7*/] = 0x00000001;
	Global_DFA6[0x00000006 /*7*/].f_1 = joaat("sm_brvecdesmai");
	Global_DFA6[0x00000006 /*7*/] = 0x00000001;
	Global_DFA6[0x00000007 /*7*/].f_1 = joaat("sm_brvecdesron");
	Global_DFA6[0x00000007 /*7*/] = 0x00000001;
	Global_DFA6[0x00000008 /*7*/].f_1 = joaat("sm_brvecdessht");
	Global_DFA6[0x00000008 /*7*/] = 0x00000001;
	Global_DFA6[0x00000009 /*7*/].f_1 = joaat("sm_brvecdesuma");
	Global_DFA6[0x00000009 /*7*/] = 0x00000001;
	Global_DFA6[0x0000000A /*7*/].f_1 = joaat("sm_brvecdesvap");
	Global_DFA6[0x0000000A /*7*/] = 0x00000001;
	Global_DFA6[0x0000000B /*7*/].f_1 = joaat("sm_brvecdeshvy");
	Global_DFA6[0x0000000B /*7*/] = 0x00000001;
	Global_DFA6[0x0000000C /*7*/].f_1 = joaat("sm_vecbuybfa");
	Global_DFA6[0x0000000C /*7*/] = 0x00000001;
	Global_DFA6[0x0000000D /*7*/].f_1 = joaat("sm_vecbuybru");
	Global_DFA6[0x0000000D /*7*/] = 0x00000001;
	Global_DFA6[0x0000000F /*7*/].f_1 = joaat("sm_vecbuymai");
	Global_DFA6[0x0000000F /*7*/] = 0x00000001;
	Global_DFA6[0x00000010 /*7*/].f_1 = joaat("sm_vecbuysht");
	Global_DFA6[0x00000010 /*7*/] = 0x00000001;
	Global_DFA6[0x00000011 /*7*/].f_1 = joaat("sm_vecbuyuma");
	Global_DFA6[0x00000011 /*7*/] = 0x00000001;
	Global_DFA6[0x00000012 /*7*/].f_1 = joaat("sm_vecbuyvap");
	Global_DFA6[0x00000012 /*7*/] = 0x00000001;
	Global_DFA6[0x00000013 /*7*/].f_1 = joaat("sm_vecbuyhvy");
	Global_DFA6[0x00000013 /*7*/] = 0x00000001;
	Global_DFA6[0x00000014 /*7*/].f_1 = joaat("sm_disdrivbfa");
	Global_DFA6[0x00000014 /*7*/] = 0x00000001;
	Global_DFA6[0x00000015 /*7*/].f_1 = joaat("sm_disdrivbru");
	Global_DFA6[0x00000015 /*7*/] = 0x00000001;
	Global_DFA6[0x00000017 /*7*/].f_1 = joaat("sm_disdrivlst");
	Global_DFA6[0x00000017 /*7*/] = 0x00000001;
	Global_DFA6[0x00000018 /*7*/].f_1 = joaat("sm_disdrivmai");
	Global_DFA6[0x00000018 /*7*/] = 0x00000001;
	Global_DFA6[0x00000019 /*7*/].f_1 = joaat("sm_disdrivsht");
	Global_DFA6[0x00000019 /*7*/] = 0x00000001;
	Global_DFA6[0x0000001A /*7*/].f_1 = joaat("sm_disdrivuma");
	Global_DFA6[0x0000001A /*7*/] = 0x00000001;
	Global_DFA6[0x0000001B /*7*/].f_1 = joaat("sm_disdrivvap");
	Global_DFA6[0x0000001B /*7*/] = 0x00000001;
	Global_DFA6[0x0000001C /*7*/].f_1 = joaat("sm_disdrivhvy");
	Global_DFA6[0x0000001C /*7*/] = 0x00000001;
	Global_DFA6[0x0000001E /*7*/].f_1 = joaat("sm_vecmodlsc");
	Global_DFA6[0x0000001E /*7*/] = 0x00000001;
	Global_DFA6[0x0000001F /*7*/].f_1 = joaat("sm_vecstolbfa");
	Global_DFA6[0x0000001F /*7*/] = 0x00000001;
	Global_DFA6[0x00000020 /*7*/].f_1 = joaat("sm_vecstolbru");
	Global_DFA6[0x00000020 /*7*/] = 0x00000001;
	Global_DFA6[0x00000022 /*7*/].f_1 = joaat("sm_vecstollst");
	Global_DFA6[0x00000022 /*7*/] = 0x00000001;
	Global_DFA6[0x00000023 /*7*/].f_1 = joaat("sm_vecstolmai");
	Global_DFA6[0x00000023 /*7*/] = 0x00000001;
	Global_DFA6[0x00000024 /*7*/].f_1 = joaat("sm_vecstolsht");
	Global_DFA6[0x00000024 /*7*/] = 0x00000001;
	Global_DFA6[0x00000025 /*7*/].f_1 = joaat("sm_vecstoluma");
	Global_DFA6[0x00000025 /*7*/] = 0x00000001;
	Global_DFA6[0x00000026 /*7*/].f_1 = joaat("sm_vecstolvap");
	Global_DFA6[0x00000026 /*7*/] = 0x00000001;
	Global_DFA6[0x00000027 /*7*/].f_1 = joaat("sm_vecstolhvy");
	Global_DFA6[0x00000027 /*7*/] = 0x00000001;
	Global_DFA6[0x00000028 /*7*/].f_1 = joaat("sm_vecdmgbfa");
	Global_DFA6[0x00000028 /*7*/] = 0x00000001;
	Global_DFA6[0x00000029 /*7*/].f_1 = joaat("sm_vecdmgbru");
	Global_DFA6[0x00000029 /*7*/] = 0x00000001;
	Global_DFA6[0x0000002B /*7*/].f_1 = joaat("sm_vecdmgmai");
	Global_DFA6[0x0000002B /*7*/] = 0x00000001;
	Global_DFA6[0x0000002C /*7*/].f_1 = joaat("sm_vecdmgsht");
	Global_DFA6[0x0000002C /*7*/] = 0x00000001;
	Global_DFA6[0x0000002D /*7*/].f_1 = joaat("sm_vecdmguma");
	Global_DFA6[0x0000002D /*7*/] = 0x00000001;
	Global_DFA6[0x0000002E /*7*/].f_1 = joaat("sm_vecdmgvap");
	Global_DFA6[0x0000002E /*7*/] = 0x00000001;
	Global_DFA6[0x0000002F /*7*/].f_1 = joaat("sm_vecdmghvy");
	Global_DFA6[0x0000002F /*7*/] = 0x00000001;
	Global_DFA6[0x00000030 /*7*/].f_1 = joaat("sm_vecpedkil");
	Global_DFA6[0x00000030 /*7*/] = 0x00000001;
	Global_DFA6[0x00000031 /*7*/].f_1 = joaat("sm_wepbuyshr");
	Global_DFA6[0x00000031 /*7*/] = 0x00000001;
	Global_DFA6[0x00000032 /*7*/].f_1 = joaat("sm_wepbuyhal");
	Global_DFA6[0x00000032 /*7*/] = 0x00000001;
	Global_DFA6[0x00000033 /*7*/].f_1 = joaat("sm_weptakevom");
	Global_DFA6[0x00000033 /*7*/] = 0x00000001;
	Global_DFA6[0x00000034 /*7*/].f_1 = joaat("sm_weptakeshr");
	Global_DFA6[0x00000034 /*7*/] = 0x00000001;
	Global_DFA6[0x00000035 /*7*/].f_1 = joaat("sm_weptakehal");
	Global_DFA6[0x00000035 /*7*/] = 0x00000001;
	Global_DFA6[0x00000036 /*7*/].f_1 = joaat("sm_kilcopvom");
	Global_DFA6[0x00000036 /*7*/] = 0x00000001;
	Global_DFA6[0x00000037 /*7*/].f_1 = joaat("sm_kilcopshr");
	Global_DFA6[0x00000037 /*7*/] = 0x00000001;
	Global_DFA6[0x00000038 /*7*/].f_1 = joaat("sm_kilcophal");
	Global_DFA6[0x00000038 /*7*/] = 0x00000001;
	Global_DFA6[0x00000039 /*7*/].f_1 = joaat("sm_kilcrimvom");
	Global_DFA6[0x00000039 /*7*/] = 0x00000001;
	Global_DFA6[0x0000003A /*7*/].f_1 = joaat("sm_kilcrimshr");
	Global_DFA6[0x0000003A /*7*/] = 0x00000001;
	Global_DFA6[0x0000003B /*7*/].f_1 = joaat("sm_kilcrimhal");
	Global_DFA6[0x0000003B /*7*/] = 0x00000001;
	Global_DFA6[0x0000003C /*7*/].f_1 = joaat("sm_kilcivmai");
	Global_DFA6[0x0000003C /*7*/] = 0x00000001;
	Global_DFA6[0x0000003D /*7*/].f_1 = joaat("sm_kilcivsht");
	Global_DFA6[0x0000003D /*7*/] = 0x00000001;
	Global_DFA6[0x0000003E /*7*/].f_1 = joaat("sm_kilcivuma");
	Global_DFA6[0x0000003E /*7*/] = 0x00000001;
	Global_DFA6[0x0000003F /*7*/].f_1 = joaat("sm_kilcivvom");
	Global_DFA6[0x0000003F /*7*/] = 0x00000001;
	Global_DFA6[0x00000040 /*7*/].f_1 = joaat("sm_kilcivshr");
	Global_DFA6[0x00000040 /*7*/] = 0x00000001;
	Global_DFA6[0x00000041 /*7*/].f_1 = joaat("sm_kilcivhal");
	Global_DFA6[0x00000041 /*7*/] = 0x00000001;
	Global_DFA6[0x00000043 /*7*/].f_1 = joaat("sm_venusespu");
	Global_DFA6[0x00000043 /*7*/] = 0x00000001;
	Global_DFA6[0x00000044 /*7*/].f_1 = joaat("sm_newdam");
	Global_DFA6[0x00000044 /*7*/] = 0x00000001;
	Global_DFA6[0x00000045 /*7*/].f_1 = joaat("sm_hpkil");
	Global_DFA6[0x00000045 /*7*/] = 0x00000001;
	Global_DFA6[0x00000046 /*7*/].f_1 = joaat("sm_pubclub");
	Global_DFA6[0x00000046 /*7*/] = 0x00000001;
	Global_DFA6[0x00000047 /*7*/].f_1 = joaat("sm_tdrnk");
	Global_DFA6[0x00000047 /*7*/] = 0x00000001;
	Global_DFA6[0x00000048 /*7*/].f_1 = joaat("sm_frnpub");
	Global_DFA6[0x00000048 /*7*/] = 0x00000001;
	Global_DFA6[0x00000049 /*7*/].f_1 = joaat("sm_drnkcrm");
	Global_DFA6[0x00000049 /*7*/] = 0x00000001;
	Global_DFA6[0x0000004A /*7*/].f_1 = joaat("sm_ramcom");
	Global_DFA6[0x0000004A /*7*/] = 0x00000001;
	Global_DFA6[0x0000004C /*7*/].f_1 = joaat("sm_radcnt");
	Global_DFA6[0x0000004C /*7*/] = 0x00000001;
	Global_DFA6[0x0000004D /*7*/].f_1 = joaat("sm_radwzl");
	Global_DFA6[0x0000004D /*7*/] = 0x00000001;
	Global_DFA6[0x0000004E /*7*/].f_1 = joaat("sm_radzit");
	Global_DFA6[0x0000004E /*7*/] = 0x00000001;
	Global_DFA6[0x00000051 /*7*/].f_1 = joaat("sm_zititcnt");
	Global_DFA6[0x00000051 /*7*/] = 0x00000001;
	Global_DFA6[0x00000052 /*7*/].f_1 = joaat("sm_zititwzl");
	Global_DFA6[0x00000052 /*7*/] = 0x00000001;
	Global_DFA6[0x00000053 /*7*/].f_1 = joaat("sm_zititzit");
	Global_DFA6[0x00000053 /*7*/] = 0x00000001;
	Global_DFA6[0x00000054 /*7*/].f_1 = joaat("sm_radchacnt");
	Global_DFA6[0x00000054 /*7*/] = 0x00000001;
	Global_DFA6[0x00000055 /*7*/].f_1 = joaat("sm_radchawzl");
	Global_DFA6[0x00000055 /*7*/] = 0x00000001;
	Global_DFA6[0x00000058 /*7*/].f_1 = joaat("sm_para");
	Global_DFA6[0x00000058 /*7*/] = 0x00000001;
	Global_DFA6[0x00000059 /*7*/].f_1 = joaat("sm_tkfire");
	Global_DFA6[0x00000059 /*7*/] = 0x00000001;
	Global_DFA6[0x0000005A /*7*/].f_1 = joaat("sm_fibai");
	Global_DFA6[0x0000005A /*7*/] = 0x00000001;
	Global_DFA6[0x0000005B /*7*/].f_1 = joaat("sm_tandes");
	Global_DFA6[0x0000005B /*7*/] = 0x00000001;
	Global_DFA6[0x0000005C /*7*/].f_1 = joaat("sm_garep");
	Global_DFA6[0x0000005C /*7*/] = 0x00000001;
	Global_DFA6[0x0000005D /*7*/].f_1 = joaat("sm_gamonsp");
	Global_DFA6[0x0000005D /*7*/] = 0x00000001;
	Global_DFA6[0x0000005E /*7*/].f_1 = joaat("sm_monb");
	Global_DFA6[0x0000005E /*7*/] = 0x00000001;
	Global_DFA6[0x00000062 /*7*/].f_1 = joaat("sm_monupshk");
	Global_DFA6[0x00000062 /*7*/] = 0x00000001;
	Global_DFA6[0x00000064 /*7*/].f_1 = joaat("sm_taxdest");
	Global_DFA6[0x00000064 /*7*/] = 0x00000001;
	Global_DFA6[0x00000065 /*7*/].f_1 = joaat("sm_kilwbfa");
	Global_DFA6[0x00000065 /*7*/] = 0x00000001;
	Global_DFA6[0x00000066 /*7*/].f_1 = joaat("sm_kilwbru");
	Global_DFA6[0x00000066 /*7*/] = 0x00000001;
	Global_DFA6[0x00000068 /*7*/].f_1 = joaat("sm_kilwmai");
	Global_DFA6[0x00000068 /*7*/] = 0x00000001;
	Global_DFA6[0x00000069 /*7*/].f_1 = joaat("sm_kilwsht");
	Global_DFA6[0x00000069 /*7*/] = 0x00000001;
	Global_DFA6[0x0000006A /*7*/].f_1 = joaat("sm_kilwuma");
	Global_DFA6[0x0000006A /*7*/] = 0x00000001;
	Global_DFA6[0x0000006B /*7*/].f_1 = joaat("sm_kilwvap");
	Global_DFA6[0x0000006B /*7*/] = 0x00000001;
	Global_DFA6[0x0000006C /*7*/].f_1 = joaat("sm_kilwvom");
	Global_DFA6[0x0000006C /*7*/] = 0x00000001;
	Global_DFA6[0x0000006D /*7*/].f_1 = joaat("sm_kilwhvy");
	Global_DFA6[0x0000006D /*7*/] = 0x00000001;
	Global_DFA6[0x00000070 /*7*/].f_1 = joaat("sm_clobofbin");
	Global_DFA6[0x00000070 /*7*/] = 0x00000001;
	Global_DFA6[0x00000071 /*7*/].f_1 = joaat("sm_clobofpkw");
	Global_DFA6[0x00000071 /*7*/] = 0x00000001;
	Global_DFA6[0x00000072 /*7*/].f_1 = joaat("sm_clobofpon");
	Global_DFA6[0x00000072 /*7*/] = 0x00000001;
	Global_DFA6[0x00000075 /*7*/].f_1 = joaat("sm_yoga");
	Global_DFA6[0x00000075 /*7*/] = 0x00000001;
	Global_DFA6[0x00000076 /*7*/].f_1 = joaat("sm_tri");
	Global_DFA6[0x00000076 /*7*/] = 0x00000001;
	Global_DFA6[0x00000077 /*7*/].f_1 = joaat("sm_gym");
	Global_DFA6[0x00000077 /*7*/] = 0x00000001;
	Global_DFA6[0x00000078 /*7*/].f_1 = joaat("sm_strip");
	Global_DFA6[0x00000078 /*7*/] = 0x00000001;
	Global_DFA6[0x00000079 /*7*/].f_1 = joaat("sm_ughok");
	Global_DFA6[0x00000079 /*7*/] = 0x00000001;
	Global_DFA6[0x0000007A /*7*/].f_1 = joaat("sm_strtro");
	Global_DFA6[0x0000007A /*7*/] = 0x00000001;
	Global_DFA6[0x0000007B /*7*/].f_1 = joaat("sm_pisco");
	Global_DFA6[0x0000007B /*7*/] = 0x00000001;
	Global_DFA6[0x0000007C /*7*/].f_1 = joaat("sm_totinj");
	Global_DFA6[0x0000007C /*7*/] = 0x00000001;
	Global_DFA6[0x0000007D /*7*/].f_1 = joaat("sm_drugkil");
	Global_DFA6[0x0000007D /*7*/] = 0x00000001;
	Global_DFA6[0x0000007E /*7*/].f_1 = joaat("sm_hangovr");
	Global_DFA6[0x0000007E /*7*/] = 0x00000001;
	Global_DFA6[0x0000007F /*7*/].f_1 = joaat("sm_killspr");
	Global_DFA6[0x0000007F /*7*/] = 0x00000001;
	Global_DFA6[0x00000081 /*7*/].f_1 = joaat("sm_pedfirekill");
	Global_DFA6[0x00000081 /*7*/] = 0x00000001;
	Global_DFA6[0x00000082 /*7*/].f_1 = joaat("sm_pedfiretick");
	Global_DFA6[0x00000082 /*7*/] = 0x00000001;
	Global_DFA6[0x00000083 /*7*/].f_1 = joaat("sm_tvtickwap");
	Global_DFA6[0x00000083 /*7*/] = 0x00000001;
	Global_DFA6[0x00000084 /*7*/].f_1 = joaat("sm_tvtickwiw");
	Global_DFA6[0x00000084 /*7*/] = 0x00000001;
	Global_DFA6[0x00000086 /*7*/].f_1 = joaat("sm_zitpopzit");
	Global_DFA6[0x00000086 /*7*/] = 0x00000001;
	Global_DFA6[0x00000087 /*7*/].f_1 = joaat("sm_carapp");
	Global_DFA6[0x00000087 /*7*/] = 0x00000001;
	Global_DFA6[0x00000089 /*7*/].f_1 = joaat("sm_storob");
	Global_DFA6[0x00000089 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A2 /*7*/].f_1 = joaat("sm_phoncalbdg");
	Global_DFA6[0x000000A2 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A3 /*7*/].f_1 = joaat("sm_phoncaltnk");
	Global_DFA6[0x000000A3 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A4 /*7*/].f_1 = joaat("sm_phoncalwiz");
	Global_DFA6[0x000000A4 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A5 /*7*/].f_1 = joaat("sm_phontxtbdg");
	Global_DFA6[0x000000A5 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A6 /*7*/].f_1 = joaat("sm_phontxttnk");
	Global_DFA6[0x000000A6 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A7 /*7*/].f_1 = joaat("sm_phontxtwiz");
	Global_DFA6[0x000000A7 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A8 /*7*/].f_1 = joaat("sm_chtickbdg");
	Global_DFA6[0x000000A8 /*7*/] = 0x00000001;
	Global_DFA6[0x000000A9 /*7*/].f_1 = joaat("sm_chticktnk");
	Global_DFA6[0x000000A9 /*7*/] = 0x00000001;
	Global_DFA6[0x000000AA /*7*/].f_1 = joaat("sm_chtickwiz");
	Global_DFA6[0x000000AA /*7*/] = 0x00000001;
	Global_DFA6[0x000000AB /*7*/].f_1 = joaat("sm_calcanbdg");
	Global_DFA6[0x000000AB /*7*/] = 0x00000001;
	Global_DFA6[0x000000AC /*7*/].f_1 = joaat("sm_calcantnk");
	Global_DFA6[0x000000AC /*7*/] = 0x00000001;
	Global_DFA6[0x000000AD /*7*/].f_1 = joaat("sm_calcanwiz");
	Global_DFA6[0x000000AD /*7*/] = 0x00000001;
	Global_DFA6[0x0000008A /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000008A /*7*/].f_3 = joaat("sp0_dist_walking");
	Global_DFA6[0x0000008A /*7*/].f_4 = 0x00000001;
	Global_DFA6[0x0000008B /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000008B /*7*/].f_3 = joaat("sp1_dist_walking");
	Global_DFA6[0x0000008B /*7*/].f_4 = 0x00000001;
	Global_DFA6[0x0000008C /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000008C /*7*/].f_3 = joaat("sp2_dist_walking");
	Global_DFA6[0x0000008C /*7*/].f_4 = 0x00000001;
	Global_DFA6[0x0000008D /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000008D /*7*/].f_3 = joaat("sp0_dist_driving_bicycle");
	Global_DFA6[0x0000008D /*7*/].f_4 = 0x00000001;
	Global_DFA6[0x0000008E /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000008E /*7*/].f_3 = joaat("sp1_dist_driving_bicycle");
	Global_DFA6[0x0000008E /*7*/].f_4 = 0x00000001;
	Global_DFA6[0x0000008F /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000008F /*7*/].f_3 = joaat("sp2_dist_driving_bicycle");
	Global_DFA6[0x0000008F /*7*/].f_4 = 0x00000001;
	Global_DFA6[0x00000090 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000090 /*7*/].f_3 = joaat("sp0_bailed_from_vehicle");
	Global_DFA6[0x00000090 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x00000091 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000091 /*7*/].f_3 = joaat("sp1_bailed_from_vehicle");
	Global_DFA6[0x00000091 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x00000092 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000092 /*7*/].f_3 = joaat("sp2_bailed_from_vehicle");
	Global_DFA6[0x00000092 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x00000096 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000096 /*7*/].f_3 = joaat("sp0_large_accidents");
	Global_DFA6[0x00000096 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x00000097 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000097 /*7*/].f_3 = joaat("sp1_large_accidents");
	Global_DFA6[0x00000097 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x00000098 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000098 /*7*/].f_3 = joaat("sp2_large_accidents");
	Global_DFA6[0x00000098 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x00000099 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x00000099 /*7*/].f_3 = joaat("sp0_total_legitimate_kills");
	Global_DFA6[0x00000099 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x0000009A /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000009A /*7*/].f_3 = joaat("sp1_total_legitimate_kills");
	Global_DFA6[0x0000009A /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x0000009B /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000009B /*7*/].f_3 = joaat("sp2_total_legitimate_kills");
	Global_DFA6[0x0000009B /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x0000009C /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000009C /*7*/].f_3 = joaat("sp0_money_spent_on_taxis");
	Global_DFA6[0x0000009C /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x0000009D /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000009D /*7*/].f_3 = joaat("sp1_money_spent_on_taxis");
	Global_DFA6[0x0000009D /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x0000009E /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000009E /*7*/].f_3 = joaat("sp2_money_spent_on_taxis");
	Global_DFA6[0x0000009E /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x0000009F /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x0000009F /*7*/].f_3 = joaat("sp0_money_spent_on_healthcare");
	Global_DFA6[0x0000009F /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000A0 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000A0 /*7*/].f_3 = joaat("sp1_money_spent_on_healthcare");
	Global_DFA6[0x000000A0 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000A1 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000A1 /*7*/].f_3 = joaat("sp2_money_spent_on_healthcare");
	Global_DFA6[0x000000A1 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000AE /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000AE /*7*/].f_3 = joaat("sp0_money_spent_in_cop_bribes");
	Global_DFA6[0x000000AE /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000AF /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000AF /*7*/].f_3 = joaat("sp1_money_spent_in_cop_bribes");
	Global_DFA6[0x000000AF /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B0 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B0 /*7*/].f_3 = joaat("sp2_money_spent_in_cop_bribes");
	Global_DFA6[0x000000B0 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B1 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B1 /*7*/].f_3 = joaat("sp0_busted");
	Global_DFA6[0x000000B1 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B2 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B2 /*7*/].f_3 = joaat("sp1_busted");
	Global_DFA6[0x000000B2 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B3 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B3 /*7*/].f_3 = joaat("sp2_busted");
	Global_DFA6[0x000000B3 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B4 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B4 /*7*/].f_3 = joaat("sp0_died_in_fall");
	Global_DFA6[0x000000B4 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B5 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B5 /*7*/].f_3 = joaat("sp1_died_in_fall");
	Global_DFA6[0x000000B5 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B6 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B6 /*7*/].f_3 = joaat("sp2_died_in_fall");
	Global_DFA6[0x000000B6 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B7 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B7 /*7*/].f_3 = joaat("sp0_stars_attained");
	Global_DFA6[0x000000B7 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B8 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B8 /*7*/].f_3 = joaat("sp1_stars_attained");
	Global_DFA6[0x000000B8 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000B9 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000B9 /*7*/].f_3 = joaat("sp2_stars_attained");
	Global_DFA6[0x000000B9 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000BA /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000BA /*7*/].f_3 = joaat("sp0_stars_evaded");
	Global_DFA6[0x000000BA /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000BB /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000BB /*7*/].f_3 = joaat("sp1_stars_evaded");
	Global_DFA6[0x000000BB /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000BC /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000BC /*7*/].f_3 = joaat("sp2_stars_evaded");
	Global_DFA6[0x000000BC /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000BD /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000BD /*7*/].f_3 = joaat("sp0_manual_saved");
	Global_DFA6[0x000000BD /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000BE /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000BE /*7*/].f_3 = joaat("sp1_manual_saved");
	Global_DFA6[0x000000BE /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000BF /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000BF /*7*/].f_3 = joaat("sp2_manual_saved");
	Global_DFA6[0x000000BF /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C0 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C0 /*7*/].f_3 = joaat("sp0_kills_cop");
	Global_DFA6[0x000000C0 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C1 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C1 /*7*/].f_3 = joaat("sp1_kills_cop");
	Global_DFA6[0x000000C1 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C2 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C2 /*7*/].f_3 = joaat("sp2_kills_cop");
	Global_DFA6[0x000000C2 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C3 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C3 /*7*/].f_3 = joaat("sp0_kills_swat");
	Global_DFA6[0x000000C3 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C4 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C4 /*7*/].f_3 = joaat("sp1_kills_swat");
	Global_DFA6[0x000000C4 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C5 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C5 /*7*/].f_3 = joaat("sp2_kills_swat");
	Global_DFA6[0x000000C5 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C6 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C6 /*7*/].f_3 = joaat("sp0_time_in_cover");
	Global_DFA6[0x000000C6 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C7 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C7 /*7*/].f_3 = joaat("sp1_time_in_cover");
	Global_DFA6[0x000000C7 /*7*/].f_4 = 0x00000000;
	Global_DFA6[0x000000C8 /*7*/].f_2 = 0x00000001;
	Global_DFA6[0x000000C8 /*7*/].f_3 = joaat("sp2_time_in_cover");
	Global_DFA6[0x000000C8 /*7*/].f_4 = 0x00000000;
	Global_DD74[0x00000000 /*7*/] = joaat("sm_price_amu");
	Global_DD74[0x00000000 /*7*/].f_3[0x00000000] = joaat("amu_ow0");
	Global_DD74[0x00000000 /*7*/].f_3[0x00000001] = joaat("amu_ow1");
	Global_DD74[0x00000000 /*7*/].f_3[0x00000002] = joaat("amu_ow2");
	Global_DD74[0x00000001 /*7*/] = joaat("sm_price_bdg");
	Global_DD74[0x00000001 /*7*/].f_3[0x00000000] = joaat("bdg_ow0");
	Global_DD74[0x00000001 /*7*/].f_3[0x00000001] = joaat("bdg_ow1");
	Global_DD74[0x00000001 /*7*/].f_3[0x00000002] = joaat("bdg_ow2");
	Global_DD74[0x00000002 /*7*/] = joaat("sm_price_bfa");
	Global_DD74[0x00000002 /*7*/].f_3[0x00000000] = joaat("bfa_ow0");
	Global_DD74[0x00000002 /*7*/].f_3[0x00000001] = joaat("bfa_ow1");
	Global_DD74[0x00000002 /*7*/].f_3[0x00000002] = joaat("bfa_ow2");
	Global_DD74[0x00000003 /*7*/] = joaat("sm_price_bin");
	Global_DD74[0x00000003 /*7*/].f_3[0x00000000] = joaat("bin_ow0");
	Global_DD74[0x00000003 /*7*/].f_3[0x00000001] = joaat("bin_ow1");
	Global_DD74[0x00000003 /*7*/].f_3[0x00000002] = joaat("bin_ow2");
	Global_DD74[0x00000004 /*7*/] = joaat("sm_price_btr");
	Global_DD74[0x00000004 /*7*/].f_3[0x00000000] = joaat("btr_ow0");
	Global_DD74[0x00000004 /*7*/].f_3[0x00000001] = joaat("btr_ow1");
	Global_DD74[0x00000004 /*7*/].f_3[0x00000002] = joaat("btr_ow2");
	Global_DD74[0x00000005 /*7*/] = joaat("sm_price_ble");
	Global_DD74[0x00000005 /*7*/].f_3[0x00000000] = joaat("ble_ow0");
	Global_DD74[0x00000005 /*7*/].f_3[0x00000001] = joaat("ble_ow1");
	Global_DD74[0x00000005 /*7*/].f_3[0x00000002] = joaat("ble_ow2");
	Global_DD74[0x00000006 /*7*/] = joaat("sm_price_bru");
	Global_DD74[0x00000006 /*7*/].f_3[0x00000000] = joaat("bru_ow0");
	Global_DD74[0x00000006 /*7*/].f_3[0x00000001] = joaat("bru_ow1");
	Global_DD74[0x00000006 /*7*/].f_3[0x00000002] = joaat("bru_ow2");
	Global_DD74[0x00000007 /*7*/] = joaat("sm_price_cnt");
	Global_DD74[0x00000007 /*7*/].f_3[0x00000000] = joaat("cnt_ow0");
	Global_DD74[0x00000007 /*7*/].f_3[0x00000001] = joaat("cnt_ow1");
	Global_DD74[0x00000007 /*7*/].f_3[0x00000002] = joaat("cnt_ow2");
	Global_DD74[0x00000008 /*7*/] = joaat("sm_price_cre");
	Global_DD74[0x00000008 /*7*/].f_3[0x00000000] = joaat("cre_ow0");
	Global_DD74[0x00000008 /*7*/].f_3[0x00000001] = joaat("cre_ow1");
	Global_DD74[0x00000008 /*7*/].f_3[0x00000002] = joaat("cre_ow2");
	Global_DD74[0x00000009 /*7*/] = joaat("sm_price_dgp");
	Global_DD74[0x00000009 /*7*/].f_3[0x00000000] = joaat("dgp_ow0");
	Global_DD74[0x00000009 /*7*/].f_3[0x00000001] = joaat("dgp_ow1");
	Global_DD74[0x00000009 /*7*/].f_3[0x00000002] = joaat("dgp_ow2");
	Global_DD74[0x0000000A /*7*/] = joaat("sm_price_wap");
	Global_DD74[0x0000000A /*7*/].f_3[0x00000000] = joaat("wap_ow0");
	Global_DD74[0x0000000A /*7*/].f_3[0x00000001] = joaat("wap_ow1");
	Global_DD74[0x0000000A /*7*/].f_3[0x00000002] = joaat("wap_ow2");
	Global_DD74[0x0000000B /*7*/] = joaat("sm_price_fac");
	Global_DD74[0x0000000B /*7*/].f_3[0x00000000] = joaat("fac_ow0");
	Global_DD74[0x0000000B /*7*/].f_3[0x00000001] = joaat("fac_ow1");
	Global_DD74[0x0000000B /*7*/].f_3[0x00000002] = joaat("fac_ow2");
	Global_DD74[0x0000000C /*7*/] = joaat("sm_price_frt");
	Global_DD74[0x0000000C /*7*/].f_3[0x00000000] = joaat("frt_ow0");
	Global_DD74[0x0000000C /*7*/].f_3[0x00000001] = joaat("frt_ow1");
	Global_DD74[0x0000000C /*7*/].f_3[0x00000002] = joaat("frt_ow2");
	Global_DD74[0x0000000D /*7*/] = joaat("sm_price_lsc");
	Global_DD74[0x0000000D /*7*/].f_3[0x00000000] = joaat("lsc_ow0");
	Global_DD74[0x0000000D /*7*/].f_3[0x00000001] = joaat("lsc_ow1");
	Global_DD74[0x0000000D /*7*/].f_3[0x00000002] = joaat("lsc_ow2");
	Global_DD74[0x0000000E /*7*/] = joaat("sm_price_lst");
	Global_DD74[0x0000000E /*7*/].f_3[0x00000000] = joaat("lst_ow0");
	Global_DD74[0x0000000E /*7*/].f_3[0x00000001] = joaat("lst_ow1");
	Global_DD74[0x0000000E /*7*/].f_3[0x00000002] = joaat("lst_ow2");
	Global_DD74[0x0000000F /*7*/] = joaat("sm_price_ltd");
	Global_DD74[0x0000000F /*7*/].f_3[0x00000000] = joaat("ltd_ow0");
	Global_DD74[0x0000000F /*7*/].f_3[0x00000001] = joaat("ltd_ow1");
	Global_DD74[0x0000000F /*7*/].f_3[0x00000002] = joaat("ltd_ow2");
	Global_DD74[0x00000010 /*7*/] = joaat("sm_price_mai");
	Global_DD74[0x00000010 /*7*/].f_3[0x00000000] = joaat("mai_ow0");
	Global_DD74[0x00000010 /*7*/].f_3[0x00000001] = joaat("mai_ow1");
	Global_DD74[0x00000010 /*7*/].f_3[0x00000002] = joaat("mai_ow2");
	Global_DD74[0x00000011 /*7*/] = joaat("sm_price_pkw");
	Global_DD74[0x00000011 /*7*/].f_3[0x00000000] = joaat("pkw_ow0");
	Global_DD74[0x00000011 /*7*/].f_3[0x00000001] = joaat("pkw_ow1");
	Global_DD74[0x00000011 /*7*/].f_3[0x00000002] = joaat("pkw_ow2");
	Global_DD74[0x00000012 /*7*/] = joaat("sm_price_pis");
	Global_DD74[0x00000012 /*7*/].f_3[0x00000000] = joaat("pis_ow0");
	Global_DD74[0x00000012 /*7*/].f_3[0x00000001] = joaat("pis_ow1");
	Global_DD74[0x00000012 /*7*/].f_3[0x00000002] = joaat("pis_ow2");
	Global_DD74[0x00000013 /*7*/] = joaat("sm_price_pon");
	Global_DD74[0x00000013 /*7*/].f_3[0x00000000] = joaat("pon_ow0");
	Global_DD74[0x00000013 /*7*/].f_3[0x00000001] = joaat("pon_ow1");
	Global_DD74[0x00000013 /*7*/].f_3[0x00000002] = joaat("pon_ow2");
	Global_DD74[0x00000014 /*7*/] = joaat("sm_price_ron");
	Global_DD74[0x00000014 /*7*/].f_3[0x00000000] = joaat("ron_ow0");
	Global_DD74[0x00000014 /*7*/].f_3[0x00000001] = joaat("ron_ow1");
	Global_DD74[0x00000014 /*7*/].f_3[0x00000002] = joaat("ron_ow2");
	Global_DD74[0x00000015 /*7*/] = joaat("sm_price_sht");
	Global_DD74[0x00000015 /*7*/].f_3[0x00000000] = joaat("sht_ow0");
	Global_DD74[0x00000015 /*7*/].f_3[0x00000001] = joaat("sht_ow1");
	Global_DD74[0x00000015 /*7*/].f_3[0x00000002] = joaat("sht_ow2");
	Global_DD74[0x00000016 /*7*/] = joaat("sm_price_spu");
	Global_DD74[0x00000016 /*7*/].f_3[0x00000000] = joaat("spu_ow0");
	Global_DD74[0x00000016 /*7*/].f_3[0x00000001] = joaat("spu_ow1");
	Global_DD74[0x00000016 /*7*/].f_3[0x00000002] = joaat("spu_ow2");
	Global_DD74[0x00000017 /*7*/] = joaat("sm_price_tnk");
	Global_DD74[0x00000017 /*7*/].f_3[0x00000000] = joaat("tnk_ow0");
	Global_DD74[0x00000017 /*7*/].f_3[0x00000001] = joaat("tnk_ow1");
	Global_DD74[0x00000017 /*7*/].f_3[0x00000002] = joaat("tnk_ow2");
	Global_DD74[0x00000018 /*7*/] = joaat("sm_price_wiw");
	Global_DD74[0x00000018 /*7*/].f_3[0x00000000] = joaat("wiw_ow0");
	Global_DD74[0x00000018 /*7*/].f_3[0x00000001] = joaat("wiw_ow1");
	Global_DD74[0x00000018 /*7*/].f_3[0x00000002] = joaat("wiw_ow2");
	Global_DD74[0x00000019 /*7*/] = joaat("sm_price_uma");
	Global_DD74[0x00000019 /*7*/].f_3[0x00000000] = joaat("uma_ow0");
	Global_DD74[0x00000019 /*7*/].f_3[0x00000001] = joaat("uma_ow1");
	Global_DD74[0x00000019 /*7*/].f_3[0x00000002] = joaat("uma_ow2");
	Global_DD74[0x0000001A /*7*/] = joaat("sm_price_vap");
	Global_DD74[0x0000001A /*7*/].f_3[0x00000000] = joaat("vap_ow0");
	Global_DD74[0x0000001A /*7*/].f_3[0x00000001] = joaat("vap_ow1");
	Global_DD74[0x0000001A /*7*/].f_3[0x00000002] = joaat("vap_ow2");
	Global_DD74[0x0000001B /*7*/] = joaat("sm_price_vom");
	Global_DD74[0x0000001B /*7*/].f_3[0x00000000] = joaat("vom_ow0");
	Global_DD74[0x0000001B /*7*/].f_3[0x00000001] = joaat("vom_ow1");
	Global_DD74[0x0000001B /*7*/].f_3[0x00000002] = joaat("vom_ow2");
	Global_DD74[0x0000001C /*7*/] = joaat("sm_price_wzl");
	Global_DD74[0x0000001C /*7*/].f_3[0x00000000] = joaat("wzl_ow0");
	Global_DD74[0x0000001C /*7*/].f_3[0x00000001] = joaat("wzl_ow1");
	Global_DD74[0x0000001C /*7*/].f_3[0x00000002] = joaat("wzl_ow2");
	Global_DD74[0x0000001D /*7*/] = joaat("sm_price_wiz");
	Global_DD74[0x0000001D /*7*/].f_3[0x00000000] = joaat("wiz_ow0");
	Global_DD74[0x0000001D /*7*/].f_3[0x00000001] = joaat("wiz_ow1");
	Global_DD74[0x0000001D /*7*/].f_3[0x00000002] = joaat("wiz_ow2");
	Global_DD74[0x0000001E /*7*/] = joaat("sm_price_zit");
	Global_DD74[0x0000001E /*7*/].f_3[0x00000000] = joaat("zit_ow0");
	Global_DD74[0x0000001E /*7*/].f_3[0x00000001] = joaat("zit_ow1");
	Global_DD74[0x0000001E /*7*/].f_3[0x00000002] = joaat("zit_ow2");
	Global_DD74[0x0000001F /*7*/] = joaat("sm_price_shk");
	Global_DD74[0x0000001F /*7*/].f_3[0x00000000] = joaat("shk_ow0");
	Global_DD74[0x0000001F /*7*/].f_3[0x00000001] = joaat("shk_ow1");
	Global_DD74[0x0000001F /*7*/].f_3[0x00000002] = joaat("shk_ow2");
	Global_DD74[0x00000020 /*7*/] = joaat("sm_price_mol");
	Global_DD74[0x00000020 /*7*/].f_3[0x00000000] = joaat("mol_ow0");
	Global_DD74[0x00000020 /*7*/].f_3[0x00000001] = joaat("mol_ow1");
	Global_DD74[0x00000020 /*7*/].f_3[0x00000002] = joaat("mol_ow2");
	Global_DD74[0x00000021 /*7*/] = joaat("sm_price_pmp");
	Global_DD74[0x00000021 /*7*/].f_3[0x00000000] = joaat("pmp_ow0");
	Global_DD74[0x00000021 /*7*/].f_3[0x00000001] = joaat("pmp_ow1");
	Global_DD74[0x00000021 /*7*/].f_3[0x00000002] = joaat("pmp_ow2");
	Global_DD74[0x00000022 /*7*/] = joaat("sm_price_got");
	Global_DD74[0x00000022 /*7*/].f_3[0x00000000] = joaat("got_ow0");
	Global_DD74[0x00000022 /*7*/].f_3[0x00000001] = joaat("got_ow1");
	Global_DD74[0x00000022 /*7*/].f_3[0x00000002] = joaat("got_ow2");
	Global_DD74[0x00000023 /*7*/] = joaat("sm_price_eye");
	Global_DD74[0x00000023 /*7*/].f_3[0x00000000] = joaat("eye_ow0");
	Global_DD74[0x00000023 /*7*/].f_3[0x00000001] = joaat("eye_ow1");
	Global_DD74[0x00000023 /*7*/].f_3[0x00000002] = joaat("eye_ow2");
	Global_DD74[0x00000024 /*7*/] = joaat("sm_price_hvy");
	Global_DD74[0x00000024 /*7*/].f_3[0x00000000] = joaat("hvy_ow0");
	Global_DD74[0x00000024 /*7*/].f_3[0x00000001] = joaat("hvy_ow1");
	Global_DD74[0x00000024 /*7*/].f_3[0x00000002] = joaat("hvy_ow2");
	Global_DD74[0x00000025 /*7*/] = joaat("sm_price_shr");
	Global_DD74[0x00000025 /*7*/].f_3[0x00000000] = joaat("shr_ow0");
	Global_DD74[0x00000025 /*7*/].f_3[0x00000001] = joaat("shr_ow1");
	Global_DD74[0x00000025 /*7*/].f_3[0x00000002] = joaat("shr_ow2");
	Global_DD74[0x00000026 /*7*/] = joaat("sm_price_hal");
	Global_DD74[0x00000026 /*7*/].f_3[0x00000000] = joaat("hal_ow0");
	Global_DD74[0x00000026 /*7*/].f_3[0x00000001] = joaat("hal_ow1");
	Global_DD74[0x00000026 /*7*/].f_3[0x00000002] = joaat("hal_ow2");
}

void func_98()
{
	unk_0x10FAF14A60A0DBE1();
}

