#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	vector3 vLocal_136 = { 0f, 0f, 0f };
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	float fLocal_141 = 0f;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	
	iLocal_0 = 0x00000003;
	iLocal_3 = 0x00000001;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000086;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000001;
	iLocal_9 = 0x00000086;
	iLocal_10 = 0x00000001;
	iLocal_11 = 0x0000000C;
	iLocal_12 = 0x0000000C;
	fLocal_15 = 0.001f;
	iLocal_18 = 0xFFFFFFFF;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	iLocal_46 = unk_0xAD1355DD1E5D2D9B();
	uLocal_47 = unk_0x817B3657F78A517A();
	iLocal_65 = 0x00000003;
	bLocal_80 = 0x00000001;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 0x000001F4;
	iLocal_134 = 0xFFFFFFFF;
	iLocal_135 = 0xFFFFFFFF;
	fLocal_139 = 0f;
	fLocal_141 = 0f;
	vLocal_53 = { ScriptParam_166.f_1[0x00000000 /*3*/] };
	fLocal_54 = ScriptParam_166.f_11[0x00000000];
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (bLocal_95)
		{
			bLocal_96 = 0x00000001;
			func_296(0x00000000);
		}
		else
		{
			func_278();
		}
	}
	if (SYSTEM::VDIST(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_65 = 0x00000001;
	}
	else if (SYSTEM::VDIST(vLocal_53, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_65 = 0x00000001;
	}
	else if (SYSTEM::VDIST(vLocal_53, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_65 = 0x00000002;
	}
	else if (SYSTEM::VDIST(vLocal_53, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_65 = 0x00000003;
	}
	else if (SYSTEM::VDIST(vLocal_53, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_65 = 0x00000004;
	}
	else
	{
		iLocal_65 = 0x00000005;
	}
	if (func_236(vLocal_53, 0x00000001, iLocal_65, 0x00000001, 0x00000000))
	{
		func_233(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	SYSTEM::SETTIMERA(0x00000000);
	func_232();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_231();
		func_230(iLocal_58, &uLocal_64);
		func_227(&Local_164);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		}
		if (!func_224())
		{
			if (func_223())
			{
				func_278();
			}
			if (unk_0x338D6FF72D84D90F())
			{
				switch (iLocal_52)
				{
					case 0x00000000:
						if (func_197())
						{
							iLocal_52 = 0x00000001;
						}
						break;
					
					case 0x00000001:
						func_196();
						if (iLocal_69 == 0x00000000)
						{
							iLocal_69 = unk_0x7D0D8317DC09FF68(0x00000065, vLocal_53, 30000f);
						}
						if (unk_0xC844350D5D58C99A(iLocal_55))
						{
						}
						if (unk_0xC844350D5D58C99A(iLocal_56))
						{
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
						{
							if (unk_0xEB6A8945D1AC98A1(iLocal_56))
							{
								unk_0xEEB67C3D0A71A47B(iLocal_55, vLocal_53, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(iLocal_55, 0x00000001);
								SYSTEM::WAIT(0x00000000);
								func_278();
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
							{
								if (unk_0x8E28E832BEAC3DCE(vLocal_53, 2.5f))
								{
									if (iLocal_65 == 0x00000002)
									{
										if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 120f, 120f, 8f, 0x00000000, 0x00000001, 0x00000000) || func_195())
										{
											func_186();
										}
									}
									else if (iLocal_65 == 0x00000001)
									{
										if (SYSTEM::VDIST(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 100f, 100f, 8f, 0x00000000, 0x00000001, 0x00000000) || func_195())
											{
												func_186();
											}
										}
										else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 170f, 170f, 8f, 0x00000000, 0x00000001, 0x00000000) || func_195())
										{
											func_186();
										}
									}
									else if (SYSTEM::VDIST(vLocal_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 65f, 65f, 5f, 0x00000000, 0x00000001, 0x00000000) || func_195())
										{
											func_186();
										}
									}
									else if (unk_0x0EB28750412C3A5A(vLocal_53, -712.9f, -819.32f, 22.73f, 0x00000001) < 5f)
									{
										if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 50f, 50f, 5f, 0x00000000, 0x00000001, 0x00000000) || func_195())
										{
											func_186();
										}
									}
									else if (unk_0x0EB28750412C3A5A(vLocal_53, 24.13f, -946.84f, 28.36f, 0x00000001) < 5f)
									{
										if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 60f, 60f, 5f, 0x00000000, 0x00000001, 0x00000000) || func_195())
										{
											func_186();
										}
									}
									else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 30f, 30f, 8f, 0x00000000, 0x00000001, 0x00000000) || func_195())
									{
										func_186();
									}
								}
							}
						}
						else
						{
							if (Local_107[0x00000002 /*10*/].f_7)
							{
								func_185(&Local_107, 0x00000002);
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
							{
								unk_0xEEB67C3D0A71A47B(iLocal_56, vLocal_53, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(iLocal_56, 0x00000001);
								SYSTEM::WAIT(0x00000000);
							}
							func_278();
						}
						break;
				}
			}
			else
			{
				func_183("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_278();
			}
		}
		else
		{
			if (unk_0xC844350D5D58C99A(iLocal_55))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
				{
					if (func_182(iLocal_55, 0xF10822AA))
					{
						if (func_181(iLocal_55, vLocal_53, 0x00000001) >= 190f)
						{
							unk_0xA3BF0AA5A2608191(iLocal_55);
							unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
					}
					else if (func_182(iLocal_55, 0xC572E06A))
					{
						unk_0xA3BF0AA5A2608191(iLocal_55);
						unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
			}
			if (unk_0x1C0640BA9A7327B3() > iLocal_66 + 3000)
			{
				func_152();
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!func_132() && !func_129())
				{
					unk_0x05C6848E923D332F(unk_0xD803B885F5E47A62());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0xC844350D5D58C99A(iLocal_56))
						{
							if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_56, 0x00000000), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 100f, 100f, 15f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 0x00000003, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_85 = 0x00000001;
									}
								}
							}
							else if (unk_0x0EB28750412C3A5A(vLocal_53, -203.72f, -861.8f, 29.27f, 0x00000001) < 5f)
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 40f, 40f, 15f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 0x00000003, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_85 = 0x00000001;
									}
								}
							}
							else if (unk_0x0EB28750412C3A5A(vLocal_53, 288.46f, -1256.71f, 28.44f, 0x00000001) < 5f)
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 50f, 50f, 15f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 0x00000003, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_85 = 0x00000001;
									}
								}
							}
							else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 50f, 50f, 15f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (func_122(&Local_107, cLocal_123, sLocal_115, 0x00000003, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_85 = 0x00000001;
								}
							}
						}
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_59))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0x12DE711B1C681E9E(iLocal_55, unk_0x16F2683693E537C9(), fLocal_132, fLocal_132, fLocal_132, 0x00000000, 0x00000001, 0x00000000))
								{
									if (!unk_0x405E212DDE472467(iLocal_55, 0x00000000))
									{
										if (SYSTEM::TIMERA() > 0x000003E8)
										{
											if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_55))
											{
												fLocal_132 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_55, 0x00000001));
												fLocal_132 = (fLocal_132 * 1.5f);
												SYSTEM::SETTIMERA(0x00000000);
											}
											unk_0xAFF39FB306F8E232(iLocal_55, 0x00000011, 0x00000000);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_55, 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (!unk_0x405E212DDE472467(iLocal_55, 0x00000000))
										{
											unk_0xAFF39FB306F8E232(iLocal_55, 0x00000011, 0x00000001);
											unk_0xAFF39FB306F8E232(iLocal_55, 0x0000000D, 0x00000000);
											func_121();
											iLocal_128 = 0x00000001;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_55) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_55)) || unk_0xB87D13D0C064E9D1(iLocal_55, unk_0x16F2683693E537C9(), 0x00000000))
								{
									func_122(&Local_107, cLocal_123, sLocal_113, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									fLocal_132 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_55, 0x00000001));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 0x00000001;
									iLocal_87 = 0x00000001;
								}
								if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
								{
									if (unk_0xB87D13D0C064E9D1(iLocal_73, unk_0x16F2683693E537C9(), 0x00000001))
									{
										unk_0xAFF39FB306F8E232(iLocal_55, 0x00000011, 0x00000000);
										if (unk_0x0E0E6175453415CB(iLocal_55))
										{
											unk_0x89258193691A7600(iLocal_55, iLocal_73, unk_0x16F2683693E537C9(), 0x00000008, 35f, 0x00000004, 10f, 10f, 0x00000001);
										}
										else
										{
											unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										}
										func_122(&Local_107, cLocal_123, sLocal_113, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										SYSTEM::SETTIMERA(0x00000000);
										fLocal_132 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_55, 0x00000001));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 0x00000001;
										iLocal_87 = 0x00000001;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_59))
								{
									if (unk_0x8FBD6436A27198B4(iLocal_59) == 0x00000001)
									{
									}
									else
									{
										unk_0x321E019A46034F39(iLocal_59, 0x00000000);
										unk_0x61755AC17D8F538E(iLocal_59, 0x00000001);
									}
								}
								if (!iLocal_128)
								{
									func_121();
									iLocal_128 = 0x00000001;
								}
							}
							else
							{
								if (unk_0x4734A6196B611C3B(iLocal_55, unk_0x16F2683693E537C9()))
								{
									bLocal_130 = 0x00000001;
								}
								func_119(iLocal_59, &uLocal_70);
							}
							if (unk_0xC844350D5D58C99A(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 15f, 15f, 10f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (func_122(&Local_107, cLocal_123, sLocal_116, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											unk_0xDD353D0E9C789D0E(&iLocal_61);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_149, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_150, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_151, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_149, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_150, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_151, 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0x75ABDC5F81978924(iLocal_61);
											unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
											unk_0xF82EA857DA10E0CD(&iLocal_61);
											SYSTEM::SETTIMERA(0x00000000);
											iLocal_87 = 0x00000001;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 15f, 15f, 10f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (((!unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_55) && !unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_55)) && !unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())) && func_118(iLocal_56, iLocal_55, 0x00000001) > 30f)
										{
											if (func_122(&Local_107, cLocal_123, sLocal_117, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												SYSTEM::SETTIMERA(0x00000000);
												iLocal_88 = 0x00000001;
											}
										}
									}
								}
								else if (!unk_0x7DECE00E09F41C95(iLocal_56))
								{
									func_116(iLocal_56, "GENERIC_CURSE_MED", 0x00000018);
								}
							}
							if (func_114())
							{
								func_113();
								if (unk_0xC844350D5D58C99A(iLocal_56))
								{
									vVar0 = { unk_0x68F4C0EC296D3901(iLocal_56, 0x00000001) };
								}
								if (!unk_0x5A91F08DF773C39D(iLocal_55, vVar0, 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_55, 12f, 12f, 12f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (SYSTEM::TIMERA() > 0x00004E20)
									{
										if (func_112(iLocal_55) && !unk_0x869EFD0BC0868856(iLocal_55))
										{
											if (func_122(&Local_107, cLocal_123, sLocal_118, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												bLocal_130 = 0x00000001;
												SYSTEM::SETTIMERA(0x00000000);
											}
										}
									}
								}
							}
							else if (func_112(iLocal_56))
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, Global_13, 0x00000000, 0x00000001, 0x00000000))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_121, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										unk_0xDD353D0E9C789D0E(&iLocal_61);
										unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8);
										unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
										unk_0x75ABDC5F81978924(iLocal_61);
										unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
										unk_0xF82EA857DA10E0CD(&iLocal_61);
										bLocal_127 = 0x00000001;
										func_278();
									}
								}
								else if (bLocal_130)
								{
									if (func_122(&Local_107, cLocal_123, sLocal_122, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										unk_0x01E4BB5190DF7317(iLocal_56, 0x471C4000, 0x00000000);
										unk_0xBD453909DC26A85D(iLocal_56, 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
										bLocal_127 = 0x00000001;
										func_278();
									}
								}
								else
								{
									unk_0x01E4BB5190DF7317(iLocal_56, 0x471C4000, 0x00000000);
									unk_0xBD453909DC26A85D(iLocal_56, 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
									bLocal_127 = 0x00000001;
									func_278();
								}
							}
							else
							{
								bLocal_127 = 0x00000001;
								func_278();
							}
						}
						else if (func_114())
						{
							if ((unk_0xEB6A8945D1AC98A1(iLocal_55) || unk_0x28072FDD60CE3A6E(iLocal_55, 0x00000001)) || func_182(iLocal_55, 0x8EC23E41))
							{
								func_122(&Local_107, cLocal_123, sLocal_125, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								func_109();
								func_185(&Local_107, 0x00000002);
								unk_0x142CC44DB769B57E(&iLocal_59);
							}
						}
					}
					else if (!unk_0xE4EDC4B0E92C078B(iLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_60))
							{
								unk_0x142CC44DB769B57E(&iLocal_60);
							}
							iLocal_60 = 0x00000000;
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							iLocal_58 = func_105(iLocal_56, 0x00000000, 0x00000000);
							func_104(&uLocal_64);
							if (unk_0xC844350D5D58C99A(iLocal_56))
							{
								fLocal_82 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_56, 0x00000000));
								unk_0xE910A68AA670B4AA(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_296(0x00000000);
							}
						}
						else
						{
							func_101();
						}
					}
					else
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
						{
							if (bLocal_95)
							{
								func_296(0x00000000);
							}
							else
							{
								func_278();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
							{
								if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_56, 0x00000000)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_296(0x00000000);
									}
									else
									{
										unk_0xF3268524E9BE6D6E(iLocal_56, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										func_278();
									}
								}
								else if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_56, 0x00000000)) < fLocal_82)
								{
									fLocal_82 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_56, 0x00000000));
								}
								if (unk_0xB87D13D0C064E9D1(iLocal_56, unk_0x16F2683693E537C9(), 0x00000001))
								{
									if (bLocal_95)
									{
										func_296(0x00000000);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
	{
		unk_0xF3268524E9BE6D6E(iLocal_56, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		func_116(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 0x00000018);
		unk_0xFADC0A217229F6B5(iLocal_56, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_56, 0x00000000);
		unk_0x25C5402CC10F76CD(iLocal_56, 0x00000001);
		unk_0x6DAD7906B73F064D(&iLocal_56);
	}
	func_101();
	if (bLocal_90)
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_60))
		{
			if (unk_0x762119754C50557A(iLocal_89))
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(iLocal_89)) > 100f)
				{
					func_278();
				}
			}
		}
		else if (bLocal_95)
		{
			func_296(0x00000000);
		}
		else if (unk_0xEB6A8945D1AC98A1(iLocal_55))
		{
			func_278();
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_59))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_55))
		{
			unk_0x142CC44DB769B57E(&iLocal_59);
		}
		else if (!func_114())
		{
			func_278();
		}
	}
}

