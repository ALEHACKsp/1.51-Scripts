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
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<62> Local_37 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 16;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	char[] cLocal_213[8] = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220[2] = { 0, 0 };
	var uLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_222[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_223[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
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
	iLocal_20 = 0x00000003;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_211 = 0xFFFFFFFF;
	iLocal_212 = 0xFFFFFFFF;
	StringCopy(&cLocal_213, "PMGAUD", 8);
	iLocal_215 = 0xFFFFFFFF;
	iLocal_216 = 0xFFFFFFFF;
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_62(0x00000002);
		func_61();
	}
	func_54();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (func_53())
		{
			iLocal_212 = 0xFFFFFFFF;
		}
		else if (iLocal_212 == 0xFFFFFFFF)
		{
			iLocal_212 = unk_0x1C0640BA9A7327B3();
		}
		func_1();
	}
}

void func_1()
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	switch (iLocal_36)
	{
		case 0x00000000:
			unk_0xD7992BEF7A9D109E("PGANG", 0x00000000);
			if (unk_0x67C1D9E5B91B2E37(0x00000000))
			{
				iVar1 = 0x00000000;
				while (iVar1 <= 0x00000005)
				{
					if (unk_0xC844350D5D58C99A(Global_1AF0C.f_E1[iVar1]))
					{
						uLocal_221[iVar1] = Global_1AF0C.f_E1[iVar1];
						Global_1AF0C.f_E1[iVar1] = 0x00000000;
						unk_0x73270B3C9CC833FD(uLocal_221[iVar1], 0x00000001, 0x00000001);
						if (iLocal_226 == 0x00000000)
						{
							iLocal_226 = unk_0x134B62B726CEC8E6(uLocal_221[iVar1]);
						}
						if (!unk_0xEB6A8945D1AC98A1(uLocal_221[iVar1]))
						{
							unk_0x6DF7BF67E86AAE86(uLocal_221[iVar1], iLocal_224);
							unk_0x3CC33E4E9CE523F4(uLocal_221[iVar1], 0x00000001);
							unk_0xB35CCEC0D4946813(uLocal_221[iVar1], 0x00000000);
							unk_0x298903DD96203C2C(uLocal_221[iVar1], 0x00000005);
							unk_0x26A6B1686E33113F(uLocal_221[iVar1], 0x00000001);
							func_52(uLocal_221[iVar1], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_45 == 0x00000000)
							{
								unk_0x3CC33E4E9CE523F4(uLocal_221[iVar1], 0x00000002);
							}
							uLocal_223[iVar1] = func_49(uLocal_221[iVar1], 0x00000001, 0x00000091);
						}
					}
					iVar1++;
				}
				iVar1 = 0x00000000;
				while (iVar1 <= 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(Global_1AF0C.f_DE[iVar1]))
					{
						uLocal_220[iVar1] = Global_1AF0C.f_DE[iVar1];
						Global_1AF0C.f_DE[iVar1] = 0x00000000;
						unk_0x73270B3C9CC833FD(uLocal_220[iVar1], 0x00000001, 0x00000001);
						if (iLocal_225 == 0x00000000)
						{
							iLocal_225 = unk_0x134B62B726CEC8E6(uLocal_220[iVar1]);
						}
					}
					iVar1++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_37.f_3D), 16);
				func_48(&Var0, 0x00001D4C, 0x00000001);
				iLocal_36++;
			}
			break;
		
		case 0x00000001:
			bVar3 = 0x00000001;
			iVar1 = 0x00000000;
			while (iVar1 <= 0x00000005)
			{
				if (!bVar2)
				{
					if (uLocal_222[iVar1] > 0x00000000)
					{
						bVar2 = 0x00000001;
					}
				}
				if (unk_0xC844350D5D58C99A(uLocal_221[iVar1]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar1]))
				{
					bVar3 = 0x00000000;
				}
				iVar1++;
			}
			if (bVar2)
			{
				unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			}
			if (bVar3)
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (!iLocal_217)
					{
						func_48("LOSE_WANTED", 0x00001D4C, 0x00000001);
						iLocal_217 = 0x00000001;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_45)
	{
		case 0x00000001:
			func_45();
			break;
		
		case 0x00000000:
			func_9();
			break;
	}
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uLocal_221[iVar1]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_221[iVar1]))
			{
				unk_0x6DAD7906B73F064D(&(uLocal_221[iVar1]));
			}
			else if (func_6(uLocal_221[iVar1], func_7(func_8()), 0x00000001) > 100f && func_5(unk_0x16F2683693E537C9(), uLocal_221[iVar1], 0x00000001) > 300f)
			{
				func_4();
			}
			else if (iLocal_219 && func_6(uLocal_221[iVar1], func_7(func_8()), 0x00000001) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_218)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_37.f_3D), 16);
						func_48(&Var0, 0x00001D4C, 0x00000001);
						iLocal_218 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xE4EDC4B0E92C078B(uLocal_223[iVar1]))
		{
			if (!unk_0xC844350D5D58C99A(uLocal_221[iVar1]) || unk_0xEB6A8945D1AC98A1(uLocal_221[iVar1]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_223[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_2()
{
	if (unk_0xD17F06053799A7CA())
	{
		return 0x00000000;
	}
	if (unk_0x04E6B3EAA8742BFA())
	{
		if (func_53() && !func_3())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_3()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4()
{
	func_62(0x00000002);
	func_61();
}

float func_5(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

float func_6(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 0x00000009:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 0x0000000A:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 0x00000001:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 0x00000004:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 0x00000003:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0x00000000:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 0x00000008:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 0x00000005:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 0x00000006:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 0x00000007:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 0x0000000B:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 0x0000000C:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 0x0000000D:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 0x0000000E:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()
{
	return Global_1AF0C.f_14;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uLocal_221[iVar0]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0x00000000:
					if (func_43(iVar0))
					{
						iLocal_211 = 0x00000000;
						uLocal_222[iVar0]++;
					}
					break;
				
				case 0x00000001:
					iVar2 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 <= 0x00000005)
					{
						if (unk_0xC844350D5D58C99A(uLocal_221[iVar1]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 0x00000002)
					{
						uLocal_222[iVar0]++;
					}
					break;
				
				case 0x00000002:
					break;
			}
			if (uLocal_222[iVar0] > 0x00000000)
			{
				iVar3 = 0x00000000;
				unk_0xCAE036C45E7FC720(uLocal_221[iVar0], &iVar3, 0x00000001);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (unk_0x440C646F2F11A2A1(uLocal_221[iVar0], joaat("weapon_microsmg"), 0x00000000))
					{
						unk_0x5745EA6329A91E29(uLocal_221[iVar0], joaat("weapon_microsmg"), 0x00000001);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(uLocal_221[iVar0], joaat("weapon_microsmg"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0x00000000:
					func_39(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 0x00000001:
					if (!func_38(uLocal_221[iVar0], 0x2E85A751, 0x00000001))
					{
						unk_0x6C3AE6E278DB3D0E(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					}
					break;
				
				case 0x00000002:
					if (!func_38(uLocal_221[iVar0], 0x6BA30179, 0x00000001))
					{
						unk_0xF3268524E9BE6D6E(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000001, 0x00000000);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0x00000000:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != 0xFFFFFFFF && !unk_0x65636D4556D82155(uLocal_221[iVar4]))
				{
					func_34(uLocal_221[iVar4], "SUSPECT_SPOTTED", 0x0000000A);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 0x00000001:
			if (func_37())
			{
				cVar5 = { func_33("START") };
				if (func_10(&uLocal_46, &cLocal_213, &cVar5, 0x00000008, 0x00000000, 0x00000000, 0x00000000))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != 0xFFFFFFFF && !unk_0x65636D4556D82155(uLocal_221[iVar4]))
				{
					func_34(uLocal_221[iVar4], "SHOUT_THREATEN", 0x0000000A);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 0x00000003:
			if ((func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_212) > 0x00000BB8) && !unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				func_34(unk_0x16F2683693E537C9(), "BLIND_RAGE", 0x0000000A);
				iLocal_211++;
			}
			break;
		
		case 0x00000004:
			if (func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_212) > 0x000003E8)
			{
				iVar4 = func_36();
				if (iVar4 != 0xFFFFFFFF && !unk_0x65636D4556D82155(uLocal_221[iVar4]))
				{
					if (uLocal_222[iVar4] == 0x00000002)
					{
						func_34(uLocal_221[iVar4], "GENERIC_INSULT", 0x0000000A);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 0x00000001);
					}
					else
					{
						func_34(uLocal_221[iVar4], "SHOUT_THREATEN", 0x0000000A);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 0x00000001);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0x00000000);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_17();
		func_12();
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
		func_31();
	}
	return 0x00000000;
}

void func_12()
{
	if (!func_13())
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

int func_13()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_16())
	{
		return 0x00000000;
	}
	if (func_14(unk_0xD803B885F5E47A62()))
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

bool func_14(int iParam0)
{
	return func_15(iParam0, 0x00000014);
}

bool func_15(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_16()
{
	return 0xFFFFFFFF;
}

void func_17()
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

void func_18()
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

int func_19()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_20()
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

void func_21()
{
	if (func_28(0x0000000E))
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
		Global_4C1E = func_22();
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

int func_22()
{
	func_23();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_26(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_25(unk_0x16F2683693E537C9());
			if (func_24(iVar0) && (!func_28(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_24(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_24(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_27(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_33(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_22())
	{
		case 0x00000000:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 0x00000001:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 0x00000002:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_34(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_35(iParam2), 0x00000001);
}

int func_35(int iParam0)
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

int func_36()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0xFFFFFFFF;
	fVar2 = 999999f;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uLocal_221[iVar1]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar1]))
		{
			fVar3 = func_5(uLocal_221[iVar1], unk_0x16F2683693E537C9(), 0x00000001);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_37()
{
	if (func_53())
	{
		return 0x00000000;
	}
	if (unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD1960163A3042274(iParam0, iParam1);
	if (iVar0 == 0x00000001 || iVar0 == 0x00000000)
	{
		return 0x00000001;
	}
	else if (!bParam2)
	{
		if (iVar0 == 0x00000002 || iVar0 == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_39(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
	if (!func_42(vParam1))
	{
		unk_0xCAE036C45E7FC720(iParam0, &iVar1, 0x00000001);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				unk_0x5745EA6329A91E29(iParam0, joaat("weapon_molotov"), 0x00000001);
			}
			if (unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000000)
			{
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770));
				unk_0x8A51557EEC28BFF9(0x00000000, func_40(vParam1, 1f), 0x00000000, 0x00000000);
				unk_0x25644C31B4B6E9F3(iVar2, 0x00000001);
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(iParam0, iVar2);
				unk_0xF82EA857DA10E0CD(&iVar2);
			}
		}
		else if (unk_0xD1960163A3042274(iParam0, 0xD90EF188) != 0x00000001 && unk_0xD1960163A3042274(iParam0, 0xD90EF188) != 0x00000000)
		{
			unk_0xD43A968A9357B799(iParam0, vParam1, 0xFFFFFFFF, 0xD6FF6D61);
		}
	}
	else if (unk_0xD1960163A3042274(iParam0, 0xC572E06A) != 0x00000001 && unk_0xD1960163A3042274(iParam0, 0xC572E06A) != 0x00000000)
	{
		unk_0x93D47DFD0AE94949(iParam0, 0xFFFFFFFF);
	}
}

Vector3 func_40(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f) };
	return vParam0 + func_41(vVar0, unk_0x79833B02DBD2A244(0f, fParam1));
}

Vector3 func_41(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_42(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000005)
	{
		if ((unk_0xC844350D5D58C99A(uLocal_221[iVar0]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar0])) && uLocal_222[iVar0] > 0x00000000)
		{
			iLocal_219 = 0x00000001;
		}
		iVar0++;
	}
	if (((((((((((func_44(Global_1AF0C.f_23, 0x08000000) || unk_0xE115347EA59F7B86(uLocal_221[iParam0], unk_0x16F2683693E537C9())) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), uLocal_221[iParam0])) || unk_0x688A90832774AB83(uLocal_221[iParam0])) || unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f, 0x00000001)) || unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f, 0x00000001, 0x00000001)) || unk_0x681F21BF9F7B449B(0x00000015, unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f)) || unk_0x681F21BF9F7B449B(0x0000000A, unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f)) || unk_0x681F21BF9F7B449B(0x00000007, unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f)) || unk_0x681F21BF9F7B449B(0x00000000, unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f)) || unk_0x681F21BF9F7B449B(0x00000001, unk_0x68F4C0EC296D3901(uLocal_221[iParam0], 0x00000001), 15f)) || iLocal_219)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_45()
{
	int iVar0;
	var uVar1[2];
	int iVar2;
	vector3 vVar3[24];
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	char cVar13[16];
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(uLocal_220[iVar0]) && unk_0xDF1306B443CD3D15(uLocal_220[iVar0], 0x00000000))
		{
			iVar2 = 0x00000000;
			while (iVar2 <= 0x00000005)
			{
				if (unk_0xC844350D5D58C99A(uLocal_221[iVar2]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar2]))
				{
					if (Local_37[iVar2 /*10*/].f_8 != 0xFFFFFFFF && Local_37[iVar2 /*10*/].f_8 == iVar0)
					{
						if (!unk_0xC42A92762C58E1B9(uLocal_221[iVar2], uLocal_220[iVar0], 0x00000000))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar2++;
			}
		}
		StringCopy(&cVar3, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar3, iVar0, 24);
		StringConCat(&cVar3, "]: ", 24);
		StringIntConCat(&cVar3, uVar1[iVar0], 24);
		unk_0x26F63FD28070F2CE(&cVar3, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uLocal_221[iVar0]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0x00000000:
					if (func_43(iVar0))
					{
						iLocal_211 = 0x00000000;
						uLocal_222[iVar0]++;
					}
					break;
				
				case 0x00000001:
					if (Local_37[iVar0 /*10*/].f_8 == 0xFFFFFFFF)
					{
						if (!unk_0x24129324CD7C13D0(uLocal_221[iVar0], 0x0000011E, 0x00000001))
						{
							unk_0x4E885A246A9D983A(uLocal_221[iVar0], 0x0000011E, 0x00000001);
						}
					}
					else
					{
						bVar5 = 0x00000000;
						if (unk_0x405E212DDE472467(uLocal_221[iVar0], 0x00000000))
						{
							iVar6 = unk_0x6937EA2286828455(uLocal_221[iVar0], 0x00000000);
							iVar4 = 0x00000000;
							while (iVar4 <= 0x00000001)
							{
								if (!bVar5)
								{
									if (uLocal_220[iVar4] == iVar6)
									{
										if (uVar1[iVar4] == 0x00000000)
										{
											bVar5 = 0x00000001;
										}
									}
								}
								iVar4++;
							}
							if (bVar5)
							{
								if (iLocal_215 == 0xFFFFFFFF && func_46(uLocal_221[iVar0], 0x00000000) == 0xFFFFFFFF)
								{
									iLocal_215 = iVar0;
								}
								uLocal_222[iVar0]++;
							}
						}
					}
					break;
				
				case 0x00000002:
					if (iLocal_215 != 0xFFFFFFFF)
					{
						iLocal_216 = iLocal_215;
						if (unk_0xC844350D5D58C99A(uLocal_221[iLocal_215]))
						{
							if (unk_0x405E212DDE472467(uLocal_221[iLocal_215], 0x00000000))
							{
								iVar7 = unk_0x6937EA2286828455(uLocal_221[iLocal_215], 0x00000000);
							}
						}
					}
					if ((((((((iLocal_215 == 0xFFFFFFFF || !unk_0xC844350D5D58C99A(uLocal_221[iLocal_215])) || unk_0xEB6A8945D1AC98A1(uLocal_221[iLocal_215])) || !unk_0xC844350D5D58C99A(iVar7)) || !unk_0xDF1306B443CD3D15(iVar7, 0x00000000)) || unk_0x464B3D84B739AE72(iVar7, 0x00000000, 0x00000001)) || unk_0x464B3D84B739AE72(iVar7, 0x00000001, 0x00000001)) || unk_0x464B3D84B739AE72(iVar7, 0x00000004, 0x00000001)) || unk_0x464B3D84B739AE72(iVar7, 0x00000005, 0x00000001))
					{
						iVar8 = 0xFFFFFFFF;
						bVar9 = 0x00000000;
						iVar4 = 0x00000000;
						while (iVar4 <= 0x00000005)
						{
							if (unk_0xC844350D5D58C99A(uLocal_221[iVar4]) && !unk_0xEB6A8945D1AC98A1(uLocal_221[iVar4]))
							{
								if (func_46(uLocal_221[iVar4], 0x00000000) == 0xFFFFFFFF)
								{
									if (iVar8 == 0xFFFFFFFF || !bVar9)
									{
										bVar9 = 0x00000001;
										iVar8 = iVar4;
									}
								}
								else if (!bVar9)
								{
									iVar8 = iVar4;
								}
							}
							iVar4++;
						}
						if (iVar8 != 0xFFFFFFFF)
						{
							iLocal_215 = iVar8;
						}
					}
					break;
			}
			if (uLocal_222[iVar0] > 0x00000000)
			{
				iVar10 = 0x00000000;
				unk_0xCAE036C45E7FC720(uLocal_221[iVar0], &iVar10, 0x00000001);
				if (iVar10 == joaat("weapon_molotov"))
				{
					if (unk_0x440C646F2F11A2A1(uLocal_221[iVar0], joaat("weapon_microsmg"), 0x00000000))
					{
						unk_0x5745EA6329A91E29(uLocal_221[iVar0], joaat("weapon_microsmg"), 0x00000001);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(uLocal_221[iVar0], joaat("weapon_microsmg"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0x00000000:
					func_39(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 0x00000001:
					if (Local_37[iVar0 /*10*/].f_8 == 0xFFFFFFFF)
					{
						if (!func_38(uLocal_221[iVar0], 0x2E85A751, 0x00000001))
						{
							unk_0x6C3AE6E278DB3D0E(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						}
					}
					else if (uLocal_220[Local_37[iVar0 /*10*/].f_8] == 0x00000000 || Local_37[iVar0 /*10*/].f_9 == 0xFFFFFFFE)
					{
					}
					else if (!unk_0xC42A92762C58E1B9(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0x00000000))
					{
						if (func_5(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0x00000001) > 4f)
						{
							if (!func_38(uLocal_221[iVar0], 0x2E85A751, 0x00000001))
							{
								unk_0x5BCC146C60688877(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0x00000000);
								unk_0x6C3AE6E278DB3D0E(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
						}
						else if (!func_38(uLocal_221[iVar0], 0x950B6492, 0x00000001))
						{
							unk_0x5B1D360B9C6F0A09(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0xFFFFFFFF, Local_37[iVar0 /*10*/].f_9, 2f, 0x00000001, 0x00000000);
						}
					}
					else if (!func_38(uLocal_221[iVar0], 0x20123810, 0x00000001))
					{
						unk_0x7A3479BFA16439E6(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x41A00000);
					}
					break;
				
				case 0x00000002:
					if (unk_0x405E212DDE472467(uLocal_221[iVar0], 0x00000000))
					{
						if (iLocal_215 == iVar0)
						{
							if (func_46(uLocal_221[iVar0], 0x00000000) != 0xFFFFFFFF)
							{
								if (!func_38(uLocal_221[iVar0], 0x153011FC, 0x00000001))
								{
									unk_0x16A6C233289238AA(uLocal_221[iVar0], unk_0x6937EA2286828455(uLocal_221[iVar0], 0x00000000), 0x00000000);
								}
							}
							else if (!func_38(uLocal_221[iVar0], 0xB41F1A34, 0x00000001) || iLocal_215 != iLocal_216)
							{
								unk_0x89258193691A7600(uLocal_221[iVar0], unk_0x6937EA2286828455(uLocal_221[iVar0], 0x00000000), unk_0x16F2683693E537C9(), 0x00000008, 40f, 0x000C0024, 1000f, 0f, 0x00000001);
							}
							else if (unk_0xD1960163A3042274(uLocal_221[iVar0], 0xB41F1A34) == 0x00000001)
							{
								if (!unk_0x6B4464DA5794D055(uLocal_221[iVar0]))
								{
									unk_0xFFDDE8CC59EB6D40(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 1000f, 0x00000064, 0x00000001, 0xD31265F2);
								}
							}
						}
						else if (func_46(uLocal_221[iVar0], 0x00000000) == 0xFFFFFFFF)
						{
							if (!func_38(uLocal_221[iVar0], 0xB41F1A34, 0x00000001) || iLocal_215 != iLocal_216)
							{
								unk_0x9412BCBFE7F69F94(uLocal_221[iVar0], unk_0x6937EA2286828455(uLocal_221[iVar0], 0x00000000), unk_0x6937EA2286828455(uLocal_221[iLocal_215], 0x00000000), 0xFFFFFFFF, 40f, 0x000C0024, -1f, 0x00000014, 20f);
							}
							else if (unk_0xD1960163A3042274(uLocal_221[iVar0], 0xB41F1A34) == 0x00000001)
							{
								if (!unk_0x6B4464DA5794D055(uLocal_221[iVar0]))
								{
									unk_0xFFDDE8CC59EB6D40(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 1000f, 0x00000064, 0x00000001, 0xD31265F2);
								}
							}
						}
						else
						{
							iVar11 = unk_0xA30B8362589C124A(unk_0x6937EA2286828455(uLocal_221[iVar0], 0x00000000), 0xFFFFFFFF, 0x00000000);
							if (!unk_0xC844350D5D58C99A(iVar11) || unk_0xEB6A8945D1AC98A1(iVar11))
							{
								if (!func_38(uLocal_221[iVar0], 0x153011FC, 0x00000001))
								{
									unk_0x16A6C233289238AA(uLocal_221[iVar0], unk_0x6937EA2286828455(uLocal_221[iVar0], 0x00000000), 0x00000000);
								}
							}
							else if (!func_38(uLocal_221[iVar0], 0x7D711E7D, 0x00000001) || iLocal_215 != iLocal_216)
							{
								unk_0xFFDDE8CC59EB6D40(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 1000f, 0x00000064, 0x00000001, 0xD31265F2);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0x00000000:
			if (func_37())
			{
				iVar12 = func_36();
				if (iVar12 != 0xFFFFFFFF && !unk_0x65636D4556D82155(uLocal_221[iVar12]))
				{
					func_34(uLocal_221[iVar12], "SUSPECT_SPOTTED", 0x0000000A);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 0x00000001:
			if (func_37())
			{
				cVar13 = { func_33("START") };
				if (func_10(&uLocal_46, &cLocal_213, &cVar13, 0x00000008, 0x00000000, 0x00000000, 0x00000000))
				{
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_37())
			{
				iVar12 = func_36();
				if (iVar12 != 0xFFFFFFFF && !unk_0x65636D4556D82155(uLocal_221[iVar12]))
				{
					func_34(uLocal_221[iVar12], "SHOUT_THREATEN", 0x0000000A);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 0x00000003:
			if ((func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_212) > 0x00000BB8) && !unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				func_34(unk_0x16F2683693E537C9(), "BLIND_RAGE", 0x0000000A);
				iLocal_211++;
			}
			break;
		
		case 0x00000004:
			if (func_37() && (unk_0x1C0640BA9A7327B3() - iLocal_212) > 0x000003E8)
			{
				iVar12 = func_36();
				if (iVar12 != 0xFFFFFFFF && !unk_0x65636D4556D82155(uLocal_221[iVar12]))
				{
					if (unk_0x405E212DDE472467(uLocal_221[iVar12], 0x00000000))
					{
						func_34(uLocal_221[iVar12], "GENERIC_INSULT", 0x0000000A);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 0x00000001);
					}
					else
					{
						func_34(uLocal_221[iVar12], "SHOUT_THREATEN", 0x0000000A);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 0x00000001);
					}
				}
			}
			break;
	}
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 0x00000001)
				{
					iVar3 = 0xFFFFFFFF;
					return iVar3;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 0x00000001);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0x00000000) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_47()
{
	func_62(0x00000001);
	func_61();
}

void func_48(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_49(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_51(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 0x00000002);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_51(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_51(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

int func_53()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_54()
{
	int iVar0;
	
	switch (func_22())
	{
		case 0x00000000:
			func_60(&uLocal_46, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
			break;
		
		case 0x00000001:
			func_60(&uLocal_46, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
			break;
		
		case 0x00000002:
			func_60(&uLocal_46, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			break;
	}
	unk_0x51B096AAC60548C1(0.1f);
	unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
	unk_0x060F249A9A3E3F4E(0x00000000);
	iLocal_45 = func_58();
	switch (func_8())
	{
		case 0x0000000B:
			iVar0 = 0x00000000;
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000000;
			break;
	}
	func_57(&(Local_37[0x00000000 /*10*/]), func_8(), 0x00000000);
	func_57(&(Local_37[0x00000001 /*10*/]), func_8(), 0x00000001);
	func_57(&(Local_37[0x00000002 /*10*/]), func_8(), 0x00000002);
	func_57(&(Local_37[0x00000003 /*10*/]), func_8(), 0x00000003);
	func_57(&(Local_37[0x00000004 /*10*/]), func_8(), 0x00000004);
	func_57(&(Local_37[0x00000005 /*10*/]), func_8(), 0x00000005);
	StringCopy(&(Local_37.f_3D), func_56(iVar0), 16);
	StringCopy(&(Local_37.f_41), func_55(iVar0), 16);
	unk_0xF63400DBE3303D26("relGang", &iLocal_224);
	unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_224);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_224, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_224, 0xA49E591C);
	switch (iVar0)
	{
		case 0x00000000:
			unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, 0x11A9A7E3);
			unk_0x0E2400AB9174FA81(0x00000001, iLocal_224, 0x11A9A7E3);
			unk_0x0E2400AB9174FA81(0x00000001, 0x11A9A7E3, iLocal_224);
			break;
		
		case 0x00000001:
			unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, 0xC26D562A);
			unk_0x0E2400AB9174FA81(0x00000001, iLocal_224, 0xC26D562A);
			unk_0x0E2400AB9174FA81(0x00000001, 0xC26D562A, iLocal_224);
			break;
		
		case 0x00000002:
			unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, 0x6A3B9F86);
			unk_0x0E2400AB9174FA81(0x00000001, iLocal_224, 0x6A3B9F86);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6A3B9F86, iLocal_224);
			break;
	}
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "BALLA1";
			break;
		
		case 0x00000002:
			return "KOREANGUY";
			break;
		
		case 0x00000000:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "BAL";
			break;
		
		case 0x00000002:
			return "KOR";
			break;
		
		case 0x00000000:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0x0000000B:
			switch (iParam2)
			{
				case 0x00000000:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000001:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000002:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000003:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000004:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0x00000000;
					break;
				
				case 0x00000005:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0x00000000;
					break;
			}
			break;
		
		case 0x0000000C:
			switch (iParam2)
			{
				case 0x00000000:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000001:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000002:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000003:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000004:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0x00000000;
					break;
				
				case 0x00000005:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0x00000000;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam2)
			{
				case 0x00000000:
					*uParam0 = { -325.1079f, 6263.833f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000001:
					*uParam0 = { -312.9843f, 6250.115f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0x00000000;
					break;
				
				case 0x00000002:
					*uParam0 = { -326.1756f, 6268.338f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000003:
					*uParam0 = { -323.9344f, 6259.659f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.395f, 42.7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0x00000000;
					break;
				
				case 0x00000004:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000005:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam2)
			{
				case 0x00000000:
					*uParam0 = { -2215.32f, 4275.046f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000001:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.376f, 48.4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0x00000000;
					break;
				
				case 0x00000002:
					*uParam0 = { -2200.848f, 4268.19f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.575f, 4275.129f, 49.0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0xFFFFFFFF;
					uParam0->f_9 = 0xFFFFFFFE;
					break;
				
				case 0x00000003:
					*uParam0 = { -2202.818f, 4294.149f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.783f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0x00000000;
					break;
				
				case 0x00000004:
					*uParam0 = { -2196.271f, 4265.064f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.183f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 0x00000001;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
				
				case 0x00000005:
					*uParam0 = { -2204.492f, 4290.059f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.017f, 4292.669f, 54.873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0x00000000;
					uParam0->f_9 = 0xFFFFFFFF;
					break;
			}
			break;
	}
}

int func_58()
{
	return func_59(Global_1AF0C.f_14, Global_1AF0C.f_1D);
}

int func_59(var uParam0, int iParam1)
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_61()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uLocal_221[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uLocal_221[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xF3268524E9BE6D6E(uLocal_221[iVar0], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000001);
			}
			unk_0x6DAD7906B73F064D(&(uLocal_221[iVar0]));
		}
		if (unk_0xE4EDC4B0E92C078B(uLocal_223[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_223[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(uLocal_220[iVar0]))
		{
			unk_0x046C362CF15F1935(&(uLocal_220[iVar0]));
		}
		iVar0++;
	}
	unk_0xC05DBA7D4F88D5E5(iLocal_225, 0x00000000);
	unk_0xAB8E2DDC7AF955E0(iLocal_226, 0x00000000);
	unk_0x51B096AAC60548C1(1f);
	unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
	unk_0x060F249A9A3E3F4E(0x00000001);
	unk_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

