#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_98 = { 0f, 0f, 0f };
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_131 = { 0f, 0f, 0f };
	int iLocal_132 = 0;
	vector3 vLocal_133 = { 0f, 0f, 0f };
	vector3 vLocal_134 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_136 = { 0f, 0f, 0f };
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	int iVar1;
	
	iLocal_3 = 0x00000003;
	iLocal_4 = 0x00000001;
	iLocal_5 = 0x00000086;
	iLocal_6 = 0x00000086;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000001;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x00000086;
	iLocal_11 = 0x00000001;
	iLocal_12 = 0x0000000C;
	iLocal_13 = 0x0000000C;
	fLocal_16 = 0.001f;
	iLocal_19 = 0xFFFFFFFF;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 0x00000001;
	iLocal_42 = 0x00000041;
	iLocal_43 = 0x00000031;
	iLocal_44 = 0x00000040;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 0x00000001;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 0x000C00AB;
	iLocal_120 = 0x000C0025;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	vLocal_50 = { ScriptParam_151.f_1[0x00000000 /*3*/] };
	fLocal_51 = ScriptParam_151.f_11[0x00000000];
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		func_237();
	}
	func_236();
	if (iLocal_121 == 0x00000002)
	{
		if (func_235(0x00000022))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				if (vVar0.z > 23f || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x10FAF14A60A0DBE1();
				}
			}
		}
	}
	if (func_194(vLocal_50, 0x00000011, iLocal_121, 0x00000000, 0x00000000))
	{
		func_191(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_190();
		func_189(iLocal_59, &uLocal_62);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x24A24DF10A19BBA7(unk_0xD803B885F5E47A62());
		}
		func_188();
		if (!func_187())
		{
			if (func_186())
			{
				func_237();
			}
			if (unk_0x338D6FF72D84D90F())
			{
				switch (iLocal_46)
				{
					case 0x00000000:
						if (func_169())
						{
							unk_0x060F249A9A3E3F4E(0x00000000);
							iLocal_46 = 0x00000001;
						}
						break;
					
					case 0x00000001:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
						{
							if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(iLocal_71)) && func_168(iLocal_73)) && !func_167(0x00000000))
							{
								if (func_166())
								{
									if (func_168(iLocal_76))
									{
										unk_0xA22F71BBC8173C39(iLocal_76, 0x00000000);
									}
									func_157(0x00000001);
									unk_0x51B096AAC60548C1(0.1f);
									func_152(0x00000027, 0x00000001);
									func_152(0x00000028, 0x00000001);
									func_152(0x00000029, 0x00000001);
									func_152(0x0000002A, 0x00000001);
									func_152(0x0000002B, 0x00000001);
									func_152(0x0000002C, 0x00000001);
									SYSTEM::SETTIMERA(0x00000000);
								}
							}
							else
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
								{
									unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
									SYSTEM::WAIT(0x00000000);
								}
								func_237();
							}
						}
						else
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && func_168(iLocal_73))
							{
								unk_0xE072601B4380E9DF(iLocal_71, iLocal_73, 20f, iLocal_119);
								unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
								SYSTEM::WAIT(0x00000000);
							}
							func_120(0x00000000);
						}
						break;
				}
			}
			else
			{
				func_237();
			}
		}
		else
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_72))
			{
				if (Local_102[0x00000002 /*10*/].f_7)
				{
					func_119(&Local_102, 0x00000002);
				}
			}
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			func_111();
			if (func_168(iLocal_73) && !func_110())
			{
				if (func_108())
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
					{
						switch (iLocal_47)
						{
							case 0x00000000:
								if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
								{
									if (unk_0xC42A92762C58E1B9(iLocal_72, iLocal_73, 0x00000000))
									{
										if (iLocal_121 == 0x00000002)
										{
											unk_0xE8832A9E16A57A1F(iLocal_72, 0x00000001, 0x00000001);
											unk_0xE8832A9E16A57A1F(iLocal_73, 0x00000001, 0x00000001);
											unk_0xDD353D0E9C789D0E(&iLocal_74);
											unk_0x89258193691A7600(0x00000000, iLocal_73, unk_0x16F2683693E537C9(), 0x00000008, 30f, iLocal_120, 200f, 10f, 0x00000000);
											unk_0x75ABDC5F81978924(iLocal_74);
											unk_0x78ADC381772E3D54(iLocal_72, iLocal_74);
											unk_0xF82EA857DA10E0CD(&iLocal_74);
										}
										else
										{
											unk_0xE8832A9E16A57A1F(iLocal_72, 0x00000001, 0x00000001);
											unk_0xDD353D0E9C789D0E(&iLocal_74);
											unk_0xD1F0F33C375B8446(0x00000000, iLocal_73, 0x0000001E, 0x000003E8);
											unk_0x89258193691A7600(0x00000000, iLocal_73, unk_0x16F2683693E537C9(), 0x00000008, 40f, iLocal_120, 200f, 10f, 0x00000001);
											unk_0x75ABDC5F81978924(iLocal_74);
											unk_0x78ADC381772E3D54(iLocal_72, iLocal_74);
											unk_0xF82EA857DA10E0CD(&iLocal_74);
										}
										vLocal_133 = { unk_0xBF584557291FDD31(iLocal_73, unk_0xF653B9B22DA806A9(iLocal_73, "wheel_lr")) };
										vLocal_134 = { unk_0x5293C88BD2F4DE13(iLocal_73, vLocal_133) };
										unk_0xE81656B429E5C4B5("scr_wheel_burnout", iLocal_73, vLocal_134 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0x00000000, 0x00000000, 0x00000000);
										vLocal_135 = { unk_0xBF584557291FDD31(iLocal_73, unk_0xF653B9B22DA806A9(iLocal_73, "wheel_rr")) };
										vLocal_136 = { unk_0x5293C88BD2F4DE13(iLocal_73, vLocal_135) };
										unk_0xE81656B429E5C4B5("scr_wheel_burnout", iLocal_73, vLocal_136 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0x00000000, 0x00000000, 0x00000000);
										SYSTEM::SETTIMERA(0x00000000);
										if (!unk_0xE4EDC4B0E92C078B(iLocal_60))
										{
											iLocal_60 = func_106(iLocal_73, 0x00000001, 0x00000000);
										}
										unk_0xB975E4541DDAB1F5(0x00000002);
										iLocal_47 = 0x00000001;
									}
									else if (unk_0xB87D13D0C064E9D1(iLocal_73, unk_0x16F2683693E537C9(), 0x00000001))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
										{
											unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
											unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
											SYSTEM::WAIT(0x00000000);
										}
										func_237();
									}
								}
								else
								{
									unk_0xE072601B4380E9DF(iLocal_71, iLocal_73, 20f, iLocal_119);
									unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
									SYSTEM::WAIT(0x00000000);
									func_120(0x00000000);
								}
								break;
							
							case 0x00000001:
								if (func_168(iLocal_73))
								{
									if (iLocal_121 == 0x00000001)
									{
										if (SYSTEM::TIMERA() < 0x00001388)
										{
											if (SYSTEM::TIMERA() > 0x000007D0)
											{
												fLocal_99 = (fLocal_99 + 0.4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0.2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											unk_0x1AEF7184B203A58D(iLocal_73, fLocal_99);
											iVar1 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(iLocal_73, 0x00000001), 5f, 0x00000000, 0x00000004);
											if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
											{
												if (func_168(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
												{
													if (unk_0x1B3D109B39CC2C89(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), iLocal_73))
													{
														SYSTEM::SETTIMERA(0x00001388);
													}
												}
												if (func_168(iVar1))
												{
													if (iVar1 != iLocal_73)
													{
														if (unk_0x1B3D109B39CC2C89(iVar1, iLocal_73))
														{
															SYSTEM::SETTIMERA(0x00001388);
														}
													}
												}
											}
										}
									}
									if (unk_0xD96C5EC6FCB061BA(iLocal_73) < 700f)
									{
										func_237();
									}
								}
								func_76();
								if ((((((func_75() || func_74()) || unk_0x377BE9A1BF38C7CE(iLocal_73)) || unk_0x7B5606C651AB51B5(iLocal_73, 0x00000001, 0x00001388)) || unk_0x4E861BC5B1EDA7BD(iLocal_73)) || unk_0xEB6A8945D1AC98A1(iLocal_72)) || !unk_0xC42A92762C58E1B9(iLocal_72, iLocal_73, 0x00000000))
								{
									if (unk_0x562F77A7F33D2E46("RE_CAR_STEAL_SCENE"))
									{
										if (func_168(iLocal_73))
										{
											unk_0x06FF977AA95DCCE3(iLocal_73, 0x00000000);
										}
										unk_0x8910D3D58E0132B8("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xE4EDC4B0E92C078B(iLocal_60))
									{
										unk_0x142CC44DB769B57E(&iLocal_60);
									}
									func_73();
									if (unk_0xE4EDC4B0E92C078B(iLocal_59))
									{
										unk_0x142CC44DB769B57E(&iLocal_59);
									}
									unk_0xE910A68AA670B4AA(iLocal_71);
									unk_0xE0C0351D5B931E37(iLocal_73, 50f, 0x00000005, 0x00000000);
									iLocal_61 = func_106(iLocal_73, 0x00000000, 0x00000000);
									fLocal_93 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_73, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
									fLocal_91 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_73, 0x00000001), unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001));
									fLocal_92 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001));
									func_71(&uLocal_138, 0x00000000, 0x00000000);
									iLocal_47 = 0x00000002;
								}
								break;
							
							case 0x00000002:
								if (func_168(iLocal_73))
								{
									if (unk_0xD96C5EC6FCB061BA(iLocal_73) < 700f)
									{
										func_237();
									}
								}
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
								{
									func_237();
								}
								if (!unk_0x437347B10A200C4B(iLocal_72, 0x00000000))
								{
									if (!unk_0xC42A92762C58E1B9(iLocal_72, iLocal_73, 0x00000000))
									{
										func_70(iLocal_72, &iLocal_63, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
									}
								}
								else
								{
									func_69(&iLocal_63);
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
								{
									if (!unk_0x4734A6196B611C3B(iLocal_72, unk_0x16F2683693E537C9()))
									{
										unk_0x6C3AE6E278DB3D0E(iLocal_72, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(iLocal_72));
									}
								}
								if ((SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_73, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > (fLocal_93 + 220f) || SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_73, 0x00000001), unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001)) > (fLocal_91 + 220f)) || SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001)) > (fLocal_92 + 220f))
								{
									if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_73, 0x00000000))
									{
										func_120(0x00000000);
									}
									else
									{
										func_237();
									}
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_61))
								{
									if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_73, 0x00000000))
									{
										unk_0x142CC44DB769B57E(&iLocal_61);
										iLocal_59 = func_65(iLocal_71, 0x00000000, 0x00000000);
										func_64(&uLocal_62);
										func_71(&uLocal_138, 0x00000000, 0x00000000);
										if (!iLocal_56)
										{
											if (iLocal_121 == 0x00000001)
											{
												vLocal_85 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_57)
											{
												vLocal_85 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												vLocal_85 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!unk_0x8E28E832BEAC3DCE(vLocal_85, 2f) && !unk_0x0A059E0DB9253280(iLocal_71))
											{
												unk_0xA47B46945FF6DE74(iLocal_71, vLocal_85, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iLocal_71, fLocal_90);
												iLocal_56 = 0x00000001;
											}
										}
										iLocal_48 = 0x00000003;
										iLocal_124 = unk_0x1C0640BA9A7327B3();
									}
									else if (unk_0x12DE711B1C681E9E(iLocal_73, iLocal_71, 20f, 20f, 7f, 0x00000000, 0x00000001, 0x00000000))
									{
										func_63();
										if (func_62())
										{
											if (unk_0x3CAA763EEC01ADF7(iLocal_71, iLocal_73, 0xFFFFFFFF, 0x00000000, 0x00000000))
											{
												if (!bLocal_116)
												{
													if (func_47(&Local_102, cLocal_114, sLocal_110, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
													{
													}
												}
												unk_0xE072601B4380E9DF(iLocal_71, iLocal_73, 35f, iLocal_119);
												unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
												func_120(0x00000001);
											}
										}
									}
								}
								else if (unk_0xE4EDC4B0E92C078B(iLocal_59))
								{
									if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_73, 0x00000000))
									{
										if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_71, fLocal_52, fLocal_52, fLocal_52, 0x00000000, 0x00000001, 0x00000000))
										{
											if (func_46(0x00000001, 0x00000000, 0x00000001))
											{
												unk_0x142CC44DB769B57E(&iLocal_59);
												if (iLocal_121 == 0x00000001)
												{
													if (func_45(unk_0xD9522BA9E27E1349(iLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x3F423BF5B8125A50(sLocal_126);
												iLocal_48 = 0x00000004;
												iLocal_47 = 0x00000003;
											}
										}
										else
										{
											func_43(unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										unk_0x142CC44DB769B57E(&iLocal_59);
										iLocal_61 = func_106(iLocal_73, 0x00000000, 0x00000000);
										iLocal_48 = 0x00000000;
									}
								}
								break;
							
							case 0x00000003:
								if (iLocal_121 == 0x00000001)
								{
									if (func_4())
									{
										if (func_3(iLocal_71))
										{
											unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
										}
										func_120(0x00000001);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_71))
									{
										unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
									}
									func_120(0x00000001);
								}
								break;
						}
					}
					else
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
						{
							if (unk_0xC42A92762C58E1B9(iLocal_72, iLocal_73, 0x00000000))
							{
								unk_0x89258193691A7600(iLocal_72, iLocal_73, unk_0x16F2683693E537C9(), 0x00000008, 50f, iLocal_120, 10f, 10f, 0x00000000);
								unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
								unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(iLocal_72));
							}
							else
							{
								unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
								unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(iLocal_72));
							}
						}
						SYSTEM::WAIT(0x00000000);
						func_237();
					}
				}
				else
				{
					if (iLocal_47 == 0x00000001)
					{
						if (func_168(iLocal_73))
						{
							unk_0xA954465BA6FDEFE2(&iLocal_73);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
						{
							unk_0xEBA53F35D0085654(&iLocal_72);
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_71, sLocal_79, "agitated_idle_a", 0x00000003))
						{
							unk_0x7720CBBC7DD82563(iLocal_71, "waiting", sLocal_79, -2f);
						}
						func_1(iLocal_71, "GENERIC_CURSE_HIGH", 0x00000018);
						unk_0xDD353D0E9C789D0E(&iLocal_74);
						unk_0x80AA372E04ED318D(0x00000000, vLocal_88, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
						unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_74);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
						unk_0xF82EA857DA10E0CD(&iLocal_74);
					}
					func_237();
				}
			}
			else
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
				}
				if (unk_0xC844350D5D58C99A(iLocal_73))
				{
					unk_0x5DAB50E08C3C504A(iLocal_73, 50f);
				}
				func_237();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_2(iParam2), 0x00000001);
}

