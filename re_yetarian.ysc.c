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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	var uLocal_44 = 0;
	struct<20> Local_45[2];
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	float fLocal_58 = 0f;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70[2] = { 0, 0 };
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	vector3 vLocal_80[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_81[2] = { 0f, 0f };
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	char[] cLocal_91[8] = 0;
	var uLocal_92 = 16;
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
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<2> Local_257 = { 0, 5 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 5;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
#endregion

void __EntryFunction__()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_12 = 0x00000003;
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
	iLocal_55 = 0xFFFFFFFF;
	iLocal_56 = 0xFFFFFFFF;
	iLocal_74 = joaat("p_amb_phone_01");
	vLocal_78 = { -35.607f, -1110.046f, 26.4364f };
	vLocal_79 = { -126.1154f, -1129.347f, 23.4329f };
	iLocal_83 = 0xFFFFFFFF;
	iLocal_84 = 0xFFFFFFFF;
	iLocal_85 = 0xFFFFFFFF;
	iLocal_86 = 0xFFFFFFFF;
	cLocal_91 = "REYE_AU";
	func_173(ScriptParam_257.f_1[0x00000000 /*3*/]);
	if (unk_0x2EBF608FFE6CA406(0x0000001B))
	{
		func_172();
	}
	if (func_145(ScriptParam_257.f_1[0x00000000 /*3*/], 0x0000001E, 0x00000000, 0x00000000, 0x00000000))
	{
		func_143(0x0000001E);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_130();
	while (0x00000001)
	{
		if (!func_129())
		{
			if (func_128())
			{
				func_100();
			}
		}
		if (unk_0xDA8F5DDC86FE3C26("DEALERSHIP"))
		{
			if (unk_0x8ED9A0095B69A728("DEALERSHIP"))
			{
				unk_0x2723524E448F4BDD("DEALERSHIP", 0x00000000);
			}
		}
		fVar0 = (unk_0xFF085400D959E27C() + 20f);
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_57) < (fVar0 * fVar0))
		{
			unk_0x9501364A300048C6();
		}
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_59) < (fVar0 * fVar0))
		{
			unk_0x9501364A300048C6();
		}
		if (unk_0x338D6FF72D84D90F())
		{
			iVar1 = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000002)
			{
				func_97(iVar1);
				iVar1++;
			}
			switch (iLocal_46)
			{
				case 0x00000000:
					func_79();
					break;
				
				case 0x00000001:
					func_61();
					break;
				
				case 0x00000002:
					func_3();
					break;
			}
		}
		else if (bLocal_72)
		{
			iVar2 = 0x00000000;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000002)
			{
				func_97(iVar2);
				iVar2++;
			}
			switch (iLocal_46)
			{
				case 0x00000000:
					func_79();
					break;
				
				case 0x00000001:
					func_61();
					break;
				
				case 0x00000002:
					func_3();
					break;
			}
			if (func_2(iLocal_48))
			{
				if (func_1(iLocal_48, unk_0x16F2683693E537C9(), 0x00000001) > 120f)
				{
					func_100();
				}
			}
		}
		else
		{
			func_100();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

float func_1(int iParam0, int iParam1, bool bParam2)
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

int func_2(int iParam0)
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

void func_3()
{
	switch (iLocal_47)
	{
		case 0x00000000:
			if (func_60())
			{
				iLocal_47 = 0x00000001;
			}
			func_59();
			break;
		
		case 0x00000001:
			func_59();
			if (func_2(iLocal_48))
			{
				if (func_58())
				{
					if (!iLocal_66)
					{
						iLocal_67 = 0x00000001;
						iLocal_62 = 0x00000001;
						unk_0xA3BF0AA5A2608191(iLocal_48);
						if (unk_0xC844350D5D58C99A(iLocal_52))
						{
							unk_0xF690C84DADBB3551(&iLocal_52);
						}
						if (!bLocal_64)
						{
							if (!bLocal_65)
							{
								unk_0xDD353D0E9C789D0E(&iLocal_87);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000005DC);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_87);
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_87);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_87);
							}
							unk_0x78ADC381772E3D54(iLocal_48, iLocal_87);
							unk_0xF82EA857DA10E0CD(&iLocal_87);
							iLocal_66 = 0x00000001;
						}
						else
						{
							if (!bLocal_65)
							{
								unk_0xDD353D0E9C789D0E(&iLocal_87);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
								if (func_1(iLocal_48, unk_0x16F2683693E537C9(), 0x00000001) <= 4f)
								{
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000005DC);
								}
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000001, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_87);
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_87);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000001, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_87);
							}
							unk_0x78ADC381772E3D54(iLocal_48, iLocal_87);
							unk_0xF82EA857DA10E0CD(&iLocal_87);
							iLocal_66 = 0x00000001;
						}
					}
					else
					{
						func_36();
						unk_0xCAF7AE54F764D5AA(iLocal_48, 2f);
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 0x00000001) >= 100f && !unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 3f))
						{
							unk_0xEBA53F35D0085654(&iLocal_48);
						}
						if (Local_45[0x00000000 /*20*/].f_12 >= 0x00000005 && Local_45[0x00000001 /*20*/].f_12 >= 0x00000005)
						{
							func_4();
						}
					}
				}
				else
				{
					func_36();
					unk_0xCAF7AE54F764D5AA(iLocal_48, 2f);
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 0x00000001) >= 100f && !unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 3f))
					{
						unk_0xEBA53F35D0085654(&iLocal_48);
					}
					if (Local_45[0x00000000 /*20*/].f_12 >= 0x00000005 && Local_45[0x00000001 /*20*/].f_12 >= 0x00000005)
					{
						if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							func_4();
						}
					}
					if (func_2(iLocal_48))
					{
						unk_0x9DD8618CA5BF832D(iLocal_48, 0x0000003C, 0x00000001);
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_51))
				{
					unk_0x142CC44DB769B57E(&iLocal_51);
				}
				if (unk_0xC844350D5D58C99A(iLocal_48))
				{
					if (unk_0x437347B10A200C4B(iLocal_48, 0x00000000))
					{
						if (!iLocal_73)
						{
							iLocal_73 = 0x00000001;
						}
					}
				}
				iLocal_67 = 0x00000001;
				if (Local_45[0x00000000 /*20*/].f_12 >= 0x00000005 && Local_45[0x00000001 /*20*/].f_12 >= 0x00000005)
				{
					if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_4();
					}
				}
			}
			break;
	}
}

void func_4()
{
	func_35(&iLocal_48, 0x00000001, 0x00000000, 0x00000001);
	while (!func_34())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);
	}
	func_8(0xFFFFFFFF, 0x00000000);
	func_5();
	func_100();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0x00000000))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_32();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_31(iParam0))
	{
		func_30(iParam0, iParam1);
		if (!func_29(0x00000033))
		{
			func_19("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_22(), 0x00000000, 0x0000008A, 0x00000000);
			func_18(0x00000033);
		}
		if (func_17(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_16(iParam0, iParam1) != 0x00000142)
		{
			func_10(func_16(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_9(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_9(0x00000007);
			}
			else
			{
				func_9(0x00000001);
			}
		}
	}
}

void func_9(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_10(int iParam0, var uParam1, var uParam2)
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
		func_14((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_11();
	}
}

void func_11()
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
		func_13(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_12() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_6();
				}
			}
		}
	}
}

int func_12()
{
	return Global_7830;
}

int func_13(int iParam0, int iParam1)
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

