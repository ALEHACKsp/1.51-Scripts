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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50[68] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int iLocal_58 = 0;
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
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
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
	var uLocal_96 = 2;
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
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_114 = 0xFFFFFFFF;
	iLocal_115 = 0xFFFFFFFF;
	iLocal_120 = 0xFFFFFFFF;
	iLocal_125 = 0xFFFFFFFF;
	iLocal_151 = 0xFFFFFFFF;
	unk_0x256D93AFAE851A7A(0x00000000);
	Local_56.f_5 = 0xFFFFFFFF;
	Local_56 = 0xFFFFFFFF;
	Local_56.f_1 = 99999.99f;
	func_485(&iLocal_58);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1777B[iVar0 /*3*/][0x00000000] = 0xFFFFFFFF;
		Global_1777B[iVar0 /*3*/][0x00000001] = 0xFFFFFFFF;
		iVar0++;
	}
	if (!Global_1B416.f_7FE8.f_12C2)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000138)
		{
			Global_1B416.f_7FE8.f_7BE[0x00000000 /*939*/].f_272[iVar0] = 0xFFFFFFF1;
			Global_1B416.f_7FE8.f_7BE[0x00000001 /*939*/].f_272[iVar0] = 0xFFFFFFF1;
			Global_1B416.f_7FE8.f_7BE[0x00000002 /*939*/].f_272[iVar0] = 0xFFFFFFF1;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000017)
		{
			Global_1B416.f_7FE8.f_78E[iVar0] = -1f;
			iVar0++;
		}
		Global_1B416.f_7FE8.f_12C1 = 0xFFFFFFF1;
		Global_1B416.f_7FE8.f_12C2 = 0x00000001;
	}
	if (((!func_484() && !func_483()) && !func_482()) && !func_481())
	{
		func_480(0x0000003C, 0x00000000);
		func_480(0x0000003D, 0x00000000);
	}
	func_479();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		func_478(iVar0);
		iVar0++;
	}
	while (0x00000001)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 0x00000001;
			if (unk_0x2EBF608FFE6CA406(0x00000062))
			{
				if (unk_0x3E653638C7A26115() == 0x00000040)
				{
					if (!Global_12A8E)
					{
						iLocal_55 = 0x00000000;
					}
					else
					{
						func_477();
						func_476();
					}
					Global_12A8E = 0x00000000;
				}
				else
				{
					func_477();
					func_476();
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		if (unk_0x89DE52DB50601487() != 0x00000005)
		{
			iLocal_129 = func_474();
			func_438();
			func_436();
			func_404(&iLocal_58);
			func_374();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int iParam0)
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_271B.f_19, 0x00000007))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && func_14(func_16()))
		{
			bVar0 = 0x00000000;
			if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000006) && unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000C))
			{
				fVar1 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = 0x00000001;
					if (iParam0->f_2 == 0xFFFFFFFF)
					{
						iParam0->f_2 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00002710, 0x00003A98));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000007D0, 0x00000FA0)));
						}
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000017))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
						{
							if (unk_0xAE317D00A5A55DF6(&(iParam0->f_9), 0x00000000, 0xFFFFFFFF))
							{
								if (unk_0x1C0640BA9A7327B3() > iParam0->f_2)
								{
									if (func_9() != 0x00000007 && func_8(0x00000000, 0x00000000))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0x00000000);
										unk_0x5D96D8530B3D0904(iParam0, 0x0000001E);
									}
								}
							}
						}
						else if (unk_0x8AA6DC470ABA63A2(iParam0->f_1))
						{
							unk_0x0674E58A79778E99(iParam0, 0x0000001E);
							unk_0x43A06902454A1172(iParam0->f_1);
							iParam0->f_1 = 0xFFFFFFFF;
							iParam0->f_2 = 0xFFFFFFFF;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000017))
				{
					func_2(iParam0);
				}
				unk_0x0674E58A79778E99(iParam0, 0x0000001E);
				iParam0->f_2 = 0xFFFFFFFF;
			}
		}
	}
}

void func_2(int iParam0)
{
	unk_0x8C26F31DFF77D124();
	unk_0x0674E58A79778E99(iParam0, 0x00000017);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000016);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_271B.f_19), 0x00000016);
	}
}

void func_4(int iParam0, vector3 vParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = unk_0xD68EA767274B7444();
	unk_0xEB819BD1E585E9CB(iParam0->f_1, &Var0, vParam1, &Var1, 0x00000000, 0x00000000, 0x00000000);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		vVar2 = { func_7(iParam0->f_6 - vVar1) * Vector(52.5f, 52.5f, 52.5f) };
		vVar0 = { vVar1 + vVar2 };
	}
	return vVar0;
}

Vector3 func_7(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xD245978525608929(0x00000000, 0x00000024))
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000016);
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_271B.f_19, 0x00000016);
	if (iParam0 && bVar0)
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_271B.f_19), 0x00000016);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_1B416.f_271B.f_19, 0x00003800, 0x0000000B);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)
{
	unk_0xAE317D00A5A55DF6(sParam1, 0x00000000, 0xFFFFFFFF);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000017);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()
{
	bool bVar0;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_271B.f_19, 0x00000016);
	return (func_8(0x00000000, 0x00000000) && !bVar0);
}

bool func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("ig_orleans");
}

int func_16()
{
	return unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_14306D.f_15)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == 0xFFFFFFFF)
		{
			*uParam0++;
			uParam0->f_1 = 0x00000000;
			if (*uParam0 >= 0x00000004)
			{
				Global_14306D.f_15 = 0x00000001;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_14306D[*uParam0 /*5*/][0x00000000] < fVar2)
			{
				Global_14306D[*uParam0 /*5*/][0x00000000] = fVar2;
			}
			fVar2 = unk_0x3DA0AC70B6394B0C(iVar0);
			if (Global_14306D[*uParam0 /*5*/][0x00000001] < fVar2)
			{
				Global_14306D[*uParam0 /*5*/][0x00000001] = fVar2;
			}
			if ((iVar0 == 0x0000000F || iVar0 == 0x00000010) || iVar0 == 0x0000000E)
			{
				fVar2 = unk_0xE488F7D7B8CC550E(iVar0);
			}
			else
			{
				fVar2 = unk_0x10576FBC42CC7EB6(iVar0);
			}
			if (Global_14306D[*uParam0 /*5*/][0x00000003] < fVar2)
			{
				Global_14306D[*uParam0 /*5*/][0x00000003] = fVar2;
			}
			fVar2 = unk_0xFE46E8A54FA10801(iVar0);
			if (Global_14306D[*uParam0 /*5*/][0x00000002] < fVar2)
			{
				Global_14306D[*uParam0 /*5*/][0x00000002] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)
{
	if (iParam0 == 0x00000007)
	{
		return 51.77096f;
	}
	return unk_0x01E5CB1E14C2721C(iParam0);
}

int func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
				
				case 0x00000001:
					return 0x00000001;
				
				case 0x00000002:
					return 0x00000002;
				
				case 0x00000003:
					return 0x00000003;
				
				case 0x00000004:
					return 0x00000004;
				
				case 0x00000005:
					return 0x00000005;
				
				case 0x00000006:
					return 0x00000006;
				
				case 0x00000007:
					return 0x00000007;
				
				case 0x00000008:
					return 0x00000008;
				
				case 0x00000009:
					return 0x00000009;
				
				case 0x0000000A:
					return 0x0000000A;
				
				case 0x0000000B:
					return 0x0000000B;
				
				case 0x0000000C:
					return 0x0000000C;
				
				case 0x0000000D:
					return 0x0000000D;
				
				case 0x0000000E:
					return 0x00000011;
				
				case 0x0000000F:
					return 0x00000012;
				
				case 0x00000010:
					return 0x00000013;
				
				case 0x00000011:
					return 0x00000014;
				
				case 0x00000012:
					return 0x00000016;
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000E;
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000F;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000010;
				
				default:
			}
			break;
	}
	return 0xFFFFFFFF;
}

void func_20()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE4EDC4B0E92C078B(Global_126B1.f_247))
	{
		bVar0 = 0x00000000;
		if (iLocal_129 != Global_126B1.f_246)
		{
			bVar0 = 0x00000001;
		}
		else if (((((func_27(0x00000000) || func_27(0x00000003)) || func_27(0x00000002)) || func_27(0x00000004)) || func_27(0x0000000D)) || func_27(0x0000000E))
		{
			bVar0 = 0x00000001;
		}
		else if (Global_126B1.f_24E)
		{
			if (!func_26(Global_126B1.f_248, unk_0xAC14F6E4B17D7835(Global_126B1.f_247), 0x3F000000, 0x00000000) || func_22(Global_126B1.f_246, func_23(Global_126B1.f_246, 0x00000001)) > 0x00000000)
			{
				bVar0 = 0x00000001;
			}
		}
		else if (Global_126B1.f_24F)
		{
			if (!func_26(Global_126B1.f_24B, unk_0xAC14F6E4B17D7835(Global_126B1.f_247), 0x3F000000, 0x00000000) || func_22(Global_126B1.f_246, func_23(Global_126B1.f_246, 0x00000001)) > 0x00000000)
			{
				bVar0 = 0x00000001;
			}
		}
		else if ((!unk_0xC844350D5D58C99A(Global_126B1.f_245) || !unk_0xDF1306B443CD3D15(Global_126B1.f_245, 0x00000000)) || (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_245, 0x00000000)))
		{
			if (unk_0xC844350D5D58C99A(Global_126B1.f_245) && !unk_0xDF1306B443CD3D15(Global_126B1.f_245, 0x00000000))
			{
				Global_126B1.f_24B = { 0f, 0f, 0f };
			}
			bVar0 = 0x00000001;
		}
		else if (unk_0xC844350D5D58C99A(Global_126B1.f_245))
		{
			if (unk_0xDF1306B443CD3D15(Global_126B1.f_245, 0x00000000))
			{
				Global_126B1.f_24B = { unk_0x68F4C0EC296D3901(Global_126B1.f_245, 0x00000001) };
			}
			else
			{
				Global_126B1.f_24B = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x142CC44DB769B57E(&(Global_126B1.f_247));
			Global_126B1.f_24E = 0x00000000;
			Global_126B1.f_24F = 0x00000000;
			Global_126B1.f_245 = 0x00000000;
		}
	}
	else
	{
		Global_126B1.f_24E = 0x00000000;
		Global_126B1.f_24F = 0x00000000;
		Global_126B1.f_245 = 0x00000000;
	}
	if ((((((!unk_0xE4EDC4B0E92C078B(Global_126B1.f_247) && !func_27(0x00000000)) && !func_27(0x00000003)) && !func_27(0x00000002)) && !func_27(0x00000004)) && !func_27(0x0000000D)) && !func_27(0x0000000E))
	{
		bVar1 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000009)
		{
			if ((((((Global_17755[iVar2] != 0x00000091 && Global_1775F[iVar2] != 0x00000000) && unk_0xC844350D5D58C99A(Global_1774B[iVar2])) && unk_0xDF1306B443CD3D15(Global_1774B[iVar2], 0x00000000)) && !unk_0xE4EDC4B0E92C078B(unk_0xC0E5DA578D275A41(Global_1774B[iVar2]))) && Global_17755[iVar2] == iLocal_129) && unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(Global_1774B[iVar2])))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1774B[iVar2], 0x00000000))
				{
					Global_126B1.f_245 = Global_1774B[iVar2];
					Global_126B1.f_246 = iLocal_129;
					Global_126B1.f_24E = 0x00000000;
					Global_126B1.f_247 = unk_0x5C3B41825F6AC5A0(Global_126B1.f_245);
				}
				iVar2 = 0x0000000A;
				bVar1 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0xE4EDC4B0E92C078B(Global_126B1.f_247) && !func_21(Global_126B1.f_248, 0f, 0f, 0f, 0x00000000))
			{
				Global_126B1.f_245 = 0x00000000;
				Global_126B1.f_246 = iLocal_129;
				Global_126B1.f_24E = 0x00000001;
				Global_126B1.f_247 = unk_0x6CC513A908911CF0(Global_126B1.f_248);
			}
			if (!unk_0xE4EDC4B0E92C078B(Global_126B1.f_247) && !func_21(Global_126B1.f_24B, 0f, 0f, 0f, 0x00000000))
			{
				Global_126B1.f_245 = 0x00000000;
				Global_126B1.f_246 = iLocal_129;
				Global_126B1.f_24F = 0x00000001;
				Global_126B1.f_247 = unk_0x6CC513A908911CF0(Global_126B1.f_24B);
			}
		}
		else
		{
			Global_126B1.f_24E = 0x00000000;
			Global_126B1.f_24F = 0x00000000;
		}
		if (unk_0xE4EDC4B0E92C078B(Global_126B1.f_247))
		{
			unk_0xBC8E0A7390523199(Global_126B1.f_247, 0x000000E1);
			unk_0xDC5B2F9D0CCE3A10(Global_126B1.f_247, "PVEHICLE");
			unk_0x6ABCCE651368DB93(Global_126B1.f_247, 0x00000000);
			unk_0x2A065371C9D96655(Global_126B1.f_247, 0x00000003);
			if (iLocal_129 == 0x00000000)
			{
				iVar3 = 0x0000002A;
			}
			else if (iLocal_129 == 0x00000001)
			{
				iVar3 = 0x0000002B;
			}
			else if (iLocal_129 == 0x00000002)
			{
				iVar3 = 0x0000002C;
			}
			unk_0x61755AC17D8F538E(Global_126B1.f_247, iVar3);
		}
	}
}

bool func_21(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar1]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar1], 0x00000000))
		{
			if (Global_17755[iVar1] == iParam0)
			{
				if (iParam1 == 0x00000000 || iParam1 == unk_0x134B62B726CEC8E6(Global_1774B[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_24(int iParam0, var uParam1, int iParam2)
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

bool func_25(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_27(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_28()
{
	func_314();
	func_229();
	func_68();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (((((Local_56.f_1D.f_50 && !Local_56.f_1D.f_45) && Local_56 != 0xFFFFFFFF) && func_67(Local_56, 0x00000000)) && func_67(Local_56, 0x00000005)) && unk_0x8A22C4C08282BF26(joaat("michael1")) == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(Local_56.f_71))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						iVar1 = unk_0x134B62B726CEC8E6(iVar0);
						if (func_64(iVar1))
						{
							Local_56.f_71 = iVar0;
						}
					}
				}
			}
			else if (unk_0xDF1306B443CD3D15(Local_56.f_71, 0x00000000) && func_64(unk_0x134B62B726CEC8E6(Local_56.f_71)))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_56.f_71, 0x00000000))
				{
					if (unk_0x3D1053F9EB43B7AD(Local_56.f_71, Local_56.f_1D.f_30, Local_56.f_1D.f_33, Local_56.f_1D.f_36, 0x00000000, 0x00000001, 0x00000000))
					{
						if ((!func_63(Local_56.f_71) && !func_62(Local_56.f_71)) && Local_56.f_71 != Global_126B1.f_1E4[Local_56])
						{
							func_30(Local_56, Local_56.f_71, 0x00000001);
						}
						Local_56.f_71 = 0x00000000;
					}
				}
			}
			else
			{
				Local_56.f_71 = 0x00000000;
			}
		}
		else
		{
			Local_56.f_71 = 0x00000000;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000C) && !unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
	{
		if (Global_126B1.f_22B[0x00000000 /*21*/].f_4 != unk_0x134B62B726CEC8E6(iParam1))
		{
			return;
		}
	}
	if (Global_12A3C != 0xFFFFFFFF && Global_12A3C != iParam0)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			if (!unk_0xAF6690C489CC6203(iParam1))
			{
				unk_0x73270B3C9CC833FD(iParam1, 0x00000001, 0x00000001);
			}
			if (iParam0 == 0x00000018)
			{
				Global_1B416.f_7FE8.f_12C1 = func_50();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_49(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_31(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, 0xFFFFFFFF);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_one"))
			{
				iParam1 = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_two"))
			{
				iParam1 = 0x00000002;
			}
		}
		if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
		{
			iParam1 = Global_1B416.f_936.f_21B.f_10E1;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000002)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0x00000000;
						Global_1B416.f_7FE8.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42 = 0x00000000;
				}
			}
		}
		iVar1++;
	}
	Global_1B416.f_7FE8.f_15D6 = iParam1;
	Global_12A3A = iParam0;
	Global_1B416.f_7FE8.f_15D4 = 0x00000001;
	func_32(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_36(uParam1);
		uParam1->f_42 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_43 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_45 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_46 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0x812A93B166D97C60(iParam0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001F);
		}
		if (uParam1->f_41 == 0xFFFFFFFF && !func_35(uParam1->f_42))
		{
			uParam1->f_41 = 0x00000000;
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			uParam1->f_44 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_42))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 0x00000003:
					case 0x00000000:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000004:
					case 0x00000001:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000005:
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000009);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000A);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000D);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000C);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000000B);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000001B);
		}
	}
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000002;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000006;
			break;
		
		case 0x00000008:
			return 0x00000007;
			break;
		
		case 0x00000009:
			return 0x00000008;
			break;
		
		case 0x0000000A:
			return 0x00000018;
			break;
		
		case 0x0000000B:
			return 0x00000019;
			break;
		
		case 0x0000000C:
			return 0x0000001A;
			break;
	}
	return 0x00000000;
}

int func_34(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			(*uParam1)[iVar0] = 0x00000000;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000016)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 0x000000FF:
						(*uParam1)[iVar0] = 0x00000001;
						break;
					
					case 0x00000000:
						(*uParam1)[iVar0] = 0x00000002;
						break;
					
					case 0x00000001:
						(*uParam1)[iVar0] = 0x00000003;
						break;
					
					case 0x00000002:
						(*uParam1)[iVar0] = 0x00000004;
						break;
					
					case 0x00000003:
						(*uParam1)[iVar0] = 0x00000005;
						break;
					
					case 0x00000004:
						(*uParam1)[iVar0] = 0x00000006;
						break;
					
					case 0x00000005:
						(*uParam1)[iVar0] = 0x00000007;
						break;
					
					case 0x00000006:
						(*uParam1)[iVar0] = 0x00000008;
						break;
					
					case 0x00000007:
						(*uParam1)[iVar0] = 0x00000009;
						break;
					
					case 0x00000008:
						(*uParam1)[iVar0] = 0x0000000A;
						break;
					
					case 0x00000009:
						(*uParam1)[iVar0] = 0x0000000B;
						break;
					
					case 0x0000000A:
						(*uParam1)[iVar0] = 0x0000000C;
						break;
					
					case 0x0000000B:
						(*uParam1)[iVar0] = 0x0000000D;
						break;
					
					case 0x0000000C:
						(*uParam1)[iVar0] = 0x0000000E;
						break;
					
					case 0x0000000D:
						(*uParam1)[iVar0] = 0x0000000F;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0x00000000;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 0x00000017)
			{
				(*uParam2)[0x00000000] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 0x00000018)
			{
				(*uParam2)[0x00000001] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case 0xC4810400:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_36(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0x00000000;
	uParam0->f_4D = 0x00000000;
	uParam0->f_41 = 0x00000000;
	uParam0->f_3E = 0x00000000;
	uParam0->f_3F = 0x00000000;
	uParam0->f_40 = 0x00000000;
	uParam0->f_4A = 0x00000000;
	uParam0->f_4B = 0x00000000;
	uParam0->f_4C = 0x00000000;
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000031)
	{
		uParam0->f_9[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		uParam0->f_3B[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_43 = 0x00000000;
	uParam0->f_44 = 0x00000000;
	uParam0->f_45 = 0x00000000;
	uParam0->f_46 = 0x00000001;
	uParam0->f_47 = 0x00000000;
	uParam0->f_48 = 0x00000000;
	uParam0->f_49 = 0x00000000;
}

int func_37(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_47(iParam0, 0x00000000, 0x00000000)) || func_47(iParam0, 0x00000001, 0x00000000)) || func_47(iParam0, 0x00000002, 0x00000000)) || func_46(iParam0) != 0x00000091) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_47(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_47(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_46(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_38(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_39(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 0x73920F8E:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0x00000000;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_43())
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0x00000000;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_484() && !func_483()) && !func_482()) && !func_481()) && !func_43())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_482())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_40(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_40(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 0x00000001;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 0x00000004)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 0x00000001;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_41()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x4992196C)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAC33179C)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2AE524A8)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC575DF11)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x36B4A8A9)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0D4E5F4D)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x59A9E570)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7397224C)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x097E5533)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x19DD9ED1)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x96E24857)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD35698EF)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC5DD6967)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9A9EB7DE)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8983F9F)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E2E4F8A)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAD6065C0)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D56F01B)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3DC92356)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFE0A508C)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD707EDE)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x89BA59F5)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC3F25753)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA52F6866)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x52FF9437)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC4810400)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB5EF4C33)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6DBD6C0A)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7A2EF5E4)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x586765FB)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x34DBA661)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9B16A3B4)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD6BC7523)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAA6F980A)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x46699F47)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58CDAF30)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF34DFB25)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1AAD0DED)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D1903F9)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x91CA96EE)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x67D2B389)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x41D149AA)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F946279)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5097F589)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xED552C74)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8408F33A)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x23CA25F2)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE78CC3D9)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x33B98FE2)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4D99B7D)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x35DED0DD)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4A4E453)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x00E83C17)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x276D98A3)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3201DD49)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8A8BA94)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF8C2E0E7)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x71CBEA98)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6068AD86)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB472D2B5)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x378236E1)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E5BD8D9)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB4F32118)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42836BE5)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3D7C6410)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE99011C2)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC52C6B93)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC5DC07E)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8198AEDC)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF330CB6A)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC514AAE0)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4ABEBF23)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD4AE63D9)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x897AFC65)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x149BD32A)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73F4110E)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6290F15B)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1DD4C0FF)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79DD18AE)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD9F0503D)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64DE07A1)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7B54A9D3)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE6E967F8)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1324E960)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFCC2F483)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEDA4ED97)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x669EB40A)
	{
	}
	else if (iParam0 == 0xD039510B)
	{
	}
	else if (iParam0 == 0x287FA449)
	{
	}
	else if (iParam0 == 0x71D3B6F0)
	{
	}
	else if (iParam0 == 0x7F81A829)
	{
	}
	else if (iParam0 == 0x8F49AE28)
	{
	}
	else if (iParam0 == 0x798682A2)
	{
	}
	else if (iParam0 == 0xBBA2A2F7)
	{
	}
	else if (iParam0 == 0x5BEB3CE0)
	{
	}
	else if (iParam0 == 0xDD71BFEB)
	{
	}
	else if (iParam0 == 0x1A861243)
	{
	}
	else if (iParam0 == 0x619C1B82)
	{
	}
	else if (iParam0 == 0xD2F77E37)
	{
	}
	else if (iParam0 == 0x20314B42)
	{
	}
	else if (iParam0 == 0xBE11EFC6)
	{
	}
	else if (iParam0 == 0xA7DCC35C)
	{
	}
	else if (iParam0 == 0x83070B62)
	{
	}
	else if (iParam0 == 0x5EE005DA)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBA5334AC)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA29F78B0)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEC3E3404)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C3FFF49)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD128DFD)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56D42971)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE1C03AB0)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEEF345EC)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E3D1F59)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x28EAB80F)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC7E55211)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x92F5024E)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD757D97D)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2B0C4DCD)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6E8DA4F7)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F039A67)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCB642637)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEA6A047F)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x127E90D5)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x36A167E0)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9472CD24)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x734C5E50)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF966F3C)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF38C4245)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xECA6B6A3)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD86A0247)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4EE74355)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9F6ED5A2)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE550775B)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42ACA95F)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x18619B7E)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x97553C28)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79178F0A)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64F49967)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3ADB9758)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3404691C)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x185E2FF3)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2C1FEA99)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE44C4B9)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x11F58A5A)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3944D5A0)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C8DBA51)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x177DA45C)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73920F8E)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB53C6C52)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1446590A)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8B213907)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC7C0A00)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x04F48FC4)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56CDEE7D)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x817AFAAD)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x82E47E85)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7F3415E3)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0409D787)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4201A843)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC98BBAD6)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xDA5EC7DA)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE0B9F22)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x94114926)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF0B8D48)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58F77553)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4669D038)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x98F65A5E)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x665F785D)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6B73A9BE)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_43()
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

int func_44(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_39(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000018]))
	{
		if (iParam0 == Global_126B1.f_1E4[0x00000018])
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 0x00000018 && iVar0 != 0x00000015) && iVar0 != 0x00000016) && iVar0 != 0x00000017) && iVar0 != 0x0000001B) && iVar0 != 0x0000001E) && iVar0 != 0x00000021) && iVar0 != 0x0000001C) && iVar0 != 0x0000001F) && iVar0 != 0x00000022) && iVar0 != 0x0000001A) && iVar0 != 0x0000001D) && iVar0 != 0x00000020)
			{
				if (iParam0 == Global_126B1.f_1E4[iVar0])
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000091;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000091;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				return Global_17755[iVar0];
			}
		}
		iVar0++;
	}
	return 0x00000091;
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_48(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0x00000000))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0x00000000;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 0x00000005;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 0x00000003;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000002)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_49(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

int func_50()
{
	var uVar0;
	
	func_60(&uVar0, unk_0x4460E481B9E33ADA());
	func_59(&uVar0, unk_0x8D199E381D262EEF());
	func_58(&uVar0, unk_0xD8A54335F18763BA());
	func_53(&uVar0, unk_0x972A296334C9D57B());
	func_52(&uVar0, unk_0x118229AD063C3C1D());
	func_51(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_54(int iParam0, int iParam1)
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

var func_55(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_56(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)
{
	return iParam0 & 0x0000000F;
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_61(var uParam0, int iParam1)
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
			uParam0->f_4 = func_23(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(0x00000002, 0x00000001);
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
			if (func_43())
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
			if (func_43())
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
		if (!func_21(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_21(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_21(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_62(int iParam0)
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

int func_63(int iParam0)
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

int func_64(int iParam0)
{
	switch (Local_56.f_6)
	{
		case 0x00000000:
			return func_66(iParam0);
			break;
		
		case 0x00000001:
			if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0x83496B932152D4D4(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			return func_65(iParam0);
			break;
		
		case 0x00000002:
			return (unk_0xAFB8495D36825275(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0x00000000;
}

int func_65(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0x00000000;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0x00000000;
	}
	if (((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && !unk_0xAD09C9A4B56FA133(iParam0)) && !unk_0xD1CC995EE5EB1EC1(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_66(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0x00000000;
	}
	if ((((!unk_0xC41A9202669A24C4(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_68()
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 0x00000031;
	Var0.f_3B = 0x00000002;
	Var0.f_4E = 0xFFFFFFFF;
	Var0.f_4F = 0xFFFFFFFF;
	Var0.f_60 = 0xFFFFFFFF;
	Var0.f_61 = 0x00000001;
	Var0.f_63 = 0x00000084;
	Var0.f_64 = 0xFFFFFFFF;
	Var1.f_9 = 0x00000031;
	Var1.f_3B = 0x00000002;
	bVar2 = 0x00000000;
	iVar3 = 0x00000000;
	if (iLocal_113 > 0x00000000 && iLocal_113 != 0x00000063)
	{
		if (((((((((((((((Local_56 == 0xFFFFFFFF || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D.f_7, Local_56.f_1D.f_A, Local_56.f_1D.f_D, 0x00000000, 0x00000001, 0x00000000)) || ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[Local_56], 0x00000000)) && (unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), Global_126B1.f_1E4[Local_56]) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_1E4[Local_56], 0x00000001)))) || ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && ((unk_0xEE9925602B29903C(unk_0x16F2683693E537C9()) - 1f) > 0.15f && unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Global_126B1.f_1E4[Local_56])))) || ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_1E4[Local_56], 0x00000001))) || (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))) || func_27(0x00000000)) || func_27(0x00000003)) || func_27(0x00000002)) || func_27(0x00000004)) || func_27(0x0000000E)) || func_228(0x00000000) != bLocal_161) || bLocal_142) || func_227(0xBF800000))
		{
			iLocal_113 = 0x00000063;
		}
	}
	switch (iLocal_113)
	{
		case 0x00000000:
			if ((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !Global_12061) && !bLocal_142) && !unk_0x757EF87A33649210())
			{
				if ((((((((((Local_56.f_1D.f_50 && Local_56.f_2 == 0x00000000) && (Global_126B1.f_250[0x00000000] != 0xFFFFFFFF || func_226() != 0x00000000)) && Local_56 != 0xFFFFFFFF) && !iLocal_159) && !func_27(0x00000000)) && !func_27(0x00000003)) && !func_27(0x00000002)) && !func_27(0x00000004)) && !func_27(0x0000000E)) && !func_227(0xBF800000))
				{
					if (iLocal_115 != 0xFFFFFFFF)
					{
					}
					else if (func_67(Local_56, 0x00000000) && func_67(Local_56, 0x00000005))
					{
						if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D.f_7, Local_56.f_1D.f_A, Local_56.f_1D.f_D, 0x00000000, 0x00000001, 0x00000000) && !unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9())) && !unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
						{
							if ((!unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]) || !unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[Local_56], 0x00000000)) || (!unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), Global_126B1.f_1E4[Local_56]) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_1E4[Local_56], 0x00000001)))
							{
								iVar6 = func_226();
								iVar7 = 0x00000000;
								while (iVar7 < iVar6)
								{
									if (func_64(func_222(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0x00000000;
								while (iVar4 < Global_126B1.f_250)
								{
									if (Global_126B1.f_250[iVar4] != 0xFFFFFFFF)
									{
										if ((func_221(Global_126B1.f_250[iVar4], iLocal_129) && Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[Global_126B1.f_250[iVar4]] == 0xFFFFFFF1) && (Global_126B1.f_250[iVar4] != 0x000000C8 || !Global_1B416.f_61EC.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0x00000000)
								{
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										iLocal_144 = 0x00000001;
										if (Local_56.f_6 == 0x00000003)
										{
											func_220(&iLocal_114, 0x00000003, "WEB_VEH_TRIG2", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										}
										else
										{
											func_220(&iLocal_114, 0x00000003, "WEB_VEH_TRIG", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										}
										bLocal_161 = func_228(0x00000000);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0x00000000)
									{
										if (!unk_0xFEBC1E4EC9E001F0() || func_219("HANGAR_NO"))
										{
											func_218("HANGAR_NO", 0xFFFFFFFF);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = 0x00000001;
									}
									else if (Local_56.f_6 == 0x00000001)
									{
										if (!unk_0xFEBC1E4EC9E001F0() || func_219("MARINA_NO"))
										{
											func_218("MARINA_NO", 0xFFFFFFFF);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = 0x00000001;
									}
									else if (Local_56.f_6 == 0x00000002)
									{
										if (!unk_0xFEBC1E4EC9E001F0() || func_219("HELIPAD_NO"))
										{
											func_218("HELIPAD_NO", 0xFFFFFFFF);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = 0x00000001;
									}
									else if (Local_56.f_6 == 0x00000003)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!unk_0xFEBC1E4EC9E001F0() || func_219(&Var8))
										{
											func_218(&Var8, 0xFFFFFFFF);
											cLocal_162 = { Var8 };
										}
										bVar2 = 0x00000001;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0x00000000;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_216(0x00000000, 0xFFFFFFFF, 0x00000000))
			{
				if (iLocal_115 != 0xFFFFFFFF)
				{
					iLocal_113 = 0x00000000;
					return;
				}
				if (func_215(iLocal_114, 0x00000001))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					}
					else
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							unk_0x3E5CE368CD085FFA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
						}
					}
					func_214();
					iLocal_116 = 0x00000000;
					iLocal_117 = 0x00000000;
					iLocal_118 = 0x00000000;
					iLocal_109 = 0xFFFFFFFF;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 0x00000002:
			if (!iLocal_116 || iLocal_117)
			{
				func_213(0x00000000, 0x00000000);
				func_212(0x00000001, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				func_211(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000001);
				func_210("WEB_VEH_TITLE");
				iVar9 = 0x00000000;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0x00000000;
					iVar9++;
				}
				iVar10 = 0xFFFFFFFF;
				iVar11 = 0x00000000;
				func_61(&(Local_56.f_8), Local_56);
				iVar13 = 0x00000000;
				iVar14 = func_226();
				iVar12 = 0x00000000;
				while (iVar12 < iVar14)
				{
					if (func_64(func_222(iVar12)))
					{
						if (iVar10 == 0xFFFFFFFF)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_222(iVar12))
						{
							iLocal_109 = iVar13;
							iVar11 = 0x00000001;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0x00000000;
				while (iVar12 < Global_126B1.f_250)
				{
					if (Global_126B1.f_250[iVar12] != 0xFFFFFFFF)
					{
						if ((func_221(Global_126B1.f_250[iVar12], iLocal_129) && Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[Global_126B1.f_250[iVar12]] == 0xFFFFFFF1) && (Global_126B1.f_250[iVar12] != 0x000000C8 || !Global_1B416.f_61EC.f_7))
						{
							func_138(Global_126B1.f_250[iVar12], &Var0, 0x00000000, iLocal_129, 0xFFFFFFFF, 0xFFFFFFFF);
							if (iVar10 == 0xFFFFFFFF)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_42)
							{
								iLocal_109 = iVar13;
								iVar11 = 0x00000001;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (iLocal_109 == 0xFFFFFFFF)
				{
					iLocal_109 = iVar10;
				}
				iVar13 = 0x00000000;
				iVar14 = func_226();
				iVar12 = 0x00000000;
				while (iVar12 < iVar14)
				{
					if (func_64(func_222(iVar12)))
					{
						unk_0x5D96D8530B3D0904(&(iLocal_110[(iVar13 / 0x00000020)]), (iVar13 % 0x00000020));
						func_134(iVar13, unk_0x1739BA50603D849C(func_222(iVar12)), 0x00000000, 0x00000001, 0x00000000, 0x00000000);
						if ((iLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 0x00000003)
						{
							func_133(iVar13, 0x00000004, 0x00000000);
						}
						else
						{
							func_133(iVar13, 0x00000000, 0x00000000);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0x00000000;
				while (iVar12 < Global_126B1.f_250)
				{
					if (Global_126B1.f_250[iVar12] != 0xFFFFFFFF)
					{
						if ((func_221(Global_126B1.f_250[iVar12], iLocal_129) && Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[Global_126B1.f_250[iVar12]] == 0xFFFFFFF1) && (Global_126B1.f_250[iVar12] != 0x000000C8 || !Global_1B416.f_61EC.f_7))
						{
							unk_0x5D96D8530B3D0904(&(iLocal_110[(iVar13 / 0x00000020)]), (iVar13 % 0x00000020));
							func_138(Global_126B1.f_250[iVar12], &Var0, 0x00000000, iLocal_129, 0xFFFFFFFF, 0xFFFFFFFF);
							if (Global_126B1.f_250[iVar12] != 0x000000A4)
							{
								func_134(iVar13, func_131(Global_126B1.f_250[iVar12]), 0x00000000, 0x00000001, 0x00000000, 0x00000000);
							}
							else if (Var0.f_43 == 0x00000000)
							{
								func_134(iVar13, "TWOSTRINGS", 0x00000002, 0x00000001, 0x00000000, 0x00000000);
								func_128(func_131(Global_126B1.f_250[iVar12]), 0x00000000);
								func_128("VNX_SWFTC", 0x00000000);
							}
							else if (Var0.f_43 == 0x00000001)
							{
								func_134(iVar13, "TWOSTRINGS", 0x00000002, 0x00000001, 0x00000000, 0x00000000);
								func_128(func_131(Global_126B1.f_250[iVar12]), 0x00000000);
								func_128("VNX_SWFTB", 0x00000000);
							}
							else
							{
								func_134(iVar13, func_131(Global_126B1.f_250[iVar12]), 0x00000000, 0x00000001, 0x00000000, 0x00000000);
							}
							if (iLocal_109 == iVar13 && iVar11)
							{
								func_133(iVar13, 0x00000004, 0x00000000);
							}
							else
							{
								func_133(iVar13, 0x00000000, 0x00000000);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_127(iLocal_109, 0x00000001, 0x00000001);
				iLocal_119 = 0x00000001;
				iLocal_117 = 0x00000000;
				iLocal_116 = 0x00000001;
			}
			else
			{
				iVar3 = 0x00000000;
				if (unk_0x0EFF6B4415DAF4A1())
				{
					if (unk_0x9E6C8D8976DA0ECD(0x00000002))
					{
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
						unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F1, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F2, 0x00000001);
						func_124(0x00000000, 0x00000000, 0x00000000, 0x00000001);
						func_123(0x00000000, 0xFFFFFFFF, 0x00000001);
						if (func_122())
						{
							if (Global_4121D1 != iLocal_109)
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								iLocal_109 = Global_4121D1;
								func_127(iLocal_109, 0x00000001, 0x00000001);
								iLocal_119 = 0x00000001;
							}
							else
							{
								iVar3 = 0x00000001;
							}
						}
					}
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))
				{
					iLocal_119 = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					iVar15 = (iLocal_109 - 0x00000001);
					while (iVar15 >= 0x00000000)
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_110[(iVar15 / 0x00000020)], (iVar15 % 0x00000020)))
						{
							iLocal_109 = iVar15;
							bVar16 = 0x00000001;
							iVar15 = 0x00000000;
						}
						iVar15 = (iVar15 + 0xFFFFFFFF);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 0x00000001);
						while (iVar15 >= iLocal_109 + 1)
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_110[(iVar15 / 0x00000020)], (iVar15 % 0x00000020)))
							{
								iLocal_109 = iVar15;
								bVar16 = 0x00000001;
								iVar15 = 0x00000000;
							}
							iVar15 = (iVar15 + 0xFFFFFFFF);
						}
					}
					if (bVar16)
					{
						func_127(iLocal_109, 0x00000001, 0x00000001);
					}
				}
				else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))
				{
					iLocal_119 = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					iVar17 = iLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 0x00000001))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_110[(iVar17 / 0x00000020)], (iVar17 % 0x00000020)))
						{
							iLocal_109 = iVar17;
							bVar18 = 0x00000001;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0x00000000;
						while (iVar17 <= (iLocal_109 - 0x00000001))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_110[(iVar17 / 0x00000020)], (iVar17 % 0x00000020)))
							{
								iLocal_109 = iVar17;
								bVar18 = 0x00000001;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_127(iLocal_109, 0x00000001, 0x00000001);
					}
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9) || iVar3 == 0x00000001)
				{
					bVar19 = 0x00000000;
					iVar3 = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					iVar21 = 0x00000000;
					iVar22 = func_226();
					iVar20 = 0x00000000;
					while (iVar20 < iVar22)
					{
						if (func_64(func_222(iVar20)))
						{
							if (iLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_222(iVar20) || !unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56])) || !unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[Local_56], 0x00000000)) || Local_56 == 0x00000015) || Local_56 == 0x00000016) || Local_56 == 0x00000017))
							{
								bVar19 = 0x00000001;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_222(iVar20)) || (!iLocal_118 && Local_56 == 0x00000015)) || (!iLocal_118 && Local_56 == 0x00000016)) || (!iLocal_118 && Local_56 == 0x00000017))
								{
									func_121("VEH_SELECT_CNFA", 0x00000000, 0x00000000);
									func_120(0xFFFFFFFF);
									func_119(0x000000C9, "ITEM_YES", 0xFFFFFFFF);
									func_119(0x000000CA, "ITEM_NO", 0xFFFFFFFF);
									iLocal_118 = 0x00000001;
									iVar20 = func_226() + 1;
								}
								else if (Local_56.f_6 == 0x00000003)
								{
									if (func_118(func_222(iVar20)))
									{
										iLocal_160 = func_222(iVar20);
										iLocal_116 = 0x00000000;
										iLocal_117 = 0x00000000;
										iLocal_111 = 0x00000000;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 0x00000001;
										iLocal_160 = func_222(iVar20);
										iLocal_113 = 0x00000063;
									}
								}
								else if (Local_56.f_6 == 0x00000000 && func_118(func_222(iVar20)))
								{
									iLocal_160 = func_222(iVar20);
									iLocal_116 = 0x00000000;
									iLocal_117 = 0x00000000;
									iLocal_111 = 0x00000000;
									iLocal_113++;
								}
								else
								{
									if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]))
									{
										unk_0x73270B3C9CC833FD(Global_126B1.f_1E4[Local_56], 0x00000000, 0x00000001);
										unk_0xA954465BA6FDEFE2(&(Global_126B1.f_1E4[Local_56]));
									}
									Var1.f_42 = func_222(iVar20);
									unk_0x5D96D8530B3D0904(&(Var1.f_4D), 0x0000000E);
									func_115(Local_56, &Var1, 0f, 0f, 0f, -1f, 0x00000091);
									func_114(Local_56);
									func_61(&(Local_56.f_8), Local_56);
									iVar20 = func_226() + 1;
									iLocal_117 = 0x00000001;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0x00000000;
						while (iVar20 < Global_126B1.f_250)
						{
							if (Global_126B1.f_250[iVar20] != 0xFFFFFFFF)
							{
								if ((func_221(Global_126B1.f_250[iVar20], iLocal_129) && Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[Global_126B1.f_250[iVar20]] == 0xFFFFFFF1) && (Global_126B1.f_250[iVar20] != 0x000000C8 || !Global_1B416.f_61EC.f_7))
								{
									func_138(Global_126B1.f_250[iVar20], &Var0, 0x00000000, iLocal_129, 0xFFFFFFFF, 0xFFFFFFFF);
									if (iLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_42 || !unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56])) || !unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[Local_56], 0x00000000)))
									{
										bVar19 = 0x00000001;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 0x00000003)
											{
												func_121("VEH_SELECT_CNF", 0x00000000, 0x00000000);
											}
											else
											{
												func_121("VEH_SELECT_CNFA", 0x00000000, 0x00000000);
											}
											func_120(0xFFFFFFFF);
											func_119(0x000000C9, "ITEM_YES", 0xFFFFFFFF);
											func_119(0x000000CA, "ITEM_NO", 0xFFFFFFFF);
											iLocal_118 = 0x00000001;
											iVar20 = Global_126B1.f_250 + 1;
										}
										else if (Var0.f_42 == joaat("marshall"))
										{
											iLocal_113 = 0x00000003;
											iLocal_117 = 0x00000001;
											iVar20 = Global_126B1.f_250 + 1;
										}
										else
										{
											if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]))
											{
												unk_0x73270B3C9CC833FD(Global_126B1.f_1E4[Local_56], 0x00000000, 0x00000001);
												unk_0xA954465BA6FDEFE2(&(Global_126B1.f_1E4[Local_56]));
											}
											func_138(Global_126B1.f_250[iVar20], &Var0, 0x00000000, iLocal_129, 0xFFFFFFFF, 0xFFFFFFFF);
											unk_0x5D96D8530B3D0904(&(Var0.f_4D), 0x0000000E);
											if (unk_0xC41A9202669A24C4(Var0.f_42))
											{
												unk_0x5D96D8530B3D0904(&(Var0.f_4D), 0x00000016);
											}
											func_115(Local_56, &Var0, 0f, 0f, 0f, -1f, 0x00000091);
											func_114(Local_56);
											func_61(&(Local_56.f_8), Local_56);
											iVar20 = Global_126B1.f_250 + 1;
											iLocal_117 = 0x00000001;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA) || unk_0xB9132A06AE472728(0x00000002, 0x000000EE))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (iLocal_118)
					{
						iLocal_119 = 0x00000001;
						iLocal_118 = 0x00000000;
					}
					else
					{
						iLocal_113 = 0x00000063;
					}
				}
			}
			unk_0x3FC8DBCC154CA56B();
			if (iLocal_119)
			{
				func_121("", 0x00000000, 0x00000000);
				func_120(0xFFFFFFFF);
				func_119(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF);
				func_119(0x000000CA, "ITEM_EXIT", 0xFFFFFFFF);
				iLocal_118 = 0x00000000;
				iLocal_119 = 0x00000000;
			}
			func_74(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			break;
		
		case 0x00000003:
			if (!iLocal_116 || iLocal_117)
			{
				func_213(0x00000000, 0x00000000);
				func_212(0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_211(0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
				iVar23 = 0x00000000;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0x00000000;
					iVar23++;
				}
				func_210("WEB_VEH_TITLE2");
				iVar23 = 0x00000000;
				while (iVar23 < 0x00000019)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_134(iVar23, &Var24, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&(iLocal_112[(iVar23 / 0x00000020)]), (iVar23 % 0x00000020));
					iVar23++;
				}
				if (Local_131.f_C == 0x00000000)
				{
					iLocal_111 = Global_1B416.f_6259.f_139[0x000000C8];
				}
				else if (Local_131.f_C == 0x00000001)
				{
					iLocal_111 = Global_1B416.f_6259.f_272[0x000000C8];
				}
				else
				{
					iLocal_111 = Global_1B416.f_6259.f_3AB[0x000000C8];
				}
				func_127(iLocal_111, 0x00000001, 0x00000001);
				iLocal_119 = 0x00000001;
				iLocal_117 = 0x00000000;
				iLocal_116 = 0x00000001;
			}
			else
			{
				iVar3 = 0x00000000;
				if (unk_0x0EFF6B4415DAF4A1())
				{
					if (unk_0x9E6C8D8976DA0ECD(0x00000002))
					{
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F1, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F2, 0x00000001);
						func_124(0x00000000, 0x00000000, 0x00000000, 0x00000001);
						func_123(0x00000000, 0xFFFFFFFF, 0x00000001);
						if (func_122())
						{
							if (Global_4121D1 != iLocal_111)
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								iLocal_111 = Global_4121D1;
								func_127(iLocal_111, 0x00000001, 0x00000001);
								iLocal_119 = 0x00000001;
							}
							else
							{
								iVar3 = 0x00000001;
							}
						}
					}
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))
				{
					iLocal_119 = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					iVar25 = (iLocal_111 - 0x00000001);
					while (iVar25 >= 0x00000000)
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_112[(iVar25 / 0x00000020)], (iVar25 % 0x00000020)))
						{
							iLocal_111 = iVar25;
							bVar26 = 0x00000001;
							iVar25 = 0x00000000;
						}
						iVar25 = (iVar25 + 0xFFFFFFFF);
					}
					if (!bVar26)
					{
						iVar25 = 0x0000001F;
						while (iVar25 >= iLocal_111 + 1)
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_112[(iVar25 / 0x00000020)], (iVar25 % 0x00000020)))
							{
								iLocal_111 = iVar25;
								bVar26 = 0x00000001;
								iVar25 = iLocal_111;
							}
							iVar25 = (iVar25 + 0xFFFFFFFF);
						}
					}
					if (bVar26)
					{
						func_127(iLocal_111, 0x00000001, 0x00000001);
					}
				}
				else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))
				{
					iLocal_119 = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					iVar27 = iLocal_111 + 1;
					while (iVar27 <= 0x0000001F)
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_112[(iVar27 / 0x00000020)], (iVar27 % 0x00000020)))
						{
							iLocal_111 = iVar27;
							bVar28 = 0x00000001;
							iVar27 = 0x0000001F;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0x00000000;
						while (iVar27 <= (iLocal_111 - 0x00000001))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_112[(iVar27 / 0x00000020)], (iVar27 % 0x00000020)))
							{
								iLocal_111 = iVar27;
								bVar28 = 0x00000001;
								iVar27 = iLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_127(iLocal_111, 0x00000001, 0x00000001);
					}
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9) || iVar3 == 0x00000001)
				{
					iVar3 = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[Local_56]))
					{
						unk_0x73270B3C9CC833FD(Global_126B1.f_1E4[Local_56], 0x00000000, 0x00000001);
						unk_0xA954465BA6FDEFE2(&(Global_126B1.f_1E4[Local_56]));
					}
					uVar29 = iLocal_111 + 1;
					if (iLocal_129 == 0x00000000)
					{
						Global_1B416.f_6259.f_139[0x000000C8] = uVar29;
					}
					else if (iLocal_129 == 0x00000001)
					{
						Global_1B416.f_6259.f_272[0x000000C8] = uVar29;
					}
					else if (iLocal_129 == 0x00000002)
					{
						Global_1B416.f_6259.f_3AB[0x000000C8] = uVar29;
					}
					func_138(0x000000C8, &Var0, 0x00000000, iLocal_129, 0xFFFFFFFF, 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&(Var0.f_4D), 0x0000000E);
					if (unk_0xC41A9202669A24C4(Var0.f_42))
					{
						unk_0x5D96D8530B3D0904(&(Var0.f_4D), 0x00000016);
					}
					func_115(Local_56, &Var0, 0f, 0f, 0f, -1f, 0x00000091);
					func_114(Local_56);
					func_61(&(Local_56.f_8), Local_56);
					iLocal_117 = 0x00000001;
					iLocal_113 = 0x00000002;
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA) || unk_0xB9132A06AE472728(0x00000002, 0x000000EE))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					iLocal_116 = 0x00000000;
					iLocal_117 = 0x00000000;
					iLocal_113 = (iLocal_113 - 0x00000001);
				}
			}
			unk_0x3FC8DBCC154CA56B();
			if (iLocal_119)
			{
				func_121("", 0x00000000, 0x00000000);
				func_120(0xFFFFFFFF);
				func_119(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF);
				func_119(0x000000CA, "ITEM_EXIT", 0xFFFFFFFF);
				iLocal_118 = 0x00000000;
				iLocal_119 = 0x00000000;
			}
			func_74(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			break;
		
		case 0x00000046:
			break;
		
		case 0x00000063:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
				{
					if (!unk_0x93A8B5F2A6FEDE1A())
					{
						unk_0x3E5CE368CD085FFA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
					}
				}
			}
			func_71(0x00000001, 0xFFFFFFFF);
			iLocal_113 = 0x00000000;
			func_69(&iLocal_114);
			iLocal_114 = 0xFFFFFFFF;
			break;
	}
	if (!bVar2 && unk_0xFEBC1E4EC9E001F0())
	{
		if (!unk_0xEA6BC48857E0AC4C(&cLocal_162))
		{
			if ((((func_219("HANGAR_NO") || func_219("MARINA_NO")) || func_219("HELIPAD_NO")) || func_219("CAR_GAR_NO_1")) || func_219("CAR_GAR_NO_2"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_69(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*iParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*iParam0 = 0xFFFFFFFF;
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_71(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_73(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_574E.f_20E1 = 0x00000000;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(0x00000009, 0x00000000);
		Global_574E.f_15FC[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0x00000000;
	}
	if (bParam0)
	{
		func_72(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_72(int iParam0)
{
	if (iParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0x00000000;
		iParam0->f_9 = 0x00000000;
	}
}

int func_73(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000006)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 0x00000001;
		}
		else if (Global_574E.f_1659[iVar2] == 0x00000000)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_73(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_111(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_109(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0x00000000;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0x00000000);
		if (func_108())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_108())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 0x00000001)
		{
			func_134(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			Global_574E.f_177E = 0x00000001;
		}
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000002)
	{
		if (iVar5 == 0x00000001 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_107(0x0000001D), 64);
					StringCopy(&cVar64, func_104(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_103(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				func_103(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_102();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000000;
					iVar18 = 0x00000000;
					iVar14 = 0x00000000;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 0x00000002)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000003)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000001)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000008)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000005)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000006)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000007)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000009)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0x00000000);
				}
				if (Global_574E.f_1667)
				{
					func_102();
					func_100((((Global_574B + fParam5) - 0.00390625f) - func_101("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_102();
						func_100((((Global_574B + fParam5) - 0.00390625f) - func_101("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0x00000000;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0x00000000)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000CC;
				}
				func_103(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0x00000000 && Global_574E.f_129E != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_109(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_99(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_103(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_99(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_109(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_98(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_107(Global_574E.f_12A0), func_104(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_574E.f_129E > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 0xFFFFFFFF;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0x00000000 && Global_412185.f_41 != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_109(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_99(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_103(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_99(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_109(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_98(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_107(Global_412185.f_43), func_104(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_412185.f_41 > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 0xFFFFFFFF;
					}
				}
			}
			func_90(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 0x00000001 || !Global_574E.f_1660)
		{
			iVar19 = 0x00000000;
			iVar23 = 0x00000000;
			iVar20 = 0x00000000;
			iVar21 = 0x00000000;
			iVar22 = 0x00000000;
			iVar9 = 0x00000000;
			iVar10 = 0x00000000;
			iVar11 = 0x00000000;
			iVar12 = 0x00000000;
			iVar13 = 0x00000000;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 0x00000001);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0x00000000;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = 0x00000000;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = 0x00000001;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = 0x00000000;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 0x00000001) && bVar33)
				{
					iVar70 = 0x000000FF;
					iVar71 = 0x000000FF;
					iVar72 = 0x000000FF;
					iVar73 = 0x000000FF;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(0x00000001, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0x00000000);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0x00000000;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 0x00000005)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0x00000000;
						bVar53 = 0x00000000;
						if (Global_574E.f_177B[0x00000000] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000000])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000000;
							}
						}
						if (Global_574E.f_177B[0x00000001] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000001])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000001;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 0x00000004 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = 0x00000001;
						}
						else
						{
							bVar52 = 0x00000000;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0x00000000:
								break;
							
							case 0x00000001:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0x00000000;
										iVar26 = 0x00000000;
										iVar27 = 0x00000000;
										iVar28 = 0x00000000;
										iVar29 = 0x00000000;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											bVar50 = 0x00000000;
											bVar51 = 0x00000000;
											iVar14 = 0x00000000;
											while (iVar14 < 0x00000004)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
												{
													bVar51 = 0x00000001;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
												{
													bVar50 = 0x00000001;
												}
												iVar14++;
											}
											func_88(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										}
										if (iVar28 > 0x00000000)
										{
											iVar14 = 0x00000000;
											while (iVar14 < iVar28)
											{
												if (func_109(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0x00000000)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000003D)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											iVar69 = (iVar8 - 0x00000001);
											while (iVar69 >= 0x00000000)
											{
												if (Global_574E.f_13DB[iVar69] == 0x00000002)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 0xFFFFFFFF);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_109(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_109(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_107(0x0000001A), func_104(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_109(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_109(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_107(0x0000001B), func_104(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									iVar25 = 0x00000000;
									iVar26 = 0x00000000;
									iVar27 = 0x00000000;
									iVar28 = 0x00000000;
									iVar29 = 0x00000000;
									iVar31 = 0x00000000;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										bVar50 = 0x00000000;
										bVar51 = 0x00000000;
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												bVar51 = 0x00000001;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												bVar50 = 0x00000001;
											}
											iVar14++;
										}
										func_88(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_87(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0x00000000;
									while (iVar14 < 0x00000004)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000001;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000008;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000005;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000006;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000007;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000009;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 0x00000002;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 0x00000003;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar28)] == 0x0000003D)
											{
												if (func_109(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_109(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_98(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_107(Global_574E.f_1151[(iVar22 + iVar28)]), func_104(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_107(Global_574E.f_1151[(iVar22 + iVar28)]), func_104(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 0x00000004;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										if (iVar31 == 0x00000004 && Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0x00000000);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0x00000000);
											if (func_86() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_88(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(0x000000FF, 0x000000FF, 0x000000FF, 0x00000096);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0x00000000);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0x00000000);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0x00000000)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0x00000000;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000002 && Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000033) && Global_574E.f_1151[(iVar22 + iVar14)] != 0x0000003D)
											{
												if (func_109(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_109(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_98(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_107(Global_574E.f_1151[(iVar22 + iVar14)]), func_104(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_107(Global_574E.f_1151[(iVar22 + iVar14)]), func_104(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_107(Global_574E.f_1151[(iVar22 + iVar14)]), func_104(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = 0x00000001;
								iVar19++;
								iVar14 = 0x00000000;
								while (iVar14 < 0x00000004)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 0x00000002:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_88(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_87(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_109(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_109(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_107(0x0000001A), func_104(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_109(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_109(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_107(0x0000001B), func_104(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_88(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_85((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
									}
								}
								bVar39 = 0x00000001;
								iVar20++;
								break;
							
							case 0x00000003:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_88(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_87(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_109(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_109(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_107(0x0000001A), func_104(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_109(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_109(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_107(0x0000001B), func_104(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_88(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_84((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_109(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0x00000000)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_109(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_109(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_98(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_107(0x0000001A), func_104(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_109(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_109(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_98(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_107(0x0000001B), func_104(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_109(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_98(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_107(Global_574E.f_1151[iVar22]), func_104(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_83(Global_574E.f_1151[iVar22])), (fVar37 * func_83(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
											}
										}
									}
								}
								bVar39 = 0x00000001;
								iVar22++;
								break;
							
							case 0x00000005:
								bVar39 = 0x00000001;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 0x00000005)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_109(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 0x00000001;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0x00000000;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 0x00000001;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 0x00000001;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_76(0x00000000);
	}
	Global_574E.f_20BE = 0x00000000;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(0x0000000A);
	}
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000008);
	if (bParam0)
	{
		func_75(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_75(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_76(int iParam0)
{
	if (func_82())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_81(0x00000000))
		{
			func_77(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_77(int iParam0)
{
	if (func_82())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_80())
		{
			func_79(0x00000001, 0x00000001);
		}
		else
		{
			func_79(0x00000000, 0x00000000);
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
	if (!func_78())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_78()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_81(0x00000000))
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

bool func_80()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_81(int iParam0)
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

bool func_82()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x00000035:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_84(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_85(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_86()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_87(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000000], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000001], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
}

void func_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_89(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 0x00000014 && iVar1 < 0x00000014) && iVar2 < 0x00000014)
			{
				if (bParam0 == 0x00000000)
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 0x000000E6 && iVar1 > 0x000000E6) && iVar2 > 0x000000E6)
			{
				if (bParam0)
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(0x0000000E, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
		else
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0x00000000, 0x00000000, 0x00000000, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	else
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(0x00000001);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000004);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000006);
	}
	else
	{
		unk_0x7BBAC160090910C3(0x00000000);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_89(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000008;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000008;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000025;
			*uParam2 = 0x00000025;
			*uParam3 = 0x00000027;
			break;
		
		case 0x00000016:
			*uParam1 = 0x0000008C;
			*uParam2 = 0x00000092;
			*uParam3 = 0x0000009A;
			break;
		
		case 0x00000017:
			*uParam1 = 0x0000005B;
			*uParam2 = 0x0000005D;
			*uParam3 = 0x0000005E;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000051;
			*uParam2 = 0x00000054;
			*uParam3 = 0x00000059;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x000000F0;
			*uParam2 = 0x000000F0;
			*uParam3 = 0x000000F0;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000096;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0x00000026;
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000006;
			break;
		
		case 0x00000058:
			*uParam1 = 0x000000F5;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000000F;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x0000004A;
			*uParam2 = 0x00000016;
			*uParam3 = 0x00000007;
			break;
		
		case 0x00000038:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x0000003A;
			*uParam3 = 0x00000035;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000047;
			*uParam2 = 0x00000078;
			*uParam3 = 0x0000003C;
			break;
		
		case 0x00000036:
			*uParam1 = 0x0000004D;
			*uParam2 = 0x00000062;
			*uParam3 = 0x00000068;
			break;
		
		case 0x00000049:
			*uParam1 = 0x0000000E;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000006D;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000016;
			*uParam2 = 0x00000022;
			*uParam3 = 0x00000048;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x00000000;
			*uParam2 = 0x000000AE;
			*uParam3 = 0x000000EF;
			break;
		
		case 0x00000083:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000B7;
			*uParam3 = 0x00000000;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x0000008E;
			*uParam2 = 0x0000008C;
			*uParam3 = 0x00000046;
			break;
		
		case 0x00000061:
			*uParam1 = 0x0000009C;
			*uParam2 = 0x0000008D;
			*uParam3 = 0x00000071;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000091;
			*uParam2 = 0x00000073;
			*uParam3 = 0x00000047;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000062;
			*uParam2 = 0x00000044;
			*uParam3 = 0x00000028;
			break;
		
		case 0x00000064:
			*uParam1 = 0x0000007C;
			*uParam2 = 0x0000001B;
			*uParam3 = 0x00000044;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000072;
			*uParam2 = 0x0000002A;
			*uParam3 = 0x0000003F;
			break;
		
		case 0x00000088:
			*uParam1 = 0x000000F6;
			*uParam2 = 0x00000097;
			*uParam3 = 0x00000099;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000020;
			*uParam2 = 0x00000020;
			*uParam3 = 0x0000002C;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000001A;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000017;
			break;
		
		default:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000FF;
			*uParam3 = 0x000000FF;
			break;
	}
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_73(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_111(bParam4, bParam8))
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_93(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0x00000000 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0x00000000)
	{
		if (unk_0xB8E3620B82AD47D7(0x00000002))
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 0x00000169)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(0x00000002, Global_574E.f_13A2[iVar1], 0x00000001), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 0x00000020)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(0x00000002, Global_574E.f_13AF[iVar1], 0x00000001), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0x00000000;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_92(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_92(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_91(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0x00000000)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 0x00000169 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_92(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_91(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0x00000000)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(0x00000001);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 0xFFFFFFFF)
			{
				if (iParam2 > 0x00000000)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 0xFFFFFFFF)
		{
			if (iParam2 > 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 0x00000046);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000042);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
				Global_574E.f_20E1 = 0x00000001;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_574E.f_20E1 = 0x00000000;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

void func_91(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_92(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_93(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_94(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_95();
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

int func_95()
{
	return Global_1407E9;
}

int func_96()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_97())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_97()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_98(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(0x00000001, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 0x000000FF;
	switch (iParam0)
	{
		case 0x0000001C:
			*iParam2 = 0x000000C2;
			*iParam3 = 0x00000050;
			*iParam4 = 0x00000050;
			break;
		
		case 0x0000000F:
		case 0x00000004:
		case 0x00000010:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000035:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			if (bParam1)
			{
				*iParam2 = 0x00000000;
				*iParam3 = 0x00000000;
				*iParam4 = 0x00000000;
			}
			break;
		
		case 0x00000036:
			*iParam5 = 0x00000064;
			break;
		
		case 0x0000003E:
			*iParam5 = 0x00000064;
			break;
		
		case 0x00000037:
			unk_0xA402F6C87C08815C(0x00000018, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 0x000000FF;
			break;
	}
}

void func_99(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(0x00000002);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_100(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_101(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_102();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_103(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

var func_104(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_106(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_105(&uVar1);
			}
		}
		else
		{
			return func_105(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_105(var uParam0)
{
	return uParam0;
}

struct<13> func_106(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_107(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_106(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_105(&uVar0);
		}
		else
		{
			return func_105(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_108()
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

int func_109(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_107(iParam0), 64);
	StringCopy(&cVar1, func_104(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_108())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_108())
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
		vVar7.x = (vVar7.x * (func_110(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_110(iParam0) / fVar4));
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

float func_110(int iParam0)
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

int func_111(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_113(0x00000008, 0xFFFFFFFF) && func_112() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_112()
{
	return Global_14082C;
}

bool func_113(int iParam0, int iParam1)
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

void func_114(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_126B1[iParam0] = 0x00000000;
	Global_126B1.f_45[iParam0] = 0x00000000;
}

void func_115(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_117(iParam0);
			func_116(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
			if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000B))
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*3*/] = { vParam2 };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = -1f;
			}
			Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = iParam4 + 1;
			func_480(iParam0, 0x00000001);
		}
	}
}

void func_116(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_117(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_480(iParam0, 0x00000000);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_119(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_574E.f_13BC), Global_574E.f_12A1);
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	Global_574E.f_13BC = 0x00000000;
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (!func_73(&iVar1, 0x00000000, iParam0))
		{
			return;
		}
		unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
	}
}

void func_121(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1252), sParam0, 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = iParam1;
	Global_574E.f_129F = unk_0x1C0640BA9A7327B3();
	Global_574E.f_12A0 = iParam2;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
}

int func_122()
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 > 0xFFFFFFFF)
		{
			if (unk_0xB9132A06AE472728(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_123(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		unk_0xC74D8A1D346B9CCB(0x00000004);
		if (iParam0 && unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			return 0x00000001;
		}
		else
		{
			Global_4121D1 = 0xFFFFFFFF;
			return 0x00000000;
		}
	}
	if (((Global_4121D1 > 0xFFFFFFFF || Global_4121D1 == 0xFFFFFFFD) || Global_4121D1 == 0xFFFFFFFE) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(0x00000001);
		return 0x00000000;
	}
	if (Global_4121D1 == 0xFFFFFFFF && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			unk_0xC74D8A1D346B9CCB(0x00000004);
			Global_4121D1 = 0xFFFFFFFA;
			return 0x00000001;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(0x00000003);
			return 0x00000000;
		}
	}
	unk_0xC74D8A1D346B9CCB(0x00000001);
	return 0x00000000;
}

void func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 0xFFFFFFFF;
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		Global_4121D1 = 0xFFFFFFFF;
		return;
	}
	unk_0xFE29D579C98536B2(0x00000001);
	fVar0 = Global_574B;
	fVar2 = (fVar0 + Global_574D);
	fVar3 = Global_574E.f_1662;
	fVar1 = (Global_574E.f_1662 - (IntToFloat(Global_574E.f_1664) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_574E.f_1664 < 0x00000001)
	{
		fVar1 = (Global_574E.f_1662 - 0.034722f);
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_126();
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
	fVar7 = Global_4121CB;
	fVar8 = Global_4121CC;
	if (Global_574E.f_1665 > Global_574E.f_1664)
	{
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= fVar3) && Global_4121CC < (fVar3 + fVar6))
		{
			Global_4121D1 = 0xFFFFFFFE;
			if (bParam3)
			{
				func_125(0x00000000);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 0xFFFFFFFD;
			if (bParam3)
			{
				func_125(0x00000000);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_574E.f_1665 == 0xFFFFFFFF)
		{
			Global_4121D1 = 0x00000000;
			iVar13 = 0x00000000;
			return;
		}
		iVar11 = 0x00000094;
		iVar12 = (iVar11 / Global_574E.f_1664);
		iVar10 = (0x00000020 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0x00000000)
			{
				unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
				unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_103(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 0x000000FF, 0x000000FF, 0x000000FF, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4121D1 = Global_574E.f_1F66[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4121D1 = 0xFFFFFFFC;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4121D1 = 0xFFFFFFFB;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4121D1 = 0xFFFFFFFC;
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
}

void func_125(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 0x00000030;
	}
	else
	{
		iVar3 = 0x000000D2;
	}
	fVar0 = Global_574B;
	fVar1 = Global_574E.f_1662;
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4121D1 == 0xFFFFFFFE)
	{
		func_103(fVar0, fVar1, Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	else if (Global_4121D1 == 0xFFFFFFFD)
	{
		func_103(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_126()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000EF);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000F0);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_127(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = iParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
			{
				if (Global_574E.f_13E1[iVar0] != 0x00000000)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 0x00000080)
		{
			Global_574E.f_166A++;
			iVar1 = 0x00000000;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
				{
					if (Global_574E.f_13E1[iVar0] != 0x00000000)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_128(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F >= 0x00000004)
	{
		return;
	}
	if (Global_574E.f_1670 != 0x00000001)
	{
		return;
	}
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		return;
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam0, 24);
	Global_574E.f_1464++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000001;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_130();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_109(0x0000001A, 0x00000001, 0x00000000, &fVar1, &fVar2, 0x00000000);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)])
		{
			Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_574E.f_166F >= Global_574E.f_166D)
		{
			fVar3 = func_129();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

float func_129()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar0] == 0x00000004)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)] != 0x00000000)
		{
			if (func_109(Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)], 0x00000001, 0x00000000, &uVar3, &fVar4, 0x00000000))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0.35f, 0x00000000))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_130()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			iVar3++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			iVar4++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000004)
		{
			iVar5++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_88(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, iVar6 > 0x00000000, 0x00000000);
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[Global_574E.f_166E /*6*/]));
	}
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[((Global_574E.f_1466 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x21994591120B91F0(Global_574E.f_104F[((Global_574E.f_1467 - iVar4) + iVar10)], Global_574E.f_10D0[((Global_574E.f_1467 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
	}
	iVar7 = 0x00000000;
	while (iVar7 < iVar5)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)] != 0x00000000)
		{
			func_109(Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)], 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_131(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return "";
	}
	if (iParam0 == 0x00000008)
	{
		return "";
	}
	iVar0 = func_132(iParam0, 0xFFFFFFFF);
	if (iVar0 == 0x00000000)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0x0000001F:
			return "SUBMERSIBLE";
		
		case 0x00000044:
			return "SANCHEZ";
		
		case 0x00000069:
			return "REBEL";
		
		case 0x0000006B:
			return "SANCHEZ2";
		
		case 0x00000075:
			return "COQUETTE_TLESS";
		
		case 0x00000076:
			return "BANSHEE_TLESS";
		
		case 0x00000077:
			return "STINGER_TLESS";
		
		case 0x00000078:
			return "VOLTIC_HTOP";
		
		case 0x0000009A:
			return "BLAZER3";
		
		case 0x0000009B:
			return "REBEL2";
		
		case 0x0000009E:
			return "BUFFALO2";
		
		case 0x0000009F:
			return "TAILGATER";
		
		case 0x000000A6:
			return "COQUETTE2_TLESS";
		
		case 0x000000AA:
			return "KALAHARI_TLESS";
		
		case 0x000000AB:
			return "BOXVILLE4";
		
		case 0x000000AD:
			return "DINGHY3";
		
		case 0x000000B7:
			return "MULE3";
		
		case 0x000000BF:
			return "LANDSTALKER";
		
		case 0x000000C0:
			return "MESA3";
		
		case 0x000000C2:
			return "ORACLE1";
		
		case 0x000000C4:
			return "SCHAFTER2";
		
		case 0x000000CF:
			return "DOMINATOR2";
		
		case 0x000000F5:
			return "BIG_YACHT";
		
		case 0x000000FE:
			return "CARGOBOB2";
		
		case 0x00000143:
			return "BIG_TRUCK";
		
		case 0x00000144:
			return "BALLISTIC";
		
		case 0x00000165:
			return "BIG_PLANE";
		
		case 0x00000192:
			return "HACKER_TRUCK";
		
		default:
	}
	return unk_0x1739BA50603D849C(iVar0);
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("ztype");
		
		case 0x00000001:
			return joaat("stinger");
		
		case 0x00000002:
			return joaat("jb700");
		
		case 0x00000003:
			return joaat("cheetah");
		
		case 0x00000004:
			return joaat("entityxf");
		
		case 0x00000005:
			return joaat("adder");
		
		case 0x00000006:
			return joaat("monroe");
		
		case 0x00000007:
			return joaat("cogcabrio");
		
		case 0x0000000A:
			return joaat("shamal");
		
		case 0x0000000B:
			return joaat("stunt");
		
		case 0x0000000C:
			return joaat("cuban800");
		
		case 0x0000000D:
			return joaat("duster");
		
		case 0x0000000E:
			return joaat("luxor");
		
		case 0x0000000F:
			return joaat("frogger");
		
		case 0x00000010:
			return joaat("maverick");
		
		case 0x00000011:
			return joaat("rhino");
		
		case 0x00000012:
			return joaat("titan");
		
		case 0x00000013:
			return joaat("cargobob");
		
		case 0x00000014:
			return joaat("buzzard");
		
		case 0x00000015:
			return joaat("crusader");
		
		case 0x00000016:
			return joaat("barracks");
		
		case 0x00000018:
			return joaat("marquis");
		
		case 0x00000019:
			return joaat("jetmax");
		
		case 0x0000001B:
			return joaat("squalo");
		
		case 0x0000001D:
			return joaat("tropic");
		
		case 0x0000001E:
			return joaat("seashark");
		
		case 0x0000001F:
			return joaat("submersible");
		
		case 0x00000020:
			return joaat("suntrap");
		
		case 0x00000102:
			return joaat("tug");
		
		case 0x00000021:
			return joaat("bmx");
		
		case 0x00000022:
			return joaat("scorcher");
		
		case 0x00000023:
			return joaat("tribike");
		
		case 0x00000024:
			return joaat("tribike2");
		
		case 0x00000025:
			return joaat("tribike3");
		
		case 0x00000026:
			return joaat("cruiser");
		
		case 0x00000027:
			return joaat("schwarzer");
		
		case 0x00000028:
			return joaat("zion");
		
		case 0x00000029:
			return joaat("gauntlet");
		
		case 0x0000002A:
			return joaat("vigero");
		
		case 0x0000002B:
			return joaat("issi2");
		
		case 0x0000002C:
			return joaat("infernus");
		
		case 0x0000002D:
			return joaat("surano");
		
		case 0x0000002E:
			return joaat("vacca");
		
		case 0x0000002F:
			return joaat("ninef");
		
		case 0x00000030:
			return joaat("comet2");
		
		case 0x00000031:
			return joaat("banshee");
		
		case 0x00000032:
			return joaat("feltzer2");
		
		case 0x00000033:
			return joaat("bfinjection");
		
		case 0x00000034:
			return joaat("sandking");
		
		case 0x00000035:
			return joaat("fugitive");
		
		case 0x00000036:
			return joaat("dilettante");
		
		case 0x00000037:
			return joaat("superd");
		
		case 0x00000038:
			return joaat("exemplar");
		
		case 0x00000039:
			return joaat("baller2");
		
		case 0x0000003A:
			return joaat("cavalcade");
		
		case 0x0000003B:
			return joaat("rocoto");
		
		case 0x0000003C:
			return joaat("felon");
		
		case 0x0000003D:
			return joaat("oracle2");
		
		case 0x0000003E:
			return joaat("bati");
		
		case 0x0000003F:
			return joaat("akuma");
		
		case 0x00000040:
			return joaat("ruffian");
		
		case 0x00000041:
			return joaat("vader");
		
		case 0x00000042:
			return joaat("blazer");
		
		case 0x00000043:
			return joaat("pcj");
		
		case 0x00000044:
			return joaat("sanchez");
		
		case 0x00000045:
			return joaat("faggio2");
		
		case 0x00000046:
			return joaat("bullet");
		
		case 0x00000047:
			return joaat("carbonizzare");
		
		case 0x00000048:
			return joaat("coquette");
		
		case 0x00000049:
			return joaat("ninef2");
		
		case 0x0000004A:
			return joaat("rapidgt");
		
		case 0x0000004B:
			return joaat("rapidgt2");
		
		case 0x0000004C:
			return joaat("stingergt");
		
		case 0x0000004D:
			return joaat("voltic");
		
		case 0x0000004E:
			return joaat("annihilator");
		
		case 0x0000004F:
			return joaat("mammatus");
		
		case 0x00000050:
			return joaat("velum");
		
		case 0x00000051:
			return joaat("dump");
		
		case 0x00000052:
			return joaat("airbus");
		
		case 0x00000053:
			return joaat("bus");
		
		case 0x00000054:
			return joaat("coach");
		
		case 0x00000055:
			return joaat("journey");
		
		case 0x00000056:
			return joaat("mule");
		
		case 0x00000057:
			return joaat("rentalbus");
		
		case 0x00000058:
			return joaat("stretch");
		
		case 0x00000059:
			return joaat("bison");
		
		case 0x0000005A:
			return joaat("double");
		
		case 0x0000005B:
			return joaat("felon2");
		
		case 0x0000005C:
			return joaat("hexer");
		
		case 0x0000005D:
			return joaat("zion2");
		
		case 0x0000005E:
			return joaat("bati2");
		
		case 0x0000005F:
			return joaat("elegy2");
		
		case 0x00000060:
			return joaat("khamelion");
		
		case 0x00000061:
			return joaat("hotknife");
		
		case 0x00000062:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000063:
			return joaat("bifta");
		
		case 0x00000064:
			return joaat("kalahari");
		
		case 0x00000065:
			return joaat("paradise");
		
		case 0x00000066:
			return joaat("speeder");
		
		case 0x00000067:
			return joaat("bodhi2");
		
		case 0x00000068:
			return joaat("dune");
		
		case 0x00000069:
			return joaat("rebel");
		
		case 0x0000006A:
			return joaat("sadler");
		
		case 0x0000006B:
			return joaat("sanchez2");
		
		case 0x0000006C:
			return joaat("sandking2");
		
		case 0x0000006D:
			return joaat("btype");
		
		case 0x0000006F:
			return joaat("jester");
		
		case 0x00000072:
			return joaat("massacro");
		
		case 0x00000070:
			return joaat("turismor");
		
		case 0x00000073:
			return joaat("zentorno");
		
		case 0x00000074:
			return joaat("huntley");
		
		case 0x0000006E:
			return joaat("alpha");
		
		case 0x00000071:
			return joaat("vestra");
		
		case 0x00000075:
			return joaat("coquette");
		
		case 0x00000076:
			return joaat("banshee");
		
		case 0x00000077:
			return joaat("stinger");
		
		case 0x00000078:
			return joaat("voltic");
		
		case 0x00000079:
			return joaat("thrust");
		
		case 0x00000080:
			return joaat("asea");
		
		case 0x00000081:
			return joaat("asterope");
		
		case 0x00000082:
			return joaat("bobcatxl");
		
		case 0x00000083:
			return joaat("cavalcade2");
		
		case 0x00000084:
			return joaat("granger");
		
		case 0x00000085:
			return joaat("ingot");
		
		case 0x00000086:
			return joaat("intruder");
		
		case 0x00000087:
			return joaat("minivan");
		
		case 0x00000088:
			return joaat("premier");
		
		case 0x00000089:
			return joaat("radi");
		
		case 0x0000008A:
			return joaat("rancherxl");
		
		case 0x0000008B:
			return joaat("ratloader");
		
		case 0x0000008C:
			return joaat("stanier");
		
		case 0x0000008D:
			return joaat("stratum");
		
		case 0x0000008E:
			return joaat("washington");
		
		case 0x0000007A:
			return joaat("dominator");
		
		case 0x0000007B:
			return joaat("f620");
		
		case 0x0000007C:
			return joaat("fusilade");
		
		case 0x0000007D:
			return joaat("penumbra");
		
		case 0x0000007E:
			return joaat("sentinel");
		
		case 0x0000007F:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000008F:
			return joaat("blade");
		
		case 0x00000090:
			return joaat("warrener");
		
		case 0x00000091:
			return joaat("glendale");
		
		case 0x00000092:
			return joaat("rhapsody");
		
		case 0x00000093:
			return joaat("panto");
		
		case 0x00000094:
			return joaat("dubsta3");
		
		case 0x00000095:
			return joaat("pigalle");
		
		case 0x00000096:
			return joaat("picador");
		
		case 0x00000097:
			return joaat("regina");
		
		case 0x00000098:
			return joaat("surfer");
		
		case 0x00000099:
			return joaat("youga");
		
		case 0x0000009A:
			return joaat("blazer3");
		
		case 0x0000009B:
			return joaat("rebel2");
		
		case 0x0000009C:
			return joaat("primo");
		
		case 0x0000009D:
			return joaat("buffalo");
		
		case 0x0000009E:
			return joaat("buffalo2");
		
		case 0x0000009F:
			return joaat("tailgater");
		
		case 0x000000A0:
			return joaat("monster");
		
		case 0x000000A1:
			return joaat("sovereign");
		
		case 0x000000A2:
			return joaat("miljet");
		
		case 0x000000A3:
			return joaat("besra");
		
		case 0x000000A4:
			return joaat("swift");
		
		case 0x000000A5:
			return joaat("coquette2");
		
		case 0x000000A6:
			return joaat("coquette2");
		
		case 0x000000A7:
			return joaat("innovation");
		
		case 0x000000A8:
			return joaat("hakuchou");
		
		case 0x000000A9:
			return joaat("furoregt");
		
		case 0x000000AA:
			return joaat("kalahari");
		
		case 0x000000BB:
			return joaat("valkyrie");
		
		case 0x000000B1:
			return joaat("hydra");
		
		case 0x000000B9:
			return joaat("savage");
		
		case 0x000000AE:
			return joaat("enduro");
		
		case 0x000000AB:
			return joaat("boxville4");
		
		case 0x000000AC:
			return joaat("casco");
		
		case 0x000000AD:
			return joaat("dinghy3");
		
		case 0x000000AF:
			return joaat("gburrito2");
		
		case 0x000000B0:
			return joaat("guardian");
		
		case 0x000000B2:
			return joaat("insurgent");
		
		case 0x000000B3:
			return joaat("insurgent2");
		
		case 0x000000B7:
			return joaat("mule3");
		
		case 0x000000B4:
			return joaat("kuruma");
		
		case 0x000000B5:
			return joaat("kuruma2");
		
		case 0x000000B6:
			return joaat("lectro");
		
		case 0x000000B8:
			return joaat("pbus");
		
		case 0x000000BA:
			return joaat("technical");
		
		case 0x000000BC:
			return joaat("velum2");
		
		case 0x000000BD:
			return joaat("gresley");
		
		case 0x000000BE:
			return joaat("jackal");
		
		case 0x000000BF:
			return joaat("landstalker");
		
		case 0x000000C0:
			return joaat("mesa3");
		
		case 0x000000C1:
			return joaat("nemesis");
		
		case 0x000000C2:
			return joaat("oracle");
		
		case 0x000000C3:
			return joaat("rumpo");
		
		case 0x000000C4:
			return joaat("schafter2");
		
		case 0x000000C5:
			return joaat("seminole");
		
		case 0x000000C6:
			return joaat("surge");
		
		case 0x000000C7:
			return joaat("dodo");
		
		case 0x000000C8:
			return joaat("marshall");
		
		case 0x000000C9:
			return joaat("submersible2");
		
		case 0x000000CA:
			return joaat("blista2");
		
		case 0x000000CB:
			return joaat("stalion");
		
		case 0x000000CC:
			return joaat("dukes");
		
		case 0x000000CD:
			return joaat("dukes2");
		
		case 0x000000CE:
			return joaat("stalion2");
		
		case 0x000000CF:
			return joaat("dominator2");
		
		case 0x000000D0:
			return joaat("gauntlet2");
		
		case 0x000000D1:
			return joaat("buffalo3");
		
		case 0x000000D2:
			return joaat("slamvan");
		
		case 0x000000D3:
			return joaat("ratloader2");
		
		case 0x000000D4:
			return joaat("jester2");
		
		case 0x000000D5:
			return joaat("massacro2");
		
		case 0x000000D6:
			return joaat("feltzer3");
		
		case 0x000000D7:
			return joaat("luxor2");
		
		case 0x000000D8:
			return joaat("osiris");
		
		case 0x000000D9:
			return joaat("swift2");
		
		case 0x000000DA:
			return joaat("virgo");
		
		case 0x000000DB:
			return joaat("windsor");
		
		case 0x000000DC:
			return joaat("brawler");
		
		case 0x000000DD:
			return joaat("chino");
		
		case 0x000000DE:
			return joaat("coquette3");
		
		case 0x000000DF:
			return joaat("t20");
		
		case 0x000000E0:
			return joaat("toro");
		
		case 0x000000E1:
			return joaat("vindicator");
		
		case 0x000000E5:
			return joaat("primo");
		
		case 0x000000E4:
			return joaat("moonbeam");
		
		case 0x000000E3:
			return joaat("faction");
		
		case 0x000000E2:
			return joaat("buccaneer");
		
		case 0x000000E6:
			return joaat("voodoo2");
		
		case 0x00000107:
			if (iParam1 == 0x00000000)
			{
				return joaat("xls");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 0x00000108:
			return joaat("seven70");
		
		case 0x00000103:
			return joaat("windsor2");
		
		case 0x00000104:
			return joaat("prototipo");
		
		case 0x00000105:
			return joaat("fmj");
		
		case 0x00000106:
			return joaat("bestiagts");
		
		case 0x00000109:
			return joaat("pfister811");
		
		case 0x0000010A:
			return joaat("reaper");
		
		case 0x000000E7:
			return joaat("btype2");
		
		case 0x000000E8:
			return joaat("lurcher");
		
		case 0x000000E9:
			if (iParam1 == 0x00000000)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 0x000000EA:
			if (iParam1 == 0x00000000)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 0x000000EB:
			if (iParam1 == 0x00000000)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 0x000000EC:
			if (iParam1 == 0x00000000)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 0x000000ED:
			return joaat("limo2");
		
		case 0x000000EE:
			return joaat("mamba");
		
		case 0x000000EF:
			return joaat("nightshade");
		
		case 0x000000F0:
			if (iParam1 == 0x00000000)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 0x000000F1:
			if (iParam1 == 0x00000000)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 0x00000001)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 0x000000F2:
			return joaat("verlierer2");
		
		case 0x000000F3:
			return joaat("supervolito");
		
		case 0x000000F4:
			return joaat("supervolito2");
		
		case 0x000000F5:
			return Global_1204C;
		
		case 0x000000FB:
			return joaat("virgo3");
		
		case 0x000000FA:
			return joaat("tornado");
		
		case 0x000000F9:
			return joaat("sabregt");
		
		case 0x000000FC:
			return joaat("faction");
		
		case 0x000000F6:
			return joaat("tampa");
		
		case 0x000000F7:
			return joaat("sultan");
		
		case 0x00000031:
			return joaat("banshee");
		
		case 0x000000F8:
			return joaat("btype3");
		
		case 0x000000FD:
			return joaat("volatus");
		
		case 0x000000FE:
			return joaat("cargobob2");
		
		case 0x000000FF:
			return joaat("rumpo3");
		
		case 0x00000100:
			return joaat("brickade");
		
		case 0x00000101:
			return joaat("nimbus");
		
		case 0x0000010B:
			return joaat("le7b");
		
		case 0x0000010C:
			return joaat("omnis");
		
		case 0x0000010D:
			return joaat("tropos");
		
		case 0x0000010E:
			return joaat("brioso");
		
		case 0x0000010F:
			return joaat("trophytruck");
		
		case 0x00000110:
			return joaat("trophytruck2");
		
		case 0x00000111:
			return joaat("contender");
		
		case 0x00000112:
			return joaat("cliffhanger");
		
		case 0x00000113:
			return joaat("bf400");
		
		case 0x00000117:
			return joaat("tyrus");
		
		case 0x00000118:
			return joaat("lynx");
		
		case 0x00000119:
			return joaat("sheava");
		
		case 0x00000114:
			return joaat("rallytruck");
		
		case 0x00000115:
			return joaat("tampa2");
		
		case 0x00000116:
			return joaat("gargoyle");
		
		case 0x0000011A:
			return joaat("bagger");
		
		case 0x0000011B:
			return joaat("esskey");
		
		case 0x0000011C:
			return joaat("nightblade");
		
		case 0x0000011D:
			return joaat("defiler");
		
		case 0x0000011E:
			return joaat("avarus");
		
		case 0x0000011F:
			return joaat("zombiea");
		
		case 0x00000120:
			return joaat("zombieb");
		
		case 0x00000121:
			return joaat("chimera");
		
		case 0x00000122:
			return joaat("daemon2");
		
		case 0x00000123:
			return joaat("ratbike");
		
		case 0x00000124:
			return joaat("shotaro");
		
		case 0x00000125:
			return joaat("raptor");
		
		case 0x00000126:
			return joaat("hakuchou2");
		
		case 0x00000128:
			return joaat("blazer4");
		
		case 0x00000129:
			return joaat("sanctus");
		
		case 0x00000127:
			return joaat("vortex");
		
		case 0x0000012A:
			return joaat("manchez");
		
		case 0x0000012B:
			return joaat("tornado6");
		
		case 0x0000012C:
			return joaat("youga2");
		
		case 0x0000012D:
			return joaat("wolfsbane");
		
		case 0x0000012E:
			return joaat("faggio3");
		
		case 0x0000012F:
			return joaat("faggio");
		
		case 0x00000130:
			return joaat("dune5");
		
		case 0x00000131:
			return joaat("phantom2");
		
		case 0x00000132:
			return joaat("technical2");
		
		case 0x00000133:
			return joaat("blazer5");
		
		case 0x00000134:
			return joaat("boxville5");
		
		case 0x00000135:
			return joaat("wastelander");
		
		case 0x00000136:
			return joaat("ruiner2");
		
		case 0x00000137:
			return joaat("voltic2");
		
		case 0x00000138:
			return joaat("penetrator");
		
		case 0x00000139:
			return joaat("tempesta");
		
		case 0x0000013A:
			return joaat("italigtb");
		
		case 0x0000013B:
			return joaat("nero");
		
		case 0x0000013C:
			return joaat("diablous");
		
		case 0x0000013D:
			return joaat("fcr");
		
		case 0x0000013E:
			return joaat("specter");
		
		case 0x0000013F:
			return 0x4992196C;
		
		case 0x00000140:
			return 0xAC33179C;
		
		case 0x00000141:
			return 0x2AE524A8;
		
		case 0x00000142:
			return 0xC575DF11;
	}
	switch (iParam0)
	{
		case 0x00000143:
			return Global_1204D;
		
		case 0x00000144:
			return Global_1204E;
		
		case 0x00000145:
			return 0x0D4E5F4D;
		
		case 0x00000146:
			return 0x59A9E570;
		
		case 0x00000147:
			return 0x7397224C;
		
		case 0x00000148:
			return 0x36B4A8A9;
		
		case 0x00000149:
			return 0x2189D250;
		
		case 0x0000014A:
			return 0x711D4738;
		
		case 0x0000014B:
			return 0xFE141DA6;
		
		case 0x0000014C:
			return 0x34B82784;
		
		case 0x0000014D:
			return 0xB7D9F7F1;
		
		case 0x0000014E:
			return 0x8FD54EBB;
		
		case 0x0000014F:
			return 0x097E5533;
		
		case 0x00000150:
			return 0x19DD9ED1;
		
		case 0x00000151:
			return joaat("lazer");
		
		case 0x00000152:
			return 0x96E24857;
		
		case 0x00000153:
			return 0xD35698EF;
		
		case 0x00000154:
			return 0xC5DD6967;
		
		case 0x00000155:
			return 0x9A9EB7DE;
		
		case 0x00000156:
			return 0xE8983F9F;
		
		case 0x00000157:
			return 0x3E2E4F8A;
		
		case 0x00000158:
			return 0xAD6065C0;
		
		case 0x00000159:
			return 0x5D56F01B;
		
		case 0x0000015A:
			return 0x3DC92356;
		
		case 0x0000015B:
			return 0xFE0A508C;
		
		case 0x0000015C:
			return 0xFD707EDE;
		
		case 0x0000015D:
			return 0x89BA59F5;
		
		case 0x0000015E:
			return 0xC3F25753;
		
		case 0x0000015F:
			return 0xA52F6866;
		
		case 0x00000160:
			return 0x52FF9437;
		
		case 0x00000161:
			return 0xC4810400;
		
		case 0x00000162:
			return 0x6DBD6C0A;
		
		case 0x00000163:
			return 0x7A2EF5E4;
		
		case 0x00000164:
			return 0xB5EF4C33;
		
		case 0x00000165:
			return Global_1204F;
		
		case 0x00000166:
			return 0x586765FB;
		
		case 0x00000167:
			return 0x34DBA661;
		
		case 0x00000168:
			return 0x9B16A3B4;
		
		case 0x00000169:
			return 0xD6BC7523;
		
		case 0x0000016A:
			return 0xAA6F980A;
		
		case 0x0000016B:
			return 0x46699F47;
		
		case 0x0000016C:
			return 0x58CDAF30;
		
		case 0x0000016D:
			return 0xF34DFB25;
		
		case 0x0000016E:
			return 0x1AAD0DED;
		
		case 0x0000016F:
			return 0x5D1903F9;
		
		case 0x00000170:
			return 0x91CA96EE;
		
		case 0x00000171:
			return 0x67D2B389;
		
		case 0x00000172:
			return 0x41D149AA;
		
		case 0x00000173:
			return 0x6F946279;
		
		case 0x00000174:
			return 0x5097F589;
		
		case 0x00000175:
			return 0xED552C74;
		
		case 0x00000176:
			return 0x8408F33A;
		
		case 0x00000177:
			return 0x23CA25F2;
		
		case 0x00000178:
			return 0xE78CC3D9;
		
		case 0x00000179:
			return 0x33B98FE2;
		
		case 0x0000017A:
			return 0xA4D99B7D;
		
		case 0x0000017B:
			return 0x35DED0DD;
		
		case 0x0000017C:
			return 0xA4A4E453;
		
		case 0x0000017D:
			return 0x00E83C17;
		
		case 0x0000017E:
			return 0x276D98A3;
		
		case 0x0000017F:
			return 0x3201DD49;
		
		case 0x00000180:
			return 0xE8A8BA94;
		
		case 0x00000181:
			return 0xF8C2E0E7;
		
		case 0x00000182:
			return 0x71CBEA98;
		
		case 0x00000183:
			return 0x6068AD86;
		
		case 0x00000184:
			return 0xB472D2B5;
		
		case 0x00000185:
			return 0x378236E1;
		
		case 0x00000186:
			return 0x3E5BD8D9;
		
		case 0x00000187:
			return 0xB4F32118;
		
		case 0x00000188:
			return 0x42836BE5;
		
		case 0x00000189:
			return 0x3D7C6410;
		
		case 0x0000018A:
			return 0xE99011C2;
		
		case 0x0000018B:
			return 0xC52C6B93;
		
		case 0x0000018C:
			return 0xBC5DC07E;
		
		case 0x0000018D:
			return 0x8198AEDC;
		
		case 0x0000018E:
			return 0xF330CB6A;
		
		case 0x0000018F:
			return 0xC514AAE0;
		
		case 0x00000190:
			return 0x4ABEBF23;
		
		case 0x00000191:
			return 0xD4AE63D9;
		
		case 0x00000192:
			return Global_12050;
		
		case 0x00000193:
			return 0x73F4110E;
		
		case 0x00000194:
			return 0x6290F15B;
		
		case 0x00000195:
			return 0x1DD4C0FF;
		
		case 0x00000196:
			return 0x79DD18AE;
		
		case 0x00000197:
			return 0xD9F0503D;
		
		case 0x00000198:
			return 0x64DE07A1;
		
		case 0x00000199:
			return 0x7B54A9D3;
		
		case 0x0000019A:
			return 0xE6E967F8;
		
		case 0x0000019B:
			return 0x1324E960;
		
		case 0x0000019C:
			return 0xFCC2F483;
		
		case 0x0000019F:
			return joaat("futo");
		
		case 0x000001A0:
			return joaat("ruiner");
		
		case 0x000001A1:
			return joaat("romero");
		
		case 0x000001A2:
			return joaat("prairie");
		
		case 0x000001A3:
			return joaat("baller");
		
		case 0x000001A4:
			return joaat("serrano");
		
		case 0x000001A5:
			return joaat("bjxl");
		
		case 0x000001A6:
			return joaat("habanero");
		
		case 0x000001A7:
			return joaat("fq2");
		
		case 0x000001A8:
			return joaat("patriot");
		
		case 0x0000019D:
			return 0xEDA4ED97;
		
		case 0x0000019E:
			return 0x149BD32A;
		
		case 0x000001A9:
			return 0xD039510B;
		
		case 0x000001AA:
			return 0x287FA449;
		
		case 0x000001AB:
			return 0x71D3B6F0;
		
		case 0x000001AC:
			return 0x7F81A829;
		
		case 0x000001AD:
			return 0x8F49AE28;
		
		case 0x000001AE:
			return 0x798682A2;
		
		case 0x000001AF:
			return 0xBBA2A2F7;
		
		case 0x000001B0:
			return 0x5BEB3CE0;
		
		case 0x000001B1:
			return 0xDD71BFEB;
		
		case 0x000001B2:
			return 0x1A861243;
		
		case 0x000001B3:
			return 0x619C1B82;
		
		case 0x000001B4:
			return 0xD2F77E37;
		
		case 0x000001B5:
			return 0x20314B42;
		
		case 0x000001B6:
			return 0xBE11EFC6;
		
		case 0x000001B7:
			return 0xA7DCC35C;
		
		case 0x000001B8:
			return 0x83070B62;
		
		case 0x000001C2:
			return joaat("taxi");
		
		case 0x000001C3:
			return joaat("bulldozer");
		
		case 0x000001C4:
			return joaat("speedo2");
		
		case 0x000001C5:
			return joaat("trash2");
		
		case 0x000001C6:
			return joaat("barracks2");
		
		case 0x000001C7:
			return joaat("mixer");
		
		case 0x000001C8:
			return joaat("dune2");
		
		case 0x000001C9:
			return joaat("tractor");
		
		case 0x000001CA:
			return joaat("blista3");
		
		case 0x000001B9:
			return 0xFD128DFD;
		
		case 0x000001BA:
			return 0x56D42971;
		
		case 0x000001BB:
			return 0x5EE005DA;
		
		case 0x000001BC:
			return 0xE1C03AB0;
		
		case 0x000001BD:
			return 0xBA5334AC;
		
		case 0x000001BE:
			return 0x4C3FFF49;
		
		case 0x000001BF:
			return 0xA29F78B0;
		
		case 0x000001C0:
			return 0xEC3E3404;
		
		case 0x000001C1:
			return 0xEEF345EC;
		
		case 0x000001CB:
			return 0x3E3D1F59;
		
		case 0x000001CC:
			return 0x28EAB80F;
		
		case 0x000001CD:
			return 0xC7E55211;
		
		case 0x000001CE:
			return 0x92F5024E;
		
		case 0x000001CF:
			return 0xD757D97D;
		
		case 0x000001D0:
			return 0x2B0C4DCD;
		
		case 0x000001D1:
			return 0x6E8DA4F7;
		
		case 0x000001D2:
			return 0x6F039A67;
		
		case 0x000001D3:
			return 0xCB642637;
		
		case 0x000001D4:
			return 0xEA6A047F;
		
		case 0x000001D5:
			return 0x127E90D5;
		
		case 0x000001D6:
			return 0x36A167E0;
		
		case 0x000001D7:
			return 0x9472CD24;
		
		case 0x000001D8:
			return 0x734C5E50;
		
		case 0x000001D9:
			return 0xAF966F3C;
		
		case 0x000001DA:
			return 0xF38C4245;
		
		case 0x000001DB:
			return 0xECA6B6A3;
		
		case 0x000001DC:
			return 0xD86A0247;
		
		case 0x000001DD:
			return 0x4EE74355;
		
		case 0x000001DE:
			return 0x9F6ED5A2;
		
		case 0x000001DF:
			return 0xE550775B;
		
		case 0x000001E0:
			return 0x73920F8E;
		
		case 0x000001E1:
			return joaat("burrito2");
		
		case 0x000001E2:
			return joaat("boxville");
		
		case 0x000001E3:
			return joaat("stockade");
		
		case 0x000001E4:
			return joaat("lguard");
		
		case 0x000001E5:
			return joaat("blazer2");
		
		case 0x000001E6:
			return 0x4C8DBA51;
		
		case 0x000001E7:
			return 0xB53C6C52;
		
		case 0x000001E8:
			return 0x177DA45C;
		
		case 0x000001E9:
			return 0x11F58A5A;
		
		case 0x000001EA:
			return 0x56CDEE7D;
		
		case 0x000001EB:
			return 0x1446590A;
		
		case 0x000001EC:
			return 0xBC7C0A00;
		
		case 0x000001ED:
			return 0x8B213907;
		
		case 0x000001EE:
			return 0x3944D5A0;
		
		case 0x000001EF:
			return 0x04F48FC4;
		
		case 0x000001F0:
			return 0x2C1FEA99;
		
		case 0x000001F1:
			return 0x79178F0A;
		
		case 0x000001F2:
			return 0x64F49967;
		
		case 0x000001F3:
			return 0xCE44C4B9;
		
		case 0x000001F4:
			return 0x3404691C;
		
		case 0x000001F5:
			return 0x3ADB9758;
		
		case 0x000001F6:
			return 0x97553C28;
		
		case 0x000001F7:
			return 0x42ACA95F;
		
		case 0x000001F8:
			return 0x18619B7E;
		
		case 0x000001F9:
			return 0x185E2FF3;
		
		default:
	}
	switch (iParam0)
	{
		case 0x000001FA:
			return 0x82E47E85;
		
		case 0x000001FB:
			return 0x7F3415E3;
		
		case 0x000001FC:
			return 0x0409D787;
		
		case 0x000001FD:
			return 0xDA5EC7DA;
		
		case 0x000001FE:
			return 0xCE0B9F22;
		
		case 0x000001FF:
			return 0x94114926;
		
		case 0x00000200:
			return 0xAF0B8D48;
		
		case 0x00000201:
			return 0x58F77553;
		
		case 0x00000202:
			return 0x4669D038;
		
		case 0x00000203:
			return 0x98F65A5E;
		
		case 0x00000204:
			return joaat("manana");
		
		case 0x00000205:
			return joaat("peyote");
		
		default:
	}
	return 0x00000000;
}

void func_133(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1468 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000004)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000004)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000004)
		{
			return;
		}
	}
	Global_574E.f_1151[Global_574E.f_1468] = iParam1;
	Global_574E.f_1468++;
	if (iParam1 != 0x00000000)
	{
		func_109(iParam1, 0x00000001, 0x00000000, &fVar1, &fVar2, 0x00000000);
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_109(0x0000001A, 0x00000001, 0x00000000, &fVar3, &fVar4, 0x00000000);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar2;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000004;
}

void func_134(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000001)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000001)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000001)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_137(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_137(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_136(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_109(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0x00000000)
		{
			fVar4 = func_135(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000001;
	Global_574E.f_166E = (Global_574E.f_1464 - 0x00000001);
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = iParam2;
}

float func_135(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_136(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_88(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_138(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_42 = func_132(iParam0, iParam4);
	if (uParam1->f_42 == 0x00000000)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 0x00000002 && uParam1->f_42 == joaat("frogger"))
	{
		uParam1->f_42 = joaat("frogger2");
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000000;
		uParam1->f_8 = 0x00000000;
		uParam1->f_43 = 0x00000001;
		return;
	}
	uParam1->f_4D = 0x00000000;
	func_209(iParam0, &(uParam1->f_4D));
	uParam1->f_9[0x00000010] = 0x00000000;
	if ((iParam0 == 0x000000B5 || iParam0 == 0x000000B2) || iParam0 == 0x000000B3)
	{
		uParam1->f_9[0x00000010] = 0x00000004;
	}
	else if (func_208(iParam0))
	{
		if (Global_1266F)
		{
			uParam1->f_9[0x00000010] = 0x00000004;
		}
	}
	uParam1->f_9[0x00000017] = 0x00000000;
	if (iParam0 == 0x000000DA)
	{
		uParam1->f_9[0x00000017] = 0x00000007;
	}
	*uParam1 = 0x00000000;
	if (iParam0 == 0x00000168)
	{
		*uParam1 = 0x00000004;
	}
	uParam1->f_9[0x00000030] = 0x00000000;
	if (iParam0 == 0x000001BF)
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			uParam1->f_9[0x00000030] = 0xFFFFFFFF;
		}
		else if (iParam4 == 0x00000001)
		{
			uParam1->f_9[0x00000030] = 0x0000000B;
		}
	}
	else if (func_207(uParam1->f_42))
	{
		uParam1->f_9[0x00000030] = 0x00000001;
	}
	uParam1->f_9[0x0000002A] = 0x00000000;
	switch (uParam1->f_42)
	{
		case 0x7F81A829:
		case 0x8F49AE28:
		case 0x798682A2:
			uParam1->f_9[0x0000002A] = 0x00000004;
			break;
		
		case 0xBBA2A2F7:
		case 0x5BEB3CE0:
		case 0xDD71BFEB:
			uParam1->f_9[0x0000002A] = 0x00000004;
			break;
		
		case 0x1A861243:
		case 0x619C1B82:
		case 0xD2F77E37:
			uParam1->f_9[0x0000002A] = 0x00000001;
			break;
		
		case 0x20314B42:
		case 0xBE11EFC6:
		case 0xA7DCC35C:
			uParam1->f_9[0x0000002A] = 0x00000001;
			break;
		
		case 0xD039510B:
		case 0x287FA449:
		case 0x71D3B6F0:
			uParam1->f_9[0x0000002A] = 0x00000004;
			break;
	}
	uParam1->f_9[0x00000029] = 0x00000000;
	if (iParam0 == 0x000001C1)
	{
		uParam1->f_9[0x00000029] = 0x00000001;
	}
	uParam1->f_63 = 0x00000000;
	if (iParam0 == 0x000000FB)
	{
		uParam1->f_63 = 0x00000004;
	}
	uParam1->f_41 = 0x00000000;
	if (iParam0 == 0x00000107)
	{
		if (Global_1266F)
		{
			uParam1->f_41 = 0x00000001;
		}
	}
	uParam1->f_9[0x00000000] = 0x00000000;
	if (((((iParam0 == 0x00000140 || iParam0 == 0x00000141) || iParam0 == 0x00000142) || iParam0 == 0x00000147) || iParam0 == 0x0000017E) || iParam0 == 0x00000187)
	{
		uParam1->f_9[0x00000000] = 0x00000001;
	}
	if (((((iParam0 == 0x00000149 || iParam0 == 0x0000014A) || iParam0 == 0x0000014B) || iParam0 == 0x0000014E) || iParam0 == 0x0000014C) || iParam0 == 0x0000014D)
	{
		uParam1->f_9[0x0000000A] = 0x00000000;
	}
	if (func_206(uParam1->f_42, &fVar0) && uParam1->f_50 != fVar0)
	{
		uParam1->f_50 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_1266E;
	}
	else if (iParam3 == 0x00000000)
	{
		iVar1 = Global_1B416.f_6259.f_139[iParam0];
	}
	else if (iParam3 == 0x00000001)
	{
		iVar1 = Global_1B416.f_6259.f_272[iParam0];
	}
	else if (iParam3 == 0x00000002)
	{
		iVar1 = Global_1B416.f_6259.f_3AB[iParam0];
	}
	uParam1->f_5 = 0x00000000;
	uParam1->f_6 = 0x00000000;
	uParam1->f_7 = 0x00000000;
	uParam1->f_8 = 0x0000009C;
	uParam1->f_43 = 0xFFFFFFFF;
	if (iParam0 == 0x000000C8)
	{
		switch (iVar1)
		{
			case 0x00000001:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000002:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000003:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000004:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000005:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000006:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000007:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000008:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000009:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x0000000A:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x0000000B:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x0000000C:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x0000000D:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x0000000E:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x0000000F:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000010:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000011:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000012:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000013:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000014:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000015:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000016:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000017:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000018:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			case 0x00000019:
				func_161(func_162(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 0x00000004;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = func_148(func_162(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 0x000000DB)
	{
		switch (iVar1)
		{
			case 0x00000001:
				uParam1->f_5 = 0x00000062;
				uParam1->f_6 = 0x00000062;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000001;
				break;
			
			case 0x00000002:
				uParam1->f_5 = 0x0000006F;
				uParam1->f_6 = 0x0000006F;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000002;
				break;
			
			case 0x00000003:
				uParam1->f_5 = 0x00000087;
				uParam1->f_6 = 0x00000087;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000003;
				break;
			
			case 0x00000004:
				uParam1->f_5 = 0x0000003B;
				uParam1->f_6 = 0x0000003B;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000008;
				break;
			
			case 0x00000005:
				uParam1->f_5 = 0x00000062;
				uParam1->f_6 = 0x00000062;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000004;
				break;
			
			case 0x00000006:
				uParam1->f_5 = 0x00000062;
				uParam1->f_6 = 0x00000062;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000005;
				break;
			
			case 0x00000007:
				uParam1->f_5 = 0x0000002A;
				uParam1->f_6 = 0x0000002A;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000007;
				break;
			
			case 0x00000008:
				uParam1->f_5 = 0x0000006F;
				uParam1->f_6 = 0x0000006F;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0x00000006;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0x00000001:
				if (func_147(iParam0))
				{
					if (iParam0 != 0x000000A4)
					{
						if (func_146(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[0x00000030] = uVar2;
						}
						else if (func_145(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0x00000000;
							uParam1->f_8 = 0x0000009C;
							uParam1->f_61 = 0x00000001;
							if ((iParam0 == 0x0000010C || iParam0 == 0x0000010B) || iParam0 == 0x00000117)
							{
								uParam1->f_63 = 0x00000086;
							}
							else
							{
								uParam1->f_63 = 0x00000000;
							}
							uParam1->f_9[0x00000030] = uVar2;
						}
						else
						{
							uParam1->f_43 = 0x00000000;
						}
					}
					else
					{
						uParam1->f_43 = func_148(func_162(iParam0, iVar1));
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x0000008F;
						uParam1->f_6 = 0x00000022;
						uParam1->f_7 = 0x0000001F;
						uParam1->f_61 = 0x00000063;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x00000028;
						uParam1->f_6 = 0x00000028;
						uParam1->f_61 = 0x0000005D;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x0000001B;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x0000001B;
					uParam1->f_6 = 0x00000024;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x0000001B;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x00000059;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000163)
				{
					uParam1->f_5 = 0x0000001B;
					uParam1->f_6 = 0x0000001B;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x0000001B;
					uParam1->f_6 = 0x0000001B;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x0000001B;
					uParam1->f_6 = 0x00000024;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000002:
				if (func_147(iParam0))
				{
					if (iParam0 != 0x000000A4)
					{
						if (func_146(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[0x00000030] = uVar5;
						}
						else if (func_145(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0x00000000;
							uParam1->f_8 = 0x0000009C;
							uParam1->f_61 = 0x00000001;
							if ((iParam0 == 0x0000010C || iParam0 == 0x0000010B) || iParam0 == 0x00000117)
							{
								uParam1->f_63 = 0x00000086;
							}
							else
							{
								uParam1->f_63 = 0x00000000;
							}
							uParam1->f_9[0x00000030] = uVar5;
						}
						else
						{
							uParam1->f_43 = 0x00000001;
						}
					}
					else
					{
						uParam1->f_5 = 0x00000000;
						uParam1->f_6 = 0x0000000A;
						uParam1->f_7 = 0x00000004;
						uParam1->f_8 = 0x0000009C;
						uParam1->f_43 = func_148(func_162(iParam0, iVar1));
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x00000008;
						uParam1->f_6 = 0x00000008;
						uParam1->f_7 = 0x00000005;
						uParam1->f_61 = 0x0000006A;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x0000000E;
						uParam1->f_6 = 0x0000000E;
						uParam1->f_61 = 0x0000006C;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x00000087;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x00000087;
					uParam1->f_6 = 0x00000087;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x00000087;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x00000043;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x00000087;
					uParam1->f_6 = 0x00000087;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000087;
					uParam1->f_6 = 0x00000087;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000003:
				if (func_147(iParam0))
				{
					if (func_146(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[0x00000030] = uVar8;
					}
					else if (func_145(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0x00000000;
						uParam1->f_8 = 0x0000009C;
						uParam1->f_61 = 0x00000001;
						if ((iParam0 == 0x0000010C || iParam0 == 0x0000010B) || iParam0 == 0x00000117)
						{
							uParam1->f_63 = 0x00000086;
						}
						else
						{
							uParam1->f_63 = 0x00000000;
						}
						uParam1->f_9[0x00000030] = uVar8;
					}
					else
					{
						uParam1->f_43 = 0x00000002;
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x00000064;
						uParam1->f_6 = 0x00000064;
						uParam1->f_7 = 0x00000064;
						uParam1->f_61 = 0x00000016;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x00000098;
						uParam1->f_6 = 0x00000098;
						uParam1->f_61 = 0x00000016;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x00000058;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x00000058;
					uParam1->f_6 = 0x00000058;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x00000058;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x0000001C;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x00000058;
					uParam1->f_6 = 0x00000058;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000058;
					uParam1->f_6 = 0x00000058;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000004:
				if (func_147(iParam0))
				{
					if (func_146(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[0x00000030] = uVar11;
					}
					else if (func_145(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0x00000000;
						uParam1->f_8 = 0x0000009C;
						uParam1->f_61 = 0x00000001;
						if ((iParam0 == 0x0000010C || iParam0 == 0x0000010B) || iParam0 == 0x00000117)
						{
							uParam1->f_63 = 0x00000086;
						}
						else
						{
							uParam1->f_63 = 0x00000000;
						}
						uParam1->f_9[0x00000030] = uVar11;
					}
					else
					{
						uParam1->f_43 = 0x00000003;
					}
				}
				else if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x00000063;
						uParam1->f_6 = 0x00000063;
						uParam1->f_7 = 0x0000006A;
						uParam1->f_61 = 0x00000065;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x00000063;
						uParam1->f_6 = 0x00000063;
						uParam1->f_61 = 0x00000030;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x00000026;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x00000026;
					uParam1->f_6 = 0x00000026;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x00000026;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x00000051;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000163)
				{
					uParam1->f_5 = 0x00000026;
					uParam1->f_6 = 0x00000026;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x00000026;
					uParam1->f_6 = 0x00000026;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000026;
					uParam1->f_6 = 0x0000001B;
					while (func_142(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (unk_0x7F8A39872A07D2CE(&sVar15, "ORANGE") && iVar16 == 0x00000001)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = 0xFFFFFF9D;
						}
						iVar14++;
					}
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000005:
				if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x00000031;
						uParam1->f_6 = 0x00000031;
						uParam1->f_7 = 0x00000034;
						uParam1->f_61 = 0x00000062;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x00000080;
						uParam1->f_6 = 0x00000080;
						uParam1->f_61 = 0x00000063;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if ((iParam0 == 0x000000B2 || iParam0 == 0x000000B3) || iParam0 == 0x000000C0)
				{
					uParam1->f_5 = 0x00000098;
					uParam1->f_6 = 0x00000098;
					uParam1->f_7 = 0x00000012;
					uParam1->f_8 = 0x00000098;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x00000080;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x00000080;
					uParam1->f_6 = 0x00000037;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x0000005C;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x00000029;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000163)
				{
					uParam1->f_5 = 0x00000037;
					uParam1->f_6 = 0x00000037;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x00000080;
					uParam1->f_6 = 0x00000080;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000080;
					uParam1->f_6 = 0x00000000;
					while (func_142(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (unk_0x7F8A39872A07D2CE(&sVar20, "LIME_GREEN") && iVar21 == 0x00000001)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = 0xFFFFFF9D;
						}
						iVar19++;
					}
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000006:
				if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x0000008D;
						uParam1->f_6 = 0x0000008D;
						uParam1->f_7 = 0x00000049;
						uParam1->f_61 = 0x00000005;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x00000054;
						uParam1->f_6 = 0x00000054;
						uParam1->f_61 = 0x00000018;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x00000040;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x00000040;
					uParam1->f_6 = 0x0000003F;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x00000040;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x0000006F;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000163)
				{
					uParam1->f_5 = 0x00000040;
					uParam1->f_6 = 0x00000040;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x00000040;
					uParam1->f_6 = 0x00000040;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000040;
					uParam1->f_6 = 0x00000044;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000007:
				if (uParam1->f_42 == joaat("kuruma2"))
				{
					uParam1->f_5 = 0x0000000C;
					uParam1->f_6 = 0x0000000C;
					uParam1->f_7 = 0x0000000D;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x00000000;
						uParam1->f_6 = 0x00000000;
						uParam1->f_7 = 0x0000000A;
						uParam1->f_61 = 0x00000001;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x0000000C;
						uParam1->f_6 = 0x0000000C;
						uParam1->f_61 = 0x00000000;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x00000000;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x00000000;
					uParam1->f_6 = 0x00000005;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x00000000;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x00000051;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x0000014D)
				{
					uParam1->f_5 = 0x0000009A;
					uParam1->f_6 = 0x00000003;
					uParam1->f_61 = 0x00000000;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x00000000;
					uParam1->f_6 = 0x00000000;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000000;
					uParam1->f_6 = 0x0000000A;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			case 0x00000008:
				if (func_208(iParam0))
				{
					if (!Global_1266F)
					{
						uParam1->f_5 = 0x00000070;
						uParam1->f_6 = 0x00000070;
						uParam1->f_7 = 0x00000000;
						uParam1->f_61 = 0x00000007;
						uParam1->f_43 = 0xFFFFFFFF;
					}
					else
					{
						uParam1->f_5 = 0x00000083;
						uParam1->f_6 = 0x00000083;
						uParam1->f_61 = 0x0000004E;
						uParam1->f_43 = 0xFFFFFFFF;
					}
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x00000076;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000124)
				{
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000147)
				{
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x00000008;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x00000000;
					uParam1->f_61 = 0x00000008;
					uParam1->f_63 = 0x0000001B;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (iParam0 == 0x00000163)
				{
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x00000000;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x00000020:
				uParam1->f_5 = 0x0000006F;
				uParam1->f_6 = 0x00000041;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000000D:
				uParam1->f_5 = 0x0000002E;
				uParam1->f_6 = 0x00000018;
				uParam1->f_7 = 0x0000002E;
				uParam1->f_8 = 0x00000018;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000021:
				uParam1->f_5 = 0x00000007;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000022:
				uParam1->f_5 = 0x00000007;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000023:
				uParam1->f_5 = 0x00000007;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000024:
				uParam1->f_5 = 0x00000007;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000025:
				uParam1->f_5 = 0x00000007;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000026:
				uParam1->f_5 = 0x00000007;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000CE:
				uParam1->f_5 = 0x00000002;
				uParam1->f_6 = 0x00000086;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x0000001D;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000CF:
				uParam1->f_5 = 0x00000086;
				uParam1->f_6 = 0x00000086;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x0000007E;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000D0:
				uParam1->f_5 = 0x00000086;
				uParam1->f_6 = 0x00000086;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x0000001D;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000D1:
				uParam1->f_5 = 0x00000086;
				uParam1->f_6 = 0x00000086;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x0000008B;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000D2:
				if (iParam5 != 0x0000001D)
				{
					uParam1->f_5 = 0x0000001C;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000000E;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_43 = 0xFFFFFFFF;
				}
				else
				{
					uParam1->f_5 = 0x00000058;
					uParam1->f_6 = 0x00000042;
					uParam1->f_7 = 0x0000003F;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_61 = 0x00000001;
					uParam1->f_63 = 0x00000084;
				}
				break;
			
			case 0x000000D5:
				uParam1->f_5 = 0x00000026;
				uParam1->f_6 = 0x00000026;
				uParam1->f_7 = 0x0000002A;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000D4:
				uParam1->f_5 = 0x00000086;
				uParam1->f_6 = 0x00000086;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x0000001B;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000011:
				uParam1->f_5 = 0x0000001E;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000D7:
				uParam1->f_5 = 0x0000009F;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x000000A0;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000D9:
				uParam1->f_5 = 0x0000009F;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x000000A0;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000CD:
				uParam1->f_5 = 0x0000000C;
				uParam1->f_6 = 0x0000000C;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000000C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000E3:
				uParam1->f_5 = 0x00000000;
				uParam1->f_6 = 0x00000000;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000E2:
				uParam1->f_5 = 0x00000024;
				uParam1->f_6 = 0x00000024;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000000E6:
				uParam1->f_5 = 0x00000029;
				uParam1->f_6 = 0x00000029;
				uParam1->f_7 = 0x0000009C;
				uParam1->f_8 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000152:
				uParam1->f_5 = 0x00000040;
				uParam1->f_6 = 0x00000005;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x00000005;
				uParam1->f_61 = 0x00000000;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000153:
				uParam1->f_5 = 0x0000000E;
				uParam1->f_6 = 0x0000000E;
				uParam1->f_7 = 0x0000000E;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000154:
				uParam1->f_5 = 0x00000018;
				uParam1->f_6 = 0x0000001D;
				uParam1->f_7 = 0x00000041;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000155:
				uParam1->f_5 = 0x00000003;
				uParam1->f_6 = 0x00000004;
				uParam1->f_7 = 0x00000007;
				uParam1->f_8 = 0x0000006F;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000156:
				uParam1->f_5 = 0x0000006F;
				uParam1->f_6 = 0x00000059;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000006F;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000157:
				uParam1->f_5 = 0x0000000E;
				uParam1->f_6 = 0x00000079;
				uParam1->f_7 = 0x00000079;
				uParam1->f_8 = 0x0000006F;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000158:
				uParam1->f_5 = 0x00000032;
				uParam1->f_6 = 0x0000005B;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000006F;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000159:
				uParam1->f_5 = 0x00000075;
				uParam1->f_6 = 0x00000023;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x00000077;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000015A:
				uParam1->f_5 = 0x00000075;
				uParam1->f_6 = 0x00000023;
				uParam1->f_7 = 0x00000086;
				uParam1->f_8 = 0x00000077;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000015B:
				uParam1->f_5 = 0x0000000E;
				uParam1->f_6 = 0x00000005;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000015C:
				uParam1->f_5 = 0x0000000E;
				uParam1->f_6 = 0x0000000E;
				uParam1->f_7 = 0x0000000E;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000015D:
				uParam1->f_5 = 0x0000001B;
				uParam1->f_6 = 0x0000006F;
				uParam1->f_7 = 0x00000007;
				uParam1->f_8 = 0x0000006F;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000015E:
				uParam1->f_5 = 0x00000077;
				uParam1->f_6 = 0x00000049;
				uParam1->f_7 = 0x00000041;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000015F:
				uParam1->f_5 = 0x00000043;
				uParam1->f_6 = 0x00000001;
				uParam1->f_7 = 0x00000005;
				uParam1->f_8 = 0x0000006F;
				uParam1->f_61 = 0x0000006F;
				uParam1->f_63 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000164:
				uParam1->f_5 = 0x0000000C;
				uParam1->f_6 = 0x0000000C;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x00000000;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000016B:
				uParam1->f_5 = 0x0000000C;
				uParam1->f_6 = 0x0000000C;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000169:
				uParam1->f_5 = 0x0000009A;
				uParam1->f_6 = 0x0000000D;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000166:
				uParam1->f_5 = 0x00000075;
				uParam1->f_6 = 0x00000076;
				uParam1->f_7 = 0x00000012;
				uParam1->f_8 = 0x00000000;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000016A:
				uParam1->f_5 = 0x0000000D;
				uParam1->f_6 = 0x00000008;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000168:
				uParam1->f_5 = 0x00000009;
				uParam1->f_6 = 0x00000009;
				uParam1->f_7 = 0x00000007;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x00000167:
				uParam1->f_5 = 0x0000006F;
				uParam1->f_6 = 0x0000006F;
				uParam1->f_7 = 0x00000000;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x0000016C:
				uParam1->f_5 = 0x00000008;
				uParam1->f_6 = 0x0000000E;
				uParam1->f_7 = 0x00000005;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				uParam1->f_43 = 0xFFFFFFFF;
				break;
			
			case 0x000001A9:
				uParam1->f_5 = 0x00000099;
				uParam1->f_6 = 0x0000009F;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001AC:
				uParam1->f_5 = 0x0000000C;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001AF:
				uParam1->f_5 = 0x00000099;
				uParam1->f_6 = 0x0000009A;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B2:
				uParam1->f_5 = 0x0000000C;
				uParam1->f_6 = 0x0000000C;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B5:
				uParam1->f_5 = 0x0000000D;
				uParam1->f_6 = 0x00000083;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001AA:
				uParam1->f_5 = 0x0000006B;
				uParam1->f_6 = 0x0000009F;
				uParam1->f_7 = 0x0000006B;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001AD:
				uParam1->f_5 = 0x0000006B;
				uParam1->f_6 = 0x0000009F;
				uParam1->f_7 = 0x0000006B;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B0:
				uParam1->f_5 = 0x0000006B;
				uParam1->f_6 = 0x0000009F;
				uParam1->f_7 = 0x0000006B;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B3:
				uParam1->f_5 = 0x0000006B;
				uParam1->f_6 = 0x0000009F;
				uParam1->f_7 = 0x0000006B;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B6:
				uParam1->f_5 = 0x0000006B;
				uParam1->f_6 = 0x0000009F;
				uParam1->f_7 = 0x0000006B;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001AB:
				uParam1->f_5 = 0x00000083;
				uParam1->f_6 = 0x00000087;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001AE:
				uParam1->f_5 = 0x00000083;
				uParam1->f_6 = 0x00000027;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B1:
				uParam1->f_5 = 0x00000057;
				uParam1->f_6 = 0x0000008A;
				uParam1->f_7 = 0x00000007;
				uParam1->f_8 = 0x00000087;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B4:
				uParam1->f_5 = 0x0000000C;
				uParam1->f_6 = 0x00000037;
				uParam1->f_8 = 0x000000A0;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B7:
				uParam1->f_5 = 0x00000083;
				uParam1->f_6 = 0x00000037;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000000D3:
				uParam1->f_5 = 0x0000001E;
				uParam1->f_6 = 0x0000001E;
				uParam1->f_7 = 0x0000001E;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x00000091:
				uParam1->f_5 = 0x00000044;
				uParam1->f_6 = 0x00000002;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x0000007A:
				uParam1->f_5 = 0x0000006F;
				uParam1->f_6 = 0x00000040;
				uParam1->f_7 = 0x0000006F;
				uParam1->f_8 = 0x0000009C;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x000001B8:
				uParam1->f_5 = 0x00000006;
				uParam1->f_6 = 0x00000078;
				uParam1->f_7 = 0x00000007;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			case 0x00000185:
				uParam1->f_5 = 0x0000001D;
				uParam1->f_6 = 0x0000006F;
				uParam1->f_7 = 0x00000007;
				uParam1->f_8 = 0x00000005;
				uParam1->f_61 = 0x00000001;
				uParam1->f_63 = 0x00000084;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 0x000000A1)
	{
		uParam1->f_5 = 0x0000006F;
		uParam1->f_6 = 0x0000006F;
		uParam1->f_7 = 0x0000006F;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x000000E7)
	{
		uParam1->f_5 = 0x0000008E;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000091;
		uParam1->f_8 = 0x0000005A;
	}
	if (iParam0 == 0x00000122)
	{
		uParam1->f_6 = 0x00000000;
	}
	if (iParam0 == 0x00000123)
	{
		uParam1->f_5 = 0x00000083;
		uParam1->f_6 = 0x00000083;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000130)
	{
		uParam1->f_5 = 0x00000016;
		uParam1->f_6 = 0x0000000C;
		uParam1->f_7 = 0x00000086;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000131)
	{
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000132)
	{
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000133)
	{
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000134)
	{
		uParam1->f_5 = 0x0000000C;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000135)
	{
		uParam1->f_5 = 0x00000097;
		uParam1->f_6 = 0x00000081;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000136)
	{
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x00000000;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000137)
	{
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000006;
		uParam1->f_7 = 0x00000012;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000149)
	{
		uParam1->f_5 = 0x0000009A;
		uParam1->f_6 = 0x0000009A;
		uParam1->f_7 = 0x0000009A;
		uParam1->f_8 = 0x00000000;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x0000014A)
	{
		uParam1->f_5 = 0x0000009A;
		uParam1->f_6 = 0x0000009A;
		uParam1->f_7 = 0x0000009A;
		uParam1->f_8 = 0x00000000;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x0000014B)
	{
		uParam1->f_5 = 0x0000009A;
		uParam1->f_6 = 0x0000009A;
		uParam1->f_7 = 0x00000000;
		uParam1->f_8 = 0x0000009A;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x0000014C)
	{
		uParam1->f_5 = 0x00000000;
		uParam1->f_6 = 0x00000078;
		uParam1->f_7 = 0x00000023;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x0000014E)
	{
		uParam1->f_5 = 0x0000009A;
		uParam1->f_6 = 0x0000009A;
		uParam1->f_7 = 0x0000009A;
		uParam1->f_8 = 0x00000000;
		uParam1->f_61 = 0x00000000;
		uParam1->f_63 = 0x00000000;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x00000143)
	{
		if (iParam4 == 0x00000000)
		{
			uParam1->f_42 = 0x0A90ED5C;
			uParam1->f_5 = 0x00000000;
			uParam1->f_6 = 0x00000000;
			uParam1->f_7 = 0x00000000;
			uParam1->f_8 = 0x00000000;
			uParam1->f_61 = 0x00000000;
			uParam1->f_63 = 0x00000000;
			uParam1->f_43 = 0xFFFFFFFF;
		}
		else if (iParam4 == 0x00000001)
		{
			uParam1->f_42 = 0x171C92C4;
			uParam1->f_5 = 0x00000000;
			uParam1->f_6 = 0x00000000;
			uParam1->f_7 = 0x00000000;
			uParam1->f_8 = 0x00000000;
			uParam1->f_61 = 0x00000000;
			uParam1->f_63 = 0x00000000;
			uParam1->f_43 = 0xFFFFFFFF;
		}
	}
	if (func_141(uParam1->f_42))
	{
		uParam1->f_3E = 0x00000001;
		uParam1->f_3F = 0x00000001;
		uParam1->f_40 = 0x00000001;
	}
	if (iParam0 == 0x00000165)
	{
		uParam1->f_42 = func_140();
		uParam1->f_5 = 0x0000000E;
		uParam1->f_6 = 0x00000083;
		uParam1->f_8 = 0x0000006F;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_43 = 0xFFFFFFFF;
	}
	if (iParam0 == 0x0000016D)
	{
		uParam1->f_5 = 0x00000080;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x0000016C)
	{
		uParam1->f_5 = 0x00000020;
		uParam1->f_6 = 0x00000070;
		uParam1->f_7 = 0x00000019;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x0000016E)
	{
		uParam1->f_5 = 0x00000041;
		uParam1->f_6 = 0x00000041;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x00000001;
		uParam1->f_3F = 0x00000001;
		uParam1->f_40 = 0x00000001;
	}
	if (iParam0 == 0x00000183)
	{
		uParam1->f_6 = 0x00000078;
	}
	if (iParam0 == 0x00000190)
	{
		uParam1->f_5 = 0x00000040;
		uParam1->f_6 = 0x00000002;
		uParam1->f_7 = 0x00000044;
		uParam1->f_8 = 0x0000006F;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
		uParam1->f_4A = 0x000000FF;
		uParam1->f_4C = 0x000000FF;
	}
	if (iParam0 == 0x00000191)
	{
		uParam1->f_5 = 0x00000005;
		uParam1->f_6 = 0x0000006A;
		uParam1->f_7 = 0x00000005;
		uParam1->f_8 = 0x0000006F;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x00000001;
		uParam1->f_3F = 0x00000001;
		uParam1->f_40 = 0x00000001;
	}
	if (iParam0 == 0x00000192)
	{
		uParam1->f_42 = func_139();
		uParam1->f_5 = 0x00000009;
		uParam1->f_7 = 0x00000007;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x00000199)
	{
		uParam1->f_5 = 0x0000008D;
		uParam1->f_7 = 0x00000049;
		uParam1->f_8 = 0x00000070;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_45 = 0x00000006;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
		uParam1->f_4A = 0x000000FF;
		uParam1->f_4C = 0x000000FF;
	}
	if (iParam0 == 0x00000198)
	{
		uParam1->f_5 = 0x00000077;
		uParam1->f_6 = 0x00000077;
		uParam1->f_7 = 0x00000001;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x00000001;
		uParam1->f_3F = 0x00000001;
		uParam1->f_40 = 0x00000001;
	}
	if (iParam0 == 0x00000197)
	{
		uParam1->f_5 = 0x0000006F;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x00000196)
	{
		uParam1->f_5 = 0x0000009A;
		uParam1->f_6 = 0x0000000C;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x00000194)
	{
		uParam1->f_5 = 0x00000070;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x00000193)
	{
		uParam1->f_5 = 0x00000008;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
		uParam1->f_62 = 0x00000000;
		uParam1->f_3E = 0x000000FF;
		uParam1->f_3F = 0x000000FF;
		uParam1->f_40 = 0x000000FF;
	}
	if (iParam0 == 0x000001E7)
	{
		uParam1->f_5 = 0x00000066;
		uParam1->f_6 = 0x00000090;
		uParam1->f_7 = 0x00000069;
		uParam1->f_8 = 0x00000090;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
	}
	if (iParam0 == 0x000001E5)
	{
		uParam1->f_5 = 0x0000006F;
		uParam1->f_6 = 0x00000000;
		uParam1->f_7 = 0x00000000;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
	}
	if (iParam0 == 0x000001E6)
	{
		uParam1->f_5 = 0x00000066;
		uParam1->f_6 = 0x00000066;
		uParam1->f_7 = 0x00000069;
		uParam1->f_8 = 0x0000009C;
		uParam1->f_61 = 0x00000001;
		uParam1->f_63 = 0x00000084;
	}
	if (uParam1->f_43 >= 0x00000000)
	{
	}
	else if (iParam0 == 0x000000C3)
	{
		uParam1->f_43 = 0x00000001;
	}
}

int func_139()
{
	return 0x897AFC65;
}

int func_140()
{
	return 0x81BD2ED0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case 0x89BA59F5:
		case 0xFD707EDE:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case 0xD35698EF:
		case 0xC5DD6967:
		case 0x9A9EB7DE:
		case 0xE8983F9F:
		case 0x96E24857:
		case 0x3E2E4F8A:
		case joaat("lazer"):
		case 0xAD6065C0:
		case 0x5D56F01B:
		case 0x3DC92356:
		case 0xC3F25753:
		case 0xFE0A508C:
		case 0xA52F6866:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 0x46699F47:
		case 0x1AAD0DED:
		case 0xD4AE63D9:
			return 0x00000001;
		
		default:
	}
	if (iParam0 == 0x64DE07A1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_142(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = 0xFFFFFFFF;
	*uParam3 = 0xFFFFFFFF;
	*uParam4 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000076;
			*uParam4 = 0x00000003;
			break;
		
		case 0x00000001:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000093;
			*uParam4 = 0x00000004;
			break;
		
		case 0x00000002:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000060;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000047;
			*uParam4 = 0x00000091;
			break;
		
		case 0x00000004:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000087;
			*uParam4 = 0x00000087;
			break;
		
		case 0x00000005:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001D;
			*uParam4 = 0x0000001C;
			break;
		
		case 0x00000006:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000040;
			*uParam4 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000046;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000032;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000037;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000059;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000026;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000025;
			*uParam4 = 0x0000006A;
			break;
		
		case 0x0000000D:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000004;
			*uParam4 = 0x0000006F;
			break;
		
		case 0x0000000E:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 0x00000004;
			*uParam3 = 0x00000078;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000006F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000000;
			*uParam4 = 0x0000000A;
			break;
		
		case 0x00000011:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000001;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000012:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000000B;
			*uParam4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000002;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000014:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000003;
			*uParam4 = 0x00000006;
			break;
		
		case 0x00000015:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000005;
			*uParam4 = 0x0000006F;
			break;
		
		case 0x00000016:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000006;
			*uParam4 = 0x00000004;
			break;
		
		case 0x00000017:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000007;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000018:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000008;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000019:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000009;
			*uParam4 = 0x00000007;
			break;
		
		case 0x0000001A:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000000A;
			*uParam4 = 0x00000007;
			break;
		
		case 0x0000001B:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001B;
			*uParam4 = 0x00000024;
			break;
		
		case 0x0000001C:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001C;
			*uParam4 = 0x0000001C;
			break;
		
		case 0x0000001D:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000096;
			*uParam4 = 0x0000002A;
			break;
		
		case 0x0000001E:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001E;
			*uParam4 = 0x00000024;
			break;
		
		case 0x0000001F:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001F;
			*uParam4 = 0x0000001B;
			break;
		
		case 0x00000020:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000020;
			*uParam4 = 0x00000019;
			break;
		
		case 0x00000021:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000021;
			*uParam4 = 0x0000002F;
			break;
		
		case 0x00000022:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000022;
			*uParam4 = 0x0000002F;
			break;
		
		case 0x00000023:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000008F;
			*uParam4 = 0x0000001F;
			break;
		
		case 0x00000024:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000023;
			*uParam4 = 0x00000019;
			break;
		
		case 0x00000025:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000089;
			*uParam4 = 0x00000003;
			break;
		
		case 0x00000026:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000088;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000027:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000024;
			*uParam4 = 0x0000001A;
			break;
		
		case 0x00000028:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000026;
			*uParam4 = 0x00000025;
			break;
		
		case 0x00000029:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000008A;
			*uParam4 = 0x00000059;
			break;
		
		case 0x0000002A:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005A;
			*uParam4 = 0x00000066;
			break;
		
		case 0x0000002B:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000058;
			*uParam4 = 0x00000058;
			break;
		
		case 0x0000002C:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000059;
			*uParam4 = 0x00000058;
			break;
		
		case 0x0000002D:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005B;
			*uParam4 = 0x0000005B;
			break;
		
		case 0x0000002E:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000031;
			*uParam4 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000032;
			*uParam4 = 0x00000035;
			break;
		
		case 0x00000030:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000033;
			*uParam4 = 0x00000042;
			break;
		
		case 0x00000031:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000034;
			*uParam4 = 0x0000003B;
			break;
		
		case 0x00000032:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000035;
			*uParam4 = 0x0000003B;
			break;
		
		case 0x00000033:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000036;
			*uParam4 = 0x0000003C;
			break;
		
		case 0x00000034:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005C;
			*uParam4 = 0x0000005C;
			break;
		
		case 0x00000035:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000008D;
			*uParam4 = 0x00000049;
			break;
		
		case 0x00000036:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000003D;
			*uParam4 = 0x0000003F;
			break;
		
		case 0x00000037:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000003E;
			*uParam4 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000003F;
			*uParam4 = 0x00000057;
			break;
		
		case 0x00000039:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000041;
			*uParam4 = 0x00000057;
			break;
		
		case 0x0000003A:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000042;
			*uParam4 = 0x0000003C;
			break;
		
		case 0x0000003B:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000043;
			*uParam4 = 0x00000043;
			break;
		
		case 0x0000003C:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000044;
			*uParam4 = 0x00000044;
			break;
		
		case 0x0000003D:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000045;
			*uParam4 = 0x0000004A;
			break;
		
		case 0x0000003E:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000049;
			*uParam4 = 0x00000049;
			break;
		
		case 0x0000003F:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000046;
			*uParam4 = 0x00000046;
			break;
		
		case 0x00000040:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000004A;
			*uParam4 = 0x0000004A;
			break;
		
		case 0x00000041:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000060;
			*uParam4 = 0x0000005F;
			break;
		
		case 0x00000042:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000065;
			*uParam4 = 0x0000005F;
			break;
		
		case 0x00000043:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005F;
			*uParam4 = 0x00000061;
			break;
		
		case 0x00000044:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005E;
			*uParam4 = 0x00000068;
			break;
		
		case 0x00000045:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000061;
			*uParam4 = 0x00000062;
			break;
		
		case 0x00000046:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000067;
			*uParam4 = 0x00000068;
			break;
		
		case 0x00000047:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000068;
			*uParam4 = 0x00000068;
			break;
		
		case 0x00000048:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000062;
			*uParam4 = 0x0000005F;
			break;
		
		case 0x00000049:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000064;
			*uParam4 = 0x00000064;
			break;
		
		case 0x0000004A:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000066;
			*uParam4 = 0x00000069;
			break;
		
		case 0x0000004B:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000063;
			*uParam4 = 0x0000006A;
			break;
		
		case 0x0000004C:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000069;
			*uParam4 = 0x00000069;
			break;
		
		case 0x0000004D:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000006A;
			*uParam4 = 0x0000006A;
			break;
		
		case 0x0000004E:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000048;
			*uParam4 = 0x00000040;
			break;
		
		case 0x0000004F:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000092;
			*uParam4 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000091;
			*uParam4 = 0x0000004A;
			break;
		
		case 0x00000051:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000006B;
			*uParam4 = 0x0000006B;
			break;
		
		case 0x00000052:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000006F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000070;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000000;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000093;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000001;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000000B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000058:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000002;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000059:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000003;
			*uParam4 = 0x00000002;
			break;
		
		case 0x0000005A:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000004;
			*uParam4 = 0x00000004;
			break;
		
		case 0x0000005B:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000005;
			*uParam4 = 0x00000005;
			break;
		
		case 0x0000005C:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000006;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000007;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000005E:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000008;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000009;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000000A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001C;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000064:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000096;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000065:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000066:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000067:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000020;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000068:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000021;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000069:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000022;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006A:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006B:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000023;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006C:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000087;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006D:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000089;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006E:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000088;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006F:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000024;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000070:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000071:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000063;
			*uParam4 = 0x00000063;
			break;
		
		case 0x00000072:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005A;
			*uParam4 = 0x00000066;
			break;
		
		case 0x00000073:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000058;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000074:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000075:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000031;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000076:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000033;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000077:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000034;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000078:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000035;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000079:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000036;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007A:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005C;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007B:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000003D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007D:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000003E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007E:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000003F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007F:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000040;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000080:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000041;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000081:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000042;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000043;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000083:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000044;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000084:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000045;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000085:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000049;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000086:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000004A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000087:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000065;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000088:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000089:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008A:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000061;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008B:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000067;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008C:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000068;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008D:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000062;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008E:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000064;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008F:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000066;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000090:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000063;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000091:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000069;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000092:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000006A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000093:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000047;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000094:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000048;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000095:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000096:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000091;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000097:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000006B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000098:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000070;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000099:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000000C;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009A:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000000D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009B:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000000E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009C:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000083;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009D:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000053;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009E:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000052;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009F:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000054;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000095;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A1:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000094;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A2:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000027;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A3:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000028;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A4:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000029;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A5:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000002A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A6:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000080;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A7:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000097;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A8:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000009B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A9:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000098;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000099;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000AB:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000009A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000075;
			*uParam4 = 0x00000012;
			break;
		
		case 0x000000AD:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000077;
			*uParam4 = 0x00000005;
			break;
		
		case 0x000000AE:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x0000009E;
			*uParam4 = 0x000000A0;
			break;
		
		case 0x000000AF:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x0000009F;
			*uParam4 = 0x000000A0;
			break;
	}
	return *uParam2 != 0xFFFFFFFF;
}

int func_143(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 0x0000018E || iParam0 == 0x00000182) || iParam0 == 0x00000187) || iParam0 == 0x0000018A) || iParam0 == 0x00000189) || iParam0 == 0x0000018D) || iParam0 == 0x0000018C) || iParam0 == 0x00000186) || iParam0 == 0x0000018B) || iParam0 == 0x00000185) || iParam0 == 0x00000184) || iParam0 == 0x00000188) || iParam0 == 0x0000018F) || iParam0 == 0x0000019A) || iParam0 == 0x0000019B) || iParam0 == 0x0000019C) || iParam0 == 0x00000195) || iParam0 == 0x0000019F) || iParam0 == 0x000001A1) || iParam0 == 0x000001A2) || iParam0 == 0x000001A8) || iParam0 == 0x000001A4) || iParam0 == 0x000001A5) || iParam0 == 0x000001A7) || iParam0 == 0x000001A6) || iParam0 == 0x000001C1) || iParam0 == 0x000001BA) || iParam0 == 0x000001B9) || iParam0 == 0x000001BC) || iParam0 == 0x000001BE) || iParam0 == 0x000001C0) || iParam0 == 0x000001BF) || iParam0 == 0x000001BD) || iParam0 == 0x000001BB) || iParam0 == 0x000001CB) || iParam0 == 0x000001CC) || iParam0 == 0x000001CD) || iParam0 == 0x000001CE) || iParam0 == 0x000001CF) || iParam0 == 0x000001D0) || iParam0 == 0x000001D1) || iParam0 == 0x000001D2) || iParam0 == 0x000001D3) || iParam0 == 0x000001D4) || iParam0 == 0x000001D5) || iParam0 == 0x000001D6) || iParam0 == 0x000001D7) || iParam0 == 0x000001D8) || iParam0 == 0x000001D9) || iParam0 == 0x000001DA) || iParam0 == 0x000001DB) || iParam0 == 0x000001DC) || iParam0 == 0x000001DD) || iParam0 == 0x000001DE) || iParam0 == 0x000001DF) || iParam0 == 0x000001E9) || iParam0 == 0x000001EA) || iParam0 == 0x000001EB) || iParam0 == 0x000001EC) || iParam0 == 0x000001ED) || iParam0 == 0x000001EE) || iParam0 == 0x000001EF) || iParam0 == 0x000001F0) || iParam0 == 0x000001F1) || iParam0 == 0x000001F2) || iParam0 == 0x000001F4) || iParam0 == 0x000001F5) || iParam0 == 0x000001F6) || iParam0 == 0x000001F7) || iParam0 == 0x000001F8) || iParam0 == 0x000001F9)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_144(int iParam0)
{
	if (((((iParam0 == 0x0000011E || iParam0 == 0x00000121) || iParam0 == 0x00000122) || iParam0 == 0x0000012D) || iParam0 == 0x0000011F) || iParam0 == 0x00000120)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == 0x00000113)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000000;
				*uParam3 = 0x0000000A;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x0000010E)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000112)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000040;
				*uParam3 = 0x00000044;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000116)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000000;
				*uParam3 = 0x0000000A;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000000;
				*uParam3 = 0x0000000A;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x0000010B)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000001B;
				*uParam3 = 0x00000024;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000118)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x0000006F;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x0000006F;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x0000010C)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000001B;
				*uParam3 = 0x00000024;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000114)
	{
		switch (iParam1)
		{
			case 0x00000001:
				func_161(func_162(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				func_161(func_162(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000119)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x0000006F;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x0000006F;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000115)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000000;
				*uParam3 = 0x0000000A;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x0000010F)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000001B;
				*uParam3 = 0x00000024;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000000;
				*uParam3 = 0x0000000A;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000110)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000026;
				*uParam3 = 0x00000000;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000058;
				*uParam3 = 0x00000058;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x0000010D)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x0000006F;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x0000006F;
				*uParam3 = 0x0000006F;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	else if (iParam0 == 0x00000117)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000000;
				*uParam3 = 0x0000000A;
				*uParam4 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000040;
				*uParam3 = 0x00000044;
				*uParam4 = 0x00000002;
				return 0x00000001;
				break;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_146(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 0x000000E7)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000004;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000003:
				*uParam2 = 0x00000002;
				return 0x00000001;
				break;
			
			case 0x00000004:
				*uParam2 = 0x00000003;
				return 0x00000001;
				break;
		}
		*uParam2 = 0xFFFFFFFF;
		return 0x00000000;
	}
	else if (iParam0 == 0x000000E8)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000002;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000001;
				return 0x00000001;
				break;
		}
		*uParam2 = 0xFFFFFFFF;
		return 0x00000000;
	}
	else if (iParam0 == 0x00000114)
	{
		switch (iParam1)
		{
			case 0x00000001:
				*uParam2 = 0x00000001;
				return 0x00000001;
				break;
			
			case 0x00000002:
				*uParam2 = 0x00000002;
				return 0x00000001;
				break;
		}
		*uParam2 = 0xFFFFFFFF;
		return 0x00000000;
	}
	*uParam2 = 0xFFFFFFFF;
	return 0x00000000;
}

int func_147(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x0000005E || iParam0 == 0x00000044) || iParam0 == 0x00000065) || iParam0 == 0x000000A4) || iParam0 == 0x000000C8) || iParam0 == 0x000000DB) || iParam0 == 0x000000E7) || iParam0 == 0x000000E8) || iParam0 == 0x00000113) || iParam0 == 0x0000010E) || iParam0 == 0x00000112) || iParam0 == 0x00000116) || iParam0 == 0x0000010B) || iParam0 == 0x00000118) || iParam0 == 0x0000010C) || iParam0 == 0x00000114) || iParam0 == 0x00000119) || iParam0 == 0x00000115) || iParam0 == 0x0000010F) || iParam0 == 0x00000110) || iParam0 == 0x0000010D) || iParam0 == 0x00000117) || iParam0 == 0x0000019D) || iParam0 == 0x0000019E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000027:
			return 0x00000000;
		
		case 0x00000028:
			return 0x00000001;
		
		case 0x0000002B:
			return 0x00000000;
		
		case 0x0000002C:
			return 0x00000001;
		
		case 0x0000002D:
			return 0x00000002;
		
		case 0x0000002E:
			return 0x00000003;
		
		case 0x0000002F:
			return 0x00000004;
		
		case 0x00000030:
			return 0x00000005;
		
		case 0x00000031:
			return 0x00000006;
		
		case 0x00000032:
			return 0x00000007;
		
		case 0x00000033:
			return 0x00000008;
		
		case 0x00000034:
			return 0x00000009;
		
		case 0x00000035:
			return 0x0000000A;
		
		case 0x00000036:
			return 0x0000000B;
		
		case 0x00000037:
			return 0x0000000C;
		
		case 0x00000038:
			return 0x0000000D;
		
		case 0x00000039:
			return 0x0000000E;
		
		case 0x0000003A:
			return 0x0000000F;
		
		case 0x0000003B:
			return 0x00000010;
		
		case 0x0000003C:
			return 0x00000011;
		
		case 0x0000003D:
			return 0x00000012;
		
		case 0x0000003E:
			return 0x00000013;
		
		case 0x0000003F:
			return 0x00000014;
		
		case 0x00000040:
			return 0x00000015;
		
		case 0x00000041:
			return 0x00000016;
		
		case 0x00000042:
			return 0x00000017;
		
		case 0x00000043:
			return 0x00000018;
		
		case 0x00000052:
			return 0x00000000;
		
		case 0x00000053:
			return 0x00000001;
		
		case 0x0000005A:
			return 0x00000000;
		
		case 0x0000005B:
			return 0x00000001;
		
		case 0x00000061:
			return 0x00000000;
		
		case 0x00000062:
			return 0x00000001;
		
		case 0x00000063:
			return 0x00000002;
		
		case 0x00000064:
			return 0x00000003;
		
		case 0x00000065:
			return 0x00000004;
		
		case 0x00000066:
			return 0x00000005;
		
		case 0x00000067:
			return 0x00000006;
		
		case 0x00000068:
			if (func_160(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				return 0x0000000E;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				return 0x0000000D;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000002))
			{
				return 0x00000008;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000003))
			{
				return 0x0000000C;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000004))
			{
				return 0x0000000B;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000005))
			{
				return 0x0000000A;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000006))
			{
				return 0x00000009;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000007;
			}
			else if (func_160(unk_0xD803B885F5E47A62(), 0x00000008))
			{
				return 0x0000000F;
			}
			if (func_149(unk_0xD803B885F5E47A62()))
			{
			}
			return 0xFFFFFFFF;
			break;
		
		case 0x00000069:
			return 0x00000000;
		
		case 0x0000006A:
			return 0x00000001;
		
		case 0x0000006B:
			return 0x00000002;
		
		case 0x0000006C:
			return 0x00000003;
		
		case 0x0000006D:
			return 0x00000004;
		
		case 0x0000006E:
			return 0x00000005;
		
		case 0x0000006F:
			return 0x00000006;
		
		case 0x00000070:
			return 0x00000007;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000009;
	}
	return 0xFFFFFFFF;
}

int func_149(int iParam0)
{
	if ((((((((func_159(iParam0) || func_158(iParam0)) || func_157(iParam0)) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0)) || func_150(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_150(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_2, 0x00000000);
}

int func_151()
{
	return 0xFFFFFFFF;
}

bool func_152(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x0000001F);
}

bool func_153(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x0000001E);
}

bool func_154(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x0000001D);
}

bool func_155(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x0000001C);
}

bool func_156(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x0000001B);
}

bool func_157(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x0000001A);
}

bool func_158(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x00000019);
}

bool func_159(int iParam0)
{
	if (iParam0 == func_151())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x00000018);
}

int func_160(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000004:
			return func_159(iParam0);
		
		case 0x00000003:
			return func_158(iParam0);
		
		case 0x00000006:
			return func_157(iParam0);
		
		case 0x00000001:
			return func_156(iParam0);
		
		case 0x00000000:
			return func_155(iParam0);
		
		case 0x00000007:
			return func_154(iParam0);
		
		case 0x00000002:
			return func_153(iParam0);
		
		case 0x00000005:
			return func_152(iParam0);
		
		case 0x00000008:
			return func_150(iParam0);
		
		default:
	}
	return 0x00000000;
}

int func_161(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0xFFFFFFFF;
	*uParam2 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000027:
			*uParam1 = 0x00000000;
			*uParam2 = 0x0000000B;
			return 0x00000001;
		
		case 0x0000002B:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x00000040;
			return 0x00000001;
		
		case 0x0000002C:
			*uParam1 = 0x00000040;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x0000002D:
			*uParam1 = 0x00000035;
			*uParam2 = 0x00000059;
			return 0x00000001;
		
		case 0x0000002E:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x00000059;
			return 0x00000001;
		
		case 0x0000002F:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000030:
			*uParam1 = 0x00000040;
			*uParam2 = 0x0000001C;
			return 0x00000001;
		
		case 0x00000031:
			*uParam1 = 0x00000001;
			*uParam2 = 0x00000059;
			return 0x00000001;
		
		case 0x00000032:
			*uParam1 = 0x0000006F;
			*uParam2 = 0x0000001C;
			return 0x00000001;
		
		case 0x00000033:
			*uParam1 = 0x00000046;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000034:
			*uParam1 = 0x00000040;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000035:
			*uParam1 = 0x00000035;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000036:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000037:
			*uParam1 = 0x00000001;
			*uParam2 = 0x00000035;
			return 0x00000001;
		
		case 0x00000038:
			*uParam1 = 0x00000058;
			*uParam2 = 0x00000040;
			return 0x00000001;
		
		case 0x00000039:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x00000040;
			return 0x00000001;
		
		case 0x0000003A:
			*uParam1 = 0x00000046;
			*uParam2 = 0x00000058;
			return 0x00000001;
		
		case 0x0000003B:
			*uParam1 = 0x00000001;
			*uParam2 = 0x00000058;
			return 0x00000001;
		
		case 0x0000003C:
			*uParam1 = 0x00000035;
			*uParam2 = 0x0000001C;
			return 0x00000001;
		
		case 0x0000003D:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x0000003E:
			*uParam1 = 0x00000040;
			*uParam2 = 0x0000001C;
			return 0x00000001;
		
		case 0x0000003F:
			*uParam1 = 0x00000046;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000040:
			*uParam1 = 0x0000001C;
			*uParam2 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000041:
			*uParam1 = 0x00000035;
			*uParam2 = 0x00000026;
			return 0x00000001;
		
		case 0x00000042:
			*uParam1 = 0x00000035;
			*uParam2 = 0x0000001C;
			return 0x00000001;
		
		case 0x00000043:
			*uParam1 = 0x0000006F;
			*uParam2 = 0x0000001C;
			return 0x00000001;
		
		case 0x0000005A:
			*uParam1 = 0x0000001B;
			*uParam2 = 0x0000001B;
			return 0x00000001;
		
		case 0x0000005B:
			*uParam1 = 0x0000006F;
			*uParam2 = 0x00000000;
			return 0x00000001;
		
		case 0x00000073:
			*uParam1 = 0x00000028;
			*uParam2 = 0x0000000C;
			return 0x00000001;
		
		case 0x00000074:
			*uParam1 = 0x0000003A;
			*uParam2 = 0x00000001;
			return 0x00000001;
		
		case 0x00000076:
			*uParam1 = 0x0000006F;
			return 0x00000001;
		
		case 0x00000077:
			*uParam1 = 0x00000078;
			return 0x00000001;
		
		case 0x00000078:
			*uParam1 = 0x00000001;
			*uParam2 = 0x00000001;
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	switch (iParam0)
	{
		case 0x00000011:
			return 0x00000000;
		
		case 0x00000009:
			return 0x00000001;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000003;
		
		case 0x0000000C:
			return 0x00000004;
		
		case 0x0000000D:
			return 0x00000005;
		
		case 0x0000000E:
			return 0x00000006;
		
		case 0x0000000F:
			return 0x00000007;
		
		case 0x00000010:
			return 0x00000008;
		
		case 0x00000013:
			return 0x00000009;
		
		case 0x00000016:
			return 0x0000000A;
		
		case 0x00000017:
			return 0x0000000B;
		
		case 0x00000018:
			return 0x0000000C;
		
		case 0x00000019:
			return 0x0000000D;
		
		case 0x0000001B:
			return 0x0000000E;
		
		case 0x0000001C:
			return 0x0000000F;
		
		case 0x0000001D:
			return 0x00000010;
		
		case 0x0000001E:
			return 0x00000011;
		
		case 0x0000001F:
			return 0x00000012;
		
		case 0x00000014:
			return 0x00000013;
		
		case 0x00000020:
			return 0x00000014;
		
		case 0x00000015:
			return 0x00000015;
		
		case 0x0000004E:
			return 0x00000016;
		
		case 0x0000004F:
			return 0x00000017;
		
		case 0x00000050:
			return 0x00000018;
		
		case 0x00000012:
			return 0x00000019;
		
		case 0x00000051:
			return 0x0000001A;
		
		case 0x00000052:
			return 0x0000001B;
		
		case 0x00000053:
			return 0x0000001C;
		
		case 0x00000054:
			return 0x0000001D;
		
		case 0x00000055:
			return 0x0000001E;
		
		case 0x00000056:
			return 0x0000001F;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000021;
		
		case 0x00000066:
			return 0x00000022;
		
		case 0x00000071:
			return 0x00000023;
		
		case 0x000000A0:
			return 0x00000024;
		
		case 0x000000A3:
			return 0x00000025;
		
		case 0x000000A2:
			return 0x00000026;
		
		case 0x000000A4:
			if (func_163(iParam0, 0x0000000B, iParam1))
			{
				return 0x00000028;
			}
			return 0x00000027;
		
		case 0x000000C7:
			return 0x00000029;
		
		case 0x000000C9:
			return 0x0000002A;
		
		case 0x000000C8:
			switch (iParam1)
			{
				case 0x00000001:
					return 0x0000002B;
				
				case 0x00000002:
					return 0x0000002C;
				
				case 0x00000003:
					return 0x0000002D;
				
				case 0x00000004:
					return 0x0000002E;
				
				case 0x00000005:
					return 0x0000002F;
				
				case 0x00000006:
					return 0x00000030;
				
				case 0x00000007:
					return 0x00000031;
				
				case 0x00000008:
					return 0x00000032;
				
				case 0x00000009:
					return 0x00000033;
				
				case 0x0000000A:
					return 0x00000034;
				
				case 0x0000000B:
					return 0x00000035;
				
				case 0x0000000C:
					return 0x00000036;
				
				case 0x0000000D:
					return 0x00000037;
				
				case 0x0000000E:
					return 0x00000038;
				
				case 0x0000000F:
					return 0x00000039;
				
				case 0x00000010:
					return 0x0000003A;
				
				case 0x00000011:
					return 0x0000003B;
				
				case 0x00000012:
					return 0x0000003C;
				
				case 0x00000013:
					return 0x0000003D;
				
				case 0x00000014:
					return 0x0000003E;
				
				case 0x00000015:
					return 0x0000003F;
				
				case 0x00000016:
					return 0x00000040;
				
				case 0x00000017:
					return 0x00000041;
				
				case 0x00000018:
					return 0x00000042;
				
				case 0x00000019:
					return 0x00000043;
				
				default:
			}
			return 0x0000002B;
		
		case 0x000000AB:
			return 0x00000044;
		
		case 0x000000BB:
			return 0x00000045;
		
		case 0x000000B1:
			return 0x00000046;
		
		case 0x000000B7:
			return 0x00000047;
		
		case 0x000000B9:
			return 0x00000048;
		
		case 0x000000B8:
			return 0x00000049;
		
		case 0x000000BC:
			return 0x0000004A;
		
		case 0x000000AD:
			return 0x0000004B;
		
		case 0x000000B2:
			return 0x0000004C;
		
		case 0x000000BA:
			return 0x0000004D;
		
		case 0x000000D7:
			return 0x0000004E;
		
		case 0x000000D9:
			return 0x0000004F;
		
		case 0x000000E0:
			return 0x00000050;
		
		case 0x000000ED:
			return 0x00000051;
		
		case 0x000000F3:
			return 0x00000052;
		
		case 0x000000F4:
			return 0x00000053;
		
		case 0x000000F5:
			return 0x00000054;
		
		case 0x000000FD:
			return 0x00000055;
		
		case 0x000000FE:
			return 0x00000056;
		
		case 0x00000100:
			return 0x00000057;
		
		case 0x00000101:
			return 0x00000058;
		
		case 0x00000102:
			return 0x00000059;
		
		case 0x00000114:
			if (func_163(iParam0, 0x00000010, iParam1))
			{
				return 0x0000005B;
			}
			return 0x0000005A;
		
		case 0x00000143:
			return 0x0000005C;
		
		case 0x00000144:
			return 0x0000005D;
		
		case 0x00000151:
			return 0x0000005E;
		
		case 0x00000165:
			return 0x0000005F;
		
		case 0x00000192:
			return 0x00000060;
		
		case 0x0000019D:
			switch (iParam1)
			{
				case 0x00000001:
					return 0x00000061;
				
				case 0x00000002:
					return 0x00000062;
				
				case 0x00000003:
					return 0x00000063;
				
				case 0x00000004:
					return 0x00000064;
				
				case 0x00000005:
					return 0x00000065;
				
				case 0x00000006:
					return 0x00000066;
				
				case 0x00000007:
					return 0x00000067;
				
				case 0x00000008:
					return 0x00000068;
				
				default:
			}
			return 0x00000061;
		
		case 0x0000019E:
			switch (iParam1)
			{
				case 0x00000001:
					return 0x00000069;
				
				case 0x00000002:
					return 0x0000006A;
				
				case 0x00000003:
					return 0x0000006B;
				
				case 0x00000004:
					return 0x0000006C;
				
				case 0x00000005:
					return 0x0000006D;
				
				case 0x00000006:
					return 0x0000006E;
				
				case 0x00000007:
					return 0x0000006F;
				
				case 0x00000008:
					return 0x00000070;
				
				case 0x00000009:
					return 0x00000071;
				
				case 0x0000000A:
					return 0x00000072;
				
				default:
			}
			return 0x00000069;
		
		case 0x000001C2:
			return 0x00000073;
		
		case 0x000001C3:
			return 0x00000074;
		
		case 0x000001C4:
			return 0x00000075;
		
		case 0x000001C5:
			return 0x00000076;
		
		case 0x000001C6:
			return 0x00000077;
		
		case 0x000001C7:
			return 0x00000078;
		
		case 0x000001C8:
			return 0x00000079;
		
		case 0x000001C9:
			return 0x0000007A;
		
		case 0x000001E0:
			return 0x0000007B;
		
		case 0x000001E2:
			return 0x0000007C;
		
		case 0x000001E3:
			return 0x0000007D;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = func_132(iParam0, 0xFFFFFFFF);
	if (iParam0 == 0x000000A4)
	{
		if (iParam2 == 0x00000002)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (iParam0 == 0x00000114)
	{
		if (iParam2 == 0x00000002)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (iParam0 == 0x0000005F)
	{
		if (unk_0xC2F420D189FDB329())
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	else if ((iParam0 == 0x00000060 || iParam0 == 0x00000061) || iParam0 == 0x00000062)
	{
		if (func_43() && func_205())
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((((iParam0 == 0x000000CE && unk_0x8CD06866876216F2()) || (iParam0 == 0x000000CF && unk_0x8CD06866876216F2())) || (iParam0 == 0x000000D0 && unk_0x8CD06866876216F2())) || (iParam0 == 0x000000D1 && unk_0x8CD06866876216F2()))
	{
		if (func_43())
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((((iParam0 == 0x000000AA || iParam0 == 0x00000078) || iParam0 == 0x00000077) || iParam0 == 0x00000075) || iParam0 == 0x000000A6)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x000000DD || iParam0 == 0x00000087)
	{
		if (iParam1 == 0x0000001A)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (func_208(iParam0))
	{
		if (Global_1266F)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	iVar1 = func_204(iVar0);
	if (iVar1 != 0xFFFFFFFF)
	{
		if (func_202(func_203(iVar0)))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (func_201(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 0x000000CD && Global_40001.f_4D27) || (iParam0 != 0x000000CD && Global_40001.f_4D26))
			{
				return 0x00000001;
			}
			return 0x00000000;
		}
		return 0x00000000;
	}
	if (func_200(iParam0))
	{
		if (func_191(iParam0))
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	iVar2 = func_190(iVar0);
	if (iVar2 != 0xFFFFFFFF)
	{
		if (func_188(func_189(iVar0)))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	iVar3 = func_187(iVar0);
	if (iVar3 > 0x00000000)
	{
		if (func_185(iVar0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	iVar4 = func_184(iVar0);
	if (iVar4 != 0xFFFFFFFF)
	{
		if (func_182(iVar0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	iVar5 = func_181(iVar0);
	if (iVar5 != 0xFFFFFFFF)
	{
		if (func_176(iVar0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	iVar6 = func_175(iVar0);
	if (iVar6 != 0xFFFFFFFF)
	{
		if (func_168(iVar0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iVar0 == 0x73920F8E || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_165(iVar0))
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	iVar7 = func_164(iVar0);
	if (iVar7 != 0xFFFFFFFF)
	{
		if (func_165(iVar0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0x73920F8E:
			return 0x00000000;
			break;
		
		case joaat("burrito2"):
			return 0x00000001;
			break;
		
		case joaat("boxville"):
			return 0x00000002;
			break;
		
		case joaat("stockade"):
			return 0x00000003;
			break;
		
		case 0x42ACA95F:
			return 0x00000004;
			break;
		
		case 0x18619B7E:
			return 0x00000005;
			break;
		
		case 0x97553C28:
			return 0x00000006;
			break;
		
		case 0x79178F0A:
			return 0x00000007;
			break;
		
		case 0x64F49967:
			return 0x00000008;
			break;
		
		case 0x3ADB9758:
			return 0x00000009;
			break;
		
		case 0x3404691C:
			return 0x0000000A;
			break;
		
		case 0x185E2FF3:
			return 0x0000000B;
			break;
		
		case 0x2C1FEA99:
			return 0x0000000C;
			break;
		
		case 0xCE44C4B9:
			return 0x0000000D;
			break;
		
		case 0x11F58A5A:
			return 0x0000000E;
			break;
		
		case 0x3944D5A0:
			return 0x0000000F;
			break;
		
		case 0x4C8DBA51:
			return 0x00000010;
			break;
		
		case 0xF38C4245:
			return 0x00000011;
			break;
		
		case 0x41D149AA:
			return 0x00000012;
			break;
		
		case 0x2B0C4DCD:
			return 0x00000013;
			break;
		
		case 0xB472D2B5:
			return 0x00000014;
			break;
		
		case joaat("defiler"):
			return 0x00000015;
			break;
		
		case joaat("manchez"):
			return 0x00000016;
			break;
	}
	return 0xFFFFFFFF;
}

int func_165(int iParam0)
{
	int iVar0;
	
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	iVar0 = func_166(0x00002281, 0xFFFFFFFF, 0x00000000);
	switch (iParam0)
	{
		case 0x73920F8E:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000) || Global_40001.f_6C94)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case joaat("burrito2"):
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001) || Global_40001.f_6C95)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case joaat("boxville"):
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002) || Global_40001.f_6C96)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case joaat("stockade"):
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003) || Global_40001.f_6C97)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x42ACA95F:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004) || Global_40001.f_6C98)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x18619B7E:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005) || Global_40001.f_6C99)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x97553C28:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006) || Global_40001.f_6C9A)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x79178F0A:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007) || Global_40001.f_6C9B)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x64F49967:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008) || Global_40001.f_6C9C)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x3ADB9758:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009) || Global_40001.f_6C9D)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x3404691C:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A) || Global_40001.f_6C9E)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x185E2FF3:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B) || Global_40001.f_6C9F)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x2C1FEA99:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000C) || Global_40001.f_6CA0)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0xCE44C4B9:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000D) || Global_40001.f_6CA1)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x11F58A5A:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000E) || Global_40001.f_6CA2)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x3944D5A0:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000F) || Global_40001.f_6CA3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x4C8DBA51:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000010) || Global_40001.f_6CA4)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0xF38C4245:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000011) || Global_40001.f_6CA5)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x41D149AA:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000012) || Global_40001.f_6CA6)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x2B0C4DCD:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000013) || Global_40001.f_6CA7)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0xB472D2B5:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000014) || Global_40001.f_6CA8)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case joaat("defiler"):
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000015) || Global_40001.f_6CA9)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case joaat("manchez"):
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000016) || Global_40001.f_6CAA)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000000;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_167(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_167(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_95();
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

int func_168(int iParam0)
{
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0x00000000;
	}
	if (func_175(iParam0) != 0xFFFFFFFF)
	{
		if (func_169(func_174(iParam0)))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_169(int iParam0)
{
	return func_170(func_173(iParam0), 0xFFFFFFFF, 0xFFFFFFFF);
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_95();
	}
	iVar1 = func_172(iParam0, iParam1);
	uVar2 = func_171(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_95();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000008:
			return 0x00006183;
			break;
		
		case 0x00000009:
			return 0x00006184;
			break;
		
		case 0x0000000A:
			return 0x00006186;
			break;
		
		case 0x0000000B:
			return 0x00006185;
			break;
		
		case 0x0000000C:
			return 0x00006188;
			break;
		
		case 0x0000000D:
			return 0x0000620D;
			break;
		
		case 0x0000000E:
			return 0x00006187;
			break;
		
		case 0x0000000F:
			return 0x00006211;
			break;
		
		case 0x00000010:
			return 0x00006212;
			break;
		
		case 0x00000014:
			return 0x0000620E;
			break;
		
		case 0x00000015:
			return 0x0000620F;
			break;
		
		case 0x00000016:
			return 0x00006210;
			break;
		
		case 0x00000066:
			return 0x00006189;
			break;
		
		case 0x00000011:
			return 0x00006213;
			break;
		
		case 0x00000012:
			return 0x00006214;
			break;
		
		case 0x00000013:
			return 0x00006215;
			break;
		
		case 0x00000067:
			return 0x0000618C;
			break;
		
		case 0x00000068:
			return 0x0000618D;
			break;
		
		case 0x00000069:
			return 0x0000618E;
			break;
		
		case 0x0000006A:
			return 0x0000618F;
			break;
		
		case 0x0000006B:
			return 0x00006190;
			break;
		
		case 0x0000006C:
			return 0x00006192;
			break;
		
		case 0x0000006D:
			return 0x00006194;
			break;
		
		case 0x0000006E:
			return 0x00006195;
			break;
		
		case 0x0000006F:
			return 0x00006196;
			break;
		
		case 0x00000070:
			return 0x00006197;
			break;
		
		case 0x00000071:
			return 0x00006198;
			break;
		
		case 0x00000072:
			return 0x00006199;
			break;
		
		case 0x00000073:
			return 0x0000619A;
			break;
		
		case 0x00000074:
			return 0x0000619B;
			break;
		
		case 0x00000075:
			return 0x0000619C;
			break;
		
		case 0x00000076:
			return 0x0000619D;
			break;
		
		case 0x00000077:
			return 0x0000619E;
			break;
		
		case 0x00000078:
			return 0x0000619F;
			break;
		
		case 0x00000000:
			return 0x000061A0;
			break;
		
		case 0x00000001:
			return 0x000061A1;
			break;
		
		case 0x00000002:
			return 0x000061A2;
			break;
		
		case 0x00000003:
			return 0x000061A3;
			break;
		
		case 0x00000004:
			return 0x000061A4;
			break;
		
		case 0x00000005:
			return 0x000061A5;
			break;
		
		case 0x00000006:
			return 0x000061A6;
			break;
		
		case 0x00000007:
			return 0x000061A7;
			break;
		
		case 0x0000007F:
			return 0x0000621D;
			break;
		
		case 0x00000080:
			return 0x0000621E;
			break;
		
		case 0x00000017:
			return 0x0000621F;
			break;
		
		case 0x0000008B:
			return 0x00006225;
			break;
		
		case 0x0000008C:
			return 0x00006227;
			break;
		
		case 0x0000008D:
			return 0x00006228;
			break;
		
		case 0x0000001B:
			return 0x00006229;
			break;
		
		case 0x000000A0:
			return 0x00006230;
			break;
		
		case 0x000000A1:
			return 0x00006233;
			break;
		
		case 0x000000A2:
			return 0x00006234;
			break;
		
		case 0x0000001F:
			return 0x00006235;
			break;
		
		case 0x000000B5:
			return 0x0000623C;
			break;
		
		case 0x000000B6:
			return 0x0000623F;
			break;
		
		case 0x000000B7:
			return 0x00006240;
			break;
		
		case 0x00000023:
			return 0x00006241;
			break;
		
		case 0x000000C1:
			return 0x00006248;
			break;
		
		case 0x000000C2:
			return 0x00006249;
			break;
		
		case 0x00000027:
			return 0x0000624A;
			break;
		
		case 0x000000CE:
			return 0x00006250;
			break;
		
		case 0x000000CF:
			return 0x00006251;
			break;
		
		case 0x000000D0:
			return 0x00006252;
			break;
		
		case 0x000000D1:
			return 0x00006255;
			break;
		
		case 0x000000D2:
			return 0x00006256;
			break;
		
		case 0x0000002B:
			return 0x00006257;
			break;
		
		case 0x000000EA:
			return 0x0000625B;
			break;
		
		case 0x000000EB:
			return 0x0000625F;
			break;
		
		case 0x000000EC:
			return 0x00006260;
			break;
		
		case 0x0000002F:
			return 0x00006261;
			break;
		
		case 0x000000F8:
			return 0x00006264;
			break;
		
		case 0x000000F9:
			return 0x00006267;
			break;
		
		case 0x000000FA:
			return 0x00006268;
			break;
		
		case 0x00000033:
			return 0x00006269;
			break;
		
		case 0x00000103:
			return 0x0000626E;
			break;
		
		case 0x00000104:
			return 0x00006272;
			break;
		
		case 0x00000105:
			return 0x00006273;
			break;
		
		case 0x00000037:
			return 0x00006274;
			break;
		
		case 0x00000112:
			return 0x00006279;
			break;
		
		case 0x00000113:
			return 0x0000627C;
			break;
		
		case 0x00000114:
			return 0x0000627D;
			break;
		
		case 0x0000003B:
			return 0x0000627E;
			break;
		
		case 0x0000011C:
			return 0x00006281;
			break;
		
		case 0x0000011D:
			return 0x00006285;
			break;
		
		case 0x0000011E:
			return 0x00006286;
			break;
		
		case 0x0000003F:
			return 0x00006287;
			break;
		
		case 0x00000133:
			return 0x0000628C;
			break;
		
		case 0x00000134:
			return 0x00006193;
			break;
		
		case 0x00000135:
			return 0x0000628D;
			break;
		
		case 0x00000136:
			return 0x00006217;
			break;
		
		case 0x00000043:
			return 0x0000628E;
			break;
		
		case 0x00000044:
			return 0x00006218;
			break;
		
		case 0x00000048:
			return 0x0000628F;
			break;
		
		case 0x00000049:
			return 0x00006291;
			break;
		
		case 0x0000004A:
			return 0x00006292;
			break;
		
		case 0x0000004B:
			return 0x00006293;
			break;
		
		case 0x0000004C:
			return 0x00006294;
			break;
		
		case 0x0000004D:
			return 0x00006332;
			break;
		
		case 0x00000079:
			return 0x00006333;
			break;
		
		case 0x0000007A:
			return 0x00006334;
			break;
		
		case 0x0000007B:
			return 0x00006335;
			break;
		
		case 0x0000007C:
			return 0x00006336;
			break;
		
		case 0x0000007D:
			return 0x00006337;
			break;
		
		case 0x0000007E:
			return 0x00006338;
			break;
	}
	switch (iParam0)
	{
		case 0x0000004E:
			return 0x0000629C;
			break;
		
		case 0x0000004F:
			return 0x0000629D;
			break;
		
		case 0x00000050:
			return 0x0000629E;
			break;
		
		case 0x00000051:
			return 0x0000629F;
			break;
		
		case 0x00000052:
			return 0x000062A0;
			break;
		
		case 0x00000053:
			return 0x000062A1;
			break;
		
		case 0x00000054:
			return 0x000062A2;
			break;
		
		case 0x00000055:
			return 0x000061A8;
			break;
		
		case 0x00000056:
			return 0x000062A3;
			break;
		
		case 0x00000057:
			return 0x000062A4;
			break;
		
		case 0x00000058:
			return 0x000062A5;
			break;
		
		case 0x00000059:
			return 0x000062A6;
			break;
		
		case 0x0000005A:
			return 0x000062A7;
			break;
		
		case 0x0000005B:
			return 0x000062A8;
			break;
		
		case 0x0000005C:
			return 0x000062A9;
			break;
		
		case 0x0000005D:
			return 0x000062AA;
			break;
		
		case 0x0000005E:
			return 0x000062AB;
			break;
		
		case 0x0000005F:
			return 0x000062AC;
			break;
		
		case 0x00000060:
			return 0x000062AD;
			break;
		
		case 0x00000061:
			return 0x000062AE;
			break;
		
		case 0x00000062:
			return 0x000062AF;
			break;
		
		case 0x00000063:
			return 0x000062B0;
			break;
		
		case 0x00000064:
			return 0x00006289;
			break;
		
		case 0x00000065:
			return 0x0000625A;
			break;
		
		case 0x00000137:
			return 0x000062B1;
			break;
		
		case 0x00000138:
			return 0x000062B2;
			break;
		
		case 0x00000139:
			return 0x000062B3;
			break;
		
		case 0x0000013A:
			return 0x000062B4;
			break;
		
		case 0x0000013B:
			return 0x00006191;
			break;
		
		case 0x0000013C:
			return 0x000062B5;
			break;
		
		case 0x0000013D:
			return 0x000062B6;
			break;
		
		case 0x0000013E:
			return 0x000062B7;
			break;
		
		case 0x0000013F:
			return 0x000062B8;
			break;
		
		case 0x00000140:
			return 0x000062B9;
			break;
		
		case 0x00000141:
			return 0x000062BA;
			break;
		
		case 0x00000142:
			return 0x000062BB;
			break;
		
		case 0x00000143:
			return 0x000062BC;
			break;
		
		case 0x00000144:
			return 0x000062BD;
			break;
		
		case 0x00000145:
			return 0x000062BE;
			break;
		
		case 0x00000146:
			return 0x000062BF;
			break;
		
		case 0x00000147:
			return 0x000062C0;
			break;
		
		case 0x00000148:
			return 0x000062C1;
			break;
		
		case 0x00000149:
			return 0x000062C2;
			break;
		
		case 0x0000014A:
			return 0x000062C3;
			break;
		
		case 0x0000014B:
			return 0x000062C4;
			break;
		
		case 0x0000014C:
			return 0x000062C5;
			break;
		
		case 0x0000014D:
			return 0x000062C6;
			break;
		
		case 0x0000014E:
			return 0x000062C7;
			break;
		
		case 0x0000014F:
			return 0x000062C8;
			break;
		
		case 0x00000150:
			return 0x000062C9;
			break;
		
		case 0x00000151:
			return 0x000062CA;
			break;
		
		case 0x00000152:
			return 0x000062CB;
			break;
		
		case 0x00000153:
			return 0x000062CC;
			break;
		
		case 0x00000154:
			return 0x000062CD;
			break;
		
		case 0x00000155:
			return 0x000062CE;
			break;
		
		case 0x00000156:
			return 0x000062CF;
			break;
		
		case 0x00000157:
			return 0x000062D0;
			break;
		
		case 0x00000158:
			return 0x000062D1;
			break;
		
		case 0x00000159:
			return 0x000062D2;
			break;
		
		case 0x0000015A:
			return 0x000062D3;
			break;
		
		case 0x0000015B:
			return 0x000062D4;
			break;
		
		case 0x0000015C:
			return 0x000062D5;
			break;
		
		case 0x0000015D:
			return 0x000062D6;
			break;
		
		case 0x0000015E:
			return 0x000062D7;
			break;
		
		case 0x0000015F:
			return 0x000062D8;
			break;
		
		case 0x00000160:
			return 0x000062D9;
			break;
		
		case 0x00000161:
			return 0x000062DA;
			break;
		
		case 0x00000162:
			return 0x000062DB;
			break;
		
		case 0x00000163:
			return 0x000062DC;
			break;
		
		case 0x00000164:
			return 0x000062DD;
			break;
		
		case 0x00000165:
			return 0x000062DE;
			break;
		
		case 0x00000166:
			return 0x000062DF;
			break;
		
		case 0x00000167:
			return 0x000062E0;
			break;
		
		case 0x00000168:
			return 0x000062E1;
			break;
		
		case 0x00000169:
			return 0x000062E2;
			break;
		
		case 0x0000016A:
			return 0x000062E3;
			break;
		
		case 0x0000016B:
			return 0x000062E4;
			break;
		
		case 0x0000016C:
			return 0x000062E5;
			break;
		
		case 0x0000016D:
			return 0x000062E6;
			break;
		
		case 0x0000016E:
			return 0x000062E7;
			break;
		
		case 0x0000016F:
			return 0x000062E8;
			break;
		
		case 0x00000170:
			return 0x000062E9;
			break;
		
		case 0x00000171:
			return 0x000062EA;
			break;
		
		case 0x00000172:
			return 0x000062EB;
			break;
		
		case 0x00000173:
			return 0x000062EC;
			break;
		
		case 0x00000174:
			return 0x000062ED;
			break;
		
		case 0x00000175:
			return 0x000062EE;
			break;
		
		case 0x00000176:
			return 0x000062EF;
			break;
		
		case 0x00000177:
			return 0x000062F0;
			break;
		
		case 0x00000178:
			return 0x000062F1;
			break;
		
		case 0x00000179:
			return 0x000062F2;
			break;
		
		case 0x0000017A:
			return 0x000062F3;
			break;
		
		case 0x0000017B:
			return 0x000062F4;
			break;
		
		case 0x0000017C:
			return 0x000062F5;
			break;
		
		case 0x0000017D:
			return 0x000062F6;
			break;
		
		case 0x0000017E:
			return 0x000062F7;
			break;
		
		case 0x0000017F:
			return 0x000062F8;
			break;
		
		case 0x00000180:
			return 0x000062F9;
			break;
		
		case 0x00000181:
			return 0x000062FA;
			break;
		
		case 0x00000182:
			return 0x000062FB;
			break;
		
		case 0x00000183:
			return 0x000062FC;
			break;
		
		case 0x00000184:
			return 0x000062FD;
			break;
		
		case 0x00000185:
			return 0x000062FE;
			break;
		
		case 0x00000186:
			return 0x000062FF;
			break;
		
		case 0x00000187:
			return 0x00006300;
			break;
		
		case 0x00000188:
			return 0x00006301;
			break;
		
		case 0x00000189:
			return 0x00006302;
			break;
		
		case 0x0000018A:
			return 0x00006303;
			break;
		
		case 0x0000018B:
			return 0x0000618A;
			break;
		
		case 0x0000018C:
			return 0x00006304;
			break;
		
		case 0x0000018D:
			return 0x00006305;
			break;
		
		case 0x0000018E:
			return 0x00006306;
			break;
		
		case 0x0000018F:
			return 0x00006307;
			break;
		
		case 0x00000190:
			return 0x00006308;
			break;
		
		case 0x00000191:
			return 0x00006309;
			break;
		
		case 0x00000192:
			return 0x0000630A;
			break;
		
		case 0x00000193:
			return 0x0000630B;
			break;
		
		case 0x00000194:
			return 0x0000630C;
			break;
		
		case 0x00000195:
			return 0x0000630D;
			break;
		
		case 0x00000196:
			return 0x0000630E;
			break;
		
		case 0x00000197:
			return 0x0000630F;
			break;
		
		case 0x00000198:
			return 0x00006310;
			break;
		
		case 0x00000199:
			return 0x00006311;
			break;
		
		case 0x0000019A:
			return 0x00006312;
			break;
		
		case 0x0000019B:
			return 0x00006313;
			break;
		
		case 0x0000019C:
			return 0x00006314;
			break;
		
		case 0x0000019D:
			return 0x00006315;
			break;
		
		case 0x0000019E:
			return 0x00006316;
			break;
		
		case 0x0000019F:
			return 0x00006317;
			break;
		
		case 0x000001A0:
			return 0x00006318;
			break;
		
		case 0x000001A1:
			return 0x00006319;
			break;
		
		case 0x000001A2:
			return 0x0000631A;
			break;
		
		case 0x000001A3:
			return 0x0000631B;
			break;
		
		case 0x000001A4:
			return 0x0000631D;
			break;
		
		case 0x000001A5:
			return 0x0000631E;
			break;
		
		case 0x000001A6:
			return 0x0000631F;
			break;
		
		case 0x000001A7:
			return 0x00006321;
			break;
		
		case 0x000001A8:
			return 0x00006322;
			break;
		
		case 0x000001A9:
			return 0x00006323;
			break;
		
		case 0x000001AA:
			return 0x00006326;
			break;
		
		case 0x000001AB:
			return 0x00006327;
			break;
		
		case 0x000001AC:
			return 0x0000632A;
			break;
		
		case 0x000001AD:
			return 0x0000632E;
			break;
		
		case 0x000001AE:
			return 0x0000632F;
			break;
		
		case 0x000001AF:
			return 0x00006330;
			break;
		
		case 0x000001B0:
			return 0x00006331;
			break;
	}
	switch (iParam0)
	{
		case 0x00000018:
			return 0x0000618B;
			break;
		
		case 0x00000019:
			return 0x00006219;
			break;
		
		case 0x0000001A:
			return 0x0000621A;
			break;
		
		case 0x0000001C:
			return 0x0000621B;
			break;
		
		case 0x0000001D:
			return 0x0000621C;
			break;
		
		case 0x0000001E:
			return 0x00006220;
			break;
		
		case 0x00000020:
			return 0x00006221;
			break;
		
		case 0x00000021:
			return 0x00006222;
			break;
		
		case 0x00000022:
			return 0x00006223;
			break;
		
		case 0x00000024:
			return 0x00006224;
			break;
		
		case 0x00000025:
			return 0x00006226;
			break;
		
		case 0x00000026:
			return 0x0000622A;
			break;
		
		case 0x00000028:
			return 0x0000622B;
			break;
		
		case 0x00000029:
			return 0x0000622C;
			break;
		
		case 0x0000002A:
			return 0x0000622D;
			break;
		
		case 0x0000002C:
			return 0x0000622E;
			break;
		
		case 0x0000002D:
			return 0x00006231;
			break;
		
		case 0x0000002E:
			return 0x00006232;
			break;
		
		case 0x00000030:
			return 0x00006236;
			break;
		
		case 0x00000031:
			return 0x00006237;
			break;
		
		case 0x00000032:
			return 0x00006238;
			break;
		
		case 0x00000034:
			return 0x00006239;
			break;
		
		case 0x00000035:
			return 0x0000623A;
			break;
		
		case 0x00000036:
			return 0x0000623B;
			break;
		
		case 0x00000038:
			return 0x0000623D;
			break;
		
		case 0x00000039:
			return 0x0000623E;
			break;
		
		case 0x0000003A:
			return 0x00006242;
			break;
		
		case 0x0000003C:
			return 0x00006243;
			break;
		
		case 0x0000003D:
			return 0x00006244;
			break;
		
		case 0x0000003E:
			return 0x00006245;
			break;
		
		case 0x00000040:
			return 0x00006246;
			break;
		
		case 0x00000041:
			return 0x00006247;
			break;
		
		case 0x00000042:
			return 0x0000624B;
			break;
		
		case 0x00000045:
			return 0x0000624C;
			break;
		
		case 0x00000046:
			return 0x0000624D;
			break;
		
		case 0x00000047:
			return 0x0000624E;
			break;
		
		case 0x00000081:
			return 0x0000624F;
			break;
		
		case 0x00000082:
			return 0x00006253;
			break;
		
		case 0x00000083:
			return 0x00006254;
			break;
		
		case 0x00000084:
			return 0x00006258;
			break;
		
		case 0x00000085:
			return 0x00006259;
			break;
		
		case 0x00000086:
			return 0x0000625D;
			break;
		
		case 0x00000087:
			return 0x0000625E;
			break;
		
		case 0x00000088:
			return 0x00006262;
			break;
		
		case 0x00000089:
			return 0x00006263;
			break;
		
		case 0x0000008A:
			return 0x00006265;
			break;
		
		case 0x0000008E:
			return 0x00006266;
			break;
		
		case 0x0000008F:
			return 0x0000626A;
			break;
		
		case 0x00000090:
			return 0x0000626B;
			break;
		
		case 0x00000091:
			return 0x0000626C;
			break;
		
		case 0x00000092:
			return 0x0000626D;
			break;
		
		case 0x00000093:
			return 0x0000626F;
			break;
		
		case 0x00000094:
			return 0x00006270;
			break;
		
		case 0x00000095:
			return 0x00006271;
			break;
		
		case 0x00000096:
			return 0x00006275;
			break;
		
		case 0x00000097:
			return 0x00006276;
			break;
		
		case 0x00000098:
			return 0x00006277;
			break;
		
		case 0x00000099:
			return 0x00006278;
			break;
		
		case 0x0000009A:
			return 0x0000627A;
			break;
		
		case 0x0000009B:
			return 0x0000627B;
			break;
		
		case 0x0000009C:
			return 0x0000627F;
			break;
		
		case 0x0000009D:
			return 0x00006280;
			break;
		
		case 0x0000009E:
			return 0x00006282;
			break;
		
		case 0x0000009F:
			return 0x00006283;
			break;
		
		case 0x000000A3:
			return 0x00006284;
			break;
		
		case 0x000000A4:
			return 0x00006288;
			break;
		
		case 0x000000A5:
			return 0x0000628A;
			break;
		
		case 0x000000A6:
			return 0x0000628B;
			break;
		
		case 0x000000A7:
			return 0x00006290;
			break;
		
		case 0x000000A8:
			return 0x0000631C;
			break;
		
		case 0x000000A9:
			return 0x00006320;
			break;
		
		case 0x000000AA:
			return 0x00006324;
			break;
		
		case 0x000000AB:
			return 0x00006325;
			break;
		
		case 0x000000AC:
			return 0x00006328;
			break;
		
		case 0x000000AD:
			return 0x00006329;
			break;
		
		case 0x000000AE:
			return 0x0000632B;
			break;
		
		case 0x000000AF:
			return 0x0000632C;
			break;
		
		case 0x000000B0:
			return 0x0000632D;
			break;
		
		case 0x000000B1:
			return 0x0000633F;
			break;
		
		case 0x000000B2:
			return 0x00006340;
			break;
		
		case 0x000000B3:
			return 0x00006341;
			break;
		
		case 0x000000B4:
			return 0x00006342;
			break;
		
		case 0x000000B8:
			return 0x00006343;
			break;
		
		case 0x000000B9:
			return 0x00006344;
			break;
		
		case 0x000000BA:
			return 0x00006345;
			break;
		
		case 0x000000BB:
			return 0x00006346;
			break;
		
		case 0x000000BC:
			return 0x00006347;
			break;
		
		case 0x000000BD:
			return 0x00006348;
			break;
		
		case 0x000000BE:
			return 0x00006349;
			break;
		
		case 0x000000BF:
			return 0x0000634A;
			break;
		
		case 0x000000C0:
			return 0x0000634B;
			break;
		
		case 0x000000C3:
			return 0x0000634C;
			break;
		
		case 0x000000C4:
			return 0x0000634D;
			break;
		
		case 0x000000C5:
			return 0x0000634E;
			break;
		
		case 0x000000C6:
			return 0x0000634F;
			break;
		
		case 0x000000C7:
			return 0x00006350;
			break;
		
		case 0x000000C8:
			return 0x00006351;
			break;
		
		case 0x000000C9:
			return 0x00006352;
			break;
		
		case 0x000000CA:
			return 0x00006353;
			break;
		
		case 0x000000CB:
			return 0x00006354;
			break;
		
		case 0x000000CC:
			return 0x00006355;
			break;
		
		case 0x000000CD:
			return 0x00006356;
			break;
		
		case 0x000000D3:
			return 0x00006357;
			break;
		
		case 0x000000D4:
			return 0x00006358;
			break;
		
		case 0x000000D5:
			return 0x00006359;
			break;
		
		case 0x000000D6:
			return 0x0000635A;
			break;
		
		case 0x000000D7:
			return 0x0000635B;
			break;
		
		case 0x000000D8:
			return 0x0000635C;
			break;
		
		case 0x000000D9:
			return 0x0000635D;
			break;
		
		case 0x000000DA:
			return 0x0000635E;
			break;
		
		case 0x000000DB:
			return 0x0000635F;
			break;
		
		case 0x000000DC:
			return 0x00006360;
			break;
		
		case 0x000000DD:
			return 0x00006361;
			break;
		
		case 0x000000DE:
			return 0x00006362;
			break;
		
		case 0x000000DF:
			return 0x00006363;
			break;
		
		case 0x000000E0:
			return 0x00006364;
			break;
		
		case 0x000000E1:
			return 0x00006365;
			break;
		
		case 0x000000E2:
			return 0x00006366;
			break;
		
		case 0x000000E3:
			return 0x00006367;
			break;
		
		case 0x000000E4:
			return 0x00006368;
			break;
		
		case 0x000000E5:
			return 0x00006369;
			break;
		
		case 0x000000E6:
			return 0x0000636A;
			break;
		
		case 0x000000E7:
			return 0x0000636B;
			break;
		
		case 0x000000E8:
			return 0x0000636C;
			break;
		
		case 0x000000E9:
			return 0x0000636D;
			break;
		
		case 0x000000ED:
			return 0x0000636E;
			break;
		
		case 0x000000EE:
			return 0x0000636F;
			break;
		
		case 0x000000EF:
			return 0x00006370;
			break;
		
		case 0x000000F0:
			return 0x00006371;
			break;
		
		case 0x000000F1:
			return 0x00006372;
			break;
		
		case 0x000000F2:
			return 0x00006373;
			break;
		
		case 0x000000F3:
			return 0x00006374;
			break;
		
		case 0x000000F4:
			return 0x00006375;
			break;
		
		case 0x000000F5:
			return 0x00006376;
			break;
		
		case 0x000000F6:
			return 0x00006377;
			break;
		
		case 0x000000F7:
			return 0x00006378;
			break;
		
		case 0x000000FB:
			return 0x00006379;
			break;
		
		case 0x000000FC:
			return 0x0000637A;
			break;
		
		case 0x000000FD:
			return 0x0000637B;
			break;
		
		case 0x000000FE:
			return 0x0000637C;
			break;
		
		case 0x000000FF:
			return 0x0000637D;
			break;
		
		case 0x00000100:
			return 0x0000637E;
			break;
		
		case 0x00000101:
			return 0x0000637F;
			break;
		
		case 0x00000102:
			return 0x00006380;
			break;
		
		case 0x00000106:
			return 0x00006381;
			break;
		
		case 0x00000107:
			return 0x00006382;
			break;
		
		case 0x00000108:
			return 0x00006383;
			break;
		
		case 0x00000109:
			return 0x00006384;
			break;
		
		case 0x0000010A:
			return 0x00006385;
			break;
		
		case 0x0000010B:
			return 0x00006386;
			break;
		
		case 0x0000010C:
			return 0x00006387;
			break;
		
		case 0x0000010D:
			return 0x00006388;
			break;
		
		case 0x0000010E:
			return 0x00006389;
			break;
		
		case 0x0000010F:
			return 0x0000638A;
			break;
		
		case 0x00000110:
			return 0x0000638B;
			break;
		
		case 0x00000111:
			return 0x0000638C;
			break;
		
		case 0x00000115:
			return 0x0000638D;
			break;
		
		case 0x00000116:
			return 0x0000638E;
			break;
		
		case 0x00000117:
			return 0x0000638F;
			break;
		
		case 0x00000118:
			return 0x00006390;
			break;
		
		case 0x00000119:
			return 0x00006391;
			break;
		
		case 0x0000011A:
			return 0x00006392;
			break;
		
		case 0x0000011B:
			return 0x00006393;
			break;
		
		case 0x0000011F:
			return 0x00006394;
			break;
		
		case 0x00000120:
			return 0x00006395;
			break;
		
		case 0x00000121:
			return 0x00006396;
			break;
		
		case 0x00000122:
			return 0x00006397;
			break;
		
		case 0x00000123:
			return 0x00006398;
			break;
		
		case 0x00000124:
			return 0x00006399;
			break;
		
		case 0x00000125:
			return 0x0000639A;
			break;
		
		case 0x00000126:
			return 0x0000639B;
			break;
		
		case 0x00000127:
			return 0x0000639C;
			break;
		
		case 0x00000128:
			return 0x0000639D;
			break;
		
		case 0x00000129:
			return 0x0000639E;
			break;
		
		case 0x0000012A:
			return 0x0000639F;
			break;
		
		case 0x0000012B:
			return 0x000063A0;
			break;
		
		case 0x0000012C:
			return 0x000063A1;
			break;
		
		case 0x0000012D:
			return 0x000063A2;
			break;
		
		case 0x0000012E:
			return 0x000063A3;
			break;
		
		case 0x0000012F:
			return 0x000063A4;
			break;
		
		case 0x00000130:
			return 0x000063A5;
			break;
		
		case 0x00000131:
			return 0x000063A6;
			break;
		
		case 0x00000132:
			return 0x000063A7;
			break;
	}
	return 0x00000000;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0xD039510B:
			return 0x00000008;
			break;
		
		case 0x287FA449:
			return 0x00000009;
			break;
		
		case 0x71D3B6F0:
			return 0x0000000A;
			break;
		
		case 0x7F81A829:
			return 0x0000000B;
			break;
		
		case 0x8F49AE28:
			return 0x0000000C;
			break;
		
		case 0x798682A2:
			return 0x0000000D;
			break;
		
		case 0x20314B42:
			return 0x0000000E;
			break;
		
		case 0xBE11EFC6:
			return 0x0000000F;
			break;
		
		case 0xA7DCC35C:
			return 0x00000010;
			break;
		
		case 0xBBA2A2F7:
			return 0x00000014;
			break;
		
		case 0x5BEB3CE0:
			return 0x00000015;
			break;
		
		case 0xDD71BFEB:
			return 0x00000016;
			break;
		
		case 0x1A861243:
			return 0x00000011;
			break;
		
		case 0x619C1B82:
			return 0x00000012;
			break;
		
		case 0xD2F77E37:
			return 0x00000013;
			break;
		
		case 0x83070B62:
			return 0x00000066;
			break;
		
		case joaat("ratloader2"):
			return 0x00000067;
			break;
		
		case joaat("glendale"):
			return 0x00000068;
			break;
		
		case joaat("slamvan"):
			return 0x00000069;
			break;
		
		case joaat("dominator"):
			return 0x0000006A;
			break;
		
		case 0x378236E1:
			return 0x0000006B;
			break;
		
		case joaat("gargoyle"):
			return 0x0000006C;
			break;
	}
	return 0xFFFFFFFF;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0xD039510B:
			return 0x00000000;
		
		case 0x287FA449:
			return 0x00000001;
		
		case 0x71D3B6F0:
			return 0x00000002;
		
		case 0x7F81A829:
			return 0x00000003;
		
		case 0x8F49AE28:
			return 0x00000004;
		
		case 0x798682A2:
			return 0x00000005;
		
		case 0xBBA2A2F7:
			return 0x00000006;
		
		case 0x5BEB3CE0:
			return 0x00000007;
		
		case 0xDD71BFEB:
			return 0x00000008;
		
		case 0x1A861243:
			return 0x00000009;
		
		case 0x619C1B82:
			return 0x0000000A;
		
		case 0xD2F77E37:
			return 0x0000000B;
		
		case 0x20314B42:
			return 0x0000000C;
		
		case 0xBE11EFC6:
			return 0x0000000D;
		
		case 0xA7DCC35C:
			return 0x0000000E;
		
		case joaat("ratloader2"):
			return 0x0000000F;
		
		case joaat("glendale"):
			return 0x00000010;
		
		case joaat("slamvan"):
			return 0x00000011;
		
		case joaat("dominator"):
			return 0x00000012;
		
		case 0x83070B62:
			return 0x00000013;
		
		case 0x378236E1:
			return 0x00000014;
		
		case joaat("gargoyle"):
			return 0x00000015;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0x73F4110E:
			if (func_166(0x00001C3E, 0xFFFFFFFF, 0x00000000) >= func_180(iParam0) || Global_40001.f_5E61)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x6290F15B:
			if (func_166(0x00001C3E, 0xFFFFFFFF, 0x00000000) >= func_180(iParam0) || Global_40001.f_5E62)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x7B54A9D3:
			if (func_177(0x00005622, 0xFFFFFFFF, 0xFFFFFFFF) >= func_180(iParam0) || Global_40001.f_5E63)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x149BD32A:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_119.f_7, 0x00000001) || Global_40001.f_5E65)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0xE6E967F8:
			if (func_166(0x00001C3C, 0xFFFFFFFF, 0x00000000) >= func_180(iParam0) || Global_40001.f_5E66)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0xEDA4ED97:
			if (func_166(0x00001C3C, 0xFFFFFFFF, 0x00000000) >= func_180(iParam0) || Global_40001.f_5E67)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0xD9F0503D:
			if (func_170(0x0000566B, 0xFFFFFFFF, 0xFFFFFFFF) || Global_40001.f_5E64)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000000;
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_95();
	}
	iVar0 = 0x00000000;
	iVar1 = func_179(iParam0, iParam1);
	iVar2 = func_178(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = ((iParam0 - 0x00000180) - unk_0x6D63D77257071BC5((iParam0 - 0x00000180)) * 8) * 8;
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = ((iParam0 - 0x000001C9) - unk_0x6D63D77257071BC5((iParam0 - 0x000001C9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = ((iParam0 - 0x00000501) - unk_0x6D63D77257071BC5((iParam0 - 0x00000501)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = ((iParam0 - 0x00000519) - unk_0x6D63D77257071BC5((iParam0 - 0x00000519)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = ((iParam0 - 0x00000551) - unk_0x6D63D77257071BC5((iParam0 - 0x00000551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = ((iParam0 - 0x00000571) - unk_0x6D63D77257071BC5((iParam0 - 0x00000571)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = ((iParam0 - 0x0000102F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000102F)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = ((iParam0 - 0x00000F27) - unk_0x6D63D77257071BC5((iParam0 - 0x00000F27)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = ((iParam0 - 0x0000112F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000112F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = ((iParam0 - 0x0000190D) - unk_0x6D63D77257071BC5((iParam0 - 0x0000190D)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = ((iParam0 - 0x00001C5E) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C5E)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = ((iParam0 - 0x00001E01) - unk_0x6D63D77257071BC5((iParam0 - 0x00001E01)) * 8) * 8;
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = ((iParam0 - 0x00002551) - unk_0x6D63D77257071BC5((iParam0 - 0x00002551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = ((iParam0 - 0x00003BA1) - unk_0x6D63D77257071BC5((iParam0 - 0x00003BA1)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = ((iParam0 - 0x00001C91) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C91)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = ((iParam0 - 0x00001DD9) - unk_0x6D63D77257071BC5((iParam0 - 0x00001DD9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = ((iParam0 - 0x00003E8A) - unk_0x6D63D77257071BC5((iParam0 - 0x00003E8A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = ((iParam0 - 0x000046F2) - unk_0x6D63D77257071BC5((iParam0 - 0x000046F2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = ((iParam0 - 0x00004A4A) - unk_0x6D63D77257071BC5((iParam0 - 0x00004A4A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = ((iParam0 - 0x000056B2) - unk_0x6D63D77257071BC5((iParam0 - 0x000056B2)) * 8) * 8;
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = ((iParam0 - 0x000063C2) - unk_0x6D63D77257071BC5((iParam0 - 0x000063C2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = ((iParam0 - 0x00006A7A) - unk_0x6D63D77257071BC5((iParam0 - 0x00006A7A)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = ((iParam0 - 0x00006F43) - unk_0x6D63D77257071BC5((iParam0 - 0x00006F43)) * 8) * 8;
	}
	return iVar0;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_95();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000180), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x000001C9), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000501), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000519), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000551), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000571), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000102F), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00000F27), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000112F), 0x00000000, 0x00000001, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000190D), 0x00000000, 0x00000001, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C5E), 0x00000000, 0x00000001, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001E01), 0x00000000, 0x00000001, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00002551), 0x00000000, 0x00000001, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003BA1), 0x00000000, 0x00000001, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C91), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001DD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003E8A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000046F2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00004A4A), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000056B2), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000063C2), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006A7A), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006F43), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0x73F4110E:
			return Global_40001.f_5E68;
			break;
		
		case 0x6290F15B:
			return Global_40001.f_5E69;
			break;
		
		case 0x7B54A9D3:
			return Global_40001.f_5E6A;
			break;
		
		case 0xE6E967F8:
			return Global_40001.f_5E6B;
			break;
		
		case 0xEDA4ED97:
			return Global_40001.f_5E6C;
			break;
	}
	return 0x00000000;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0x73F4110E:
			return 0x00000000;
			break;
		
		case 0x6290F15B:
			return 0x00000001;
			break;
		
		case 0x7B54A9D3:
			return 0x00000002;
			break;
		
		case 0xD9F0503D:
			return 0x00000003;
			break;
		
		case 0x149BD32A:
			return 0x00000004;
			break;
		
		case 0xE6E967F8:
			return 0x00000005;
			break;
		
		case 0xEDA4ED97:
			return 0x00000006;
			break;
	}
	return 0xFFFFFFFF;
}

int func_182(int iParam0)
{
	int iVar0;
	
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	iVar0 = func_166(0x0000161D, 0xFFFFFFFF, 0x00000000);
	switch (iParam0)
	{
		case 0x586765FB:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x00000001));
		
		case 0x46699F47:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x00000002));
		
		case 0x9B16A3B4:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x00000006));
		
		case 0x34DBA661:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x00000007));
		
		case 0xD6BC7523:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x0000000A));
		
		case 0xF34DFB25:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x0000000B));
		
		case 0xAA6F980A:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x0000000C));
		
		case 0x1AAD0DED:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x0000000D));
		
		case 0x58CDAF30:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_183(0x0000000F));
		
		default:
	}
	return 0x00000000;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000001:
			return 0x00000001;
		
		case 0x00000002:
			return 0x00000002;
		
		case 0x00000003:
			return 0x00000003;
		
		case 0x00000004:
			return 0x00000004;
		
		case 0x00000005:
			return 0x00000005;
		
		case 0x00000006:
			return 0x00000006;
		
		case 0x00000007:
			return 0x00000007;
		
		case 0x00000008:
			return 0x00000008;
		
		case 0x00000009:
			return 0x00000009;
		
		case 0x0000000A:
			return 0x0000000A;
		
		case 0x0000000B:
			return 0x0000000B;
		
		case 0x0000000C:
			return 0x0000000C;
		
		case 0x0000000D:
			return 0x0000000D;
		
		case 0x0000000E:
			return 0x0000000E;
		
		case 0x0000000F:
			return 0x0000000F;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0x586765FB:
			return 0x00000000;
			break;
		
		case 0x46699F47:
			return 0x00000001;
			break;
		
		case 0x9B16A3B4:
			return 0x00000002;
			break;
		
		case 0x34DBA661:
			return 0x00000003;
			break;
		
		case 0xD6BC7523:
			return 0x00000004;
			break;
		
		case 0xF34DFB25:
			return 0x00000005;
			break;
		
		case 0xAA6F980A:
			return 0x00000006;
			break;
		
		case 0x1AAD0DED:
			return 0x00000007;
			break;
		
		case 0x58CDAF30:
			return 0x00000008;
			break;
	}
	return 0xFFFFFFFF;
}

int func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_186();
	if (iVar1 >= iVar0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_186()
{
	return func_166(0x000017E1, 0xFFFFFFFF, 0x00000000);
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0x96E24857:
			return Global_40001.f_56C2;
		
		case 0xC5DD6967:
			return Global_40001.f_56C3;
		
		case 0xA52F6866:
			return Global_40001.f_56C4;
		
		case 0x89BA59F5:
			return Global_40001.f_56C5;
		
		case 0x9A9EB7DE:
			return Global_40001.f_56C6;
		
		case 0x5D56F01B:
			return Global_40001.f_56C7;
		
		case 0x3E2E4F8A:
			return Global_40001.f_56C8;
		
		case 0xFE0A508C:
			return Global_40001.f_56C9;
		
		case 0xC3F25753:
			return Global_40001.f_56CA;
		
		case 0xD35698EF:
			return Global_40001.f_56CB;
		
		case 0xAD6065C0:
			return Global_40001.f_56CC;
		
		case 0xE8983F9F:
			return Global_40001.f_56CD;
		
		case 0x3DC92356:
			return Global_40001.f_56CE;
		
		case 0xFD707EDE:
			return Global_40001.f_56CF;
		
		default:
	}
	return 0x00000000;
}

bool func_188(int iParam0)
{
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(func_166(0x00001557, 0xFFFFFFFF, 0x00000000), iParam0);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0x711D4738:
			return 0x00000000;
		
		case 0xFE141DA6:
			return 0x00000001;
		
		case 0x8FD54EBB:
			return 0x00000002;
		
		case 0x2189D250:
			return 0x00000003;
		
		case 0xB7D9F7F1:
			return 0x00000005;
		
		case 0x34B82784:
			return 0x00000007;
		
		default:
	}
	return 0x00000003;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0x711D4738:
			return 0x00000000;
			break;
		
		case 0xFE141DA6:
			return 0x00000001;
			break;
		
		case 0x8FD54EBB:
			return 0x00000002;
			break;
		
		case 0x2189D250:
			return 0x00000003;
			break;
		
		case 0xB7D9F7F1:
			return 0x00000004;
			break;
		
		case 0x34B82784:
			return 0x00000005;
			break;
	}
	return 0xFFFFFFFF;
}

int func_191(int iParam0)
{
	int iVar0;
	
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x000000BB:
			iVar0 = 0x00000010;
			break;
		
		case 0x000000B1:
			iVar0 = 0x0000000C;
			break;
		
		case 0x000000B9:
			iVar0 = 0x0000000E;
			break;
		
		case 0x000000AE:
			iVar0 = 0x00000009;
			break;
		
		case 0x000000AB:
			iVar0 = 0x00000014;
			break;
		
		case 0x000000AC:
			iVar0 = 0x00000007;
			break;
		
		case 0x000000AD:
			iVar0 = 0x00000008;
			break;
		
		case 0x000000AF:
			iVar0 = 0x0000000A;
			break;
		
		case 0x000000B0:
			iVar0 = 0x0000000B;
			break;
		
		case 0x000000B2:
			iVar0 = 0x00000005;
			break;
		
		case 0x000000B3:
			iVar0 = 0x00000006;
			break;
		
		case 0x000000B7:
			iVar0 = 0x00000015;
			break;
		
		case 0x000000B4:
			iVar0 = 0x00000012;
			break;
		
		case 0x000000B5:
			iVar0 = 0x00000016;
			break;
		
		case 0x000000B6:
			iVar0 = 0x00000013;
			break;
		
		case 0x000000B8:
			iVar0 = 0x0000000D;
			break;
		
		case 0x000000BA:
			iVar0 = 0x0000000F;
			break;
		
		case 0x000000BC:
			iVar0 = 0x00000011;
			break;
	}
	return func_192(iVar0);
}

bool func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_199())
	{
		return 0x00000000;
	}
	iVar0 = func_194(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_193(iVar1));
}

int func_193(int iParam0)
{
	return (iParam0 % 0x00000020);
}

var func_194(var uParam0)
{
	var uVar0;
	
	uVar0 = func_166(func_195(uParam0), 0xFFFFFFFF, 0x00000000);
	return uVar0;
}

int func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_198(iVar0);
	if ((func_197() == 0x00000000 || func_196() == 0x00000000) || (func_197() == 0x000003E7 && func_196() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002E2;
				break;
			
			case 0x00000001:
				return 0x000002E3;
				break;
		}
	}
	return 0x00002CF7;
}

int func_196()
{
	return Global_7831;
}

int func_197()
{
	return Global_7830;
}

int func_198(int iParam0)
{
	return (iParam0 / 0x00000020);
}

bool func_199()
{
	return Global_140858;
}

int func_200(int iParam0)
{
	if (((((((((((((((iParam0 == 0x000000AB || iParam0 == 0x000000AC) || iParam0 == 0x000000AD) || iParam0 == 0x000000AF) || iParam0 == 0x000000B1) || iParam0 == 0x000000B2) || iParam0 == 0x000000B3) || iParam0 == 0x000000B4) || iParam0 == 0x000000B5) || iParam0 == 0x000000B6) || iParam0 == 0x000000B7) || iParam0 == 0x000000B8) || iParam0 == 0x000000B9) || iParam0 == 0x000000BA) || iParam0 == 0x000000BB) || iParam0 == 0x000000BC)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_201(int iParam0)
{
	if ((((((iParam0 == 0x000000C7 || iParam0 == 0x000000C8) || iParam0 == 0x000000C9) || iParam0 == 0x000000CA) || iParam0 == 0x000000CB) || iParam0 == 0x000000CC) || iParam0 == 0x000000CD)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_202(int iParam0)
{
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(func_166(0x000014CE, 0xFFFFFFFF, 0x00000000), iParam0);
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0x00000000;
		
		case joaat("dune5"):
			return 0x00000000;
		
		case joaat("wastelander"):
			return 0x00000001;
		
		case joaat("blazer5"):
			return 0x00000002;
		
		case joaat("phantom2"):
			return 0x00000003;
		
		case joaat("voltic2"):
			return 0x00000004;
		
		case joaat("technical2"):
			return 0x00000005;
		
		case joaat("boxville5"):
			return 0x00000006;
		
		case joaat("ruiner2"):
			return 0x00000007;
		
		default:
	}
	return 0x00000000;
}

int func_204(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0x00000000;
			break;
		
		case joaat("boxville5"):
			return 0x00000001;
			break;
		
		case joaat("wastelander"):
			return 0x00000002;
			break;
		
		case joaat("phantom2"):
			return 0x00000003;
			break;
		
		case joaat("voltic2"):
			return 0x00000004;
			break;
		
		case joaat("dune4"):
			return 0x00000005;
			break;
		
		case joaat("dune5"):
			return 0x00000005;
			break;
		
		case joaat("ruiner2"):
			return 0x00000006;
			break;
		
		case joaat("blazer5"):
			return 0x00000007;
			break;
	}
	return 0xFFFFFFFF;
}

int func_205()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000005))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000003))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0x00000000))
	{
		if (Global_24BC9.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, 0xFFFFFFFF))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000005))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(0x00000362);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000003))
		{
			return 0x00000001;
		}
	}
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0xDA1BF71E2E8A1C89())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar4, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000003);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000005);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000001);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000003);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000005);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar4, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar4 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar4, 0x00000001);
					unk_0x5D96D8530B3D0904(&iVar4, 0x00000003);
					unk_0x9F2BE984EBF8A0F4(iVar4);
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_206(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case 0xA52F6866:
			*uParam1 = 0.2f;
			break;
		
		case 0xFE0A508C:
			*uParam1 = 0.15f;
			break;
		
		case 0xC3F25753:
			*uParam1 = 0.3f;
			break;
		
		case 0xFD707EDE:
			*uParam1 = 0.5f;
			break;
		
		case 0x96E24857:
			*uParam1 = 0.3f;
			break;
		
		case 0xD35698EF:
			*uParam1 = 0.4f;
			break;
		
		case 0x5D56F01B:
			*uParam1 = 0.3f;
			break;
		
		case 0x3DC92356:
			*uParam1 = 0.4f;
			break;
		
		case 0xAD6065C0:
			*uParam1 = 0.4f;
			break;
		
		case 0xC5DD6967:
			*uParam1 = 0.4f;
			break;
		
		case 0xE8983F9F:
			*uParam1 = 0.3f;
			break;
		
		case 0x9A9EB7DE:
			*uParam1 = 0.5f;
			break;
		
		case 0x3E2E4F8A:
			*uParam1 = 0.15f;
			break;
		
		case 0xAA6F980A:
			*uParam1 = 0.6f;
			break;
		
		case 0x27D79225:
			*uParam1 = 1f;
			break;
		
		case 0x9B065C9E:
			*uParam1 = 1f;
			break;
		
		case 0x8644331A:
			*uParam1 = 1f;
			break;
		
		case 0x7F81A829:
			*uParam1 = 1f;
			break;
		
		case 0x8F49AE28:
			*uParam1 = 1f;
			break;
		
		case 0x798682A2:
			*uParam1 = 1f;
			break;
		
		case 0xD039510B:
			*uParam1 = 1f;
			break;
		
		case 0x287FA449:
			*uParam1 = 1f;
			break;
		
		case 0x71D3B6F0:
			*uParam1 = 1f;
			break;
		
		case 0xFE5F0722:
			*uParam1 = 1f;
			break;
		
		case 0x93F09558:
			*uParam1 = 1f;
			break;
		
		case 0xAE12C99C:
			*uParam1 = 1f;
			break;
		
		case 0xD6FB0F30:
			*uParam1 = 1f;
			break;
		
		case 0xAE0A3D4F:
			*uParam1 = 1f;
			break;
		
		case 0xB2E046FB:
			*uParam1 = 1f;
			break;
		
		case 0x3C26BD0C:
			*uParam1 = 1f;
			break;
		
		case 0x8D45DF49:
			*uParam1 = 1f;
			break;
		
		case 0x9804F4C7:
			*uParam1 = 1f;
			break;
		
		case 0x1A861243:
			*uParam1 = 1f;
			break;
		
		case 0x619C1B82:
			*uParam1 = 1f;
			break;
		
		case 0xD2F77E37:
			*uParam1 = 1f;
			break;
		
		case 0x256E92BA:
			*uParam1 = 1f;
			break;
		
		case 0x5BA0FF1E:
			*uParam1 = 1f;
			break;
		
		case 0x49E25BA1:
			*uParam1 = 1f;
			break;
		
		case 0x669EB40A:
			*uParam1 = 1f;
			break;
		
		case 0x32174AFC:
			*uParam1 = 1f;
			break;
		
		case 0xD556917C:
			*uParam1 = 1f;
			break;
		
		case 0xBBA2A2F7:
			*uParam1 = 1f;
			break;
		
		case 0x5BEB3CE0:
			*uParam1 = 1f;
			break;
		
		case 0xDD71BFEB:
			*uParam1 = 1f;
			break;
		
		case 0x8526E2F5:
			*uParam1 = 1f;
			break;
		
		case 0x163F8520:
			*uParam1 = 1f;
			break;
		
		case 0x67D52852:
			*uParam1 = 1f;
			break;
		
		case 0x20314B42:
			*uParam1 = 1f;
			break;
		
		case 0xBE11EFC6:
			*uParam1 = 1f;
			break;
		
		case 0xA7DCC35C:
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0xBBA2A2F7:
		case 0x27D79225:
		case 0xD039510B:
		case 0x669EB40A:
		case 0xD6FB0F30:
		case 0x3C26BD0C:
		case 0x1A861243:
		case 0x256E92BA:
		case 0xFE5F0722:
		case 0x20314B42:
		case 0x8526E2F5:
		case 0x7F81A829:
		case 0x619C1B82:
		case 0xD2F77E37:
		case 0xAE12C99C:
		case 0x93F09558:
		case 0x8D45DF49:
		case 0x8F49AE28:
		case 0x9B065C9E:
		case 0x163F8520:
		case 0x5BA0FF1E:
		case 0x32174AFC:
		case 0x5BEB3CE0:
		case 0x287FA449:
		case 0xAE0A3D4F:
		case 0xBE11EFC6:
		case 0x9804F4C7:
		case 0x798682A2:
		case 0x8644331A:
		case 0x67D52852:
		case 0x49E25BA1:
		case 0xD556917C:
		case 0xDD71BFEB:
		case 0x71D3B6F0:
		case 0xB2E046FB:
		case 0xA7DCC35C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_208(int iParam0)
{
	if ((((((iParam0 == 0x000000E9 || iParam0 == 0x000000EA) || iParam0 == 0x000000EB) || iParam0 == 0x000000EC) || iParam0 == 0x000000F0) || iParam0 == 0x000000F1) || iParam0 == 0x00000107)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_209(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000040:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000004);
			break;
		
		case 0x00000043:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000004);
			break;
		
		case 0x00000048:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x00000075:
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			break;
		
		case 0x00000031:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x00000076:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x00000077:
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			break;
		
		case 0x0000004D:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			break;
		
		case 0x00000078:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			break;
		
		case 0x00000082:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x00000084:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x00000087:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x00000089:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x0000008D:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000006);
			break;
		
		case 0x00000093:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000002);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000003);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000004);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000005);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000006);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000007);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000008);
			break;
		
		case 0x000000CB:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			break;
		
		case 0x00000064:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000002);
			break;
		
		case 0x000000AA:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			break;
		
		case 0x000000A0:
			unk_0x5D96D8530B3D0904(iParam1, 0x0000000F);
			break;
		
		case 0x000000A1:
			unk_0x5D96D8530B3D0904(iParam1, 0x0000000F);
			break;
		
		case 0x000000C0:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			break;
		
		case 0x000000DD:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			break;
		
		case 0x000000DE:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x000000AC:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x000000A5:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x000000A6:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x0674E58A79778E99(iParam1, 0x00000001);
			break;
		
		case 0x0000008B:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x00000068:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x0000006D:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000002);
			break;
		
		case 0x000000E3:
		case 0x000000FC:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x0674E58A79778E99(iParam1, 0x00000002);
			unk_0x0674E58A79778E99(iParam1, 0x00000004);
			break;
		
		case 0x00000061:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x00000034:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x0000006C:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			break;
		
		case 0x000000ED:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x000000EE:
			unk_0x0674E58A79778E99(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000002);
			break;
		
		case 0x000000E9:
		case 0x000000EA:
		case 0x000000EB:
		case 0x000000EC:
		case 0x000000F0:
		case 0x000000F1:
		case 0x00000107:
			if (Global_1266F)
			{
				unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			}
			break;
		
		case 0x0000010F:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000002);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000003);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000004);
			break;
		
		case 0x00000110:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000003);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000004);
			break;
		
		case 0x00000111:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x00000119:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x0000010B:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x0000010C:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			break;
		
		case 0x00000124:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x00000135:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x00000149:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x0000016C:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x00000168:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x00000191:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000006);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x00000196:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x00000194:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x000001A9:
		case 0x000001AA:
		case 0x000001AB:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x000001AF:
		case 0x000001B0:
		case 0x000001B1:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000009);
			break;
		
		case 0x000001D7:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000003);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000007);
			break;
		
		case 0x000001ED:
		case 0x000001EB:
			unk_0x5D96D8530B3D0904(iParam1, 0x00000000);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000002);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000003);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000004);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000005);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000006);
			unk_0x5D96D8530B3D0904(iParam1, 0x00000007);
			break;
		
		default:
			return;
			break;
	}
}

void func_210(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0x00000000] = iParam0;
	Global_574E.f_13C0[0x00000001] = iParam1;
	Global_574E.f_13C0[0x00000002] = iParam2;
	Global_574E.f_13C0[0x00000003] = iParam3;
	Global_574E.f_13C0[0x00000004] = iParam4;
	Global_574E.f_146A = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
}

void func_213(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0x00000000;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_F4E[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_1151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_13E1[iVar0] = 0x00000000;
		Global_574E.f_146B[iVar0] = 0x00000000;
		Global_574E.f_14EC[iVar0] = 0x00000000;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0x00000000;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_574E.f_13C0[iVar0] = 0x00000000;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0x00000000;
		Global_574E.f_13DB[iVar0] = 0x00000001;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000100)
		{
			Global_574E.f_64A[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	Global_574E = 0x00000000;
	Global_574E.f_1462 = 0x00000000;
	Global_574E.f_1463 = 0x00000000;
	Global_574E.f_1464 = 0x00000000;
	Global_574E.f_1466 = 0x00000000;
	Global_574E.f_1467 = 0x00000000;
	Global_574E.f_1468 = 0x00000000;
	Global_574E.f_1465 = 0x00000000;
	Global_574E.f_16F2 = 0x00000000;
	Global_574E.f_177E = 0x00000000;
	Global_574E.f_166B = 0x00000000;
	Global_574E.f_166A = 0x00000000;
	Global_574E.f_166C = 0x00000000;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = 0x00000000;
	Global_574E.f_129F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_12A0 = 0x00000000;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0x00000000;
	Global_412185.f_3E = 0x00000000;
	Global_412185.f_3F = 0x00000000;
	Global_412185.f_40 = 0x00000000;
	Global_412185.f_41 = 0x00000000;
	Global_412185.f_42 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_412185.f_19[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_412185.f_43 = 0x00000000;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_1670 = 0x00000000;
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = 0x00000000;
	Global_574E.f_166E = 0x00000000;
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	Global_574E.f_1469 = 0x0000000A;
	Global_574E.f_146A = 0x00000000;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0x00000000;
	Global_574E.f_1665 = 0x00000000;
	Global_574E.f_1664 = 0x00000000;
	Global_574E.f_1666 = 0x00000000;
	Global_574E.f_1667 = 0x00000000;
	Global_574E.f_1668 = 0x00000000;
	Global_574E.f_1669 = 0x00000000;
	Global_574E.f_20DD = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_574E.f_1778[iVar0] = 0xFFFFFFFF;
		Global_574E.f_177B[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0x00000000;
	Global_574E.f_13DA = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_20C8 = 0x00000000;
	Global_574E.f_20C3 = 0x00000000;
	Global_574E.f_20CD = 0x00000000;
	Global_574E.f_20D2 = 0x00000000;
	Global_574E.f_20D7 = 0x00000000;
	Global_574E.f_20D9 = 0x00000000;
	Global_574E.f_20DF = 0x00000000;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0x00000000);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

void func_214()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

int func_215(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_81(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

bool func_216(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 0x00000001, iParam1))
	{
		return 0x00000000;
	}
	bVar1 = 0x00000001;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009);
		Global_574E.f_15FC[iVar0] = 0x00000001;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009))
		{
			bVar1 = 0x00000000;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
	Global_574E.f_15EE[iVar0] = 0x00000001;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = 0x00000000;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0x00000000);
		Global_574E.f_15F5[iVar0] = 0x00000001;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = 0x00000000;
		}
	}
	bVar2 = 0x00000000;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_217(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_217(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0x00000000:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 0x00000001;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 0x00000002;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0x00000000;
			}
			break;
	}
	return uParam0->f_9 == 0x00000002;
}

void func_218(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_219(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_220(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_69(iParam0);
		}
		return;
	}
	if (!*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*iParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0x00000138)
	{
		return 0x00000000;
	}
	iVar0 = iParam1;
	if (iVar0 < 0x00000000 || iVar0 > 0x00000002)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6259[iParam0], iVar0);
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_225(0x00000001, 0x00000001))
	{
		if (iVar0 < (iVar1 - 0x00000001))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x0000002D /*6*/], 0x00000003))
	{
		if (iVar0 < (iVar1 - 0x00000001))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_43() && !unk_0x8CD06866876216F2())
	{
		if (func_224(0x00000021, 0x00000000) && !func_223(0x6862D0E7))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0x00000000 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0x00000000;
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (Global_1B416.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_224(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_225(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C.f_520, 0x00000002))
		{
			return 0x00000001;
		}
	}
	if (unk_0xC2F420D189FDB329())
	{
		if (!bParam1 || unk_0x58424C49F8924842())
		{
			if (!unk_0xBA301E03A078FA59() && !unk_0x33A494591F2C1975())
			{
				return 0x00000001;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x9AE561F9BC3F06D8())
		{
			return 0x00000000;
		}
	}
	if (unk_0xC2F420D189FDB329())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_226()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_225(0x00000001, 0x00000001))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0++;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x0000002D /*6*/], 0x00000003))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0++;
		}
	}
	if (func_43() && !unk_0x8CD06866876216F2())
	{
		if (func_224(0x00000021, 0x00000000) && !func_223(0x6862D0E7))
		{
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_3)
		{
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_4)
		{
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_5)
		{
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_6)
		{
			iVar0++;
		}
		if (Global_1B416.f_61EC.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_227(float fParam0)
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x7D563EECE9515353(unk_0x16F2683693E537C9()) > 0x00000000;
		}
		else
		{
			return unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), fParam0) > 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_228(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_229()
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	bool bVar15;
	float fVar16;
	int iVar17;
	vector3 vVar18;
	vector3 vVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = 0x00000000;
	if ((((((((((((((((Local_56.f_1D.f_50 && Local_56.f_1D.f_45) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && Local_56.f_2 == 0x00000000) && Local_56 != 0xFFFFFFFF) && func_67(Local_56, 0x00000000)) && func_67(Local_56, 0x00000005)) && !func_27(0x00000000)) && !func_27(0x00000003)) && !func_27(0x00000002)) && !func_27(0x00000004)) && !func_27(0x00000005)) && !func_27(0x0000000E)) && !Global_12061) && !func_228(0x00000001)) && !func_313()) || (((Local_56.f_3 > 0x00000001 && !func_228(0x00000000)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && !func_313()))
	{
		func_312(Local_56, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		vVar5 = { 198.3659f, -1020.273f, -100f };
		vVar6 = { vVar5 };
		vVar7 = { 198.9538f, -1026.13f, -100f };
		iVar8 = func_311(Local_56);
		switch (Local_56.f_3)
		{
			case 0x00000000:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x991B1F0980C62628())
				{
					Local_56.f_3 = 0x0000000A;
					return;
				}
				if ((((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000) && (func_310(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), Local_56.f_1D.f_44, 90f) || unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !unk_0x36646919F20EAFFC(unk_0x16F2683693E537C9())) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) && !unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002)) && (iVar8 == iLocal_129 || iVar8 == 0x00000091))
				{
					if (func_309())
					{
						bVar9 = 0x00000001;
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
						{
							iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
							if (unk_0xC844350D5D58C99A(iVar2))
							{
								if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
								{
									iVar10 = unk_0x134B62B726CEC8E6(iVar2);
									if (((((((((!func_64(iVar10) || func_63(iVar2)) || func_62(iVar2)) || !func_39(iVar10, 0x00000000)) || unk_0x56E1CD81AE700E98(iVar2)) || ((!unk_0x8E39AC3C76C8AA58(iVar10) && !unk_0x7D8B2A8F9EA82DB7(iVar10)) && !unk_0xD1CC995EE5EB1EC1(iVar10))) || iVar10 == joaat("monster")) || unk_0x4E861BC5B1EDA7BD(iVar2)) || unk_0x6CFEA4CFD9C496C8(iVar2)) || (unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()) && unk_0x8A22C4C08282BF26(joaat("taxi_procedural")) > 0x00000000))
									{
										bVar9 = 0x00000000;
									}
								}
								else
								{
									bVar9 = 0x00000000;
								}
							}
						}
						else if (unk_0x720928A330953059(sVar4))
						{
							unk_0x3F423BF5B8125A50(sVar4);
							if (!unk_0xB4AE0788C1587752(sVar4))
							{
								bVar9 = 0x00000000;
							}
						}
						if (bVar9)
						{
							func_220(&iLocal_115, 0x00000003, "WEB_VEH_ENTER", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_175 = 0x00000000;
							Local_56.f_3 = 0x00000001;
						}
						else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
						{
							if (!unk_0xFEBC1E4EC9E001F0() || func_219("WEB_VEH_INV"))
							{
								func_218("WEB_VEH_INV", 0xFFFFFFFF);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = 0x00000001;
							}
						}
					}
					else if (!unk_0xFEBC1E4EC9E001F0() || func_219("WEB_VEH_FULL"))
					{
						func_218("WEB_VEH_FULL", 0xFFFFFFFF);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = 0x00000001;
					}
				}
				break;
			
			case 0x00000001:
				if (!iLocal_173)
				{
					if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iLocal_173 = 0x00000000;
						unk_0x3F423BF5B8125A50(sVar4);
						if (unk_0xB4AE0788C1587752(sVar4))
						{
							iLocal_173 = 0x00000001;
						}
					}
					else
					{
						unk_0x8D17794CE3273D70(sVar4);
						iLocal_173 = 0x00000001;
					}
				}
				iVar11 = 0x00000001;
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
						{
							iVar12 = unk_0x134B62B726CEC8E6(iVar2);
							if ((((((((!func_64(iVar12) || func_63(iVar2)) || func_62(iVar2)) || unk_0x56E1CD81AE700E98(iVar2)) || ((!unk_0x8E39AC3C76C8AA58(iVar12) && !unk_0x7D8B2A8F9EA82DB7(iVar12)) && !unk_0xD1CC995EE5EB1EC1(iVar12))) || iVar12 == joaat("monster")) || unk_0x4E861BC5B1EDA7BD(iVar2)) || unk_0x6CFEA4CFD9C496C8(iVar2)) || (unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()) && unk_0x8A22C4C08282BF26(joaat("taxi_procedural")) > 0x00000000))
							{
								iVar11 = 0x00000000;
							}
						}
						else
						{
							iVar11 = 0x00000000;
						}
					}
				}
				if (((((((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000) && (func_310(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), Local_56.f_1D.f_44, 90f) || unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && func_309()) && !unk_0x36646919F20EAFFC(unk_0x16F2683693E537C9())) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) && !unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002)) && !func_313()) && (iVar8 == iLocal_129 || iVar8 == 0x00000091)) && iVar11)
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) || (unk_0xB4AE0788C1587752(sVar4) || !unk_0x720928A330953059(sVar4)))
					{
						if (func_215(iLocal_115, 0x00000001))
						{
							func_69(&iLocal_115);
							iLocal_173 = 0x00000000;
							Local_56.f_3 = 0x00000002;
						}
						func_307(0x0000002F, 0x00000000);
						func_302(0x0000002F, 0x00000000);
						Local_56.f_70 = unk_0x0D1736C2E221BCEA(vVar5, "v_garagem_sp");
						if (unk_0x31609A585163CBAC(Local_56.f_70))
						{
							if (!unk_0xBD307E66C0669BFC(Local_56.f_70))
							{
								if ((unk_0xF4CCC8CB6DE7F1AE() % 0x0000000A) == 0x00000000)
								{
									unk_0x0007C2367F4F23F3(Local_56.f_70);
								}
							}
							StringCopy(&Global_9509, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !unk_0xEB880D98B5988D0C())
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								iVar13 = func_300(Local_56);
								func_61(&vVar14, iVar13);
								vVar6 = { vVar14 };
								unk_0x9E632F16E887F781(vVar6, 20f, 0x00000000);
							}
							else
							{
								unk_0x9E632F16E887F781(vVar7 + Vector(1f, 0f, 0f), 20f, 0x00000000);
							}
							iLocal_172 = 0x00000001;
						}
					}
				}
				else
				{
					if (iLocal_172 && unk_0xEB880D98B5988D0C())
					{
						unk_0x486B4ADE317F0689();
						iLocal_172 = 0x00000000;
					}
					iLocal_173 = 0x00000000;
					func_69(&iLocal_115);
					unk_0x8D17794CE3273D70(sVar4);
					Local_56.f_3 = 0x00000000;
				}
				break;
			
			case 0x00000002:
				func_307(0x0000002F, 0x00000000);
				func_302(0x0000002F, 0x00000000);
				unk_0x4C7B0415764B64BA(0x00000008);
				Global_126B1.f_241 = 0x00000001;
				Global_126B1.f_242 = { Local_56.f_1D.f_37 };
				iLocal_155 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x8BCB70EB440DED83(0x00000000);
				unk_0xBFE31971E49FA500(0x00000000);
				unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
					{
						if (func_310(unk_0xD9522BA9E27E1349(iVar2), Local_56.f_1D.f_44, 90f))
						{
							iLocal_175 = 0x00000000;
						}
						else
						{
							iLocal_175 = 0x00000001;
						}
						unk_0xAA6B3A4292417750(iVar2, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
						unk_0x75CFD6AD66ADFDD1(Local_83.f_56[0x00000000 /*6*/], 20f, 0x00000000);
						unk_0x679C321F8CAA2CFA(Local_83.f_56[0x00000000 /*6*/], 20f, 0x00000000);
						unk_0xD7AD2803AD9697F7(Local_83.f_56[0x00000000 /*6*/], 7f);
						unk_0xA47B46945FF6DE74(iVar2, Local_83.f_56[0x00000000 /*6*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						if (iLocal_175 && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
						{
							unk_0xD8F6A53F4799FAFE(iVar2, (Local_83.f_56[0x00000000 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0xD8F6A53F4799FAFE(iVar2, Local_83.f_56[0x00000000 /*6*/].f_3.f_2);
						}
						if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
						{
							unk_0x83F619A03CDDE284(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0xFFFFFFFF);
							unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 0x00000001);
						}
						unk_0xB9FD7450C0DAB575(iVar2, 0x40A00000);
					}
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					func_293(&(Local_83[0x00000001 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
					Local_56.f_3 = 0x00000003;
				}
				else
				{
					if (unk_0xC844350D5D58C99A(iLocal_168) && !unk_0x437347B10A200C4B(iLocal_168, 0x00000000))
					{
						if (unk_0xAF6690C489CC6203(iLocal_168) && unk_0x9C77D2D0559097F0(iLocal_168, 0x00000001))
						{
							unk_0x046C362CF15F1935(&iLocal_168);
						}
					}
					iLocal_168 = unk_0x728870EB733D12A1();
					if ((((unk_0xC844350D5D58C99A(iLocal_168) && unk_0xDF1306B443CD3D15(iLocal_168, 0x00000000)) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_168))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iLocal_168))) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iLocal_168)))
					{
						if (!unk_0xAF6690C489CC6203(iLocal_168))
						{
							unk_0x73270B3C9CC833FD(iLocal_168, 0x00000000, 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(iLocal_168) && unk_0xDF1306B443CD3D15(iLocal_168, 0x00000000))
						{
							if (!bVar15)
							{
								if (unk_0x3D1053F9EB43B7AD(iLocal_168, Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000))
								{
									bVar15 = 0x00000001;
								}
							}
							if (!bVar15)
							{
								fVar16 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_168, 0x00000001), Local_83[0x00000000 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = 0x00000001;
								}
							}
							if (bVar15)
							{
								iVar17 = func_49(0x00000018);
								if (func_292(&Local_141, 0x00000018))
								{
									func_287(&Local_141, func_474());
									if (unk_0xC844350D5D58C99A(iVar17))
									{
										unk_0xA954465BA6FDEFE2(&iVar17);
									}
								}
								if (Local_56 == 0x00000015)
								{
									unk_0x536F1BE96C726C4B(-89.377f, 92.6583f, 71.2349f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
									func_285(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 0x00000018, 0x00000000);
								}
								else if (Local_56 == 0x00000016)
								{
									unk_0x536F1BE96C726C4B(-62.0307f, -1839.859f, 25.6787f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
									func_285(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 0x00000018, 0x00000000);
								}
								else if (Local_56 == 0x00000017)
								{
									unk_0x536F1BE96C726C4B(-234.7648f, -1150.311f, 21.9224f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
									func_285(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 0x00000018, 0x00000000);
								}
								unk_0xB9FD7450C0DAB575(iLocal_168, 0x40A00000);
							}
						}
					}
					else
					{
						iLocal_168 = 0x00000000;
					}
					vVar18 = { Local_56.f_1D * Vector(2f, 2f, 2f) + Local_56.f_1D.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					vVar19 = { Local_56.f_1D * Vector(1f, 1f, 1f) + Local_56.f_1D.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D, vVar18.x, vVar18.y, Local_56.f_1D.f_3.f_2, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000))
					{
						sLocal_176 = "";
						switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002))
						{
							case 0x00000000:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 0x00000001:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar18.x, vVar18.y, Local_56.f_1D.f_2, vVar19.x, vVar19.y, Local_56.f_1D.f_3.f_2, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000))
					{
						sLocal_176 = "";
						switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002))
						{
							case 0x00000000:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 0x00000001:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar19.x, vVar19.y, Local_56.f_1D.f_2, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000))
					{
						sLocal_176 = "";
						switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002))
						{
							case 0x00000000:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 0x00000001:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000006))
						{
							case 0x00000000:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 0x00000001:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 0x00000002:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 0x00000003:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 0x00000004:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 0x00000005:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					unk_0x75CFD6AD66ADFDD1(Local_83.f_49[0x00000000 /*4*/], 20f, 0x00000000);
					unk_0x679C321F8CAA2CFA(Local_83.f_56[0x00000000 /*6*/], 20f, 0x00000000);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_83.f_49[0x00000000 /*4*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_83.f_49[0x00000000 /*4*/].f_3);
					iLocal_120 = unk_0xE9744DB7B8CA6965(Local_83.f_49[0x00000000 /*4*/], 0f, 0f, Local_83.f_49[0x00000000 /*4*/].f_3, 0x00000002);
					unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
					func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					func_293(&(Local_83[0x00000000 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
					Local_56.f_3 = 0x00000004;
				}
				Local_56.f_70 = unk_0x0D1736C2E221BCEA(vVar5, "v_garagem_sp");
				if (unk_0x31609A585163CBAC(Local_56.f_70))
				{
					if (!unk_0xBD307E66C0669BFC(Local_56.f_70))
					{
						unk_0x0007C2367F4F23F3(Local_56.f_70);
					}
					StringCopy(&Global_9509, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar20 = func_300(Local_56);
						func_61(&vVar21, iVar20);
						vVar6 = { vVar21 };
						unk_0x9E632F16E887F781(vVar6, 20f, 0x00000000);
					}
					else
					{
						unk_0x9E632F16E887F781(vVar7, 20f, 0x00000000);
					}
				}
				unk_0x5D96D8530B3D0904(&(Local_131.f_9), 0x00000019);
				func_281(198.0043f, -999.7775f, -100f, 50f, 0x00000000);
				func_114(Local_56);
				func_114(0x0000001A);
				func_114(0x0000001D);
				func_114(0x00000020);
				func_114(0x0000001C);
				func_114(0x0000001F);
				func_114(0x00000022);
				func_114(0x0000001B);
				func_114(0x0000001E);
				func_114(0x00000021);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_174 = 0x00000000;
				break;
			
			case 0x00000004:
				bVar22 = 0x00000001;
				if (!unk_0xEB880D98B5988D0C())
				{
				}
				else if (unk_0x68367101660E33F0())
				{
				}
				else
				{
					bVar22 = 0x00000000;
				}
				if (unk_0x31609A585163CBAC(Local_56.f_70))
				{
					if (!unk_0xBD307E66C0669BFC(Local_56.f_70))
					{
						unk_0x0007C2367F4F23F3(Local_56.f_70);
					}
					StringCopy(&Global_9509, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_70 = unk_0x0D1736C2E221BCEA(vVar5, "v_garagem_sp");
				}
				if (func_280())
				{
				}
				else
				{
					bVar22 = 0x00000000;
				}
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E) && unk_0x9CF8D5C7090408A2(Local_56.f_6E))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6E))
					{
						bVar22 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000000 /*15*/].f_E * 1000f))
					{
						bVar22 = 0x00000000;
					}
				}
				else if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F) && unk_0x9CF8D5C7090408A2(Local_56.f_6F))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6F))
					{
						bVar22 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000000 /*15*/].f_E * 1000f))
					{
						bVar22 = 0x00000000;
					}
				}
				else
				{
					bVar22 = 0x00000000;
				}
				if (unk_0x69DF961355195C3C(iLocal_120))
				{
					fVar23 = unk_0xA45992A6CE82FB43(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = 0x00000000;
					}
				}
				if (bVar22)
				{
					unk_0x53491B90E4FD0E56(0x00000320);
					Local_56.f_3 = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (unk_0x757EF87A33649210())
				{
					iVar24 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0x00000000, 0x00000001);
					unk_0x6F6BA3FE885E6C91(iVar24, "hold", (2250f / 1000f));
					func_294(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
					}
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
					}
					if (unk_0xC844350D5D58C99A(iLocal_178))
					{
						unk_0x20641932E5104B25(iLocal_178, 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(iLocal_178, 0x00000000);
						iLocal_178 = 0x00000000;
					}
					unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					unk_0x4C7B0415764B64BA(0x00000008);
					if (unk_0x69DF961355195C3C(iLocal_120))
					{
						unk_0xB46854F2D1C7DFA9(iLocal_120);
					}
					iLocal_120 = 0xFFFFFFFF;
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 194.5394f, -1026.32f, -100f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 334.1665f);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					SYSTEM::SETTIMERA(0x00000000);
					Local_56.f_3 = 0x00000006;
				}
				break;
			
			case 0x00000006:
				func_279(Local_56);
				if (unk_0x757EF87A33649210() && SYSTEM::TIMERA() > 0x000008CA)
				{
					unk_0x8D17794CE3273D70(sVar4);
					func_278();
					if (unk_0xEB880D98B5988D0C())
					{
						unk_0x486B4ADE317F0689();
					}
					unk_0x82E51BCA72537B6C(0x00000320);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_156 = 0x00000000;
					iLocal_172 = 0x00000000;
					Local_56.f_3 = 0x0000000A;
				}
				break;
			
			case 0x00000003:
				func_279(Local_56);
				bVar25 = 0x00000001;
				if (!unk_0xEB880D98B5988D0C())
				{
				}
				else if (unk_0x68367101660E33F0())
				{
				}
				else
				{
					bVar25 = 0x00000000;
				}
				if (unk_0x31609A585163CBAC(Local_56.f_70))
				{
					if (!unk_0xBD307E66C0669BFC(Local_56.f_70))
					{
						unk_0x0007C2367F4F23F3(Local_56.f_70);
					}
					StringCopy(&Global_9509, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_70 = unk_0x0D1736C2E221BCEA(vVar5, "v_garagem_sp");
				}
				if (func_280())
				{
				}
				else
				{
					bVar25 = 0x00000000;
				}
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E) && unk_0x9CF8D5C7090408A2(Local_56.f_6E))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6E))
					{
						bVar25 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000001 /*15*/].f_E * 1000f))
					{
						bVar25 = 0x00000000;
					}
				}
				else if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F) && unk_0x9CF8D5C7090408A2(Local_56.f_6F))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6F))
					{
						bVar25 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000001 /*15*/].f_E * 1000f))
					{
						bVar25 = 0x00000000;
					}
				}
				else
				{
					bVar25 = 0x00000000;
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_270(unk_0x16F2683693E537C9(), Local_83.f_56[0x00000000 /*6*/], Local_83.f_42[0x00000000 /*3*/], ((Local_83[0x00000001 /*15*/].f_E * 1000f) - 500f), Var26, 0x00000002, &fVar3);
				}
				if (bVar25)
				{
					func_278();
					SYSTEM::SETTIMERA(0x00000000);
					unk_0x53491B90E4FD0E56(0x00000320);
					Local_56.f_3 = 0x00000023;
				}
				break;
			
			case 0x00000023:
				bVar27 = 0x00000001;
				func_279(Local_56);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_3D[0x00000001] * 1000f))
				{
					bVar27 = 0x00000000;
				}
				if (bVar27)
				{
					func_278();
					func_294(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
					}
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
					}
					if (unk_0xC844350D5D58C99A(iLocal_178))
					{
						unk_0x20641932E5104B25(iLocal_178, 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(iLocal_178, 0x00000000);
						iLocal_178 = 0x00000000;
					}
					unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					unk_0x4C7B0415764B64BA(0x00000008);
					if (unk_0xEB880D98B5988D0C())
					{
						unk_0x486B4ADE317F0689();
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
						{
							iVar28 = func_300(Local_56);
							func_61(&Var29, iVar28);
							unk_0xA47B46945FF6DE74(iVar2, Var29, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iVar2, Var29.f_3);
							unk_0x05CA0E7946B27A19(iVar2, 0x00000001);
							unk_0x56FDC9ADE35F7DB0(iVar2, 0x00000000, 0x00000001, 0x00000000);
							unk_0x0882E3DC0C991680(iVar2, 0x00000004);
							unk_0x9FEF282C0366A41B(iVar2, 0x00000001, 0x00000000);
							unk_0x9FEF282C0366A41B(iVar2, 0x00000000, 0x00000000);
							unk_0x3E5CE368CD085FFA(iVar2, 0x00000000);
							unk_0xAA6B3A4292417750(iVar2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iVar2, 0x00000000);
							unk_0x1E9649458B15960F(iVar2, 0x00000000);
							Var30.f_9 = 0x00000031;
							Var30.f_3B = 0x00000002;
							func_32(iVar2, &Var30);
							func_115(iVar28, &Var30, 0f, 0f, 0f, -1f, 0x00000091);
							func_30(iVar28, iVar2, 0x00000001);
							func_269(iVar2);
						}
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 0x3F800000);
					}
					iVar31 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
					iVar32 = 0x00000000;
					while (iVar32 < iVar31)
					{
						if ((unk_0xC844350D5D58C99A(uVar0[iVar32]) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar32])) && unk_0xBFDE4EE64C4BF2D6(uVar0[iVar32], unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
						{
							unk_0x08841CDB215AE18F(uVar0[iVar32], 206.802f, -1018.011f, -100f, 0x00000000, 0x00000000, 0x00000001);
						}
						iVar32++;
					}
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_156 = 0x00000000;
					iLocal_172 = 0x00000000;
					unk_0x82E51BCA72537B6C(0x00000320);
					Local_56.f_3 = 0x0000000A;
				}
				break;
			
			case 0x0000000A:
				if (SYSTEM::TIMERA() < 0x00001B58 || !Global_1B416.f_7FE8.f_12C0)
				{
					if (!Global_1B416.f_7FE8.f_12C0)
					{
						if (iLocal_156 == 0x00000000)
						{
							func_218("CAR_GAR_05", 0xFFFFFFFF);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = 0x00000001;
							if (SYSTEM::TIMERA() >= 0x00001B58)
							{
								SYSTEM::SETTIMERA(0x00000000);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 0x00000001)
						{
							func_218("CAR_GAR_06", 0xFFFFFFFF);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = 0x00000001;
							if (SYSTEM::TIMERA() >= 0x00001B58)
							{
								SYSTEM::SETTIMERA(0x00000000);
								Global_1B416.f_7FE8.f_12C0 = 0x00000001;
							}
						}
					}
					else
					{
						func_218("CAR_GAR_EXIT", 0xFFFFFFFF);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = 0x00000001;
					}
				}
				else
				{
					Global_1B416.f_7FE8.f_12C0 = 0x00000001;
				}
				iVar33 = 0x00000000;
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (iLocal_115 != 0xFFFFFFFF)
					{
						func_69(&iLocal_115);
					}
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
					{
						if (unk_0x2F6DBDA9ACD7D3AB(iVar2) || unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
						{
							if (!(unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())))
							{
								if ((((unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000047) != 0f || unk_0xBFC0798A6E3417F9(0x00000000, 0x00000047)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000047)) || unk_0xD245978525608929(0x00000000, 0x00000047)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x00000047))
								{
									iVar33 = 0x00000001;
								}
								if ((((unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000048) != 0f || unk_0xBFC0798A6E3417F9(0x00000000, 0x00000048)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000048)) || unk_0xD245978525608929(0x00000000, 0x00000048)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x00000048))
								{
									iVar33 = 0x00000001;
								}
							}
						}
					}
				}
				else
				{
					unk_0x3F423BF5B8125A50(sVar4);
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0x00000000, 0x00000001, 0x00000000) && func_310(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 180f, 90f))
					{
						if (iLocal_114 != 0xFFFFFFFF)
						{
							func_69(&iLocal_114);
						}
						if (iLocal_115 == 0xFFFFFFFF)
						{
							func_220(&iLocal_115, 0x00000003, "WEB_VEH_EXIT", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						if (!iLocal_114 != 0xFFFFFFFF && !iLocal_115 == 0xFFFFFFFF)
						{
							if (func_215(iLocal_115, 0x00000001))
							{
								func_69(&iLocal_115);
								iVar33 = 0x00000001;
							}
						}
					}
					else if (iLocal_115 != 0xFFFFFFFF)
					{
						func_69(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 0x00000001;
				}
				if (iVar33 && !func_268())
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || iLocal_159)
					{
						SYSTEM::SETTIMERA(0x00000000);
						unk_0x9E632F16E887F781(Local_83.f_49[0x00000002 /*4*/], 20f, 0x00000000);
						if (iLocal_115 != 0xFFFFFFFF)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 0x0000000C;
					}
					else if (unk_0xB4AE0788C1587752(sVar4))
					{
						sLocal_176 = "";
						switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000006))
						{
							case 0x00000000:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 0x00000001:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 0x00000002:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 0x00000003:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 0x00000004:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 0x00000005:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = unk_0xE9744DB7B8CA6965(Local_83.f_49[0x00000001 /*4*/], 0f, 0f, Local_83.f_49[0x00000001 /*4*/].f_3, 0x00000002);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						func_293(&(Local_83[0x00000002 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						unk_0x9E632F16E887F781(Local_83.f_49[0x00000002 /*4*/], 20f, 0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
						if (iLocal_115 != 0xFFFFFFFF)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 0x0000000B;
					}
					else if (!unk_0x720928A330953059(sVar4))
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_83.f_49[0x00000001 /*4*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_83.f_49[0x00000001 /*4*/].f_3);
						func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						func_293(&(Local_83[0x00000002 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						unk_0x9E632F16E887F781(Local_83.f_49[0x00000002 /*4*/], 20f, 0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
						if (iLocal_115 != 0xFFFFFFFF)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 0x0000000B;
					}
				}
				break;
			
			case 0x0000000B:
				bVar34 = 0x00000001;
				if (!unk_0xEB880D98B5988D0C())
				{
				}
				else if (unk_0x68367101660E33F0())
				{
				}
				else
				{
					bVar34 = 0x00000000;
				}
				if (func_280())
				{
				}
				else
				{
					bVar34 = 0x00000000;
				}
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E) && unk_0x9CF8D5C7090408A2(Local_56.f_6E))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6E))
					{
						bVar34 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000002 /*15*/].f_E * 1000f))
					{
						bVar34 = 0x00000000;
					}
				}
				else if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F) && unk_0x9CF8D5C7090408A2(Local_56.f_6F))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6F))
					{
						bVar34 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000002 /*15*/].f_E * 1000f))
					{
						bVar34 = 0x00000000;
					}
				}
				else
				{
					bVar34 = 0x00000000;
				}
				if (unk_0x69DF961355195C3C(iLocal_120))
				{
					fVar35 = unk_0xA45992A6CE82FB43(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = 0x00000000;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0x00000000;
					iLocal_172 = 0x00000000;
					unk_0x53491B90E4FD0E56(0x00000320);
					SYSTEM::SETTIMERA(0x00000000);
					Local_56.f_3 = 0x0000000D;
				}
				break;
			
			case 0x0000000C:
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
				if (SYSTEM::TIMERA() > 0x000001F4)
				{
					iVar36 = func_267();
					if ((iVar36 == 0x00000015 || iVar36 == 0x00000016) || iVar36 == 0x00000017)
					{
						Var37.f_9 = 0x00000031;
						Var37.f_3B = 0x00000002;
						func_115(iVar36, &Var37, 0f, 0f, 0f, -1f, 0x00000091);
						func_117(iVar36);
					}
					else if (iVar36 != 0xFFFFFFFF)
					{
						if (!iLocal_159)
						{
							func_480(iVar36, 0x00000000);
							func_117(iVar36);
						}
					}
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					unk_0x8D17794CE3273D70(sVar4);
					unk_0x53491B90E4FD0E56(0x00000320);
					Local_56.f_3 = 0x0000000D;
				}
				break;
			
			case 0x0000000D:
				if (unk_0x757EF87A33649210())
				{
					iVar38 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0x00000000, 0x00000001);
					unk_0x6F6BA3FE885E6C91(iVar38, "hold", (2250f / 1000f));
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
					}
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
					}
					if (unk_0xC844350D5D58C99A(iLocal_178))
					{
						unk_0x20641932E5104B25(iLocal_178, 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(iLocal_178, 0x00000000);
						iLocal_178 = 0x00000000;
					}
					unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
					unk_0x4C7B0415764B64BA(0x00000008);
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (!iLocal_159)
						{
							iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
							{
								unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								unk_0xA47B46945FF6DE74(iVar2, Local_56.f_1D.f_46[0x00000001 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iVar2, Local_56.f_1D.f_4D[0x00000001]);
								unk_0xB9FD7450C0DAB575(iVar2, 0x40A00000);
							}
						}
					}
					else
					{
						if (unk_0x69DF961355195C3C(iLocal_120))
						{
							unk_0xB46854F2D1C7DFA9(iLocal_120);
						}
						iLocal_120 = 0xFFFFFFFF;
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_56.f_1D.f_46[0x00000001 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_56.f_1D.f_4D[0x00000001]);
					}
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					SYSTEM::SETTIMERA(0x00000000);
					Local_56.f_3 = 0x0000000E;
				}
				break;
			
			case 0x0000000E:
				if (unk_0x757EF87A33649210() && SYSTEM::TIMERA() > 0x000008CA)
				{
					bVar39 = 0x00000001;
					if (iLocal_159)
					{
						unk_0x523BCC9DC80CD82F(iLocal_160);
						if (unk_0xB87F6CF6E5628C67(iLocal_160))
						{
							iVar40 = unk_0x122AAB0B1D6F55AD(iLocal_160, Local_56.f_1D.f_46[0x00000000 /*3*/], Local_56.f_1D.f_4D[0x00000000], 0x00000001, 0x00000001, 0x00000000);
							if (iLocal_160 == joaat("windsor"))
							{
								unk_0x446EA2500F021666(iVar40, 0x00000000);
							}
							if (unk_0xC844350D5D58C99A(iVar40) && unk_0xDF1306B443CD3D15(iVar40, 0x00000000))
							{
								unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iVar40, 0xFFFFFFFF);
								unk_0xCCD53AC1B5D5E456(iVar40, 0f);
								unk_0x71199B01895C6202(iLocal_160);
								if (func_118(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											unk_0x446EA2500F021666(iVar40, iLocal_111);
											break;
										}
								}
								unk_0x046C362CF15F1935(&iVar40);
							}
							iLocal_159 = 0x00000000;
						}
						else
						{
							bVar39 = 0x00000000;
						}
					}
					if (!unk_0xEB880D98B5988D0C())
					{
					}
					else if (unk_0x68367101660E33F0())
					{
					}
					else
					{
						bVar39 = 0x00000000;
					}
					if (bVar39)
					{
						if (unk_0xC844350D5D58C99A(iLocal_168) && unk_0xDF1306B443CD3D15(iLocal_168, 0x00000000))
						{
							iVar41 = func_49(0x00000018);
							if (func_292(&Local_141, 0x00000018))
							{
								func_287(&Local_141, func_474());
								if (unk_0xC844350D5D58C99A(iVar41))
								{
									unk_0xA954465BA6FDEFE2(&iVar41);
								}
							}
							if (Local_56 == 0x00000015)
							{
								unk_0x536F1BE96C726C4B(-89.377f, 92.6583f, 71.2349f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
								unk_0xA47B46945FF6DE74(iLocal_168, -89.377f, 92.6583f, 71.2349f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iLocal_168, 154.4846f);
								func_285(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 0x00000018, 0x00000000);
							}
							else if (Local_56 == 0x00000016)
							{
								unk_0x536F1BE96C726C4B(-62.0307f, -1839.859f, 25.6787f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
								unk_0xA47B46945FF6DE74(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iLocal_168, 319.6985f);
								func_285(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 0x00000018, 0x00000000);
							}
							else if (Local_56 == 0x00000017)
							{
								unk_0x536F1BE96C726C4B(-234.7648f, -1150.311f, 21.9224f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
								unk_0xA47B46945FF6DE74(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iLocal_168, 270.8741f);
								func_285(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 0x00000018, 0x00000000);
							}
							unk_0xB9FD7450C0DAB575(iLocal_168, 0x40A00000);
						}
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
							{
								unk_0xA47B46945FF6DE74(iVar2, Local_83.f_42[0x00000001 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iVar2, Local_56.f_1D.f_4D[0x00000000]);
								unk_0xB9FD7450C0DAB575(iVar2, 0x40A00000);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									unk_0x626D5ADA3EFAE431(iVar2, 0x00000000);
								}
								else
								{
									unk_0x626D5ADA3EFAE431(iVar2, 0x00000001);
								}
								if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
								{
									unk_0x83F619A03CDDE284(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0xFFFFFFFF);
									unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 0x00000001);
								}
								unk_0x3E5CE368CD085FFA(iVar2, 0x00000001);
								func_235(func_474(), &iVar2, 0x00000003, 0x00000001);
							}
							unk_0x82E51BCA72537B6C(0x00000320);
							func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							func_293(&(Local_83[0x00000003 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
							iLocal_175 = 0x00000000;
							iLocal_177 = 0xFFFFFFFF;
							Local_56.f_3 = 0x0000000F;
						}
						else
						{
							unk_0x8D17794CE3273D70(sVar4);
							func_278();
							unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
							if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
							{
								unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
								unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
							}
							if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
							{
								unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
								unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
							}
							if (unk_0xC844350D5D58C99A(iLocal_178))
							{
								unk_0x20641932E5104B25(iLocal_178, 0x00000001, 0x00000000);
								unk_0x1E9649458B15960F(iLocal_178, 0x00000000);
								iLocal_178 = 0x00000000;
							}
							unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							unk_0x4C7B0415764B64BA(0x00000008);
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_56.f_1D.f_46[0x00000001 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_56.f_1D.f_4D[0x00000001]);
							unk_0x82E51BCA72537B6C(0x00000320);
							SYSTEM::SETTIMERA(0x00000000);
							func_281(198.0043f, -999.7775f, -100f, 50f, 0x00000000);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							Local_56.f_3 = 0x00000010;
						}
						if (Local_56.f_3 != 0x00000010)
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						}
						unk_0x8BCB70EB440DED83(0x00000000);
						unk_0xBFE31971E49FA500(0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 0x3F800000);
						iVar42 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
						iVar43 = 0x00000000;
						while (iVar43 < iVar42)
						{
							if ((unk_0xC844350D5D58C99A(uVar0[iVar43]) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar43])) && unk_0xBFDE4EE64C4BF2D6(uVar0[iVar43], unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if ((unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000)) && unk_0xD6DF381716822EFE(iVar2) > iVar43)
									{
										unk_0xF821F915BC24D246(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									unk_0x08841CDB215AE18F(uVar0[iVar43], Local_56.f_1D.f_46[0x00000001 /*3*/], 0x00000000, 0x00000000, 0x00000001);
								}
							}
							iVar43++;
						}
						unk_0x4C7B0415764B64BA(0x00000008);
						iLocal_174 = 0x00000000;
					}
				}
				break;
			
			case 0x0000000F:
				bVar44 = 0x00000001;
				if (!unk_0xEB880D98B5988D0C())
				{
				}
				else if (unk_0x68367101660E33F0())
				{
				}
				else
				{
					bVar44 = 0x00000000;
				}
				if (func_280())
				{
				}
				else
				{
					bVar44 = 0x00000000;
				}
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E) && unk_0x9CF8D5C7090408A2(Local_56.f_6E))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6E))
					{
						bVar44 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000003 /*15*/].f_E * 1000f))
					{
						bVar44 = 0x00000000;
					}
				}
				else if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F) && unk_0x9CF8D5C7090408A2(Local_56.f_6F))
				{
					if (unk_0xFA06B985B30FB0FC(Local_56.f_6F))
					{
						bVar44 = 0x00000000;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0x00000003 /*15*/].f_E * 1000f))
					{
						bVar44 = 0x00000000;
					}
				}
				else
				{
					bVar44 = 0x00000000;
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_270(unk_0x16F2683693E537C9(), Local_83.f_56[0x00000001 /*6*/], Local_83.f_42[0x00000001 /*3*/], ((Local_83[0x00000003 /*15*/].f_E * 1000f) - 500f), Local_83.f_49[0x00000002 /*4*/], 0x00000003, &fVar3);
				}
				if (iLocal_177 < 0x00000001 && func_234(unk_0x16F2683693E537C9(), 198.0043f, -999.7775f, -100f, 0x00000001) > 55f)
				{
					if (iLocal_177 == 0x00000000)
					{
						func_281(198.0043f, -999.7775f, -100f, 50f, 0x00000000);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					SYSTEM::SETTIMERA(0x00000000);
					Local_56.f_3 = 0x00000010;
				}
				else
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000010:
				bVar45 = 0x00000001;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_3D[0x00000003] * 1000f))
				{
					bVar45 = 0x00000000;
				}
				if (bVar45)
				{
					Local_56.f_3 = 0x00000011;
				}
				break;
			
			case 0x00000011:
				if (unk_0x31609A585163CBAC(Local_56.f_70))
				{
					unk_0x25BB71BA267FE042(Local_56.f_70);
				}
				StringCopy(&Global_9509, "", 32);
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				func_233(0x0000002F, 0x00000001);
				func_231(0x0000002F, 0x00000001);
				Global_126B1.f_241 = 0x00000000;
				if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
				{
					unk_0x82E51BCA72537B6C(0x000000FA);
				}
				SYSTEM::SETTIMERA(0x00000000);
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
				{
					unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
					unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
				}
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
				{
					unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
					unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
				}
				if (unk_0xC844350D5D58C99A(iLocal_178))
				{
					unk_0x20641932E5104B25(iLocal_178, 0x00000001, 0x00000000);
					unk_0x1E9649458B15960F(iLocal_178, 0x00000000);
					iLocal_178 = 0x00000000;
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
					{
						unk_0xA47B46945FF6DE74(iVar2, Local_83.f_49[0x00000002 /*4*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(iVar2, Local_83.f_49[0x00000002 /*4*/].f_3);
						unk_0xB9FD7450C0DAB575(iVar2, 0x40A00000);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 0x3F800000);
					}
				}
				unk_0x8BCB70EB440DED83(0x00000001);
				unk_0xBFE31971E49FA500(0x00000001);
				func_294(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				if (iLocal_155 > 0x00000000)
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iLocal_155, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
				}
				if (((unk_0xC844350D5D58C99A(iLocal_168) && unk_0xAF6690C489CC6203(iLocal_168)) && unk_0x9C77D2D0559097F0(iLocal_168, 0x00000000)) && iLocal_168 != func_49(0x00000018))
				{
					unk_0x046C362CF15F1935(&iLocal_168);
				}
				unk_0x0674E58A79778E99(&(Local_131.f_9), 0x00000019);
				iLocal_172 = 0x00000000;
				Local_56.f_3 = 0x00000012;
				break;
			
			case 0x00000012:
				if (unk_0x0F1CCD77290EE12F())
				{
					Local_56.f_3 = 0x00000000;
				}
				break;
		}
	}
	else
	{
		if (Global_126B1.f_241)
		{
			func_233(0x0000002F, 0x00000001);
			func_231(0x0000002F, 0x00000001);
			Global_126B1.f_241 = 0x00000000;
		}
		Local_56.f_3 = 0x00000000;
		if (iLocal_115 != 0xFFFFFFFF)
		{
			func_69(&iLocal_115);
		}
	}
	if (Global_126B1.f_241)
	{
		unk_0xE1F2A9D550245608();
		func_230();
		func_76(0x00000000);
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000009D, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000009E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000009F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000A0, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000A1, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000A2, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000A3, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000A4, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000A5, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000035, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000036, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000026, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000066, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	}
	if (!bVar1 && Local_56.f_2 == 0x00000000)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			if (!unk_0xEA6BC48857E0AC4C(&cLocal_165))
			{
				if ((((func_219("WEB_VEH_INV") || func_219("WEB_VEH_FULL")) || func_219("CAR_GAR_05")) || func_219("CAR_GAR_06")) || func_219("CAR_GAR_EXIT"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_230()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_231(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_232(iParam0) };
	if (Var0.f_1 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9158[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9158[Var0.f_1]), Var0);
	}
}

struct<2> func_232(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	Var3 = 0xFFFFFFFF;
	Var3.f_1 = 0xFFFFFFFF;
	while (iVar1 < 0x00000007)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_233(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_232(iParam0) };
	if (Var0.f_1 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9150[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9150[Var0.f_1]), Var0);
	}
}

float func_234(int iParam0, vector3 vParam1, bool bParam2)
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

void func_235(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0xC844350D5D58C99A(*iParam1)) && unk_0xDF1306B443CD3D15(*iParam1, 0x00000000))
	{
		if (iParam2 > Global_1B416.f_936.f_21B.f_967)
		{
			return;
		}
		if (iParam2 == 0x00000000)
		{
		}
		else if (iParam2 == 0x00000001)
		{
		}
		else if (iParam2 == 0x00000002)
		{
		}
		else if (iParam2 == 0x00000003)
		{
			func_31(*iParam1, iParam0);
		}
		if (unk_0x40B3F576B41FA183(*iParam1) != 0x00000000)
		{
			unk_0xF95FF0A179413A39(*iParam1, 0x00000000);
		}
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/] = unk_0x134B62B726CEC8E6(*iParam1);
		if (unk_0x565509D116400807(*iParam1, &iVar1))
		{
			Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x134B62B726CEC8E6(iVar1);
		}
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xA471721ED5268046(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x7F6DC62EA9922664(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000000] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000001);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000001] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000002);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000002] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000003);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000003] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000004);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000004] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000005);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000005] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000006);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000006] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000007);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000007] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000008);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000008] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000009);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000009] = unk_0xDD62D560CFE11A27(*iParam1, 0x0000000A);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x0000000A] = unk_0xDD62D560CFE11A27(*iParam1, 0x0000000B);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x0000000B] = unk_0xDD62D560CFE11A27(*iParam1, 0x0000000C);
		if (unk_0x587993B327460A82(*iParam1, 0x00000000))
		{
			iVar2 = unk_0x74A7D92E3874B5C7(*iParam1);
			if (iVar2 == 0x00000000 || iVar2 == 0x00000005)
			{
				Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0x00000001;
			}
			else
			{
				Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0x00000000;
			}
		}
		else
		{
			Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0x00000000;
		}
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_19 = unk_0xFC21F7E0F4D92523();
		StringCopy(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1B), unk_0x7888A5D2621AAF2D(*iParam1), 16);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1A = unk_0x4EB64970EC291A00(*iParam1);
		unk_0x9412F17E127D9759(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xD00EA977553939A7(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x4D842A28A29F18F6(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_54), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_55), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_56));
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_58 = unk_0x616632A7E7824A9A(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_57 = unk_0x214BEAD64D777E8F(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_59 = unk_0xF22DC2D0CA24A151(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5A = unk_0x8EF9B42D5496EC5A(*iParam1);
		unk_0xE04A80C505823410(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5D), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5E), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5F));
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001C);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001D);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001E);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001F);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001F);
		}
		Global_1B416.f_936.f_21B.f_10DD[iParam0] = 0x0000000A;
		if (unk_0x67303E186EA6C9A0(*iParam1) >= 0x00000000 && func_238(*iParam1, 0x00000000, &uVar0))
		{
			func_34(iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_51));
			if (bParam3)
			{
				Global_1B416.f_4E91[iParam0 /*43*/].f_28 = 0x00000001;
				Global_1B416.f_4E91[iParam0 /*43*/] = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/];
				Global_1B416.f_4E91[iParam0 /*43*/].f_3 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_57;
				Global_1B416.f_4E91[iParam0 /*43*/].f_4 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_54;
				Global_1B416.f_4E91[iParam0 /*43*/].f_5 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_55;
				Global_1B416.f_4E91[iParam0 /*43*/].f_6 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_56;
				Global_1B416.f_4E91[iParam0 /*43*/].f_A = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5A;
				Global_1B416.f_4E91[iParam0 /*43*/].f_10 = !Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_58;
				Global_1B416.f_4E91[iParam0 /*43*/].f_13 = { Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1B };
				Global_1B416.f_4E91[iParam0 /*43*/].f_17 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1A;
				Global_1B416.f_4E91[iParam0 /*43*/].f_7 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000B];
				Global_1B416.f_4E91[iParam0 /*43*/].f_8 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000C];
				Global_1B416.f_4E91[iParam0 /*43*/].f_9 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000017];
				Global_1B416.f_4E91[iParam0 /*43*/].f_B = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000004];
				Global_1B416.f_4E91[iParam0 /*43*/].f_C = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000F];
				Global_1B416.f_4E91[iParam0 /*43*/].f_D = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000010];
				Global_1B416.f_4E91[iParam0 /*43*/].f_E = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000E];
				Global_1B416.f_4E91[iParam0 /*43*/].f_F = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000016];
				Global_1B416.f_4E91[iParam0 /*43*/].f_12 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000014];
				Global_1B416.f_4E91[iParam0 /*43*/].f_11 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000012];
				Global_1B416.f_4E91[iParam0 /*43*/].f_18 = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000B) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_19 = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000C) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1A = unk_0x461CAC843A21E4B6(*iParam1, 0x00000004) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1B = unk_0x461CAC843A21E4B6(*iParam1, 0x00000017) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1C = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000E) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1D = unk_0x461CAC843A21E4B6(*iParam1, 0x00000010) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1E = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000F) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_20 = unk_0xBB3F1A6E0A9B6511(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000000] = unk_0xC34A9D742FC099DC(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000001] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000000);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000002] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000001);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000003] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000002);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000004] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000003);
				Global_1B416.f_4E91[iParam0 /*43*/].f_27 = unk_0xFF4012C9B4D4F728(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_1F = func_237(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000000] = unk_0x80A2B6C1AD8E56D5(*iParam1);
				unk_0xF3400BB226B5BB56(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0x00000000)
				{
					iVar3 = 0x00000000;
				}
				else if (iVar4 == 0x00000001)
				{
					iVar3 = 0x00000001;
				}
				else if (iVar4 == 0x00000003)
				{
					iVar3 = 0x00000002;
				}
				else if (iVar4 == 0x00000004)
				{
					iVar3 = 0x00000003;
				}
				else if (iVar4 == 0x00000005)
				{
					iVar3 = 0x00000004;
				}
				else
				{
					iVar3 = 0xFFFFFFFF;
				}
				func_236(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 0x00000001, &(Global_1B416.f_4E91[iParam0 /*43*/].f_1));
				unk_0xB0010FD150C8A58B(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0x00000000)
				{
					iVar3 = 0x00000000;
				}
				else if (iVar4 == 0x00000001)
				{
					iVar3 = 0x00000001;
				}
				else if (iVar4 == 0x00000003)
				{
					iVar3 = 0x00000002;
				}
				else if (iVar4 == 0x00000004)
				{
					iVar3 = 0x00000003;
				}
				else if (iVar4 == 0x00000005)
				{
					iVar3 = 0x00000004;
				}
				else
				{
					iVar3 = 0xFFFFFFFF;
				}
				func_236(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_6, 0xFFFFFFFF, iVar3, 0x00000000, &(Global_1B416.f_4E91[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_236(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (func_142(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == 0xFFFFFFFF) || iParam2 == 0x000000FF))
		{
			*uParam4 = iVar0;
			return 0x00000001;
		}
		iVar0++;
	}
	iParam0 = 0xFFFFFFFF;
	iParam1 = 0xFFFFFFFF;
	*uParam4 = 0xFFFFFFFF;
	return 0x00000000;
}

float func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 0x000186A0;
	iVar1 = 0x0000FDE8;
	iVar2 = 0x0000C350;
	iVar3 = 0x00004E20;
	iVar4 = 0x00004E20;
	iVar5 = iVar4;
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0x67303E186EA6C9A0(iParam0) >= 0x00000000)
	{
		if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000003)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000001)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000002)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000000)
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_238(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0x00000000;
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if ((!func_265(iVar0, bParam1, uParam2) && !func_264(unk_0xD803B885F5E47A62())) && !func_247(iParam0))
	{
		return 0x00000000;
	}
	if (func_264(unk_0xD803B885F5E47A62()))
	{
		if (func_246(iVar0))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	bVar1 = 0x00000000;
	if (func_245(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iVar0) || unk_0xC41A9202669A24C4(iVar0)))
	{
		bVar1 = 0x00000001;
	}
	if (((unk_0x56E1CD81AE700E98(iParam0) && !func_243(iParam0)) && !bVar1) && !(func_242(unk_0x134B62B726CEC8E6(iParam0)) && func_239(unk_0xD803B885F5E47A62())))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case 0xD039510B:
			case 0x287FA449:
			case 0x71D3B6F0:
			case 0x669EB40A:
			case 0x32174AFC:
			case 0xD556917C:
				*uParam2 = 0x00000010;
				break;
			
			default:
				*uParam2 = 0x00000002;
				break;
		}
		return 0x00000000;
	}
	if (!unk_0x8CD06866876216F2())
	{
		if ((func_62(iParam0) && unk_0x134B62B726CEC8E6(iParam0) != joaat("sentinel2")) && unk_0x134B62B726CEC8E6(iParam0) != joaat("issi2"))
		{
			*uParam2 = 0x00000002;
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_239(int iParam0)
{
	if (iParam0 != func_151())
	{
		if (func_241(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_240(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_240(int iParam0)
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

int func_241(int iParam0, bool bParam1, bool bParam2)
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

int func_242(int iParam0)
{
	if (((iParam0 == 0x73F4110E || iParam0 == 0x6290F15B) || iParam0 == 0x0D17099D) || iParam0 == 0x897AFC65)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_243(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 0xFE141DA6:
		case 0x0A90ED5C:
		case 0x171C92C4:
		case 0x5993F939:
		case 0x8FD54EBB:
		case 0x27D79225:
		case 0xBBA2A2F7:
		case 0x5BEB3CE0:
		case 0xDD71BFEB:
		case 0x9B065C9E:
		case 0x8644331A:
			return 0x00000001;
			break;
		
		case 0xD039510B:
		case 0x287FA449:
		case 0x71D3B6F0:
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (func_244(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
		
		case 0xB53C6C52:
		case joaat("burrito2"):
			return 0x00000001;
	}
	return 0x00000000;
}

int func_244(int iParam0)
{
	if (iParam0 != func_151())
	{
		if (func_241(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_240(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_245(int iParam0)
{
	if (iParam0 != func_151())
	{
		if (func_241(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_240(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0x81BD2ED0:
		case 0x58CDAF30:
		case 0x9B16A3B4:
		case 0xD6BC7523:
		case 0xAA6F980A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_247(int iParam0)
{
	if (func_263(unk_0xD803B885F5E47A62()) || func_262(unk_0xD803B885F5E47A62()))
	{
		if (func_248(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_248(int iParam0)
{
	if ((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_251(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
	{
		if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
		{
			if (func_249(iParam0))
			{
				return 0x00000001;
			}
			switch (unk_0x134B62B726CEC8E6(iParam0))
			{
				case 0x097E5533:
				case 0x19DD9ED1:
				case 0x586765FB:
				case 0x34DBA661:
				case 0x5D1903F9:
				case 0xE78CC3D9:
				case 0x35DED0DD:
				case 0xE8A8BA94:
				case 0x4ABEBF23:
				case 0x546D8EEE:
					return 0x00000001;
					break;
				}
			}
	}
	return 0x00000000;
}

int func_249(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_250(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0x2189D250:
		case 0x711D4738:
		case 0xFE141DA6:
		case 0x34B82784:
		case 0xB7D9F7F1:
		case 0x50D4D19F:
		case 0x8D4B7A8A:
		case 0xB5EF4C33:
		case 0xF34DFB25:
		case 0x79DD18AE:
		case 0xD9F0503D:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_251(int iParam0, bool bParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_253(unk_0x134B62B726CEC8E6(iParam0), 0x00000000))
			{
				if (Global_26B66F.f_12D == iParam0)
				{
					return 0x00000001;
				}
				else if (func_252(iParam0) != 0xFFFFFFFF && !bParam1)
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_252(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (Global_2537E2.f_274[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam1 == 0x00000000)
	{
		if (func_261(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_260();
			break;
		
		case joaat("sabregt"):
			if (Global_40001.f_378B)
			{
				return func_259();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_40001.f_378C)
			{
				return func_259();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_40001.f_378A)
			{
				return func_259();
			}
			break;
		
		case joaat("minivan"):
			if (Global_40001.f_378D)
			{
				return func_259();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_40001.f_378F)
			{
				return func_259();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_258();
			break;
		
		case joaat("comet2"):
			if (Global_40001.f_48ED)
			{
				return func_257();
			}
			break;
		
		case joaat("diablous"):
			if (Global_40001.f_48EF)
			{
				return func_257();
			}
			break;
		
		case joaat("fcr"):
			if (Global_40001.f_48F3)
			{
				return func_257();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_40001.f_48F0)
			{
				return func_257();
			}
			break;
		
		case joaat("nero"):
			if (Global_40001.f_48F7)
			{
				return func_257();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_40001.f_48F5)
			{
				return func_257();
			}
			break;
		
		case joaat("specter"):
			if (Global_40001.f_48FA)
			{
				return func_257();
			}
			break;
		
		case joaat("technical"):
			if (Global_40001.f_5091)
			{
				return func_256();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_40001.f_5092)
			{
				return func_256();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_255();
			break;
		
		case joaat("glendale"):
			if (func_255() || func_254())
			{
				return 0x00000001;
			}
			break;
		
		case 0x83070B62:
			return func_255();
			break;
		
		case 0x378236E1:
			return func_255();
			break;
		
		case joaat("gargoyle"):
			return func_255();
			break;
		
		case joaat("dominator"):
			return func_255();
			break;
		
		case joaat("dominator2"):
			return func_255();
			break;
		
		case 0x1A861243:
			return func_255();
			break;
		
		case 0x619C1B82:
			return func_255();
			break;
		
		case 0xD2F77E37:
			return func_255();
			break;
		
		case 0xFE5F0722:
			return func_255();
			break;
		
		case 0x93F09558:
			return func_255();
			break;
		
		case 0xAE12C99C:
			return func_255();
			break;
		
		case 0x3C26BD0C:
		case 0x7F81A829:
		case 0x27D79225:
		case 0x8526E2F5:
		case 0x256E92BA:
		case 0x669EB40A:
		case 0xBBA2A2F7:
		case 0xD039510B:
		case 0xD6FB0F30:
		case 0x20314B42:
		case 0x8D45DF49:
		case 0x8F49AE28:
		case 0x9B065C9E:
		case 0x163F8520:
		case 0x5BA0FF1E:
		case 0x32174AFC:
		case 0x5BEB3CE0:
		case 0x287FA449:
		case 0xAE0A3D4F:
		case 0xBE11EFC6:
		case 0x9804F4C7:
		case 0x798682A2:
		case 0x8644331A:
		case 0x67D52852:
		case 0x49E25BA1:
		case 0xD556917C:
		case 0xDD71BFEB:
		case 0x71D3B6F0:
		case 0xB2E046FB:
		case 0xA7DCC35C:
			return func_255();
			break;
		
		case joaat("youga2"):
			if (Global_40001.f_6F6C)
			{
				return func_254();
			}
			break;
		
		case 0x2B0C4DCD:
			if (Global_40001.f_70CA)
			{
				return func_254();
			}
			break;
		
		case joaat("manana"):
			if (Global_40001.f_6F6B)
			{
				return func_254();
			}
			break;
		
		case joaat("peyote"):
			if (Global_40001.f_70C9)
			{
				return func_254();
			}
			break;
		
		case 0x6F946279:
			if (Global_40001.f_70C8)
			{
				return func_254();
			}
			break;
	}
	return 0x00000000;
}

bool func_254()
{
	return unk_0xC146D5FBD23C6954(0x6C3AC5A8);
}

bool func_255()
{
	return unk_0xC146D5FBD23C6954(0x72DE9A30);
}

bool func_256()
{
	return unk_0xC146D5FBD23C6954(0x7B367103);
}

bool func_257()
{
	return unk_0xC146D5FBD23C6954(0xC6F11B25);
}

bool func_258()
{
	return unk_0xC146D5FBD23C6954(0x0C8638BD);
}

bool func_259()
{
	return unk_0xC146D5FBD23C6954(0x8F13E1D8);
}

bool func_260()
{
	return unk_0xC146D5FBD23C6954(0x61322A35);
}

int func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0x00000001;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x50D4D19F:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8D4B7A8A:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8526E2F5:
		case 0x163F8520:
		case 0x67D52852:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x256E92BA:
		case 0x5BA0FF1E:
		case 0x49E25BA1:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x3C26BD0C:
		case 0x8D45DF49:
		case 0x9804F4C7:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xFE5F0722:
		case 0x93F09558:
		case 0xAE12C99C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xD6FB0F30:
		case 0xAE0A3D4F:
		case 0xB2E046FB:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x27D79225:
		case 0x9B065C9E:
		case 0x8644331A:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x6B73A9BE:
		case 0x817AFAAD:
		case 0x0409D787:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x665F785D:
		case 0x4201A843:
		case 0xC98BBAD6:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_262(int iParam0)
{
	if (iParam0 != func_151())
	{
		if (func_241(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_151())
			{
				return func_240(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_263(int iParam0)
{
	if (iParam0 != func_151())
	{
		if (func_241(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_151())
			{
				return func_240(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_264(int iParam0)
{
	if (iParam0 != func_151())
	{
		if (func_241(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_240(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_265(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 0x00000001;
			return 0x00000000;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 0x73920F8E) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	bVar0 = 0x00000000;
	if (func_245(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0)))
	{
		bVar0 = 0x00000001;
	}
	if ((((((((((((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 0x5993F939) && iParam0 != 0x8FD54EBB) && iParam0 != 0x36A167E0) && iParam0 != 0x11F58A5A) && !bVar0)
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_266(iParam0))
		{
			*uParam2 = 0x00000002;
			return 0x00000000;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 0x00000002;
		}
	}
	return 0x00000001;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_267()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (iVar0 == Global_126B1.f_1E4[0x00000015])
			{
				return 0x00000015;
			}
			if (iVar0 == Global_126B1.f_1E4[0x0000001A])
			{
				return 0x0000001A;
			}
			if (iVar0 == Global_126B1.f_1E4[0x0000001D])
			{
				return 0x0000001D;
			}
			if (iVar0 == Global_126B1.f_1E4[0x00000020])
			{
				return 0x00000020;
			}
			if (iVar0 == Global_126B1.f_1E4[0x00000016])
			{
				return 0x00000016;
			}
			if (iVar0 == Global_126B1.f_1E4[0x0000001B])
			{
				return 0x0000001B;
			}
			if (iVar0 == Global_126B1.f_1E4[0x0000001E])
			{
				return 0x0000001E;
			}
			if (iVar0 == Global_126B1.f_1E4[0x00000021])
			{
				return 0x00000021;
			}
			if (iVar0 == Global_126B1.f_1E4[0x00000017])
			{
				return 0x00000017;
			}
			if (iVar0 == Global_126B1.f_1E4[0x0000001C])
			{
				return 0x0000001C;
			}
			if (iVar0 == Global_126B1.f_1E4[0x0000001F])
			{
				return 0x0000001F;
			}
			if (iVar0 == Global_126B1.f_1E4[0x00000022])
			{
				return 0x00000022;
			}
		}
	}
	return 0xFFFFFFFF;
}

bool func_268()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_269(int iParam0)
{
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && iParam0 == Global_12A3A)
	{
		Global_1B416.f_7FE8.f_15D4 = 0x00000000;
		Global_12A3A = 0x00000000;
	}
}

int func_270(int iParam0, struct<4> Param1, var uParam2, var uParam3, vector3 vParam4, float fParam5, struct<4> Param6, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { Param1 };
	vVar1 = { Param1.f_3 };
	vVar2 = { vParam4 };
	vVar3 = { Param1.f_3 };
	if (iLocal_174 == 0x00000000)
	{
		iVar4 = unk_0x6937EA2286828455(iParam0, 0x00000000);
		iLocal_178 = iVar4;
		unk_0x05CA0E7946B27A19(iLocal_178, 0x00000001);
		unk_0x71EDC33E5A423750(iLocal_178, 0x00000001);
		unk_0xB9FD7450C0DAB575(iLocal_178, 0x40A00000);
		unk_0x56FDC9ADE35F7DB0(iLocal_178, 0x00000001, 0x00000001, 0x00000000);
		if (unk_0x7A649D473D0B6339(iParam0))
		{
			unk_0x83F619A03CDDE284(iParam0, 0x00000000, 0x00000000, 0xFFFFFFFF);
			unk_0xCC095276B3DD380E(iParam0, 0x00000001);
		}
		vVar5 = { unk_0x68F4C0EC296D3901(iLocal_178, 0x00000001) };
		fLocal_179 = (vVar5.z - vVar0.z);
		unk_0xA47B46945FF6DE74(iLocal_178, vVar0 + Vector(-10f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		if (unk_0xDF1306B443CD3D15(iLocal_178, 0x00000000))
		{
			unk_0x0882E3DC0C991680(iLocal_178, 0x00000003);
		}
		iLocal_180 = unk_0x1C0640BA9A7327B3();
		iLocal_174 = 0x00000001;
	}
	if (iLocal_174 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iLocal_178) && unk_0xDF1306B443CD3D15(iLocal_178, 0x00000000))
		{
			fVar6 = SYSTEM::TO_FLOAT(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_277(SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 0x00000001)
			{
				fVar8 = func_276(fVar8);
			}
			else if (iParam7 == 0x00000002)
			{
				fVar8 = func_275(fVar8);
			}
			else if (iParam7 == 0x00000003)
			{
				fVar8 = func_273(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
			unk_0x08841CDB215AE18F(iLocal_178, func_271(vVar0 + Vector(fLocal_179, 0f, 0f), vVar2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), 0x00000000, 0x00000000, 0x00000001);
			if (iLocal_175 && !unk_0x7A649D473D0B6339(iParam0))
			{
				unk_0xC023D1C4BF532815(iLocal_178, func_271((0f - vVar1.x), (0f - vVar1.y), (vVar1.z + 180f), (0f - vVar3.x), (0f - vVar3.y), (vVar3.z + 180f), fVar6, fVar7, fVar8), 0x00000002, 0x00000001);
			}
			else
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					if (unk_0x7A649D473D0B6339(iParam0))
					{
						unk_0x9DD8618CA5BF832D(iParam0, 0x000000EC, 0x00000001);
						unk_0x9DD8618CA5BF832D(iParam0, 0x00000135, 0x00000001);
					}
				}
				unk_0xC023D1C4BF532815(iLocal_178, func_271(vVar1, vVar3, fVar6, fVar7, fVar8), 0x00000002, 0x00000001);
			}
			unk_0x20641932E5104B25(iLocal_178, 0x00000000, 0x00000000);
			unk_0x1E9649458B15960F(iLocal_178, 0x00000001);
		}
		else
		{
			iLocal_174 = 0x00000002;
			return 0x00000000;
		}
		if (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) > (SYSTEM::TO_FLOAT(iLocal_180) + fParam5) && SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) > ((SYSTEM::TO_FLOAT(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 0x00000002;
			return 0x00000000;
		}
	}
	if (iLocal_174 == 0x00000002)
	{
		unk_0x9DD8618CA5BF832D(iParam0, 0x000000EC, 0x00000000);
		unk_0x9DD8618CA5BF832D(iParam0, 0x00000135, 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0x00000000))
			{
				unk_0xA47B46945FF6DE74(iLocal_178, Param6, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(iLocal_178, Param6.f_3);
				unk_0xB9FD7450C0DAB575(iLocal_178, 0x40A00000);
			}
			unk_0x20641932E5104B25(iLocal_178, 0x00000001, 0x00000000);
			unk_0x1E9649458B15960F(iLocal_178, 0x00000000);
			iLocal_178 = 0x00000000;
		}
		if (unk_0x7A649D473D0B6339(iParam0))
		{
			unk_0xE731059548189243(iParam0, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_271(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4)
{
	return func_272(vParam0.x, vParam1.x, fParam2, fParam3, fParam4), func_272(vParam0.y, vParam1.y, fParam2, fParam3, fParam4), func_272(vParam0.z, vParam1.z, fParam2, fParam3, fParam4);
}

float func_272(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_273(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_274(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_274(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_275(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_274(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_276(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_274((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_277(float fParam0, float fParam1, float fParam2)
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

void func_278()
{
	Global_126B1.f_229 = 0x00000001;
	Global_126B1.f_22A = 0x00000000;
}

void func_279(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar2 = uParam0;
		iVar1 = (0x00000009 + (iVar2 - 0x00000015));
		if (iVar0 > 0x00000000)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((0x00000009 + (iVar2 - 0x00000015)) - 0x00000002);
		}
		iLocal_49[iVar2] = Global_1B416.f_7FE8.f_45[iVar1 /*78*/].f_42;
		if (iLocal_49[iVar2] != 0x00000000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uLocal_48[iVar2], 0x00000002))
			{
				unk_0x523BCC9DC80CD82F(iLocal_49[iVar2]);
				unk_0x5D96D8530B3D0904(&(uLocal_48[iVar2]), 0x00000002);
				func_478(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_280()
{
	return !Global_126B1.f_229;
}

void func_281(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_282(iVar0);
			}
		}
		iVar0++;
	}
}

void func_282(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			bVar0 = 0x00000001;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_8B[iParam0], 0x00000000))
					{
						bVar0 = 0x00000000;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
				unk_0xA954465BA6FDEFE2(&(Global_126B1.f_8B[iParam0]));
			}
		}
		Global_126B1[iParam0] = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			if (((((iParam0 == 0x00000018 && func_67(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_283(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_283(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_116(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_480(iParam0, 0x00000000);
		}
	}
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iParam0 < 0x00000000 || iParam0 >= func_284(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_39(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_284(var uParam0)
{
	return *uParam0;
}

void func_285(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (iParam3 != 0x00000018 && iParam3 != 0x00000019)
		{
			return;
		}
		if (iParam3 == 0x00000018)
		{
			if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000019]) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000019], 0x00000000))
			{
				if (Global_126B1.f_1E4[0x00000019] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x56E1CD81AE700E98(iParam0) || unk_0x134B62B726CEC8E6(iParam0) == joaat("bus")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_286(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_32(iParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			fParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
		if (iParam3 == 0x00000018)
		{
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != joaat("vehicle_gen_controller"))
			{
				Global_12A8D = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
			}
		}
		func_115(iParam3, &Var0, vParam1, fParam2, func_46(iParam0));
		func_30(iParam3, iParam0, 0x00000000);
	}
}

void func_286(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_117(iParam0);
	func_480(iParam0, 0x00000000);
}

int func_287(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_38(uParam0->f_42))
	{
		return 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(Global_12A3B))
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
		
		default:
			return 0x00000000;
			break;
	}
	if (!func_283(0x00000000, iParam1))
	{
		Global_1B416.f_7FE8.f_15D8[iVar0] = 0x00000000;
	}
	else if (!func_283(0x00000001, iParam1))
	{
		Global_1B416.f_7FE8.f_15D8[iVar0] = 0x00000001;
	}
	func_288(iParam1, unk_0x1739BA50603D849C(uParam0->f_42));
	func_116(uParam0, &(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][Global_1B416.f_7FE8.f_15D8[iVar0] /*78*/]));
	Global_1B416.f_7FE8.f_15D8[iVar0]++;
	if (Global_1B416.f_7FE8.f_15D8[iVar0] >= func_284(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		Global_1B416.f_7FE8.f_15D8[iVar0] = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_17F64[iVar0 /*98*/] == uParam0->f_42 && unk_0x7F8A39872A07D2CE(&(Global_17F64[iVar0 /*98*/].f_1B), &(uParam0->f_1)))
		{
			Global_17F64[iVar0 /*98*/] = 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_288(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_1B416.f_7FE8.f_15DC[iParam0])
	{
		switch (iParam0)
		{
			case 0x00000000:
				func_289("IMPOUND_HELPM", sParam1, 0x00000002, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770), 0xFFFFFFFF, 0x00002710, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				func_289("IMPOUND_HELPF", sParam1, 0x00000002, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770), 0xFFFFFFFF, 0x00002710, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000002:
				func_289("IMPOUND_HELPT", sParam1, 0x00000002, unk_0x09AC81E49EA267F7(0x000003E8, 0x00001770), 0xFFFFFFFF, 0x00002710, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
		}
		Global_1B416.f_7FE8.f_15DC[iParam0] = 0x00000001;
	}
}

void func_289(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_290(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_290(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_291();
	}
}

void func_291()
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

int func_292(var uParam0, int iParam1)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam1))
	{
		return 0x00000000;
	}
	else
	{
		func_116(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), uParam0);
	}
	return 0x00000001;
}

int func_293(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam1))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam1, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(*uParam2))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam2, 0x00000000);
	}
	*uParam1 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
	*uParam2 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
	if (unk_0x9F4FE516EAACCFC5(*uParam1) && unk_0x9F4FE516EAACCFC5(*uParam2))
	{
		unk_0x608A456FDD8A83D8(*uParam1, *uParam0);
		unk_0x5F3CBA6EB9341C90(*uParam1, uParam0->f_3, 0x00000002);
		unk_0x5818C8D5303DCCF8(*uParam1, uParam0->f_C);
		unk_0x608A456FDD8A83D8(*uParam2, uParam0->f_6);
		unk_0x5F3CBA6EB9341C90(*uParam2, uParam0->f_6.f_3, 0x00000002);
		unk_0x5818C8D5303DCCF8(*uParam2, uParam0->f_C);
		unk_0x91F5B0244AAE6222(*uParam1, "HAND_SHAKE", uParam0->f_D);
		unk_0x91F5B0244AAE6222(*uParam2, "HAND_SHAKE", uParam0->f_D);
		if (uParam0->f_E > 0.1f)
		{
			unk_0xF1E4C781086FABC1(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_E * 1000f)), 0x00000001, 0x00000001);
		}
		else
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam1, 0x00000001);
		}
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_294(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_299(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_78())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_298(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_299(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_298(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_296(unk_0xD803B885F5E47A62())) && !func_93(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_295()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_296(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_295()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_296(int iParam0)
{
	if (func_93(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_297())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_297()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_298(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_299(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000D);
	}
}

int func_300(int iParam0)
{
	func_61(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 0x00000015:
			if (Global_126B1.f_22B[0x00000000 /*21*/].f_4 == 0x00000000)
			{
				return iParam0;
			}
			if (!func_301(0x0000001A))
			{
				return 0x0000001A;
			}
			if (!func_301(0x0000001D))
			{
				return 0x0000001D;
			}
			if (!func_301(0x00000020))
			{
				return 0x00000020;
			}
			break;
		
		case 0x00000016:
			if (Global_126B1.f_22B[0x00000000 /*21*/].f_4 == 0x00000000)
			{
				return iParam0;
			}
			if (!func_301(0x0000001B))
			{
				return 0x0000001B;
			}
			if (!func_301(0x0000001E))
			{
				return 0x0000001E;
			}
			if (!func_301(0x00000021))
			{
				return 0x00000021;
			}
			break;
		
		case 0x00000017:
			if (Global_126B1.f_22B[0x00000000 /*21*/].f_4 == 0x00000000)
			{
				return iParam0;
			}
			if (!func_301(0x0000001C))
			{
				return 0x0000001C;
			}
			if (!func_301(0x0000001F))
			{
				return 0x0000001F;
			}
			if (!func_301(0x00000022))
			{
				return 0x00000022;
			}
			break;
	}
	return 0xFFFFFFFF;
}

bool func_301(int iParam0)
{
	return func_67(iParam0, 0x00000000);
}

void func_302(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0x00000000;
	sVar0 = func_304(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_231(iParam0, 0x00000001);
				return;
			}
		}
		else
		{
			if (!unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_303(iParam0))
			{
				func_231(iParam0, 0x00000000);
			}
		}
		unk_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_303(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_232(iParam0) };
	if (Var0.f_1 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_9158[Var0.f_1], Var0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_304(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_305(iParam0) };
	*iParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_305(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000001:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000002:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000003:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000004:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000005:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000006:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000007:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000008:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 0x00000009:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 0x0000000A:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 0x0000000B:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000C:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000D:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000E:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000F:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000010:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000011:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000012:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000013:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000014:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000017:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000015:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000018:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000019:
			vVar1 = { func_306(0x00000001, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 0x0000001A:
			vVar1 = { func_306(0x00000002, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 0x0000001B:
			vVar1 = { func_306(0x00000003, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 0x0000001C:
			vVar1 = { func_306(0x00000004, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 0x0000001D:
			vVar1 = { func_306(0x00000005, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 0x0000001E:
			vVar1 = { func_306(0x00000006, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 0x0000001F:
			vVar1 = { func_306(0x00000007, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 0x00000020:
			Var0 = { Global_100542[0x00000022 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 0x00000021:
			vVar1 = { func_306(0x00000023, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 0x00000022:
			vVar1 = { func_306(0x00000024, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 0x00000023:
			vVar1 = { func_306(0x00000025, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 0x00000024:
			vVar1 = { func_306(0x00000026, 0x00000000) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 0x00000025:
			vVar1 = { func_306(0x00000027, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 0x00000026:
			vVar1 = { func_306(0x00000028, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 0x00000027:
			vVar1 = { func_306(0x00000029, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 0x00000028:
			vVar1 = { func_306(0x0000002A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 0x00000029:
			vVar1 = { func_306(0x0000002B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 0x0000002A:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 0x0000002B:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 0x0000002C:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 0x00000031:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 0x00000032:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 0x00000033:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 0x00000034:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 0x00000035:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 0x00000036:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 0x00000037:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 0x00000038:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 0x00000039:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 0x0000003A:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 0x0000002D:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 0x0000002E:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 0x0000002F:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000030:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003C:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003D:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003E:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003F:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000040:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000041:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000042:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000043:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000044:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000045:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000046:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000047:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000048:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000049:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004A:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004B:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004C:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004D:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004E:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004F:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000050:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000051:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000052:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000053:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000054:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000055:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000056:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000057:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000058:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000059:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005A:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005B:
			vVar1 = { func_306(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005C:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005D:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005E:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005F:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000060:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000061:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000062:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000063:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000064:
			vVar1 = { func_306(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000065:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000066:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000067:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000068:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000069:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006A:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006B:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006C:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006D:
			vVar1 = { func_306(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006E:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006F:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000070:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000071:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000072:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000073:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000074:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000075:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000076:
			vVar1 = { func_306(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000077:
			vVar1 = { func_306(0x0000005B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000078:
			vVar1 = { func_306(0x00000061, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000079:
			vVar1 = { func_306(0x00000067, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007A:
			vVar1 = { func_306(0x00000068, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007B:
			vVar1 = { func_306(0x00000069, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007C:
			vVar1 = { func_306(0x0000006A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007D:
			vVar1 = { func_306(0x0000006B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007E:
			vVar1 = { func_306(0x0000006C, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007F:
			vVar1 = { func_306(0x0000006D, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000080:
			vVar1 = { func_306(0x0000006E, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000081:
			vVar1 = { func_306(0x0000006F, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000082:
			vVar1 = { func_306(0x00000070, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000083:
			vVar1 = { func_306(0x00000071, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000084:
			vVar1 = { func_306(0x00000072, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000085:
			vVar1 = { func_306(0x00000067, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000086:
			vVar1 = { func_306(0x0000006A, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000087:
			vVar1 = { func_306(0x0000006D, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000088:
			vVar1 = { func_306(0x00000070, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000089:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008A:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008B:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008C:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008D:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008E:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008F:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000090:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000091:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000092:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000093:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000094:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000095:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000096:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000097:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000098:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000099:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009A:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009B:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009C:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009D:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009E:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009F:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A0:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A1:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A2:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A3:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A4:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A5:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A6:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A7:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A8:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A9:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AA:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AB:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AC:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AD:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AE:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AF:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B0:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B1:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B2:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B3:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B4:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B5:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B6:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B7:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B8:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B9:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BA:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BB:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BC:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BD:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BE:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BF:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C0:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C1:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C2:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C3:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C4:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 0x000000C5:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C6:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C7:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C8:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C9:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CA:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CB:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CC:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CD:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CE:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CF:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D0:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D1:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D2:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D3:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D4:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D5:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_306(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000001:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000002:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000003D:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000005:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000006:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 0x00000007:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000022:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x0000003E:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000023:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 0x00000024:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 0x00000025:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 0x00000026:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000027:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000041:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 0x00000028:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 0x00000029:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 0x0000003F:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 0x0000002A:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000002B:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000049:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 0x0000004A:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 0x0000004B:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 0x0000004C:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 0x0000004D:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 0x0000004E:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 0x0000004F:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 0x00000050:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 0x00000051:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000052:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 0x00000053:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000054:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000055:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000056:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000057:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 0x00000058:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 0x00000059:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 0x0000005A:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000067:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000068:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000069:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x0000006A:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006B:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006C:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006D:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006E:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006F:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x00000070:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000071:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000072:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_307(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0x00000000;
	sVar0 = func_304(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0x00000000)
	{
		if (bParam1 && !unk_0x3C4C57B70481C643(iVar1))
		{
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_233(iParam0, 0x00000001);
				return;
			}
			unk_0xE9C847D3387E544A(iVar1, 0x00000001);
		}
		else if (!bParam1 && unk_0x3C4C57B70481C643(iVar1))
		{
			if (func_308(iParam0))
			{
				func_233(iParam0, 0x00000000);
			}
			unk_0xE9C847D3387E544A(iVar1, 0x00000000);
		}
		else if (!bParam1)
		{
			if (func_308(iParam0))
			{
				func_233(iParam0, 0x00000000);
			}
		}
	}
}

int func_308(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_232(iParam0) };
	if (Var0.f_1 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_9150[Var0.f_1], Var0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_309()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || func_300(Local_56) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_310(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 0x00000001;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000015:
		case 0x0000001A:
		case 0x0000001D:
		case 0x00000020:
			return 0x00000000;
			break;
		
		case 0x00000017:
		case 0x0000001C:
		case 0x0000001F:
		case 0x00000022:
			return 0x00000002;
			break;
		
		case 0x00000016:
		case 0x0000001B:
		case 0x0000001E:
		case 0x00000021:
			return 0x00000001;
			break;
	}
	return 0x00000091;
}

int func_312(int iParam0, var uParam1)
{
	uParam1->f_49[0x00000001 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_49[0x00000001 /*4*/].f_3 = 285f;
	*(uParam1[0x00000002 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[0x00000002 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[0x00000002 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[0x00000002 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[0x00000002 /*15*/])->f_C = 25.2218f;
	(uParam1[0x00000002 /*15*/])->f_D = 0.2f;
	(uParam1[0x00000002 /*15*/])->f_E = 3.5f;
	uParam1->f_3D[0x00000002] = 0f;
	switch (iParam0)
	{
		case 0x00000015:
			*(uParam1[0x00000000 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0x00000000 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0x00000000 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0x00000000 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0x00000000 /*15*/])->f_C = 25.1687f;
			(uParam1[0x00000000 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000000 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0x00000000] = 0f;
			uParam1->f_49[0x00000000 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_49[0x00000000 /*4*/].f_3 = 345f;
			*(uParam1[0x00000001 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[0x00000001 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[0x00000001 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[0x00000001 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[0x00000001 /*15*/])->f_C = 29.9579f;
			(uParam1[0x00000001 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000001 /*15*/])->f_E = 3f;
			uParam1->f_3D[0x00000001] = 1f;
			uParam1->f_42[0x00000000 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_56[0x00000000 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_56[0x00000000 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[0x00000003 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[0x00000003 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[0x00000003 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[0x00000003 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[0x00000003 /*15*/])->f_C = 30.0324f;
			(uParam1[0x00000003 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000003 /*15*/])->f_E = 3f;
			uParam1->f_3D[0x00000003] = 1f;
			uParam1->f_56[0x00000001 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_56[0x00000001 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_42[0x00000001 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_49[0x00000002 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_49[0x00000002 /*4*/].f_3 = 150f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*(uParam1[0x00000000 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0x00000000 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0x00000000 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0x00000000 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0x00000000 /*15*/])->f_C = 25.1856f;
			(uParam1[0x00000000 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000000 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0x00000000] = 0f;
			uParam1->f_49[0x00000000 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_49[0x00000000 /*4*/].f_3 = 140f;
			*(uParam1[0x00000001 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[0x00000001 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[0x00000001 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[0x00000001 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[0x00000001 /*15*/])->f_C = 29.9864f;
			(uParam1[0x00000001 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000001 /*15*/])->f_E = 3f;
			uParam1->f_3D[0x00000001] = 1f;
			uParam1->f_42[0x00000000 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_56[0x00000000 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_56[0x00000000 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[0x00000003 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[0x00000003 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[0x00000003 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[0x00000003 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[0x00000003 /*15*/])->f_C = 28.4803f;
			(uParam1[0x00000003 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000003 /*15*/])->f_E = 4f;
			uParam1->f_3D[0x00000003] = 1f;
			uParam1->f_56[0x00000001 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_56[0x00000001 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_42[0x00000001 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_49[0x00000002 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_49[0x00000002 /*4*/].f_3 = 317.3589f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*(uParam1[0x00000000 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0x00000000 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0x00000000 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0x00000000 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0x00000000 /*15*/])->f_C = 40.0015f;
			(uParam1[0x00000000 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000000 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0x00000000] = 0f;
			uParam1->f_49[0x00000000 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_49[0x00000000 /*4*/].f_3 = 15f;
			*(uParam1[0x00000001 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[0x00000001 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[0x00000001 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[0x00000001 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[0x00000001 /*15*/])->f_C = 30.0319f;
			(uParam1[0x00000001 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000001 /*15*/])->f_E = 4f;
			uParam1->f_3D[0x00000001] = 1f;
			uParam1->f_42[0x00000000 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_56[0x00000000 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_56[0x00000000 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[0x00000003 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[0x00000003 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[0x00000003 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[0x00000003 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[0x00000003 /*15*/])->f_C = 30f;
			(uParam1[0x00000003 /*15*/])->f_D = 0.2f;
			(uParam1[0x00000003 /*15*/])->f_E = 3f;
			uParam1->f_3D[0x00000003] = 1f;
			uParam1->f_56[0x00000001 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_56[0x00000001 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_42[0x00000001 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_49[0x00000002 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_49[0x00000002 /*4*/].f_3 = 0f;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_313()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

void func_314()
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || func_27(0x00000000)) || func_27(0x00000003)) || func_27(0x00000002)) || func_27(0x00000004)) || func_27(0x0000000E)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_12061)
	{
		if (Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143] != 0xFFFFFFF1)
		{
			if (!Global_126B1[Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143]])
			{
				if (func_368(func_50(), Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143]))
				{
					iVar0 = Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/][iLocal_143];
					func_366(iVar0, iLocal_143, iLocal_129);
					func_61(&Var1, Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143]);
					if (Var1.f_4 == 0x00000000)
					{
					}
					else
					{
						func_480(Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143], 0x00000001);
					}
					Global_1B416.f_7FE8.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143] = 0xFFFFFFF1;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 0x00000138)
		{
			iLocal_143 = 0x00000000;
		}
	}
	if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) != Local_56.f_7 || Local_56.f_2 == 0x00000063)
	{
		if (Local_56.f_5 != 0xFFFFFFFF)
		{
			func_69(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0x00000000)
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		Local_56.f_7 = unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
		Local_56.f_5 = 0xFFFFFFFF;
		Local_56.f_2 = 0x00000000;
		Local_56.f_4 = 0x00000000;
		if (bLocal_142)
		{
			if (unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
			{
				unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
			}
			if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
			{
				unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
			}
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 0x00000000);
			}
			iVar2 = unk_0x728870EB733D12A1();
			if (unk_0xC844350D5D58C99A(iVar2) && unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
			{
				unk_0x4A4806F9D471E491(iVar2, 0x00000001, 0x00000000);
				unk_0x1E9649458B15960F(iVar2, 0x00000000);
				if (unk_0x9C77D2D0559097F0(iVar2, 0x00000001))
				{
					unk_0x046C362CF15F1935(&iVar2);
				}
			}
			iVar3 = 0x00001388;
			iVar4 = unk_0x1C0640BA9A7327B3();
			while (!unk_0x19C7D1907D1DDDAB() && (unk_0x1C0640BA9A7327B3() - iVar4) < iVar3)
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (unk_0x31609A585163CBAC(Local_56.f_70))
			{
				unk_0x25BB71BA267FE042(Local_56.f_70);
			}
			StringCopy(&Global_9509, "", 32);
			if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
			{
				func_307(0x0000002F, 0x00000001);
				func_302(0x0000002F, 0x00000001);
			}
			unk_0x486B4ADE317F0689();
			unk_0x066C43E677C08D5C();
			unk_0x8BCB70EB440DED83(0x00000001);
			unk_0xBFE31971E49FA500(0x00000001);
			func_294(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			bLocal_142 = 0x00000000;
			Global_7930 = 0x00000000;
		}
	}
	bVar5 = 0x00000000;
	if ((((((((((((!bLocal_142 && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && !Local_56.f_1D.f_45)) || (!unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))) || (!bLocal_142 && func_67(Local_56, 0x00000005))) || (!bLocal_142 && unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C7))) || (!bLocal_142 && unk_0x798A3F1296751F46())) || !func_364(0x00000000)) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9())) || unk_0x7ED67A9BE53DAC95(unk_0x16F2683693E537C9())) || Global_78C6) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x36646919F20EAFFC(unk_0x16F2683693E537C9())))
	{
		if (Local_56.f_2 > 0x00000000 && Local_56.f_2 != 0x0000005A)
		{
			iLocal_157 = 0x00000001;
			Local_56.f_2 = 0x00000063;
		}
		bVar5 = 0x00000001;
	}
	fVar7 = 20f;
	iVar8 = 0x00000003;
	switch (Local_56.f_2)
	{
		case 0x00000000:
			if ((((Local_56 != 0xFFFFFFFF && func_67(Local_56, 0x00000000)) && !func_67(Local_56, 0x00000005)) && !bLocal_158) && !bVar5)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0x00000000, 0x00000001, 0x00000000) && !unk_0xFEBC1E4EC9E001F0())
				{
					Var6 = { Local_56.f_1D.f_3F };
					StringConCat(&Var6, "_01", 16);
					func_220(&(Local_56.f_5), 0x00000003, &Var6, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					Local_56.f_2 = 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			if (func_215(Local_56.f_5, 0x00000001))
			{
				if (func_363(iLocal_129) < Local_56.f_1D.f_43)
				{
					Local_56.f_4 = unk_0x1C0640BA9A7327B3();
					func_69(&(Local_56.f_5));
					iLocal_126 = 0x00000000;
					Local_56.f_2 = 0x0000005A;
				}
				else
				{
					iLocal_126 = 0x00000000;
					Local_56.f_4 = unk_0x1C0640BA9A7327B3();
					func_69(&(Local_56.f_5));
					Local_56.f_2 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_126++;
			if (iLocal_126 >= 0x00000003)
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_02", 16);
				func_220(&(Local_56.f_5), 0x00000003, &Var6, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				Local_56.f_2 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (func_215(Local_56.f_5, 0x00000001))
			{
				if (func_363(iLocal_129) < Local_56.f_1D.f_43)
				{
					Local_56.f_4 = unk_0x1C0640BA9A7327B3();
					Local_56.f_2 = 0x0000005A;
				}
				else
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 0x00000001);
					bLocal_142 = 0x00000000;
					if ((Local_56 == 0x0000000F || Local_56 == 0x00000011) || Local_56 == 0x00000010)
					{
						Local_57.f_4 = 0x00000072;
						bLocal_142 = 0x00000001;
					}
					else if (Local_56 == 0x00000012 || Local_56 == 0x00000013)
					{
						Local_57.f_4 = 0x00000074;
						bLocal_142 = 0x00000001;
					}
					else if (Local_56 == 0x0000000C || Local_56 == 0x0000000D)
					{
						Local_57.f_4 = 0x00000073;
						bLocal_142 = 0x00000001;
					}
					else if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
					{
						Local_57.f_4 = 0x00000075;
						bLocal_142 = 0x00000001;
					}
					Local_57 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0x00000000;
					Local_57.f_3 = 0x00000000;
					Local_57.f_2 = 0x00000000;
					iLocal_144 = 0x00000001;
					Global_7930 = 0x00000001;
					if (bLocal_142)
					{
						if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
						{
							func_307(0x0000002F, 0x00000000);
							func_302(0x0000002F, 0x00000000);
							Local_56.f_70 = unk_0x0D1736C2E221BCEA(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0x31609A585163CBAC(Local_56.f_70))
							{
								if (!unk_0xBD307E66C0669BFC(Local_56.f_70))
								{
									unk_0x0007C2367F4F23F3(Local_56.f_70);
								}
								StringCopy(&Global_9509, "v_garagem_sp", 32);
							}
						}
						unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
						unk_0x486B4ADE317F0689();
						Local_56.f_4 = unk_0x1C0640BA9A7327B3();
						Local_56.f_2 = 0x00000004;
					}
					else
					{
						Local_56.f_2 = 0x00000008;
					}
					func_69(&(Local_56.f_5));
				}
			}
			break;
		
		case 0x00000004:
			bVar10 = 0x00000001;
			if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
			{
				Local_56.f_70 = unk_0x0D1736C2E221BCEA(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0x31609A585163CBAC(Local_56.f_70) || unk_0x3C4C57B70481C643(Local_56.f_70)) || unk_0x13CCE7704923A895(Local_56.f_70))
				{
					func_307(0x0000002F, 0x00000000);
					func_302(0x0000002F, 0x00000000);
					bVar10 = 0x00000000;
				}
			}
			if (bVar10)
			{
				if (Local_56 == 0x0000000C)
				{
					fVar7 = 95f;
					iVar8 = 0x00000002;
				}
				else if (Local_56 == 0x0000000D)
				{
					fVar7 = 150f;
					iVar8 = 0x00000002;
				}
				else if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
				{
					fVar7 = 150f;
					iVar8 = 0x00000002;
				}
				vVar9 = { SYSTEM::COS((Local_56.f_1D.f_E.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_E.f_3.f_2 + 90f)), 0f };
				if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
				{
					if (unk_0x9E632F16E887F781(200.4651f, -1020.631f, -100f, 50f, 0x00000000) || (unk_0x1C0640BA9A7327B3() - Local_56.f_4) > 0x00000DAC)
					{
						Local_56.f_4 = unk_0x1C0640BA9A7327B3();
						Local_56.f_2 = 0x00000005;
					}
				}
				else if (unk_0xD67D6A3F0D653D93(Local_56.f_1D.f_E, vVar9, fVar7, iVar8) || (unk_0x1C0640BA9A7327B3() - Local_56.f_4) > 0x00000DAC)
				{
					Local_56.f_4 = unk_0x1C0640BA9A7327B3();
					Local_56.f_2 = 0x00000005;
				}
			}
			break;
		
		case 0x00000005:
			if (((unk_0xEB880D98B5988D0C() && unk_0x68367101660E33F0()) && (!unk_0x31609A585163CBAC(Local_56.f_70) || unk_0xBD307E66C0669BFC(Local_56.f_70))) || (unk_0x1C0640BA9A7327B3() - Local_56.f_4) > 0x00002710)
			{
				Local_56.f_4 = unk_0x1C0640BA9A7327B3();
				Local_56.f_2 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if ((unk_0x1C0640BA9A7327B3() - Local_56.f_4) > 0x000003E8)
			{
				if ((unk_0xC844350D5D58C99A(iLocal_168) && unk_0xAF6690C489CC6203(iLocal_168)) && unk_0x9C77D2D0559097F0(iLocal_168, 0x00000001))
				{
					unk_0x046C362CF15F1935(&iLocal_168);
				}
				iLocal_168 = unk_0x728870EB733D12A1();
				if ((((unk_0xC844350D5D58C99A(iLocal_168) && unk_0xDF1306B443CD3D15(iLocal_168, 0x00000000)) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_168))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iLocal_168))) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iLocal_168)))
				{
					if (!unk_0xAF6690C489CC6203(iLocal_168))
					{
						unk_0x73270B3C9CC833FD(iLocal_168, 0x00000000, 0x00000000);
					}
				}
				else
				{
					iLocal_168 = 0x00000000;
				}
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000010);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000020);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000080);
					unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 0x00000001);
				}
				func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(0x00000001);
				vVar9 = { SYSTEM::COS((Local_56.f_1D.f_E.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_E.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_1D.f_45)
				{
					unk_0xF49D1BC9EF1C3EF4(Local_56.f_1D.f_E, vVar9);
				}
				if (!unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
				{
					Local_56.f_6E = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000001);
				}
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
				{
					if (Local_56.f_1D.f_45)
					{
						unk_0xB8842F7C7761A196("GtaMloRoom001");
					}
					func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					func_293(&(Local_56.f_1D.f_E), &(Local_56.f_6E), &(Local_56.f_6F));
				}
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x8BCB70EB440DED83(0x00000000);
				unk_0xBFE31971E49FA500(0x00000000);
				unk_0x486B4ADE317F0689();
				Local_56.f_2 = 0x00000007;
				Local_56.f_4 = unk_0x1C0640BA9A7327B3();
				func_69(&(Local_56.f_5));
			}
			break;
		
		case 0x00000007:
			if ((unk_0x1C0640BA9A7327B3() - Local_56.f_4) < 0x00001B58 && !func_361(0x000003E8))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_05", 16);
				func_218(&Var6, 0xFFFFFFFF);
				if (!unk_0xEB880D98B5988D0C())
				{
					if (Local_56 == 0x0000000C || Local_56 == 0x0000000D)
					{
						fVar7 = 85f;
						iVar8 = 0x00000002;
					}
					vVar9 = { SYSTEM::COS((Local_56.f_1D.f_1D.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_1D.f_2 + 90f)), 0f };
					unk_0xD67D6A3F0D653D93(Local_56.f_1D.f_1D, vVar9, fVar7, iVar8);
				}
			}
			else
			{
				if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
				{
					if (Local_56.f_1D.f_45)
					{
						unk_0xB8842F7C7761A196("GtaMloRoom001");
					}
					func_294(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					func_293(&(Local_56.f_1D.f_1D), &(Local_56.f_6E), &(Local_56.f_6F));
				}
				unk_0x066C43E677C08D5C();
				unk_0xA37A90C62806D848(0x00000001);
				Local_56.f_4 = unk_0x1C0640BA9A7327B3();
				Local_56.f_2 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if ((unk_0x1C0640BA9A7327B3() - Local_56.f_4) < 0x00001B58 && !func_361(0x000003E8))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_06", 16);
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_218(&Var6, 0x00001B58);
				}
			}
			else
			{
				unk_0xA37A90C62806D848(0x00000001);
				Local_56.f_4 = unk_0x1C0640BA9A7327B3();
				Local_56.f_2 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			if ((unk_0x1C0640BA9A7327B3() - Local_56.f_4) < 0x00000DAC && !func_361(0x000003E8))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_03", 16);
				if (unk_0x83D8570832F172A7(Local_57))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "UNDER_THE_BRIDGE", "HUD_AWARDS", 0x00000001);
							Local_57.f_3 = 0x00000001;
						}
						unk_0x6567AE843FADBA94(Local_57, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x7E60C62A7CE58FC8(Local_57, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_91(&Var6);
						unk_0x7A8BB56B212464AC();
						Local_57.f_1 = 0x00000001;
					}
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() - Local_56.f_4) < 0x00000FA0 && !func_361(0x000003E8))
			{
				if (unk_0x83D8570832F172A7(Local_57))
				{
					if (Local_57.f_2)
					{
						unk_0x6567AE843FADBA94(Local_57, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x7E60C62A7CE58FC8(Local_57, "SHARD_ANIM_OUT");
						unk_0x3CAEA85DA607305E(0x00000001);
						unk_0x7C19E5E4784BD7CF(0.33f);
						unk_0x7E60D21B163E9D56();
						Local_57.f_2 = 0x00000001;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
					}
					if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
					{
						unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
					}
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
					iVar11 = unk_0x728870EB733D12A1();
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 0x00000000);
						if ((unk_0xC844350D5D58C99A(iVar11) && unk_0xDF1306B443CD3D15(iVar11, 0x00000000)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar11, 0x00000000))
						{
							unk_0xA47B46945FF6DE74(iVar11, Local_56.f_1D.f_2C, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iVar11, Local_56.f_1D.f_2F);
							unk_0xB9FD7450C0DAB575(iVar11, 0x40A00000);
						}
						else
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_56.f_1D.f_2C, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_56.f_1D.f_2F);
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_168) && unk_0xDF1306B443CD3D15(iLocal_168, 0x00000000))
					{
						iVar12 = func_49(0x00000018);
						if (func_292(&Local_141, 0x00000018))
						{
							func_287(&Local_141, func_474());
							if (unk_0xC844350D5D58C99A(iVar12))
							{
								unk_0xA954465BA6FDEFE2(&iVar12);
							}
						}
						if (Local_56 == 0x00000015)
						{
							unk_0x536F1BE96C726C4B(-89.377f, 92.6583f, 71.2349f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iLocal_168, -89.377f, 92.6583f, 71.2349f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iLocal_168, 154.4846f);
							func_285(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 0x00000018, 0x00000000);
						}
						else if (Local_56 == 0x00000016)
						{
							unk_0x536F1BE96C726C4B(-62.0307f, -1839.859f, 25.6787f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iLocal_168, 319.6985f);
							func_285(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 0x00000018, 0x00000000);
						}
						else if (Local_56 == 0x00000017)
						{
							unk_0x536F1BE96C726C4B(-234.7648f, -1150.311f, 21.9224f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iLocal_168, 270.8741f);
							func_285(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 0x00000018, 0x00000000);
						}
						unk_0xB9FD7450C0DAB575(iLocal_168, 0x40A00000);
					}
					if (unk_0xC844350D5D58C99A(iVar11) && unk_0xDF1306B443CD3D15(iVar11, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iVar11, 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(iVar11, 0x00000000);
						if (unk_0x9C77D2D0559097F0(iVar11, 0x00000001))
						{
							unk_0x046C362CF15F1935(&iVar11);
						}
					}
					iVar13 = 0x00001388;
					iVar14 = unk_0x1C0640BA9A7327B3();
					while (!unk_0x19C7D1907D1DDDAB() && (unk_0x1C0640BA9A7327B3() - iVar14) < iVar13)
					{
						SYSTEM::WAIT(0x00000000);
					}
					if (unk_0x31609A585163CBAC(Local_56.f_70))
					{
						unk_0x25BB71BA267FE042(Local_56.f_70);
					}
					StringCopy(&Global_9509, "", 32);
					if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
					{
						func_307(0x0000002F, 0x00000001);
						func_302(0x0000002F, 0x00000001);
						Global_1B416.f_7FE8.f_12C0 = 0x00000001;
					}
					unk_0x486B4ADE317F0689();
					unk_0x066C43E677C08D5C();
					unk_0x8BCB70EB440DED83(0x00000001);
					unk_0xBFE31971E49FA500(0x00000001);
					func_294(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					bLocal_142 = 0x00000000;
					Global_7930 = 0x00000000;
				}
				if (unk_0x83D8570832F172A7(Local_57))
				{
					unk_0xE17FDF9E3068281B(&Local_57);
				}
				func_331(iLocal_129, Local_57.f_4, Local_56.f_1D.f_43);
				func_330(Local_56, 0x00000005, 0x00000001);
				func_317(Local_56);
				if (unk_0xE4EDC4B0E92C078B(Global_126B1.f_D0[Local_56]))
				{
					unk_0x142CC44DB769B57E(&(Global_126B1.f_D0[Local_56]));
				}
				iLocal_151 = Local_56;
				func_316();
				Local_56.f_2 = 0x00000063;
			}
			break;
		
		case 0x0000005A:
			iLocal_126++;
			if (iLocal_126 >= 0x00000003)
			{
				if ((unk_0x1C0640BA9A7327B3() - Local_56.f_4) < 0x00000FA0)
				{
					Var6 = { Local_56.f_1D.f_3F };
					StringConCat(&Var6, "_04", 16);
					func_315(&Var6);
				}
				else
				{
					Local_56.f_2 = 0x00000063;
				}
			}
			break;
	}
}

void func_315(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_316()
{
	if (func_228(0x00000000))
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

void func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 0x00000015:
			iVar0 = 0x00000014;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000016:
			iVar0 = 0x00000015;
			iVar1 = 0x0000009C;
			break;
		
		case 0x00000017:
			iVar0 = 0x00000016;
			iVar1 = 0x0000009D;
			break;
		
		case 0x0000000C:
			iVar0 = 0x0000000D;
			iVar1 = 0x00000039;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000010;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000013;
			iVar1 = 0x0000003F;
			break;
		
		case 0x0000000F:
			iVar0 = 0x0000000C;
			iVar1 = 0x00000038;
			break;
		
		case 0x00000010:
			iVar0 = 0x0000000F;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000011:
			iVar0 = 0x00000012;
			iVar1 = 0x0000003D;
			break;
		
		case 0x00000012:
			iVar0 = 0x0000000B;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000013:
			iVar0 = 0x0000000E;
			iVar1 = 0x0000003A;
			break;
	}
	func_329(iVar0, 0x00000000);
	iVar2 = func_328(iVar0, iVar1, 0x00000001);
	if (iVar2 != 0x00000000)
	{
	}
	else
	{
		func_327(iVar0);
		if (func_325(iVar0, iVar1, 0x00000001))
		{
			func_318(iVar0);
			func_327(iVar0);
		}
	}
}

void func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_324(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	iVar1 = Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/];
	iVar2 = (Global_CACB[iVar0 /*203*/].f_9 - 0x00000001);
	if (!Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_323(Global_A677[iVar4 /*12*/].f_1)}, 0x00000004);
	}
	else
	{
		Var3 = { Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 0x0000001C)
	{
		switch (iVar1)
		{
			case 0x000000F9:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 0x0000010D:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_319(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, sVar5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		switch (Global_A677[iVar1 /*12*/].f_3)
		{
			case 0x00000000:
				func_319(0x00000000, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000001:
				func_319(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000002:
				func_319(0x00000002, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			}
	}
}

void func_319(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_474();
	bVar1 = 0x00000000;
	StringCopy(&cVar2, func_322(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 0x00000048:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			
			case 0x00000049:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			
			case 0x0000004A:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x1E64CE678ED5F61E(sParam3);
				if (!unk_0xEA6BC48857E0AC4C(sParam4))
				{
					unk_0x6B012227B3921E18(sParam4);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam5))
				{
					unk_0x6B012227B3921E18(sParam5);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam6))
				{
					unk_0x6B012227B3921E18(sParam6);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x6B012227B3921E18(sParam7);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam8))
				{
					unk_0x6B012227B3921E18(sParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam9))
				{
					unk_0x6B012227B3921E18(sParam9);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam10))
				{
					unk_0x6B012227B3921E18(sParam10);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam11))
				{
					unk_0x6B012227B3921E18(sParam11);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam12))
				{
					unk_0x6B012227B3921E18(sParam12);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam13))
				{
					unk_0x6B012227B3921E18(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_320(unk_0x1AEA174B291A9906(&cVar2, &cVar2, 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_321(iParam1)), 0x00000000));
		}
		else
		{
			func_320(unk_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_321(iParam1)), 0x00000000));
		}
		switch (Global_4C1E)
		{
			case 0x00000000:
				StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
				Global_A66F++;
				if (Global_A66F > 0x00000010)
				{
					Global_A66F = 0x00000010;
				}
				break;
			
			case 0x00000002:
				StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
				Global_A671++;
				if (Global_A671 > 0x00000010)
				{
					Global_A671 = 0x00000010;
				}
				break;
			
			case 0x00000001:
				StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
				Global_A670++;
				if (Global_A670 > 0x00000010)
				{
					Global_A670 = 0x00000010;
				}
				break;
			
			default:
				StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Notification", &Global_4C13, 0x00000001);
	}
}

void func_320(var uParam0)
{
	Global_A672[Global_A676] = uParam0;
	Global_5567 = 0x00000001;
	Global_5566 = uParam0;
	Global_A676++;
	if (Global_A676 == 0x00000003)
	{
		Global_A676 = 0x00000000;
	}
}

char* func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "EMSTR_0";
		
		case 0x00000003:
			return "EMSTR_3";
		
		case 0x00000001:
			return "EMSTR_6";
		
		case 0x00000002:
			return "EMSTR_9";
		
		case 0x00000004:
			return "EMSTR_12";
		
		case 0x00000005:
			return "EMSTR_29";
		
		case 0x00000006:
			return "EMSTR_36";
		
		case 0x00000007:
			return "EMSTR_39";
		
		case 0x00000008:
			return "EMSTR_52";
		
		case 0x00000009:
			return "EMSTR_55";
		
		case 0x0000000A:
			return "EMSTR_58";
		
		case 0x0000000B:
			return "EMSTR_78";
		
		case 0x0000000C:
			return "EMSTR_81";
		
		case 0x0000000D:
			return "EMSTR_84";
		
		case 0x0000000E:
			return "EMSTR_87";
		
		case 0x0000000F:
			return "EMSTR_106";
		
		case 0x00000010:
			return "EMSTR_114";
		
		case 0x00000011:
			return "EMSTR_142";
		
		case 0x00000012:
			return "EMSTR_145";
		
		case 0x00000013:
			return "EMSTR_152";
		
		case 0x00000014:
			return "EMSTR_157";
		
		case 0x00000015:
			return "EMSTR_163";
		
		case 0x00000016:
			return "EMSTR_182";
		
		case 0x00000017:
			return "EMSTR_187";
		
		case 0x00000018:
			return "EMSTR_190";
		
		case 0x00000019:
			return "EMSTR_206";
		
		case 0x0000001A:
			return "EMSTR_219";
		
		case 0x0000001B:
			return "EMSTR_226";
		
		case 0x0000001C:
			return "EMSTR_233";
		
		case 0x0000001D:
			return "EMSTR_242";
		
		case 0x0000001E:
			return "EMSTR_249";
		
		case 0x0000001F:
			return "EMSTR_262";
		
		case 0x00000020:
			return "EMSTR_269";
		
		case 0x00000021:
			return "EMSTR_319";
		
		case 0x00000022:
			return "EMSTR_340";
		
		case 0x00000023:
			return "EMSTR_348";
		
		case 0x00000024:
			return "EMSTR_182";
		
		case 0x00000025:
			return "EMSTR_357";
		
		case 0x00000026:
			return "EMSTR_360";
		
		case 0x00000027:
			return "EMSTR_369";
		
		case 0x00000028:
			return "EMSTR_376";
		
		case 0x00000029:
			return "EMSTR_379";
		
		case 0x0000002A:
			return "EMSTR_382";
		
		case 0x0000002B:
			return "EMSTR_384";
		
		case 0x0000002C:
			return "EMSTR_387";
		
		case 0x0000002D:
			return "EMSTR_390";
		
		case 0x0000002E:
			return "EMSTR_393";
		
		case 0x0000002F:
			return "EMSTR_396";
		
		case 0x00000030:
			return "EMSTR_399";
		
		case 0x00000031:
			return "EMSTR_402";
		
		case 0x00000032:
			return "EMSTR_405";
		
		case 0x00000033:
			return "EMSTR_408";
		
		case 0x00000034:
			return "EMSTR_411";
		
		case 0x00000035:
			return "EMSTR_414";
		
		case 0x00000036:
			return "EMSTR_465";
		
		case 0x00000037:
			return "EMSTR_468";
		
		case 0x00000038:
			return "EMSTR_489";
		
		case 0x00000039:
			return "EMSTR_492";
		
		case 0x0000003A:
			return "EMSTR_495";
		
		case 0x0000003B:
			return "EMSTR_498";
		
		case 0x0000003C:
			return "EMSTR_501";
		
		case 0x0000003D:
			return "EMSTR_504";
		
		case 0x0000003E:
			return "EMSTR_507";
		
		case 0x0000003F:
			return "EMSTR_640";
		
		case 0x00000040:
			return "EMSTR_643";
		
		case 0x00000041:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_322(int iParam0, int iParam1)
{
	*iParam1 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000000 /*29*/].f_7));
		
		case 0x00000001:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000001 /*29*/].f_7));
		
		case 0x00000002:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000002 /*29*/].f_7));
		
		case 0x00000007:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000C /*29*/].f_7));
		
		case 0x00000004:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003C /*29*/].f_7));
		
		case 0x00000006:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003E /*29*/].f_7));
		
		case 0x00000003:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000E /*29*/].f_7));
		
		case 0x00000010:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000061 /*29*/].f_7));
		
		case 0x00000013:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000063 /*29*/].f_7));
		
		case 0x0000000F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000060 /*29*/].f_7));
		
		case 0x0000003F:
			return "CHAR_CARSITE2";
		
		case 0x00000040:
			return "CHAR_BOATSITE";
		
		case 0x00000008:
			return "CHAR_BANK_MAZE";
		
		case 0x00000009:
			return "CHAR_BANK_FLEECA";
		
		case 0x0000000A:
			return "CHAR_BANK_BOL";
		
		case 0x00000015:
			return "CHAR_MINOTAUR";
		
		case 0x00000019:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000F /*29*/].f_7));
		
		case 0x0000001A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000001E /*29*/].f_7));
		
		case 0x0000001B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000011 /*29*/].f_7));
		
		case 0x0000001D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000014 /*29*/].f_7));
		
		case 0x0000001E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002B /*29*/].f_7));
		
		case 0x0000001F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002C /*29*/].f_7));
		
		case 0x00000020:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000013 /*29*/].f_7));
		
		case 0x00000022:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000028 /*29*/].f_7));
		
		case 0x00000024:
			return unk_0x19C9F30A7697B43C("CELL_E_381");
		
		case 0x00000026:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000040 /*29*/].f_7));
		
		case 0x00000005:
			return "CHAR_EPSILON";
		
		case 0x0000000D:
			return "CHAR_MILSITE";
		
		case 0x0000000B:
			return "CHAR_CARSITE";
		
		case 0x0000000E:
			return "CHAR_BOATSITE";
		
		case 0x0000000C:
			return "CHAR_PLANESITE";
		
		case 0x00000018:
			return "CHAR_DR_FRIEDLANDER";
		
		case 0x00000037:
			return "CHAR_CARSITE2";
		
		case 0x00000036:
			return "CHAR_BIKESITE";
		
		case 0x00000027:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007A /*29*/].f_7));
		
		case 0x00000028:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007D /*29*/].f_7));
		
		case 0x00000029:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000071 /*29*/].f_7));
		
		case 0x0000002A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007E /*29*/].f_7));
		
		case 0x0000002B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007F /*29*/].f_7));
		
		case 0x0000002C:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007C /*29*/].f_7));
		
		case 0x0000002D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000072 /*29*/].f_7));
		
		case 0x0000002E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000073 /*29*/].f_7));
		
		case 0x0000002F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000074 /*29*/].f_7));
		
		case 0x00000030:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007B /*29*/].f_7));
		
		case 0x00000031:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000075 /*29*/].f_7));
		
		case 0x00000032:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000076 /*29*/].f_7));
		
		case 0x00000033:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000077 /*29*/].f_7));
		
		case 0x00000034:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000078 /*29*/].f_7));
		
		case 0x00000035:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000079 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0x00000000;
	return "ERROR!";
}

struct<16> func_323(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_324(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (Global_CACB[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_CACB[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_CACB[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != 0xFFFFFFFF && iVar2 != 0xFFFFFFFF)
	{
		return iVar1;
	}
	return 0xFFFFFFFF;
}

int func_325(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_329(iParam0, 0x00000001);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000004)
	{
		return 0x00000000;
	}
	Global_CACB[iVar0 /*203*/].f_2 = iParam0;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/].f_1 = 0x00000000;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/].f_6 = 0x00000000;
	Global_CACB[iVar0 /*203*/].f_9++;
	iVar1 = 0x00000000;
	iVar2 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 0xFFFFFFFF)
		{
			if (Global_CACB[iVar0 /*203*/].f_4[iVar1] == Global_A677[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_3 == 0x00000004)
		{
			return 0x00000000;
		}
		else
		{
			Global_CACB[iVar0 /*203*/].f_4[Global_CACB[iVar0 /*203*/].f_3] = Global_A677[iParam1 /*12*/].f_3;
			Global_CACB[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0x00000000;
	iVar2 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 0xFFFFFFFF)
		{
			if (Global_CACB[iVar0 /*203*/].f_4[iVar1] == Global_A677[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_3 == 0x00000004)
		{
			return 0x00000000;
		}
		else
		{
			Global_CACB[iVar0 /*203*/].f_4[Global_CACB[iVar0 /*203*/].f_3] = Global_A677[iParam1 /*12*/].f_2;
			Global_CACB[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_CACB[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 0x00000003)
		{
			func_326(Global_CACB[iVar0 /*203*/].f_4[iVar1], Global_CACB[iVar0 /*203*/].f_1, 0x00000001, bParam2, 0x00000000);
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_326(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 0x00000003)
	{
		return;
	}
	iVar0 = 0xFFFFFFFF;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_B374[iParam1 /*46*/].f_2A - 0x00000001);
		if (iVar4 < 0x00000000)
		{
			return;
		}
		iVar5 = Global_B374[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_323(Global_A677[iVar5 /*12*/].f_1) };
		if (Global_A677[iVar5 /*12*/].f_2 == iParam0 && !Global_A677[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_A677[iVar5 /*12*/].f_2;
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar6 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar6 = 0x00000001;
		}
		if (bVar6)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar7 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar7 = 0x00000001;
		}
		if (bVar7)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		iVar8 = 0xFFFFFFFF;
		iVar9 = 0x00000000;
		iVar9 = 0x00000000;
		while (iVar9 < 0x00000007)
		{
			if (Global_CACB[iVar9 /*203*/].f_1 == iParam1 && Global_CACB[iVar9 /*203*/].f_9 > 0x00000000)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == 0xFFFFFFFF)
		{
			return;
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = Global_CACB[iVar8 /*203*/].f_1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = (Global_CACB[iVar8 /*203*/].f_9 - 0x00000001);
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000001;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
		iVar10 = Global_C961[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_CACB[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_A677[iVar11 /*12*/].f_2;
		if (Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_2}, 0x00000010);
		}
		else
		{
			Var3 = { func_323(Global_A677[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_C961[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0x00000000:
					func_319(0x00000000, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					if (iVar2 == 0x000000F9)
					{
						func_319(0x00000001, iVar1, iVar2, "PW_FEED_EM_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_319(0x00000001, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					func_319(0x00000002, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				}
			}
	}
}

void func_327(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000001A)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, (0x00000004 - 0x00000001)))
		{
			return;
		}
	}
	iVar0 = func_324(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_CACB[iVar0 /*203*/] = 0x00000000;
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_D059 == 0x00000008)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_CACB[iVar1 /*203*/].f_1 > 0x00000000)
			{
				iVar0 = Global_CACB[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		if (Global_D05A[iVar1 /*53*/].f_34 == 0x00000000)
		{
			Global_D05A[iVar1 /*53*/].f_34 = iVar0;
			Global_D05A[iVar1 /*53*/] = iParam0;
			Global_D05A[iVar1 /*53*/].f_1 = iParam1;
			Global_D05A[iVar1 /*53*/].f_2 = iParam2;
			Global_1B416.f_5228.f_136++;
			if (Global_1B416.f_5228.f_136 == 0x00000000)
			{
				Global_1B416.f_5228.f_136 = 0x00000001;
			}
			Global_D05A[iVar1 /*53*/].f_A = 0x00000000;
			Global_D05A[iVar1 /*53*/].f_3 = Global_1B416.f_5228.f_136;
			Global_D05A[iVar1 /*53*/].f_4 = 0x00000001;
			Global_D059++;
			return Global_D05A[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_324(iParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_9 < 0x00000004)
		{
			return iVar0;
		}
	}
	iVar1 = 0x00000000;
	bVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/] == 0x00000000)
		{
			bVar2 = 0x00000001;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0xFFFFFFFF;
	}
	bVar3 = 0x00000001;
	iVar1 = 0x00000000;
	iVar4 = 0xFFFFFFFF;
	iVar5 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/] == 0x00000000)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_CACB[iVar1 /*203*/].f_1;
				bVar3 = 0x00000000;
			}
			else if (iVar5 > Global_CACB[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_CACB[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_CACB[iVar4 /*203*/].f_9 > 0x00000000)
	{
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < Global_CACB[iVar4 /*203*/].f_9)
		{
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x00000003)
			{
				iVar7 = Global_C961[iVar6 /*120*/];
				if (iVar7 > 0x00000010)
				{
					iVar7 = 0x00000010;
				}
				iVar8 = 0x00000000;
				iVar8 = 0x00000000;
				while (iVar8 < iVar7)
				{
					if (Global_C961[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_C961[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_C961[iVar6 /*120*/].f_12[iVar8] == Global_CACB[iVar4 /*203*/].f_1)
							{
								if (Global_C961[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0x00000000:
											Global_A66F = (Global_A66F - 0x00000001);
											break;
										
										case 0x00000001:
											Global_A670 = (Global_A670 - 0x00000001);
											break;
										
										case 0x00000002:
											Global_A671 = (Global_A671 - 0x00000001);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_CACB[iVar4 /*203*/].f_2 = iParam0;
	Global_CACB[iVar4 /*203*/].f_3 = 0x00000000;
	if (!bParam1)
	{
		Global_CACB[iVar4 /*203*/] = 0x00000001;
	}
	Global_1B416.f_5228.f_136++;
	if (Global_1B416.f_5228.f_136 == 0x00000000)
	{
		Global_1B416.f_5228.f_136 = 0x00000001;
	}
	Global_CACB[iVar4 /*203*/].f_1 = Global_1B416.f_5228.f_136;
	Global_CACB[iVar4 /*203*/].f_9 = 0x00000000;
	return iVar4;
}

void func_330(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	if (func_360(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_360(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_332(func_360(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_332(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_359();
	if (iParam3 < 0x00000001)
	{
		return 0x00000000;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					func_358(0x00000063, 0x00000001);
					func_357(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_357(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_357(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_342(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_341(0x00000005))
					{
						fVar0 = 0.9f;
						iVar1 = 0x00000005;
					}
					break;
				
				case 0x0000003F:
				case 0x00000040:
				case 0x00000041:
				case 0x00000042:
				case 0x00000043:
				case 0x00000044:
					switch (iParam0)
					{
						case 0x00000000:
							func_357(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_357(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_357(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_341(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_357(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_357(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_357(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_357(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_357(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_357(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 0x00000063:
				case 0x00000064:
				case 0x00000065:
				case 0x00000066:
				case 0x00000068:
				case 0x00000069:
				case 0x0000006A:
				case 0x0000006B:
				case 0x0000006C:
				case 0x0000006D:
				case 0x0000006E:
				case 0x0000006F:
				case 0x00000070:
				case 0x00000071:
					switch (iParam0)
					{
						case 0x00000000:
							func_357(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_357(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_357(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_357(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_357(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_357(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_357(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_357(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_357(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_341(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_357(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_357(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_357(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_357(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_357(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_357(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_340(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_358(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_358(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_358(0x00000060, iParam3);
					break;
			}
			func_358(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_335(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_335(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 0x00000001:
			if (Global_E53E[iVar2] >= 0x00000000 && iParam3 > 0x00000000)
			{
				if (iVar5 <= 0x00000000)
				{
					Global_E53E[iVar2] = 0x7FFFFFFF;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0x00000000:
					func_357(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_357(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_357(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0x00000000:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0x00000000)
				{
					return 0x00000000;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 0x00000001)
	{
		if (iVar4 > 0x00000014)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 0x0000000A)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
		}
	}
	func_334(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_333(0x00000000);
	}
	return 0x00000001;
}

void func_333(bool bParam0)
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

void func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 0x00000001);
			break;
	}
}

void func_335(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_339(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_339(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_339(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_339(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_338(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_338(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_338(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_338(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_338(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_338(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	bVar0 = 0x00000000;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = 0x00000001;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_337() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_337() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_336(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "COUP_HAIRC";
		
		case 0x00000001:
			return "COUP_TATTOO";
		
		case 0x00000002:
			return "COUP_WARSTOCK";
		
		case 0x00000003:
			return "COUP_MOSPORT";
		
		case 0x00000004:
			return "COUP_ELITAS";
		
		case 0x00000005:
			return "COUP_MEDSPENS";
		
		case 0x00000006:
			return "COUP_SPRUNK";
		
		case 0x00000007:
			return "COUP_RESPRAY";
		
		case 0x00000008:
			return "COUP_XMAS2017";
		
		case 0x00000009:
			return "COUP_CAR_XMAS2018";
		
		case 0x0000000A:
			return "COUP_HELI_XMAS2018";
		
		case 0x0000000B:
			return "COUP_CAR2_XMAS2018";
		
		case 0x0000000C:
			return "COUP_CAS_ELITAS";
		
		case 0x0000000D:
			return "COUP_CAS_DOCKTEASE";
		
		case 0x0000000E:
			return "COUP_CAS_MOSPORT";
		
		case 0x0000000F:
			return "COUP_CAS_SSASA";
		
		case 0x00000010:
			return "COUP_CAS_WARSTOCK";
		
		case 0x00000011:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_337()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_167(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_339(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_95();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_340(int iParam0)
{
	func_358(0x0000005D, iParam0);
	func_358(0x0000001D, iParam0);
	func_358(0x0000001E, iParam0);
}

bool func_341(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 0x00000008)
	{
		return func_170(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_170(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_170(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_170(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_166(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_166(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_166(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_166(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_166(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_166(0x00002052, 0xFFFFFFFF, 0x00000000);
		if (iVar11 == 0x00000000 || iVar10 >= iVar11)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_337() /*10930*/].f_181E.f_A, iParam0);
}

int func_342(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (unk_0x5E109EC687D2605A(0x0000001B))
	{
		return 0x00000000;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 0xFFFFFFFF);
	if (iVar1 > 0x00000000 && (iVar2 / 0x001E8480) != (iVar1 / 0x001E8480))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 0x00000001);
		func_356(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_343(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_343(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_344(iParam0, iParam1);
}

int func_344(int iParam0, int iParam1)
{
	if (func_27(0x0000000E) && !func_355(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_7929 != 0x00000000 && !Global_12B4E)
	{
		return 0x00000000;
	}
	if (func_354(&Global_4127F1))
	{
		if (func_352(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_345(&Global_4127F1, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0x00000000;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_345(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_27(0x0000000E) && !func_355(iParam1))
	{
		return 0x00000000;
	}
	if (func_352(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_351(uParam0) < 0f)
	{
		func_350(uParam0, 0x00000000);
	}
	func_348(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_346(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_346(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_27(0x0000000E) && !func_355(iParam1))
	{
		return 0x00000000;
	}
	if (func_352(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_351(uParam0) < 0f)
	{
		func_350(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_347(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_347(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_348(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_349(uParam0, iVar0);
		iVar0++;
	}
	func_350(uParam0, (Global_4127F0 - 0.5f));
}

void func_349(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_350(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_351(var uParam0)
{
	return uParam0->f_50;
}

bool func_352(var uParam0, int iParam1)
{
	return func_353(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_353(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_354(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0x00000000;
}

int func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

void func_357(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_358(int iParam0, int iParam1)
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

void func_359()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000000] == iVar0)
		{
			Global_E53E[0x00000000] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000001] == iVar0)
		{
			Global_E53E[0x00000001] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000002] == iVar0)
		{
			Global_E53E[0x00000002] = iVar0;
		}
	}
}

int func_360(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_361(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x1C0640BA9A7327B3();
		}
		Global_1C = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_1B) > iParam0)
		{
			if (func_362())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_362()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000012) || unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_363(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000001:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000002:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		default:
	}
	return 0x00000000;
}

bool func_364(int iParam0)
{
	return func_365(iParam0, Global_A1D7);
}

int func_365(int iParam0, int iParam1)
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

void func_366(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_474();
	if (iParam2 != 0x00000091)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_131(iParam1);
	switch (iParam0)
	{
		case 0x0000000A:
			iVar0 = 0x00000005;
			switch (iVar2)
			{
				case 0x00000000:
					iVar1 = 0x00000020;
					break;
				
				case 0x00000002:
					iVar1 = 0x00000021;
					break;
				
				case 0x00000001:
					iVar1 = 0x0000001F;
					break;
			}
			break;
		
		case 0x0000000B:
			iVar0 = 0x00000007;
			if (((iParam1 == 0x0000000F || iParam1 == 0x00000010) || iParam1 == 0x000000A4) || iParam1 == 0x000000D9)
			{
				switch (iVar2)
				{
					case 0x00000000:
						iVar1 = 0x000000BF;
						break;
					
					case 0x00000002:
						iVar1 = 0x000000C1;
						break;
					
					case 0x00000001:
						iVar1 = 0x000000C0;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0x00000000:
						iVar1 = 0x00000028;
						break;
					
					case 0x00000002:
						iVar1 = 0x0000002A;
						break;
					
					case 0x00000001:
						iVar1 = 0x00000029;
						break;
					}
			}
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000006;
			switch (iVar2)
			{
				case 0x00000000:
					iVar1 = 0x00000022;
					break;
				
				case 0x00000002:
					iVar1 = 0x00000024;
					break;
				
				case 0x00000001:
					iVar1 = 0x00000023;
					break;
			}
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000008;
			switch (iVar2)
			{
				case 0x00000000:
					iVar1 = 0x00000025;
					break;
				
				case 0x00000002:
					iVar1 = 0x00000027;
					break;
				
				case 0x00000001:
					iVar1 = 0x00000026;
					break;
			}
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000009;
			switch (iVar2)
			{
				case 0x00000000:
					iVar1 = 0x000000BA;
					break;
				
				case 0x00000002:
					iVar1 = 0x000000BC;
					break;
				
				case 0x00000001:
					iVar1 = 0x000000B9;
					break;
			}
			break;
		
		case 0x00000010:
			iVar0 = 0x0000000A;
			switch (iVar2)
			{
				case 0x00000000:
					iVar1 = 0x000000BD;
					break;
				
				case 0x00000002:
					iVar1 = 0x000000BE;
					break;
				
				case 0x00000001:
					iVar1 = 0x000000BB;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_325(iVar0, iVar1, 0x00000001))
	{
		func_367(iVar0, sVar3);
		func_318(iVar0);
		func_327(iVar0);
	}
}

void func_367(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_324(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6 == 0x0000000A)
	{
		return;
	}
	iVar1 = Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6;
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6++;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_373(iParam1) || !func_373(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_370(iParam0);
	iVar1 = func_370(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_369(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_370(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_371(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_372(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_373(int iParam0)
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
	iVar0 = func_369(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_370(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_371(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_372(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_374()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	vector3 vVar20;
	int iVar21;
	
	iVar0 = 0x00000000;
	if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) == 0x00000000)
	{
		if (Global_1B416.f_7FE8.f_15D4)
		{
			if (!unk_0xC844350D5D58C99A(Global_12A3A))
			{
				func_287(&(Global_1B416.f_7FE8.f_1586), Global_1B416.f_7FE8.f_15D6);
				Global_1B416.f_7FE8.f_15D4 = 0x00000000;
			}
			else if (!unk_0xDF1306B443CD3D15(Global_12A3A, 0x00000000) || func_47(Global_12A3A, Global_1B416.f_7FE8.f_15D6, 0x00000001))
			{
				Global_1B416.f_7FE8.f_15D4 = 0x00000000;
			}
			else
			{
				if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) == Global_12A3A) && func_401(unk_0x16F2683693E537C9()) != Global_1B416.f_7FE8.f_15D6)
				{
					Global_1B416.f_7FE8.f_15D6 = func_401(unk_0x16F2683693E537C9());
				}
				if (Global_12A3A != iLocal_128)
				{
					sVar2 = unk_0xA712FAE854841798(Global_12A3A, &uVar1);
					if (!unk_0xEA6BC48857E0AC4C(sVar2))
					{
						if (unk_0x12AB0310C2281427(sVar2) == unk_0x12AB0310C2281427("vehicle_gen_controller"))
						{
							Global_1B416.f_7FE8.f_15D4 = 0x00000000;
							iLocal_169 = Global_12A3A;
							if (Global_126B1.f_8B[0x00000018] == Global_12A3A || (Global_12A3B == Global_12A3A && Global_12A3C == 0x00000018))
							{
								func_400(0x000001CA, 0x00000018, 0xFFFFFFFF, 0x00000001);
							}
							else
							{
								func_400(0x000001CA, 0x00000000, 0xFFFFFFFF, 0x00000001);
							}
							Global_12A3A = 0x00000000;
						}
					}
				}
				if (((Global_1B416.f_7FE8.f_15D6 != func_474() && Global_17F64[Global_1B416.f_7FE8.f_15D6 /*98*/] == Global_1B416.f_7FE8.f_1586.f_42) && unk_0x7F8A39872A07D2CE(&(Global_17F64[Global_1B416.f_7FE8.f_15D6 /*98*/].f_1B), &(Global_1B416.f_7FE8.f_1586.f_1))) && !unk_0x991B1F0980C62628())
				{
					func_116(&(Global_1B416.f_7FE8.f_1586), &(Global_1B416.f_7FE8.f_15E0[Global_1B416.f_7FE8.f_15D6 /*78*/]));
					Global_1B416.f_7FE8.f_15D4 = 0x00000000;
					iLocal_169 = 0x00000000;
					func_400(0x000001CA, 0x00000000, 0xFFFFFFFF, 0x00000001);
					Global_12A3A = 0x00000000;
				}
			}
		}
		else if ((unk_0xC844350D5D58C99A(Global_12A3A) && unk_0xDF1306B443CD3D15(Global_12A3A, 0x00000000)) && !func_47(Global_12A3A, Global_1B416.f_7FE8.f_15D6, 0x00000001))
		{
			Global_1B416.f_7FE8.f_15D4 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(iLocal_169) && unk_0xDF1306B443CD3D15(iLocal_169, 0x00000000))
		{
			if (((!Global_1B416.f_7FE8.f_15D4 && iLocal_169 != Global_12A3A) && iLocal_169 != iLocal_170) && !unk_0x9C77D2D0559097F0(iLocal_169, 0x00000001))
			{
				func_31(iLocal_169, 0x00000091);
				iLocal_169 = 0x00000000;
				func_400(0x000001CA, 0x00000000, 0xFFFFFFFF, 0x00000001);
			}
		}
		else if (iLocal_169 != 0x00000000)
		{
			iLocal_169 = 0x00000000;
			func_400(0x000001CA, 0x00000000, 0xFFFFFFFF, 0x00000001);
		}
		if (unk_0xC844350D5D58C99A(iLocal_170) && unk_0xDF1306B443CD3D15(iLocal_170, 0x00000000))
		{
		}
		else if (iLocal_170 != 0x00000000)
		{
			iLocal_170 = 0x00000000;
		}
	}
	if (Global_12A3E.f_42 != 0x00000000 && Global_12A3B == 0x00000000)
	{
		func_287(&Global_12A3E, Global_12A8C);
		Global_12A3E.f_42 = 0x00000000;
	}
	vVar3 = { 433.6721f, -1006.538f, 25.96351f };
	vVar4 = { 433.6578f, -1017.5f, 32.09895f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0x00000000 && iLocal_124 < 0x00000063)
	{
		if (iLocal_124 != 0x00000003)
		{
			if (((((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar3, vVar4, fVar5, 0x00000000, 0x00000001, 0x00000000)) || func_27(0x00000000)) || func_27(0x00000003)) || func_27(0x00000002)) || func_27(0x0000000E))
			{
				iLocal_124 = 0x00000063;
			}
		}
	}
	if (func_399(iLocal_129))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_145))
		{
			if (((func_27(0x0000000F) || func_27(0x0000000C)) && iLocal_124 != 0x00000003) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				iLocal_145 = func_397(428.37f, -1013.5f, 27.93f, 0x00000000);
				unk_0xBC8E0A7390523199(iLocal_145, 0x000000E1);
				unk_0xDC5B2F9D0CCE3A10(iLocal_145, "IMPOUND_BLIPNAME");
				unk_0x6ABCCE651368DB93(iLocal_145, 0x00000001);
			}
		}
		else if ((!(func_27(0x0000000F) || func_27(0x0000000C)) || iLocal_124 == 0x00000003) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0x142CC44DB769B57E(&iLocal_145);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(iLocal_145))
	{
		unk_0x142CC44DB769B57E(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if ((Local_56.f_2 == 0x00000000 && (func_27(0x0000000F) || func_27(0x0000000C))) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (func_399(iLocal_129))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar3, vVar4, fVar5, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_363(iLocal_129) >= 0x000000FA)
							{
								iVar6 = 0x00000000;
								iVar7 = 0x00000000;
								while (iVar7 < 0x00000002)
								{
									if (func_283(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 0x00000001)
								{
									func_220(&iLocal_125, 0x00000003, "IMPOUND_TRIG2", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									func_220(&iLocal_125, 0x00000003, "IMPOUND_TRIG1", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								iLocal_124 = 0x00000001;
							}
							else
							{
								func_218("SCLUB_NO_MONEY", 0xFFFFFFFF);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_216(0x00000000, 0xFFFFFFFF, 0x00000000))
			{
				if (func_215(iLocal_125, 0x00000001))
				{
					func_69(&iLocal_125);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_396();
					iVar8 = 0x00000000;
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000002)
					{
						if (func_283(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 0x00000001)
					{
						iLocal_116 = 0x00000000;
						iLocal_117 = 0x00000000;
						iLocal_118 = 0x00000000;
						iLocal_121 = 0xFFFFFFFF;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0x00000000;
						while (iVar10 < 0x00000002)
						{
							if (func_283(iVar10, iLocal_129))
							{
								if (iVar10 == 0x00000000)
								{
									vVar11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									vVar11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_380(&iLocal_128, iVar10, vVar11, 179.24f, 0x00000001))
								{
									SYSTEM::WAIT(0x00000000);
								}
								if (unk_0xC844350D5D58C99A(iLocal_128))
								{
									if (iVar10 == 0x00000000)
									{
										func_379(0x00000012, 0x00000001, 0x00000000);
									}
									else
									{
										func_379(0x00000013, 0x00000001, 0x00000000);
									}
									if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
									{
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
									}
									func_331(iLocal_129, 0x00000077, 0x000000FA);
									func_378(iVar10);
									func_31(iLocal_128, func_474());
									func_71(0x00000001, 0xFFFFFFFF);
									iLocal_124 = 0x00000003;
									func_69(&iLocal_125);
									iLocal_125 = 0xFFFFFFFF;
									iLocal_118 = 0x00000000;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			switch (func_474())
			{
				case 0x00000000:
					iVar12 = 0x00000000;
					break;
				
				case 0x00000001:
					iVar12 = 0x00000001;
					break;
				
				case 0x00000002:
					iVar12 = 0x00000002;
					break;
			}
			func_396();
			if (!iLocal_116 || iLocal_117)
			{
				func_213(0x00000000, 0x00000000);
				func_212(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_211(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000001);
				func_210("IMPOUND_TITLE");
				iLocal_122 = 0x00000000;
				iVar13 = 0xFFFFFFFF;
				iVar15 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < 0x00000002)
				{
					if (func_283(iVar14, iLocal_129))
					{
						func_134(iVar15, unk_0x1739BA50603D849C(Global_1B416.f_7FE8.f_13AE[iVar12 /*157*/][iVar14 /*78*/].f_42), 0x00000000, 0x00000001, 0x00000000, 0x00000000);
						if (iVar13 == 0xFFFFFFFF)
						{
							iVar13 = iVar15;
							iLocal_121 = iVar15;
						}
						unk_0x5D96D8530B3D0904(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_134(iVar15, "IMPOUND_COST", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
						func_377(0x000000FA, 0x00000000);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0x00000000;
				func_127(iLocal_121, 0x00000001, 0x00000001);
				iLocal_119 = 0x00000001;
				iLocal_117 = 0x00000000;
				iLocal_116 = 0x00000001;
			}
			else
			{
				iVar0 = 0x00000000;
				if (unk_0x0EFF6B4415DAF4A1())
				{
					if (unk_0x9E6C8D8976DA0ECD(0x00000002))
					{
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
						unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F1, 0x00000001);
						unk_0xEAB026E686C0D991(0x00000000, 0x000000F2, 0x00000001);
						func_124(0x00000000, 0x00000000, 0x00000000, 0x00000001);
						func_123(0x00000000, 0xFFFFFFFF, 0x00000001);
						if (func_122())
						{
							if (Global_4121D1 != iLocal_121)
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								iLocal_121 = Global_4121D1;
								func_127(iLocal_121, 0x00000001, 0x00000001);
								iLocal_119 = 0x00000001;
							}
							else
							{
								iVar0 = 0x00000001;
							}
						}
					}
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 0x00000001;
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
						iVar16 = (iLocal_121 - 0x00000001);
						while (iVar16 >= 0x00000000)
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_122, iVar16))
							{
								iLocal_121 = iVar16;
								bVar17 = 0x00000001;
								iVar16 = 0x00000000;
							}
							iVar16 = (iVar16 + 0xFFFFFFFF);
						}
						if (!bVar17)
						{
							iVar16 = 0x0000001F;
							while (iVar16 >= iLocal_121 + 1)
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_122, iVar16))
								{
									iLocal_121 = iVar16;
									bVar17 = 0x00000001;
									iVar16 = iLocal_121;
								}
								iVar16 = (iVar16 + 0xFFFFFFFF);
							}
						}
						if (bVar17)
						{
							func_127(iLocal_121, 0x00000001, 0x00000001);
						}
					}
				}
				else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 0x00000001;
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
						iVar18 = iLocal_121 + 1;
						while (iVar18 <= 0x0000001F)
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_122, iVar18))
							{
								iLocal_121 = iVar18;
								bVar19 = 0x00000001;
								iVar18 = 0x0000001F;
							}
							iVar18++;
						}
						if (!bVar19)
						{
							iVar18 = 0x00000000;
							while (iVar18 <= (iLocal_121 - 0x00000001))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_122, iVar18))
								{
									iLocal_121 = iVar18;
									bVar19 = 0x00000001;
									iVar18 = iLocal_121;
								}
								iVar18++;
							}
						}
						if (bVar19)
						{
							func_127(iLocal_121, 0x00000001, 0x00000001);
						}
					}
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9) || iVar0 == 0x00000001)
				{
					iVar0 = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!iLocal_118)
					{
						func_121("IMPOUND_CNF", 0x00000000, 0x00000000);
						func_120(0xFFFFFFFF);
						func_119(0x000000C9, "ITEM_YES", 0xFFFFFFFF);
						func_119(0x000000CA, "ITEM_NO", 0xFFFFFFFF);
						iLocal_118 = 0x00000001;
					}
					else
					{
						if (iLocal_121 == 0x00000000)
						{
							vVar20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							vVar20 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_283(iLocal_123[iLocal_121], iLocal_129))
						{
							while (!func_380(&iLocal_128, iLocal_123[iLocal_121], vVar20, 179.24f, 0x00000001))
							{
								SYSTEM::WAIT(0x00000000);
							}
							if (unk_0xC844350D5D58C99A(iLocal_128))
							{
								if (iLocal_121 == 0x00000000)
								{
									func_379(0x00000012, 0x00000001, 0x00000000);
								}
								else
								{
									func_379(0x00000013, 0x00000001, 0x00000000);
								}
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
								}
								func_331(iLocal_129, 0x00000077, 0x000000FA);
								func_378(iLocal_123[iLocal_121]);
								func_31(iLocal_128, func_474());
								func_71(0x00000001, 0xFFFFFFFF);
								iLocal_124++;
								func_69(&iLocal_125);
								iLocal_125 = 0xFFFFFFFF;
								iLocal_118 = 0x00000000;
							}
						}
						iLocal_117 = 0x00000001;
					}
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA) || unk_0xB9132A06AE472728(0x00000002, 0x000000EE))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (iLocal_118)
					{
						iLocal_119 = 0x00000001;
						iLocal_118 = 0x00000000;
					}
					else
					{
						iLocal_124 = 0x00000063;
					}
				}
			}
			unk_0x3FC8DBCC154CA56B();
			if (iLocal_119)
			{
				func_121("", 0x00000000, 0x00000000);
				func_120(0xFFFFFFFF);
				func_119(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF);
				func_119(0x000000CA, "ITEM_EXIT", 0xFFFFFFFF);
				iLocal_118 = 0x00000000;
				iLocal_119 = 0x00000000;
			}
			if (func_216(0x00000000, 0xFFFFFFFF, 0x00000000))
			{
				func_74(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000003:
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 431.4f, -997.33f, 24.76f, 0x00000001) > 20f && !func_376())
			{
				func_31(iLocal_128, func_474());
				iLocal_124 = 0x00000063;
			}
			else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 431.4f, -997.33f, 24.76f, 0x00000001) > 100f)
			{
				if (unk_0xC844350D5D58C99A(iLocal_128))
				{
					if (!unk_0x437347B10A200C4B(iLocal_128, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_128, 0x00000000) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_128, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) > 100f)
						{
							if (!unk_0x0A059E0DB9253280(iLocal_128))
							{
								func_375(iLocal_128, 0x00000001, 0x00000091);
								unk_0xA954465BA6FDEFE2(&iLocal_128);
								unk_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
								iLocal_124 = 0x00000063;
							}
						}
						else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_128, 0x00000000))
						{
							unk_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
							func_31(iLocal_128, func_474());
							iLocal_124 = 0x00000063;
						}
					}
					else
					{
						unk_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
						iLocal_124 = 0x00000063;
					}
				}
				else
				{
					unk_0x28F5E4DA506AC0CA(431.4f, -997.33f, 24.76f, 10f, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
					iLocal_124 = 0x00000063;
				}
			}
			break;
		
		case 0x00000063:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
			func_69(&iLocal_125);
			iVar21 = 0x00000000;
			while (iVar21 < 0x00000002)
			{
				iLocal_123[iVar21] = 0xFFFFFFFF;
				iVar21++;
			}
			func_379(0x00000012, 0x00000000, 0x00000000);
			func_379(0x00000013, 0x00000000, 0x00000000);
			if (unk_0xC844350D5D58C99A(iLocal_128))
			{
				unk_0x046C362CF15F1935(&iLocal_128);
			}
			iLocal_124 = 0x00000000;
			break;
	}
	if (iLocal_124 == 0x00000000)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!iLocal_127)
			{
				func_379(0x00000012, 0x00000001, 0x00000000);
				iLocal_127 = 0x00000001;
			}
		}
		else if (iLocal_127 && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_379(0x00000012, 0x00000000, 0x00000000);
			iLocal_127 = 0x00000000;
		}
	}
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0x00000000)
	{
		sVar1 = unk_0xA712FAE854841798(iParam0, &uVar0);
		if (!unk_0xEA6BC48857E0AC4C(sVar1))
		{
			if (unk_0x12AB0310C2281427(sVar1) == unk_0x12AB0310C2281427("vehicle_gen_controller"))
			{
				return 0x00000000;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 0x00000001;
}

int func_376()
{
	if (unk_0xF65264B66E133BD8(431.4424f, -997.7308f, 24.76161f, 4.75f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	else if (unk_0xF65264B66E133BD8(436.6913f, -997.5869f, 24.75582f, 4.75f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	else if (unk_0xF65264B66E133BD8(431.07f, -1005.57f, 26.2f, 4.75f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	else if (unk_0xF65264B66E133BD8(436.52f, -1005.47f, 26.17f, 4.75f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_377(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_574E.f_1466 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F >= 0x00000004)
	{
		return;
	}
	if (Global_574E.f_1670 != 0x00000001)
	{
		return;
	}
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		return;
	}
	Global_574E.f_F4E[Global_574E.f_1466] = iParam0;
	Global_574E.f_1466++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000002;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_130();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_109(0x0000001A, 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)])
		{
			Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_574E.f_166F >= Global_574E.f_166D)
		{
			fVar3 = func_129();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

void func_378(int iParam0)
{
	int iVar0;
	
	switch (func_474())
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iParam0 < 0x00000000 || iParam0 >= func_284(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return;
	}
	Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42 = 0x00000000;
}

void func_379(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000005);
		if (bParam2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_9E6A[iParam0 /*31*/].f_1, 0x00000001))
			{
				Global_9E6A[iParam0 /*31*/].f_16 = -1f;
			}
			else
			{
				Global_9E6A[iParam0 /*31*/].f_16 = 1f;
			}
			unk_0x838CC054A9235BEC(Global_9E6A[iParam0 /*31*/], Global_9E6A[iParam0 /*31*/].f_16, 0x00000000, 0x00000000);
			unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iParam0 /*31*/], 0x00000001, 0x00000000, 0x00000001);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9E6A[iParam0 /*31*/].f_1), 0x00000005);
		if (bParam2)
		{
			Global_9E6A[iParam0 /*31*/].f_16 = 0f;
			unk_0x838CC054A9235BEC(Global_9E6A[iParam0 /*31*/], Global_9E6A[iParam0 /*31*/].f_16, 0x00000000, 0x00000000);
			unk_0x1BA7FCEAFCE8D46E(Global_9E6A[iParam0 /*31*/], 0x00000001, 0x00000000, 0x00000001);
		}
	}
}

int func_380(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_283(iParam1, func_474()) || unk_0xC844350D5D58C99A(*iParam0))
	{
		return 0x00000000;
	}
	switch (func_474())
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	unk_0x523BCC9DC80CD82F(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42);
	if (unk_0xB87F6CF6E5628C67(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42))
	{
		*iParam0 = unk_0x122AAB0B1D6F55AD(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42, vParam2, fParam3, 0x00000000, 0x00000000, 0x00000000);
		func_381(*iParam0, &(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam1 /*78*/]), 0x00000000, 0x00000001);
		unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
		unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
		if (bParam4)
		{
			unk_0x71199B01895C6202(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_381(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_389(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0x00000000)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0x00000000 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 0x0000006F;
			uParam1->f_6 = 0x0000006F;
			uParam1->f_7 = 0x0000006F;
		}
		else if (uParam1->f_42 == joaat("casco"))
		{
			iVar0 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_33(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_33(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_33(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_33(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_33(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_42 == 0x4669D038)
		{
			iVar4 = 0x00000001;
			while (iVar4 <= 0x0000000B)
			{
				if (iVar4 != 0x00000009 && iVar4 != 0x0000000A)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_33(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_33(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_42 == 0x98F65A5E)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) != 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000000);
			}
		}
		if (uParam1->f_42 == 0x19DD9ED1)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000000);
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000005) != 0xFFFFFFFF)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000001);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000D))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000C))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != 0xFFFFFFFF && uParam1->f_6 != 0xFFFFFFFF)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0x00000000)
		{
			uParam1->f_7 = 0x00000000;
		}
		if (uParam1->f_8 < 0x00000000)
		{
			uParam1->f_8 = 0x00000000;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_388(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_387())
		{
			uParam1->f_3E = 0x00000000;
			uParam1->f_3F = 0x00000000;
			uParam1->f_40 = 0x00000000;
		}
		else if ((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000)
		{
			uParam1->f_3E = 0x000000FF;
			uParam1->f_3F = 0x000000FF;
			uParam1->f_40 = 0x000000FF;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == 0xFFFFFFFF && !func_35(uParam1->f_42))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_41);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000009));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_46);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		unk_0x7726E33AC3B60544(iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001C));
		unk_0x7726E33AC3B60544(iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001D));
		unk_0x7726E33AC3B60544(iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001E));
		unk_0x7726E33AC3B60544(iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001F));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000A));
		if (unk_0x579935D850368851(iParam0) > 0x00000001 && uParam1->f_43 >= 0x00000000)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > 0xFFFFFFFF && uParam1->f_45 < 0x000000FF)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_45 == 0x00000006)
					{
						func_386(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_386(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			if ((uParam1->f_44 == 0x00000000 || uParam1->f_44 == 0x00000003) || uParam1->f_44 == 0x00000005)
			{
				unk_0x429C172A00A5F89B(iParam0, 0x00000001);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 0x00000001);
			}
		}
		if (bParam3)
		{
			func_382(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_33(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000000);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000001);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == joaat("sheava") || unk_0x134B62B726CEC8E6(iParam0) == joaat("omnis")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("le7b"))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000000) == 0xFFFFFFFF)
			{
				unk_0xD3421E391490133B(iParam0, 0x00000001, 0x00000000);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_42) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, 0x81BD2ED0)) && !((((Global_440000.f_127B9 == 0x00000006 || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000012) || Global_440000.f_127B9 == 0x00000013) && Global_440000.f_2 == 0x00000014))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000017))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000016))
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000002);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000003);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 0x00000004);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001B))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000001);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000000);
		}
	}
}

int func_382(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	unk_0xF95FF0A179413A39(*iParam0, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0x00000000);
		}
		else if (iVar1 == 0x00000016)
		{
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000001);
				if ((*uParam1)[iVar0] == 0x00000001)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 0x000000FF);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 0x00000002));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000000);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 0x00000001))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				if (iVar0 == 0x00000017)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000000] > 0x00000000);
				}
				else if (iVar0 == 0x00000018)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000001] > 0x00000000);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (func_261(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_385(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_385(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_384(iParam0);
	if (func_383(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000031)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015) || iVar1 == 0x00000016)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != 0xFFFFFFFF)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0x00000000)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 0x00000001;
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_384(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case 0x9A9EB7DE:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 0x00000004) == 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 0x0000000D, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 0x0000000D);
			}
			break;
	}
}

int func_385(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0x00000000:
						return 0x00000000;
						break;
					
					case 0x00000001:
						return 0x00000001;
						break;
					
					case 0x00000002:
						return 0x00000002;
						break;
					
					case 0x00000003:
						return 0x00000003;
						break;
					
					case 0x00000004:
						return 0x00000004;
						break;
					
					case 0x00000005:
						return 0x00000004;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 0x00000003;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 0x00000026);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 0x00000018);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 0x00000001);
		if (iVar3 < 0x00000000)
		{
			iVar3 = 0x00000000;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 0x00000001);
		}
		return iVar3;
	}
	return 0x00000000;
}

void func_386(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 0x00000018);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 0x00000018);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("tornado6") || unk_0x134B62B726CEC8E6(iParam0) == 0x9472CD24)
		{
			return;
		}
		if (iVar0 == 0xFFFFFFFF)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 0x00000018);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 0x00000018, iVar0, iVar1 == 0x00000001);
		}
	}
}

bool func_387()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_388(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004);
			}
		}
	}
	return 0x00000000;
}

int func_389(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_395(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_391(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_390(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_390(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return 0xFFFFFFFF;
}

int func_391(int iParam0)
{
	if (func_394(iParam0) == 0x000000E9)
	{
		return func_392(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_392(int iParam0)
{
	if (func_393(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_393(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_394(int iParam0)
{
	if (func_393(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_241(iParam0, 0x00000001, 0x00000001))
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

void func_396()
{
	unk_0x5EEBDFEE72949D59(0x00000000);
	unk_0xEAB026E686C0D991(0x00000000, 0x000000BC, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x000000BB, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x000000C9, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x000000CA, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000001, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000002, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x000000EF, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x000000F0, 0x00000001);
}

int func_397(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_398(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

float func_398(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (func_283(iVar0, iParam0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

var func_400(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_95();
	}
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x000000FF;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000180), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000180) - unk_0x6D63D77257071BC5((iParam0 - 0x00000180)) * 8) * 8;
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x000001C9), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000001C9) - unk_0x6D63D77257071BC5((iParam0 - 0x000001C9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000501), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000501) - unk_0x6D63D77257071BC5((iParam0 - 0x00000501)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000519), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000519) - unk_0x6D63D77257071BC5((iParam0 - 0x00000519)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000571), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000571) - unk_0x6D63D77257071BC5((iParam0 - 0x00000571)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000551), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000551) - unk_0x6D63D77257071BC5((iParam0 - 0x00000551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00000F27), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 0x00000F27) - unk_0x6D63D77257071BC5((iParam0 - 0x00000F27)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000102F), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000102F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000102F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000112F), 0x00000000, 0x00000001, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000112F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000112F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000190D), 0x00000000, 0x00000001, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000190D) - unk_0x6D63D77257071BC5((iParam0 - 0x0000190D)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C5E), 0x00000000, 0x00000001, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 0x00001C5E) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C5E)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001E01), 0x00000000, 0x00000001, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001E01) - unk_0x6D63D77257071BC5((iParam0 - 0x00001E01)) * 8) * 8;
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00002551), 0x00000000, 0x00000001, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 0x00002551) - unk_0x6D63D77257071BC5((iParam0 - 0x00002551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003BA1), 0x00000000, 0x00000001, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 0x00003BA1) - unk_0x6D63D77257071BC5((iParam0 - 0x00003BA1)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003E8A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 0x00003E8A) - unk_0x6D63D77257071BC5((iParam0 - 0x00003E8A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000046F2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 0x000046F2) - unk_0x6D63D77257071BC5((iParam0 - 0x000046F2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00004A4A), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 0x00004A4A) - unk_0x6D63D77257071BC5((iParam0 - 0x00004A4A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000056B2), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 0x000056B2) - unk_0x6D63D77257071BC5((iParam0 - 0x000056B2)) * 8) * 8;
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000063C2), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 0x000063C2) - unk_0x6D63D77257071BC5((iParam0 - 0x000063C2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006A7A), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 0x00006A7A) - unk_0x6D63D77257071BC5((iParam0 - 0x00006A7A)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006F43), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 0x00006F43) - unk_0x6D63D77257071BC5((iParam0 - 0x00006F43)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001DD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001DD9) - unk_0x6D63D77257071BC5((iParam0 - 0x00001DD9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C91), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001C91) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C91)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 0x00000008, iParam3);
	return uVar2;
}

int func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_402(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_402(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_403(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_403(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_404(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_271B.f_19, 0x00000007))
	{
		if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000006))
		{
			if (func_27(0x0000000D) && func_14(func_16()))
			{
				unk_0x5D96D8530B3D0904(iParam0, 0x00000006);
				iVar0 = func_9();
				iParam0->f_6 = { func_435(iVar0) };
				if (Global_7943 == iVar0 || Global_7943 == 0x00000000)
				{
					func_3(0x00000001);
					Var1 = { func_434("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0x8BC9595FD2792B5D(&Var1);
					iVar0 = (Global_7943 + 1 % 0x00000008);
					func_432(iParam0, iVar0);
					iParam0->f_2 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001F40, 0x00002EE0));
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000C);
					if (iVar0 == 0x00000007)
					{
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000007);
						func_431(0x000000FF, 0x00000000);
					}
				}
				else
				{
					func_432(iParam0, 0x00000000);
					unk_0x0674E58A79778E99(&(Global_1B416.f_271B.f_19), 0x0000000C);
				}
			}
		}
		else
		{
			func_430();
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001F))
			{
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000019))
				{
					func_429(iParam0);
				}
				else if (func_428())
				{
					func_412(iParam0);
					iParam0->f_3 = unk_0x1C0640BA9A7327B3() + 2000;
				}
				if (!func_411(0x00000000))
				{
					func_431(0x000000FF, 0x00000000);
				}
			}
			else if (func_411(0x00000000))
			{
				if (unk_0x1C0640BA9A7327B3() > iParam0->f_3)
				{
					func_431(0x00000000, 0x00000320);
				}
			}
			if (!func_27(0x0000000D) || !func_14(func_16()))
			{
				func_405(iParam0);
			}
		}
	}
}

void func_405(int iParam0)
{
	struct<8> Var0;
	
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001F))
	{
		func_410(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000019))
	{
		func_406(iParam0);
	}
	Var0 = { func_434("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x562F77A7F33D2E46(&Var0))
	{
		unk_0x8910D3D58E0132B8(&Var0);
	}
	unk_0x0674E58A79778E99(iParam0, 0x00000006);
	unk_0x0674E58A79778E99(iParam0, 0x0000001E);
	unk_0x0674E58A79778E99(iParam0, 0x00000008);
}

void func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	iVar2 = func_408(iVar1);
	iVar3 = func_407(iVar1);
	if (iVar2 != 0x00000000)
	{
		unk_0x71199B01895C6202(iVar2);
	}
	if (iVar3 != 0x00000000)
	{
		unk_0x71199B01895C6202(iVar3);
	}
	unk_0x0674E58A79778E99(iParam0, 0x00000019);
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000011:
			return joaat("u_m_y_cyclist_01");
		
		case 0x00000031:
			return joaat("dune");
		
		default:
	}
	return 0x00000000;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000C:
			return 0xDFB55C81;
		
		case 0x0000006D:
			return joaat("a_c_boar");
		
		case 0x0000002B:
			return joaat("a_c_deer");
		
		case 0x00000023:
			return joaat("emperor2");
		
		case 0x00000011:
			return joaat("scorcher");
		
		case 0x0000001C:
			return joaat("a_c_mtlion");
		
		case 0x00000031:
			return joaat("cs_hunter");
		
		case 0x00000019:
			return joaat("a_m_y_hiker_01");
		
		case 0x0000000E:
			return joaat("a_f_y_hippie_01");
		
		case 0x00000056:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0x00000000;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x0000000C;
		
		case 0x00000002:
			return 0x0000002B;
		
		case 0x00000003:
			return 0x00000023;
		
		case 0x00000004:
			return 0x0000006D;
		
		case 0x00000005:
			return 0x0000001C;
		
		case 0x00000006:
			return 0x00000011;
		
		default:
	}
	return 0xFFFFFFFF;
}

void func_410(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_4))
	{
		unk_0x58B5D6A0F1D7754D(unk_0x68F4C0EC296D3901(iParam0->f_4, 0x00000000), 10f);
		unk_0xA954465BA6FDEFE2(&(iParam0->f_4));
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_5))
	{
		unk_0x58B5D6A0F1D7754D(unk_0x68F4C0EC296D3901(iParam0->f_5, 0x00000000), 10f);
		unk_0xEBA53F35D0085654(&(iParam0->f_5));
	}
	unk_0x0674E58A79778E99(iParam0, 0x0000001F);
}

bool func_411(bool bParam0)
{
	if (bParam0)
	{
		return Global_1A762.f_2 > 0.5f;
	}
	return Global_1A762.f_2 >= 255f;
}

void func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	func_413(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_427(iVar0), func_426(iVar0), 0x00000001);
	unk_0x5D96D8530B3D0904(iParam0, 0x0000001F);
}

void func_413(int iParam0, var uParam1, var uParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 0x0000000C:
			func_425(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 0x0000006D:
			func_424(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 0x0000002B:
			func_423(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 0x00000023:
			func_422(uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 0x0000001C:
			func_421(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 0x00000011:
			func_420(uParam1, uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 0x00000031:
			func_418(uParam1, uParam2, vParam3, fParam4);
			break;
		
		case 0x00000019:
			func_417(uParam1, vParam3, fParam4);
			break;
		
		case 0x0000000E:
			func_416(uParam1, vParam3, fParam4);
			break;
		
		case 0x00000056:
			func_414(uParam1, vParam3, fParam4);
			break;
	}
}

void func_414(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_408(0x00000056);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x00000005, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		func_415(*uParam0);
		return;
	}
}

void func_415(int iParam0)
{
	unk_0xBC92C4B04B43E102(iParam0, 0x00000001, 0.431f, 0.667f, 179.593f, 0.889f, 0x00000002, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000001, 0.556f, 0.292f, 161.805f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000001, 0.708f, 0.688f, 167.897f, 0f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000002, 0.472f, 0.347f, 146.133f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000002, 0.799f, 0.451f, 158.294f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.681f, 0.507f, 158.707f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.819f, 0.813f, 174.811f, 0.056f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.174f, 0.438f, 211.521f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.174f, 0.486f, 213.237f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.174f, 0.542f, 215.168f, 1f, 0x00000000, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.236f, 0.542f, 213.752f, 1f, 0x00000000, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.278f, 0.542f, 212.851f, 1f, 0x00000000, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000000, 0.313f, 0.542f, 212.127f, 1f, 0x00000000, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000005, 0.639f, 0.313f, 149.248f, 1f, 0x00000001, 0f, "stab");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000005, 0.792f, 0.424f, 182.625f, 1f, 0x00000001, 0f, "stab");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000005, 0.792f, 0.424f, 182.625f, 1f, 0x00000001, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000003, 0.618f, 0.451f, 204.207f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000003, 0.785f, 0.597f, 206.103f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.688f, 0.438f, 202.91f, 1f, 0x00000001, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.688f, 0.424f, 202.492f, 1f, 0x00000001, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.688f, 0.347f, 200.181f, 1f, 0x00000001, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.688f, 0.278f, 198.043f, 1f, 0x00000001, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.688f, 0.222f, 196.275f, 1f, 0x00000001, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.653f, 0.222f, 196.609f, 1f, 0x00000003, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.75f, 0.222f, 195.716f, 1f, 0x00000002, 0f, "BasicSlash");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 1f, 0.326f, 196.621f, 1f, 0x00000000, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.93f, 0.451f, 200.584f, 1f, 0x00000001, 0f, "ShotgunLargeMonolithic");
	unk_0xBC92C4B04B43E102(iParam0, 0x00000004, 0.618f, 0.451f, 204.207f, 1f, 0x00000000, 0f, "ShotgunLargeMonolithic");
}

void func_416(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_408(0x0000000E);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x00000005, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		func_415(*uParam0);
		return;
	}
}

void func_417(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_408(0x00000019);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x00000004, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.02f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.23f), (vParam1.y + 0.04f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.05f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x - 0.05f), (vParam1.y - 0.11f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, (vParam1.x + 0.09f), (vParam1.y - 0.06f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		func_415(*uParam0);
		return;
	}
}

void func_418(var uParam0, var uParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_408(0x00000031);
	iVar1 = func_407(0x00000031);
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(iVar1))
	{
		*uParam0 = unk_0x36F2404464202779(0x00000004, iVar0, vParam2, fParam3, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		unk_0x1776B2F0999C29AC(0x00000456, ((vParam2.x + 0.12f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, ((vParam2.x - 0.03f) - 0.3f), ((vParam2.y + 0.04f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, ((vParam2.x - 0.2f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, ((vParam2.x - 0.05f) - 0.3f), ((vParam2.y - 0.15f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		unk_0x1776B2F0999C29AC(0x00000456, ((vParam2.x + 0.01f) - 0.3f), ((vParam2.y - 0.06f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		func_415(*uParam0);
		vVar2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x122AAB0B1D6F55AD(iVar1, vParam2 + vVar2, fParam3, 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(iVar1);
		unk_0x5DAB50E08C3C504A(*uParam1, 2f);
		unk_0xB9FD7450C0DAB575(*uParam1, 0x40A00000);
		unk_0xA4C7B5E63E8F6EB3(*uParam1, 2f);
		unk_0x723F1A9961414262(*uParam1, 1f);
		unk_0x44C45BC1FDF14D14(*uParam1, 0x00000000, func_419());
		unk_0x44C45BC1FDF14D14(*uParam1, 0x00000001, func_419());
		unk_0x44C45BC1FDF14D14(*uParam1, 0x00000002, func_419());
		unk_0x44C45BC1FDF14D14(*uParam1, 0x00000003, func_419());
		unk_0x44C45BC1FDF14D14(*uParam1, 0x00000004, func_419());
		unk_0x44C45BC1FDF14D14(*uParam1, 0x00000005, func_419());
		unk_0xCCD53AC1B5D5E456(*uParam1, 15f);
		unk_0xDB6256BE50B66FE6(*uParam1, 0x00000003);
		unk_0x0882E3DC0C991680(*uParam1, 0x00000002);
		unk_0x5A751CC648EB6940(*uParam1, 0x00000001);
		unk_0xAC0C6241732E36F6(*uParam1);
		return;
	}
}

int func_419()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_420(var uParam0, var uParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_408(0x00000011);
	iVar1 = func_407(0x00000011);
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(iVar1))
	{
		*uParam0 = unk_0x36F2404464202779(0x00000004, iVar1, vParam2, fParam3, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar1);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		vVar2 = { 0.02f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar2 = { 0.23f, 0.04f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar2 = { -0.05f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar2 = { -0.05f, -0.11f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar2 = { 0.09f, -0.06f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		if (bParam4)
		{
			vVar2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		}
		func_415(*uParam0);
		*uParam1 = unk_0x122AAB0B1D6F55AD(iVar0, (vParam2.x - 0.4f), (vParam2.y - 0.5f), vParam2.z, fParam3, 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(iVar0);
		unk_0xC023D1C4BF532815(*uParam1, 0f, 85f, 0f, 0x00000002, 0x00000001);
		unk_0xA4C7B5E63E8F6EB3(*uParam1, 20.5f);
		unk_0xCCD53AC1B5D5E456(*uParam1, 15f);
		unk_0xAC0C6241732E36F6(*uParam1);
		return;
	}
}

void func_421(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_408(0x0000001C);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x0000001C, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.02f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.05f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { 0.01f, -0.06f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		if (bParam3)
		{
			vVar1 = { 0.5206f, 0f, 0.003f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 0x00000001, 0x00000000, 0x00000000);
		}
		return;
	}
}

void func_422(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_408(0x00000023);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x122AAB0B1D6F55AD(iVar0, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(iVar0);
		unk_0xC023D1C4BF532815(*uParam0, 0f, 170f, 0f, 0x00000002, 0x00000001);
		unk_0x5DAB50E08C3C504A(*uParam0, 1f);
		unk_0xA4C7B5E63E8F6EB3(*uParam0, 1f);
		unk_0xCCD53AC1B5D5E456(*uParam0, 15f);
		unk_0x44C45BC1FDF14D14(*uParam0, 0x00000000, func_419());
		unk_0x44C45BC1FDF14D14(*uParam0, 0x00000001, func_419());
		unk_0x44C45BC1FDF14D14(*uParam0, 0x00000002, func_419());
		unk_0x44C45BC1FDF14D14(*uParam0, 0x00000003, func_419());
		unk_0x44C45BC1FDF14D14(*uParam0, 0x00000004, func_419());
		unk_0x44C45BC1FDF14D14(*uParam0, 0x00000005, func_419());
		unk_0xDB6256BE50B66FE6(*uParam0, 0x00000003);
		unk_0x0882E3DC0C991680(*uParam0, 0x00000002);
		unk_0x5A751CC648EB6940(*uParam0, 0x00000001);
		unk_0xAC0C6241732E36F6(*uParam0);
		if (bParam3)
		{
			vVar1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 0x00000001, 0x00000000, 0x00000000);
		}
		return;
	}
}

void func_423(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_408(0x0000002B);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x0000001C, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x4E885A246A9D983A(*uParam0, 0x000000E3, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.2f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.05f, -0.15f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		if (bParam3)
		{
			vVar1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 0x00000001, 0x00000000, 0x00000000);
		}
		return;
	}
}

void func_424(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_408(0x0000006D);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x0000001C, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.2f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.05f, -0.15f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { 0.01f, -0.06f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		if (bParam3)
		{
			vVar1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 0x00000001, 0x00000000, 0x00000000);
		}
		func_415(*uParam0);
		return;
	}
}

void func_425(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_408(0x0000000C);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		*uParam0 = unk_0x36F2404464202779(0x0000001C, iVar0, vParam1, fParam2, 0x00000001, 0x00000001);
		unk_0xCAC78D14D05349E7(*uParam0, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0xD458AC1C1D29C3B4(*uParam0, 0x00000000, 0x00000000);
		unk_0xAC0C6241732E36F6(*uParam0);
		vVar1 = { 0.04f, 0.02f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.01f, 0.05f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		vVar1 = { -0.03f, -0.01f, 0f };
		unk_0x1776B2F0999C29AC(0x00000456, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
		if (bParam3)
		{
			vVar1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 0x00000001, 0x00000000, 0x00000000);
			vVar1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x1776B2F0999C29AC(0x000007E4, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 0x00000001, 0x00000000, 0x00000000);
		}
		func_415(*uParam0);
		return;
	}
}

float func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 190.1056f;
		
		case 0x00000002:
			return 132.9326f;
		
		case 0x00000003:
			return 355.7119f;
		
		case 0x00000004:
			return 209.0264f;
		
		case 0x00000005:
			return 122.6722f;
		
		case 0x00000006:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_1A74B[0x00000000 /*3*/];
		
		case 0x00000002:
			return Global_1A74B[0x00000001 /*3*/];
		
		case 0x00000003:
			return Global_1A74B[0x00000002 /*3*/];
		
		case 0x00000004:
			return Global_1A74B[0x00000003 /*3*/];
		
		case 0x00000005:
			return Global_1A74B[0x00000004 /*3*/];
		
		case 0x00000006:
			return Global_1A74B[0x00000005 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_428()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	iVar2 = func_408(iVar1);
	iVar3 = func_407(iVar1);
	if (iVar2 != 0x00000000)
	{
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0x00000000;
		}
	}
	if (iVar3 != 0x00000000)
	{
		if (!unk_0xB87F6CF6E5628C67(iVar3))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_429(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_409(iVar0);
	iVar2 = func_408(iVar1);
	iVar3 = func_407(iVar1);
	if (iVar2 != 0x00000000)
	{
		unk_0x523BCC9DC80CD82F(iVar2);
	}
	if (iVar3 != 0x00000000)
	{
		unk_0x523BCC9DC80CD82F(iVar3);
	}
	unk_0x5D96D8530B3D0904(iParam0, 0x00000019);
}

void func_430()
{
	if (Global_1A762.f_3 == unk_0xF4CCC8CB6DE7F1AE())
	{
		return;
	}
	Global_1A762.f_3 = unk_0xF4CCC8CB6DE7F1AE();
	if (Global_1A762.f_2 == 0f && Global_1A762.f_1 == 0f)
	{
		return;
	}
	if (Global_1A762.f_2 != Global_1A762.f_1)
	{
		Global_1A762.f_2 = (Global_1A762.f_2 + Global_1A762);
		if (Global_1A762 <= 0f)
		{
			if (Global_1A762.f_2 < Global_1A762.f_1)
			{
				Global_1A762.f_2 = Global_1A762.f_1;
			}
		}
		else if (Global_1A762.f_2 > Global_1A762.f_1)
		{
			Global_1A762.f_2 = Global_1A762.f_1;
		}
	}
	unk_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, SYSTEM::ROUND(Global_1A762.f_2), 0x00000000);
}

void func_431(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0x00000000)
	{
		Global_1A762 = 0f;
		Global_1A762.f_1 = fVar0;
		Global_1A762.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_1A762.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (unk_0x6117725E0134737F() * 1000f));
		Global_1A762 = (fVar1 / fVar2);
		Global_1A762.f_1 = fVar0;
	}
}

void func_432(int iParam0, int iParam1)
{
	func_433(&(Global_1B416.f_271B.f_19), iParam1, 0x00003800, 0x0000000B);
}

void func_433(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

struct<8> func_434(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_435(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000007)
	{
		return Global_1A735[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_436()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				unk_0x523BCC9DC80CD82F(joaat("v_ilev_uvline"));
				iLocal_51 = 0x00000001;
				if (unk_0xB87F6CF6E5628C67(joaat("v_ilev_uvline")))
				{
					if (func_437(0x00000008))
					{
						iLocal_53[0x00000004] = unk_0x7707E48765093646(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xA47B46945FF6DE74(iLocal_53[0x00000004], 471.48f, fVar0, 30.33f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xC023D1C4BF532815(iLocal_53[0x00000004], 0f, 0f, 116.9f, 0x00000002, 0x00000001);
						iLocal_53[0x00000001] = unk_0x7707E48765093646(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xA47B46945FF6DE74(iLocal_53[0x00000001], 471.48f, fVar0, 30.15f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xC023D1C4BF532815(iLocal_53[0x00000001], 0f, 0f, 116.9f, 0x00000002, 0x00000001);
					}
					if (func_437(0x00000009))
					{
						iLocal_53[0x00000005] = unk_0x7707E48765093646(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xA47B46945FF6DE74(iLocal_53[0x00000005], 471.48f, fVar0, 29.98f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xC023D1C4BF532815(iLocal_53[0x00000005], 0f, 0f, 116.9f, 0x00000002, 0x00000001);
					}
					if (func_437(0x0000000A))
					{
						iLocal_53[0x00000003] = unk_0x7707E48765093646(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xA47B46945FF6DE74(iLocal_53[0x00000003], 471.48f, fVar0, 29.82f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xC023D1C4BF532815(iLocal_53[0x00000003], 0f, 0f, 116.9f, 0x00000002, 0x00000001);
					}
					iVar1 = unk_0x0D1736C2E221BCEA(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0x00000000;
					while (iVar2 < 0x00000006)
					{
						if (unk_0xC844350D5D58C99A(iLocal_53[iVar2]))
						{
							unk_0x4A4806F9D471E491(iLocal_53[iVar2], 0x00000001, 0x00000000);
							unk_0x5834B6B817326C89(iLocal_53[iVar2], 0x00000001);
							unk_0xAA738CBC845A2BD8(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					unk_0x71199B01895C6202(joaat("v_ilev_uvline"));
					iLocal_52 = 0x00000001;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				unk_0x71199B01895C6202(joaat("v_ilev_uvline"));
				iLocal_51 = 0x00000000;
			}
			if (iLocal_52)
			{
				func_477();
				iLocal_52 = 0x00000000;
			}
		}
	}
}

int func_437(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_438()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_126B1.f_229)
	{
		if (!iLocal_54)
		{
			Global_126B1.f_22A = 0x00000000;
			iLocal_54 = 0x00000001;
		}
		else if (Global_126B1.f_22A >= 0x00000044)
		{
			Global_126B1.f_229 = 0x00000000;
			iLocal_54 = 0x00000000;
		}
	}
	else
	{
		iLocal_54 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_61(&Local_131, iVar1))
		{
			func_473(&Local_140, iVar1);
			if ((Local_140.f_45 && Local_56.f_3 == 0x00000000) || iVar1 == 0x0000000E)
			{
				fLocal_152[iVar1] = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Local_140.f_37, 0x00000000);
			}
			else
			{
				fLocal_152[iVar1] = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Local_131, 0x00000000);
			}
			if (func_472())
			{
				func_471(iVar1);
				func_469(iVar1);
				func_468(iVar1);
				func_467(iVar1);
				func_465(iVar1);
				func_464(iVar1);
				func_463(iVar1);
				func_440(iVar1);
				if (unk_0xEAE0D21A50E6C7F4(uLocal_48[iVar1], 0x00000002))
				{
					if (Global_126B1.f_229)
					{
						iLocal_54 = 0x00000000;
					}
					func_478(iVar1);
				}
			}
			else
			{
				func_439(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar2)
	{
		if (unk_0xEAE0D21A50E6C7F4(uLocal_48[iLocal_149[iVar0]], 0x00000002))
		{
			func_478(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != 0xFFFFFFFF)
	{
		func_478(iLocal_151);
		iLocal_151 = 0xFFFFFFFF;
	}
	iLocal_47++;
	if (iLocal_47 >= 0x00000044)
	{
		iLocal_47 = 0x00000000;
	}
	func_478(iLocal_47);
	if (iLocal_157)
	{
		func_478(0x00000015);
		func_478(0x00000016);
		func_478(0x00000017);
		iLocal_157 = 0x00000000;
		bLocal_158 = 0x00000001;
	}
	else if (bLocal_158)
	{
		bLocal_158 = 0x00000000;
	}
	if (Global_126B1.f_229)
	{
		Global_126B1.f_22A++;
	}
}

void func_439(int iParam0)
{
	if (iLocal_49[iParam0] != 0x00000000)
	{
		unk_0x71199B01895C6202(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0x00000000;
	}
}

void func_440(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000002))
	{
		func_439(iParam0);
	}
	unk_0x0674E58A79778E99(&(uLocal_48[iParam0]), 0x00000002);
	if (unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000001))
	{
		fVar2 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_50[iParam0 /*3*/], 0x00000001);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000017))
	{
		if (Local_131.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000018))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000013) || unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000014)) || iParam0 == 0x00000018) || iParam0 == 0x00000019)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000019) && (((iLocal_129 == 0x00000000 && Local_56 == 0x00000015) || (iLocal_129 == 0x00000000 && Local_56 == 0x00000016)) || (iLocal_129 == 0x00000000 && Local_56 == 0x00000017)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
	{
		if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (iParam0 == 0x00000018)
				{
					iVar3 = unk_0xA30B8362589C124A(Global_126B1.f_8B[iParam0], 0xFFFFFFFF, 0x00000000);
					if (!unk_0xC844350D5D58C99A(iVar3))
					{
						iVar3 = unk_0xB0326EA5AFB4EFA7(Global_126B1.f_8B[iParam0], 0xFFFFFFFF);
					}
					iVar4 = func_401(iVar3);
					if (iVar4 != Global_1B416.f_7FE8.f_15D7)
					{
						if (func_25(iVar4))
						{
							func_462("Updating last character to use vehicle gen", iVar4);
							Global_1B416.f_7FE8.f_15D7 = iVar4;
						}
					}
				}
				if (!unk_0x9C77D2D0559097F0(Global_126B1.f_8B[iParam0], 0x00000001))
				{
					func_461("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 0x00000018 && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
					}
					Global_126B1.f_8B[iParam0] = 0x00000000;
					Global_126B1[iParam0] = 0x00000001;
					func_460(iParam0);
					return;
				}
				if (((unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001B)) && iParam0 != 0x00000018) && iParam0 != 0x00000019)
				{
					func_461("No longer needed: Player used vehicle");
					if (((iParam0 == 0x00000018 && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
					}
					unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
					Global_126B1.f_8B[iParam0] = 0x00000000;
					Global_126B1[iParam0] = 0x00000001;
					func_460(iParam0);
					return;
				}
				if ((!unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000001) && iParam0 != 0x00000018) && iParam0 != 0x00000019)
				{
					if (unk_0xB87D13D0C064E9D1(Global_126B1.f_8B[iParam0], unk_0x16F2683693E537C9(), 0x00000001))
					{
						func_461("No longer needed: Player damaged vehicle");
						if (((iParam0 == 0x00000018 && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
						{
							unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
						}
						unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
						Global_126B1.f_8B[iParam0] = 0x00000000;
						Global_126B1[iParam0] = 0x00000001;
						func_460(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 0x00000018 || iParam0 == 0x00000019) || iParam0 == 0x00000015) || iParam0 == 0x00000016) || iParam0 == 0x00000017) || iParam0 == 0x0000001A) || iParam0 == 0x0000001D) || iParam0 == 0x00000020) || iParam0 == 0x0000001B) || iParam0 == 0x0000001E) || iParam0 == 0x00000021) || iParam0 == 0x0000001C) || iParam0 == 0x0000001F) || iParam0 == 0x00000022)
				{
					fVar5 = 20f;
				}
				if ((unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000001) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Global_126B1.f_8B[iParam0], 0x00000001), vLocal_50[iParam0 /*3*/], 0x00000001) > fVar5) || (!unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000001) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Global_126B1.f_8B[iParam0], 0x00000001), Local_131, 0x00000001) > fVar5))
				{
					func_461("No longer needed: Vehicle has been moved");
					if (((iParam0 == 0x00000018 && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
					}
					unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
					Global_126B1.f_8B[iParam0] = 0x00000000;
					Global_126B1[iParam0] = 0x00000001;
					func_460(iParam0);
					return;
				}
				if (!func_67(iParam0, 0x00000000))
				{
					func_461("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 0x00000018 && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
					}
					unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
					Global_126B1.f_8B[iParam0] = 0x00000000;
					Global_126B1[iParam0] = 0x00000001;
					func_460(iParam0);
					return;
				}
				if (iParam0 == 0x00000018)
				{
					if ((func_47(Global_126B1.f_8B[iParam0], iLocal_129, 0x00000001) && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0]))
					{
						func_461("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
						{
							unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
						}
						Global_126B1.f_8B[iParam0] = 0x00000000;
						Global_126B1[iParam0] = 0x00000001;
						func_460(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000001) || fVar2 > fVar0))
				{
					if (iParam0 == 0x00000018)
					{
						iVar6 = func_50();
						iVar7 = Global_1B416.f_7FE8.f_12C1;
						func_458(&iVar7, 0x00000000, 0x00000000, 0x00000011, 0x00000000, 0x00000000, 0x00000000);
						if (func_368(iVar6, iVar7))
						{
							if ((!func_63(Global_126B1.f_8B[iParam0]) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
							{
								unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
							}
							func_31(Global_126B1.f_8B[iParam0], Global_1B416.f_7FE8.f_15D7);
							Global_126B1[iParam0] = 0x00000001;
							func_460(iParam0);
						}
						else if (func_37(Global_126B1.f_8B[iParam0]))
						{
							func_32(Global_126B1.f_8B[iParam0], &Global_2591A7);
							Global_2591A6 = Global_1B416.f_7FE8.f_15D7;
							iLocal_170 = Global_126B1.f_8B[iParam0];
						}
					}
					func_461("No longer needed: Player out for range");
					unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
					unk_0x536F1BE96C726C4B(Local_131, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x28F5E4DA506AC0CA(Local_131, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					Global_126B1.f_8B[iParam0] = 0x00000000;
					if (((iParam0 == 0x00000000 && iLocal_129 == 0x00000000) || (iParam0 == 0x00000006 && iLocal_129 == 0x00000002)) || (iParam0 == 0x00000002 && iLocal_129 == 0x00000001))
					{
						Global_126B1.f_248 = { Local_131 };
						Global_126B1.f_24B = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001F))
					{
						if (!unk_0xE608C809F9416F00(Global_126B1.f_8B[iParam0]) && !unk_0xD59B17D2DFF98E26(Global_126B1.f_8B[iParam0]))
						{
							vVar8 = { unk_0x68F4C0EC296D3901(Global_126B1.f_8B[iParam0], 0x00000001) };
							if (vVar8.z >= func_457(iParam0))
							{
								unk_0xB078AFA7242F1F7B(Global_126B1.f_8B[iParam0], 0x00000001);
								unk_0x5D96D8530B3D0904(&(Local_131.f_9), 0x0000001F);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_126B1.f_8B[iParam0] = 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
	{
		func_461("No longer needed: Vehicle not driveable");
		unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
		Global_126B1.f_8B[iParam0] = 0x00000000;
		Global_126B1[iParam0] = 0x00000001;
		func_460(iParam0);
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (Global_12A3C == iParam0)
	{
		func_461("Processing a vehgen vehicle handover request.");
		if (unk_0xC844350D5D58C99A(Global_12A3B) && unk_0xDF1306B443CD3D15(Global_12A3B, 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]) && unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
			{
				if (Global_126B1.f_8B[iParam0] == Global_12A3B)
				{
					func_461("Vehicle to be handed over is the same vehicle.");
					Global_12A3C = 0xFFFFFFFF;
					Global_12A3B = 0x00000000;
					return;
				}
				else
				{
					func_461("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 0x00000018 && !func_63(Global_126B1.f_8B[iParam0])) && !func_62(Global_126B1.f_8B[iParam0])) && unk_0x134B62B726CEC8E6(Global_126B1.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000001);
					}
					unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
					Global_126B1.f_8B[iParam0] = 0x00000000;
				}
			}
			Global_126B1.f_8B[iParam0] = Global_12A3B;
			Global_126B1[iParam0] = 0x00000001;
			unk_0x0674E58A79778E99(&(uLocal_48[iParam0]), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 0x00000001);
			unk_0x0674E58A79778E99(&(uLocal_48[iParam0]), 0x00000003);
			vLocal_50[iParam0 /*3*/] = { unk_0x68F4C0EC296D3901(Global_12A3B, 0x00000001) };
			Global_12A3C = 0xFFFFFFFF;
			if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000A))
			{
				Var9.f_9 = 0x00000031;
				Var9.f_3B = 0x00000002;
				func_32(Global_12A3B, &Var9);
				if (Global_12A3D)
				{
					func_115(iParam0, &Var9, unk_0x68F4C0EC296D3901(Global_12A3B, 0x00000001), unk_0xD9522BA9E27E1349(Global_12A3B), func_46(Global_12A3B));
				}
				else
				{
					func_115(iParam0, &Var9, Global_1B416.f_7FE8.f_748[Local_131.f_E /*3*/], Global_1B416.f_7FE8.f_78E[Local_131.f_E], func_46(Global_12A3B));
				}
				Global_126B1.f_8B[iParam0] = Global_12A3B;
				Global_126B1.f_1E4[iParam0] = Global_126B1.f_8B[iParam0];
			}
			if (iParam0 == 0x00000019)
			{
				iVar10 = func_474();
				if (func_25(iVar10))
				{
					func_461("Players stored switch vehicle cleared for prep getaway.");
					Global_1808F[iVar10] = 0x00000000;
				}
			}
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			if (iParam0 == 0x00000018)
			{
				unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], 0x00000000);
			}
			Global_12A3B = 0x00000000;
			if (Global_2591A7.f_42 != 0x00000000)
			{
				func_287(&Global_2591A7, Global_2591A6);
				Global_2591A7.f_42 = 0x00000000;
			}
			return;
		}
		if (Global_2591A7.f_42 != 0x00000000)
		{
			func_287(&Global_2591A7, Global_2591A6);
			Global_2591A7.f_42 = 0x00000000;
		}
		func_461("Vehicle to be handed over doesn't exist.");
		Global_12A3C = 0xFFFFFFFF;
		Global_12A3B = 0x00000000;
	}
	if (Global_126B1[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_126B1[iParam0] = 0x00000000;
			func_461("Leave area flag cleared");
		}
		if (((iParam0 == 0x00000000 && iLocal_129 == 0x00000000) || (iParam0 == 0x00000006 && iLocal_129 == 0x00000002)) || (iParam0 == 0x00000002 && iLocal_129 == 0x00000001))
		{
			Global_126B1.f_248 = { 0f, 0f, 0f };
			Global_126B1.f_24B = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = 0x00000000;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 0x00000018 && Global_1B416.f_7FE8.f_7A6[Local_131.f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Local_131.f_E] > 0x00000003) && Local_131.f_4 != 0x00000000) && func_67(iParam0, 0x00000000)) && func_39(Local_131.f_4, 0x00000000))
		{
			iVar12 = func_50();
			iVar13 = Global_1B416.f_7FE8.f_12C1;
			func_458(&iVar13, 0x00000000, 0x00000000, 0x00000011, 0x00000000, 0x00000000, 0x00000000);
			if (func_368(iVar12, iVar13))
			{
				func_287(&(Global_1B416.f_7FE8.f_45[Local_131.f_E /*78*/]), Global_1B416.f_7FE8.f_15D7);
				func_460(iParam0);
				Global_126B1[iParam0] = 0x00000001;
				func_461("Cannot be created: Vehicle ready for impound");
				Global_2591A7.f_42 = 0x00000000;
				return;
			}
		}
		if (((iParam0 == 0x00000000 && iLocal_129 == 0x00000000) || (iParam0 == 0x00000006 && iLocal_129 == 0x00000002)) || (iParam0 == 0x00000002 && iLocal_129 == 0x00000001))
		{
			bVar11 = 0x00000001;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0x00000000 && iLocal_129 == 0x00000000) || (iParam0 == 0x00000006 && iLocal_129 == 0x00000002)) || (iParam0 == 0x00000002 && iLocal_129 == 0x00000001))
	{
		Global_126B1.f_248 = { 0f, 0f, 0f };
		Global_126B1.f_24B = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0x00000000)
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0x00000000))
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0x00000000))
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000E) && !func_67(iParam0, 0x00000005))
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_456() && func_455(0x00000000)) && iParam0 != 0x00000018) && iParam0 != 0x00000019) && iParam0 != 0x00000023)
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000A))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iParam0]))
		{
			Global_126B1[iParam0] = 0x00000001;
			func_461("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_126B1.f_1E4[iParam0] = 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000006))
	{
		if (func_454(Local_131.f_4, 0xFFFFFFFF))
		{
			Global_126B1[iParam0] = 0x00000001;
			func_461("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_453(Local_131.f_4, 0xFFFFFFFF))
		{
			Global_126B1[iParam0] = 0x00000001;
			func_461("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001D))
	{
		if (Local_56.f_3 == 0x00000000)
		{
			return;
		}
	}
	if (func_452(iParam0))
	{
		Global_126B1[iParam0] = 0x00000001;
		func_461("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		if ((iParam0 == 0x0000000C || iParam0 == 0x0000000D) || iParam0 == 0x0000000E)
		{
			Global_126B1[iParam0] = 0x00000001;
			func_461("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0x00000000;
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000013))
	{
		iVar14 = 0x00000002;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000014))
	{
		iVar14 = 0x00000001;
	}
	if ((iParam0 == 0x00000018 && Global_1B416.f_7FE8.f_7A6[Local_131.f_E] > 0x00000000) && Global_1B416.f_7FE8.f_7A6[Local_131.f_E] <= 0x00000003)
	{
		if (unk_0x7D8B2A8F9EA82DB7(Local_131.f_4))
		{
			iVar14 = 0x00000002;
			Local_131.f_C = (Global_1B416.f_7FE8.f_7A6[Local_131.f_E] - 0x00000001);
		}
		else if (unk_0x8E39AC3C76C8AA58(Local_131.f_4))
		{
			iVar14 = 0x00000001;
			Local_131.f_C = (Global_1B416.f_7FE8.f_7A6[Local_131.f_E] - 0x00000001);
		}
	}
	if (iVar14 != 0x00000000)
	{
		if (func_451(Local_131.f_C, iVar14, Local_131, -1f))
		{
			Global_126B1[iParam0] = 0x00000001;
			func_461("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 0x00000018)
			{
				func_480(iParam0, 0x00000000);
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000013) || unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000014))
		{
			if (iVar14 == 0x00000002)
			{
				if (Global_1777B[Local_131.f_C /*3*/][0x00000001] != 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - Global_1777B[Local_131.f_C /*3*/][0x00000001]) < unk_0xFBFCAFA958ABA1CE() * 180)
				{
					Global_126B1[iParam0] = 0x00000001;
					func_461("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar15, "...", 24);
					StringIntConCat(&vVar15, ((unk_0xFBFCAFA958ABA1CE() * 180 - (unk_0x1C0640BA9A7327B3() - Global_1777B[Local_131.f_C /*3*/][0x00000001])) / 0x000003E8), 24);
					StringConCat(&vVar15, " seconds", 24);
					func_461(&vVar15);
					return;
				}
			}
			else if (iVar14 == 0x00000001)
			{
				if (Global_1777B[Local_131.f_C /*3*/][0x00000000] != 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - Global_1777B[Local_131.f_C /*3*/][0x00000000]) < unk_0xFBFCAFA958ABA1CE() * 180)
				{
					Global_126B1[iParam0] = 0x00000001;
					func_461("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar16, "...", 24);
					StringIntConCat(&vVar16, ((unk_0xFBFCAFA958ABA1CE() * 180 - (unk_0x1C0640BA9A7327B3() - Global_1777B[Local_131.f_C /*3*/][0x00000001])) / 0x000003E8), 24);
					StringConCat(&vVar16, " seconds", 24);
					func_461(&vVar16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0x00000000 && iLocal_129 == 0x00000000) || (iParam0 == 0x00000006 && iLocal_129 == 0x00000002)) || (iParam0 == 0x00000002 && iLocal_129 == 0x00000001))
	{
		Global_126B1.f_248 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0x00000000)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_C, iVar14);
		unk_0x523BCC9DC80CD82F(iLocal_49[iParam0]);
		unk_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 0x00000002);
		if (!unk_0xB87F6CF6E5628C67(iLocal_49[iParam0]))
		{
			func_461("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_450(iLocal_49[iParam0], Local_131, 0x00000001))
		{
			func_461("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x536F1BE96C726C4B(Local_131, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x28F5E4DA506AC0CA(Local_131, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (iVar14 == 0x00000002)
		{
			func_445(&(Global_126B1.f_8B[iParam0]), Local_131.f_C, Local_131, Local_131.f_3, 0x00000000, 0x00000002);
		}
		else if (iVar14 == 0x00000001)
		{
			func_445(&(Global_126B1.f_8B[iParam0]), Local_131.f_C, Local_131, Local_131.f_3, 0x00000000, 0x00000001);
		}
		else
		{
			Global_126B1[iParam0] = 0x00000001;
			func_461("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x523BCC9DC80CD82F(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		unk_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 0x00000002);
		if (!unk_0xB87F6CF6E5628C67(Local_131.f_4))
		{
			func_461("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_450(Local_131.f_4, Local_131, 0x00000001))
		{
			func_461("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x536F1BE96C726C4B(Local_131, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x28F5E4DA506AC0CA(Local_131, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000017))
		{
			unk_0x5CDCBCDA2C651E97(Local_131);
		}
		if ((iParam0 == 0x0000000F || iParam0 == 0x00000010) || iParam0 == 0x00000011)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_126B1.f_8B[iParam0] = unk_0x122AAB0B1D6F55AD(Local_131.f_4, Local_131, Local_131.f_3, 0x00000001, 0x00000001, 0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000A))
		{
			if (unk_0xC41A9202669A24C4(Local_131.f_4))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_7FE8.f_45[Local_131.f_E /*78*/].f_4D), 0x00000016);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8.f_45[Local_131.f_E /*78*/].f_4D, 0x0000000E))
			{
				func_32(Global_126B1.f_8B[iParam0], &Local_141);
				func_444(Local_141.f_4D, &(Global_1B416.f_7FE8.f_45[Local_131.f_E /*78*/].f_4D), Local_131.f_4);
				unk_0x0674E58A79778E99(&(Global_1B416.f_7FE8.f_45[Local_131.f_E /*78*/].f_4D), 0x0000000E);
			}
			func_381(Global_126B1.f_8B[iParam0], &(Global_1B416.f_7FE8.f_45[Local_131.f_E /*78*/]), 0x00000000, 0x00000001);
			Global_126B1.f_1E4[iParam0] = Global_126B1.f_8B[iParam0];
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000009))
			{
				unk_0xC002508A277213DE(Global_126B1.f_8B[iParam0], Local_131.f_A, Local_131.f_B);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000008))
			{
				unk_0x71EDC33E5A423750(Global_126B1.f_8B[iParam0], 0x00000002);
				unk_0x6EEAA5C21760E9DB(Global_126B1.f_8B[iParam0], 0x00000000);
				unk_0x1FC8B874F2C46E6E(Global_126B1.f_8B[iParam0], 0x00000000);
				unk_0x9BAC3470A92767CB(Global_126B1.f_8B[iParam0], 0x00000000);
				unk_0xA072915CE3E5C457(Global_126B1.f_8B[iParam0], 0x00000000);
				unk_0x4D647C1236C18D14(Global_126B1.f_8B[iParam0], 0x00000000);
				unk_0xA22F71BBC8173C39(Global_126B1.f_8B[iParam0], 0x00000000);
				unk_0xE121AE1BBF90E186(Global_126B1.f_8B[iParam0], 0x00000001);
				unk_0x1E9649458B15960F(Global_126B1.f_8B[iParam0], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
	{
		func_443("Created - Coords: ", Local_131);
		func_442("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0x00000000 && iLocal_129 == 0x00000000) || (iParam0 == 0x00000006 && iLocal_129 == 0x00000002)) || (iParam0 == 0x00000002 && iLocal_129 == 0x00000001))
		{
			Global_126B1.f_248 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				unk_0xC002508A277213DE(Global_126B1.f_8B[iParam0], 0x00000079, 0x00000015);
				unk_0x58A0C35FA7CA6162(Global_126B1.f_8B[iParam0], 0x00000008, 0x0000009C);
				break;
			
			case joaat("besra"):
				unk_0xC002508A277213DE(Global_126B1.f_8B[iParam0], 0x0000007A, 0x00000059);
				unk_0x58A0C35FA7CA6162(Global_126B1.f_8B[iParam0], 0x00000019, 0x00000079);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0xC002508A277213DE(Global_126B1.f_8B[iParam0], 0x00000000, 0x00000000);
				unk_0x58A0C35FA7CA6162(Global_126B1.f_8B[iParam0], 0x00000005, 0x0000009C);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0xC002508A277213DE(Global_126B1.f_8B[iParam0], 0x00000083, 0x00000084);
				unk_0x58A0C35FA7CA6162(Global_126B1.f_8B[iParam0], 0x00000084, 0x0000009C);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0xC002508A277213DE(Global_126B1.f_8B[iParam0], 0x0000009F, 0x00000000);
				unk_0x58A0C35FA7CA6162(Global_126B1.f_8B[iParam0], 0x000000A0, 0x0000009C);
				break;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000016))
		{
			unk_0xB078AFA7242F1F7B(Global_126B1.f_8B[iParam0], 0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001E))
		{
			unk_0x0674E58A79778E99(&(Local_131.f_9), 0x0000001F);
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001A))
		{
			unk_0x71EDC33E5A423750(Global_126B1.f_8B[iParam0], 0x00000007);
			unk_0xAACF4BD59CB35944(Global_126B1.f_8B[iParam0], 0x00000001);
		}
		func_441(Global_126B1.f_8B[iParam0], iParam0);
		if (!unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001D) && !unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001E))
		{
			unk_0xB9FD7450C0DAB575(Global_126B1.f_8B[iParam0], 0x40A00000);
		}
		unk_0xCCD53AC1B5D5E456(Global_126B1.f_8B[iParam0], 0f);
		unk_0x120A395B0ECB8EA5(Global_126B1.f_8B[iParam0], 0x00000001);
		unk_0x626D5ADA3EFAE431(Global_126B1.f_8B[iParam0], unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000005));
	}
	unk_0x0674E58A79778E99(&(uLocal_48[iParam0]), 0x00000000);
	unk_0x0674E58A79778E99(&(uLocal_48[iParam0]), 0x00000001);
	Global_126B1[iParam0] = 0x00000001;
	if (iVar14 != 0x00000000)
	{
		Global_126B1.f_45[iParam0] = 0x00000001;
	}
	iVar17 = func_177(0x000001CA, 0xFFFFFFFF, 0xFFFFFFFF);
	if (iVar17 != 0x00000000 && iVar17 == iParam0)
	{
		iLocal_169 = Global_126B1.f_8B[iParam0];
	}
	if (iParam0 == 0x00000018)
	{
		Global_2591A7.f_42 = 0x00000000;
	}
}

void func_441(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (iParam1)
		{
			case 0x00000024:
				unk_0x26E12C087E2B91F8(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 0x00000001);
				unk_0x26E12C087E2B91F8(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 0x00000001);
				unk_0x26E12C087E2B91F8(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 0x00000001);
				break;
			
			case 0x00000023:
				unk_0xD3421E391490133B(iParam0, 0x00000006, 0x00000000);
				unk_0xD3421E391490133B(iParam0, 0x00000001, 0x00000001);
				break;
			}
	}
}

void func_442(char* sParam0, float fParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_443(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_444(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x7FFFFFFF;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x0674E58A79778E99(&iVar0, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, 0x00000001);
			break;
		
		case joaat("kalahari"):
			unk_0x0674E58A79778E99(&iVar0, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, 0x00000001);
			unk_0x0674E58A79778E99(&iVar0, 0x00000002);
			break;
		
		case joaat("voltic"):
			unk_0x0674E58A79778E99(&iVar0, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, 0x00000001);
			unk_0x0674E58A79778E99(&iVar0, 0x00000002);
			break;
		
		case joaat("banshee"):
			unk_0x0674E58A79778E99(&iVar0, 0x00000000);
			break;
		
		case joaat("stalion"):
			unk_0x0674E58A79778E99(&iVar0, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, 0x00000001);
			unk_0x0674E58A79778E99(&iVar0, 0x00000002);
			break;
		
		case joaat("chino"):
			unk_0x0674E58A79778E99(&iVar0, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, 0x00000001);
			unk_0x0674E58A79778E99(&iVar0, 0x00000002);
			break;
	}
	iVar1 = (0x7FFFFFFF - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_445(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_B = 0x0000000C;
		Var2.f_1F = 0x00000031;
		Var2.f_51 = 0x00000002;
		func_24(iParam1, &Var2, iParam5);
		if (Var2 == 0x00000000)
		{
			return 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (unk_0x134B62B726CEC8E6(*iParam0) != Var2)
			{
			}
			return 0x00000001;
		}
		if ((iParam1 == 0x00000000 && !Global_1B416.f_936.f_21B.f_10DC) && Global_1B416.f_2378.f_63.f_3A[0x00000083])
		{
			Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/] = 0x00000000;
		}
		if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x523BCC9DC80CD82F(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/]);
			if (unk_0xB87F6CF6E5628C67(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0x00000000, 0x00000000, 0x00000000);
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
				unk_0x626D5ADA3EFAE431(*iParam0, 0x00000000);
				unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
				unk_0xD458AC1C1D29C3B4(*iParam0, 0x000004E2, 0x00000000);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var2.f_3 = 0x000004E2;
				unk_0xC002508A277213DE(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_7, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var2.f_2);
				iVar3 = 0x00000000;
				while (iVar3 < 0x0000000C)
				{
					unk_0xD3421E391490133B(*iParam0, iVar3 + 1, !Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_449(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1A >= 0x00000000 && Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1A < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_54, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_55, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_56);
				unk_0xA22F71BBC8173C39(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_58);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_57);
				unk_0x85654A532F20966B(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5D, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5E, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x7726E33AC3B60544(*iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001C));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001D));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001E));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001F));
				if (unk_0x579935D850368851(*iParam0) > 0x00000001 && Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_59 >= 0x00000000)
				{
					unk_0x446EA2500F021666(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A > 0xFFFFFFFF)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A == 0x00000006)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_382(iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1F), &(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0947AEED9914905B(*iParam0, Var2.f_60);
				if (iParam1 == 0x00000002)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bodhi2"))
					{
						func_447(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71199B01895C6202(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/]);
				}
				func_446(*iParam0, iParam1);
				return 0x00000001;
			}
		}
		else if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x523BCC9DC80CD82F(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/]);
			if (unk_0xB87F6CF6E5628C67(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0x00000000, 0x00000000, 0x00000000);
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
				unk_0x626D5ADA3EFAE431(*iParam0, 0x00000000);
				unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
				unk_0xD458AC1C1D29C3B4(*iParam0, 0x000004E2, 0x00000000);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var2.f_3 = 0x000004E2;
				unk_0xC002508A277213DE(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_7, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var2.f_2);
				iVar4 = 0x00000000;
				while (iVar4 < 0x0000000C)
				{
					unk_0xD3421E391490133B(*iParam0, iVar4 + 1, !Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_449(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1A >= 0x00000000 && Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1A < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_54, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_55, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_56);
				unk_0xA22F71BBC8173C39(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_58);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_57);
				unk_0x85654A532F20966B(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5D, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5E, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x7726E33AC3B60544(*iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001C));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001D));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001E));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001F));
				if (unk_0x579935D850368851(*iParam0) > 0x00000001 && Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_59 >= 0x00000000)
				{
					unk_0x446EA2500F021666(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A > 0xFFFFFFFF)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A == 0x00000006)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_382(iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1F), &(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0947AEED9914905B(*iParam0, Var2.f_60);
				if (iParam1 == 0x00000002)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bodhi2"))
					{
						func_447(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71199B01895C6202(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/]);
				}
				func_446(*iParam0, iParam1);
				return 0x00000001;
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(Var2);
			if (unk_0xB87F6CF6E5628C67(Var2))
			{
				bVar5 = 0x00000001;
				*iParam0 = unk_0x122AAB0B1D6F55AD(Var2, vParam2, fParam3, 0x00000001, 0x00000001, 0x00000000);
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
				unk_0x626D5ADA3EFAE431(*iParam0, 0x00000000);
				unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
				StringCopy(&cVar6, unk_0x7888A5D2621AAF2D(*iParam0), 16);
				unk_0xD458AC1C1D29C3B4(*iParam0, 0x000004E2, 0x00000000);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var2.f_3 = 0x000004E2;
				unk_0xC002508A277213DE(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Var2.f_7, Var2.f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var2.f_2);
				iVar7 = 0x00000000;
				while (iVar7 < 0x0000000C)
				{
					unk_0xD3421E391490133B(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Var2.f_18);
				}
				if (func_449(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0x00000000 && Var2.f_1A < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Var2.f_1A);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Var2.f_54, Var2.f_55, Var2.f_56);
				unk_0xA22F71BBC8173C39(*iParam0, Var2.f_58);
				unk_0x8BF0BEF985EB6D43(*iParam0, Var2.f_57);
				unk_0x85654A532F20966B(*iParam0, Var2.f_5D, Var2.f_5E, Var2.f_5F);
				unk_0x7726E33AC3B60544(*iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001C));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001D));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001E));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001F));
				if (unk_0x579935D850368851(*iParam0) > 0x00000001 && Var2.f_59 >= 0x00000000)
				{
					unk_0x446EA2500F021666(*iParam0, Var2.f_59);
				}
				if (Var2.f_5A > 0xFFFFFFFF)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Var2.f_5A == 0x00000006)
							{
								unk_0x920DACD685EA4957(*iParam0, Var2.f_5A);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Var2.f_5A);
						}
					}
				}
				func_382(iParam0, &(Var2.f_1F), &(Var2.f_51));
				unk_0x0947AEED9914905B(*iParam0, Var2.f_60);
				if (iParam1 == 0x00000001)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bagger") && !Global_1B416.f_2378.f_63.f_3A[0x00000076])
					{
						unk_0x55A3C4ED4728EA42(*iParam0, &cVar6);
						bVar5 = 0x00000000;
					}
				}
				else if (iParam1 == 0x00000002)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bodhi2"))
					{
						func_447(iParam0);
					}
				}
				else if (((iParam1 == 0x00000000 && !Global_1B416.f_936.f_21B.f_10DC) && Global_1B416.f_2378.f_63.f_3A[0x00000083]) && unk_0x134B62B726CEC8E6(*iParam0) == joaat("tailgater"))
				{
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000006, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000E, 0x00000007, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000B, 0x00000002, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000002, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000007, 0x00000005, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000000, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000003, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000D, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000004, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000C, 0x00000002, 0x00000000);
					unk_0x73BEC6F1685574E6(*iParam0, 0x00000016, 0x00000001);
					unk_0x920DACD685EA4957(*iParam0, 0x00000002);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000017, 0x0000000B, 0x00000000);
					unk_0x8BF0BEF985EB6D43(*iParam0, 0x00000002);
					Global_1B416.f_936.f_21B.f_10DC = 0x00000001;
					func_235(iParam1, iParam0, 0x00000000, 0x00000001);
				}
				if (bParam4)
				{
					unk_0x71199B01895C6202(Var2);
				}
				if (bVar5)
				{
					func_446(*iParam0, iParam1);
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_446(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (!unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			Global_1774B[iVar0] = iParam0;
			Global_17755[iVar0] = iParam1;
			Global_1775F[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_1775F[iVar0]))
			{
				Global_1777B[iParam1 /*3*/][0x00000000] = 0xFFFFFFFF;
			}
			else
			{
				Global_1777B[iParam1 /*3*/][0x00000001] = 0xFFFFFFFF;
			}
			iVar0 = 0x00000009;
		}
		if (iVar0 == 0x00000008)
		{
		}
		iVar0++;
	}
}

void func_447(var uParam0)
{
	if (!func_448(*uParam0))
	{
		unk_0xD3421E391490133B(*uParam0, 0x00000005, !Global_1B416.f_2378.f_63.f_3A[0x00000077]);
	}
}

bool func_448(int iParam0)
{
	return unk_0xDD62D560CFE11A27(iParam0, 0x00000005);
}

int func_449(var uParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else if (Global_1B416.f_4E91.f_105)
	{
		*uParam0 = { Global_1B416.f_4E91.f_10B };
		*iParam1 = Global_1B416.f_4E91.f_10F;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_450(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if ((iParam2 && unk_0x757EF87A33649210()) && unk_0x8A22C4C08282BF26(joaat("startup_positioning")) > 0x00000000)
	{
		func_461("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0x00000000;
	}
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar0, &vVar1);
	fVar2 = unk_0x0EB28750412C3A5A(vVar1, vVar0, 0x00000001);
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam1, 0x00000001) < (fVar2 * 0.5f))
	{
		func_442("player is in vehicle bounds - fLength: ", fVar2);
		func_442("player is in vehicle bounds - fDistance: ", unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam1, 0x00000001));
		return 0x00000001;
	}
	return 0x00000000;
}

int func_451(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0x00000000;
	}
	Var1.f_B = 0x0000000C;
	Var1.f_1F = 0x00000031;
	Var1.f_51 = 0x00000002;
	iVar2 = 0x00000000;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar0], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == iVar2 && Global_17755[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Global_1774B[iVar0], 0x00000000), vParam2, 0x00000001) <= fParam3)
					{
						return 0x00000001;
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000014)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_454(Local_131.f_4, 0xFFFFFFFF) || func_453(Local_131.f_4, 0xFFFFFFFF)) || unk_0x8A22C4C08282BF26(joaat("exile2")) > 0x00000000) || !func_437(0x0000001E))
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 == 0x00000018)
	{
		if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && !unk_0x437347B10A200C4B(Global_126B1.f_1E4[0x00000014], 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
		{
			if (Local_131.f_4 == unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]))
			{
				unk_0x9412F17E127D9759(Global_126B1.f_1E4[0x00000014], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_A && iVar1 == Local_131.f_B)
				{
					func_282(0x00000014);
				}
			}
		}
	}
	return 0x00000000;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x0000087E;
	iVar1 = unk_0x83C1D4B63BBD91F6(Local_131, 200f, iParam0, iVar0);
	if ((unk_0xC844350D5D58C99A(iVar1) && unk_0xDF1306B443CD3D15(iVar1, 0x00000000)) && unk_0x134B62B726CEC8E6(iVar1) == iParam0)
	{
		if (iParam1 == 0xFFFFFFFF || unk_0xF22DC2D0CA24A151(iVar1) == iParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_454(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar0);
	iVar1 = 0x00000000;
	while (iVar1 < iVar2)
	{
		if ((unk_0xC844350D5D58C99A(uVar0[iVar1]) && unk_0xDF1306B443CD3D15(uVar0[iVar1], 0x00000000)) && unk_0x134B62B726CEC8E6(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == 0xFFFFFFFF || unk_0xF22DC2D0CA24A151(uVar0[iVar1]) == iParam1)
			{
				return 0x00000001;
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_455(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_364(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_456()
{
	return Global_126B1.f_8A;
}

float func_457(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000039:
			return -0.7f;
			break;
		
		case 0x0000003F:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_458(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_372(*uParam0);
	iVar3 = func_371(*uParam0);
	iVar4 = func_370(*uParam0);
	iVar5 = func_369(*uParam0);
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
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_459(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_459(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_460(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000D))
	{
		func_480(iParam0, 0x00000000);
	}
}

void func_461(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
	}
}

void func_462(char* sParam0, int iParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (iParam1 != 0x00000000)
		{
		}
	}
}

void func_463(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	bVar0 = 0x00000000;
	iVar3 = 0xFFFFFFFF;
	iVar4 = 0x4728C7F2;
	switch (iParam0)
	{
		case 0x0000000C:
		case 0x0000000D:
			bVar0 = !func_67(iParam0, 0x00000005);
			vVar1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0x00000000;
			iVar4 = 0x099300CC;
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			bVar0 = !func_67(iParam0, 0x00000005);
			vVar1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 0x00000001;
			break;
		
		case 0x00000012:
		case 0x00000013:
			bVar0 = !func_67(iParam0, 0x00000005);
			bVar0 = 0x00000001;
			vVar1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 0x00000002;
			break;
		
		case 0x00000015:
			bVar0 = !func_67(iParam0, 0x00000005);
			vVar1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000016:
			bVar0 = !func_67(iParam0, 0x00000005);
			vVar1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000017:
			bVar0 = !func_67(iParam0, 0x00000005);
			vVar1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 0x00000005;
			break;
	}
	if (bVar0 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar1, 0x00000001) < 250f)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_146[iVar3]))
		{
			unk_0x523BCC9DC80CD82F(iVar4);
			iLocal_147 = 0x00000001;
			if (unk_0xB87F6CF6E5628C67(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = unk_0xB0BE3DFBBB59A620(iVar4, vVar1, 0x00000000, 0x00000001, 0x00000000);
					unk_0xC023D1C4BF532815(iLocal_146[iVar3], 0f, 0f, fVar2, 0x00000002, 0x00000001);
					unk_0x98868AF51859FC75(iLocal_146[iVar3], 0x00000000);
					unk_0x1E9649458B15960F(iLocal_146[iVar3], 0x00000001);
					unk_0x71199B01895C6202(iVar4);
					iLocal_147 = 0x00000000;
				}
			}
		}
	}
	else if (iVar3 != 0xFFFFFFFF)
	{
		if ((unk_0xC844350D5D58C99A(iLocal_146[iVar3]) && !unk_0x0A059E0DB9253280(iLocal_146[iVar3])) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar1, 0x00000001) > 255f)
		{
			unk_0xF690C84DADBB3551(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				unk_0x71199B01895C6202(iVar4);
				iLocal_147 = 0x00000000;
			}
		}
	}
}

void func_464(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (func_67(iParam0, 0x00000000) && (!unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000E) || func_67(iParam0, 0x00000005)))
	{
		bVar0 = 0x00000001;
	}
	if (Global_126B1.f_15A[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_F, 0f, 0f, 0f, 0x00000000))
		{
			if (!bVar0)
			{
				if (Global_126B1.f_15A[iParam0])
				{
					unk_0x2952D66A502EA873(Global_126B1.f_19F[iParam0], 0x00000000);
				}
			}
			else if (!Global_126B1.f_15A[iParam0])
			{
				Global_126B1.f_19F[iParam0] = unk_0x7D6CA5F52B3748BF(Local_131.f_F, Local_131.f_12, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			}
		}
		Global_126B1.f_15A[iParam0] = bVar0;
	}
}

void func_465(int iParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000F))
	{
		if (func_67(iParam0, 0x00000000) && !func_67(iParam0, 0x00000005))
		{
			iVar0 = 0x00000091;
			if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000010))
			{
				iVar0 = func_466(0x00000009);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000012))
			{
				iVar0 = func_466(0x00000004);
			}
			if (iVar0 == Local_131.f_C)
			{
				func_330(iParam0, 0x00000005, 0x00000001);
			}
		}
	}
}

int func_466(int iParam0)
{
	return Global_1B416.f_6143[iParam0 /*4*/];
}

void func_467(int iParam0)
{
	if (func_67(iParam0, 0x00000000) && !func_67(iParam0, 0x00000003))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000004))
		{
			func_330(iParam0, 0x00000003, 0x00000001);
		}
		else
		{
			func_330(iParam0, 0x00000003, 0x00000001);
		}
	}
}

void func_468(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = 0x00000001;
	if (func_67(iParam0, 0x00000000) && bLocal_130)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000000) || (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000002) && !func_67(iParam0, 0x00000002)))
		{
			if ((!unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000015) || (((((((!func_27(0x00000000) && !func_27(0x00000003)) && !func_27(0x00000002)) && !func_27(0x00000004)) && !func_27(0x00000009)) && !func_27(0x0000000A)) && !func_27(0x0000000D)) && !func_27(0x0000000E))) && ((unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000 || func_67(iParam0, 0x00000005)) || !unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000001C)))
			{
				bVar0 = 0x00000000;
				if (!unk_0xE4EDC4B0E92C078B(Global_126B1.f_D0[iParam0]))
				{
					if (func_437(0x00000000))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000E) && !func_67(iParam0, 0x00000005))
						{
							Global_126B1.f_D0[iParam0] = unk_0x6CC513A908911CF0(Local_140.f_37);
							if (Local_140.f_3A != 0xFFFFFFFF)
							{
								unk_0xBC8E0A7390523199(Global_126B1.f_D0[iParam0], Local_140.f_3A);
								if (!unk_0xEA6BC48857E0AC4C(&(Local_140.f_3B)))
								{
									unk_0xDC5B2F9D0CCE3A10(Global_126B1.f_D0[iParam0], &(Local_140.f_3B));
								}
							}
						}
						else if (func_67(iParam0, 0x00000005) && (((iParam0 == 0x00000015 || iParam0 == 0x00000016) || iParam0 == 0x00000017) || iParam0 == 0x0000000E))
						{
							Global_126B1.f_D0[iParam0] = unk_0x6CC513A908911CF0(Local_140.f_37);
							if (Local_131.f_D != 0xFFFFFFFF)
							{
								unk_0xBC8E0A7390523199(Global_126B1.f_D0[iParam0], Local_131.f_D);
								if (!unk_0xEA6BC48857E0AC4C(&(Local_140.f_3B)))
								{
									unk_0xDC5B2F9D0CCE3A10(Global_126B1.f_D0[iParam0], &(Local_140.f_3B));
								}
								if (Local_131.f_C == 0x00000000)
								{
									iVar1 = 0x0000002A;
								}
								else if (Local_131.f_C == 0x00000001)
								{
									iVar1 = 0x0000002B;
								}
								else if (Local_131.f_C == 0x00000002)
								{
									iVar1 = 0x0000002C;
								}
								unk_0x61755AC17D8F538E(Global_126B1.f_D0[iParam0], iVar1);
							}
						}
						else
						{
							Global_126B1.f_D0[iParam0] = unk_0x6CC513A908911CF0(Local_131);
							if (Local_131.f_D != 0xFFFFFFFF)
							{
								unk_0xBC8E0A7390523199(Global_126B1.f_D0[iParam0], Local_131.f_D);
								if (!unk_0xEA6BC48857E0AC4C(&(Local_140.f_3B)))
								{
									unk_0xDC5B2F9D0CCE3A10(Global_126B1.f_D0[iParam0], &(Local_140.f_3B));
								}
								if ((((((((iParam0 == 0x0000000C || iParam0 == 0x0000000D) || iParam0 == 0x0000000E) || iParam0 == 0x0000000F) || iParam0 == 0x00000010) || iParam0 == 0x00000011) || iParam0 == 0x00000012) || iParam0 == 0x00000013) || iParam0 == 0x00000014)
								{
									if (Local_131.f_C == 0x00000000)
									{
										iVar2 = 0x0000002A;
									}
									else if (Local_131.f_C == 0x00000001)
									{
										iVar2 = 0x0000002B;
									}
									else if (Local_131.f_C == 0x00000002)
									{
										iVar2 = 0x0000002C;
									}
									unk_0x61755AC17D8F538E(Global_126B1.f_D0[iParam0], iVar2);
								}
							}
						}
						unk_0x6ABCCE651368DB93(Global_126B1.f_D0[iParam0], !unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000001));
						unk_0xF412DD40DE84CE72(Global_126B1.f_D0[iParam0], 0x00000000);
						unk_0x2A065371C9D96655(Global_126B1.f_D0[iParam0], 0x00000003);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0xE4EDC4B0E92C078B(Global_126B1.f_D0[iParam0]))
		{
			unk_0x142CC44DB769B57E(&(Global_126B1.f_D0[iParam0]));
		}
	}
}

void func_469(int iParam0)
{
	if (func_67(iParam0, 0x00000000) && !func_67(iParam0, 0x00000001))
	{
		if (func_67(iParam0, 0x00000004))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000003))
			{
				func_470(&(Local_131.f_5), 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
				func_330(iParam0, 0x00000001, 0x00000001);
			}
			else
			{
				func_330(iParam0, 0x00000001, 0x00000001);
			}
		}
	}
}

void func_470(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_290(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x00000007) || Local_131.f_C == iLocal_129)
	{
		bLocal_130 = 0x00000001;
	}
	else
	{
		bLocal_130 = 0x00000000;
	}
	if (func_27(0x0000000E))
	{
		bLocal_130 = 0x00000000;
	}
	if ((bLocal_130 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0xEAE0D21A50E6C7F4(Local_131.f_9, 0x0000000E))
	{
		if (Local_56.f_2 == 0x00000000 && Local_56.f_3 == 0x00000000)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56 == iParam0)
			{
				if (Local_56 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_1D = { Local_140 };
					Local_56 = iParam0;
					iVar0 = 0x00000000;
					while (iVar0 < Global_126B1.f_250)
					{
						Global_126B1.f_250[iVar0] = 0xFFFFFFFF;
						iVar0++;
					}
					Local_56.f_6 = 0xFFFFFFFF;
					if ((Local_56 == 0x0000000C || Local_56 == 0x0000000D) || Local_56 == 0x0000000E)
					{
						Local_56.f_6 = 0x00000000;
					}
					else if ((Local_56 == 0x0000000F || Local_56 == 0x00000010) || Local_56 == 0x00000011)
					{
						Local_56.f_6 = 0x00000001;
					}
					else if ((Local_56 == 0x00000012 || Local_56 == 0x00000013) || Local_56 == 0x00000014)
					{
						Local_56.f_6 = 0x00000002;
					}
					else if ((Local_56 == 0x00000015 || Local_56 == 0x00000016) || Local_56 == 0x00000017)
					{
						Local_56.f_6 = 0x00000003;
					}
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000138)
					{
						iVar2 = func_132(iVar0, 0xFFFFFFFF);
						if (iVar2 != 0x00000000)
						{
							if (iVar1 < Global_126B1.f_250)
							{
								switch (Local_56.f_6)
								{
									case 0x00000003:
										if (func_65(iVar2))
										{
											Global_126B1.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0x00000002:
										if (unk_0xAFB8495D36825275(iVar2))
										{
											Global_126B1.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0x00000001:
										if ((unk_0xA7082C42B8809BF2(iVar2) || unk_0x83496B932152D4D4(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_126B1.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0x00000000:
										if (func_66(iVar2))
										{
											Global_126B1.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56 == iParam0)
	{
		Local_56 = 0xFFFFFFFF;
		Local_56.f_1 = 99999.99f;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000000))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_8B[iParam0], 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000001) || unk_0xEAE0D21A50E6C7F4(uLocal_48[iParam0], 0x00000003))
						{
							unk_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 0x00000000);
							func_330(iParam0, 0x00000004, 0x00000001);
							func_330(iParam0, 0x00000002, 0x00000001);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uLocal_48[iParam0]), 0x00000003);
					}
				}
			}
		}
	}
	if (iParam0 == 0x0000000E)
	{
		if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iParam0]) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[iParam0], 0x00000000)) && unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (unk_0x3D1053F9EB43B7AD(Global_126B1.f_1E4[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xDC06498DD25E7E3E(Global_126B1.f_1E4[iParam0], 0f);
					iLocal_171 = 0x00000001;
				}
			}
			else if (!unk_0x3D1053F9EB43B7AD(Global_126B1.f_1E4[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0xDC06498DD25E7E3E(Global_126B1.f_1E4[iParam0], 1f);
				iLocal_171 = 0x00000000;
			}
		}
		else
		{
			iLocal_171 = 0x00000000;
		}
	}
}

int func_472()
{
	return 0x00000001;
}

var func_473(var uParam0, int iParam1)
{
	uParam0->f_50 = 0x00000000;
	uParam0->f_45 = 0x00000000;
	StringCopy(&(uParam0->f_3B), "", 16);
	switch (iParam1)
	{
		case 0x0000000C:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_2C = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_2F = 146.6324f;
			uParam0->f_E = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_E.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_E.f_C = 38.2303f;
			uParam0->f_E.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_E.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_1D.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_1D.f_C = 38.2303f;
			uParam0->f_1D.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_1D.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_A = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_D = 60.1875f;
			uParam0->f_30 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_33 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_36 = 60.1875f;
			uParam0->f_37 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_3A = 0x00000174;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME", 16);
			uParam0->f_43 = 0x00150928;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x0000000D:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_2C = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_2F = 146.6324f;
			uParam0->f_E = { -1184.2f, -3345f, 17.5f };
			uParam0->f_E.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_E.f_C = 30.3f;
			uParam0->f_E.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_E.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_1D.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_1D.f_C = 37.8f;
			uParam0->f_1D.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_1D.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_A = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_D = 66.1875f;
			uParam0->f_30 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_33 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_36 = 66.1875f;
			uParam0->f_37 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_3A = 0x00000174;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME", 16);
			uParam0->f_43 = 0x00150928;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_2C = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_2F = 14.8763f;
			uParam0->f_E = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_E.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_E.f_C = 50f;
			uParam0->f_E.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_E.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_1D.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_1D.f_C = 50f;
			uParam0->f_1D.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_1D.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_A = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_D = 28.125f;
			uParam0->f_30 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_33 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_36 = 28.125f;
			uParam0->f_37 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3A = 0x00000174;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME2", 16);
			uParam0->f_43 = 0x00150928;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000012:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_A = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_2F = 142.6382f;
			uParam0->f_E = { -738f, -1440f, 6.3f };
			uParam0->f_E.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_E.f_C = 45f;
			uParam0->f_E.f_6 = { -738f, -1440f, 6f };
			uParam0->f_E.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_1D.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_1D.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_33 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_36 = 18.0625f;
			uParam0->f_37 = { -708.48f, -1414.66f, 4f };
			uParam0->f_3A = 0x00000172;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME", 16);
			uParam0->f_43 = 0x0006680A;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000013:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_A = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_2F = 142.6382f;
			uParam0->f_E = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_E.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_E.f_C = 45f;
			uParam0->f_E.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_E.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_1D.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_1D.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_33 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_36 = 18.0625f;
			uParam0->f_37 = { -708.48f, -1414.66f, 4f };
			uParam0->f_3A = 0x00000172;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME", 16);
			uParam0->f_43 = 0x0006680A;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000014:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_A = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_D = 17.75f;
			uParam0->f_2C = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_2F = 236.5858f;
			uParam0->f_E = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_E.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_E.f_C = 40f;
			uParam0->f_E.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_E.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_1D.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_1D.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_33 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_36 = 28.125f;
			uParam0->f_37 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_3A = 0x00000172;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME2", 16);
			uParam0->f_43 = 0x00000000;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_A = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_2F = 112.3787f;
			uParam0->f_E = { -859.6f, -1374f, 4.3f };
			uParam0->f_E.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_E.f_C = 32.9f;
			uParam0->f_E.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_E.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_1D.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_1D.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 0x00000173;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 0x000124F8;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000010:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_A = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_2F = 110.6762f;
			uParam0->f_E = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_E.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_E.f_C = 30f;
			uParam0->f_E.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_E.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_1D.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_1D.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 0x00000173;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 0x000124F8;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000011:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_A = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_2F = 109.8916f;
			uParam0->f_E = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_E.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_E.f_C = 31.2f;
			uParam0->f_E.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_E.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_1D.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_1D.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 0x00000173;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 0x000124F8;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000015:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_2F = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_3A = 0x00000171;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME1", 16);
			uParam0->f_43 = 0x00007530;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 243.8699f;
			uParam0->f_45 = 0x00000001;
			uParam0->f_46[0x00000000 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_4D[0x00000000] = 66.202f;
			uParam0->f_46[0x00000001 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_4D[0x00000001] = 71.6237f;
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000016:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_2F = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_3A = 0x00000171;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME2", 16);
			uParam0->f_43 = 0x00007530;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 53.0985f;
			uParam0->f_45 = 0x00000001;
			uParam0->f_46[0x00000000 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_4D[0x00000000] = 274.6339f;
			uParam0->f_46[0x00000001 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_4D[0x00000001] = 215.8295f;
			uParam0->f_50 = 0x00000001;
			break;
		
		case 0x00000017:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_2F = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_3A = 0x00000171;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME3", 16);
			uParam0->f_43 = 0x00007530;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 271.2097f;
			uParam0->f_45 = 0x00000001;
			uParam0->f_46[0x00000000 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_4D[0x00000000] = 358.5703f;
			uParam0->f_46[0x00000001 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_4D[0x00000001] = 70.2711f;
			uParam0->f_50 = 0x00000001;
			break;
	}
	return uParam0->f_50;
}

int func_474()
{
	func_475();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_475()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_402(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_401(unk_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_27(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_25(Global_1B416.f_936.f_21B.f_10E1))
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

void func_476()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xE4EDC4B0E92C078B(Global_126B1.f_D0[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Global_126B1.f_D0[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iVar0], 0x00000000))
			{
				if (unk_0x9C77D2D0559097F0(Global_126B1.f_8B[iVar0], 0x00000001))
				{
					unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iVar0]));
					Global_126B1.f_8B[iVar0] = 0x00000000;
				}
			}
		}
		iVar0++;
	}
	if (unk_0x9F4FE516EAACCFC5(Local_56.f_6E))
	{
		unk_0xE3BB8E05FCEB3FBE(Local_56.f_6E, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(Local_56.f_6E, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(Local_56.f_6F))
	{
		unk_0xE3BB8E05FCEB3FBE(Local_56.f_6F, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(Local_56.f_6F, 0x00000000);
	}
	if (Local_56.f_3 != 0x00000000)
	{
		func_278();
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_126B1.f_247))
	{
		unk_0x142CC44DB769B57E(&(Global_126B1.f_247));
	}
	if (iLocal_115 != 0xFFFFFFFF)
	{
		func_69(&iLocal_115);
	}
	if (iLocal_114 != 0xFFFFFFFF)
	{
		func_69(&iLocal_114);
	}
	if (Local_56.f_5 != 0xFFFFFFFF)
	{
		func_69(&(Local_56.f_5));
	}
	if (iLocal_125 != 0xFFFFFFFF)
	{
		func_69(&iLocal_125);
	}
	if (Local_56.f_3 > 0x00000000)
	{
		if (Global_126B1.f_241)
		{
			func_233(0x0000002F, 0x00000001);
			func_231(0x0000002F, 0x00000001);
			Global_126B1.f_241 = 0x00000000;
			Local_56.f_3 = 0x00000000;
		}
	}
	Global_126B1.f_229 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

void func_477()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (unk_0xC844350D5D58C99A(iLocal_53[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_150[iVar0], iVar1))
	{
		unk_0x5D96D8530B3D0904(&(iLocal_150[iVar0]), iVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_479()
{
	int iVar0;
	
	if (func_301(0x00000019))
	{
		if (Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_42 != 0x00000000 && !func_39(Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_42, 0x00000000))
		{
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_42 = joaat("fugitive");
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_4D = 0x00000000;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_41 = 0x00000000;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_3E = 0x000000FF;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_3F = 0x000000FF;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_40 = 0x000000FF;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_5 = 0x00000000;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_6 = 0x00000000;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_7 = 0x00000000;
			Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_8 = 0x0000009C;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000031)
			{
				Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_9[iVar0] = 0x00000000;
				iVar0++;
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000002)
			{
				Global_1B416.f_7FE8.f_45[0x00000016 /*78*/].f_3B[iVar0] = 0x00000000;
				iVar0++;
			}
		}
	}
	if ((func_301(0x00000015) && Global_1B416.f_7FE8.f_45[0x00000009 /*78*/].f_42 != 0x00000000) && !func_39(Global_1B416.f_7FE8.f_45[0x00000009 /*78*/].f_42, 0x00000000))
	{
		Global_1B416.f_7FE8.f_45[0x00000009 /*78*/].f_42 = 0x00000000;
	}
	if ((func_301(0x00000016) && Global_1B416.f_7FE8.f_45[0x0000000A /*78*/].f_42 != 0x00000000) && !func_39(Global_1B416.f_7FE8.f_45[0x0000000A /*78*/].f_42, 0x00000000))
	{
		Global_1B416.f_7FE8.f_45[0x0000000A /*78*/].f_42 = 0x00000000;
	}
	if ((func_301(0x00000017) && Global_1B416.f_7FE8.f_45[0x0000000B /*78*/].f_42 != 0x00000000) && !func_39(Global_1B416.f_7FE8.f_45[0x0000000B /*78*/].f_42, 0x00000000))
	{
		Global_1B416.f_7FE8.f_45[0x0000000B /*78*/].f_42 = 0x00000000;
	}
	if (func_301(0x0000001A) && !func_39(Global_1B416.f_7FE8.f_45[0x0000000C /*78*/].f_42, 0x00000000))
	{
		func_480(0x0000001A, 0x00000000);
	}
	if (func_301(0x0000001B) && !func_39(Global_1B416.f_7FE8.f_45[0x0000000D /*78*/].f_42, 0x00000000))
	{
		func_480(0x0000001B, 0x00000000);
	}
	if (func_301(0x0000001C) && !func_39(Global_1B416.f_7FE8.f_45[0x0000000E /*78*/].f_42, 0x00000000))
	{
		func_480(0x0000001C, 0x00000000);
	}
	if (func_301(0x0000001D) && !func_39(Global_1B416.f_7FE8.f_45[0x0000000F /*78*/].f_42, 0x00000000))
	{
		func_480(0x0000001D, 0x00000000);
	}
	if (func_301(0x0000001E) && !func_39(Global_1B416.f_7FE8.f_45[0x00000010 /*78*/].f_42, 0x00000000))
	{
		func_480(0x0000001E, 0x00000000);
	}
	if (func_301(0x0000001F) && !func_39(Global_1B416.f_7FE8.f_45[0x00000011 /*78*/].f_42, 0x00000000))
	{
		func_480(0x0000001F, 0x00000000);
	}
	if (func_301(0x00000020) && !func_39(Global_1B416.f_7FE8.f_45[0x00000012 /*78*/].f_42, 0x00000000))
	{
		func_480(0x00000020, 0x00000000);
	}
	if (func_301(0x00000021) && !func_39(Global_1B416.f_7FE8.f_45[0x00000013 /*78*/].f_42, 0x00000000))
	{
		func_480(0x00000021, 0x00000000);
	}
	if (func_301(0x00000022) && !func_39(Global_1B416.f_7FE8.f_45[0x00000014 /*78*/].f_42, 0x00000000))
	{
		func_480(0x00000022, 0x00000000);
	}
}

void func_480(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0x00000000))
		{
			func_330(iParam0, 0x00000001, 0x00000000);
			func_330(iParam0, 0x00000002, 0x00000000);
			func_330(iParam0, 0x00000003, 0x00000000);
			func_330(iParam0, 0x00000004, 0x00000000);
			func_330(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_330(iParam0, 0x00000000, 0x00000000);
	}
}

int func_481()
{
	return 0x00000000;
}

int func_482()
{
	return 0x00000001;
}

int func_483()
{
	return 0x00000001;
}

int func_484()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_485(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	uParam0->f_2 = 0xFFFFFFFF;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_489();
	func_488();
	func_486();
}

void func_486()
{
	Global_1ADC0 = 2405.849f;
	Global_1ADC3 = 2408.22f;
	Global_1ADC6 = 2386.096f;
	Global_1ADC9 = 69.1875f;
	Global_1ADCC[0x00000000 /*3*/] = 2417.105f;
	Global_1ADCC[0x00000001 /*3*/] = 2407.058f;
	Global_1ADCC[0x00000002 /*3*/] = 2371.92f;
	Global_1ADCC[0x00000003 /*3*/] = 2399.583f;
	Global_1ADCC[0x00000004 /*3*/] = 2416.519f;
	Global_1ADCC[0x00000005 /*3*/] = 2430.345f;
	Global_1ADCC[0x00000006 /*3*/] = 2385.819f;
	Global_1ADE2[0x00000000] = 157.8636f;
	Global_1ADE2[0x00000001] = 174.7226f;
	Global_1ADE2[0x00000002] = 270.7562f;
	Global_1ADE2[0x00000003] = 190.7495f;
	Global_1ADE2[0x00000004] = 27.6506f;
	Global_1ADE2[0x00000005] = 358.1218f;
	Global_1ADE2[0x00000006] = 339.4363f;
	Global_1ADEA = 2399.82f;
	Global_1ADED = 2414.7f;
	func_487(&Global_1A761, 0x00000040);
}

void func_487(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_488()
{
	Global_1A766[0x00000000 /*3*/].f_1 = 5141.01f;
	Global_1A766[0x00000001 /*3*/].f_1 = 6048.71f;
	Global_1A766[0x00000002 /*3*/].f_1 = 6185.32f;
	Global_1A766[0x00000003 /*3*/].f_1 = 5180.99f;
	Global_1A766[0x00000004 /*3*/].f_1 = 4582.72f;
	Global_1A766[0x00000005 /*3*/].f_1 = 4831.82f;
	Global_1A766[0x00000006 /*3*/].f_1 = 4322.66f;
	Global_1A766[0x00000007 /*3*/].f_1 = 3503.92f;
	Global_1A766[0x00000008 /*3*/].f_1 = 3777.54f;
	Global_1A766[0x00000009 /*3*/].f_1 = 3810.8f;
	Global_1A766[0x0000000A /*3*/].f_1 = 3095.88f;
	Global_1A788[0x00000000 /*13*/][0x00000000 /*3*/].f_1 = 5222.39f;
	Global_1A788[0x00000000 /*13*/][0x00000001 /*3*/].f_1 = 5333.68f;
	Global_1A788[0x00000000 /*13*/][0x00000002 /*3*/].f_1 = 5534.22f;
	Global_1A788[0x00000000 /*13*/][0x00000003 /*3*/].f_1 = 5843.98f;
	Global_1A788[0x00000001 /*13*/][0x00000000 /*3*/].f_1 = 5178.94f;
	Global_1A788[0x00000001 /*13*/][0x00000001 /*3*/].f_1 = 4956.4f;
	Global_1A788[0x00000001 /*13*/][0x00000002 /*3*/].f_1 = 5063.24f;
	Global_1A788[0x00000002 /*13*/][0x00000000 /*3*/].f_1 = 5027.97f;
	Global_1A788[0x00000002 /*13*/][0x00000001 /*3*/].f_1 = 4854.23f;
	Global_1A788[0x00000002 /*13*/][0x00000002 /*3*/].f_1 = 4770.31f;
	Global_1A788[0x00000003 /*13*/][0x00000000 /*3*/].f_1 = 6052.6f;
	Global_1A788[0x00000003 /*13*/][0x00000001 /*3*/].f_1 = 6086.12f;
	Global_1A788[0x00000003 /*13*/][0x00000002 /*3*/].f_1 = 6165.88f;
	Global_1A788[0x00000004 /*13*/][0x00000000 /*3*/].f_1 = 5880.13f;
	Global_1A788[0x00000004 /*13*/][0x00000001 /*3*/].f_1 = 5515.67f;
	Global_1A788[0x00000004 /*13*/][0x00000002 /*3*/].f_1 = 5195.4f;
	Global_1A788[0x00000005 /*13*/][0x00000000 /*3*/].f_1 = 6380.15f;
	Global_1A788[0x00000005 /*13*/][0x00000001 /*3*/].f_1 = 6193.92f;
	Global_1A788[0x00000005 /*13*/][0x00000002 /*3*/].f_1 = 5909.13f;
	Global_1A788[0x00000006 /*13*/][0x00000000 /*3*/].f_1 = 5072.56f;
	Global_1A788[0x00000006 /*13*/][0x00000001 /*3*/].f_1 = 5062.55f;
	Global_1A788[0x00000006 /*13*/][0x00000002 /*3*/].f_1 = 4964.13f;
	Global_1A788[0x00000007 /*13*/][0x00000000 /*3*/].f_1 = 4956.69f;
	Global_1A788[0x00000007 /*13*/][0x00000001 /*3*/].f_1 = 4767.8f;
	Global_1A788[0x00000007 /*13*/][0x00000002 /*3*/].f_1 = 4588.79f;
	Global_1A788[0x00000008 /*13*/][0x00000000 /*3*/].f_1 = 4783.28f;
	Global_1A788[0x00000008 /*13*/][0x00000001 /*3*/].f_1 = 4613.93f;
	Global_1A788[0x00000008 /*13*/][0x00000002 /*3*/].f_1 = 4737.46f;
	Global_1A788[0x00000009 /*13*/][0x00000000 /*3*/].f_1 = 4624.7f;
	Global_1A788[0x00000009 /*13*/][0x00000001 /*3*/].f_1 = 4286.39f;
	Global_1A788[0x00000009 /*13*/][0x00000002 /*3*/].f_1 = 4500.57f;
	Global_1A788[0x0000000A /*13*/][0x00000000 /*3*/].f_1 = 4618.13f;
	Global_1A788[0x0000000A /*13*/][0x00000001 /*3*/].f_1 = 4534.44f;
	Global_1A788[0x0000000A /*13*/][0x00000002 /*3*/].f_1 = 4493.64f;
	Global_1A788[0x0000000B /*13*/][0x00000000 /*3*/].f_1 = 4282.7f;
	Global_1A788[0x0000000B /*13*/][0x00000001 /*3*/].f_1 = 4111.71f;
	Global_1A788[0x0000000B /*13*/][0x00000002 /*3*/].f_1 = 3914.81f;
	Global_1A788[0x0000000B /*13*/][0x00000003 /*3*/].f_1 = 3894.7f;
	Global_1A788[0x0000000C /*13*/][0x00000000 /*3*/].f_1 = 4038.96f;
	Global_1A788[0x0000000C /*13*/][0x00000001 /*3*/].f_1 = 3849.33f;
	Global_1A788[0x0000000C /*13*/][0x00000002 /*3*/].f_1 = 3699.37f;
	Global_1A788[0x0000000D /*13*/][0x00000000 /*3*/].f_1 = 3970.96f;
	Global_1A788[0x0000000D /*13*/][0x00000001 /*3*/].f_1 = 3926.75f;
	Global_1A788[0x0000000D /*13*/][0x00000002 /*3*/].f_1 = 3874.89f;
	Global_1A788[0x0000000E /*13*/][0x00000000 /*3*/].f_1 = 3291.26f;
	Global_1A788[0x0000000E /*13*/][0x00000001 /*3*/].f_1 = 3436.6f;
	Global_1A788[0x0000000E /*13*/][0x00000002 /*3*/].f_1 = 3592.12f;
	Global_1A788[0x0000000F /*13*/][0x00000000 /*3*/].f_1 = 3710.49f;
	Global_1A788[0x0000000F /*13*/][0x00000001 /*3*/].f_1 = 3945.38f;
	Global_1A788[0x0000000F /*13*/][0x00000002 /*3*/].f_1 = 3854.2f;
	Global_1A788[0x0000000F /*13*/][0x00000003 /*3*/].f_1 = 3757.3f;
	Global_1A788[0x00000010 /*13*/][0x00000000 /*3*/].f_1 = 3528.6f;
	Global_1A788[0x00000010 /*13*/][0x00000001 /*3*/].f_1 = 3328.93f;
	Global_1A788[0x00000010 /*13*/][0x00000002 /*3*/].f_1 = 3157.76f;
	Global_1A788[0x00000011 /*13*/][0x00000000 /*3*/].f_1 = 3809.12f;
	Global_1A788[0x00000011 /*13*/][0x00000001 /*3*/].f_1 = 3826.24f;
	Global_1A788[0x00000011 /*13*/][0x00000002 /*3*/].f_1 = 3727.81f;
	Global_1A788[0x00000012 /*13*/][0x00000000 /*3*/].f_1 = 3610.22f;
	Global_1A788[0x00000012 /*13*/][0x00000001 /*3*/].f_1 = 3314.26f;
	Global_1A788[0x00000012 /*13*/][0x00000002 /*3*/].f_1 = 3034.58f;
	Global_1A788[0x00000013 /*13*/][0x00000000 /*3*/].f_1 = 3572.72f;
	Global_1A788[0x00000013 /*13*/][0x00000001 /*3*/].f_1 = 3261.69f;
	Global_1A788[0x00000013 /*13*/][0x00000002 /*3*/].f_1 = 3184.28f;
	func_487(&Global_1A761, 0x00000010);
}

void func_489()
{
	Global_1A735[0x00000000 /*3*/] = -1567.382f;
	Global_1A735[0x00000001 /*3*/] = -1436.305f;
	Global_1A735[0x00000002 /*3*/] = 31.2408f;
	Global_1A735[0x00000003 /*3*/] = 278.1924f;
	Global_1A735[0x00000004 /*3*/] = 1116.002f;
	Global_1A735[0x00000005 /*3*/] = 1676.193f;
	Global_1A74B[0x00000000 /*3*/] = -1592.642f;
	Global_1A74B[0x00000001 /*3*/] = -1573.501f;
	Global_1A74B[0x00000002 /*3*/] = -1459.359f;
	Global_1A74B[0x00000003 /*3*/] = 21.1005f;
	Global_1A74B[0x00000004 /*3*/] = 262.9409f;
	Global_1A74B[0x00000005 /*3*/] = 1091.07f;
	func_487(&Global_1A761, 0x00000001);
}