int func_2(int iParam0)
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

int func_3(int iParam0)
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

int func_4()
{
	vector3 vVar0;
	char* sVar1;
	vector3 vVar2;
	float fVar3;
	
	sVar1 = "chassis";
	func_63();
	if (((!unk_0xEB6A8945D1AC98A1(iLocal_71) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && func_168(iLocal_73)) && unk_0xB4AE0788C1587752(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0x00000000:
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (func_46(0x00000001, 0x00000000, 0x00000001))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000B))
						{
							if (!unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
							{
								func_35(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									unk_0xA37A90C62806D848(0x00000001);
									while (!func_33(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fLocal_53, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
									{
										unk_0x3FC8DBCC154CA56B();
										SYSTEM::WAIT(0x00000000);
									}
									func_33(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fLocal_53, 0x00000000, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
								}
								unk_0x3FC8DBCC154CA56B();
								if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
								{
									unk_0x46CB381A452EF99D(iLocal_71, 0x00000000);
								}
								func_31();
								func_24(0x00000000);
								unk_0x3FC8DBCC154CA56B();
								iLocal_49 = 0x00000001;
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0xF50D17A63556B8D4(iLocal_73, 0x00000000, 0x00000000, 0f);
				unk_0x2EA10555AEBEA739(iLocal_73, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				unk_0x3FC8DBCC154CA56B();
				if (iLocal_121 == 0x00000001)
				{
					if (func_168(iLocal_73))
					{
						if (func_45(unk_0xD9522BA9E27E1349(iLocal_73), 336f, 90f))
						{
							vLocal_84 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_89 = 336.6557f;
							vLocal_83 = { -2252.683f, 4274.16f, 45.0612f };
							vLocal_85 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_90 = 272.8688f;
							vLocal_97 = { -2254.588f, 4277.307f, 45.6133f };
							vLocal_98 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							vLocal_84 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_89 = 148.0287f;
							vLocal_85 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_90 = 179.4774f;
							vLocal_83 = { -2257.088f, 4268.938f, 44.6456f };
							vLocal_97 = { -2255.775f, 4274.144f, 46.0666f };
							vLocal_98 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					vVar2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_96 = 50f;
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_83, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
					unk_0xA47B46945FF6DE74(iLocal_71, vLocal_85, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_73, fLocal_89);
					unk_0xA47B46945FF6DE74(iLocal_73, vLocal_84, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				else
				{
					if (!func_45(unk_0xD9522BA9E27E1349(iLocal_73), 64.6764f, 90f))
					{
						vLocal_97 = { -478.7095f, -2163.598f, 10.3091f };
						vLocal_98 = { -7.4391f, 0.0006f, 35.6865f };
						vLocal_84 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_89 = 243.308f;
						fLocal_96 = 22f;
					}
					else
					{
						vLocal_97 = { -488.0143f, -2149.419f, 9.9817f };
						vLocal_98 = { -11.7475f, 0.0006f, -145.0045f };
						vLocal_84 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_89 = 64.6764f;
						fLocal_96 = 36.9289f;
					}
					vVar2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					unk_0xA47B46945FF6DE74(iLocal_73, vLocal_84, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_73, fLocal_89);
				}
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				if (func_168(iLocal_73))
				{
					unk_0xB9FD7450C0DAB575(iLocal_73, 0x40A00000);
					if (unk_0xC844350D5D58C99A(iLocal_72))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_72, iLocal_73, 0x00000000))
						{
							unk_0xEBA53F35D0085654(&iLocal_72);
						}
					}
				}
				vLocal_130 = { 0f, 0f, 0f };
				vLocal_131 = { 0f, 0f, 0f };
				iLocal_122 = unk_0xE9744DB7B8CA6965(vLocal_130, vLocal_131, 0x00000002);
				unk_0x6BE2EAE992FD7C26(iLocal_122, iLocal_73, unk_0xF653B9B22DA806A9(iLocal_73, sVar1));
				unk_0x83CBE93AD851E045(iLocal_122, vLocal_130, vLocal_131, 0x00000002);
				unk_0x915804B434753CBD(iLocal_71, iLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 0x00000400, 0x00000000, 0x447A0000, 0x00000000);
				iLocal_75 = unk_0x764D630505EFC040("DEFAULT_ANIMATED_CAMERA", vLocal_97, vLocal_98, fLocal_96, 0x00000000, 0x00000002);
				unk_0x93E9ED66DAB9FBE3(iLocal_75, iLocal_122, "car_returned_cam", sLocal_126);
				unk_0xD65E6E13E145467B(iLocal_73, sLocal_127, sLocal_126, 1000f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00040000);
				vLocal_130 = { unk_0x68F4C0EC296D3901(iLocal_73, 0x00000001) };
				vLocal_131 = { unk_0x835730A2D89F6093(iLocal_73, 0x00000002) };
				if (func_168(iLocal_76))
				{
					if (func_23(iLocal_76, vLocal_84, 0x00000001) <= 11f)
					{
						unk_0xA47B46945FF6DE74(iLocal_76, vVar2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(iLocal_76, fVar3);
						unk_0xB9FD7450C0DAB575(iLocal_76, 0x40A00000);
						unk_0x73270B3C9CC833FD(iLocal_76, 0x00000001, 0x00000000);
					}
				}
				unk_0x536F1BE96C726C4B(vLocal_84, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				SYSTEM::SETTIMERA(0x00000000);
				if (iLocal_121 == 0x00000002)
				{
					unk_0xD4D331DFE794EACD(joaat("rocoto"), 0x0000000F);
				}
				else
				{
					unk_0xD4D331DFE794EACD(joaat("peyote"), 0x0000000F);
				}
				unk_0x7800CEC090C01D4D(vLocal_84, 15f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_75, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				iLocal_49 = 0x00000003;
				unk_0xE4EBD4F12E3C46F1(1f);
				break;
			
			case 0x00000003:
				unk_0x3FC8DBCC154CA56B();
				if (func_20())
				{
					iLocal_49 = 0x00000004;
				}
				if (iLocal_121 == 0x00000001)
				{
					if (SYSTEM::TIMERA() > 0x000005DC && !bLocal_150)
					{
						if (func_47(&Local_102, cLocal_114, sLocal_101, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_49 = 0x00000004;
						}
					}
				}
				else if (unk_0x69DF961355195C3C(iLocal_122) && !bLocal_150)
				{
					if (unk_0xA45992A6CE82FB43(iLocal_122) >= 0.2f)
					{
						if (func_47(&Local_102, cLocal_114, sLocal_101, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_58 = 0x00000000;
							iLocal_49 = 0x00000004;
						}
					}
				}
				unk_0xE4EBD4F12E3C46F1(1f);
				break;
			
			case 0x00000004:
				unk_0x3FC8DBCC154CA56B();
				if (iLocal_121 == 0x00000002)
				{
					if (!func_19())
					{
						if (iLocal_58 == 0x00000000)
						{
							if (func_47(&Local_102, cLocal_114, "RECT2_REWARD", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_58 = 0x00000001;
							}
						}
					}
				}
				unk_0xE4EBD4F12E3C46F1(1f);
				if (iLocal_121 == 0x00000001)
				{
					if (unk_0x69DF961355195C3C(iLocal_122))
					{
						if (iLocal_132 == 0x00000000)
						{
							if (unk_0xA45992A6CE82FB43(iLocal_122) >= 0.83f)
							{
								unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), sLocal_126, sLocal_129, 1000f, -2f, 0xFFFFFFFF, 0x00100000, unk_0xA45992A6CE82FB43(iLocal_122), 0x00000000, 0x00000000, 0x00000000);
								unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
								iLocal_132 = 0x00000001;
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
						{
							if (unk_0xA45992A6CE82FB43(iLocal_122) >= 0.83f)
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_71, sLocal_126, sLocal_128, 0x00000002))
								{
									unk_0x1BF8B16C32704027(iLocal_71, -1000f, 0x00000000);
									if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000))
									{
										if (func_168(iLocal_73))
										{
											unk_0xF821F915BC24D246(iLocal_71, iLocal_73, 0xFFFFFFFF);
											unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
										}
									}
									unk_0xF895E10BF4C72645(iLocal_71, 0x00000001, 0x00000000);
								}
								else
								{
									unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
								}
							}
						}
					}
				}
				else if (unk_0x69DF961355195C3C(iLocal_122))
				{
					if (iLocal_132 == 0x00000000)
					{
						if (unk_0xA45992A6CE82FB43(iLocal_122) >= 0.86f)
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), sLocal_126, sLocal_129, 1000f, -2f, 0xFFFFFFFF, 0x00100000, unk_0xA45992A6CE82FB43(iLocal_122), 0x00000000, 0x00000000, 0x00000000);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
							iLocal_132 = 0x00000001;
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
					{
						if (unk_0xA45992A6CE82FB43(iLocal_122) > 0.847f)
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_71, sLocal_126, sLocal_128, 0x00000002))
							{
								unk_0x1BF8B16C32704027(iLocal_71, -1000f, 0x00000000);
								if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000))
								{
									if (func_168(iLocal_73))
									{
										unk_0xF821F915BC24D246(iLocal_71, iLocal_73, 0xFFFFFFFF);
										unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
									}
								}
								unk_0xF895E10BF4C72645(iLocal_71, 0x00000001, 0x00000000);
							}
							else
							{
								unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
							}
						}
					}
				}
				if (((unk_0x69DF961355195C3C(iLocal_122) && unk_0xA45992A6CE82FB43(iLocal_122) >= 0.99f) || !unk_0x69DF961355195C3C(iLocal_122)) || func_20())
				{
					if (!unk_0x437347B10A200C4B(iLocal_73, 0x00000000) && unk_0xB4ECF989E2C1DAC8(iLocal_73, sLocal_126, sLocal_127, 0x00000003))
					{
						unk_0x4E6D1F54D3FBC5B1(iLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (unk_0x69DF961355195C3C(iLocal_122))
					{
						unk_0x57E0CF9BF653D99A(iLocal_122, 1f);
					}
					if (bLocal_150)
					{
						vVar0 = { unk_0x1BB04F10296A1C5E(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 0x00000002) };
						unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0x00000000, 0x00000000);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						vVar0 = { unk_0xEEB20D14BD38615E(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 0x00000002) };
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), vVar0.z);
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x2FB9A57162E54BAB(0f);
					}
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0x9072A713, 0x00000001, 0x00000000, 0x00000001);
					if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000))
					{
						if (func_168(iLocal_73))
						{
							unk_0xF821F915BC24D246(iLocal_71, iLocal_73, 0xFFFFFFFF);
							unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
					{
						if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
						{
							if (func_168(iLocal_73))
							{
								unk_0xF50D17A63556B8D4(iLocal_73, 0x00000000, 0x00000000, 0f);
								unk_0x2EA10555AEBEA739(iLocal_73, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
								iLocal_125 = unk_0x1C0640BA9A7327B3();
								iLocal_49 = 0x00000005;
							}
						}
					}
				}
				break;
			
			case 0x00000005:
				unk_0x3FC8DBCC154CA56B();
				if ((unk_0x1C0640BA9A7327B3() - iLocal_125) > 0x00000064)
				{
					if (func_3(iLocal_71) && func_168(iLocal_73))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_74);
						unk_0xD1F0F33C375B8446(0x00000000, iLocal_73, 0x00000009, 0x000003E8);
						unk_0xE072601B4380E9DF(0x00000000, iLocal_73, 25f, iLocal_119);
						unk_0x75ABDC5F81978924(iLocal_74);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
						unk_0xF82EA857DA10E0CD(&iLocal_74);
						unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
					}
					func_35(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					if (bLocal_150)
					{
						if (unk_0x9F4FE516EAACCFC5(iLocal_75))
						{
							unk_0xE3BB8E05FCEB3FBE(iLocal_75, 0x00000000);
							unk_0x9A8DDC7C522F5BF5(iLocal_75, 0x00000000);
						}
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						SYSTEM::WAIT(0x000002EE);
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x2FB9A57162E54BAB(0f);
						func_18(0x000001F4, 0x00000001);
					}
					else
					{
						unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
						unk_0xE3BB8E05FCEB3FBE(iLocal_75, 0x00000000);
					}
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					func_17(&iLocal_73);
					func_5(func_10(), 0x00000004, 0x00000005);
					return 0x00000001;
				}
				else if (func_3(iLocal_71))
				{
					unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
				}
				break;
			}
	}
	return 0x00000000;
}