int func_14(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_15();
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

int func_15()
{
	return Global_1407E9;
}

int func_16(int iParam0, int iParam1)
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

int func_17(int iParam0)
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

void func_18(int iParam0)
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

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_20(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_20(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_21();
	}
}

void func_21()
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

int func_22()
{
	func_23();
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

void func_23()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_27(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_26(unk_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_24(0x0000000E) || Global_1AFFD))
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

bool func_24(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_25(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_28(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_29(int iParam0)
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

void func_30(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_31(int iParam0)
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

int func_32()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_33(Var0);
	return uVar1;
}

int func_33(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_34()
{
	return 0x00000001;
}

void func_35(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_36()
{
	if (iLocal_68 == 0x00000000)
	{
		if (!func_57())
		{
			if (func_2(Local_45[0x00000000 /*20*/].f_1))
			{
				func_56(&uLocal_92, 0x00000005, Local_45[0x00000000 /*20*/].f_1, "YETARIAN_GOON", 0x00000000, 0x00000001);
			}
			else if (func_2(Local_45[0x00000001 /*20*/].f_1))
			{
				func_56(&uLocal_92, 0x00000005, Local_45[0x00000001 /*20*/].f_1, "YETARIAN_GOON", 0x00000000, 0x00000001);
			}
			else
			{
				iLocal_68 = 0x00000001;
				iLocal_69 = 0x00000001;
			}
			if (iLocal_68 == 0x00000000)
			{
				if (func_55() == 0x00000000)
				{
					if (func_39(&uLocal_92, cLocal_91, "RE_YETA_MIKE", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_68 = 0x00000001;
					}
				}
				else if (func_39(&uLocal_92, cLocal_91, "RE_YETA_FRAN", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_68 = 0x00000001;
				}
			}
		}
	}
	else if (iLocal_69 == 0x00000000)
	{
		if (!func_57())
		{
			if (func_2(Local_45[0x00000000 /*20*/].f_1))
			{
				func_37(Local_45[0x00000000 /*20*/].f_1, "FIGHT", 0x00000022);
				iLocal_69 = 0x00000001;
			}
			else if (func_2(Local_45[0x00000001 /*20*/].f_1))
			{
				func_37(Local_45[0x00000001 /*20*/].f_1, "FIGHT", 0x00000022);
				iLocal_69 = 0x00000001;
			}
			else
			{
				iLocal_69 = 0x00000001;
			}
		}
	}
}

void func_37(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_38(iParam2), 0x00000001);
}

int func_38(int iParam0)
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

bool func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0x00000000);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_53();
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
		if (func_52(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_51();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_46();
		func_41();
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
		func_53();
	}
	return 0x00000000;
}

void func_41()
{
	if (!func_42())
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

int func_42()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_45())
	{
		return 0x00000000;
	}
	if (func_43(unk_0xD803B885F5E47A62()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 0x00000014);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_45()
{
	return 0xFFFFFFFF;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_49()
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

void func_50()
{
	if (func_24(0x0000000E))
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
		Global_4C1E = func_55();
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

void func_51()
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

bool func_52(int iParam0, int iParam1)
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

void func_53()
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

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_55()
{
	func_23();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_57()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_58()
{
	if (func_2(iLocal_48))
	{
		if (!bLocal_64)
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 0x00000001) <= 7f || unk_0xD1960163A3042274(iLocal_48, 0x0E763797) == 0x00000007)
			{
				if (!iLocal_66)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 0x00000001) <= 7f)
					{
					}
					if (unk_0xD1960163A3042274(iLocal_48, 0x0E763797) == 0x00000007)
					{
					}
				}
				return 0x00000001;
			}
		}
		else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 0x00000001) <= 4.5f || unk_0xD1960163A3042274(iLocal_48, 0x0E763797) == 0x00000007)
		{
			if (!iLocal_66)
			{
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_48, 0x00000000), 0x00000001) <= 4.5f)
				{
				}
				if (unk_0xD1960163A3042274(iLocal_48, 0x0E763797) == 0x00000007)
				{
				}
			}
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_59()
{
	if (func_2(iLocal_48))
	{
		if (unk_0xB4ECF989E2C1DAC8(iLocal_48, "cellphone@", "cellphone_call_out", 0x00000003))
		{
			if (unk_0x8CA9406E01C7EE58(iLocal_48, "cellphone@", "cellphone_call_out") >= 0.24f)
			{
				if (unk_0xC844350D5D58C99A(iLocal_52))
				{
					unk_0xF690C84DADBB3551(&iLocal_52);
				}
			}
		}
	}
}

int func_60()
{
	int iVar0;
	
	iVar0 = unk_0xFBD08BECC9B87937(Local_45[0x00000000 /*20*/].f_A);
	if (iVar0 != 0x00000000)
	{
		unk_0x0007C2367F4F23F3(iVar0);
		if (unk_0xBD307E66C0669BFC(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_61()
{
	switch (iLocal_47)
	{
		case 0x00000000:
			iLocal_47 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_60())
			{
				if (!unk_0x76395FF5E8D5E643(0x92D8C222))
				{
					unk_0x8010B3127F058F0F(0x92D8C222, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 0x00000001, 0x00000001, 0x00000000);
				}
				else if (unk_0x9CED8DAD53D1A397(0x92D8C222) < 1f)
				{
					unk_0x838CC054A9235BEC(0x92D8C222, 1f, 0x00000000, 0x00000000);
					unk_0x1BA7FCEAFCE8D46E(0x92D8C222, 0x00000001, 0x00000000, 0x00000001);
				}
			}
			func_59();
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_2(iLocal_49) || func_2(iLocal_50))
				{
					if (func_65())
					{
						if (iLocal_71 == 0x00000000)
						{
							if (bLocal_63)
							{
								unk_0xA3BF0AA5A2608191(iLocal_48);
								unk_0xDD353D0E9C789D0E(&iLocal_87);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000000C, 0x00000002);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@", "cellphone_call_out", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_87);
								unk_0x78ADC381772E3D54(iLocal_48, iLocal_87);
								unk_0xF82EA857DA10E0CD(&iLocal_87);
							}
							else
							{
								unk_0xA3BF0AA5A2608191(iLocal_48);
								unk_0xDD353D0E9C789D0E(&iLocal_87);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000000C, 0x00000002);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@", "cellphone_call_out", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_87);
								unk_0x78ADC381772E3D54(iLocal_48, iLocal_87);
								unk_0xF82EA857DA10E0CD(&iLocal_87);
							}
							bLocal_72 = 0x00000001;
							iLocal_71 = 0x00000001;
						}
						if (!bLocal_64 && !bLocal_63)
						{
							if (iLocal_55 == 0xFFFFFFFF)
							{
								iLocal_55 = unk_0x1C0640BA9A7327B3();
							}
							if (iLocal_56 == 0xFFFFFFFF)
							{
								iLocal_56 = 0x00000FA0;
							}
						}
						else
						{
							if (iLocal_55 == 0xFFFFFFFF)
							{
								iLocal_55 = unk_0x1C0640BA9A7327B3();
							}
							if (iLocal_56 == 0xFFFFFFFF)
							{
								iLocal_56 = 0x000003E8;
							}
						}
						if (iLocal_55 != 0xFFFFFFFF && iLocal_56 != 0x00000001)
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_55) >= iLocal_56)
							{
								func_62();
								unk_0xC92DB9682A650680("RE9_SPOTTED");
								iLocal_61 = 0x00000001;
								iLocal_47 = 0x00000002;
							}
						}
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_51))
					{
						unk_0x142CC44DB769B57E(&iLocal_51);
					}
					if (unk_0xC844350D5D58C99A(iLocal_48))
					{
						if (unk_0x437347B10A200C4B(iLocal_48, 0x00000000))
						{
							if (!iLocal_73)
							{
								iLocal_73 = 0x00000001;
							}
						}
					}
					iLocal_67 = 0x00000001;
					if (Local_45[0x00000000 /*20*/].f_12 >= 0x00000005 && Local_45[0x00000001 /*20*/].f_12 >= 0x00000005)
					{
						if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							func_4();
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			iLocal_46 = 0x00000002;
			iLocal_47 = 0x00000000;
			break;
	}
}

void func_62()
{
	if (func_55() == 0x00000001)
	{
		func_56(&uLocal_92, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	else
	{
		func_56(&uLocal_92, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	func_56(&uLocal_92, 0x00000004, iLocal_48, "SIMEON", 0x00000000, 0x00000001);
	if (bLocal_65)
	{
		func_39(&uLocal_92, cLocal_91, "RE_YETA_SNIP", 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (bLocal_63)
	{
		func_39(&uLocal_92, cLocal_91, "RE_YETA_EXT", 0x00000007, 0x00000001, 0x00000000, 0x00000000);
	}
	else if (func_63())
	{
		if (func_55() == 0x00000000)
		{
			func_39(&uLocal_92, cLocal_91, "RE_YETAM", 0x00000007, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_55() == 0x00000001)
		{
			func_39(&uLocal_92, cLocal_91, "RE_YETAF", 0x00000007, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	else
	{
		func_39(&uLocal_92, cLocal_91, "RE_YETA_SNIP", 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_63()
{
	if ((((((((func_64(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && func_64(unk_0x16F2683693E537C9()) != joaat("object")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_knife")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_nightstick")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_hammer")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_bat")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_crowbar")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_golfclub")) && func_64(unk_0x16F2683693E537C9()) != joaat("weapon_bottle"))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
		else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_64(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

int func_65()
{
	if (!unk_0x029064EA9141FCC2(vLocal_78, vLocal_79) && !(unk_0xF65264B66E133BD8(-61.01321f, -1093.393f, 25.75297f, 2f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000) && unk_0xF65264B66E133BD8(-38.59683f, -1109.284f, 25.68742f, 2f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000)))
	{
		if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == unk_0x12AB0310C2281427("rm_showroom"))
		{
			if (!func_129())
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -41.19015f, -1104.137f, 24.42232f, -33.7943f, -1107.183f, 28.67232f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
				{
					bLocal_64 = 0x00000001;
					func_77(0x00000000);
				}
				else
				{
					bLocal_64 = 0x00000000;
					func_77(0x00000001);
				}
				func_67(0x00000001);
			}
			return 0x00000001;
		}
	}
	else if (unk_0x029064EA9141FCC2(vLocal_78, vLocal_79) || (unk_0xF65264B66E133BD8(-61.01321f, -1093.393f, 25.75297f, 2f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000) && unk_0xF65264B66E133BD8(-38.59683f, -1109.284f, 25.68742f, 2f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000)))
	{
		if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == unk_0x12AB0310C2281427("rm_showroom"))
		{
			func_35(&(Local_45[0x00000000 /*20*/].f_1), 0x00000001, 0x00000000, 0x00000001);
			func_35(&(Local_45[0x00000001 /*20*/].f_1), 0x00000001, 0x00000000, 0x00000001);
			func_66(&iLocal_50);
			func_66(&iLocal_49);
			func_100();
		}
	}
	return 0x00000000;
}

void func_66(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

int func_67(int iParam0)
{
	if (func_71())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_17(Global_1B40B))
		{
			func_68(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_17(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_69(func_70(iParam0), 0xFFFFFFFF);
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
					func_69(func_70(iParam0), 0xFFFFFFFF);
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
					func_69(func_70(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

void func_69(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

char* func_70(int iParam0)
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

int func_71()
{
	switch (func_72(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_72(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_76(0x00000000))
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
		if (!func_74(iParam2))
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
			func_73(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_73(var uParam0, int iParam1)
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

bool func_74(int iParam0)
{
	return func_75(iParam0, Global_A1D7);
}

int func_75(int iParam0, int iParam1)
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

int func_76(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_74(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		if (func_2(iLocal_50))
		{
			unk_0x4A4806F9D471E491(iLocal_50, 0x00000001, 0x00000000);
			unk_0x1E9649458B15960F(iLocal_50, 0x00000000);
			unk_0x98868AF51859FC75(iLocal_50, 0x00000001);
			iLocal_48 = iLocal_50;
			iLocal_52 = iLocal_54;
			func_66(&iLocal_49);
			func_78(&iLocal_53);
		}
	}
	else if (func_2(iLocal_49))
	{
		unk_0x4A4806F9D471E491(iLocal_49, 0x00000001, 0x00000000);
		unk_0x1E9649458B15960F(iLocal_49, 0x00000000);
		unk_0x98868AF51859FC75(iLocal_49, 0x00000001);
		iLocal_48 = iLocal_49;
		iLocal_52 = iLocal_53;
		func_66(&iLocal_50);
		func_78(&iLocal_54);
	}
}

void func_78(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_79()
{
	switch (iLocal_47)
	{
		case 0x00000000:
			if (func_96())
			{
				iLocal_47 = 0x00000001;
			}
			else if (func_84())
			{
				func_100();
			}
			unk_0xE342F209E49C5314(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, 0x00000000, 0x00000001);
			unk_0x10F452EDECF82313(-53.57574f, -1095.356f, 24.17232f, -46.52551f, -1094.587f, 27.42232f, 3.75f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			if (!func_2(iLocal_49) || !func_2(iLocal_50))
			{
				func_81(&iLocal_49, 0x00000012, vLocal_57, fLocal_58, 0x00000001);
				if (func_2(iLocal_49))
				{
					unk_0x4A4806F9D471E491(iLocal_49, 0x00000000, 0x00000000);
					unk_0x98868AF51859FC75(iLocal_49, 0x00000000);
					unk_0x25C5402CC10F76CD(iLocal_49, 0x00000000);
					unk_0x11AD11297DC58CC7(iLocal_49, 0x00000001);
					unk_0x6DF7BF67E86AAE86(iLocal_49, iLocal_90);
					unk_0x7980D72D61BEF4D5(iLocal_49, 0x00000001);
					unk_0x262EF6C6306BEA6C(iLocal_49, joaat("weapon_pistol"), 0x000003E7, 0x00000000, 0x00000000);
					unk_0xCA84BD02FBA0BEA4(iLocal_49, 0x00000000, iLocal_88);
					unk_0x0E2400AB9174FA81(0x00000005, iLocal_88, 0x6F0783F5);
					unk_0xE8832A9E16A57A1F(iLocal_49, 0x00000001, 0x00000001);
					unk_0x4E885A246A9D983A(iLocal_49, 0x00000068, 0x00000001);
					iLocal_53 = unk_0x7707E48765093646(iLocal_74, unk_0x68F4C0EC296D3901(iLocal_49, 0x00000001), 0x00000001, 0x00000001, 0x00000000);
					unk_0x9F528B1B53FBC5D9(iLocal_53, iLocal_49, unk_0x4A089F2B762B8D33(iLocal_49, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0xDD353D0E9C789D0E(&iLocal_87);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_f", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_no_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_d", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x25644C31B4B6E9F3(iLocal_87, 0x00000001);
					unk_0x75ABDC5F81978924(iLocal_87);
					unk_0x78ADC381772E3D54(iLocal_49, iLocal_87);
					unk_0xF82EA857DA10E0CD(&iLocal_87);
					unk_0x1E9649458B15960F(iLocal_49, 0x00000001);
				}
				func_81(&iLocal_50, 0x00000012, vLocal_59, fLocal_60, 0x00000001);
				if (func_2(iLocal_50))
				{
					unk_0x4A4806F9D471E491(iLocal_50, 0x00000000, 0x00000000);
					unk_0x98868AF51859FC75(iLocal_50, 0x00000000);
					unk_0x25C5402CC10F76CD(iLocal_50, 0x00000000);
					unk_0x11AD11297DC58CC7(iLocal_50, 0x00000001);
					unk_0x6DF7BF67E86AAE86(iLocal_50, iLocal_90);
					unk_0x7980D72D61BEF4D5(iLocal_50, 0x00000001);
					unk_0x262EF6C6306BEA6C(iLocal_50, joaat("weapon_pistol"), 0x000003E7, 0x00000000, 0x00000000);
					unk_0xCA84BD02FBA0BEA4(iLocal_50, 0x00000000, iLocal_88);
					unk_0x0E2400AB9174FA81(0x00000005, iLocal_88, 0x6F0783F5);
					unk_0xE8832A9E16A57A1F(iLocal_50, 0x00000001, 0x00000001);
					unk_0x4E885A246A9D983A(iLocal_50, 0x00000068, 0x00000001);
					iLocal_54 = unk_0x7707E48765093646(iLocal_74, unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), 0x00000001, 0x00000001, 0x00000000);
					unk_0x9F528B1B53FBC5D9(iLocal_54, iLocal_50, unk_0x4A089F2B762B8D33(iLocal_50, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0xDD353D0E9C789D0E(&iLocal_87);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_f", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_no_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "cellphone@str", "cellphone_call_listen_d", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x25644C31B4B6E9F3(iLocal_87, 0x00000001);
					unk_0x75ABDC5F81978924(iLocal_87);
					unk_0x78ADC381772E3D54(iLocal_50, iLocal_87);
					unk_0xF82EA857DA10E0CD(&iLocal_87);
					unk_0x1E9649458B15960F(iLocal_49, 0x00000001);
				}
			}
			else
			{
				func_80();
				iLocal_75 = unk_0x122AAB0B1D6F55AD(joaat("baller2"), -46.2722f, -1097.466f, 25.42f, 112.5363f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC6A6B4DDD6DC073A(iLocal_75, 0x00000007);
				unk_0x8BF0BEF985EB6D43(iLocal_75, 0x00000003);
				unk_0x71EDC33E5A423750(iLocal_75, 0x00000002);
				unk_0x05EC10F460C3A4AF(iLocal_75, 0x00000000);
				iLocal_76 = unk_0x122AAB0B1D6F55AD(joaat("tailgater"), -41.07354f, -1099.567f, 25.42f, 138.4292f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC6A6B4DDD6DC073A(iLocal_76, 0x0000000C);
				unk_0x71EDC33E5A423750(iLocal_76, 0x00000002);
				unk_0x05EC10F460C3A4AF(iLocal_76, 0x00000000);
				iLocal_77 = unk_0x122AAB0B1D6F55AD(joaat("bjxl"), -36.74456f, -1101.583f, 25.42f, 155.1573f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC6A6B4DDD6DC073A(iLocal_77, 0x00000004);
				unk_0x8BF0BEF985EB6D43(iLocal_77, 0x00000003);
				unk_0x71EDC33E5A423750(iLocal_77, 0x00000002);
				unk_0x05EC10F460C3A4AF(iLocal_77, 0x00000000);
				iLocal_47 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			iLocal_46 = 0x00000001;
			iLocal_47 = 0x00000000;
			break;
	}
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Local_45[iVar0 /*20*/].f_12 = 0x00000001;
		iVar0++;
	}
}

int func_81(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_25(iParam1))
	{
		iVar0 = func_83(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(0x0000001A, iVar0, vParam2, fParam3, 0x00000000, 0x00000000);
			unk_0x78ED16BE998AECC7(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x36C584991B4C183F(*iParam0, 0x00000003) == 0x00000000)
				{
					unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000005, 0x00000002, 0x00000000, 0x00000000);
				}
			}
			func_82(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_82(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000007;
	if (iParam1 == 0x00000013)
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == 0x0000000E)
	{
		iVar0 = 0x00000004;
	}
	else if (iParam1 == 0x00000011)
	{
		iVar0 = 0x00000005;
	}
	else
	{
		iVar0 = 0x00000007;
		return 0x00000000;
	}
	Global_17172[(iVar0 - 0x00000003)] = uParam0;
	return 0x00000001;
}

int func_83(int iParam0)
{
	if (!func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

int func_84()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_43) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_95())
		{
			return 0x00000000;
		}
	}
	if (func_91())
	{
		return 0x00000001;
	}
	if (func_85(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_85(float fParam0, bool bParam1)
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
		if (func_25(func_55()))
		{
			iVar5 = func_22();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_86(iVar1, &Var0);
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

void func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_87(uParam1, "Abigail1", func_89(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_87(uParam1, "Abigail2", func_89(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_87(uParam1, "Barry1", func_89(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_87(uParam1, "Barry2", func_89(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_87(uParam1, "Barry3", func_89(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_87(uParam1, "Barry3A", func_89(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_87(uParam1, "Barry3C", func_89(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_87(uParam1, "Barry4", func_89(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_87(uParam1, "Dreyfuss1", func_89(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_87(uParam1, "Epsilon1", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_87(uParam1, "Epsilon2", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_87(uParam1, "Epsilon3", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_87(uParam1, "Epsilon4", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_87(uParam1, "Epsilon5", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_87(uParam1, "Epsilon6", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_87(uParam1, "Epsilon7", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_87(uParam1, "Epsilon8", func_89(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_87(uParam1, "Extreme1", func_89(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_87(uParam1, "Extreme2", func_89(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_87(uParam1, "Extreme3", func_89(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_87(uParam1, "Extreme4", func_89(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_87(uParam1, "Fanatic1", func_89(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_87(uParam1, "Fanatic2", func_89(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_87(uParam1, "Fanatic3", func_89(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_87(uParam1, "Hao1", func_89(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_87(uParam1, "Hunting1", func_89(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_87(uParam1, "Hunting2", func_89(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_87(uParam1, "Josh1", func_89(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_87(uParam1, "Josh2", func_89(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_87(uParam1, "Josh3", func_89(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_87(uParam1, "Josh4", func_89(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_87(uParam1, "Maude1", func_89(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_87(uParam1, "Minute1", func_89(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_87(uParam1, "Minute2", func_89(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_87(uParam1, "Minute3", func_89(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_87(uParam1, "MrsPhilips1", func_89(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_87(uParam1, "MrsPhilips2", func_89(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_87(uParam1, "Nigel1", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_87(uParam1, "Nigel1A", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_87(uParam1, "Nigel1B", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_87(uParam1, "Nigel1C", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_87(uParam1, "Nigel1D", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_87(uParam1, "Nigel2", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_87(uParam1, "Nigel3", func_89(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_87(uParam1, "Omega1", func_89(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_87(uParam1, "Omega2", func_89(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_87(uParam1, "Paparazzo1", func_89(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_87(uParam1, "Paparazzo2", func_89(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_87(uParam1, "Paparazzo3", func_89(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_87(uParam1, "Paparazzo3A", func_89(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_87(uParam1, "Paparazzo3B", func_89(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_87(uParam1, "Paparazzo4", func_89(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_87(uParam1, "Rampage1", func_89(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_87(uParam1, "Rampage3", func_89(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_87(uParam1, "Rampage4", func_89(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_87(uParam1, "Rampage5", func_89(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_87(uParam1, "Rampage2", func_89(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_88(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_87(uParam1, "TheLastOne", func_89(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_87(uParam1, "Tonya1", func_89(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_87(uParam1, "Tonya2", func_89(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_87(uParam1, "Tonya3", func_89(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_87(uParam1, "Tonya4", func_89(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_87(uParam1, "Tonya5", func_89(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_88(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_87(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_88(int iParam0)
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

struct<2> func_89(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_90(iParam0) };
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

struct<2> func_90(int iParam0)
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

int func_91()
{
	if (func_94() && !func_95())
	{
		return 0x00000001;
	}
	if (func_93() && func_92())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_92()
{
	return Global_1B2FC > 0x00000000;
}

int func_93()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_94()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_95()
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

int func_96()
{
	if (((((((((((unk_0xB87F6CF6E5628C67(Local_45[0x00000000 /*20*/]) && unk_0xB87F6CF6E5628C67(Local_45[0x00000001 /*20*/])) && unk_0x1787731C4D1D6B19(Local_45[0x00000000 /*20*/].f_11)) && unk_0x1787731C4D1D6B19(Local_45[0x00000001 /*20*/].f_11)) && func_60()) && unk_0xB4AE0788C1587752("cellphone@")) && unk_0xB4AE0788C1587752("cellphone@str")) && unk_0x1C2E18E9C63BEB77("reyetarian_simeonoffice")) && unk_0xB87F6CF6E5628C67(iLocal_74)) && unk_0xB87F6CF6E5628C67(joaat("bjxl"))) && unk_0xB87F6CF6E5628C67(joaat("tailgater"))) && unk_0xB87F6CF6E5628C67(joaat("baller2")))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_97(int iParam0)
{
	switch (Local_45[iParam0 /*20*/].f_12)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!Local_45[iParam0 /*20*/].f_13)
			{
				if (!func_2(Local_45[iParam0 /*20*/].f_1))
				{
					Local_45[iParam0 /*20*/].f_1 = unk_0x36F2404464202779(0x00000016, Local_45[iParam0 /*20*/], Local_45[iParam0 /*20*/].f_A, Local_45[iParam0 /*20*/].f_D, 0x00000001, 0x00000001);
					if (func_2(Local_45[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0x00000000)
						{
							unk_0x0B7C52F2BC1DC8EB(Local_45[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", vLocal_80[iParam0 /*3*/], fLocal_81[iParam0], 0x00000000, 0x00000000, 0x00000001);
							unk_0xD35BB27936A678E2(Local_45[iParam0 /*20*/].f_1);
							unk_0xCE025D02CE77A931(Local_45[iParam0 /*20*/].f_1, 0x00000001);
							unk_0xED253B8DDB3FFB77(Local_45[iParam0 /*20*/].f_1, -37.34785f, -1102.022f, 25.42232f, 3f, 0x00000000, 0x00000000);
							unk_0xAFF39FB306F8E232(Local_45[iParam0 /*20*/].f_1, 0x00000025, 0x00000001);
						}
						unk_0x11AD11297DC58CC7(Local_45[iParam0 /*20*/].f_1, 0x00000001);
						unk_0x6DF7BF67E86AAE86(Local_45[iParam0 /*20*/].f_1, iLocal_88);
						unk_0xCA84BD02FBA0BEA4(Local_45[iParam0 /*20*/].f_1, 0x00000000, iLocal_88);
						unk_0xAFF39FB306F8E232(Local_45[iParam0 /*20*/].f_1, 0x00000017, 0x00000000);
						unk_0xAFF39FB306F8E232(Local_45[iParam0 /*20*/].f_1, 0x00000001, 0x00000000);
						unk_0xAFF39FB306F8E232(Local_45[iParam0 /*20*/].f_1, 0x0000001C, 0x00000001);
						unk_0x9FC2699ACD081EC0(Local_45[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						iLocal_70[iParam0] = 0x00000000;
						if (func_55() == 0x00000000)
						{
							unk_0x262EF6C6306BEA6C(Local_45[iParam0 /*20*/].f_1, Local_45[iParam0 /*20*/].f_11, 0xFFFFFFFF, 0x00000001, 0x00000001);
						}
						unk_0x71199B01895C6202(Local_45[iParam0 /*20*/]);
						Local_45[iParam0 /*20*/].f_13 = 0x00000001;
						Local_45[iParam0 /*20*/].f_12 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (func_2(Local_45[iParam0 /*20*/].f_1))
			{
				if (iLocal_67)
				{
					func_99(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					unk_0xA3BF0AA5A2608191(Local_45[iParam0 /*20*/].f_1);
					unk_0xD5EF6A937E06E46F(Local_45[iParam0 /*20*/].f_1, 0x00000001, 0xFFFFFFFF, "DEFAULT_ACTION");
					unk_0xDD353D0E9C789D0E(&iLocal_87);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000000C, 0x00000002);
					unk_0x96167B03C5A77156(0x00000000, Local_45[iParam0 /*20*/].f_E, 1f, 0xFFFFFFFF, 3f, 0x00000000, 0x471C4000);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_87);
					unk_0x78ADC381772E3D54(Local_45[iParam0 /*20*/].f_1, iLocal_87);
					unk_0xF82EA857DA10E0CD(&iLocal_87);
					Local_45[iParam0 /*20*/].f_12 = 0x00000003;
				}
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(Local_45[iParam0 /*20*/].f_1, 0x00000000), 0x00000001) >= 250f)
				{
					Local_45[iParam0 /*20*/].f_12 = 0x00000005;
				}
			}
			else
			{
				Local_45[iParam0 /*20*/].f_12 = 0x00000005;
			}
			break;
		
		case 0x00000003:
			if (func_2(Local_45[iParam0 /*20*/].f_1))
			{
				func_99(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
				if (unk_0xD1960163A3042274(Local_45[iParam0 /*20*/].f_1, 0x0E763797) == 0x00000007 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(Local_45[iParam0 /*20*/].f_1, 0x00000000), 0x00000001) <= 5f)
				{
					unk_0x0C8C0C840C2D1AD2(Local_45[iParam0 /*20*/].f_1, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
					unk_0x6C3AE6E278DB3D0E(Local_45[iParam0 /*20*/].f_1, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0xEBE904C8FC460B66(Local_45[iParam0 /*20*/].f_1, 0x00000003);
					unk_0xFADC0A217229F6B5(Local_45[iParam0 /*20*/].f_1, 0x00000001);
					Local_45[iParam0 /*20*/].f_12 = 0x00000004;
				}
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(Local_45[iParam0 /*20*/].f_1, 0x00000000), 0x00000001) >= 250f)
				{
					Local_45[iParam0 /*20*/].f_12 = 0x00000005;
				}
			}
			else
			{
				Local_45[iParam0 /*20*/].f_12 = 0x00000005;
			}
			break;
		
		case 0x00000004:
			func_99(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
			if (!func_2(Local_45[iParam0 /*20*/].f_1))
			{
				Local_45[iParam0 /*20*/].f_12 = 0x00000005;
			}
			else
			{
				if (iLocal_70[iParam0] == 0x00000000)
				{
					if (!func_63() || func_55() == 0x00000000)
					{
						unk_0x262EF6C6306BEA6C(Local_45[iParam0 /*20*/].f_1, Local_45[iParam0 /*20*/].f_11, 0xFFFFFFFF, 0x00000000, 0x00000001);
						iLocal_70[iParam0] = 0x00000001;
					}
				}
				if (unk_0xD1960163A3042274(Local_45[iParam0 /*20*/].f_1, 0x2E85A751) == 0x00000007)
				{
					unk_0x6C3AE6E278DB3D0E(Local_45[iParam0 /*20*/].f_1, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				}
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(Local_45[iParam0 /*20*/].f_1, 0x00000000), 0x00000001) >= 75f)
				{
					Local_45[iParam0 /*20*/].f_12 = 0x00000005;
				}
			}
			break;
		
		case 0x00000005:
			func_98(&(Local_45[iParam0 /*20*/].f_2));
			if (unk_0xC844350D5D58C99A(Local_45[iParam0 /*20*/].f_1))
			{
				unk_0x6DAD7906B73F064D(&(Local_45[iParam0 /*20*/].f_1));
			}
			Local_45[iParam0 /*20*/].f_12 = 0x00000006;
			break;
		
		case 0x00000006:
			break;
	}
}

void func_98(int iParam0)
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

int func_99(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!iParam9 == 0xFFFFFFFF)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == 0xFFFFFFFF)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
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
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000002))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000002);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000003))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == 0xFFFFFFFF)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
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
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 0x00000007);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000003);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0x00000000;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_100()
{
	int iVar0;
	
	if (func_129())
	{
		func_127(&Global_786B);
	}
	else
	{
		func_127(&Global_786B);
	}
	func_101(0xFFFFFFFF);
	unk_0x51732B934211201A(iLocal_88);
	unk_0x51732B934211201A(iLocal_89);
	unk_0x51732B934211201A(iLocal_90);
	if (iLocal_61 == 0x00000000)
	{
		unk_0x38DC636F3D2D2FA8("RE9_SPOTTED");
	}
	if (unk_0xC844350D5D58C99A(iLocal_48))
	{
		unk_0x6DAD7906B73F064D(&iLocal_48);
		if (unk_0xE4EDC4B0E92C078B(iLocal_51))
		{
			unk_0x142CC44DB769B57E(&iLocal_51);
		}
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Local_45[iVar0 /*20*/].f_12 = 0x00000005;
		iVar0++;
	}
	unk_0x2952D66A502EA873(iLocal_82, 0x00000000);
	unk_0x206D561FBAA4D387();
	if (iLocal_83 != 0xFFFFFFFF)
	{
		unk_0xDDABC98CFF1A4C60(iLocal_83);
	}
	if (iLocal_84 != 0xFFFFFFFF)
	{
		unk_0xDDABC98CFF1A4C60(iLocal_84);
	}
	if (iLocal_85 != 0xFFFFFFFF)
	{
		unk_0xDDABC98CFF1A4C60(iLocal_85);
	}
	if (iLocal_86 != 0xFFFFFFFF)
	{
		unk_0xDDABC98CFF1A4C60(iLocal_86);
	}
	if (unk_0xDA8F5DDC86FE3C26("DEALERSHIP"))
	{
		if (!unk_0x8ED9A0095B69A728("DEALERSHIP"))
		{
			unk_0x2723524E448F4BDD("DEALERSHIP", 0x00000001);
		}
	}
	unk_0xE342F209E49C5314(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 0x00000001, 0x00000001);
	unk_0x10FAF14A60A0DBE1();
}

void func_101(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_32();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_129())
	{
		func_105(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_104(0x00007530);
		StringCopy(&cVar0, func_103(Global_1B40B, 0x00000001), 64);
		if (func_31(Global_1B40B) > 0x00000000)
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
	func_127(&Global_786B);
	Global_1B40C = 0x00000000;
	func_102(0xFFFFFFFF);
}

void func_102(int iParam0)
{
	Global_1B40B = iParam0;
}

char* func_103(int iParam0, bool bParam1)
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

void func_104(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_105(int iParam0)
{
	func_106(iParam0, 0x00000000, func_126(iParam0));
}

void func_106(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_125();
	func_116(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_115(iParam0, &uVar0);
	Var1 = { func_107(&uVar0) };
}

struct<16> func_107(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_114(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_112(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_111(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

int func_108(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_109(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_111(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_112(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_113(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_114(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

void func_115(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_111(*uParam0);
	iVar3 = func_114(*uParam0);
	iVar4 = func_113(*uParam0);
	iVar5 = func_112(*uParam0);
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
	iVar6 = func_124(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_124(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_117(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_117(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_123(uParam0, iParam1);
	func_122(uParam0, iParam2);
	func_121(uParam0, iParam3);
	func_120(uParam0, iParam5);
	func_119(uParam0, iParam4);
	func_118(uParam0, iParam6);
}

void func_118(var uParam0, int iParam1)
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

void func_119(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_124(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_122(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_124(int iParam0, int iParam1)
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

int func_125()
{
	var uVar0;
	
	func_123(&uVar0, unk_0x4460E481B9E33ADA());
	func_122(&uVar0, unk_0x8D199E381D262EEF());
	func_121(&uVar0, unk_0xD8A54335F18763BA());
	func_119(&uVar0, unk_0x972A296334C9D57B());
	func_120(&uVar0, unk_0x118229AD063C3C1D());
	func_118(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_126(int iParam0)
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

void func_127(var uParam0)
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

int func_128()
{
	if (!func_74(0x00000005))
	{
		return 0x00000001;
	}
	if (func_91())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_95())
		{
			return 0x00000000;
		}
	}
	if (func_85(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_129()
{
	if ((Global_1B40B == func_32() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_130()
{
	vLocal_57 = { -45.97f, -1095.58f, 25.42f };
	fLocal_58 = 105.42f;
	vLocal_59 = { -33.39f, -1101.79f, 25.42f };
	fLocal_60 = 184.5161f;
	Local_45[0x00000000 /*20*/].f_A = { -29.66f, -1103.44f, 26.42f };
	Local_45[0x00000000 /*20*/].f_D = 58.7988f;
	Local_45[0x00000000 /*20*/].f_E = { -35.19f, -1101.72f, 25.42f };
	Local_45[0x00000000 /*20*/] = joaat("g_m_m_armgoon_01");
	Local_45[0x00000000 /*20*/].f_11 = joaat("weapon_pistol");
	vLocal_80[0x00000000 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	fLocal_81[0x00000000] = 177.22f;
	Local_45[0x00000001 /*20*/].f_A = { -36.8032f, -1090.619f, 25.4223f };
	Local_45[0x00000001 /*20*/].f_D = 257.6675f;
	Local_45[0x00000001 /*20*/].f_E = { -34.66f, -1097.23f, 25.42f };
	Local_45[0x00000001 /*20*/] = joaat("g_m_y_armgoon_02");
	Local_45[0x00000001 /*20*/].f_11 = joaat("weapon_pistol");
	vLocal_80[0x00000001 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	fLocal_81[0x00000001] = 136.57f;
	unk_0xF63400DBE3303D26("GoonGroup", &iLocal_88);
	unk_0xF63400DBE3303D26("PlayerGroup", &iLocal_89);
	unk_0xF63400DBE3303D26("YetarianGroup", &iLocal_90);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_90, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, iLocal_90);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_88, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_88);
	unk_0xE342F209E49C5314(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 0x00000000, 0x00000001);
	iLocal_82 = unk_0x7D6CA5F52B3748BF(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0xA8468BD240EA0036(-34.2476f, -1107.283f, 24.9621f, -24.7924f, -1102.557f, 29.8287f, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
	if (iLocal_86 == 0xFFFFFFFF)
	{
		iLocal_86 = unk_0x544B74C043CE9948(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, 0x00000000, 0x00000007);
	}
	func_131(0x000000C4, 0x00000000);
	func_131(0x000000C5, 0x00000000);
	func_131(0x000000C2, 0x00000000);
	func_131(0x000000C3, 0x00000000);
	unk_0x523BCC9DC80CD82F(Local_45[0x00000000 /*20*/]);
	unk_0x523BCC9DC80CD82F(Local_45[0x00000001 /*20*/]);
	unk_0x523BCC9DC80CD82F(iLocal_74);
	unk_0x523BCC9DC80CD82F(joaat("bjxl"));
	unk_0x523BCC9DC80CD82F(joaat("tailgater"));
	unk_0x523BCC9DC80CD82F(joaat("baller2"));
	unk_0x6D0C93EE4FBA9307(Local_45[0x00000000 /*20*/].f_11, 0x0000001F, 0x00000000);
	unk_0x6D0C93EE4FBA9307(Local_45[0x00000001 /*20*/].f_11, 0x0000001F, 0x00000000);
	unk_0x3F423BF5B8125A50("cellphone@");
	unk_0x3F423BF5B8125A50("cellphone@str");
	unk_0x29398344B9E5B8A7("reyetarian_simeonoffice");
	unk_0x13896FDECC859926("RE9_SPOTTED");
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0x000000E2)
	{
		if (Global_12B4E)
		{
			iVar0 = Global_2537E2.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_1B416.f_1C58[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if ((((iParam1 == 0x00000004 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				Global_933A[iParam0] = iParam1;
			}
			else if (Global_12B4E)
			{
				Global_2537E2.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_1B416.f_1C58[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			func_133(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
			{
				func_132(iParam0);
			}
		}
	}
}

void func_132(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_9511.f_E4[(iParam0 / 0x00000020)], (iParam0 % 0x00000017)))
	{
		unk_0x5D96D8530B3D0904(&(Global_9511.f_E4[(iParam0 / 0x00000020)]), (iParam0 % 0x00000017));
		Global_9511[Global_9511.f_E3] = iParam0;
		Global_9511.f_E3++;
	}
}

void func_133(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_141())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_140(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000002))
	{
		func_138(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar1 = 0x00000000;
	bVar2 = 0x00000000;
	fVar4 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
	if ((unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] == 0x00000002) && fVar4 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		Global_9174[iParam0] = 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_9257[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if (fVar4 < 25f)
			{
				if (Global_181EC.f_157 == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						Global_181EC.f_157 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar5 = Global_181EC.f_157;
				iVar6 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar5 == iVar6 && iVar5 != 0x00000000)
				{
					unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					Global_933A[iParam0] = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				}
			}
			unk_0x0674E58A79778E99(&(Global_9257[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		iVar3 = Global_933A[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000000))
	{
		if (Global_1B416.f_2378)
		{
			iVar3 = func_135(iParam0);
		}
		else
		{
			iVar3 = 0x00000000;
		}
		if (func_24(0x0000000E))
		{
			iVar3 = 0x00000000;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000001) && unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) == 0x00000000)
	{
		if (func_134())
		{
			iVar3 = 0x00000000;
		}
		else
		{
			iVar3 = 0x00000001;
		}
	}
	else
	{
		iVar3 = Global_1B416.f_1C58[iParam0];
	}
	if (Global_941D[iParam0] != iVar3)
	{
		bVar1 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) || (Global_9174[iParam0] == 0x00000000 && Global_933A[iParam0] != 0x00000002))
		{
			bVar1 = 0x00000001;
		}
	}
	if (bVar1)
	{
		if (!Global_9161)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0x00000000, 0x00000000, 0x00000000);
			}
			switch (iVar3)
			{
				case 0x00000001:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000003))
					{
						bVar7 = 0x00000001;
					}
					else if (fVar4 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar9 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar8 != iVar9 || iVar8 == 0x00000000)
						{
							bVar7 = 0x00000001;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
						bVar2 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000002:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000000:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000001);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000003:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0x00000000, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000005:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000006:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x0674E58A79778E99(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			Global_941D[iParam0] = iVar3;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] != 0x00000002)
	{
		unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		func_132(iParam0);
		if (Global_9174[iParam0] < 0x00000002)
		{
			Global_9174[iParam0]++;
		}
	}
}

int func_134()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	switch (func_55())
	{
		case 0x00000000:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000042])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = func_55();
	if (func_136(iParam0))
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000031)
	{
		if (iVar0 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (func_25(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
			{
				return 0x00000000;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000000], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000000], iVar0))
				{
					if (iParam0 != 0x00000028)
					{
						return 0x00000000;
					}
					else
					{
						return 0x00000001;
					}
				}
			}
			break;
		
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000032:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000006], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000033:
		case 0x00000034:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000002], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_25(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000002], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			else if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000001], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_25(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000001], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000035:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000003], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_25(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000003], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_136(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 0x00000028 || iParam0 == 0x00000031) || iParam0 == 0x00000034)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_137(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

int func_137(int iParam0)
{
	return iParam0;
}

void func_138(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 0x00000002))
	{
		return;
	}
	iVar0 = func_125();
	iVar1 = func_114(iVar0);
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000086:
		case 0x000000C9:
		case 0x000000CA:
			if (func_139(iParam0))
			{
				if (iVar1 < 0x00000013)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000013)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000C7:
		case 0x000000C8:
		case 0x000000CB:
		case 0x000000CC:
			if (func_139(iParam0))
			{
				if (iVar1 < 0x00000012)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000012)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x0000008D:
		case 0x0000008E:
			if (func_139(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000) && !Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					if (iVar1 < 0x00000015)
					{
						if (iVar1 >= 0x00000007)
						{
							Global_1B416.f_1C58[iParam0] = 0x00000000;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					Global_1B416.f_1C58[iParam0] = 0x00000000;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000004])
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else if (unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000)
			{
				if (iVar1 >= 0x00000015)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else if (iVar1 < 0x00000007)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000091:
		case 0x00000092:
		case 0x0000008F:
		case 0x00000090:
			if (func_139(iParam0))
			{
				if (iVar1 < 0x00000014)
				{
					if (iVar1 >= 0x00000009)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000014)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000009)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000093:
		case 0x00000094:
			if (!func_139(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
			if (!func_139(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) > 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x0000009E:
		case 0x0000009F:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_139(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000A0:
		case 0x000000A1:
			if (unk_0x8A22C4C08282BF26(joaat("omega2")) == 0x00000000)
			{
				if (!func_139(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			if (!func_139(iParam0) && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000001A /*34*/].f_6) == 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else
			{
				return;
			}
			break;
		
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
			if (!func_139(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002B /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000BE:
		case 0x000000BF:
			if (!func_139(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000C1:
			if (!func_139(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000005D /*34*/].f_6) > 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000C6:
			if (!func_139(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000050:
			if (!func_139(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000008 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000000A /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CD:
		case 0x000000CE:
			if (!func_139(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002F /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CF:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_139(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
		case 0x000000D2:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D7:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000030 /*34*/].f_6) == 0x00000000)
			{
				if (!func_139(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000063:
		case 0x00000064:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000027 /*34*/].f_6) == 0x00000000)
			{
				if (!func_139(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D8:
			if (!func_139(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000D9:
		case 0x000000DA:
			if (!func_139(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000DE:
			if (func_139(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
	}
}

bool func_139(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_140(iParam0) };
	iVar1 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar1 == 0x00000001 || iVar1 == 0x00000004) || iVar1 == 0x00000002);
}

struct<7> func_140(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 0x6B918EA1;
			break;
		
		case 0x00000001:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 0x53A940AB;
			break;
		
		case 0x00000002:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 0x86EF4558;
			break;
		
		case 0x00000003:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 0x6B1985F9;
			break;
		
		case 0x00000004:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 0x05BB2ED2;
			break;
		
		case 0x00000005:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 0xEF3F0B86;
			break;
		
		case 0x00000006:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 0x0AEC2A1A;
			break;
		
		case 0x00000007:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 0x2D336EA8;
			break;
		
		case 0x00000008:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 0xC04458CF;
			break;
		
		case 0x00000009:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 0x75554302;
			break;
		
		case 0x0000000A:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 0x8039A343;
			break;
		
		case 0x0000000B:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 0xAC597B82;
			break;
		
		case 0x0000000C:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 0x8BC342BA;
			break;
		
		case 0x0000000D:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 0x49173D5F;
			break;
		
		case 0x0000000E:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 0x4104CC95;
			break;
		
		case 0x0000000F:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 0x357C3584;
			break;
		
		case 0x00000010:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x4152D190;
			break;
		
		case 0x00000011:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x2FCD2E89;
			break;
		
		case 0x00000012:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 0xF5FC937D;
			break;
		
		case 0x00000013:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 0x8C9DC0BD;
			break;
		
		case 0x00000014:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 0x70B93241;
			break;
		
		case 0x00000015:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 0x49B4E441;
			break;
		
		case 0x00000016:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 0x7610BDED;
			break;
		
		case 0x00000017:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 0x50A152BD;
			break;
		
		case 0x00000018:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 0xDE3B10AB;
			break;
		
		case 0x00000019:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 0x4C93B88A;
			break;
		
		case 0x0000001A:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 0x0F9B8B5A;
			break;
		
		case 0x0000001B:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 0x0CF90621;
			break;
		
		case 0x0000001C:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 0x6B5B357A;
			break;
		
		case 0x0000001D:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 0x817161A6;
			break;
		
		case 0x0000001E:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 0x4E3E0F3D;
			break;
		
		case 0x0000001F:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 0xDC882BD3;
			break;
		
		case 0x00000020:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 0xF030709F;
			break;
		
		case 0x00000021:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 0xB36A7A60;
			break;
		
		case 0x00000022:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 0x1204D709;
			break;
		
		case 0x00000023:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 0xD75B3EC1;
			break;
		
		case 0x00000024:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 0x83A1ACAC;
			break;
		
		case 0x00000025:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 0xA6CEF378;
			break;
		
		case 0x00000026:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8301B653;
			break;
		
		case 0x00000027:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x813232B0;
			break;
		
		case 0x00000028:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x899722D3;
			Var0.f_6 = 6.5f;
			break;
		
		case 0x00000029:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x2E413ABC;
			break;
		
		case 0x0000002A:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x29A1143B;
			break;
		
		case 0x0000002B:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1FE49E03;
			break;
		
		case 0x0000002C:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1C4AF98F;
			break;
		
		case 0x0000002D:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8A139784;
			break;
		
		case 0x0000002E:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x9AA652E9;
			break;
		
		case 0x0000002F:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x249850A4;
			break;
		
		case 0x00000030:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xEFC0E6F6;
			break;
		
		case 0x00000031:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xC1F88B66;
			break;
		
		case 0x00000032:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x479926FE;
			break;
		
		case 0x00000033:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x677EC742;
			break;
		
		case 0x00000034:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 0x4265A13E;
			Var0.f_6 = 12f;
			break;
		
		case 0x00000035:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xAED75F6A;
			break;
	}
	switch (iParam0)
	{
		case 0x00000036:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 0x90799222;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000037:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 0x459F7C6B;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000038:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 0x47E780FF;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000039:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 0xC21E9E89;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003A:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 0x478DA961;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003B:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 0x52E90A75;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003C:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 0xE4A12DDF;
			Var0.f_6 = 25f;
			break;
		
		case 0x000000E1:
			Var0.f_3 = 0xE684E276;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 0xEEC9CEC1;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003D:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 0xF0F6743C;
			break;
		
		case 0x0000003E:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 0xCEC320E2;
			break;
		
		case 0x0000003F:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 0x2D865E67;
			break;
		
		case 0x00000040:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 0xCBDAD417;
			break;
		
		case 0x00000041:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 0xA7BC7A3B;
			break;
		
		case 0x00000042:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 0x38968F6D;
			break;
		
		case 0x00000043:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 0x0CA5CE57;
			break;
		
		case 0x00000044:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 0xF8762600;
			break;
		
		case 0x00000045:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 0x693E01A8;
			break;
		
		case 0x00000046:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 0x2F397905;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000047:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 0x2192DDB8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000048:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 0xD4AAF76D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000049:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 0x0A9F8B6B;
			break;
		
		case 0x0000004A:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 0x6E67D2FA;
			break;
		
		case 0x0000004B:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 0xDE5262E2;
			break;
		
		case 0x0000004C:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 0x621E986A;
			break;
		
		case 0x0000004D:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 0x0C2FEC8E;
			break;
		
		case 0x0000004E:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 0x7A03D0CA;
			break;
		
		case 0x0000004F:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 0x548188CD;
			break;
		
		case 0x00000050:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 0xF9A7537E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000051:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 0x6DB3F686;
			break;
		
		case 0x00000052:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 0x526C3FF3;
			break;
		
		case 0x00000053:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 0x0DDC38EF;
			break;
		
		case 0x00000054:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 0x4B88A611;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000055:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 0x8EBCAB6D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000056:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 0x7BDA4229;
			break;
		
		case 0x00000057:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 0x82B4D16A;
			break;
		
		case 0x00000058:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 0x8E67E744;
			break;
		
		case 0x00000059:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 0x94E375C7;
			break;
		
		case 0x0000005A:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 0xFC4A5DE1;
			break;
		
		case 0x0000005B:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 0x990D333D;
			break;
		
		case 0x0000005C:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 0xDE752237;
			break;
		
		case 0x0000005D:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 0x75CDECBF;
			break;
		
		case 0x0000005E:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 0x4FEEAB87;
			break;
		
		case 0x0000005F:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 0x9EC1C92C;
			break;
		
		case 0x00000060:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 0x956610D7;
			break;
		
		case 0x00000061:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 0x92D8C222;
			break;
		
		case 0x00000062:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 0x39739866;
			break;
		
		case 0x00000063:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 0x69AF302C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000064:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 0xB099BE68;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000065:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 0x9402ADFE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000066:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 0x5FDFC5B9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000067:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 0xA936772C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000068:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 0x3842153D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000069:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 0xFAB0F874;
			break;
		
		case 0x0000006A:
			Var0.f_3 = 0x1C8F29BC;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 0xC8D61D80;
			break;
		
		case 0x0000006B:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006C:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006D:
			Var0.f_3 = 0xB6A8EEEE;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 0x5BB47EBE;
			break;
		
		case 0x0000006E:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 0xC6A92236;
			break;
		
		case 0x0000006F:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 0x965A35F0;
			break;
		
		case 0x00000070:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 0xFD3C6106;
			break;
		
		case 0x00000071:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 0xEAA4BBD7;
			break;
		
		case 0x00000072:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 0xB6369857;
			break;
		
		case 0x00000073:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 0x58A7877F;
			break;
		
		case 0x00000074:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 0xF42192E5;
			break;
		
		case 0x00000075:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 0xCA87C509;
			break;
		
		case 0x00000076:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 0xCC794C91;
			break;
		
		case 0x00000077:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 0xF3937748;
			break;
		
		case 0x00000078:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 0xC45498DB;
			break;
		
		case 0x00000079:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 0x2D1D4AFB;
			break;
		
		case 0x0000007A:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 0x1C6E29AD;
			break;
		
		case 0x0000007B:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007C:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007D:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 0x0A21772D;
			break;
		
		case 0x0000007E:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 0x128D0804;
			break;
		
		case 0x00000080:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 0xA2D4904F;
			break;
		
		case 0x00000081:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 0x2D3FA523;
			break;
		
		case 0x00000082:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 0xFAF82BB5;
			break;
		
		case 0x00000083:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 0xE477FEB5;
			break;
		
		case 0x0000007F:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 0x4B0BD273;
			break;
		
		case 0x00000084:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 0xCB4E72F0;
			break;
		
		case 0x00000085:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 0x0E87D246;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000086:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 0x2A908A2B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000087:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 0x636D4AE0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000088:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 0x5264F117;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000089:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 0xC65FF0DC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008A:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 0x84B160CC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008B:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 0x99AFC840;
			break;
		
		case 0x0000008C:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 0x7FF114C7;
			break;
		
		case 0x0000008D:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 0x6FC17308;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008E:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 0x8AE0294D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000091:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 0x74523DE8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000092:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 0xE649A1DD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008F:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 0xEE7A4B56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000090:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 0xD13290C7;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000094:
			Var0.f_3 = 0xF2C06AFF;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 0xEA2D16DE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000093:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 0x1A465DD3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000095:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 0xDCEC4675;
			break;
		
		case 0x00000096:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 0x6C36650B;
			break;
		
		case 0x00000097:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 0x5029B9A4;
			break;
		
		case 0x00000098:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 0xECDF96A9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000099:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 0x5A1B7123;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009A:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 0xA5896609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009B:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 0xBED718A0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009C:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 0x715EF4EC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009D:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 0xE57D5D27;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009E:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 0x18156DFA;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009F:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 0xAB8314D3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A0:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 0xADFA9E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A1:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 0x1B447897;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A2:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000A3:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 0xA7477017;
			break;
		
		case 0x000000A6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 0xE187E49B;
			break;
		
		case 0x000000A7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 0xF12F21CD;
			break;
		
		case 0x000000A8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 0x3AF9B555;
			break;
		
		case 0x000000A9:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 0x78891D35;
			break;
		
		case 0x000000AA:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 0x26BB7997;
			break;
		
		case 0x000000AB:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 0x2008EB12;
			break;
		
		case 0x000000AC:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 0x42D7B0B3;
			break;
		
		case 0x000000AD:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xAA5350AA;
			break;
		
		case 0x000000AE:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xC7980B3B;
			break;
		
		case 0x000000AF:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 0x70D7184A;
			break;
		
		case 0x000000B0:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 0x19FA6A8E;
			break;
		
		case 0x000000B1:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 0x3889169A;
			break;
		
		case 0x000000B2:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 0x94E84F57;
			break;
		
		case 0x000000B3:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 0xBB245373;
			break;
		
		case 0x000000B4:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 0x2EA3BAA4;
			break;
		
		case 0x000000B5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 0xB8CDD26F;
			break;
		
		case 0x000000B6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 0x810F62F3;
			break;
		
		case 0x000000B7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000B8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A4:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 0x58AC90B5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000B9:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 0x5B2F1453;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000BA:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 0x35E72BCB;
			break;
		
		case 0x000000BB:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 0xD096E0F4;
			break;
		
		case 0x000000BC:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 0xA672520A;
			break;
		
		case 0x000000BD:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 0x89231774;
			break;
		
		case 0x000000BE:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 0xDAF08A77;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000BF:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 0x3CB64E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C0:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 0x19261549;
			break;
		
		case 0x000000C1:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 0xB0A21F8A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
	}
	switch (iParam0)
	{
		case 0x000000C4:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 0xEE8704E3;
			break;
		
		case 0x000000C5:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 0x1E346455;
			break;
		
		case 0x000000C2:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 0x592B3B2A;
			break;
		
		case 0x000000C3:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 0x90F3AAD6;
			break;
		
		case 0x000000C6:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 0x87A9D9D8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C7:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 0xFA66AD40;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C8:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 0x27CC080E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C9:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 0x6FDCB756;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CA:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 0x82105BAD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CD:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 0x7A01AE56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CE:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 0x48084A64;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CF:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 0x76668DA5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D0:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 0xD4EAF676;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D1:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 0x0C2D650A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D2:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 0xECEB0B54;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D3:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 0x03E33904;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D4:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 0xC9297F46;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D5:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 0xFC8465FF;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D6:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 0x8859D53B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D7:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 0x18F5F685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D8:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 0x64147F59;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D9:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 0x1891A5FC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DA:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 0xC130F73C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DB:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 0xFCD07A05;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DC:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 0x4F829F6C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DD:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 0xFD826383;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DE:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 0x6850B91E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DF:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 0x630892AE;
			break;
		
		case 0x000000CB:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 0x81DEA14E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CC:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 0xFB9594BE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000E0:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 0x9C748513;
			break;
	}
	return Var0;
}

int func_141()
{
	if ((func_12() == 0xFFFFFFFF || func_12() == 0x000003E7) && !func_142() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_142()
{
	return Global_7831;
}

void func_143(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_32();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_102(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_144();
}

void func_144()
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

int func_145(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_32();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_171())
		{
			return 0x00000000;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_95())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_7(0x00000000))
		{
			return 0x00000000;
		}
		if (func_91())
		{
			return 0x00000000;
		}
		if (func_170())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_25(func_55()))
		{
			if (func_85(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_169(iParam1))
		{
			return 0x00000000;
		}
		if (func_25(func_55()))
		{
			if (func_168(func_55()) == 0x00000004 || func_168(func_55()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_25(func_55()))
		{
			if (!func_167(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_166(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_165())
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
		if (!func_156(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_74(0x00000005))
		{
			return 0x00000000;
		}
		if (func_155(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_155(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_169(0x0000001E) && !func_155(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_25(func_55()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_154(iVar4))
				{
					if (func_147(iVar2))
					{
						if (!func_146(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_55() != iVar2)
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

bool func_146(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_148(iVar0);
}

int func_148(int iParam0)
{
	return func_149(iParam0, 0x00000001);
}

int func_149(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_154(iParam0))
	{
		return 0x00000000;
	}
	func_150(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_151(func_125(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_153(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_111(iParam0) - func_111(iParam1));
		iVar5 = (func_114(iParam0) - func_114(iParam1));
		iVar6 = (func_113(iParam0) - func_113(iParam1));
		iVar7 = (func_112(iParam0) - func_112(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_111(iParam1) - func_111(iParam0));
		iVar5 = (func_114(iParam1) - func_114(iParam0));
		iVar6 = (func_113(iParam1) - func_113(iParam0));
		iVar7 = (func_112(iParam1) - func_112(iParam0));
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
		iVar4 = (iVar4 + func_124(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_152(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_152(float fParam0, float fParam1, float fParam2)
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

int func_153(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_154(iParam1) || !func_154(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_112(iParam0);
	iVar1 = func_112(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_154(int iParam0)
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
	iVar0 = func_112(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_113(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_114(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_111(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_124(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_155(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_55();
				if (!func_25(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_164()) || Global_1B05D) || Global_7832) || func_163()) || func_52(0x00000008, 0xFFFFFFFF)) || func_162()) || func_161()) || func_160()) || func_159()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_164()) || Global_7832) || func_163()) || func_52(0x00000008, 0xFFFFFFFF)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_164()) || Global_1B05D) || Global_7832) || func_163()) || func_52(0x00000008, 0xFFFFFFFF)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_164()) || Global_1B05D) || Global_7832) || func_163()) || func_52(0x00000008, 0xFFFFFFFF)) || func_162()) || func_161()) || func_159()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_164() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_52(0x00000008, 0xFFFFFFFF)) || func_159()) || func_158()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_52(0x00000008, 0xFFFFFFFF) || func_162()) || func_161()) || func_158()) || func_157())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_164()) || Global_7832) || func_163()) || func_52(0x00000008, 0xFFFFFFFF)) || func_161()) || func_160()) || func_159()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_164()) || func_161()) || Global_1B05D) || Global_7832) || func_163()) || Global_A664) || func_52(0x00000008, 0xFFFFFFFF)) || func_160()) || func_158()) || func_159()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_164()) || Global_1B05D) || Global_7832) || func_163()) || func_52(0x00000008, 0xFFFFFFFF)) || func_160()) || func_158()) || func_162()) || func_161()) || func_159())
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

var func_157()
{
	return Global_181DF.f_1;
}

int func_158()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_159()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_160()
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

bool func_161()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_162()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_163()
{
	return Global_14086D;
}

int func_164()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_165()
{
	func_50();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_166(int iParam0)
{
	return func_153(func_125(), iParam0);
}

int func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_55();
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

int func_168(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_169(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_171())
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

int func_170()
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

int func_171()
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

void func_172()
{
	func_100();
}

void func_173(vector3 vParam0)
{
	if (SYSTEM::VDIST(vParam0, vParam0) > 1f)
	{
	}
}