void func_2()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	int iVar14;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 15f, 15f, 20f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_116(iLocal_56, "GENERIC_HI", 0x00000005);
						iLocal_131 = 0x00000001;
					}
				}
				if (unk_0x0EB28750412C3A5A(vLocal_53, 296.13f, -894.01f, 28.23f, 0x00000001) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0x0EB28750412C3A5A(vLocal_53, -2072.88f, -317.19f, 12.32f, 0x00000001) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0x00000000, 0x00000001, 0x00000000) && !func_100())
				{
					if (func_97(0x00000002))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (!func_129())
					{
						if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
						{
							if (func_96(0x00000001, 0x00000000, 0x00000001))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000B) || func_95())
								{
									if (!unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
									{
										unk_0xA37A90C62806D848(0x00000001);
										if (func_94())
										{
											func_93();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0x7707E48765093646(iLocal_102, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
										}
										else
										{
											iLocal_57 = unk_0x7707E48765093646(iLocal_101, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
										}
										if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
										{
											unk_0x9F528B1B53FBC5D9(iLocal_57, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
										}
										unk_0x4A4806F9D471E491(iLocal_57, 0x00000000, 0x00000000);
										func_85(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
										if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
										{
											if (unk_0xC844350D5D58C99A(iLocal_57))
											{
												while ((!func_83(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fLocal_84, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000) || func_94()) || !unk_0x1A5AE8A9B1D42A10(iLocal_57))
												{
													if (!func_83(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fLocal_84, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
													{
													}
													if (func_94())
													{
													}
													if (!unk_0x1A5AE8A9B1D42A10(iLocal_57))
													{
													}
													SYSTEM::WAIT(0x00000000);
												}
												if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
												{
													unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
												}
											}
										}
										else if (unk_0xC844350D5D58C99A(iLocal_57))
										{
											while (func_94() || !unk_0x1A5AE8A9B1D42A10(iLocal_57))
											{
												SYSTEM::WAIT(0x00000000);
											}
										}
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
										if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
										{
											unk_0x46CB381A452EF99D(iLocal_56, 0x00000000);
										}
										unk_0x68F065432F4692FB(0x00000000);
										unk_0x850CF499433B183D(iLocal_69);
										unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
										func_81();
										func_75(0x00000000);
										SYSTEM::WAIT(0x00000000);
										if (func_112(iLocal_56))
										{
											if (unk_0xCED082ADD3739B9F(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x4E09E67A27F104A7(sLocal_94);
										bLocal_99 = 0x00000001;
										SYSTEM::SETTIMERA(0x00000000);
									}
								}
							}
						}
					}
				}
				else
				{
					func_73(unk_0x68F4C0EC296D3901(iLocal_56, 0x00000001), &fLocal_83, &fLocal_84);
					if (!func_100())
					{
						if (!func_182(iLocal_56, 0x4924437D) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
						{
							unk_0xA3BF0AA5A2608191(iLocal_56);
							unk_0xE185F110925D87DB(iLocal_56, unk_0x16F2683693E537C9(), 0x00004E20, 0x3F000000, 1f, 0x40000000, 0x00000000);
						}
					}
					else if (func_182(iLocal_56, 0x4924437D))
					{
						unk_0xA3BF0AA5A2608191(iLocal_56);
						unk_0xF82EA857DA10E0CD(&iLocal_61);
						unk_0xDD353D0E9C789D0E(&iLocal_61);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_149, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_151, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_150, 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_61);
						unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
						unk_0xF82EA857DA10E0CD(&iLocal_61);
						unk_0xF895E10BF4C72645(iLocal_56, 0x00000000, 0x00000000);
					}
				}
			}
			else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 25f, 25f, 20f, 0x00000000, 0x00000001, 0x00000001) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 30f, 30f, 20f, 0x00000000, 0x00000001, 0x00000002))
			{
				if (!func_100())
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						unk_0xA3BF0AA5A2608191(iLocal_56);
						unk_0xF82EA857DA10E0CD(&iLocal_61);
						unk_0xDD353D0E9C789D0E(&iLocal_61);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
						unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0x00004E20, 0x3F000000, 1f, 0x40000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_61);
						unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
						unk_0xF82EA857DA10E0CD(&iLocal_61);
					}
					iLocal_129 = 0x00000001;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0x00000000:
					if (((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x4D1EAD5574D867CF(unk_0x16F2683693E537C9())) && !unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9()))
					{
						if (bLocal_80)
						{
							if (unk_0x0EB28750412C3A5A(vLocal_53, -712.9f, -819.32f, 22.73f, 0x00000001) < 5f && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0x00000000, 0x00000001, 0x00000000))
							{
								vLocal_78 = { -710.1279f, -821.3084f, 22.6169f };
								vLocal_79 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
							{
								vVar7 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
								func_70(iLocal_56, &vLocal_78, &vLocal_79, cLocal_142, sLocal_144);
								if ((vLocal_78.z - vVar7.z) > 20f)
								{
									vLocal_78 = { vVar7 };
								}
								vLocal_78.z = (vLocal_78.z + 2f);
								unk_0xE82754C349C7B581(vLocal_78, &(vLocal_78.f_2), 0x00000000, 0x00000000);
								if (vLocal_78.z == 0f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.z = fLocal_139;
								}
								if (unk_0x0EB28750412C3A5A(vLocal_53, -203.72f, -861.8f, 29.27f, 0x00000001) < 5f)
								{
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (vLocal_79.z > 315f && vLocal_79.z < 360f)
										{
											vLocal_79.z = 251.4238f;
										}
										else if (vLocal_79.z > 120f && vLocal_79.z < 212f)
										{
											vLocal_79.z = 67.2304f;
										}
										vLocal_78 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0x0EB28750412C3A5A(vLocal_53, -821.33f, -1082.43f, 10.14f, 0x00000001) < 5f && unk_0x0399732A9EBC368E(vLocal_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0x00000000, 0x00000001))
								{
									vLocal_78 = { -814.0593f, -1082.483f, 10.0671f };
									vLocal_79.z = 275.5752f;
								}
								else if (unk_0x0EB28750412C3A5A(vLocal_53, -387.12f, 6045.79f, 30.5f, 0x00000001) < 5f && unk_0x0399732A9EBC368E(vLocal_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0x00000000, 0x00000001))
								{
									vLocal_78 = { -375.0627f, 6030.533f, 30.5313f };
									vLocal_79.z = 222.9049f;
								}
								else if (unk_0x0EB28750412C3A5A(vLocal_53, -387.12f, 6045.79f, 30.5f, 0x00000001) < 5f && unk_0x0399732A9EBC368E(vLocal_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0x00000000, 0x00000001))
								{
									vLocal_78 = { -379.7835f, 6029.472f, 30.5014f };
									vLocal_79.z = 213.2611f;
								}
								else if (unk_0x0EB28750412C3A5A(vLocal_53, 89.39f, 2f, 67.34f, 0x00000001) < 5f)
								{
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (vLocal_79.z > 128f && vLocal_79.z < 195f)
										{
											if (vLocal_79.z > 162f)
											{
												vLocal_79.z = 220f;
											}
											else
											{
												vLocal_79.z = 107f;
											}
										}
									}
								}
								else if (unk_0x0EB28750412C3A5A(vLocal_53, 174.53f, 6637.64f, 30.57f, 0x00000001) < 5f)
								{
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (vLocal_79.z > 244.444f && vLocal_79.z < 326.2103f)
										{
											vLocal_79.z = 343.1367f;
										}
									}
								}
								else if (unk_0x0EB28750412C3A5A(vLocal_53, -3044.11f, 594.34f, 6.73f, 0x00000001) < 5f)
								{
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0x00000000, 0x00000001, 0x00000000))
									{
										vLocal_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								vVar4 = { unk_0x1BB04F10296A1C5E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 0x00000002) };
								vVar5 = { vVar4 - vLocal_78 };
								vVar5.z = 0f;
								fVar10 = SYSTEM::VMAG(vVar5);
								unk_0xE82754C349C7B581(vVar4, &(vVar4.f_2), 0x00000000, 0x00000000);
								fVar9 = (vLocal_78.z - vVar4.z);
								vLocal_79.x = unk_0x5D8ABF6396A76564(fVar9, fVar10);
								if (vLocal_79.x > 20f || vLocal_79.x < -330f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.x = 0f;
									vLocal_79.z = fLocal_139;
									vVar4 = { unk_0x1BB04F10296A1C5E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 0x00000002) };
									vVar5 = { vVar4 - vLocal_78 };
									vVar5.z = 0f;
									fVar10 = SYSTEM::VMAG(vVar5);
									unk_0xE82754C349C7B581(vVar4, &(vVar4.f_2), 0x00000000, 0x00000000);
									fVar9 = (vLocal_78.z - vVar4.z);
								}
							}
							if (func_69(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0x00000000))
							{
								if (unk_0x0399732A9EBC368E(vLocal_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0x00000000, 0x00000001))
								{
									if (vLocal_79.z < 35f || vLocal_79.z > 275f)
									{
										if (vLocal_79.z < 335f)
										{
											vLocal_79.z = 260f;
										}
										else
										{
											vLocal_79.z = 55f;
										}
									}
									else if (vLocal_79.z > 107.2072f && vLocal_79.z < 210f)
									{
										if (vLocal_79.z > 154.6742f)
										{
											vLocal_79.z = 233f;
										}
										else
										{
											vLocal_79.z = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_65 == 0x00000004)
						{
							if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 183.6065f, 6636.653f, 30.6299f) < SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 172.2291f, 6631.007f, 30.7398f))
							{
								vLocal_78 = { 183.6065f, 6636.653f, 30.6299f };
								vLocal_79 = { 0f, 0f, 265f };
							}
							else
							{
								vLocal_78 = { 172.2291f, 6631.007f, 30.7398f };
								vLocal_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
							if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
							{
								vVar2 = { unk_0x68F4C0EC296D3901(iLocal_56, 0x00000001) };
							}
							vVar3 = { vVar1 - vVar2 };
							vLocal_78 = { vVar1 };
							vLocal_78 = { vLocal_78.x, vLocal_78.y, (vLocal_78.z - 1f) };
							vLocal_79 = { 0f, 0f, unk_0xE7D606C557C86100(vVar3.x, vVar3.y) };
						}
						if (unk_0x0EB28750412C3A5A(vLocal_78, -535.795f, -1222.23f, 17.4567f, 0x00000001) < 5f)
						{
							vLocal_78 = { -521.475f, -1210.47f, 17.1848f };
							vLocal_79 = { 0f, 0f, 308.502f };
						}
						if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
						{
							unk_0x046C362CF15F1935(&iLocal_73);
						}
						if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000))
						{
							if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
							{
								iVar0 = unk_0x728870EB733D12A1();
								unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &vLocal_136, &vLocal_137);
								if (unk_0x5A91F08DF773C39D(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(iVar0, unk_0x1BB04F10296A1C5E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0x00000000, 0x00000002), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (func_69(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0x00000000) && (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0x00000000, 0x00000001, 0x00000000)))
									{
										if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0x00000000, 0x00000001, 0x00000000))
										{
											vVar6 = { 2.9f, 12f, 8f };
											vLocal_75 = { -543.34f, -1216.8f, 17.96f };
											fLocal_77 = 337.5f;
											bVar8 = 0x00000001;
										}
										else
										{
											vVar6 = { 2.9f, 12f, 8f };
											vLocal_75 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_77 = 246.7714f;
											bVar8 = 0x00000001;
										}
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = 0x00000000;
										}
										if (bVar8)
										{
											if (func_68(iVar0))
											{
												unk_0xA47B46945FF6DE74(iVar0, vLocal_75, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iVar0, fLocal_77);
												unk_0x2EA10555AEBEA739(iVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
												unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
											}
										}
										else if (unk_0xC844350D5D58C99A(iVar0))
										{
											if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
											{
												unk_0xA954465BA6FDEFE2(&iVar0);
											}
										}
									}
									else if (unk_0x0EB28750412C3A5A(vLocal_53, -203.72f, -861.8f, 29.27f, 0x00000001) < 5f && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0x00000000, 0x00000001, 0x00000000))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -187f, -855.51f, 29.02f };
										fLocal_77 = 158.28f;
										bVar8 = 0x00000001;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = 0x00000000;
										}
										if (bVar8)
										{
											if (func_68(iVar0))
											{
												unk_0xA47B46945FF6DE74(iVar0, vLocal_75, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iVar0, fLocal_77);
												unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
											}
										}
										else if (unk_0xC844350D5D58C99A(iVar0))
										{
											if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
											{
												unk_0xA954465BA6FDEFE2(&iVar0);
											}
										}
									}
									else if (unk_0x0EB28750412C3A5A(vLocal_53, -387.12f, 6045.79f, 30.5f, 0x00000001) < 5f && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0x00000000, 0x00000001, 0x00000000))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -395.84f, 6051.16f, 31.19f };
										fLocal_77 = 139.92f;
										bVar8 = 0x00000001;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = 0x00000000;
										}
										if (bVar8)
										{
											if (func_68(iVar0))
											{
												unk_0xA47B46945FF6DE74(iVar0, vLocal_75, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iVar0, fLocal_77);
												unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
											}
										}
										else if (unk_0xC844350D5D58C99A(iVar0))
										{
											if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
											{
												unk_0xA954465BA6FDEFE2(&iVar0);
											}
										}
									}
									else if (unk_0x0EB28750412C3A5A(vLocal_53, -2956.78f, 488.19f, 14.47f, 0x00000001) < 5f && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0x00000000, 0x00000001, 0x00000000))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -2972.31f, 490.07f, 15.03f };
										fLocal_77 = 357.64f;
										bVar8 = 0x00000001;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = 0x00000000;
										}
										if (bVar8)
										{
											if (func_68(iVar0))
											{
												unk_0xA47B46945FF6DE74(iVar0, vLocal_75, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iVar0, fLocal_77);
												unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
											}
										}
										else if (unk_0xC844350D5D58C99A(iVar0))
										{
											if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
											{
												unk_0xA954465BA6FDEFE2(&iVar0);
											}
										}
									}
									else if ((unk_0x0EB28750412C3A5A(vLocal_53, 174.53f, 6637.64f, 30.57f, 0x00000001) < 5f && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0x00000000, 0x00000001, 0x00000000)) && unk_0x3D1053F9EB43B7AD(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0x00000000, 0x00000001, 0x00000000))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { 184.05f, 6628.75f, 31.27f };
										fLocal_77 = 89.37f;
										bVar8 = 0x00000001;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = 0x00000000;
										}
										if (bVar8)
										{
											if (func_68(iVar0))
											{
												unk_0xA47B46945FF6DE74(iVar0, vLocal_75, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iVar0, fLocal_77);
												unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
											}
										}
										else if (unk_0xC844350D5D58C99A(iVar0))
										{
											if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
											{
												unk_0xA954465BA6FDEFE2(&iVar0);
											}
										}
									}
									else
									{
										vVar6 = { 2.9f, 12f, 8f };
										fLocal_77 = unk_0xD9522BA9E27E1349(iVar0);
										vLocal_75 = { func_66(vLocal_78, unk_0x1BB04F10296A1C5E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0x00000000, 0x00000002)) };
										if (func_65(0f, 0f, 0f, vLocal_75, 0x00000000))
										{
											vLocal_75 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
										}
										if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar0)))
										{
											vLocal_137.x = (vLocal_137.x + 3f);
											vLocal_137.y = (vLocal_137.y + 3f);
										}
										bVar8 = 0x00000001;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = 0x00000000;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = 0x00000000;
										}
										if (bVar8)
										{
											if (func_68(iVar0))
											{
												unk_0xA47B46945FF6DE74(iVar0, vLocal_75, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iVar0, fLocal_77);
												unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
											}
										}
										else if (unk_0xC844350D5D58C99A(iVar0))
										{
											if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
											{
												unk_0xA954465BA6FDEFE2(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_68(iVar0))
						{
							unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &vLocal_136, &vLocal_137);
							if (unk_0x5A91F08DF773C39D(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(iVar0, unk_0x1BB04F10296A1C5E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0x00000000, 0x00000002), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xA47B46945FF6DE74(iVar0, vLocal_140, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iVar0, fLocal_141);
								unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_57))
						{
							unk_0x4A4806F9D471E491(iLocal_57, 0x00000001, 0x00000000);
						}
						unk_0x21688103CC7F9B19(vLocal_78 - Vector(10f, 10f, 10f), vLocal_78 + Vector(10f, 10f, 10f), 0x00000000);
						unk_0x679C321F8CAA2CFA(vLocal_78, 20f, 0x00000000);
						unk_0x745CE398A4B0A3C6(vLocal_78, 10f, 0x00000000);
						unk_0x536F1BE96C726C4B(vLocal_78, (vLocal_137.y + 1f), 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						unk_0x7800CEC090C01D4D(vLocal_78, 25f);
						unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000001);
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						iLocal_68 = unk_0xE9744DB7B8CA6965(vLocal_78, vLocal_79, 0x00000002);
						unk_0xEFC3DF9D33E248D8(iLocal_68, 0x00000000);
						iLocal_97 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000000);
						unk_0x5818C8D5303DCCF8(iLocal_97, 15f);
						unk_0x93E9ED66DAB9FBE3(iLocal_97, iLocal_68, sLocal_145, cLocal_142);
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 0x00000400, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
						{
							unk_0x327AAEE25F323797(iLocal_56);
							unk_0x915804B434753CBD(iLocal_56, iLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						}
						unk_0xE3BB8E05FCEB3FBE(iLocal_97, 0x00000001);
						unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_53(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 0x00000007, 0x00000000, 0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
						unk_0x68F065432F4692FB(0x00000000);
						func_52(joaat("rc_wallets_returned"), 0x00000001);
						unk_0x6FB46C25CCB7E6D5(joaat("rc_wallets_returned"), &uVar13, 0xFFFFFFFF);
						iLocal_98++;
					}
					else
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
						{
						}
						if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
						{
						}
						if (unk_0x4D1EAD5574D867CF(unk_0x16F2683693E537C9()))
						{
						}
						if (unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9()))
						{
						}
					}
					unk_0x3FC8DBCC154CA56B();
					break;
				
				case 0x00000001:
					if ((unk_0x69DF961355195C3C(iLocal_68) && unk_0xA45992A6CE82FB43(iLocal_68) == 1f) || func_49())
					{
						unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
						unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
						{
							unk_0x6D80F1AEBA734886(iLocal_56, (iLocal_133 - (iLocal_133 / 0x0000000A)));
							unk_0x11AD11297DC58CC7(iLocal_56, 0x00000000);
							unk_0x79C43E2BAC7C696F(iLocal_56, sLocal_94, 0x3E800000);
						}
						if (unk_0x757EF87A33649210())
						{
							unk_0x327AAEE25F323797(iLocal_56);
							vVar4 = { unk_0x1BB04F10296A1C5E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 0x00000002) };
							unk_0xE82754C349C7B581(vVar4, &(vVar4.f_2), 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iLocal_56, vVar4, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							vVar4 = { unk_0xEEB20D14BD38615E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 0x00000002) };
							unk_0xD8F6A53F4799FAFE(iLocal_56, vVar4.z);
						}
						vVar4 = { unk_0xEEB20D14BD38615E(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 0x00000002) };
						if (func_69(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0x00000000))
						{
							if (func_48(unk_0x16F2683693E537C9(), 215.68f, 60f))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_61);
								unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 3.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x96167B03C5A77156(0x00000000, -503.46f, -1199.39f, 19.02f, 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_61);
								unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
								unk_0xF82EA857DA10E0CD(&iLocal_61);
							}
							else if (func_48(unk_0x16F2683693E537C9(), 122.0371f, 60f))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_61);
								unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 3.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x96167B03C5A77156(0x00000000, -543.35f, -1208.09f, 16.73f, 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_61);
								unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
								unk_0xF82EA857DA10E0CD(&iLocal_61);
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_61);
								unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 3.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_61);
								unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
								unk_0xF82EA857DA10E0CD(&iLocal_61);
							}
						}
						else if (unk_0x0EB28750412C3A5A(vLocal_53, 288.46f, -1256.71f, 28.44f, 0x00000001) < 5f)
						{
							if (func_48(unk_0x16F2683693E537C9(), 200.8887f, 60f))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_61);
								unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 3.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x96167B03C5A77156(0x00000000, 289.08f, -1286.56f, 28.68f, 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_61);
								unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
								unk_0xF82EA857DA10E0CD(&iLocal_61);
							}
							else if (func_48(unk_0x16F2683693E537C9(), 347.8599f, 60f))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_61);
								unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 3.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x96167B03C5A77156(0x00000000, 241.22f, -1236.76f, 28.26f, 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_61);
								unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
								unk_0xF82EA857DA10E0CD(&iLocal_61);
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_61);
								unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 3.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
								unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_61);
								unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
								unk_0xF82EA857DA10E0CD(&iLocal_61);
							}
						}
						else
						{
							unk_0xDD353D0E9C789D0E(&iLocal_61);
							unk_0x96167B03C5A77156(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_56, 0f, 2.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000005, 0x471C4000);
							unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_56), 0x00000001);
							unk_0x75ABDC5F81978924(iLocal_61);
							unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
							unk_0xF82EA857DA10E0CD(&iLocal_61);
						}
						unk_0xBD453909DC26A85D(iLocal_56, 0xD827C3DB, 0x00000001, 0x00000000, 0x00000000);
						unk_0x46CB381A452EF99D(iLocal_56, 0x00000001);
						unk_0xFADC0A217229F6B5(iLocal_56, 0x00000001);
						func_47(&iLocal_73);
						SYSTEM::SETTIMERB(0x00000000);
						unk_0x29D5132FBDCF2B1E(0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							if (!func_46())
							{
								unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_57))
						{
							unk_0xF690C84DADBB3551(&iLocal_57);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
						{
							unk_0x6D80F1AEBA734886(iLocal_56, (iLocal_133 - (iLocal_133 / 0x0000000A)));
						}
						unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xE3BB8E05FCEB3FBE(iLocal_97, 0x00000000);
						func_45();
						unk_0x9A8DDC7C522F5BF5(iLocal_97, 0x00000000);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						if (unk_0x757EF87A33649210())
						{
							unk_0x82E51BCA72537B6C(0x000001F4);
							while (unk_0x7BCE0E6DD4A1F749())
							{
								SYSTEM::WAIT(0x00000000);
							}
						}
						iVar14 = (iLocal_133 / 0x00000064);
						iVar14 *= 90;
						SYSTEM::WAIT(0x00000000);
						unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
						func_85(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						func_3(func_39(), 0x00000001, iVar14);
						func_296(0x00000001);
					}
					else
					{
						unk_0x3FC8DBCC154CA56B();
						if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xFFC528E4))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_56) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0x50B5F6F3C29E9380(iLocal_57, unk_0x16F2683693E537C9()))
								{
									unk_0x15AFB6CBDE990FB6(iLocal_57, 0x00000000, 0x00000001);
									if (unk_0xCED082ADD3739B9F(iLocal_56))
									{
										unk_0x9F528B1B53FBC5D9(iLocal_57, iLocal_56, unk_0x4A089F2B762B8D33(iLocal_56, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
									}
									else
									{
										unk_0x9F528B1B53FBC5D9(iLocal_57, iLocal_56, unk_0x4A089F2B762B8D33(iLocal_56, 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (func_38(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_38(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_4(func_38(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_37();
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
					func_36(0x00000063, 0x00000001);
					func_52(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_52(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_52(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_15(0x00000005))
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
							func_52(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_52(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_52(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_52(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_52(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_52(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_52(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_52(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_52(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_52(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_52(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_52(joaat("sp2_money_spent_property"), iParam3);
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
									func_52(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_52(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_52(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_52(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_52(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_52(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_52(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_52(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_52(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_52(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_52(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_52(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_36(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_36(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_36(0x00000060, iParam3);
					break;
			}
			func_36(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_52(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_52(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_52(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_5(0x00000000);
	}
	return 0x00000001;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_13(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_13(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_13(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_13(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_10(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_10(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_10(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_10(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_10(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_10(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_9() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_9() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_8(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_8(int iParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1407E9;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

void func_14(int iParam0)
{
	func_36(0x0000005D, iParam0);
	func_36(0x0000001D, iParam0);
	func_36(0x0000001E, iParam0);
}

bool func_15(int iParam0)
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
		return func_17(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_17(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_17(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_17(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_16(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_16(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_16(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_16(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_16(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_16(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_9() /*10930*/].f_181E.f_A, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)
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
		func_35(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_21(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(0x0000000E) && !func_33(iParam0))
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
	if (func_32(&Global_4127F1))
	{
		if (func_30(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_23(&Global_4127F1, iParam0))
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

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_34(0x0000000E) && !func_33(iParam1))
	{
		return 0x00000000;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0x00000000);
	}
	func_26(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_34(0x0000000E) && !func_33(iParam1))
	{
		return 0x00000000;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4127F0 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_28(var uParam0, float fParam1)
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

float func_29(var uParam0)
{
	return uParam0->f_50;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_31(var uParam0, int iParam1)
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

bool func_32(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
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

void func_37()
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

int func_38(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_39()
{
	func_40();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_40()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_43(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_42(unk_0x16F2683693E537C9());
			if (func_41(iVar0) && (!func_34(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_41(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_41(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_44(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_45()
{
	int iVar0;
	
	iVar0 = unk_0xAE06CCC36C49929C(0x019286A9, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 65f, 0x00000001, 0x00000002);
	unk_0xE3BB8E05FCEB3FBE(iVar0, 0x00000001);
}

int func_46()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_47(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0x00000000);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

int func_48(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0xD9522BA9E27E1349(iParam0) < fVar0 && unk_0xD9522BA9E27E1349(iParam0) > fVar1)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (unk_0xD9522BA9E27E1349(iParam0) < fVar0 || unk_0xD9522BA9E27E1349(iParam0) > fVar1)
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

int func_49()
{
	if (func_50(0x000003E8))
	{
		unk_0x53491B90E4FD0E56(0x000001F4);
		while (unk_0xD0BB2359EC70FC37())
		{
			unk_0x3FC8DBCC154CA56B();
			SYSTEM::WAIT(0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_50(int iParam0)
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
			if (func_51())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_51()
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

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

int func_53(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_64(uParam0, 0x00000091, sParam1, iParam7, iParam8, 0x00000000);
	if (iParam6 > 0x00000007)
	{
		if (iParam6 < 0x0000000C)
		{
			iParam6 = 0x00000007;
		}
	}
	uVar0 = 0x0000000A;
	uVar1 = 0x0000000A;
	func_63(0x00000002, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	return func_54(&uVar0, &uVar1, iParam6, 0x00000000);
}

int func_54(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam2 > Global_5147)
			{
				if (bParam3 == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
				}
				else
				{
					func_62();
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
		if (func_61(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_60();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5529 = Global_552A;
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_4FC8.f_172 = Global_5522;
		Global_5141 = Global_5142;
		Global_5143 = Global_5144;
		if (Global_5247 == 0x00000000)
		{
			Global_51DF[0x00000000 /*6*/] = { Global_51F9[0x00000000 /*6*/] };
			Global_51DF[0x00000001 /*6*/] = { Global_51F9[0x00000001 /*6*/] };
			Global_5213[0x00000000 /*6*/] = { Global_522D[0x00000000 /*6*/] };
			Global_5213[0x00000001 /*6*/] = { Global_522D[0x00000001 /*6*/] };
			Global_51EC[0x00000000 /*6*/] = { Global_5206[0x00000000 /*6*/] };
			Global_51EC[0x00000001 /*6*/] = { Global_5206[0x00000001 /*6*/] };
			Global_5220[0x00000000 /*6*/] = { Global_523A[0x00000000 /*6*/] };
			Global_5220[0x00000001 /*6*/] = { Global_523A[0x00000001 /*6*/] };
		}
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam3)
			{
				func_59();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam2 == 0x0000000D)
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
				if (func_58())
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
					if (Global_5247 == 0x00000000)
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
			}
			if (func_57())
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
			}
			func_56();
			Global_514F = bParam3;
		}
		Global_5147 = iParam2;
		if (Global_5141 > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_5141)
			{
				StringCopy(&(Global_4FC8.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_4FC8.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_4CD7 = 0x00000000;
		func_55();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam2 < Global_5147 || iParam2 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000002)
	{
	}
	else
	{
		func_62();
	}
	return 0x00000000;
}

void func_55()
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

void func_56()
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

int func_57()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_58()
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

void func_59()
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
		Global_4C1E = func_39();
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

void func_60()
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

bool func_61(int iParam0, int iParam1)
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

void func_62()
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

void func_63(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_5142 = iParam0;
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	(*uParam1)[0x00000000] = uParam3;
	(*uParam2)[0x00000000] = uParam4;
	(*uParam1)[0x00000001] = uParam5;
	(*uParam2)[0x00000001] = uParam6;
	(*uParam1)[0x00000002] = iParam7;
	(*uParam2)[0x00000002] = iParam8;
	(*uParam1)[0x00000003] = iParam9;
	(*uParam2)[0x00000003] = iParam10;
	(*uParam1)[0x00000004] = iParam11;
	(*uParam2)[0x00000004] = iParam12;
	(*uParam1)[0x00000005] = iParam13;
	(*uParam2)[0x00000005] = iParam14;
	(*uParam1)[0x00000006] = iParam15;
	(*uParam2)[0x00000006] = iParam16;
}

void func_64(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
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

bool func_65(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_66(vector3 vParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0x00000000;
	iVar6 = 0x00000001;
	iVar0 = unk_0x728870EB733D12A1();
	if (!unk_0xAF6690C489CC6203(iVar0))
	{
		unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &vVar3, &vVar4);
	unk_0x4490D017C57827E9(vParam0, 0x00000003, &vVar2, 0x00000001, 0x40400000, 0x00000000);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 0x00000008;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 0x00000008;
	}
	while (iVar5 < 0x00000008)
	{
		switch (iVar5)
		{
			case 0x00000000:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_67(vVar1, 0f, vVar4) };
						vVar11 = { func_67(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000001:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000002;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000000;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000002;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000000;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000002:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_67(vVar1, 0f, vVar4) };
						vVar11 = { func_67(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000003:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000004;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000002;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000004;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000002;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000004:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_67(vVar1, 0f, vVar4) };
						vVar11 = { func_67(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000005:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000006;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000004;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000006;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000004;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000006:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_67(vVar1, 0f, vVar4) };
						vVar11 = { func_67(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000007:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000008;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000006;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000008;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000006;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000008:
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return vVar1;
}

Vector3 func_67(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

int func_68(int iParam0)
{
	if (func_112(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_69(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_70(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000001;
	*uParam1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	uParam2->f_2 = func_72(iParam0, unk_0x16F2683693E537C9(), 0x00000001);
	fVar3 = func_72(iParam0, unk_0x16F2683693E537C9(), 0x00000001);
	fVar4 = func_72(iParam0, unk_0x16F2683693E537C9(), 0x00000001);
	vVar10 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	if (unk_0xB4AE0788C1587752(sParam3))
	{
		vVar9 = { unk_0x1BB04F10296A1C5E(sParam3, sParam4, *uParam1, *uParam2, 0x00000000, 0x00000002) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 0x00000002)
	{
		switch (iVar0)
		{
			case 0x00000000:
				if (iVar1 > 0x00000014)
				{
					uParam2->f_2 = func_71(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), *uParam1, 0x00000001);
					*uParam1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), uParam2->f_2, vVar10) };
					iVar0 = 0x00000002;
				}
				else
				{
					iVar5 = unk_0x6D4C9F7CF124AE37(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 0x00000011, 0x00000000, 0x00000004);
					iVar0++;
				}
				break;
			
			case 0x00000001:
				if (unk_0x1EC301670B54C6DE(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 0x00000002)
				{
					if (iVar6 != 0x00000000)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 0x00000003)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0x00000000;
						}
					}
					else
					{
						if (iVar1 > 0x00000000)
						{
							uParam2->f_2 = func_71(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 0x00000001);
						}
						iVar0++;
					}
				}
				break;
			
			case 0x00000002:
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

float func_71(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 0x00000001)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_72(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	return func_71(vVar0, vVar1, iParam2);
}

void func_73(vector3 vParam0, float fParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - vParam0 };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_74(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fVar2, 15f))
		{
			bVar0 = 0x00000001;
		}
		vVar1 = { vParam0 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_74(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fVar2, 15f))
		{
			bVar0 = 0x00000001;
		}
	}
	if (bVar0)
	{
		if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_74(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		fVar0 = unk_0xD9522BA9E27E1349(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 0x00000001;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_75(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_79(0x00000000))
		{
			func_76(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_76(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_78())
		{
			func_77(0x00000001, 0x00000001);
		}
		else
		{
			func_77(0x00000000, 0x00000000);
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
	if (!func_57())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_77(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0x00000000))
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

bool func_78()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_79(int iParam0)
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

bool func_80()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_81()
{
	Global_4CD7 = 0x00000000;
	func_82();
}

void func_82()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_83(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000074, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000075, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000076, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000077, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000160, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000083, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000084, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000081, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000082, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000085, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000086, 0x00000001);
	unk_0xCFAE3195DD6AE715();
	func_84(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_1D) > 0x000001F4)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_84(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0x00000000);
			}
		}
	}
}

void func_85(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_92(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_57())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_91(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_92(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_91(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_89(unk_0xD803B885F5E47A62())) && !func_87(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_86()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_89(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_86()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_88(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_12();
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

int func_89(int iParam0)
{
	if (func_87(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_90())
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

bool func_90()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_91(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_92(int iParam0)
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

void func_93()
{
	Global_4CD7 = 0x00000000;
	func_62();
}

int func_94()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_95()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (func_94())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC8BC75555A67090D())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					return 0x00000000;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0.95f || unk_0x30C0A7C378403357(iVar0) > 1.011f)
			{
				return 0x00000000;
			}
		}
	}
	else if (bParam1)
	{
		return 0x00000000;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_97(int iParam0)
{
	return func_98(func_99(iParam0));
}

bool func_98(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

char* func_99(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "AM_H_REFS";
			break;
		
		case 0x00000001:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 0x00000002:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_100()
{
	switch (iLocal_72)
	{
		case 0x00000001:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000B:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000010:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000016:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
			if ((!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000019:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000001E:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000001F:
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_101()
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_109();
		}
		else
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_55) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_55))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_55, 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_126 = 0x00000001;
					}
				}
			}
			else
			{
				iLocal_126 = 0x00000001;
			}
			func_119(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0xEB751B41BC4080D4(iLocal_89))
				{
					func_52(joaat("rc_wallets_recovered"), 0x00000001);
					unk_0x6FB46C25CCB7E6D5(joaat("rc_wallets_recovered"), &uVar0, 0xFFFFFFFF);
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
					func_102(0x00000002);
					bLocal_95 = 0x00000001;
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_60))
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(iLocal_89)) > 150f)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_56))
						{
							func_278();
						}
						else if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_56, 0x00000001)) > 100f)
						{
							func_278();
						}
					}
				}
			}
		}
	}
}

void func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_103(func_99(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_2++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000001))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_103(func_99(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_3++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000001);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000002))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_103(func_99(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

void func_103(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_104(var uParam0)
{
	*uParam0 = 0xFFFFFF9D;
}

int func_105(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_106(iParam0, bParam1, 0x00000091);
}

int func_106(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_107(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_108(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_108(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_108(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0x5D96D8530B3D0904(&iVar1, 0x00000003);
		unk_0x5D96D8530B3D0904(&iVar1, 0x00000004);
		unk_0x5D96D8530B3D0904(&iVar1, 0x00000001);
		iLocal_89 = unk_0xA6FF0828D17CF374(iVar0, unk_0xC6151A4F2BB0AC79(iLocal_55, 0x3F99999A, 0x3FC00000), iVar1, iLocal_133, 0x00000001, iLocal_101);
		bLocal_90 = 0x00000001;
		iLocal_60 = func_110(iLocal_89);
		func_122(&Local_107, cLocal_123, sLocal_119, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		if (unk_0xE4EDC4B0E92C078B(iLocal_59))
		{
			unk_0x142CC44DB769B57E(&iLocal_59);
		}
		if (func_112(iLocal_56))
		{
			unk_0xA3BF0AA5A2608191(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_182(iLocal_56, 0x0E763797) && !unk_0xEB6A8945D1AC98A1(iLocal_56))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_61);
				if (!unk_0x5A91F08DF773C39D(iLocal_56, vLocal_138, 0.5f, 0.5f, 0.5f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x80AA372E04ED318D(0x00000000, vLocal_138, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
				}
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_149, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_151, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_150, 8f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_61);
				unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
				unk_0xF82EA857DA10E0CD(&iLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_56, cLocal_93, "pickup_low", 0x00000003))
					{
						if (unk_0x8CA9406E01C7EE58(iLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (unk_0x762119754C50557A(iLocal_89))
							{
								func_122(&Local_107, cLocal_123, cLocal_120, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								unk_0x40B7230FD4C59AA2(iLocal_89);
								unk_0x6D80F1AEBA734886(iLocal_56, iLocal_133);
								unk_0x11AD11297DC58CC7(iLocal_56, 0x00000000);
								unk_0x6DAD7906B73F064D(&iLocal_56);
								func_296(0x00000001);
							}
						}
					}
					else if (unk_0xD1960163A3042274(iLocal_56, 0x0E763797) == 0x00000007)
					{
						unk_0xA3BF0AA5A2608191(iLocal_56);
						unk_0xDD353D0E9C789D0E(&iLocal_61);
						unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_93, "pickup_low", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000800, 0x00000002);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8);
						unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_61);
						unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
						unk_0xF82EA857DA10E0CD(&iLocal_61);
						unk_0xFADC0A217229F6B5(iLocal_56, 0x00000001);
					}
				}
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
		{
			if (unk_0x762119754C50557A(iLocal_89))
			{
				if (unk_0x5A91F08DF773C39D(iLocal_56, unk_0xE925E52ACABA4CE7(iLocal_89), 10f, 10f, 7f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(iLocal_56);
					unk_0xDD353D0E9C789D0E(&iLocal_61);
					unk_0x96167B03C5A77156(0x00000000, unk_0xE925E52ACABA4CE7(iLocal_89), 1f, 0x00004E20, 1f, 0x00000200, 0x471C4000);
					unk_0x796BDF31572BB055(0x00000000, unk_0xE925E52ACABA4CE7(iLocal_89), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_93, "pickup_low", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000800, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8);
					unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_61);
					unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
					unk_0xF82EA857DA10E0CD(&iLocal_61);
					unk_0xFADC0A217229F6B5(iLocal_56, 0x00000001);
					iLocal_91 = 0x00000001;
				}
			}
		}
	}
}

int func_110(int iParam0)
{
	return func_111(iParam0);
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_108(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

int func_112(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_113()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	switch (iLocal_65)
	{
		case 0x00000001:
		case 0x00000002:
			if (unk_0xB87D13D0C064E9D1(iLocal_55, unk_0x16F2683693E537C9(), 0x00000001))
			{
				unk_0xE910A68AA670B4AA(iLocal_55);
				bVar0 = 0x00000001;
			}
			if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_55, iLocal_73, 0x00000000))
			{
				if (unk_0x4DA54CAC0D81A673(iLocal_73))
				{
					if (unk_0x5B17F10380E80E5B(iLocal_73))
					{
						bVar0 = 0x00000001;
					}
				}
			}
			else if (!unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000) || !func_182(iLocal_55, 0xB41F1A34))
			{
				bVar0 = 0x00000001;
			}
			if (!unk_0xE9FDA1035CFEA94F(iLocal_55))
			{
				if (unk_0xD1960163A3042274(iLocal_55, 0xB41F1A34) == 0x00000007)
				{
					bVar0 = 0x00000001;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0xC42A92762C58E1B9(iLocal_55, iLocal_73, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_55, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iLocal_55, 0x0E763797) != 0x00000000)
						{
							unk_0xDD353D0E9C789D0E(&iLocal_62);
							unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
							unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_62);
							unk_0x78ADC381772E3D54(iLocal_55, iLocal_62);
							unk_0xF82EA857DA10E0CD(&iLocal_62);
						}
					}
					else if (unk_0xD1960163A3042274(iLocal_55, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iLocal_55, 0x0E763797) != 0x00000000)
					{
						unk_0xDD353D0E9C789D0E(&iLocal_62);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_62);
						unk_0x78ADC381772E3D54(iLocal_55, iLocal_62);
						unk_0xF82EA857DA10E0CD(&iLocal_62);
					}
					iVar1 = unk_0x1C97A5F82B15E49A(iLocal_55);
					if (iVar1 == 0x00000002)
					{
						unk_0xA3BF0AA5A2608191(iLocal_55);
						if (func_112(unk_0x16F2683693E537C9()))
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_55, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						}
						iLocal_86 = 0x00000001;
					}
				}
			}
			break;
	}
}

int func_114()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_55, 180f, 180f, 50f, 0x00000000, 0x00000001, 0x00000000) || !unk_0x03068588A1FCED1A(iLocal_55))
		{
			func_115(iLocal_59, iLocal_55, 180f, 0x3F400000, 0x00000000);
			return 0x00000001;
		}
		else
		{
			if (Local_107[0x00000002 /*10*/].f_7)
			{
				func_185(&Local_107, 0x00000002);
			}
			unk_0xEBA53F35D0085654(&iLocal_55);
			if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
			{
				if (unk_0x03068588A1FCED1A(iLocal_73))
				{
					unk_0xA954465BA6FDEFE2(&iLocal_73);
				}
			}
		}
	}
	else if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_55, 0x00000000)) < 300f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xE2F1E99DD161A861(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam1), 0x00000000))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000001);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0x00000000)
						{
							iVar0 = 0x00000000;
						}
						if (iVar0 >= 0x000000FF)
						{
							iVar0 = 0x000000FF;
						}
						unk_0xF412DD40DE84CE72(iParam0, 0x00000001);
						unk_0x7F010F50CE03A8AF(iParam0, (0x000000FF - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0x00000000);
						unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
					}
				}
			}
			else if (unk_0xEC560E589DF8370E(iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam1)))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000001);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0x00000000)
						{
							iVar0 = 0x00000000;
						}
						if (iVar0 >= 0x000000FF)
						{
							iVar0 = 0x000000FF;
						}
						unk_0xF412DD40DE84CE72(iParam0, 0x00000001);
						unk_0x7F010F50CE03A8AF(iParam0, (0x000000FF - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0x00000000);
						unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
					}
				}
			}
		}
	}
}

void func_116(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_117(iParam2), 0x00000001);
}

int func_117(int iParam0)
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

float func_118(int iParam0, int iParam1, bool bParam2)
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

void func_119(int iParam0, var uParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0x1C0640BA9A7327B3() > *uParam1 + 500)
		{
			if (unk_0x8FBD6436A27198B4(iParam0) == 0x00000001)
			{
				unk_0x321E019A46034F39(iParam0, 0x00000001);
			}
			else
			{
				unk_0x321E019A46034F39(iParam0, 0x00000000);
				unk_0x61755AC17D8F538E(iParam0, 0x00000001);
			}
			*uParam1 = unk_0x1C0640BA9A7327B3();
		}
		if (!unk_0xFEBC1E4EC9E001F0() && func_120(0x00000000))
		{
			func_102(0x00000001);
		}
	}
}

bool func_120(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B412, iParam0);
}

void func_121()
{
	switch (iLocal_65)
	{
		case 0x00000001:
		case 0x00000002:
			if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
			{
				if (iLocal_126)
				{
					if (unk_0x82CCEAB29E9451DD(iLocal_55, iLocal_73) || unk_0xD1960163A3042274(iLocal_55, 0xB41F1A34) == 0x00000001)
					{
						unk_0x132B85BCE016BCA0(iLocal_55, iLocal_73, vLocal_53, 0x00000008, 35f, 0x000C0025, 10f, 10f, 0x00000001);
					}
					else
					{
						unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
				}
				else
				{
					if (!unk_0x4DA54CAC0D81A673(iLocal_73))
					{
						unk_0xC869A329D6194F52(iLocal_73, 0.1f, 0x000003E8, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
					unk_0x132B85BCE016BCA0(iLocal_55, iLocal_73, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000008, 35f, 0x000C0025, 10f, 10f, 0x00000001);
				}
			}
			else
			{
				unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000004:
			if (!iLocal_126)
			{
				unk_0xDD353D0E9C789D0E(&iLocal_61);
				unk_0x96167B03C5A77156(0x00000000, 182.61f, 6637.91f, 30.54f, 3f, 0x00004E20, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, 240.53f, 6694.1f, 28.62f, 3f, 0x00004E20, 0.25f, 0x00000001, 0x471C4000);
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_61);
				unk_0x78ADC381772E3D54(iLocal_55, iLocal_61);
				unk_0xF82EA857DA10E0CD(&iLocal_61);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			break;
		
		default:
			if (unk_0x0EB28750412C3A5A(vLocal_53, -3044.11f, 594.34f, 6.73f, 0x00000001) < 5f)
			{
				unk_0xEEB67C3D0A71A47B(iLocal_55, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xF82EA857DA10E0CD(&iLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xEEB67C3D0A71A47B(iLocal_55, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			break;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
	{
		unk_0xFADC0A217229F6B5(iLocal_55, 0x00000001);
	}
}

bool func_122(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_64(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0x00000000);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
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
					func_62();
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
		if (func_61(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_60();
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
				func_59();
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
				if (func_58())
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
			if (func_57())
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
			func_56();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_55();
		func_124();
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
		func_62();
	}
	return 0x00000000;
}

void func_124()
{
	if (!func_125())
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

int func_125()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_128())
	{
		return 0x00000000;
	}
	if (func_126(unk_0xD803B885F5E47A62()))
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

bool func_126(int iParam0)
{
	return func_127(iParam0, 0x00000014);
}

bool func_127(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_128()
{
	return 0xFFFFFFFF;
}

bool func_129()
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 0x0000003C)
				{
					bVar0 = 0x00000001;
				}
			}
			else
			{
				iLocal_67 = 0x00000000;
			}
		}
		if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_56, 0x0000796E, 0f, 0f, 0f), 2f, 0x00000001))
		{
			bVar0 = 0x00000001;
		}
		vVar1 = { vVar1 + unk_0x64430C979F516F7A(iLocal_56, 0x0000796E, 0f, 0f, 0f) };
		vVar2 = { vVar2 + unk_0x64430C979F516F7A(iLocal_56, 0x0000796E, 0f, 0f, 0f) };
		if ((unk_0xBBE430A566D01EF3(vVar2, vVar1, joaat("weapon_smokegrenade"), 0x00000001) || unk_0xBBE430A566D01EF3(vVar2, vVar1, joaat("weapon_grenade"), 0x00000001)) || unk_0xBBE430A566D01EF3(vVar2, vVar1, joaat("weapon_stickybomb"), 0x00000001))
		{
			bVar0 = 0x00000001;
		}
		if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iLocal_56, 0x0000796E, 0f, 0f, 0f), 12f))
		{
			bVar0 = 0x00000001;
		}
		if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x64430C979F516F7A(iLocal_56, 0x0000796E, 0f, 0f, 0f), 50f))
		{
			bVar0 = 0x00000001;
		}
	}
	if (bVar0)
	{
		if (!func_131())
		{
		}
		else
		{
			bVar0 = 0x00000000;
			if (unk_0xD1960163A3042274(iLocal_56, 0x1C43F4CF) != 0x00000001)
			{
				if (func_130(iLocal_56))
				{
					unk_0x8BE3D040D15AEA1D(iLocal_56, 0x000007D0);
				}
			}
		}
	}
	return bVar0;
}

int func_130(int iParam0)
{
	if (func_112(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_131()
{
	if (func_112(iLocal_55))
	{
		if (func_118(iLocal_56, iLocal_55, 0x00000001) < 22f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_132()
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (unk_0xC844350D5D58C99A(iLocal_56))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_56))
		{
			bVar0 = 0x00000001;
		}
		else
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_56, unk_0x16F2683693E537C9(), 0x00000001) && unk_0x869EFD0BC0868856(iLocal_56))
			{
				bVar0 = 0x00000001;
				unk_0xE910A68AA670B4AA(iLocal_56);
			}
			if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_56, 0x00000001), 1f, 0x00000001))
			{
				bVar0 = 0x00000001;
			}
			if (func_133(iLocal_56, 0x00000000, 0x428C0000, 0x432A0000, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
			{
				bVar0 = 0x00000001;
			}
		}
	}
	if (bVar0)
	{
		if (func_131())
		{
			bVar0 = 0x00000000;
			if (unk_0xD1960163A3042274(iLocal_56, 0x1C43F4CF) != 0x00000001)
			{
				if (func_130(iLocal_56))
				{
					unk_0x8BE3D040D15AEA1D(iLocal_56, 0x000007D0);
				}
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(iLocal_55))
		{
			if (unk_0xD1960163A3042274(iLocal_55, 0x6BA30179) == 0x00000007)
			{
				unk_0xAFF39FB306F8E232(iLocal_55, 0x00000011, 0x00000001);
				unk_0xAFF39FB306F8E232(iLocal_55, 0x0000000D, 0x00000000);
				unk_0xF3268524E9BE6D6E(iLocal_55, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
		}
	}
	return bVar0;
}

int func_133(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_112(unk_0x16F2683693E537C9()) && func_112(iParam0))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (func_147(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 0x00000001;
		}
		if (!unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_146(unk_0x16F2683693E537C9(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0x00000000;
		}
		else if (func_134(iParam0, fParam3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_134(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_112(unk_0x16F2683693E537C9()) && func_112(iParam0))
	{
		if (func_145(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_135(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_135(int iParam0, float fParam1)
{
	return func_136(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

bool func_136(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_144(iParam0, iParam1);
	if (!func_112(iParam0) || !func_112(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_143(&(Local_49[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_140(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_139();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_137(&(Local_49[iVar2 /*4*/]), vVar1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_137(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_112(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_138(iParam2, iParam5) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 0x000001FF, iParam4, 0x00000007);
		return 0x00000000;
	}
	iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0x00000000)
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	else if (iVar4 == 0x00000001)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000000;
	if (unk_0xEC560E589DF8370E(iVar3))
	{
		func_112(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_50)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
			}
			*uParam3 = unk_0x1C0640BA9A7327B3();
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (unk_0xE2F1E99DD161A861(iVar3))
	{
		func_112(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0x00000000))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0x00000000))
			{
				if (bLocal_50)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				}
				*uParam3 = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
		return 0x00000000;
	}
	return 0x00000000;
}

Vector3 func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000007);
		iParam1 = iVar0;
	}
	if (iParam1 == 0x00000000)
	{
		return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
	}
	else if (iParam1 == 0x00000001)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000002)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009995, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000003)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x000049D9, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000004)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000DEAD, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000005)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000F9BB, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000006)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009000, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
}

int func_139()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0x00000000 && Local_49[iVar0 /*4*/].f_1 == 0x00000000) && Local_49[iVar0 /*4*/].f_2 == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_140(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_142(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_142(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_141(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_141(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_142(vector3 vParam0)
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

void func_143(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_145(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_146(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x08D89CE2E20AE305(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_147(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0x00000000)
	{
		iVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		iVar0 = 2f;
	}
	if (func_112(unk_0x16F2683693E537C9()) && func_112(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_151(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_148(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iVar0, 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					iVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_151(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_148(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_148(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_grenade"), fParam1, 0x00000001) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_molotov"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_smokegrenade"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_stickybomb"), 5f, 0x00000001))
		{
			if (bParam3)
			{
				if (func_149(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_149(iParam0, fParam1))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar1, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_149(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_150(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_150(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_142(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_142(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_141(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_151(int iParam0, bool bParam1, int iParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iParam2, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_152()
{
	if (bLocal_90 || unk_0x437347B10A200C4B(iLocal_55, 0x00000000))
	{
		func_180(&uLocal_152, 0x00000000, 0x00000000);
	}
	else
	{
		func_153(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	}
}

void func_153(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_154(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_154(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_155(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_155(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_180(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_156(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_156(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = sParam3;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_98(iVar0))
	{
		func_179();
	}
	if (func_178(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0x00000000;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 0x00000001);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_173(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_170(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_160(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_98(iVar0))
							{
								func_103(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_159(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_160(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_98(iVar0))
						{
							func_103(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_159(0x00000001);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam3))
			{
				if (func_98(sParam3))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
					{
						func_180(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_180(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_180(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_180(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_180(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_180(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_173(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_158(uParam0))
				{
					func_157(uParam0);
				}
			}
		}
	}
	else
	{
		func_180(uParam0, iVar0, 0x00000000);
	}
}

void func_157(var uParam0)
{
	if (func_178(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x29D5132FBDCF2B1E(0x00000000);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	uParam0->f_2 = 0xFFFFFFFF;
	*uParam0 = 0x00000001;
}

int func_158(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0x00000000)
	{
		iVar0 = (uParam0->f_A / 0x00000002);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_159(bool bParam0)
{
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (bParam0)
			{
				Global_1B416.f_273C.f_64++;
			}
			return Global_1B416.f_273C.f_64;
			break;
		
		case 0x00000004:
			if (bParam0)
			{
				Global_1B416.f_273C.f_65++;
			}
			return Global_1B416.f_273C.f_65;
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (bParam0)
			{
				Global_1B416.f_273C.f_66++;
			}
			return Global_1B416.f_273C.f_66;
			break;
		
		default:
			break;
	}
	return 0x00000003;
}

int func_160(char* sParam0)
{
	if (!func_161(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_98(sParam0)) || func_98("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_159(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_159(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_159(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (bParam2)
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000000;
	}
	if (func_79(0x00000000))
	{
		return 0x00000000;
	}
	if (func_169())
	{
		return 0x00000000;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_E545)
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				return 0x00000000;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0x00000000;
			}
		}
	}
	if ((func_168() || func_167(Global_440000.f_38DB3)) || func_166())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_165(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_164(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_162(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_162(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_163(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_163(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_163(int iParam0, bool bParam1, bool bParam2)
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

int func_164(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			switch (iParam1)
			{
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
					return 0x00000001;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0x00000000)
					{
						return 0x00000001;
					}
					break;
				}
			}
	}
	return 0x00000000;
}

int func_165(int iParam0, int iParam1)
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

var func_166()
{
	return Global_2564C8.f_11;
}

bool func_167(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_168()
{
	return Global_2564C8.f_10;
}

bool func_169()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_170(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1420CD == 0x00000001)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		func_180(uParam0, 0x00000000, 0x00000000);
	}
	if (func_65(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_171())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 0x66EADDF5)
	{
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
		if (iVar2 < 0x000005DC)
		{
			iVar2 = 0x000005DC;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 0x00000001, 0xFFFFFFFF, iVar1, iVar2, iParam3);
	iVar3 = 0x00000800;
	iVar4 = 0x00000003;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, 0xFFFFFFFF, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

bool func_171()
{
	return func_172(unk_0xD803B885F5E47A62());
}

int func_172(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	switch (uParam0->f_5)
	{
		case 0x00000000:
			uParam0->f_7 = 0x00000000;
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_177(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_158(uParam0))
			{
				uParam0->f_7 = 0x00000001;
				uParam0->f_5 = 0x00000004;
			}
			break;
		
		case 0x00000001:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (!func_177(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
			}
			else
			{
				uParam0->f_5 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (!func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_176(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
				{
					uParam0->f_5 = 0x00000000;
				}
				else if (!func_177(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (func_175(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
					{
						uParam0->f_5 = 0x00000000;
					}
					else if (func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_158(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_161(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_179();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_177(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_178(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_179()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_180(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	uParam0->f_1 = 0x00000000;
	*uParam0 = 0x00000000;
	uParam0->f_2 = 0xFFFFFFFF;
	uParam0->f_8 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_98(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_98(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

float func_181(int iParam0, vector3 vParam1, bool bParam2)
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

int func_182(int iParam0, int iParam1)
{
	if (func_130(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_183(char* sParam0)
{
	func_184(sParam0);
}

void func_184(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_185(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_186()
{
	unk_0xDD353D0E9C789D0E(&iLocal_61);
	unk_0xF96A174EE26D7588(0x00000000, iLocal_55, 0x000002EE);
	unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_149, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_150, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_151, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_149, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_150, 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_148, sLocal_151, 8f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_61);
	unk_0x78ADC381772E3D54(iLocal_56, iLocal_61);
	unk_0xF82EA857DA10E0CD(&iLocal_61);
	if (unk_0xE4EDC4B0E92C078B(iLocal_58))
	{
		unk_0x142CC44DB769B57E(&iLocal_58);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
	{
		iLocal_59 = func_105(iLocal_55, 0x00000001, 0x00000000);
	}
	unk_0xF2D30B8ACAF12A39(iLocal_59, 0x00000001);
	unk_0x060F249A9A3E3F4E(0x00000000);
	unk_0x51B096AAC60548C1(0.1f);
	func_121();
	if ((SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_56, 0x00000000), -2956.26f, 487.97f, 15.46f) > 5f && unk_0x0EB28750412C3A5A(vLocal_53, -203.72f, -861.8f, 29.27f, 0x00000001) > 5f) && unk_0x0EB28750412C3A5A(vLocal_53, 288.46f, -1256.71f, 28.44f, 0x00000001) > 5f)
	{
		if (func_118(unk_0x16F2683693E537C9(), iLocal_56, 0x00000001) < 50f)
		{
			func_122(&Local_107, cLocal_123, sLocal_115, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			iLocal_85 = 0x00000001;
		}
	}
	iLocal_66 = unk_0x1C0640BA9A7327B3();
	SYSTEM::SETTIMERA(0x00000000);
	if (func_112(unk_0x16F2683693E537C9()))
	{
		unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
	}
	func_187(0x00000001);
}

int func_187(int iParam0)
{
	if (func_189())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_188(Global_1B40B))
		{
			func_102(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_188(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000002:
		case 0x00000012:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_189()
{
	switch (func_190(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
	{
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000000:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (!bParam3)
	{
		if (Global_177DE.f_2C == 0x00000001)
		{
			return 0x00000002;
		}
	}
	if (iParam1 == 0x00000000)
	{
		if (func_194(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *uParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*uParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *uParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *uParam0)
		{
			return 0x00000001;
		}
		*uParam0 = 0xFFFFFFFF;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		if (!func_192(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_191(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_191(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_A1B0 == 0x00000000)
	{
		return;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_A1B0)
	{
		if (Global_A1B6[iVar0 /*4*/] == *uParam0)
		{
			Global_A1B6[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 0xFFFFFFFF;
}

bool func_192(int iParam0)
{
	return func_193(iParam0, Global_A1D7);
}

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_192(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_195()
{
	if (iLocal_134 == 0xFFFFFFFF)
	{
		if (unk_0x18AF0C72ABD5543B())
		{
			if (unk_0x0A059E0DB9253280(iLocal_55))
			{
				iLocal_134 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
	else if (unk_0x1C0640BA9A7327B3() > iLocal_134 + 1000)
	{
		return 0x00000001;
	}
	if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, vLocal_53, 50f))
	{
		return 0x00000001;
	}
	if ((unk_0x1C0640BA9A7327B3() - iLocal_135) > 0x00007530)
	{
		if (!unk_0x03068588A1FCED1A(iLocal_55))
		{
			return 0x00000001;
		}
		else
		{
			func_278();
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_59))
	{
		if ((unk_0x0EB28750412C3A5A(vLocal_53, -3044.11f, 594.34f, 6.73f, 0x00000001) > 5f && unk_0x0EB28750412C3A5A(vLocal_53, -712.9f, -819.32f, 22.73f, 0x00000001) > 5f) && unk_0x0EB28750412C3A5A(vLocal_53, 24.13f, -946.84f, 28.36f, 0x00000001) > 5f)
		{
			if (unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(iLocal_55, 0x00000000), 2.5f))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_196()
{
	if (SYSTEM::VDIST(vLocal_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
		{
			if (func_112(iLocal_56) && func_112(unk_0x16F2683693E537C9()))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 60f, 90f, 12f, 0x00000000, 0x00000001, 0x00000000))
				{
					iLocal_59 = func_105(iLocal_55, 0x00000001, 0x00000000);
					unk_0xF2D30B8ACAF12A39(iLocal_59, 0x00000000);
				}
			}
		}
		else
		{
			func_119(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
	{
		if (func_112(iLocal_56) && func_112(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_56, 90f, 90f, 8f, 0x00000000, 0x00000001, 0x00000000))
			{
				iLocal_59 = func_105(iLocal_55, 0x00000001, 0x00000000);
				unk_0xF2D30B8ACAF12A39(iLocal_59, 0x00000000);
			}
		}
	}
	else
	{
		func_119(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == 0xFFFFFFFF)
	{
		iLocal_135 = unk_0x1C0640BA9A7327B3();
	}
}

int func_197()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { vLocal_53 };
	vVar1 = { 0f, 0f, fLocal_54 };
	vVar2 = { 10f, 10f, 5f };
	if (iLocal_65 == 0x00000001)
	{
		func_221();
		if (SYSTEM::VDIST(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			vLocal_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			vLocal_75 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_77 = 160.391f;
			vLocal_136 = { -259.0351f, -865.7119f, 28f };
			vLocal_137 = { -130.3981f, -908.8096f, 40f };
			unk_0x8A222F0405967452("ATM_1");
			unk_0x523BCC9DC80CD82F(iLocal_106);
			while (!unk_0xB87F6CF6E5628C67(iLocal_106))
			{
				if (func_208())
				{
					func_278();
				}
				SYSTEM::WAIT(0x00000000);
			}
			unk_0xAB8E2DDC7AF955E0(iLocal_106, 0x00000001);
		}
		else
		{
			vLocal_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			vLocal_75 = { -2973.03f, 496.38f, 14.96f };
			fLocal_77 = 3.18f;
			vLocal_136 = { -259.0351f, -865.7119f, 28f };
			vLocal_137 = { -130.3981f, -908.8096f, 40f };
			unk_0x523BCC9DC80CD82F(iLocal_106);
			while (!unk_0xB87F6CF6E5628C67(iLocal_106))
			{
				if (func_208())
				{
					func_278();
				}
				SYSTEM::WAIT(0x00000000);
			}
			unk_0xAB8E2DDC7AF955E0(iLocal_106, 0x00000001);
		}
	}
	else if (iLocal_65 == 0x00000002)
	{
		func_221();
		vLocal_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		vLocal_75 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_77 = 75.9756f;
		vLocal_136 = { 266.3643f, -1313.829f, 28.59103f };
		vLocal_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0x523BCC9DC80CD82F(iLocal_106);
		while (!unk_0xB87F6CF6E5628C67(iLocal_106))
		{
			if (func_208())
			{
				func_278();
			}
			SYSTEM::WAIT(0x00000000);
		}
		unk_0xAB8E2DDC7AF955E0(iLocal_106, 0x00000001);
	}
	else if (iLocal_65 == 0x00000003)
	{
		func_221();
		vLocal_75 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_77 = 327f;
		vLocal_136 = { -1596.203f, -474.8844f, 32f };
		vLocal_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_65 == 0x00000004)
	{
		func_221();
		vLocal_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		vLocal_75 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_77 = 165f;
		vLocal_136 = { 178.1817f, 6660.375f, 31f };
		vLocal_137 = { 179.1249f, 6530.043f, 38f };
		unk_0x73EBD15DD6536BC2(0x00000000);
		unk_0xE342F209E49C5314(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0x00000000, 0x00000001);
		unk_0x523BCC9DC80CD82F(iLocal_106);
		while (!unk_0xB87F6CF6E5628C67(iLocal_106))
		{
			if (func_208())
			{
				func_278();
			}
			SYSTEM::WAIT(0x00000000);
		}
		unk_0xAB8E2DDC7AF955E0(iLocal_106, 0x00000001);
	}
	else if (iLocal_65 == 0x00000005)
	{
		func_221();
	}
	if (func_199())
	{
		unk_0x536F1BE96C726C4B(vLocal_53, vVar2.x, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_63 = unk_0x7D6CA5F52B3748BF(vLocal_53 - vVar2, vLocal_53 + vVar2, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		iLocal_56 = unk_0x36F2404464202779(0x00000005, iLocal_105, vLocal_53, fLocal_54, 0x00000001, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_56, 0x0000000D, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_56, 0x0000000B, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_56, 0x00000011, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_56, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
		unk_0xE8832A9E16A57A1F(iLocal_56, 0x00000001, 0x00000001);
		unk_0x7980D72D61BEF4D5(iLocal_56, 0x00000001);
		unk_0x25C5402CC10F76CD(iLocal_56, 0x00000000);
		unk_0x4F39CC3882DD074E(iLocal_56, sLocal_147);
		unk_0x6D80F1AEBA734886(iLocal_56, 0x00000000);
		if (iLocal_71 == 0x00000001)
		{
			unk_0x64F9F278AB9DCA2C(iLocal_56, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_56, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_56, 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_56, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
		}
		iLocal_55 = unk_0x36F2404464202779(0x00000016, iLocal_104, vLocal_53, 0f, 0x00000001, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_55, 0x00000011, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_55, 0x0000000D, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_55, 0x00000006, 0x00000001);
		unk_0xBAFED2F6486F771A(iLocal_55, 0x00000080, 0x00000001);
		unk_0xE8832A9E16A57A1F(iLocal_55, 0x00000001, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_55, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_55, 0x0000002A, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_55, 0x00000119, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_55, 0x000000AC, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_55, 0x00000089, 0x00000001);
		unk_0xFBAC0F6D4E00C891(iLocal_55);
		unk_0x4F39CC3882DD074E(iLocal_55, sLocal_146);
		unk_0x26A6B1686E33113F(iLocal_55, 0x00000001);
		unk_0x08841CDB215AE18F(iLocal_55, unk_0x1BB04F10296A1C5E(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0x00000000, 0x00000002), 0x00000000, 0x00000000, 0x00000001);
		vVar3 = { unk_0xEEB20D14BD38615E(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0x00000000, 0x00000002) };
		unk_0xD8F6A53F4799FAFE(iLocal_55, vVar3.z);
		if (func_112(iLocal_56))
		{
			if (unk_0xCED082ADD3739B9F(iLocal_56))
			{
				unk_0x08841CDB215AE18F(iLocal_56, unk_0x1BB04F10296A1C5E("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0x00000000, 0x00000002), 0x00000000, 0x00000000, 0x00000001);
				vVar3 = { unk_0xEEB20D14BD38615E("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0x00000000, 0x00000002) };
			}
			else
			{
				unk_0x08841CDB215AE18F(iLocal_56, unk_0x1BB04F10296A1C5E("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0x00000000, 0x00000002), 0x00000000, 0x00000000, 0x00000001);
				vVar3 = { unk_0xEEB20D14BD38615E("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0x00000000, 0x00000002) };
			}
			unk_0xD8F6A53F4799FAFE(iLocal_56, vVar3.z);
		}
		unk_0xC6EB89C59F2AF6B8(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (unk_0xCED082ADD3739B9F(iLocal_56))
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x8D17794CE3273D70("random@atmrobberygen@female");
		}
		else
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x8D17794CE3273D70("random@atmrobberygen@male");
		}
		unk_0x20EC6650986ACDC7(iLocal_55, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_56, 0x00000001);
		unk_0x262EF6C6306BEA6C(iLocal_55, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
		unk_0x155F8B27DA5061F5(iLocal_55, joaat("weapon_pistol"), 0x00000022, 0x00000000);
		unk_0x5745EA6329A91E29(iLocal_55, joaat("weapon_pistol"), 0x00000000);
		unk_0xE2F0767314863BD8(iLocal_55, 0x00000001, 0x00000000);
		switch (func_39())
		{
			case 0x00000000:
				sLocal_112 = "MICHAEL";
				break;
			
			case 0x00000001:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 0x00000002:
				sLocal_112 = "TREVOR";
				break;
		}
		func_198(&Local_107, 0x00000000, unk_0x16F2683693E537C9(), sLocal_112, 0x00000000, 0x00000001);
		func_198(&Local_107, 0x00000001, iLocal_56, sLocal_114, 0x00000000, 0x00000001);
		func_198(&Local_107, 0x00000002, iLocal_55, "ATMRobber", 0x00000000, 0x00000001);
		if (iLocal_65 == 0x00000001 || iLocal_65 == 0x00000002)
		{
			iLocal_73 = unk_0x122AAB0B1D6F55AD(iLocal_106, vLocal_74, fLocal_76, 0x00000001, 0x00000001, 0x00000000);
			unk_0x56FDC9ADE35F7DB0(iLocal_73, 0x00000001, 0x00000001, 0x00000000);
			unk_0x2F625BED8BF7F26A(iLocal_73);
			unk_0xDC2C59BD0989562B(iLocal_73, 0x00000001);
			if (iLocal_65 == 0x00000002)
			{
				unk_0x611DFA9294B339CA(iLocal_73, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (iLocal_65 == 0x00000001)
			{
				unk_0xCC095276B3DD380E(iLocal_55, 0x00000000);
				unk_0x545E1397F38D9D5A(iLocal_55, 0x00000003);
			}
			else if (iLocal_65 == 0x00000004)
			{
				unk_0x71EDC33E5A423750(iLocal_73, 0x00000003);
			}
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
		return 0x00000001;
	}
	else if (func_208())
	{
		func_278();
	}
	return 0x00000000;
}

void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_199()
{
	unk_0x3F423BF5B8125A50("random@atmrobberygen@male");
	unk_0x3F423BF5B8125A50("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_207(&Local_164, 0x00000003);
		Local_164.f_92 = unk_0xF4CCC8CB6DE7F1AE();
		func_206(&Local_164, iLocal_104);
		func_206(&Local_164, iLocal_105);
		func_206(&Local_164, iLocal_101);
		func_206(&Local_164, iLocal_102);
		func_204(&Local_164, cLocal_92);
		func_204(&Local_164, cLocal_148);
		func_204(&Local_164, cLocal_142);
		func_204(&Local_164, cLocal_93);
		iLocal_81 = 0x00000001;
	}
	if ((unk_0xB4AE0788C1587752("random@atmrobberygen@male") && unk_0xB4AE0788C1587752("random@atmrobberygen@female")) && func_200(&Local_164))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_200(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_201(uParam0[iVar0 /*18*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	return 0x00000001;
}

bool func_201(var uParam0)
{
	return func_202(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_202(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_203(iParam0))
			{
				case 0x00000000:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 0x00000001:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 0x00000002:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 0x00000003:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 0x00000004:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 0x00000005:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 0x00000006:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001B), 0xFFFFFFFF);
					break;
				
				case 0x00000007:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 0x00000008:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 0x00000009:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_204(var uParam0, char* sParam1)
{
	func_205(uParam0, 0x00000001, 0xFFFFFFFF, sParam1, 0x00000000);
}

void func_205(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 0x00000004)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 0x00000009)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

void func_206(var uParam0, int iParam1)
{
	func_205(uParam0, 0x00000000, iParam1, "NULL", 0x00000000);
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		uParam0->f_93 = iParam1;
	}
}

int func_208()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_51) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_220())
		{
			return 0x00000000;
		}
	}
	if (func_216())
	{
		return 0x00000001;
	}
	if (func_209(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_209(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 0xFFFFFFFF;
	fVar3 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_41(func_39()))
		{
			iVar5 = func_215();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_210(iVar1, &Var0);
					fVar4 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var0.f_6, 0x00000001);
					if (fVar4 < fVar3)
					{
						bVar7 = 0x00000001;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = 0x00000000;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_210(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_211(uParam1, "Abigail1", func_213(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_211(uParam1, "Abigail2", func_213(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_211(uParam1, "Barry1", func_213(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_211(uParam1, "Barry2", func_213(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_211(uParam1, "Barry3", func_213(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_211(uParam1, "Barry3A", func_213(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_211(uParam1, "Barry3C", func_213(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_211(uParam1, "Barry4", func_213(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_211(uParam1, "Epsilon1", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_211(uParam1, "Epsilon2", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_211(uParam1, "Epsilon3", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_211(uParam1, "Epsilon4", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_211(uParam1, "Epsilon5", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_211(uParam1, "Epsilon6", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_211(uParam1, "Epsilon7", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_211(uParam1, "Epsilon8", func_213(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_211(uParam1, "Extreme1", func_213(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_211(uParam1, "Extreme2", func_213(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_211(uParam1, "Extreme3", func_213(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_211(uParam1, "Extreme4", func_213(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_211(uParam1, "Fanatic1", func_213(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_211(uParam1, "Fanatic2", func_213(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_211(uParam1, "Fanatic3", func_213(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_211(uParam1, "Hao1", func_213(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_211(uParam1, "Hunting1", func_213(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_211(uParam1, "Hunting2", func_213(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_211(uParam1, "Josh1", func_213(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_211(uParam1, "Josh2", func_213(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_211(uParam1, "Josh3", func_213(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_211(uParam1, "Josh4", func_213(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_211(uParam1, "Maude1", func_213(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_211(uParam1, "Minute1", func_213(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_211(uParam1, "Minute2", func_213(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_211(uParam1, "Minute3", func_213(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_211(uParam1, "Nigel1", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_211(uParam1, "Nigel1A", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_211(uParam1, "Nigel1B", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_211(uParam1, "Nigel1C", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_211(uParam1, "Nigel1D", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_211(uParam1, "Nigel2", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_211(uParam1, "Nigel3", func_213(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_211(uParam1, "Omega1", func_213(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_211(uParam1, "Omega2", func_213(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_211(uParam1, "Paparazzo1", func_213(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_211(uParam1, "Paparazzo2", func_213(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_211(uParam1, "Paparazzo3", func_213(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_211(uParam1, "Paparazzo4", func_213(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_211(uParam1, "Rampage1", func_213(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_211(uParam1, "Rampage3", func_213(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_211(uParam1, "Rampage4", func_213(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_211(uParam1, "Rampage5", func_213(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_211(uParam1, "Rampage2", func_213(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_212(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_211(uParam1, "TheLastOne", func_213(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_211(uParam1, "Tonya1", func_213(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_211(uParam1, "Tonya2", func_213(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_211(uParam1, "Tonya3", func_213(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_211(uParam1, "Tonya4", func_213(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_211(uParam1, "Tonya5", func_213(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_212(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000000;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000000;
			break;
		
		case 0x00000010:
			return 0x00000001;
			break;
		
		case 0x00000011:
			return 0x00000001;
			break;
		
		case 0x00000012:
			return 0x00000001;
			break;
		
		case 0x00000013:
			return 0x00000001;
			break;
		
		case 0x00000014:
			return 0x00000001;
			break;
		
		case 0x00000015:
			return 0x00000001;
			break;
		
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000001;
			break;
		
		case 0x00000018:
			return 0x00000001;
			break;
		
		case 0x00000019:
			return 0x00000001;
			break;
		
		case 0x0000001A:
			return 0x00000001;
			break;
		
		case 0x0000001B:
			return 0x00000000;
			break;
		
		case 0x0000001C:
			return 0x00000001;
			break;
		
		case 0x0000001D:
			return 0x00000001;
			break;
		
		case 0x0000001E:
			return 0x00000001;
			break;
		
		case 0x0000001F:
			return 0x00000000;
			break;
		
		case 0x00000020:
			return 0x00000001;
			break;
		
		case 0x00000021:
			return 0x00000001;
			break;
		
		case 0x00000022:
			return 0x00000001;
			break;
		
		case 0x00000023:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000025:
			return 0x00000000;
			break;
		
		case 0x00000026:
			return 0x00000001;
			break;
		
		case 0x00000027:
			return 0x00000001;
			break;
		
		case 0x00000028:
			return 0x00000001;
			break;
		
		case 0x00000029:
			return 0x00000001;
			break;
		
		case 0x0000002A:
			return 0x00000001;
			break;
		
		case 0x0000002B:
			return 0x00000001;
			break;
		
		case 0x0000002C:
			return 0x00000000;
			break;
		
		case 0x0000002D:
			return 0x00000000;
			break;
		
		case 0x0000002E:
			return 0x00000001;
			break;
		
		case 0x0000002F:
			return 0x00000001;
			break;
		
		case 0x00000030:
			return 0x00000000;
			break;
		
		case 0x00000031:
			return 0x00000001;
			break;
		
		case 0x00000032:
			return 0x00000001;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
		
		case 0x00000034:
			return 0x00000001;
			break;
		
		case 0x00000036:
			return 0x00000001;
			break;
		
		case 0x00000037:
			return 0x00000001;
			break;
		
		case 0x00000038:
			return 0x00000001;
			break;
		
		case 0x00000035:
			return 0x00000001;
			break;
		
		case 0x00000039:
			return 0x00000001;
			break;
		
		case 0x0000003A:
			return 0x00000001;
			break;
		
		case 0x0000003B:
			return 0x00000001;
			break;
		
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000001;
			break;
		
		case 0x0000003E:
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

struct<2> func_213(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_214(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_214(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_215()
{
	func_40();
	switch (Global_1B416.f_936.f_21B.f_10E1)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

int func_216()
{
	if (func_219() && !func_220())
	{
		return 0x00000001;
	}
	if (func_218() && func_217())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_217()
{
	return Global_1B2FC > 0x00000000;
}

int func_218()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_219()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_220()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_221()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0x00000000 && iLocal_65 == 0x00000005)
	{
		iLocal_71 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
	}
	else if (iLocal_65 != 0x00000005)
	{
		iLocal_71 = iLocal_65;
	}
	switch (iLocal_71)
	{
		case 0x00000001:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_39())
			{
				case 0x00000000:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 0x00000001:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 0x00000002:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0x00000000)
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
				if (iVar0 == 0x00000000)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 0x00000001)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 0x00000002)
				{
					bVar1 = func_222();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 0x00000001;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 0x00000002:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_39())
			{
				case 0x00000000:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 0x00000001:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 0x00000002:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 0x00000003:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_39())
			{
				case 0x00000000:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 0x00000001:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 0x00000002:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0x00000000)
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
				if (iVar0 == 0x00000000)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 0x00000001)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 0x00000002)
				{
					bVar2 = func_222();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 0x00000001;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 0x00000004:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_39())
			{
				case 0x00000000:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 0x00000001:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 0x00000002:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0x00000000)
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
				if (iVar0 == 0x00000000)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 0x00000001)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 0x00000002)
				{
					bVar3 = func_222();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 0x00000001;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (unk_0x0EB28750412C3A5A(vLocal_53, -203.72f, -861.8f, 29.27f, 0x00000001) < 5f)
	{
		vLocal_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		vLocal_140 = { -187.24f, -856.77f, 28.97f };
		fLocal_141 = 162.69f;
		iLocal_72 = 0x00000001;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, 288.46f, -1256.71f, 28.44f, 0x00000001) < 5f)
	{
		vLocal_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		vLocal_140 = { 250.55f, -1239.27f, 28.84f };
		fLocal_141 = 265.51f;
		iLocal_72 = 0x00000002;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -3044.11f, 594.34f, 6.73f, 0x00000001) < 5f)
	{
		vLocal_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		vLocal_140 = { -3037.55f, 608.53f, 7.34f };
		fLocal_141 = 202.3f;
		iLocal_72 = 0x00000003;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, 174.53f, 6637.64f, 30.57f, 0x00000001) < 5f)
	{
		vLocal_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		vLocal_140 = { 188.97f, 6616.2f, 31.48f };
		fLocal_141 = 93.97f;
		iLocal_72 = 0x00000004;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, 24.13f, -946.84f, 28.36f, 0x00000001) < 5f)
	{
		vLocal_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		vLocal_140 = { 22.19f, -955.82f, 28.94f };
		fLocal_141 = 70.66f;
		iLocal_72 = 0x00000006;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, 296.13f, -894.01f, 28.23f, 0x00000001) < 5f)
	{
		vLocal_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		vLocal_140 = { 286.4f, -897.28f, 28.57f };
		fLocal_141 = 341.97f;
		iLocal_72 = 0x00000008;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, 1077.69f, -775.73f, 57.21f, 0x00000001) < 5f)
	{
		vLocal_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		vLocal_140 = { 1081.93f, -764.08f, 57.35f };
		fLocal_141 = 268.57f;
		iLocal_72 = 0x0000000B;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -2072.88f, -317.19f, 12.32f, 0x00000001) < 5f)
	{
		vLocal_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		vLocal_140 = { -2101.2f, -293.74f, 12.74f };
		fLocal_141 = 263.12f;
		iLocal_72 = 0x00000010;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -821.33f, -1082.43f, 10.14f, 0x00000001) < 5f)
	{
		vLocal_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		vLocal_140 = { -803.18f, -1075.91f, 11.13f };
		fLocal_141 = 209.53f;
		iLocal_72 = 0x00000011;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -712.9f, -819.32f, 22.73f, 0x00000001) < 5f)
	{
		vLocal_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		vLocal_140 = { -721.63f, -826.84f, 22.82f };
		fLocal_141 = 93.14f;
		iLocal_72 = 0x00000012;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -387.12f, 6045.79f, 30.5f, 0x00000001) < 5f)
	{
		vLocal_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		vLocal_140 = { -406.23f, 6045.69f, 31.06f };
		fLocal_141 = 229.52f;
		iLocal_72 = 0x00000013;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -301.84f, -830.39f, 31.38f, 0x00000001) < 5f)
	{
		vLocal_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		vLocal_140 = { -304.56f, -840.76f, 31.26f };
		fLocal_141 = 77.59f;
		iLocal_72 = 0x00000016;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -254.3f, -691.96f, 32.61f, 0x00000001) < 5f)
	{
		vLocal_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		vLocal_140 = { -250.91f, -684.01f, 33f };
		fLocal_141 = 230.65f;
		iLocal_72 = 0x00000017;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, 89.39f, 2f, 67.34f, 0x00000001) < 5f)
	{
		vLocal_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		vLocal_140 = { 91.35f, -7.07f, 67.82f };
		fLocal_141 = 70.28f;
		iLocal_72 = 0x00000019;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -526.42f, -1222.51f, 17.46f, 0x00000001) < 5f)
	{
		vLocal_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		vLocal_140 = { -522.45f, -1196.35f, 18.45f };
		fLocal_141 = 297.22f;
		iLocal_72 = 0x0000001E;
	}
	else if (unk_0x0EB28750412C3A5A(vLocal_53, -2956.78f, 488.19f, 14.47f, 0x00000001) < 5f)
	{
		vLocal_138 = { -2956.78f, 488.19f, 14.47f };
		fLocal_139 = 80.0912f;
		vLocal_140 = { -2974.34f, 491.96f, 15f };
		fLocal_141 = 1.95f;
		iLocal_72 = 0x0000001F;
	}
	else
	{
		vLocal_138 = { vLocal_53 };
	}
}

int func_222()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_223()
{
	if (!func_192(0x00000005))
	{
		return 0x00000001;
	}
	if (func_216())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_220())
		{
			return 0x00000000;
		}
	}
	if (func_209(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_224()
{
	if ((Global_1B40B == func_225() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_225()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_226(Var0);
	return uVar1;
}

int func_226(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 0x00000017;
			break;
		
		case joaat("re_accident"):
			return 0x00000000;
			break;
		
		case joaat("re_arrests"):
			return 0x0000000F;
			break;
		
		case joaat("re_atmrobbery"):
			return 0x00000001;
			break;
		
		case joaat("re_bikethief"):
			return 0x0000001A;
			break;
		
		case joaat("re_border"):
			return 0x0000001D;
			break;
		
		case joaat("re_burials"):
			return 0x00000018;
			break;
		
		case joaat("re_bus_tours"):
			return 0x00000002;
			break;
		
		case joaat("re_cartheft"):
			return 0x00000011;
			break;
		
		case joaat("re_chasethieves"):
			return 0x0000000B;
			break;
		
		case joaat("re_crashrescue"):
			return 0x00000010;
			break;
		
		case joaat("re_cultshootout"):
			return 0x00000012;
			break;
		
		case joaat("re_dealgonewrong"):
			return 0x0000000C;
			break;
		
		case joaat("re_domestic"):
			return 0x00000003;
			break;
		
		case joaat("re_drunkdriver"):
			return 0x0000001B;
			break;
		
		case joaat("re_gang_intimidation"):
			return 0x00000014;
			break;
		
		case joaat("re_gangfight"):
			return 0x00000013;
			break;
		
		case joaat("re_getaway_driver"):
			return 0x00000004;
			break;
		
		case joaat("re_hitch_lift"):
			return 0x0000000D;
			break;
		
		case joaat("re_homeland_security"):
			return 0x0000001C;
			break;
		
		case joaat("re_lured"):
			return 0x00000007;
			break;
		
		case joaat("re_muggings"):
			return 0x00000019;
			break;
		
		case joaat("re_paparazzi"):
			return 0x0000000A;
			break;
		
		case joaat("re_prisonerlift"):
			return 0x00000016;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 0x00000015;
			break;
		
		case joaat("re_securityvan"):
			return 0x00000009;
			break;
		
		case joaat("re_shoprobbery"):
			return 0x00000005;
			break;
		
		case joaat("re_snatched"):
			return 0x00000006;
			break;
		
		case joaat("re_stag_do"):
			return 0x0000000E;
			break;
		
		case joaat("re_yetarian"):
			return 0x0000001E;
			break;
		
		case joaat("re_duel"):
			return 0x0000001F;
			break;
		
		case joaat("re_seaplane"):
			return 0x00000020;
			break;
		
		case joaat("re_monkey"):
			return 0x00000021;
			break;
	}
	return 0xFFFFFFFF;
}

void func_227(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_92 + uParam0->f_93) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(int iParam0)
{
	func_229(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_229(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_203(*iParam0))
		{
			case 0x00000000:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 0x00000002:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 0x00000003:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C));
				break;
			
			case 0x00000004:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 0x00000006:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B), 0xFFFFFFFF);
				break;
			
			case 0x00000007:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 0x00000008:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 0x00000009:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
	}
}

void func_230(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == 0xFFFFFF9D)
	{
		*uParam1 = unk_0x1C0640BA9A7327B3();
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = (unk_0x1C0640BA9A7327B3() - *uParam1);
		if (iVar0 < 0x00001388)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 0x000001F4)
			{
				if (unk_0x4FA921CB56EDB0F8(iParam0) != 0x000000FF)
				{
					unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
				}
			}
			else if (unk_0x4FA921CB56EDB0F8(iParam0) != 0x00000000)
			{
				unk_0x7F010F50CE03A8AF(iParam0, 0x00000000);
			}
		}
		else if (*uParam1 != 0xFFFFFF9C)
		{
			*uParam1 = 0xFFFFFF9C;
			if (unk_0x4FA921CB56EDB0F8(iParam0) != 0x000000FF)
			{
				unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
			}
		}
	}
}

void func_231()
{
}

void func_232()
{
}

void func_233(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_225();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_235(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_234();
}

void func_234()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)), 0x00000001);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	}
}

void func_235(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_236(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_24AC9)
	{
		return 0x00000000;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_225();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_277())
		{
			return 0x00000000;
		}
	}
	vLocal_51 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_220())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_276(0x00000000))
		{
			return 0x00000000;
		}
		if (func_216())
		{
			return 0x00000000;
		}
		if (func_275())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_41(func_39()))
		{
			if (func_209(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_51.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_274(iParam1))
		{
			return 0x00000000;
		}
		if (func_41(func_39()))
		{
			if (func_273(func_39()) == 0x00000004 || func_273(func_39()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_272(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_271(Global_1B416.f_619E.f_2B[iParam1]))
		{
			return 0x00000000;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_1B40D) < 0x000249F0)
		{
			if (iParam1 != 0x0000001E)
			{
				return 0x00000000;
			}
		}
		if (func_270())
		{
			return 0x00000000;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0x00000000;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0x00000000;
		}
		if (!func_261(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_192(0x00000005))
		{
			return 0x00000000;
		}
		if (func_260(iParam1, iParam2) && !bParam3)
		{
			return 0x00000000;
		}
		if (Global_3 && iParam1 != 0x0000000A)
		{
			return 0x00000000;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return 0x00000000;
			}
		}
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_260(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_274(0x0000001E) && !func_260(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_259(iVar4))
				{
					if (func_237(iVar2))
					{
						if (!func_65(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_39() != iVar2)
								{
									return 0x00000000;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 0x00000001;
}

bool func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_238(iVar0);
}

int func_238(int iParam0)
{
	return func_239(iParam0, 0x00000001);
}

int func_239(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_259(iParam0))
	{
		return 0x00000000;
	}
	func_240(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_240(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_241(func_252(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_241(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_251(iParam0, iParam1))
	{
		iVar0 = func_250(iParam1);
		iVar1 = func_248(iParam0);
		iVar2 = (func_248(iParam0) - func_248(iParam1));
		iVar3 = (func_250(iParam0) - func_250(iParam1));
		iVar4 = (func_247(iParam0) - func_247(iParam1));
		iVar5 = (func_246(iParam0) - func_246(iParam1));
		iVar6 = (func_245(iParam0) - func_245(iParam1));
		iVar7 = (func_244(iParam0) - func_244(iParam1));
	}
	else
	{
		iVar0 = func_250(iParam0);
		iVar1 = func_248(iParam1);
		iVar2 = (func_248(iParam1) - func_248(iParam0));
		iVar3 = (func_250(iParam1) - func_250(iParam0));
		iVar4 = (func_247(iParam1) - func_247(iParam0));
		iVar5 = (func_246(iParam1) - func_246(iParam0));
		iVar6 = (func_245(iParam1) - func_245(iParam0));
		iVar7 = (func_244(iParam1) - func_244(iParam0));
	}
	while (iVar7 < 0x00000000)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 0x00000001);
	}
	while (iVar7 > 0x0000003B)
	{
		iVar7 = (iVar7 - 0x0000003C);
		iVar6++;
	}
	while (iVar6 < 0x00000000)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 0x00000001);
	}
	while (iVar6 > 0x0000003B)
	{
		iVar6 = (iVar6 - 0x0000003C);
		iVar5++;
	}
	while (iVar5 < 0x00000000)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 0x00000001);
	}
	while (iVar5 > 0x00000017)
	{
		iVar5 = (iVar5 - 0x00000018);
		iVar4++;
	}
	while (iVar4 < 0x00000000)
	{
		while (iVar3 < 0x00000000)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 0x00000001);
		}
		iVar4 = (iVar4 + func_243(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_242(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0x00000000)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 0x00000001);
	}
	while (iVar3 > 0x0000000C)
	{
		iVar3 = (iVar3 - 0x0000000C);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_242(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_243(int iParam0, int iParam1)
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

int func_244(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_245(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_246(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_247(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_248(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_249(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_249(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_250(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_259(iParam1) || !func_259(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_252()
{
	var uVar0;
	
	func_258(&uVar0, unk_0x4460E481B9E33ADA());
	func_257(&uVar0, unk_0x8D199E381D262EEF());
	func_256(&uVar0, unk_0xD8A54335F18763BA());
	func_255(&uVar0, unk_0x972A296334C9D57B());
	func_254(&uVar0, unk_0x118229AD063C3C1D());
	func_253(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_253(var uParam0, int iParam1)
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

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_250(*uParam0);
	iVar1 = func_248(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_243(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_258(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_259(int iParam0)
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
	iVar0 = func_244(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_245(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_246(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_248(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_250(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_247(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_243(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_260(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_269()) || Global_1B05D) || Global_7832) || func_268()) || func_61(0x00000008, 0xFFFFFFFF)) || func_267()) || func_266()) || func_265()) || func_264()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_269()) || Global_7832) || func_268()) || func_61(0x00000008, 0xFFFFFFFF)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_269()) || Global_1B05D) || Global_7832) || func_268()) || func_61(0x00000008, 0xFFFFFFFF)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_269()) || Global_1B05D) || Global_7832) || func_268()) || func_61(0x00000008, 0xFFFFFFFF)) || func_267()) || func_266()) || func_264()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_269() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_61(0x00000008, 0xFFFFFFFF)) || func_264()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_61(0x00000008, 0xFFFFFFFF) || func_267()) || func_266()) || func_263()) || func_262())
						{
							return 0x00000000;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() < 0x00000008)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000006:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_269()) || Global_7832) || func_268()) || func_61(0x00000008, 0xFFFFFFFF)) || func_266()) || func_265()) || func_264()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_269()) || func_266()) || Global_1B05D) || Global_7832) || func_268()) || Global_A664) || func_61(0x00000008, 0xFFFFFFFF)) || func_265()) || func_263()) || func_264()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_269()) || Global_1B05D) || Global_7832) || func_268()) || func_61(0x00000008, 0xFFFFFFFF)) || func_265()) || func_263()) || func_267()) || func_266()) || func_264())
						{
							return 0x00000000;
						}
						break;
				}
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
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_262()
{
	return Global_181DF.f_1;
}

int func_263()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_264()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_265()
{
	if (Global_12C52)
	{
		return 0x00000001;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_266()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_267()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_268()
{
	return Global_14086D;
}

int func_269()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_270()
{
	func_59();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_271(int iParam0)
{
	return func_251(func_252(), iParam0);
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_39();
	if (iParam2 != 0x00000091 && ((iParam2 == 0x00000000 || iParam2 == 0x00000001) || iParam2 == 0x00000002))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 0x00000012:
			if (iVar1 == 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (iVar1 != 0x00000001)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000D:
			if (iVar1 == 0x00000000)
			{
				if (iParam1 == 0x00000002)
				{
					iVar0 = 0x00000000;
				}
				else
				{
					iVar0 = 0x00000001;
				}
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000002 || iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001E:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000001;
			break;
	}
	return iVar0;
}

int func_273(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_274(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_277())
		{
			return 0x00000000;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 0x0000001F)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 0x0000001F);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_1, iVar0);
	}
	return bVar1;
}

int func_275()
{
	int iVar0;
	
	if (Global_78C6)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_276(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_277()
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

void func_278()
{
	if (bLocal_127)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
		{
			if (unk_0x4DA54CAC0D81A673(iLocal_73))
			{
				unk_0x78CCB85A0DC35709(iLocal_73);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_55))
	{
		unk_0x6DAD7906B73F064D(&iLocal_55);
	}
	unk_0x68F065432F4692FB(0x00000000);
	if (iLocal_69 != 0x00000000)
	{
		unk_0x850CF499433B183D(iLocal_69);
	}
	unk_0x68F065432F4692FB(0x00000000);
	if (!unk_0xEB6A8945D1AC98A1(iLocal_56))
	{
		unk_0x11AD11297DC58CC7(iLocal_56, 0x00000000);
		unk_0x25C5402CC10F76CD(iLocal_56, 0x00000001);
		unk_0x6DAD7906B73F064D(&iLocal_56);
	}
	if (iLocal_65 == 0x00000004)
	{
		unk_0xE342F209E49C5314(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0x00000001, 0x00000001);
	}
	func_180(&uLocal_152, 0x00000000, 0x00000000);
	if (func_224())
	{
		unk_0x51B096AAC60548C1(1f);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
	}
	func_291(&Local_164, 0x00000000);
	func_279(0xFFFFFFFF);
	unk_0x73EBD15DD6536BC2(0x00000001);
	unk_0x2952D66A502EA873(iLocal_63, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_279(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_225();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_224())
	{
		func_284(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_283(0x00007530);
		StringCopy(&cVar0, func_282(Global_1B40B, 0x00000001), 64);
		if (func_281(Global_1B40B) > 0x00000000)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_1B40A, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_1B408, (unk_0x1C0640BA9A7327B3() - Global_1B409), 0x00000000);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000000) && Global_1B416.f_619E.f_2 < 0x00000003)
	{
		unk_0x0674E58A79778E99(&Global_1B412, 0x00000000);
	}
	func_280(&Global_786B);
	Global_1B40C = 0x00000000;
	func_235(0xFFFFFFFF);
}

void func_280(var uParam0)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*uParam0 == Global_A1B1)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	*uParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 0x00000005;
			break;
		
		case 0x00000005:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000016:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000017:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000003;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001B:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001D:
			iVar0 = 0x00000003;
			break;
	}
	return iVar0;
}

char* func_282(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "RE_ACCIDENT";
			break;
		
		case 0x00000001:
			return "RE_ATMROBBERY";
			break;
		
		case 0x00000002:
			return "RE_BUSTOUR";
			break;
		
		case 0x00000003:
			return "RE_DOMESTIC";
			break;
		
		case 0x00000004:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 0x00000005:
			return "RE_SHOPROBBERY";
			break;
		
		case 0x00000006:
			return "RE_SNATCHED";
			break;
		
		case 0x00000007:
			return "RE_LURED";
			break;
		
		case 0x00000008:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 0x00000009:
			return "RE_SECURITYVAN";
			break;
		
		case 0x0000000A:
			return "RE_PAPARAZZI";
			break;
		
		case 0x0000000B:
			return "RE_CHASETHIEVES";
			break;
		
		case 0x0000000C:
			return "RE_DEALGONEWRONG";
			break;
		
		case 0x0000000D:
			return "RE_HITCHLIFT";
			break;
		
		case 0x0000000E:
			return "RE_STAG";
			break;
		
		case 0x0000000F:
			return "RE_ARREST";
			break;
		
		case 0x00000010:
			return "RE_CRASHRESCUE";
			break;
		
		case 0x00000011:
			return "RE_CARTHEFT";
			break;
		
		case 0x00000012:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 0x00000013:
			return "RE_GANGFIGHT";
			break;
		
		case 0x00000014:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 0x00000015:
			return "RE_PRISONVANBREAK";
			break;
		
		case 0x00000016:
			return "RE_PRISONERLIFT";
			break;
		
		case 0x00000017:
			return "RE_ABANDONEDCAR";
			break;
		
		case 0x00000018:
			return "RE_BURIAL";
			break;
		
		case 0x00000019:
			return "RE_MUGGING";
			break;
		
		case 0x0000001A:
			return "RE_BIKETHIEF";
			break;
		
		case 0x0000001B:
			return "RE_DRUNKDRIVER";
			break;
		
		case 0x0000001C:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 0x0000001D:
			return "RE_BORDERPATROL";
			break;
		
		case 0x0000001E:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 0x0000001F:
			return "RE_DUEL";
			break;
		
		case 0x00000020:
			return "RE_SEAPLANE";
			break;
		
		case 0x00000021:
			return "RE_MONKEYPHOTO";
			break;
		
		case 0xFFFFFFFF:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_283(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_284(int iParam0)
{
	func_285(iParam0, 0x00000000, func_290(iParam0));
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_252();
	func_288(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_287(iParam0, &uVar0);
	Var1 = { func_286(&uVar0) };
}

struct<16> func_286(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_247(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_250(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_248(*uParam0), 64);
	return Var0;
}

void func_287(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_248(*uParam0);
	iVar1 = func_250(*uParam0);
	iVar2 = func_247(*uParam0);
	iVar3 = func_246(*uParam0);
	iVar4 = func_245(*uParam0);
	iVar5 = func_244(*uParam0);
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
	iVar6 = func_243(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_243(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_289(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_258(uParam0, iParam1);
	func_257(uParam0, iParam2);
	func_256(uParam0, iParam3);
	func_254(uParam0, iParam5);
	func_255(uParam0, iParam4);
	func_253(uParam0, iParam6);
}

int func_290(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000017:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000000:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000F:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000001:
			iVar0 = 0x000000C8;
			break;
		
		case 0x0000001A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000008:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001D:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000018:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000011:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000B:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000010:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000012:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000078;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001B:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000013:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000014:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000004:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001C:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000023;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000016:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000015:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000005:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001E:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000006:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000028;
			break;
	}
	return iVar0;
}

void func_291(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_293(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_292(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	uParam0->f_92 = 0xFFFFFFFF;
}

void func_292(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			func_294(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000001;
}

void func_294(var uParam0)
{
	func_295(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_295(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_203(iParam0))
		{
			case 0x00000000:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 0x00000001:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 0x00000002:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 0x00000003:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 0x00000004:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 0x00000006:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 0x00000007:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 0x00000008:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001A));
				break;
			
			case 0x00000009:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

void func_296(bool bParam0)
{
	Global_1B40E = { vLocal_53 };
	if (bParam0)
	{
		func_311(0x00000003);
	}
	func_300(0x00000001, 0x00000000);
	if (!bLocal_96)
	{
		func_299();
	}
	func_297();
	func_278();
}

void func_297()
{
	func_298();
}

int func_298()
{
	if (func_276(0x00000000))
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

int func_299()
{
	return 0x00000001;
}

void func_300(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_225();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_281(iParam0))
	{
		func_310(iParam0, iParam1);
		if (!func_309(0x00000033))
		{
			func_306("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_215(), 0x00000000, 0x0000008A, 0x00000000);
			func_305(0x00000033);
		}
		if (func_188(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_304(iParam0, iParam1) != 0x00000142)
		{
			func_301(func_304(iParam0, iParam1), vLocal_51.x, vLocal_51.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_311(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_311(0x00000007);
			}
			else
			{
				func_311(0x00000001);
			}
		}
	}
}

void func_301(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_13((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = uParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = uParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_302();
	}
}

void func_302()
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
	int iVar9;
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_35(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_303() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_298();
				}
			}
		}
	}
}

int func_303()
{
	return Global_7830;
}

int func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000000FA;
			break;
		
		case 0x00000001:
			return 0x000000E2;
			break;
		
		case 0x00000002:
			return 0x000000F3;
			break;
		
		case 0x00000003:
			return 0x00000100;
			break;
		
		case 0x00000004:
			return 0x00000103;
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 0x00000119;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000011A;
			}
			break;
		
		case 0x00000006:
			return 0x00000109;
			break;
		
		case 0x00000007:
			return 0x000000DA;
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010F;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000110;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000111;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000112;
			}
			if (iParam1 == 0x00000005)
			{
				return 0x00000113;
			}
			if (iParam1 == 0x00000006)
			{
				return 0x00000114;
			}
			if (iParam1 == 0x00000007)
			{
				return 0x00000115;
			}
			if (iParam1 == 0x00000008)
			{
				return 0x00000116;
			}
			if (iParam1 == 0x00000009)
			{
				return 0x00000117;
			}
			if (iParam1 == 0x0000000A)
			{
				return 0x00000118;
			}
			break;
		
		case 0x0000000A:
			return 0x000000DB;
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F6;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F7;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000F8;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x000000F9;
			}
			break;
		
		case 0x0000000C:
			return 0x000000FE;
			break;
		
		case 0x0000000D:
			if (iParam1 == 0x00000001)
			{
				return 0x00000104;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000105;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000106;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000108;
			}
			break;
		
		case 0x0000000E:
			return 0x0000011B;
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E0;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E1;
			}
			break;
		
		case 0x00000010:
			return 0x000000FC;
			break;
		
		case 0x00000011:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F4;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F5;
			}
			break;
		
		case 0x00000012:
			return 0x000000FD;
			break;
		
		case 0x00000013:
			return 0x000000D7;
			break;
		
		case 0x00000014:
			return 0x000000D8;
			break;
		
		case 0x00000015:
			return 0x000000FB;
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000001)
			{
				return 0x000000DD;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000DE;
			}
			break;
		
		case 0x00000017:
			if (iParam1 == 0x00000001)
			{
				return 0x000000D5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000D6;
			}
			break;
		
		case 0x00000018:
			return 0x000000F2;
			break;
		
		case 0x00000019:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010B;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000010C;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x0000010D;
			}
			break;
		
		case 0x00000008:
			return 0x000000FF;
			break;
		
		case 0x0000001A:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E3;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E4;
			}
			break;
		
		case 0x0000001B:
			if (iParam1 == 0x00000001)
			{
				return 0x00000101;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000102;
			}
			break;
		
		case 0x0000001C:
			return 0x000000D9;
			break;
		
		case 0x0000001D:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E6;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000E7;
			}
			break;
		
		case 0x0000001E:
			return 0x0000011D;
			break;
		
		case 0x0000001F:
			return 0x0000013E;
			break;
		
		case 0x00000020:
			return 0x0000013F;
			break;
		
		case 0x00000021:
			return 0x00000140;
			break;
	}
	return 0x00000142;
}

void func_305(int iParam0)
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

void func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_307(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_307(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_308();
	}
}

void func_308()
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

int func_309(int iParam0)
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

void func_310(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

void func_311(int iParam0)
{
	Global_1B408 = iParam0;
}

