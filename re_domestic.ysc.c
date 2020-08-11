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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<6> Local_64 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_65 = { 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_84[2] = { 0, 0 };
	int iLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	int iLocal_91[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	var uLocal_114 = 16;
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
	var uLocal_257 = 0;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	struct<2> Local_279 = { 0, 5 } ;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 5;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
#endregion

void __EntryFunction__()
{
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
	iLocal_19 = 0x00000003;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_45 = -1f;
	StringCopy(&Local_64, "", 24);
	vLocal_90 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_94 = 0xFFFFFFFF;
	vLocal_49 = { ScriptParam_279.f_1[0x00000000 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
		{
			if (unk_0x16102BEDC7435774(iLocal_54))
			{
				unk_0x0A94A109271BE75A(iLocal_54);
			}
		}
		func_228();
	}
	if (func_227(0x00000100, 0x00000001))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_185(vLocal_49, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000))
	{
		func_182(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if ((unk_0x338D6FF72D84D90F() || iLocal_47 == 0x00000004) || iLocal_60 > 0x00000012)
		{
			if (!func_181())
			{
				if (func_180())
				{
					func_228();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_DO", 0x00000000);
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				switch (iLocal_46)
				{
					case 0x00000000:
						if (!bLocal_48)
						{
							if (func_168())
							{
								func_228();
							}
							if (!bLocal_55)
							{
								func_167();
							}
							if (bLocal_55)
							{
								func_166();
							}
						}
						if (bLocal_48)
						{
							iLocal_46 = 0x00000001;
						}
						break;
					
					case 0x00000001:
						func_158();
						if (iLocal_61 > 0x00000003)
						{
							if (!iLocal_74 && !func_157())
							{
								func_156(&uLocal_114, "REDO2AU", "REDO2_THK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								iLocal_74 = 0x00000001;
							}
						}
						switch (iLocal_47)
						{
							case 0x00000000:
								func_152();
								iLocal_47 = 0x00000001;
								break;
							
							case 0x00000001:
								if (!iLocal_81)
								{
									if ((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0x00000000, 0x00000001, 0x00000000) && unk_0x8E28E832BEAC3DCE(vLocal_86, 1f)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_86, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
									{
										func_151();
										func_142(0x00000001);
										iLocal_81 = 0x00000001;
									}
								}
								else
								{
									if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_86, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
									{
										func_140();
									}
									if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
									{
										if (!unk_0x5A91F08DF773C39D(iLocal_54, vLocal_57, 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
										{
											iLocal_47 = 0x0000000B;
										}
									}
								}
								break;
							
							case 0x00000003:
								func_138();
								if (iLocal_60 > 0x00000012)
								{
									func_137();
								}
								else if (!func_157())
								{
									func_137();
								}
								break;
							
							case 0x00000007:
								func_138();
								func_133();
								break;
							
							case 0x00000004:
								func_138();
								func_81();
								if (func_80(vLocal_88))
								{
									func_57(0x00000000);
									func_55();
									SYSTEM::WAIT(0x00000000);
									func_156(&uLocal_114, "REDO2AU", "REDO2_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								if (func_53())
								{
									func_57(0x00000000);
									func_55();
									SYSTEM::WAIT(0x00000000);
									func_156(&uLocal_114, "REDO2AU", "REDO2_NEAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								if (!iLocal_71)
								{
									if (func_52())
									{
										if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_88, 23f, 60f, 20f, 0x00000000, 0x00000001, 0x00000000))
										{
											func_57(0x00000000);
											func_55();
											SYSTEM::WAIT(0x00000000);
											if (!func_157())
											{
												func_156(&uLocal_114, "REDO2AU", "REDO2_DRP", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
												iLocal_71 = 0x00000001;
											}
										}
									}
								}
								break;
							
							case 0x0000000B:
								func_51();
								break;
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "f_attack_end", 0x00000003))
							{
								func_49(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000018);
							}
						}
						if ((func_48() && !func_47()) && iLocal_46 != 0x00000002)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_54, vLocal_90, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (!unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
									{
										iLocal_91[0x00000008] = unk_0x7707E48765093646(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 0x00000001, 0x00000001, 0x00000000);
										unk_0x9F528B1B53FBC5D9(iLocal_91[0x00000008], iLocal_54, unk_0x4A089F2B762B8D33(iLocal_54, 0x0000DEAD), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
									}
									func_46(0x00000000);
									SYSTEM::WAIT(0x00000000);
									func_55();
									iLocal_46 = 0x00000002;
								}
							}
						}
						if (func_45())
						{
							func_51();
						}
						break;
					
					case 0x00000002:
						if (func_44())
						{
							if (unk_0xC844350D5D58C99A(iLocal_54))
							{
								unk_0xEBA53F35D0085654(&iLocal_54);
							}
							func_14();
						}
						break;
					
					case 0x00000003:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_228();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_109 && !iLocal_108)
	{
		func_3(0x00000000);
		if (Global_7921)
		{
			unk_0xC92DB9682A650680("AC_STOP");
		}
		func_2();
		if (unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
		{
			iLocal_92 = unk_0x2D7B5CDDF12654D2(joaat("pickup_weapon_golfclub"), unk_0x68F4C0EC296D3901(iLocal_91[0x00000008], 0x00000001), unk_0x835730A2D89F6093(iLocal_91[0x00000008], 0x00000002) + Vector(2.8157f, -159.5768f, -14.1956f), 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
			unk_0xF690C84DADBB3551(&(iLocal_91[0x00000008]));
		}
		unk_0xE342F209E49C5314(vLocal_57 - Vector(10f, 10f, 10f), vLocal_57 + Vector(10f, 10f, 10f), 0x00000001, 0x00000001);
		unk_0x0E2400AB9174FA81(0x000000FF, iLocal_111, 0x6F0783F5);
		if (bLocal_55)
		{
			unk_0x71199B01895C6202(iLocal_78);
			unk_0x71199B01895C6202(iLocal_79);
		}
		if (unk_0xC844350D5D58C99A(iLocal_53))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
			{
				unk_0x11AD11297DC58CC7(iLocal_53, 0x00000000);
			}
			unk_0x6DAD7906B73F064D(&iLocal_53);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_85))
		{
			unk_0x142CC44DB769B57E(&iLocal_85);
		}
		if (unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_84[0x00000000]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (!unk_0x405E212DDE472467(iLocal_54, 0x00000000))
				{
					unk_0x61F0DE0226FF7252(iLocal_54);
				}
				unk_0x0A94A109271BE75A(iLocal_54);
				unk_0x11AD11297DC58CC7(iLocal_54, 0x00000000);
				unk_0x25C5402CC10F76CD(iLocal_54, 0x00000001);
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xC844350D5D58C99A(iLocal_91[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_91[iVar0], 0x00000001, 0x00000001);
			}
			iVar0++;
		}
		unk_0x842F1AEB2FCC00B7(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0x00000001);
		unk_0xB547E3FFEB27073E();
		iLocal_108 = 0x00000001;
	}
	if ((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_57, 80f, 80f, 80f, 0x00000000, 0x00000001, 0x00000000) || unk_0xEB751B41BC4080D4(iLocal_92)) || !(unk_0xC844350D5D58C99A(iLocal_91[0x00000008]) && !unk_0x762119754C50557A(iLocal_92)))
	{
		func_228();
	}
}

void func_2()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 0x00000002, 0x00000001))
		{
			func_12(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_13(iParam0, 0x00000002, 0x00000001))
	{
		func_5(iParam0, 0x00000002, 0x00000001);
	}
}

void func_5(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0x00000000)
		{
			iVar0 = func_9(func_10(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_6(func_10(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
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

int func_10(int iParam0)
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

int func_11()
{
	return Global_7830;
}

void func_12(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0x00000000)
		{
			iVar0 = func_9(func_10(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_6(func_10(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)
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
		if (func_11() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_9(func_10(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_14()
{
	while (func_157())
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!func_43())
	{
		SYSTEM::WAIT(0x00000000);
	}
	Global_1B416.f_4889.f_17F = func_42() + 1;
	func_18(0xFFFFFFFF, 0x00000000);
	func_15();
	iLocal_46 = 0x00000003;
}

void func_15()
{
	func_16();
}

int func_16()
{
	if (func_17(0x00000000))
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

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_40();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(0x00000033))
		{
			func_27("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_30(), 0x00000000, 0x0000008A, 0x00000000);
			func_26(0x00000033);
		}
		if (func_25(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_24(iParam0, iParam1) != 0x00000142)
		{
			func_20(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_19(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_19(0x00000007);
			}
			else
			{
				func_19(0x00000001);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_23((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_21();
	}
}

void func_21()
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
		func_22(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_11() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_16();
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0, bool bParam1, int iParam2, int iParam3)
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

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_35(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_34(unk_0x16F2683693E537C9());
			if (func_33(iVar0) && (!func_32(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_33(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_32(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_36(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42()
{
	return (Global_1B416.f_271B.f_15 + Global_1B416.f_4889.f_17C);
}

int func_43()
{
	return 0x00000001;
}

int func_44()
{
	if (Global_791E)
	{
		func_19(0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_45()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_46(int iParam0)
{
	Global_5538 = iParam0;
}

int func_47()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_48()
{
	return Global_791D;
}

void func_49(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_50(iParam3), 0x00000000);
}

int func_50(int iParam0)
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

void func_51()
{
	iLocal_46 = 0x00000003;
}

int func_52()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iLocal_110 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xDF1306B443CD3D15(iLocal_110, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (unk_0x82CCEAB29E9451DD(iLocal_54, iLocal_110))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_53()
{
	if (func_54() == 0x00000002)
	{
		if (func_48())
		{
			if (unk_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000), 0x00000001) < 400f)
			{
				if (!Global_7922)
				{
					unk_0xC92DB9682A650680("AC_EN_ROUTE_CULT");
					Global_7922 = 0x00000001;
					if (!Global_7921)
					{
						Global_7921 = 0x00000001;
						return 0x00000001;
					}
				}
			}
			else if (Global_7922)
			{
				unk_0xC92DB9682A650680("AC_LEFT_AREA");
				Global_7922 = 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_54()
{
	func_31();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_55()
{
	Global_4CD7 = 0x00000000;
	func_56();
}

void func_56()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_63)
		{
			if (func_64(&uLocal_114, "REDO2AU", &Local_65, &Local_64, 0x00000008, 0x00000000, 0x00000000))
			{
				iLocal_63 = 0x00000000;
			}
		}
	}
	else if ((!iLocal_63 && unk_0x25037C66EB32B076()) && !func_62())
	{
		Local_65 = { func_61() };
		Local_64 = { func_60() };
		func_58();
		iLocal_63 = 0x00000001;
	}
}

void func_58()
{
	Global_4CD7 = 0x00000000;
	func_59();
}

void func_59()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0x00000000;
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		if (iVar1 > 0xFFFFFFFF)
		{
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_61()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_62()
{
	if (((((((func_63("REDO2_DRP") || func_63("REDO2_UV")) || func_63("REDO2_UV2")) || func_63("REDO2_CULT")) || func_63("REDO2_NEAR")) || func_63("REDO2_GETOUT")) || func_63("REDO2_JACK")) || func_63("REDO2_SHOOT"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_63(char* sParam0)
{
	var uVar0;
	
	if (func_157())
	{
		MemCopy(&uVar0, {func_61()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000001;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_65(sParam2, iParam4, 0x00000000);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
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
					func_78();
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
		if (func_77(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_76();
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
				func_75();
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
				if (func_74())
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
			if (func_73())
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
			func_72();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_71();
		func_66();
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
		func_78();
	}
	return 0x00000000;
}

void func_66()
{
	if (!func_67())
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

int func_67()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_70())
	{
		return 0x00000000;
	}
	if (func_68(unk_0xD803B885F5E47A62()))
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

bool func_68(int iParam0)
{
	return func_69(iParam0, 0x00000014);
}

bool func_69(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_70()
{
	return 0xFFFFFFFF;
}

void func_71()
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

void func_72()
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

int func_73()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_74()
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

void func_75()
{
	if (func_32(0x0000000E))
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
		Global_4C1E = func_54();
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

void func_76()
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

bool func_77(int iParam0, int iParam1)
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

void func_78()
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

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_80(vector3 vParam0)
{
	if (func_54() == 0x00000002)
	{
		if (func_48() && !Global_7920)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0);
			}
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0) > (fLocal_45 + 200f) || unk_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000), 0x00000001) < 400f)
			{
				Global_7920 = 0x00000001;
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_81()
{
	switch (iLocal_62)
	{
		case 0x00000000:
			if (iLocal_60 > 0x00000012)
			{
				iLocal_62++;
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				unk_0xCAF7AE54F764D5AA(iLocal_54, 1f);
				if (unk_0x12DE711B1C681E9E(iLocal_54, unk_0x16F2683693E537C9(), 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (iLocal_60 < 0x00000013)
					{
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_LV", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_62++;
						}
					}
					else
					{
						iLocal_62++;
					}
				}
			}
			break;
		
		case 0x00000001:
			func_129();
			if (unk_0xC844350D5D58C99A(iLocal_54))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
				{
					if (unk_0xDF1306B443CD3D15(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000))
					{
						if (unk_0x81A5359F25512A04(iLocal_54))
						{
							unk_0xF690C84DADBB3551(&(iLocal_91[0x00000008]));
						}
					}
					if (unk_0x0E0E6175453415CB(iLocal_54))
					{
						func_127();
						func_121();
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_TO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							SYSTEM::SETTIMERB(0x00000000);
							iLocal_62++;
						}
					}
					else
					{
						unk_0xCAF7AE54F764D5AA(iLocal_54, 1f);
					}
				}
			}
			break;
		
		case 0x00000002:
			func_121();
			func_120();
			func_129();
			func_119();
			if (SYSTEM::TIMERB() > 0x000005DC)
			{
				func_118();
			}
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_88, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0xC6436D1B1063CD1D();
			}
			if (unk_0xC844350D5D58C99A(iLocal_54))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
				{
					if (unk_0x5A91F08DF773C39D(iLocal_54, vLocal_88, Global_13, 0x00000001, 0x00000001, 0x00000000) && func_117(0x00000001, 0x00000000, 0x00000001))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_82))
						{
							unk_0x142CC44DB769B57E(&iLocal_82);
						}
						if (unk_0xE4EDC4B0E92C078B(iLocal_83))
						{
							unk_0x142CC44DB769B57E(&iLocal_83);
						}
						if (unk_0x405E212DDE472467(iLocal_54, 0x00000000))
						{
							unk_0xE0C0351D5B931E37(unk_0x6937EA2286828455(iLocal_54, 0x00000000), 10.5f, 0x00000003, 0x00000000);
							iLocal_62++;
						}
						else
						{
							iLocal_62 = 0x00000004;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			func_116();
			if (bLocal_104)
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				func_14();
			}
			break;
		
		case 0x00000004:
			func_82();
			if (bLocal_104)
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				func_14();
			}
			break;
	}
}

void func_82()
{
	switch (iLocal_102)
	{
		case 0x00000000:
			unk_0xC6436D1B1063CD1D();
			func_58();
			if (func_156(&uLocal_114, "REDO2AU", "REDO2_BY", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_102++;
			}
			break;
		
		case 0x00000001:
			iLocal_102++;
			break;
		
		case 0x00000002:
			unk_0xC6436D1B1063CD1D();
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				unk_0x0A94A109271BE75A(iLocal_54);
				unk_0xDD353D0E9C789D0E(&iLocal_77);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000800, 0x00000002);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000FA0);
				unk_0x96167B03C5A77156(0x00000000, vLocal_89, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 311.3569f);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(iLocal_77);
				unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
				unk_0xF82EA857DA10E0CD(&iLocal_77);
				unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
				iLocal_103 = unk_0x1C0640BA9A7327B3() + 4000;
				iLocal_102++;
			}
			break;
		
		case 0x00000003:
			if (iLocal_103 < unk_0x1C0640BA9A7327B3())
			{
				unk_0xC6436D1B1063CD1D();
				iLocal_102++;
			}
			break;
		
		case 0x00000004:
			if (!func_157())
			{
				func_115("DOM_GOLF", 0xFFFFFFFF);
				func_114(&(Global_1B416.f_4A1E), 0x00000010);
				if (func_54() == 0x00000000)
				{
					func_113(&(Global_1B416.f_4A1E.f_18), 0x00000001);
				}
				else if (func_54() == 0x00000001)
				{
					func_113(&(Global_1B416.f_4A1E.f_18), 0x00000004);
				}
				else if (func_54() == 0x00000002)
				{
					func_113(&(Global_1B416.f_4A1E.f_18), 0x00000002);
				}
				func_83(func_54(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_102++;
			}
			break;
		
		case 0x00000005:
			if (SYSTEM::TIMERA() > 0x00001388)
			{
				bLocal_104 = 0x00000001;
			}
			break;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_112(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_112(iParam0) == 0x00000004)
	{
		return;
	}
	func_84(func_112(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
	if (bParam3)
	{
		iVar0 = 0x00000000;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 0x00000001);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_111();
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
					func_110(0x00000063, 0x00000001);
					func_109(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_109(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_109(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_95(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_91(0x00000005))
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
							func_109(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_109(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_109(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_91(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_109(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_109(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_109(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_109(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_109(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_109(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_109(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_109(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_109(joaat("sp2_money_spent_property"), iParam3);
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
									func_109(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_109(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_109(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_109(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_109(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_109(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_91(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_109(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_109(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_109(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_109(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_109(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_109(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_110(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_110(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_110(0x00000060, iParam3);
					break;
			}
			func_110(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_87(iVar1);
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
					func_109(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_109(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_109(joaat("sp2_total_cash_earned"), iParam3);
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
	func_86(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_85(0x00000000);
	}
	return 0x00000001;
}

void func_85(bool bParam0)
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

void func_86(int iParam0)
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

void func_87(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_23(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_23(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_23(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_23(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_6(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_6(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_6(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_6(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_6(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_6(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_89() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_89() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_88(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_88(int iParam0)
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

int func_89()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_90(int iParam0)
{
	func_110(0x0000005D, iParam0);
	func_110(0x0000001D, iParam0);
	func_110(0x0000001E, iParam0);
}

bool func_91(int iParam0)
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
		return func_92(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_92(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_92(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_92(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_9(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_9(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_9(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_9(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_9(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_9(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_89() /*10930*/].f_181E.f_A, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_8();
	}
	iVar1 = func_94(iParam0, iParam1);
	uVar2 = func_93(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_93(int iParam0)
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

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_8();
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

int func_95(bool bParam0)
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
		func_22(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_96(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_97(iParam0, iParam1);
}

int func_97(int iParam0, int iParam1)
{
	if (func_32(0x0000000E) && !func_108(iParam0))
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
	if (func_107(&Global_4127F1))
	{
		if (func_105(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_98(&Global_4127F1, iParam0))
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

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_32(0x0000000E) && !func_108(iParam1))
	{
		return 0x00000000;
	}
	if (func_105(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_104(uParam0) < 0f)
	{
		func_103(uParam0, 0x00000000);
	}
	func_101(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_99(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_99(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_32(0x0000000E) && !func_108(iParam1))
	{
		return 0x00000000;
	}
	if (func_105(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_104(uParam0) < 0f)
	{
		func_103(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_100(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_101(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_102(uParam0, iVar0);
		iVar0++;
	}
	func_103(uParam0, (Global_4127F0 - 0.5f));
}

void func_102(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_103(var uParam0, float fParam1)
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

float func_104(var uParam0)
{
	return uParam0->f_50;
}

bool func_105(var uParam0, int iParam1)
{
	return func_106(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_106(var uParam0, int iParam1)
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

bool func_107(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_108(int iParam0)
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

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_110(int iParam0, int iParam1)
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

void func_111()
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

int func_112(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	uParam0->f_17 = (uParam0->f_17 || iParam1);
}

void func_115(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_116()
{
	switch (iLocal_102)
	{
		case 0x00000000:
			unk_0xC6436D1B1063CD1D();
			func_58();
			if (func_156(&uLocal_114, "REDO2AU", "REDO2_BY", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_102++;
			}
			break;
		
		case 0x00000001:
			unk_0xC6436D1B1063CD1D();
			iLocal_102++;
			break;
		
		case 0x00000002:
			unk_0xC6436D1B1063CD1D();
			iLocal_102++;
			break;
		
		case 0x00000003:
			unk_0xC6436D1B1063CD1D();
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				unk_0x0A94A109271BE75A(iLocal_54);
				unk_0xDD353D0E9C789D0E(&iLocal_77);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000800, 0x00000002);
				unk_0x78A77CDD64392938(0x00000000, 0x0000012C);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000FA0);
				unk_0x96167B03C5A77156(0x00000000, vLocal_89, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 311.3569f);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(iLocal_77);
				unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
				unk_0xF82EA857DA10E0CD(&iLocal_77);
				unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
				if (!unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
				{
					iLocal_91[0x00000008] = unk_0x7707E48765093646(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 0x00000001, 0x00000001, 0x00000000);
					unk_0x9F528B1B53FBC5D9(iLocal_91[0x00000008], iLocal_54, unk_0x4A089F2B762B8D33(iLocal_54, 0x0000DEAD), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				}
				iLocal_103 = unk_0x1C0640BA9A7327B3() + 1000;
				iLocal_102++;
			}
			break;
		
		case 0x00000004:
			unk_0xC6436D1B1063CD1D();
			if (iLocal_103 < unk_0x1C0640BA9A7327B3())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					iLocal_103 = unk_0x1C0640BA9A7327B3() + 3000;
					iLocal_102++;
				}
			}
			break;
		
		case 0x00000005:
			if (iLocal_103 < unk_0x1C0640BA9A7327B3())
			{
				unk_0xC6436D1B1063CD1D();
				iLocal_102++;
			}
			break;
		
		case 0x00000006:
			if (!func_157())
			{
				func_115("DOM_GOLF", 0xFFFFFFFF);
				func_114(&(Global_1B416.f_4A1E), 0x00000010);
				if (func_54() == 0x00000000)
				{
					func_113(&(Global_1B416.f_4A1E.f_18), 0x00000001);
				}
				else if (func_54() == 0x00000001)
				{
					func_113(&(Global_1B416.f_4A1E.f_18), 0x00000004);
				}
				else if (func_54() == 0x00000002)
				{
					func_113(&(Global_1B416.f_4A1E.f_18), 0x00000002);
				}
				func_83(func_54(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_102++;
			}
			break;
		
		case 0x00000007:
			if (SYSTEM::TIMERA() > 0x00001388)
			{
				bLocal_104 = 0x00000001;
			}
			break;
	}
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
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

void func_118()
{
	if (!func_62())
	{
		func_57(0x00000001);
	}
	if (!func_157())
	{
		switch (iLocal_100)
		{
			case 0x00000000:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHTM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHTF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHTT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x00000001:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x00000002:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT2T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x00000003:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x00000004:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT3T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x00000005:
				func_156(&uLocal_114, "REDO2AU", "REDO_CHT4", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x00000006:
				iLocal_101 = unk_0x1C0640BA9A7327B3() + 1000;
				iLocal_100++;
				break;
			
			case 0x00000007:
				if (iLocal_101 < unk_0x1C0640BA9A7327B3())
				{
					if (func_54() == 0x00000000)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO_CHT4M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_54() == 0x00000001)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO_CHT4F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_54() == 0x00000002)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO_CHT4T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_100++;
				}
				break;
			
			case 0x00000008:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x00000009:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT5T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x0000000A:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x0000000B:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT6T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x0000000C:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x0000000D:
				iLocal_101 = unk_0x1C0640BA9A7327B3() + 600;
				iLocal_100++;
				break;
			
			case 0x0000000E:
				if (iLocal_101 < unk_0x1C0640BA9A7327B3())
				{
					if (func_54() == 0x00000000)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_54() == 0x00000001)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_54() == 0x00000002)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_CHT7T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_100++;
				}
				break;
			
			case 0x0000000F:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			
			case 0x00000010:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT8T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x00000011:
				iLocal_101 = unk_0x1C0640BA9A7327B3() + 800;
				iLocal_100++;
				break;
			
			case 0x00000012:
				if (iLocal_101 < unk_0x1C0640BA9A7327B3())
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_100++;
				}
				break;
			
			case 0x00000013:
				if (func_54() == 0x00000000)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000001)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_54() == 0x00000002)
				{
					func_156(&uLocal_114, "REDO2AU", "REDO2_CHT9T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_100++;
				break;
			
			case 0x00000014:
				func_156(&uLocal_114, "REDO2AU", "REDO2_CHT10", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_100++;
				break;
			}
	}
}

void func_119()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		if (!iLocal_66)
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000001) && unk_0xC42A92762C58E1B9(iLocal_54, unk_0x728870EB733D12A1(), 0x00000000))
				{
					func_57(0x00000000);
					func_55();
					SYSTEM::WAIT(0x00000000);
					func_156(&uLocal_114, "REDO2AU", "REDO2_GETOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_66 = 0x00000001;
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_54, unk_0x728870EB733D12A1(), 0x00000000))
			{
				iLocal_66 = 0x00000000;
			}
		}
		if (!iLocal_67)
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
			{
				func_57(0x00000000);
				func_55();
				SYSTEM::WAIT(0x00000000);
				func_156(&uLocal_114, "REDO2AU", "REDO2_JACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_67 = 0x00000001;
			}
		}
		else if (!unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
		{
			iLocal_67 = 0x00000000;
		}
		if (!iLocal_68)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_57(0x00000000);
				func_55();
				SYSTEM::WAIT(0x00000000);
				func_156(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_68 = 0x00000001;
			}
		}
		else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			iLocal_68 = 0x00000000;
		}
	}
}

void func_120()
{
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		if (iLocal_95 == 0x00000000)
		{
			iLocal_95 = unk_0x1C0640BA9A7327B3();
		}
		else
		{
			iLocal_96 = unk_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_96 = 0x00000000;
		iLocal_95 = 0x00000000;
	}
	if ((iLocal_96 - iLocal_95) > 0x0000EA60)
	{
		func_55();
		SYSTEM::WAIT(0x00000000);
		func_156(&uLocal_114, "REDO2AU", "REDO2_TX", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
		{
			if (unk_0x5A91F08DF773C39D(iLocal_54, vLocal_89, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0x96167B03C5A77156(iLocal_54, vLocal_89, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			}
			else
			{
				unk_0x01E4BB5190DF7317(iLocal_54, 0x471C4000, 0x00000000);
			}
			unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
			unk_0x0A94A109271BE75A(iLocal_54);
		}
		func_51();
	}
}

void func_121()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000) || unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
		{
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x405E212DDE472467(iLocal_54, 0x00000000)) && !unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
				{
					uLocal_84[0x00000000] = func_125(iLocal_54, 0x00000000, 0x00000091);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_82))
				{
					unk_0x142CC44DB769B57E(&iLocal_82);
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_84[0x00000000]));
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_82))
				{
					iLocal_82 = func_123(vLocal_88, 0x00000001);
				}
				if (func_54() == 0x00000002 && !func_47())
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_83))
					{
						iLocal_83 = func_123(vLocal_90, 0x00000000);
						unk_0xBC8E0A7390523199(iLocal_83, 0x0000010D);
						func_122();
					}
				}
			}
		}
		else
		{
			if (!unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
			{
				uLocal_84[0x00000000] = func_125(iLocal_54, 0x00000000, 0x00000091);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_82))
			{
				unk_0x142CC44DB769B57E(&iLocal_82);
			}
		}
	}
}

void func_122()
{
	if (func_54() == 0x00000002)
	{
		if (!Global_791F)
		{
			func_115("CULT_BLIP_HELP", 0xFFFFFFFF);
			Global_791F = 0x00000001;
		}
	}
}

int func_123(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_124(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_124(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_124(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_124(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_127()
{
	int iVar0;
	
	unk_0x6DAD7906B73F064D(&iLocal_53);
	func_128(&uLocal_114, 0x00000004);
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_91)
	{
		unk_0xEEEE2E5FA6F78DF0(&(iLocal_91[iVar0]));
		iVar0++;
	}
	unk_0x8D17794CE3273D70("random@domestic");
}

void func_128(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_129()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (!func_132())
			{
				if (unk_0x16102BEDC7435774(iLocal_54))
				{
					unk_0x0A94A109271BE75A(iLocal_54);
				}
				if (unk_0xD1960163A3042274(iLocal_54, 0x4924437D) != 0x00000001 && unk_0xD1960163A3042274(iLocal_54, 0x4924437D) != 0x00000000)
				{
					unk_0xE185F110925D87DB(iLocal_54, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 6f, 0x40000000, 0x40000000, 0x00000000);
				}
				if (unk_0x405E212DDE472467(iLocal_54, 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_54, 0x00000000, 0x00000000);
				}
				if (!iLocal_73)
				{
					func_57(0x00000000);
					func_55();
					SYSTEM::WAIT(0x00000000);
					if (!func_157())
					{
						if (!func_131())
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_73 = 0x00000001;
					}
				}
			}
			else
			{
				iLocal_73 = 0x00000000;
				if (unk_0xD1960163A3042274(iLocal_54, 0x4924437D) == 0x00000001 && unk_0xD1960163A3042274(iLocal_54, 0x4924437D) == 0x00000000)
				{
					unk_0xA3BF0AA5A2608191(iLocal_54);
				}
			}
		}
		else if (!unk_0x16102BEDC7435774(iLocal_54))
		{
			unk_0xE25C96A9C36BE5D2(iLocal_54, func_130());
			unk_0x7BECA8F360B1686D(iLocal_54, 0x00000001);
			unk_0xBF541ED34EA81209(iLocal_54, 0x00000000);
		}
	}
}

int func_130()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_131()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001))
		{
			if ((unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001))) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001)))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001))))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_132()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (((((!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && !unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) && !unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) && !unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")))
			{
				if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) >= 0x00000001)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0x00000000))
		{
			if ((((!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) != joaat("rhino"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_133()
{
	switch (iLocal_61)
	{
		case 0x00000000:
			if (!func_157())
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (func_132())
					{
						if (func_54() == 0x00000000)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_GLM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_54() == 0x00000001)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_GLF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_54() == 0x00000002)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_GLT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_61 = 0x00000002;
					}
					else
					{
						if (func_54() == 0x00000000)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_NCM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_54() == 0x00000001)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_NCF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_54() == 0x00000002)
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_NCT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_61++;
					}
				}
				else
				{
					if (func_54() == 0x00000000)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_NCM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_54() == 0x00000001)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_NCF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_54() == 0x00000002)
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_NCT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_61++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (!func_132())
				{
					if (!func_157())
					{
						func_156(&uLocal_114, "REDO2AU", "REDO2_WT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_98 = unk_0x1C0640BA9A7327B3();
						iLocal_61++;
					}
				}
				else
				{
					iLocal_61++;
				}
			}
			else if (!func_157())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_WT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_98 = unk_0x1C0640BA9A7327B3();
				iLocal_61++;
			}
			break;
		
		case 0x00000002:
			iLocal_99 = unk_0x1C0640BA9A7327B3();
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000002))
				{
					if (func_132())
					{
						unk_0x0E2400AB9174FA81(0x000000FF, iLocal_111, 0x6F0783F5);
						if (func_136("REDO2_WT"))
						{
							func_55();
							SYSTEM::WAIT(0x00000000);
						}
						iLocal_61++;
					}
					else if (!func_157() && !iLocal_69)
					{
						if (!func_131())
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_156(&uLocal_114, "REDO2AU", "REDO2_UV2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_69 = 0x00000001;
					}
				}
			}
			if (iLocal_98 != 0x00000000)
			{
				if ((iLocal_99 - iLocal_98) > 0x0000EA60)
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_TX", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						SYSTEM::WAIT(0x000007D0);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_77);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000007D0);
							unk_0x1DC614CBE22FFB4F(0x00000000, 0xFFFFFFFF);
							unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_77);
							unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
							unk_0xF82EA857DA10E0CD(&iLocal_77);
							unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
							SYSTEM::WAIT(0x00000BB8);
							iLocal_47 = 0x0000000B;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54) && unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_77);
				if (iLocal_60 > 0x00000012)
				{
				}
				unk_0x96167B03C5A77156(0x00000000, unk_0x68F4C0EC296D3901(iLocal_91[0x00000008], 0x00000001) + Vector(0f, 0.39f, 0.35f), 1f, 0xFFFFFFFF, 0f, 0x00000200, func_135(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_91[0x00000008], 0x00000001)));
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@domestic", "pickup_low", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@security_van", "sec_hand_override", 8f, -4f, 0xFFFFFFFF, 0x00000021, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_77);
				unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
				unk_0xF82EA857DA10E0CD(&iLocal_77);
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_61++;
			}
			break;
		
		case 0x00000004:
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54) && !unk_0x437347B10A200C4B(iLocal_91[0x00000008], 0x00000000))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_54, "random@domestic", "pickup_low", 0x00000003))
				{
					unk_0xB0703A3FDD659128(iLocal_54, iLocal_91[0x00000008], 0x00000000);
					if (unk_0x8CA9406E01C7EE58(iLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61 = 0x00000007;
					}
				}
				else if (SYSTEM::TIMERB() > 0x00002710 || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_91[0x00000008], 0x00000001), 1.5f, 1.5f, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xD59B17D2DFF98E26(iLocal_91[0x00000008]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_77);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@domestic", "pickup_low", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@security_van", "sec_hand_override", 8f, -4f, 0xFFFFFFFF, 0x00000021, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_77);
						unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
						unk_0xF82EA857DA10E0CD(&iLocal_77);
						iLocal_61 = 0x00000006;
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54) && !unk_0x437347B10A200C4B(iLocal_91[0x00000008], 0x00000000))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_54, "random@domestic", "pickup_low", 0x00000003))
				{
					unk_0xB0703A3FDD659128(iLocal_54, iLocal_91[0x00000008], 0x00000000);
					if (unk_0x8CA9406E01C7EE58(iLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61++;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (unk_0x12DE711B1C681E9E(iLocal_54, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x9F528B1B53FBC5D9(iLocal_91[0x00000008], iLocal_54, unk_0x4A089F2B762B8D33(iLocal_54, 0x0000DEAD), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0xE25C96A9C36BE5D2(iLocal_54, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
					unk_0x7BECA8F360B1686D(iLocal_54, 0x00000001);
					unk_0xBF541ED34EA81209(iLocal_54, 0x00000000);
					func_134();
					iLocal_47 = 0x00000004;
				}
			}
			break;
	}
}

void func_134()
{
	if (!func_47())
	{
		if (func_54() == 0x00000002)
		{
			Global_791D = 0x00000001;
		}
	}
}

float func_135(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_136(char* sParam0)
{
	var uVar0;
	
	if (func_157())
	{
		MemCopy(&uVar0, {func_60()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_137()
{
	if (!iLocal_80)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
		{
			if (unk_0x12DE711B1C681E9E(iLocal_54, unk_0x16F2683693E537C9(), 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0xA3BF0AA5A2608191(iLocal_54);
				unk_0xDD353D0E9C789D0E(&iLocal_77);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00004650, 0x00000000, 0x00000002);
				unk_0x75ABDC5F81978924(iLocal_77);
				unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
				unk_0xF82EA857DA10E0CD(&iLocal_77);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_54, 0x00003A98, 0x00000000, 0x00000002);
				iLocal_80 = 0x00000001;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_54, unk_0x16F2683693E537C9(), 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!bLocal_97)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(iLocal_54);
					unk_0xDD353D0E9C789D0E(&iLocal_77);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_77);
					unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
					unk_0xF82EA857DA10E0CD(&iLocal_77);
					bLocal_97 = 0x00000001;
				}
				else
				{
					unk_0xA3BF0AA5A2608191(iLocal_54);
					unk_0xDD353D0E9C789D0E(&iLocal_77);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_77);
					unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
					unk_0xF82EA857DA10E0CD(&iLocal_77);
					bLocal_97 = 0x00000001;
				}
			}
			if (bLocal_97)
			{
				if (bLocal_50)
				{
					func_58();
					SYSTEM::WAIT(0x00000000);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
					{
						if (!func_157())
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_54, unk_0x16F2683693E537C9(), 90f))
							{
								if (func_156(&uLocal_114, "REDO2AU", "REDO2_LFT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_47 = 0x00000007;
								}
							}
						}
					}
				}
				else if (!func_157())
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_LFT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_47 = 0x00000007;
					}
				}
			}
		}
	}
}

void func_138()
{
	if (unk_0xC844350D5D58C99A(iLocal_54))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (func_139())
			{
				func_46(0x00000000);
				iLocal_72 = 0x00000000;
			}
		}
		else if (func_157() && !iLocal_72)
		{
			func_46(0x00000001);
			iLocal_72 = 0x00000001;
		}
	}
}

int func_139()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_140()
{
	switch (iLocal_60)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54) && !unk_0xEB6A8945D1AC98A1(iLocal_53))
			{
				if (unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001), 3f))
				{
					if (!func_157())
					{
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_ARMA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_54, "random@domestic", "balcony_fight_male", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0.3f, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(iLocal_53, "random@domestic", "balcony_fight_female", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0.3f, 0x00000000, 0x00000000, 0x00000000);
							iLocal_60++;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
			{
				unk_0x9F528B1B53FBC5D9(iLocal_91[0x00000008], iLocal_53, unk_0x4A089F2B762B8D33(iLocal_53, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				iLocal_60++;
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "balcony_fight_female", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_53, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_91[0x00000008], 0x00000000, 0x00000001);
						unk_0xDFC6BA855748EB10(iLocal_91[0x00000008], 0x00000001, 0f, 6f, 4f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!iLocal_70 && unk_0xC844350D5D58C99A(iLocal_91[0x00000008]))
			{
				if (unk_0xE608C809F9416F00(iLocal_91[0x00000008]))
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "CLOTHES_THROWN", iLocal_91[0x00000008], "RE_DOMESTIC_SOUNDSET", 0x00000000, 0x00000000);
					iLocal_70 = 0x00000001;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARFA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_70 = 0x00000000;
				iLocal_60++;
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xC844350D5D58C99A(iLocal_91[0x00000009]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "balcony_fight_female", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_53, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						unk_0x9F528B1B53FBC5D9(iLocal_91[0x00000009], iLocal_53, unk_0x4A089F2B762B8D33(iLocal_53, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARMB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_60++;
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xC844350D5D58C99A(iLocal_91[0x00000009]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "balcony_fight_female", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_53, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_91[0x00000009], 0x00000000, 0x00000001);
						unk_0xDFC6BA855748EB10(iLocal_91[0x00000009], 0x00000001, 1f, 2f, 3f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!iLocal_70 && unk_0xC844350D5D58C99A(iLocal_91[0x00000009]))
			{
				if (unk_0xE608C809F9416F00(iLocal_91[0x00000009]))
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "CLOTHES_THROWN", iLocal_91[0x00000009], "RE_DOMESTIC_SOUNDSET", 0x00000000, 0x00000000);
					iLocal_70 = 0x00000001;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARFB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_70 = 0x00000000;
				iLocal_60++;
			}
			break;
		
		case 0x00000008:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xC844350D5D58C99A(iLocal_91[0x0000000A]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "balcony_fight_female", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_53, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						unk_0x9F528B1B53FBC5D9(iLocal_91[0x0000000A], iLocal_53, unk_0x4A089F2B762B8D33(iLocal_53, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && unk_0xC844350D5D58C99A(iLocal_91[0x0000000A]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "balcony_fight_female", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_53, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_91[0x0000000A], 0x00000000, 0x00000001);
						unk_0xDFC6BA855748EB10(iLocal_91[0x0000000A], 0x00000001, 1f, 3f, 3f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!iLocal_70 && unk_0xC844350D5D58C99A(iLocal_91[0x0000000A]))
			{
				if (unk_0xE608C809F9416F00(iLocal_91[0x0000000A]))
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "CLOTHES_THROWN", iLocal_91[0x0000000A], "RE_DOMESTIC_SOUNDSET", 0x00000000, 0x00000000);
					iLocal_70 = 0x00000001;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARMC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_70 = 0x00000000;
				iLocal_60++;
			}
			break;
		
		case 0x0000000B:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53) && !unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_53, "random@domestic", "balcony_fight_female", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_53, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						unk_0xF96A174EE26D7588(iLocal_53, iLocal_54, 0x00000000);
					}
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_114, "REDO2AU", "REDO2_ARFC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_60 = 0x0000000E;
			}
			break;
		
		case 0x0000000E:
			if (!func_157())
			{
				if (func_156(&uLocal_114, "REDO2AU", "REDO2_ARFF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					func_141();
					iLocal_60++;
				}
			}
			break;
		
		case 0x0000000F:
			if (!func_157())
			{
				if (func_156(&uLocal_114, "REDO2AU", "REDO2_ARMI", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_60++;
				}
			}
			break;
		
		case 0x00000010:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_77);
				unk_0xBC43ED9FE28DB191(0x00000000);
				unk_0x796BDF31572BB055(0x00000000, vLocal_87, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_77);
				unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
				unk_0xF82EA857DA10E0CD(&iLocal_77);
				iLocal_60++;
			}
			break;
		
		case 0x00000011:
			if (unk_0xC844350D5D58C99A(iLocal_53))
			{
				if (!unk_0x437347B10A200C4B(iLocal_53, 0x00000000))
				{
					if (unk_0x5A91F08DF773C39D(iLocal_53, vLocal_87, 1f, 1f, 5f, 0x00000000, 0x00000001, 0x00000000) && unk_0x03068588A1FCED1A(iLocal_53))
					{
						unk_0xEBA53F35D0085654(&iLocal_53);
					}
				}
			}
			if (iLocal_75 < unk_0x1C0640BA9A7327B3())
			{
				if (!func_157())
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_INS1", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_75 = unk_0x1C0640BA9A7327B3() + 5000;
						iLocal_76++;
					}
				}
			}
			if (iLocal_76 > 0x00000000)
			{
				iLocal_60++;
			}
			break;
		
		case 0x00000012:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (!func_157())
				{
					if (func_156(&uLocal_114, "REDO2AU", "REDO2_LV", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x01E4BB5190DF7317(iLocal_54, 0x471C4000, 0x00000000);
						iLocal_60++;
					}
				}
			}
			break;
	}
	if (!bLocal_50)
	{
		if (iLocal_60 > 0x00000002 && iLocal_60 < 0x00000008)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 6f, 4f, 5f, 0x00000000, 0x00000001, 0x00000000) || (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000002) && unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62())))
				{
					unk_0xA3BF0AA5A2608191(iLocal_54);
					func_141();
					if (iLocal_60 > 0x00000012)
					{
						iLocal_47 = 0x00000003;
					}
					else
					{
						func_58();
						while (func_157())
						{
							SYSTEM::WAIT(0x00000000);
						}
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_FUCK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							bLocal_50 = 0x00000001;
							iLocal_47 = 0x00000003;
						}
					}
				}
			}
		}
		else if (iLocal_60 > 0x00000007)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 6f, 8f, 5f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
					{
						unk_0xF2D30B8ACAF12A39(uLocal_84[0x00000000], 0x00000001);
					}
					unk_0xA3BF0AA5A2608191(iLocal_54);
					func_141();
					if (iLocal_60 > 0x00000012)
					{
						iLocal_47 = 0x00000003;
					}
					else
					{
						func_55();
						while (func_157())
						{
							SYSTEM::WAIT(0x00000000);
						}
						if (func_156(&uLocal_114, "REDO2AU", "REDO2_FUCK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							bLocal_50 = 0x00000001;
							iLocal_47 = 0x00000003;
						}
					}
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (iLocal_51 < unk_0x1C0640BA9A7327B3())
		{
			func_58();
			if (unk_0xC844350D5D58C99A(iLocal_53))
			{
				func_141();
			}
			iLocal_47 = 0x00000003;
		}
	}
}

void func_141()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
	{
		unk_0xDD353D0E9C789D0E(&iLocal_77);
		unk_0x80AA372E04ED318D(0x00000000, vLocal_87, 1f, 0xFFFFFFFF, 0x471C4000, 0x3F000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, "random@domestic", "f_attack_end", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iLocal_77);
		unk_0x78ADC381772E3D54(iLocal_53, iLocal_77);
		unk_0xF82EA857DA10E0CD(&iLocal_77);
		unk_0xFADC0A217229F6B5(iLocal_53, 0x00000001);
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xC844350D5D58C99A(iLocal_91[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_91[iVar0], 0x00000001, 0x00000001);
			}
			iVar0++;
		}
	}
}

int func_142(int iParam0)
{
	if (func_145())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_25(Global_1B40B))
		{
			func_143(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_25(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_115(func_144(iParam0), 0xFFFFFFFF);
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
					func_115(func_144(iParam0), 0xFFFFFFFF);
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
					func_115(func_144(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_144(int iParam0)
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

int func_145()
{
	switch (func_146(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_146(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_150(0x00000000))
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
		if (!func_148(iParam2))
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
			func_147(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_147(var uParam0, int iParam1)
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

bool func_148(int iParam0)
{
	return func_149(iParam0, Global_A1D7);
}

int func_149(int iParam0, int iParam1)
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

int func_150(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_148(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_151()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_85))
	{
		unk_0x142CC44DB769B57E(&iLocal_85);
	}
	if (!unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
	{
		uLocal_84[0x00000000] = func_125(iLocal_54, 0x00000000, 0x00000091);
		unk_0xF2D30B8ACAF12A39(uLocal_84[0x00000000], 0x00000000);
	}
}

void func_152()
{
	func_4(0x00000027, 0x00000001);
	func_4(0x00000028, 0x00000001);
	func_4(0x00000029, 0x00000001);
	func_4(0x0000002A, 0x00000001);
	func_4(0x0000002B, 0x00000001);
	func_4(0x0000002C, 0x00000001);
	unk_0x536F1BE96C726C4B(vLocal_57, 2f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x536F1BE96C726C4B(vLocal_56, 2f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0xE342F209E49C5314(vLocal_57 - Vector(10f, 10f, 10f), vLocal_57 + Vector(10f, 10f, 10f), 0x00000000, 0x00000001);
	unk_0xB5376EA942202450(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0x00000000, 0x00000000, 0x00000001);
	unk_0x7D6CA5F52B3748BF(vLocal_57 - Vector(10f, 10f, 10f), vLocal_57 + Vector(10f, 10f, 10f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0x7D6CA5F52B3748BF(vLocal_88 - Vector(3f, 2f, 2f), vLocal_88 + Vector(3f, 2f, 2f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0x7D6CA5F52B3748BF(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0xF63400DBE3303D26("rghDomestic", &iLocal_111);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_111, 0x6F0783F5);
	iLocal_53 = unk_0x36F2404464202779(0x0000001A, iLocal_78, vLocal_56, fLocal_58, 0x00000001, 0x00000001);
	unk_0x11AD11297DC58CC7(iLocal_53, 0x00000001);
	unk_0xAFF39FB306F8E232(iLocal_53, 0x00000011, 0x00000001);
	unk_0xAFF39FB306F8E232(iLocal_53, 0x00000008, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_53, 0x00000001, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_53, 0x00000002, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_53, 0x00000080, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_53, 0x00000008, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(iLocal_53, "random@domestic", "balcony_fight_idle_female", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x6DF7BF67E86AAE86(iLocal_53, iLocal_111);
	func_155(iLocal_53, "GENERIC_WHATEVER", 0x00000018);
	unk_0x71199B01895C6202(iLocal_78);
	unk_0x4E885A246A9D983A(iLocal_53, 0x000000B9, 0x00000001);
	iLocal_54 = unk_0x36F2404464202779(0x0000001A, iLocal_79, vLocal_57, fLocal_59, 0x00000001, 0x00000001);
	unk_0x11AD11297DC58CC7(iLocal_54, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_54, 0x00000001, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_54, 0x00000002, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_54, 0x00000080, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_54, 0x00000008, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_54, 0x00010000, 0x00000001);
	unk_0x4E885A246A9D983A(iLocal_54, 0x000000B9, 0x00000001);
	unk_0x4E885A246A9D983A(iLocal_54, 0x000000CE, 0x00000001);
	unk_0xCC095276B3DD380E(iLocal_54, 0x00000000);
	unk_0x25C5402CC10F76CD(iLocal_54, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(iLocal_54, "random@domestic", "balcony_fight_idle_male", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x6DF7BF67E86AAE86(iLocal_54, iLocal_111);
	func_155(iLocal_54, "GENERIC_WHATEVER", 0x00000018);
	unk_0x71199B01895C6202(iLocal_79);
	unk_0x0C8C0C840C2D1AD2(iLocal_54, iLocal_53, 0xFFFFFFFF, 0x00000000, 0x00000002);
	unk_0x0C8C0C840C2D1AD2(iLocal_53, iLocal_54, 0xFFFFFFFF, 0x00000000, 0x00000002);
	unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000002, 0x00000001, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000003, 0x00000001, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000004, 0x00000001, 0x00000002, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_54, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_54, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_54, 0x00000003, 0x00000001, 0x00000002, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_54, 0x00000004, 0x00000001, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_54, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	func_154();
	unk_0x5D96D8530B3D0904(&uLocal_93, 0x00000005);
	if (func_54() == 0x00000000)
	{
		func_153(&uLocal_114, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	if (func_54() == 0x00000001)
	{
		func_153(&uLocal_114, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	if (func_54() == 0x00000002)
	{
		func_153(&uLocal_114, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	func_153(&uLocal_114, 0x00000003, iLocal_54, "REDOCastro", 0x00000000, 0x00000001);
	unk_0x4F39CC3882DD074E(iLocal_54, sLocal_112);
	func_153(&uLocal_114, 0x00000004, iLocal_53, "NATHALIA", 0x00000000, 0x00000001);
	unk_0x4F39CC3882DD074E(iLocal_53, sLocal_113);
	SYSTEM::SETTIMERA(0x00000000);
	iLocal_109 = 0x00000001;
}

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_154()
{
	iLocal_91[0x00000000] = unk_0x7707E48765093646(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000000], -13.7262f, 0.5001f, -0.5886f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000000], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_ld_tshirt_02"));
	iLocal_91[0x00000001] = unk_0x7707E48765093646(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000001], -7.3906f, -12.8136f, -63.733f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000001], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_ld_jeans_02"));
	iLocal_91[0x00000002] = unk_0x7707E48765093646(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000002], -7.041683f, 10.17298f, 45.7617f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000002], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_ld_shoe_01"));
	iLocal_91[0x00000003] = unk_0x7707E48765093646(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000003], -8.5884f, 12.6893f, 57.1792f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000003], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_ld_jeans_01"));
	iLocal_91[0x00000004] = unk_0x7707E48765093646(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000004], -16.4886f, 2.4979f, -3.8769f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000004], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_ld_shoe_02"));
	iLocal_91[0x00000005] = unk_0x7707E48765093646(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000005], -3.5946f, -15.0978f, -75.5026f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000005], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_ld_shirt_01"));
	iLocal_91[0x00000006] = unk_0x7707E48765093646(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000006], 6.402527f, -15.68665f, -104.1308f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000006], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_porn_mag_03"));
	iLocal_91[0x00000007] = unk_0x7707E48765093646(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_91[0x00000007], -8.3642f, 1.9344f, 2.6889f, 0x00000002, 0x00000001);
	unk_0x1E9649458B15960F(iLocal_91[0x00000007], 0x00000001);
	unk_0x71199B01895C6202(joaat("prop_porn_mag_01"));
	iLocal_91[0x00000008] = unk_0x7707E48765093646(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 0x00000001, 0x00000001, 0x00000000);
	iLocal_91[0x00000009] = unk_0x7707E48765093646(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 0x00000001, 0x00000001, 0x00000000);
	unk_0x71199B01895C6202(joaat("prop_cs_rub_binbag_01"));
	iLocal_91[0x0000000A] = unk_0x7707E48765093646(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 0x00000001, 0x00000001, 0x00000000);
	unk_0x71199B01895C6202(joaat("prop_golf_bag_01"));
}

void func_155(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_50(iParam2), 0x00000001);
}

bool func_156(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_65(sParam2, iParam3, 0x00000000);
}

int func_157()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_158()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54) && !unk_0xEB6A8945D1AC98A1(iLocal_53))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xE115347EA59F7B86(iLocal_54, unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_53, unk_0x16F2683693E537C9()))
			{
				if (((unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_54) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_54)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_53)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_53))
				{
					if (iLocal_94 == 0xFFFFFFFF)
					{
						iLocal_94 = unk_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					iLocal_94 = 0xFFFFFFFF;
				}
			}
			if ((iLocal_94 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > iLocal_94 + 500) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_165();
			}
		}
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		func_165();
	}
	if (iLocal_47 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			if (func_164(iLocal_54))
			{
				func_163();
			}
		}
	}
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0x00000000, 0x00000001, 0x00000000))
	{
		func_162();
	}
	if (unk_0xC844350D5D58C99A(iLocal_53))
	{
		if (func_161(iLocal_53))
		{
			func_159();
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_54))
	{
		if (func_161(iLocal_54) || unk_0xB87D13D0C064E9D1(iLocal_54, unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_159();
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_53))
	{
		if (func_161(iLocal_53) || unk_0xB87D13D0C064E9D1(iLocal_53, unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_159();
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_54, 250f, 250f, 250f, 0x00000000, 0x00000001, 0x00000000) || unk_0x70EED0761B82965E(iLocal_54))
		{
			iLocal_47 = 0x0000000B;
		}
	}
	if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		func_159();
	}
}

void func_159()
{
	func_55();
	SYSTEM::WAIT(0x00000000);
	if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		func_156(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_156(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		unk_0xA3BF0AA5A2608191(iLocal_54);
		unk_0xDD353D0E9C789D0E(&iLocal_77);
		unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iLocal_77);
		unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
		unk_0xF82EA857DA10E0CD(&iLocal_77);
		unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
		SYSTEM::WAIT(0x00000BB8);
	}
	func_160();
	SYSTEM::WAIT(0x00000000);
	func_51();
	iLocal_47 = 0x0000000B;
}

void func_160()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
	{
		unk_0x8BE3D040D15AEA1D(iLocal_53, 0xFFFFFFFF);
		unk_0xFADC0A217229F6B5(iLocal_53, 0x00000001);
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xC844350D5D58C99A(iLocal_91[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_91[iVar0], 0x00000001, 0x00000001);
			}
			iVar0++;
		}
	}
}

int func_161(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_162()
{
	func_160();
	func_55();
	SYSTEM::WAIT(0x00000000);
	func_156(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		unk_0xA3BF0AA5A2608191(iLocal_54);
		unk_0xDD353D0E9C789D0E(&iLocal_77);
		unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iLocal_77);
		unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
		unk_0xF82EA857DA10E0CD(&iLocal_77);
		unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
		SYSTEM::WAIT(0x00000BB8);
	}
	func_51();
	iLocal_47 = 0x0000000B;
}

void func_163()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		unk_0xA3BF0AA5A2608191(iLocal_54);
		unk_0xEEB67C3D0A71A47B(iLocal_54, unk_0x68F4C0EC296D3901(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
	}
	iLocal_47 = 0x0000000B;
}

int func_164(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x405E212DDE472467(iParam0, 0x00000000) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 1.5f, 1.5f, 8f, 0x00000000, 0x00000001, 0x00000002))
		{
			if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 4f)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_165()
{
	func_55();
	SYSTEM::WAIT(0x00000000);
	func_156(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
	{
		unk_0xDD353D0E9C789D0E(&iLocal_77);
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00001000);
		unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iLocal_77);
		unk_0x78ADC381772E3D54(iLocal_54, iLocal_77);
		unk_0xF82EA857DA10E0CD(&iLocal_77);
		unk_0xFADC0A217229F6B5(iLocal_54, 0x00000001);
		SYSTEM::WAIT(0x00000BB8);
	}
	func_51();
	iLocal_47 = 0x0000000B;
}

void func_166()
{
	unk_0x523BCC9DC80CD82F(iLocal_78);
	unk_0x523BCC9DC80CD82F(iLocal_79);
	unk_0x523BCC9DC80CD82F(joaat("prop_golf_iron_01"));
	unk_0x523BCC9DC80CD82F(joaat("prop_cs_rub_binbag_01"));
	unk_0x523BCC9DC80CD82F(joaat("prop_golf_bag_01"));
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_tshirt_02"));
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_jeans_02"));
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_shoe_01"));
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_jeans_01"));
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_shoe_02"));
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_shirt_01"));
	unk_0x523BCC9DC80CD82F(joaat("prop_porn_mag_03"));
	unk_0x523BCC9DC80CD82F(joaat("prop_porn_mag_01"));
	unk_0x3F423BF5B8125A50("random@domestic");
	unk_0x3F423BF5B8125A50("random@security_van");
	if ((((((((((((((unk_0xB87F6CF6E5628C67(iLocal_78) && unk_0xB87F6CF6E5628C67(iLocal_79)) && unk_0xB87F6CF6E5628C67(joaat("prop_golf_iron_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_cs_rub_binbag_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_golf_bag_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_tshirt_02"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_jeans_02"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_shoe_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_jeans_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_shoe_02"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_shirt_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_porn_mag_03"))) && unk_0xB87F6CF6E5628C67(joaat("prop_porn_mag_01"))) && unk_0xB4AE0788C1587752("random@domestic")) && unk_0xB4AE0788C1587752("random@security_van"))
	{
		bLocal_48 = 0x00000001;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_78);
		unk_0x523BCC9DC80CD82F(iLocal_79);
		unk_0x523BCC9DC80CD82F(joaat("prop_golf_iron_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_cs_rub_binbag_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_golf_bag_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_tshirt_02"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_jeans_02"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_shoe_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_jeans_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_shoe_02"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_shirt_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_porn_mag_03"));
		unk_0x523BCC9DC80CD82F(joaat("prop_porn_mag_01"));
		unk_0x3F423BF5B8125A50("random@domestic");
		unk_0x3F423BF5B8125A50("random@security_van");
	}
}

void func_167()
{
	vLocal_86 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_78 = joaat("a_f_y_business_02");
	iLocal_79 = joaat("a_m_y_golfer_01");
	sLocal_112 = "REDOCastro";
	sLocal_113 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	vLocal_56 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_58 = 348.9152f;
	vLocal_57 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_59 = 156.0666f;
	vLocal_87 = { -469.082f, 535.0479f, 123.3553f };
	vLocal_88 = { -1378.273f, 40.2254f, 52.6774f };
	vLocal_89 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_55 = 0x00000001;
}

int func_168()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_44) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_179())
		{
			return 0x00000000;
		}
	}
	if (func_175())
	{
		return 0x00000001;
	}
	if (func_169(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_169(float fParam0, bool bParam1)
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
		if (func_33(func_54()))
		{
			iVar5 = func_30();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_170(iVar1, &Var0);
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

void func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_171(uParam1, "Abigail1", func_173(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_171(uParam1, "Abigail2", func_173(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_171(uParam1, "Barry1", func_173(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_171(uParam1, "Barry2", func_173(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_171(uParam1, "Barry3", func_173(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_171(uParam1, "Barry3A", func_173(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_171(uParam1, "Barry3C", func_173(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_171(uParam1, "Barry4", func_173(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_171(uParam1, "Dreyfuss1", func_173(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_171(uParam1, "Epsilon1", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_171(uParam1, "Epsilon2", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_171(uParam1, "Epsilon3", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_171(uParam1, "Epsilon4", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_171(uParam1, "Epsilon5", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_171(uParam1, "Epsilon6", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_171(uParam1, "Epsilon7", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_171(uParam1, "Epsilon8", func_173(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_171(uParam1, "Extreme1", func_173(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_171(uParam1, "Extreme2", func_173(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_171(uParam1, "Extreme3", func_173(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_171(uParam1, "Extreme4", func_173(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_171(uParam1, "Fanatic1", func_173(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_171(uParam1, "Fanatic2", func_173(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_171(uParam1, "Fanatic3", func_173(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_171(uParam1, "Hao1", func_173(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_171(uParam1, "Hunting1", func_173(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_171(uParam1, "Hunting2", func_173(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_171(uParam1, "Josh1", func_173(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_171(uParam1, "Josh2", func_173(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_171(uParam1, "Josh3", func_173(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_171(uParam1, "Josh4", func_173(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_171(uParam1, "Maude1", func_173(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_171(uParam1, "Minute1", func_173(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_171(uParam1, "Minute2", func_173(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_171(uParam1, "Minute3", func_173(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_171(uParam1, "MrsPhilips1", func_173(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_171(uParam1, "MrsPhilips2", func_173(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_171(uParam1, "Nigel1", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_171(uParam1, "Nigel1A", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_171(uParam1, "Nigel1B", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_171(uParam1, "Nigel1C", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_171(uParam1, "Nigel1D", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_171(uParam1, "Nigel2", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_171(uParam1, "Nigel3", func_173(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_171(uParam1, "Omega1", func_173(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_171(uParam1, "Omega2", func_173(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_171(uParam1, "Paparazzo1", func_173(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_171(uParam1, "Paparazzo2", func_173(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_171(uParam1, "Paparazzo3", func_173(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_171(uParam1, "Paparazzo3A", func_173(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_171(uParam1, "Paparazzo3B", func_173(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_171(uParam1, "Paparazzo4", func_173(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_171(uParam1, "Rampage1", func_173(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_171(uParam1, "Rampage3", func_173(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_171(uParam1, "Rampage4", func_173(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_171(uParam1, "Rampage5", func_173(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_171(uParam1, "Rampage2", func_173(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_172(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_171(uParam1, "TheLastOne", func_173(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_171(uParam1, "Tonya1", func_173(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_171(uParam1, "Tonya2", func_173(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_171(uParam1, "Tonya3", func_173(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_171(uParam1, "Tonya4", func_173(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_171(uParam1, "Tonya5", func_173(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_172(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_171(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_172(int iParam0)
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

struct<2> func_173(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_174(iParam0) };
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

struct<2> func_174(int iParam0)
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

int func_175()
{
	if (func_178() && !func_179())
	{
		return 0x00000001;
	}
	if (func_177() && func_176())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_176()
{
	return Global_1B2FC > 0x00000000;
}

int func_177()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_178()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_179()
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

int func_180()
{
	if (!func_148(0x00000005))
	{
		return 0x00000001;
	}
	if (func_175())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_179())
		{
			return 0x00000000;
		}
	}
	if (func_169(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_181()
{
	if ((Global_1B40B == func_40() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_182(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_40();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_184(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_183();
}

void func_183()
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

void func_184(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_185(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_40();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_226())
		{
			return 0x00000000;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_179())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_17(0x00000000))
		{
			return 0x00000000;
		}
		if (func_175())
		{
			return 0x00000000;
		}
		if (func_225())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_33(func_54()))
		{
			if (func_169(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_224(iParam1))
		{
			return 0x00000000;
		}
		if (func_33(func_54()))
		{
			if (func_223(func_54()) == 0x00000004 || func_223(func_54()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_33(func_54()))
		{
			if (!func_222(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_221(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_220())
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
		if (!func_211(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_148(0x00000005))
		{
			return 0x00000000;
		}
		if (func_210(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_210(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_224(0x0000001E) && !func_210(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_33(func_54()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_209(iVar4))
				{
					if (func_187(iVar2))
					{
						if (!func_186(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_54() != iVar2)
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

bool func_186(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)
{
	return func_189(iParam0, 0x00000001);
}

int func_189(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0x00000000;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_192(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_195(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_196(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_197(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_198(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_199(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_202()
{
	var uVar0;
	
	func_208(&uVar0, unk_0x4460E481B9E33ADA());
	func_207(&uVar0, unk_0x8D199E381D262EEF());
	func_206(&uVar0, unk_0xD8A54335F18763BA());
	func_205(&uVar0, unk_0x972A296334C9D57B());
	func_204(&uVar0, unk_0x118229AD063C3C1D());
	func_203(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_209(int iParam0)
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_210(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_54();
				if (!func_33(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_219()) || Global_1B05D) || Global_7832) || func_218()) || func_77(0x00000008, 0xFFFFFFFF)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_219()) || Global_7832) || func_218()) || func_77(0x00000008, 0xFFFFFFFF)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_219()) || Global_1B05D) || Global_7832) || func_218()) || func_77(0x00000008, 0xFFFFFFFF)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_219()) || Global_1B05D) || Global_7832) || func_218()) || func_77(0x00000008, 0xFFFFFFFF)) || func_217()) || func_216()) || func_214()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_219() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_77(0x00000008, 0xFFFFFFFF)) || func_214()) || func_213()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_77(0x00000008, 0xFFFFFFFF) || func_217()) || func_216()) || func_213()) || func_212())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_219()) || Global_7832) || func_218()) || func_77(0x00000008, 0xFFFFFFFF)) || func_216()) || func_215()) || func_214()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_219()) || func_216()) || Global_1B05D) || Global_7832) || func_218()) || Global_A664) || func_77(0x00000008, 0xFFFFFFFF)) || func_215()) || func_213()) || func_214()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_219()) || Global_1B05D) || Global_7832) || func_218()) || func_77(0x00000008, 0xFFFFFFFF)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
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

var func_212()
{
	return Global_181DF.f_1;
}

int func_213()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_214()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_215()
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

bool func_216()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_217()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_218()
{
	return Global_14086D;
}

int func_219()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_220()
{
	func_75();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_221(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_54();
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

int func_223(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_224(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_226())
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

int func_225()
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

int func_226()
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

int func_227(int iParam0, int iParam1)
{
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (iParam1 == 0x00000001)
		{
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_228()
{
	int iVar0;
	
	if (iLocal_109 && !iLocal_108)
	{
		func_3(0x00000000);
		if (Global_7921)
		{
			unk_0xC92DB9682A650680("AC_STOP");
		}
		func_2();
		unk_0xE342F209E49C5314(vLocal_57 - Vector(10f, 10f, 10f), vLocal_57 + Vector(10f, 10f, 10f), 0x00000001, 0x00000001);
		unk_0x0E2400AB9174FA81(0x000000FF, iLocal_111, 0x6F0783F5);
		if (bLocal_55)
		{
			unk_0x71199B01895C6202(iLocal_78);
			unk_0x71199B01895C6202(iLocal_79);
		}
		if (unk_0xC844350D5D58C99A(iLocal_53))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
			{
				unk_0x4E885A246A9D983A(iLocal_53, 0x0000013D, 0x00000001);
				unk_0x11AD11297DC58CC7(iLocal_53, 0x00000000);
			}
			unk_0x6DAD7906B73F064D(&iLocal_53);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_85))
		{
			unk_0x142CC44DB769B57E(&iLocal_85);
		}
		if (unk_0xE4EDC4B0E92C078B(uLocal_84[0x00000000]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_84[0x00000000]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_54))
			{
				unk_0x4E885A246A9D983A(iLocal_54, 0x0000013D, 0x00000001);
				if (!unk_0x405E212DDE472467(iLocal_54, 0x00000000))
				{
					unk_0x61F0DE0226FF7252(iLocal_54);
				}
				unk_0x0A94A109271BE75A(iLocal_54);
				unk_0x11AD11297DC58CC7(iLocal_54, 0x00000000);
				unk_0x25C5402CC10F76CD(iLocal_54, 0x00000001);
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xC844350D5D58C99A(iLocal_91[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_91[iVar0], 0x00000001, 0x00000001);
			}
			iVar0++;
		}
		unk_0x842F1AEB2FCC00B7(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0x00000001);
		unk_0xB547E3FFEB27073E();
	}
	func_229(0xFFFFFFFF);
	unk_0x10FAF14A60A0DBE1();
}

void func_229(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_40();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_181())
	{
		func_233(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_232(0x00007530);
		StringCopy(&cVar0, func_231(Global_1B40B, 0x00000001), 64);
		if (func_39(Global_1B40B) > 0x00000000)
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
	func_230(&Global_786B);
	Global_1B40C = 0x00000000;
	func_184(0xFFFFFFFF);
}

void func_230(var uParam0)
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

char* func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0x00000000, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_237(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_239(int iParam0)
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