void func_5(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_9(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_6(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1407E9;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_7(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_10()
{
	func_11();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_15(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_14(unk_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_12(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_13(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_12(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_16(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_17(int iParam0)
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

void func_18(int iParam0, bool bParam1)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

int func_19()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_20()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_121 == 0x00000002)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_21(0x000003E8))
	{
		if (unk_0x1F04E7FA44219580(iVar0))
		{
			unk_0xE3BB8E05FCEB3FBE(iLocal_75, 0x00000000);
			unk_0x53491B90E4FD0E56(0x000001F4);
			while (unk_0xD0BB2359EC70FC37())
			{
				unk_0x3FC8DBCC154CA56B();
				SYSTEM::WAIT(0x00000000);
			}
			bLocal_150 = 0x00000001;
			return 0x00000001;
		}
	}
	if (unk_0x757EF87A33649210())
	{
		if (unk_0x1F04E7FA44219580(iVar0))
		{
			bLocal_150 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_21(int iParam0)
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
			if (func_22())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_22()
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

float func_23(int iParam0, vector3 vParam1, bool bParam2)
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

void func_24(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_29(0x00000000))
		{
			func_25(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_25(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_28())
		{
			func_27(0x00000001, 0x00000001);
		}
		else
		{
			func_27(0x00000000, 0x00000000);
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
	if (!func_26())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_26()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_27(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_29(0x00000000))
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

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_29(int iParam0)
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

bool func_30()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_31()
{
	Global_4CD7 = 0x00000000;
	func_32();
}

void func_32()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_33(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_34(iParam0);
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

void func_34(int iParam0)
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

void func_35(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_42(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_26())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_41(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_42(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_41(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_39(unk_0xD803B885F5E47A62())) && !func_37(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_36()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_39(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_36()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_37(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_38(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_8();
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

int func_39(int iParam0)
{
	if (func_37(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_40())
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

bool func_40()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_41(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_42(int iParam0)
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

void func_43(vector3 vParam0, float fParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - vParam0 };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_44(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fVar2, 15f))
		{
			bVar0 = 0x00000001;
		}
		vVar1 = { vParam0 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_44(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fVar2, 15f))
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

int func_44(int iParam0, float fParam1, float fParam2)
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

int func_45(float fParam0, float fParam1, float fParam2)
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

int func_46(bool bParam0, bool bParam1, bool bParam2)
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

bool func_47(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_61(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_48(sParam2, iParam3, 0x00000000);
}

int func_48(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_26())
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
			func_55();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_54();
		func_49();
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
		func_60();
	}
	return 0x00000000;
}

void func_49()
{
	if (!func_50())
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

int func_50()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_53())
	{
		return 0x00000000;
	}
	if (func_51(unk_0xD803B885F5E47A62()))
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

bool func_51(int iParam0)
{
	return func_52(iParam0, 0x00000014);
}

bool func_52(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_53()
{
	return 0xFFFFFFFF;
}

void func_54()
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

void func_55()
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

int func_56()
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

void func_57()
{
	if (func_12(0x0000000E))
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
		Global_4C1E = func_10();
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_62()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_72))
	{
		return 0x00000001;
	}
	else if (func_168(iLocal_73))
	{
		if (!unk_0x12DE711B1C681E9E(iLocal_72, iLocal_73, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_63()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_168(iLocal_73))
	{
		fVar0 = unk_0x6EE94F60DA2A2273(iLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = 0x00000001;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 0x00000001;
		}
		if (iVar1 && unk_0xB8BCFE7E6CA4F9ED(iLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

void func_64(var uParam0)
{
	*uParam0 = 0xFFFFFF9D;
}

int func_65(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_66(iParam0, bParam1, 0x00000091);
}

int func_66(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_67(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_68(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_68(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_68(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_68(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_69(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = 0x00000001;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0x00000000))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0x00000000);
			}
		}
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0x00000000)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == 0xFFFFFFFF)
			{
				unk_0xA29E145196B9739D(iParam0, 0x00000001);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 0x00000001, iParam8);
			}
			iParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x2A065371C9D96655(*iParam1, 0x00000007);
			}
		}
		if (!iParam9 == 0xFFFFFFFF)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, bParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*iParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				if (!iParam8 == 0xFFFFFFFF)
				{
					unk_0x61755AC17D8F538E(*iParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*iParam1);
				}
				unk_0x2A065371C9D96655(*iParam1, 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iParam1->f_6, 0x00000002))
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x5D96D8530B3D0904(&(iParam1->f_6), 0x00000002);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			iParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(iParam1->f_6, 0x00000003))
			{
				if (unk_0xE4EDC4B0E92C078B(iParam1->f_1))
				{
					if (!iParam8 == 0xFFFFFFFF)
					{
						unk_0x61755AC17D8F538E(iParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(iParam1->f_1);
					}
					unk_0x2A065371C9D96655(iParam1->f_1, 0x00000007);
					unk_0x5D96D8530B3D0904(&(iParam1->f_6), 0x00000003);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(iParam1->f_1))
			{
				iParam1->f_1 = 0x00000000;
				unk_0x0674E58A79778E99(&(iParam1->f_6), 0x00000003);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(iParam1->f_1))
		{
			iParam1->f_1 = 0x00000000;
			unk_0x0674E58A79778E99(&(iParam1->f_6), 0x00000003);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_71(var uParam0, int iParam1, int iParam2)
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
		if (func_72(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_72(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_72(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_73()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
	{
		unk_0xAFF39FB306F8E232(iLocal_72, 0x00000002, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_72, 0x00000006, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_72, 0x00000003, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_72, 0x00000001, 0x00000000);
		unk_0x6C3AE6E278DB3D0E(iLocal_72, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		unk_0x11AD11297DC58CC7(iLocal_72, 0x00000000);
		unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(iLocal_72));
	}
	else
	{
		unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(iLocal_72));
	}
	if (func_168(iLocal_73))
	{
		unk_0x71EDC33E5A423750(iLocal_73, 0x00000001);
	}
}

int func_74()
{
	if (func_168(iLocal_73))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73, 40f, 40f, 10f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (iLocal_77)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					if (!iLocal_118)
					{
						if (!unk_0xE147126C9AD09A60(iLocal_73))
						{
							unk_0xFFDDE8CC59EB6D40(iLocal_72, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 40f, 0x00000064, 0x00000001, 0xD31265F2);
							iLocal_118 = 0x00000001;
						}
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_123 + 7000)
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73, 20f, 20f, 10f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_47(&Local_102, cLocal_114, sLocal_109, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_123 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					unk_0xE910A68AA670B4AA(iLocal_73);
					unk_0x432CE6C256EE1D4A(iLocal_73);
					iLocal_77 = 0x00000000;
				}
			}
			if (unk_0xB87D13D0C064E9D1(iLocal_73, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					func_47(&Local_102, cLocal_114, sLocal_109, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_78++;
				iLocal_77 = 0x00000001;
			}
			if (iLocal_78 > 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else
		{
			iLocal_118 = 0x00000000;
			iLocal_77 = 0x00000000;
		}
	}
	return 0x00000000;
}

int func_75()
{
	if (func_168(iLocal_73))
	{
		if (((unk_0x464B3D84B739AE72(iLocal_73, 0x00000000, 0x00000000) || unk_0x464B3D84B739AE72(iLocal_73, 0x00000001, 0x00000000)) || unk_0x464B3D84B739AE72(iLocal_73, 0x00000004, 0x00000000)) || unk_0x464B3D84B739AE72(iLocal_73, 0x00000005, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_76()
{
	if (func_168(iLocal_73) && unk_0xE4EDC4B0E92C078B(iLocal_60))
	{
		func_77(&uLocal_138, iLocal_73, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	}
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_78(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_78(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_79(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_79(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_71(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_80(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_80(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_72(iVar0))
	{
		func_105();
	}
	if (func_104(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_99(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_95(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_85(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_72(iVar0))
							{
								func_84(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_83(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_85(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_72(iVar0))
						{
							func_84(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_83(0x00000001);
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
				if (func_72(sParam3))
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
						func_71(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_71(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_71(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_71(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_71(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_71(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_99(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_82(uParam0))
				{
					func_81(uParam0);
				}
			}
		}
	}
	else
	{
		func_71(uParam0, iVar0, 0x00000000);
	}
}

void func_81(var uParam0)
{
	if (func_104(unk_0x16F2683693E537C9()))
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

int func_82(var uParam0)
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

int func_83(bool bParam0)
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

void func_84(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_85(char* sParam0)
{
	if (!func_86(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_72(sParam0)) || func_72("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_83(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_83(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_83(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_29(0x00000000))
	{
		return 0x00000000;
	}
	if (func_94())
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
	if ((func_93() || func_92(Global_440000.f_38DB3)) || func_91())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_90(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_89(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_87(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_87(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_88(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_88(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_88(int iParam0, bool bParam1, bool bParam2)
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

int func_89(int iParam0, int iParam1)
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

int func_90(int iParam0, int iParam1)
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

var func_91()
{
	return Global_2564C8.f_11;
}

bool func_92(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_93()
{
	return Global_2564C8.f_10;
}

bool func_94()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_95(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_71(uParam0, 0x00000000, 0x00000000);
	}
	if (func_98(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_96())
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

bool func_96()
{
	return func_97(unk_0xD803B885F5E47A62());
}

int func_97(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_98(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_82(uParam0))
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
						if (!func_103(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_103(bParam1, bParam2, bParam3))
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
					if (!func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_102(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_103(bParam1, bParam2, bParam3))
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
						if (func_101(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_100(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_100(bParam1, bParam2, bParam3))
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
					else if (func_101(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_82(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_86(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_105();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

int func_101(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

int func_102(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

int func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
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

int func_104(int iParam0)
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

void func_105()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

int func_106(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_107(iParam0, bParam1, 0x00000000);
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	return func_67(iParam0, !bParam1, bParam2);
}

int func_108()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_121 == 0x00000001)
	{
		fVar0 = 220f;
	}
	if (func_168(iLocal_73))
	{
		func_109(iLocal_60, iLocal_73, fVar0, 0x3F400000, 0x00000000);
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73, fVar0, fVar0, 100f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0x03068588A1FCED1A(iLocal_73))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_109(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

int func_110()
{
	if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_73, 0x00000000) && unk_0x5B17F10380E80E5B(iLocal_73))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_111()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iLocal_48)
		{
			case 0x00000000:
				iLocal_54 = iLocal_54;
				if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000))
				{
					if (iLocal_121 == 0x00000001)
					{
						if (func_118())
						{
							iLocal_48 = 0x00000001;
						}
					}
					else if (!unk_0x869EFD0BC0868856(iLocal_71) && !unk_0xA48EBBEA418ADC94(iLocal_71))
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0xE655C47E46F9A7E4(iLocal_71, 345f, 0x00000000);
							iLocal_48 = 0x00000001;
						}
						else
						{
							unk_0xDD353D0E9C789D0E(&iLocal_74);
							unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_80, "arms_waving", 2f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_80, "arms_waving", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_80, "arms_waving", 8f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_74);
							unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
							unk_0xF82EA857DA10E0CD(&iLocal_74);
							iLocal_124 = unk_0x1C0640BA9A7327B3();
							iLocal_48 = 0x00000002;
						}
					}
				}
				break;
			
			case 0x00000001:
				if (iLocal_121 == 0x00000001)
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
					if (unk_0xD1960163A3042274(iLocal_71, 0x0E763797) != 0x00000001)
					{
						unk_0xDD353D0E9C789D0E(&iLocal_74);
						unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_80, sLocal_82, 4f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_74);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
						unk_0xF82EA857DA10E0CD(&iLocal_74);
						iLocal_48 = 0x00000002;
					}
				}
				else if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 60f))
				{
					if (unk_0xD1960163A3042274(iLocal_71, 0x0E763797) != 0x00000001)
					{
						unk_0xDD353D0E9C789D0E(&iLocal_74);
						unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_80, "arms_waving", 2f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (bLocal_57 == 0x00000000)
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_80, "pointing", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0x75ABDC5F81978924(iLocal_74);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
						unk_0xF82EA857DA10E0CD(&iLocal_74);
						iLocal_48 = 0x00000002;
					}
				}
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				break;
			
			case 0x00000002:
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				if (iLocal_121 == 0x00000002)
				{
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 60f) && !func_115(iLocal_71, 0xCBCE4595))
					{
						unk_0xF96A174EE26D7588(iLocal_71, unk_0x16F2683693E537C9(), 0x00000000);
					}
					if (func_114(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001) < 25f)
					{
						if (!func_19())
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_124) > 0x00001770)
							{
								func_113();
							}
						}
					}
				}
				if (unk_0xD1960163A3042274(iLocal_71, 0x0E763797) != 0x00000001 && !func_115(iLocal_71, 0xCBCE4595))
				{
					if (iLocal_121 == 0x00000001)
					{
						vLocal_85 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x5A91F08DF773C39D(iLocal_71, vLocal_85, 1.5f, 1.5f, 1.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (unk_0xD1960163A3042274(iLocal_71, 0x0E763797) == 0x00000007)
							{
								unk_0xDD353D0E9C789D0E(&iLocal_74);
								unk_0x80AA372E04ED318D(0x00000000, vLocal_85, 1f, 0x00004E20, fLocal_90, 0x3F000000);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_74);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
								unk_0xF82EA857DA10E0CD(&iLocal_74);
							}
						}
						else if (!unk_0xB4ECF989E2C1DAC8(iLocal_71, sLocal_79, "waiting", 0x00000003))
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_71, sLocal_79, "waiting", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							if (func_114(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001) < 25f)
							{
								func_113();
							}
						}
					}
					else if (!unk_0xB4ECF989E2C1DAC8(iLocal_71, sLocal_79, "waiting", 0x00000003))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_71, sLocal_79, "waiting", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000003:
				if (!unk_0xC7E2E6167C09468B(iLocal_71, unk_0x16F2683693E537C9()))
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				}
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_71, 40f, 40f, 10f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_71, 9f, 9f, 9f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (func_112())
					{
						if (iLocal_55)
						{
							if (iLocal_121 == 0x00000001)
							{
								unk_0xDD353D0E9C789D0E(&iLocal_74);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_74);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
								unk_0xF82EA857DA10E0CD(&iLocal_74);
								iLocal_55 = 0x00000000;
								iLocal_124 = unk_0x1C0640BA9A7327B3();
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_74);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_74);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
								unk_0xF82EA857DA10E0CD(&iLocal_74);
								iLocal_55 = 0x00000000;
								iLocal_124 = unk_0x1C0640BA9A7327B3();
							}
						}
						else if (!unk_0xB4ECF989E2C1DAC8(iLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 0x00000003))
						{
							if (unk_0xD1960163A3042274(iLocal_71, 0x0E763797) == 0x00000007)
							{
								if (!unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 45f))
								{
									unk_0xDD353D0E9C789D0E(&iLocal_74);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_74);
									unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
									unk_0xF82EA857DA10E0CD(&iLocal_74);
								}
								else if ((unk_0x1C0640BA9A7327B3() - iLocal_124) > 0x00001770)
								{
									iLocal_55 = 0x00000001;
								}
							}
						}
						else if (!unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 70f))
						{
							unk_0xA3BF0AA5A2608191(iLocal_71);
							unk_0xDD353D0E9C789D0E(&iLocal_74);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_74);
							unk_0x78ADC381772E3D54(iLocal_71, iLocal_74);
							unk_0xF82EA857DA10E0CD(&iLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
					{
						unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
						unk_0x6DAD7906B73F064D(&iLocal_72);
					}
				}
				else
				{
					if (iLocal_121 == 0x00000001)
					{
						vLocal_85 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_57)
					{
						vLocal_85 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						vLocal_85 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0x5A91F08DF773C39D(iLocal_71, vLocal_85, 4f, 4f, 4f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_71, 0x7D8F4411) == 0x00000007)
						{
							unk_0x80AA372E04ED318D(iLocal_71, vLocal_85, 1f, 0x00004E20, fLocal_90, 0x3F000000);
						}
					}
					else if (!unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 50f))
					{
						unk_0xF96A174EE26D7588(iLocal_71, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					}
					iLocal_55 = 0x00000001;
				}
				break;
			
			case 0x00000004:
				break;
			}
	}
	if (func_167(0x00000001))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
			SYSTEM::WAIT(0x00000000);
		}
		func_237();
	}
}

bool func_112()
{
	if (!bLocal_116)
	{
		if (func_47(&Local_102, cLocal_114, sLocal_110, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			bLocal_116 = 0x00000001;
		}
	}
	return bLocal_116;
}

int func_113()
{
	if (!iLocal_117)
	{
		if (func_47(&Local_102, cLocal_114, sLocal_108, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			iLocal_117 = 0x00000001;
		}
	}
	return iLocal_117;
}

float func_114(int iParam0, int iParam1, bool bParam2)
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

int func_115(int iParam0, int iParam1)
{
	if (func_116(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_116(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_117()
{
	if (!iLocal_115)
	{
		if (SYSTEM::TIMERA() > 0x000007D0)
		{
			if (func_47(&Local_102, cLocal_114, sLocal_107, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_115 = 0x00000001;
			}
		}
	}
	return iLocal_115;
}

int func_118()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_72) && !unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (func_168(iLocal_73))
		{
			if (unk_0x82CCEAB29E9451DD(iLocal_72, iLocal_73))
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_119(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_120(bool bParam0)
{
	int iVar0;
	
	if (iLocal_121 == 0x00000002)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0x00000000:
				while (!func_143(0x13090323, 0x00000006, 0x00000001, 0x00000090, 0x006DDD00, 0x00002710, 0xFFFFFFFF, 0x000000C7, 0xFFFFFFFF, 0x00000000))
				{
					if (func_3(iLocal_71))
					{
						unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
					}
					SYSTEM::WAIT(0x00000000);
				}
				break;
			
			case 0x00000001:
				while (!func_143(0xE6C7F3FC, 0x00000006, 0x00000002, 0x00000090, 0x006DDD00, 0x00002710, 0xFFFFFFFF, 0x000000C7, 0xFFFFFFFF, 0x00000000))
				{
					if (func_3(iLocal_71))
					{
						unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
					}
					SYSTEM::WAIT(0x00000000);
				}
				break;
			
			case 0x00000002:
				while (!func_143(0x2FC6A2EC, 0x00000006, 0x00000004, 0x00000090, 0x006DDD00, 0x00002710, 0xFFFFFFFF, 0x000000C7, 0xFFFFFFFF, 0x00000000))
				{
					if (func_3(iLocal_71))
					{
						unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
					}
					SYSTEM::WAIT(0x00000000);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_142(0x00000008);
	}
	func_124(0x00000011, iLocal_121);
	func_121();
	func_237();
}

void func_121()
{
	func_122();
}

int func_122()
{
	if (func_123(0x00000000))
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

bool func_123(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_124(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_140();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_139(iParam0))
	{
		func_138(iParam0, iParam1);
		if (!func_137(0x00000033))
		{
			func_133("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_136(), 0x00000000, 0x0000008A, 0x00000000);
			func_132(0x00000033);
		}
		if (func_131(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_130(iParam0, iParam1) != 0x00000142)
		{
			func_125(func_130(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_142(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_142(0x00000007);
			}
			else
			{
				func_142(0x00000001);
			}
		}
	}
}

void func_125(int iParam0, var uParam1, var uParam2)
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
		func_129((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_126();
	}
}

void func_126()
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
		func_128(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_127() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_122();
				}
			}
		}
	}
}

int func_127()
{
	return Global_7830;
}

int func_128(int iParam0, int iParam1)
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

int func_129(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0)
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

void func_132(int iParam0)
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

void func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_134(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_134(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_135();
	}
}

void func_135()
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

int func_136()
{
	func_11();
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

int func_137(int iParam0)
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

void func_138(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_139(int iParam0)
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

int func_140()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_141(Var0);
	return uVar1;
}

int func_141(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_142(int iParam0)
{
	Global_1B408 = iParam0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_123(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam4 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam7 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_362 < 0x0000000A)
	{
		Var0 = iParam0;
		Var0.f_3 = func_151(iParam1);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		Global_1B416.f_1E03.f_2FD[Global_1B416.f_1E03.f_362 /*10*/] = { Var0 };
		Global_1B416.f_1E03.f_362++;
		return 0x00000001;
	}
	else
	{
		Var1 = { func_150(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0x00000000;
		func_149(&iVar2);
		iVar3 = func_148(Var1, Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]);
		if (iVar3 == 0x00000002)
		{
			func_146(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]);
			Global_1B416.f_1E03.f_2FD[iVar2 /*10*/] = { Var1 };
			func_145(&Var1);
			return 0x00000001;
		}
		else if (iVar3 == 0x00000001)
		{
			if (func_144(Var1))
			{
				func_146(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]);
				Global_1B416.f_1E03.f_2FD[iVar2 /*10*/] = { Var1 };
				func_145(&Var1);
				return 0x00000001;
			}
			else
			{
				if (!func_144(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]))
				{
					Global_1B416.f_1E03.f_2FD[iVar2 /*10*/] = { Var1 };
					func_145(&Var1);
					return 0x00000001;
				}
				func_145(&Var1);
				return 0x00000001;
			}
		}
		else
		{
			func_146(Var1);
			func_145(&Var1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_144(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_145(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_146(struct<10> Param0)
{
	if (func_144(Param0))
	{
		func_147(Param0.f_8, 0x00000000);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_148(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 0x00000002;
	}
	if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_149(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (func_148(Global_1B416.f_1E03.f_2FD[iVar0 /*10*/], Global_1B416.f_1E03.f_2FD[*iParam0 /*10*/]) == 0x00000000)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_151(iParam1);
	Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
	return Var0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000004;
			break;
		
		case 0x00000002:
			return 0x00000003;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000005:
		case 0x00000006:
			return 0x00000000;
			break;
	}
	return 0x00000007;
}

void func_152(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_156(iParam0, 0x00000002, 0x00000001))
		{
			func_155(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_156(iParam0, 0x00000002, 0x00000001))
	{
		func_153(iParam0, 0x00000002, 0x00000001);
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_127() == 0x00000000)
		{
			iVar0 = func_9(func_154(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_6(func_154(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000033B;
			break;
		
		case 0x00000001:
			return 0x0000033C;
			break;
		
		case 0x00000002:
			return 0x0000033D;
			break;
		
		case 0x00000003:
			return 0x0000033E;
			break;
		
		case 0x00000004:
			return 0x0000033F;
			break;
		
		case 0x00000005:
			return 0x00000340;
			break;
		
		case 0x00000006:
			return 0x00000341;
			break;
		
		case 0x00000007:
			return 0x00000342;
			break;
		
		case 0x00000008:
			return 0x00000343;
			break;
		
		case 0x00000009:
			return 0x00000344;
			break;
		
		case 0x0000000A:
			return 0x00000345;
			break;
		
		case 0x0000000B:
			return 0x00000346;
			break;
		
		case 0x0000000C:
			return 0x00000347;
			break;
		
		case 0x0000000D:
			return 0x00000348;
			break;
		
		case 0x0000000E:
			return 0x00000349;
			break;
		
		case 0x0000000F:
			return 0x0000034B;
			break;
		
		case 0x00000010:
			return 0x0000034C;
			break;
		
		case 0x00000011:
			return 0x0000034D;
			break;
		
		case 0x00000012:
			return 0x0000034E;
			break;
		
		case 0x00000013:
			return 0x0000034F;
			break;
		
		case 0x00000014:
			return 0x00000350;
			break;
		
		case 0x00000015:
			return 0x00000351;
			break;
		
		case 0x00000016:
			return 0x00000352;
			break;
		
		case 0x00000017:
			return 0x00000353;
			break;
		
		case 0x00000018:
			return 0x00000354;
			break;
		
		case 0x00000019:
			return 0x00000355;
			break;
		
		case 0x0000001A:
			return 0x00000356;
			break;
		
		case 0x0000001B:
			return 0x00000357;
			break;
		
		case 0x0000001C:
			return 0x00000358;
			break;
		
		case 0x0000001D:
			return 0x00000359;
			break;
		
		case 0x0000001E:
			return 0x0000035A;
			break;
		
		case 0x0000001F:
			return 0x0000035B;
			break;
		
		case 0x00000020:
			return 0x0000035C;
			break;
		
		case 0x00000021:
			return 0x0000035D;
			break;
		
		case 0x00000022:
			return 0x0000035E;
			break;
		
		case 0x00000023:
			return 0x0000035F;
			break;
		
		case 0x00000024:
			return 0x00000360;
			break;
		
		case 0x00000025:
			return 0x00000361;
			break;
		
		case 0x00000026:
			return 0x00000362;
			break;
		
		case 0x00000027:
			return 0x00000363;
			break;
		
		case 0x00000028:
			return 0x00000367;
			break;
		
		case 0x00000029:
			return 0x00000368;
			break;
		
		case 0x0000002A:
			return 0x00000369;
			break;
		
		case 0x0000002B:
			return 0x0000036A;
			break;
		
		case 0x0000002C:
			return 0x000026F9;
			break;
		
		case 0x0000002D:
			return 0x00000EE0;
			break;
		
		case 0x0000002E:
			return 0x00001507;
			break;
		
		case 0x0000002F:
			return 0x0000180B;
			break;
		
		case 0x00000030:
			return 0x00001C40;
			break;
		
		case 0x00000031:
			return 0x00001EC6;
			break;
		
		case 0x00000034:
			return 0x000022D0;
			break;
		
		case 0x00000032:
			return 0x00002049;
			break;
		
		case 0x00000033:
			return 0x0000204B;
			break;
		
		default:
			break;
	}
	return 0x00002CF7;
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_127() == 0x00000000)
		{
			iVar0 = func_9(func_154(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_6(func_154(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_156(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_127() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_9(func_154(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_157(int iParam0)
{
	if (func_160())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_131(Global_1B40B))
		{
			func_158(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_131(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_84(func_159(iParam0), 0xFFFFFFFF);
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
					func_84(func_159(iParam0), 0xFFFFFFFF);
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
					func_84(func_159(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_159(int iParam0)
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

int func_160()
{
	switch (func_161(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_165(0x00000000))
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
		if (!func_163(iParam2))
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
			func_162(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_162(var uParam0, int iParam1)
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

bool func_163(int iParam0)
{
	return func_164(iParam0, Global_A1D7);
}

int func_164(int iParam0, int iParam1)
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

int func_165(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_163(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_166()
{
	float fVar0;
	
	switch (iLocal_121)
	{
		case 0x00000001:
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (unk_0x0A059E0DB9253280(iLocal_71))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_167(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (iParam0 == 0x00000000 || func_114(iLocal_71, iLocal_72, 0x00000001) > 15f)
			{
				if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_71, 0x0000796E, 0f, 0f, 0f), 4f, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
				vVar1 = { vVar1 + unk_0x64430C979F516F7A(iLocal_71, 0x0000796E, 0f, 0f, 0f) };
				vVar2 = { vVar2 + unk_0x64430C979F516F7A(iLocal_71, 0x0000796E, 0f, 0f, 0f) };
				if ((unk_0xBBE430A566D01EF3(vVar2, vVar1, joaat("weapon_smokegrenade"), 0x00000001) || unk_0xBBE430A566D01EF3(vVar2, vVar1, joaat("weapon_grenade"), 0x00000001)) || unk_0xBBE430A566D01EF3(vVar2, vVar1, joaat("weapon_stickybomb"), 0x00000001))
				{
					bVar0 = 0x00000001;
				}
			}
			if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iLocal_71, 0x0000796E, 0f, 0f, 0f), 6f))
			{
				bVar0 = 0x00000001;
			}
			if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x64430C979F516F7A(iLocal_71, 0x0000796E, 0f, 0f, 0f), 6f))
			{
				bVar0 = 0x00000001;
			}
			if (unk_0xB87D13D0C064E9D1(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001))
			{
				bVar0 = 0x00000001;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_168(int iParam0)
{
	if (func_3(iParam0))
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

int func_169()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	vVar1 = { vLocal_87 };
	fVar2 = fLocal_95;
	switch (iLocal_121)
	{
		case 0x00000001:
			vLocal_86 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_94 = 293.9091f;
			vLocal_87 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_95 = 185.5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			vLocal_88 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_86) < SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_87))
			{
				vVar1 = { vLocal_86 };
				fVar2 = fLocal_94;
				bLocal_57 = 0x00000001;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				vVar1 = { vLocal_87 };
				fVar2 = fLocal_95;
			}
			break;
		
		case 0x00000002:
			vLocal_87 = { -538.6718f, -2183.442f, 5.2336f };
			vLocal_86 = { -365.7f, -2179.26f, 9.3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			vLocal_88 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_86) < SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_87))
			{
				bLocal_57 = 0x00000001;
			}
			break;
	}
	unk_0x523BCC9DC80CD82F(iVar3);
	unk_0x523BCC9DC80CD82F(iVar4);
	unk_0x523BCC9DC80CD82F(iVar5);
	unk_0x3F423BF5B8125A50(sLocal_79);
	unk_0x3F423BF5B8125A50(sLocal_80);
	unk_0x3F423BF5B8125A50(sLocal_81);
	unk_0x3F423BF5B8125A50("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x9E5E60D8C63FD9D1();
	if (((((((unk_0xB87F6CF6E5628C67(iVar3) && unk_0xB87F6CF6E5628C67(iVar4)) && unk_0xB87F6CF6E5628C67(iVar5)) && unk_0xB4AE0788C1587752(sLocal_79)) && unk_0xB4AE0788C1587752(sLocal_80)) && unk_0xB4AE0788C1587752(sLocal_81)) && unk_0xB4AE0788C1587752("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x25F7A4D42AF2AB93())
	{
		if (iLocal_121 == 0x00000001)
		{
			func_183("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_86));
			func_183("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_87));
			iLocal_73 = unk_0x122AAB0B1D6F55AD(iVar5, vVar1, fVar2, 0x00000001, 0x00000001, 0x00000000);
			unk_0x2E81FA494A883541(iLocal_73, 0x00000000, 0x00000000);
			unk_0xA22F71BBC8173C39(iLocal_73, 0x00000000);
			unk_0x44A200C9B6E1CEA6(iLocal_73, 0x00000001);
			unk_0xA072915CE3E5C457(iLocal_73, 0x00000000);
			unk_0x4D647C1236C18D14(iLocal_73, 0x00000000);
			unk_0xD3421E391490133B(iLocal_73, 0x00000002, 0x00000000);
			iLocal_72 = unk_0x852A19533F896693(iLocal_73, 0x00000016, iVar4, 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_72, 0x0000002A, 0x00000001);
			unk_0xAFF39FB306F8E232(iLocal_72, 0x00000003, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_72, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_72, 0x0000000A);
			unk_0x9992C3A6A1766168(iLocal_72, 1f);
			unk_0x7D9DF2375774CFE5(iLocal_72, 1f);
			unk_0xC002508A277213DE(iLocal_73, 0x00000087, 0x00000087);
			unk_0xF63400DBE3303D26("re_cartheft relGroupThief", &iLocal_137);
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_137, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000002, iLocal_137, 0x02B8FA80);
			unk_0x0E2400AB9174FA81(0x00000002, 0x02B8FA80, iLocal_137);
			unk_0x6DF7BF67E86AAE86(iLocal_72, iLocal_137);
			unk_0x7980D72D61BEF4D5(iLocal_73, 0x00000001);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - vLocal_50 };
				fLocal_51 = unk_0xE7D606C557C86100(vVar0.x, vVar0.y);
			}
			iLocal_71 = unk_0x36F2404464202779(0x00000005, iVar3, vLocal_50, fLocal_51, 0x00000001, 0x00000001);
			unk_0x4F39CC3882DD074E(iLocal_71, sVar7);
			unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000003, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000004, 0x00000001, 0x00000001, 0x00000000);
			unk_0x33CE5A9E32EA10B2(iLocal_71, 0x00000001);
			if (bLocal_57)
			{
				vLocal_84 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_89 = 124.6557f;
				vLocal_83 = { -2252.683f, 4274.16f, 45.0612f };
				vLocal_85 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_90 = 272.8688f;
				vLocal_97 = { -2258.04f, 4272.244f, 45.75466f };
				vLocal_98 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				vLocal_84 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_89 = 336.143f;
				vLocal_85 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_90 = 179.4774f;
				vLocal_83 = { -2257.088f, 4268.938f, 44.6456f };
				vLocal_97 = { -2254.886f, 4273.539f, 46.2282f };
				vLocal_98 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				iLocal_73 = unk_0x122AAB0B1D6F55AD(iVar5, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 0x00000001, 0x00000001, 0x00000000);
			}
			else
			{
				iLocal_73 = unk_0x122AAB0B1D6F55AD(iVar5, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 0x00000001, 0x00000001, 0x00000000);
			}
			unk_0x2E81FA494A883541(iLocal_73, 0x00000000, 0x00000000);
			unk_0xA22F71BBC8173C39(iLocal_73, 0x00000000);
			unk_0xC6A6B4DDD6DC073A(iLocal_73, 0x00000003);
			unk_0x44A200C9B6E1CEA6(iLocal_73, 0x00000001);
			unk_0xF95FF0A179413A39(iLocal_73, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_73, 0x0000000B, 0x00000002, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_73, 0x00000010, 0x00000003, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_73, 0x0000000C, 0x00000001, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_73, 0x0000000D, 0x00000001, 0x00000000);
			unk_0x920DACD685EA4957(iLocal_73, 0x00000003);
			unk_0xEE6A1776A67F70C1(iLocal_73, 0x00000017, 0x00000006, 0x00000000);
			unk_0x8BF0BEF985EB6D43(iLocal_73, 0x00000003);
			unk_0x73BEC6F1685574E6(iLocal_73, 0x00000012, 0x00000001);
			unk_0x73BEC6F1685574E6(iLocal_73, 0x00000016, 0x00000001);
			unk_0xC002508A277213DE(iLocal_73, 0x0000008F, 0x00000000);
			unk_0x58A0C35FA7CA6162(iLocal_73, 0x0000001F, 0x00000002);
			unk_0xA072915CE3E5C457(iLocal_73, 0x00000000);
			unk_0x4D647C1236C18D14(iLocal_73, 0x00000000);
			if (bLocal_57)
			{
				iLocal_71 = unk_0x36F2404464202779(0x00000005, iVar3, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 0x00000001, 0x00000001);
			}
			else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0x00000000, 0x00000001, 0x00000000))
			{
				iLocal_71 = unk_0x36F2404464202779(0x00000005, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, 0x00000001, 0x00000001);
			}
			else
			{
				iLocal_71 = unk_0x36F2404464202779(0x00000005, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 0x00000001, 0x00000001);
			}
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000003, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000004, 0x00000001, 0x00000002, 0x00000000);
			iLocal_72 = unk_0x852A19533F896693(iLocal_73, 0x00000016, iVar4, 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_72, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_72, 0x0000000A);
			unk_0x9992C3A6A1766168(iLocal_72, 1f);
			unk_0x7D9DF2375774CFE5(iLocal_72, 1f);
			unk_0x4E885A246A9D983A(iLocal_72, 0x0000002A, 0x00000001);
			unk_0x4F39CC3882DD074E(iLocal_72, sVar8);
			vLocal_84 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_89 = 294.4744f;
			vLocal_83 = { -501.0442f, -2150.799f, 8.139f };
			vLocal_85 = { -493.8062f, -2156.036f, 8.1978f };
			vLocal_97 = { -504.365f, -2144.534f, 9.8585f };
			vLocal_98 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x25C5402CC10F76CD(iLocal_71, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_71, 0x000000B9, 0x00000001);
		unk_0x78341603A22715E4(iLocal_73, 0x00000000);
		unk_0x56FDC9ADE35F7DB0(iLocal_73, 0x00000001, 0x00000001, 0x00000000);
		unk_0x11AD11297DC58CC7(iLocal_71, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_72, 0x00000001);
		unk_0x0C8C0C840C2D1AD2(iLocal_71, iLocal_72, 0xFFFFFFFF, 0x00000000, 0x00000002);
		unk_0x2F625BED8BF7F26A(iLocal_73);
		unk_0x7980D72D61BEF4D5(iLocal_73, 0x00000001);
		unk_0x9A8BCD43DBDDCDCA(iLocal_73, 0x00000000, 0x00000000);
		unk_0xAB8E2DDC7AF955E0(iVar5, 0x00000001);
		unk_0x8BC9595FD2792B5D("RE_CAR_STEAL_SCENE");
		unk_0x2E1E5367A885F9B7(iLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0x00000000);
		unk_0xDC2C59BD0989562B(iLocal_73, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_71, 0x00000011, 0x00000000);
		unk_0xBAFED2F6486F771A(iLocal_71, 0x00000200, 0x00000001);
		switch (func_10())
		{
			case 0x00000000:
				sLocal_100 = "MICHAEL";
				break;
			
			case 0x00000001:
				sLocal_100 = "FRANKLIN";
				break;
			
			case 0x00000002:
				sLocal_100 = "TREVOR";
				break;
		}
		func_182(&Local_102, 0x00000000, unk_0x16F2683693E537C9(), sLocal_100, 0x00000000, 0x00000001);
		func_182(&Local_102, 0x00000001, iLocal_71, sVar6, 0x00000000, 0x00000001);
		func_182(&Local_102, 0x00000002, iLocal_72, "CThief", 0x00000000, 0x00000001);
		return 0x00000001;
	}
	else if (func_170())
	{
		func_237();
	}
	return 0x00000000;
}

int func_170()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_45) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return 0x00000000;
		}
	}
	if (func_177())
	{
		return 0x00000001;
	}
	if (func_171(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_13(func_10()))
		{
			iVar5 = func_136();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_172(iVar1, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_173(uParam1, "Barry1", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_173(uParam1, "Barry2", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_173(uParam1, "Barry3", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_173(uParam1, "Barry3A", func_175(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_173(uParam1, "Barry3C", func_175(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_173(uParam1, "Barry4", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_173(uParam1, "Hao1", func_175(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_173(uParam1, "Josh1", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_173(uParam1, "Josh2", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_173(uParam1, "Josh3", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_173(uParam1, "Josh4", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_173(uParam1, "Maude1", func_175(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_173(uParam1, "Minute1", func_175(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_173(uParam1, "Minute2", func_175(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_173(uParam1, "Minute3", func_175(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_173(uParam1, "Omega1", func_175(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_173(uParam1, "Omega2", func_175(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 0x00000001;
	}
	if (func_179() && func_178())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_178()
{
	return Global_1B2FC > 0x00000000;
}

int func_179()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_180()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_181()
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

void func_182(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_183(char* sParam0, float fParam1)
{
	func_185(sParam0);
	func_184(fParam1);
}

void func_184(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_185(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

int func_186()
{
	if (!func_163(0x00000005))
	{
		return 0x00000001;
	}
	if (func_177())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return 0x00000000;
		}
	}
	if (func_171(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_187()
{
	if ((Global_1B40B == func_140() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_188()
{
	if (func_116(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_73 && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_76)
			{
				iLocal_76 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
	}
}

void func_189(int iParam0, var uParam1)
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

void func_190()
{
}

void func_191(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_140();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_193(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_192();
}

void func_192()
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

void func_193(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_194(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_140();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_234())
		{
			return 0x00000000;
		}
	}
	vLocal_45 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_123(0x00000000))
		{
			return 0x00000000;
		}
		if (func_177())
		{
			return 0x00000000;
		}
		if (func_233())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_13(func_10()))
		{
			if (func_171(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_45.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_232(iParam1))
		{
			return 0x00000000;
		}
		if (func_13(func_10()))
		{
			if (func_231(func_10()) == 0x00000004 || func_231(func_10()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_230(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_229(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_228())
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
		if (!func_219(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_163(0x00000005))
		{
			return 0x00000000;
		}
		if (func_218(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_218(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_232(0x0000001E) && !func_218(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_217(iVar4))
				{
					if (func_195(iVar2))
					{
						if (!func_98(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_10() != iVar2)
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

bool func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)
{
	return func_197(iParam0, 0x00000001);
}

int func_197(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0x00000000;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_200(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)
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

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_203(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_204(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_205(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_206(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_207(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_210()
{
	var uVar0;
	
	func_216(&uVar0, unk_0x4460E481B9E33ADA());
	func_215(&uVar0, unk_0x8D199E381D262EEF());
	func_214(&uVar0, unk_0xD8A54335F18763BA());
	func_213(&uVar0, unk_0x972A296334C9D57B());
	func_212(&uVar0, unk_0x118229AD063C3C1D());
	func_211(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_211(var uParam0, int iParam1)
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

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_215(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_217(int iParam0)
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
	iVar0 = func_202(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_227()) || Global_1B05D) || Global_7832) || func_226()) || func_59(0x00000008, 0xFFFFFFFF)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_227()) || Global_7832) || func_226()) || func_59(0x00000008, 0xFFFFFFFF)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_227()) || Global_1B05D) || Global_7832) || func_226()) || func_59(0x00000008, 0xFFFFFFFF)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_227()) || Global_1B05D) || Global_7832) || func_226()) || func_59(0x00000008, 0xFFFFFFFF)) || func_225()) || func_224()) || func_222()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_227() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_59(0x00000008, 0xFFFFFFFF)) || func_222()) || func_221()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_59(0x00000008, 0xFFFFFFFF) || func_225()) || func_224()) || func_221()) || func_220())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_227()) || Global_7832) || func_226()) || func_59(0x00000008, 0xFFFFFFFF)) || func_224()) || func_223()) || func_222()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_227()) || func_224()) || Global_1B05D) || Global_7832) || func_226()) || Global_A664) || func_59(0x00000008, 0xFFFFFFFF)) || func_223()) || func_221()) || func_222()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_227()) || Global_1B05D) || Global_7832) || func_226()) || func_59(0x00000008, 0xFFFFFFFF)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
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

var func_220()
{
	return Global_181DF.f_1;
}

int func_221()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_222()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_223()
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

bool func_224()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_225()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_226()
{
	return Global_14086D;
}

int func_227()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_228()
{
	func_57();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_229(int iParam0)
{
	return func_209(func_210(), iParam0);
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_10();
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

int func_231(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_232(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_234())
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

int func_233()
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

int func_234()
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

int func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_16A39[iParam0 /*2*/])
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_15D98)
	{
		if (Global_15D98[iVar0 /*5*/] != 0xFFFFFFFF)
		{
			if (Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_236()
{
	if (SYSTEM::VDIST(vLocal_50, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_121 = 0x00000001;
	}
	else if (SYSTEM::VDIST(vLocal_50, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_121 = 0x00000002;
	}
}

void func_237()
{
	if (unk_0xC844350D5D58C99A(iLocal_72) && !unk_0x437347B10A200C4B(iLocal_72, 0x00000000))
	{
		unk_0x11AD11297DC58CC7(iLocal_72, 0x00000000);
		unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(iLocal_72));
		func_249(&iLocal_72, 0x00000001, 0x00000000, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(iLocal_71) && !unk_0x437347B10A200C4B(iLocal_71, 0x00000000))
	{
		unk_0x9DD8618CA5BF832D(iLocal_71, 0x00000136, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_71, 0x00000000);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_60))
	{
		unk_0x142CC44DB769B57E(&iLocal_60);
	}
	func_69(&iLocal_63);
	if (unk_0xE4EDC4B0E92C078B(iLocal_61))
	{
		unk_0x142CC44DB769B57E(&iLocal_61);
	}
	if (unk_0x562F77A7F33D2E46("RE_CAR_STEAL_SCENE"))
	{
		if (func_168(iLocal_73))
		{
			unk_0x06FF977AA95DCCE3(iLocal_73, 0x00000000);
		}
		unk_0x8910D3D58E0132B8("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_121 == 0x00000002)
	{
		unk_0x058E3033265DBA9A(joaat("rocoto"));
	}
	else
	{
		unk_0x058E3033265DBA9A(joaat("peyote"));
	}
	func_17(&iLocal_73);
	if (func_168(iLocal_76))
	{
		unk_0xA22F71BBC8173C39(iLocal_76, 0x00000001);
	}
	unk_0xB975E4541DDAB1F5(0x00000000);
	unk_0x51B096AAC60548C1(1f);
	func_152(0x00000027, 0x00000000);
	func_152(0x00000028, 0x00000000);
	func_152(0x00000029, 0x00000000);
	func_152(0x0000002A, 0x00000000);
	func_152(0x0000002B, 0x00000000);
	func_152(0x0000002C, 0x00000000);
	func_238(0xFFFFFFFF);
	func_71(&uLocal_138, 0x00000000, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_238(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_140();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_187())
	{
		func_242(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_241(0x00007530);
		StringCopy(&cVar0, func_240(Global_1B40B, 0x00000001), 64);
		if (func_139(Global_1B40B) > 0x00000000)
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
	func_239(&Global_786B);
	Global_1B40C = 0x00000000;
	func_193(0xFFFFFFFF);
}

void func_239(var uParam0)
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

char* func_240(int iParam0, bool bParam1)
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

void func_241(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_242(int iParam0)
{
	func_243(iParam0, 0x00000000, func_248(iParam0));
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_246(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_245(iParam0, &uVar0);
	Var1 = { func_244(&uVar0) };
}

struct<16> func_244(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_203(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_245(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_247(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
}

int func_248(int iParam0)
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

void func_249(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
			if (iParam3 == 0x00000000)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 0x00000001)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0x00000000);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

