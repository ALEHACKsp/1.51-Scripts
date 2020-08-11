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
	int iLocal_29 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
	float fLocal_78 = 0f;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<6> Local_106 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_107 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
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
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	char[] cLocal_146[8] = 0;
	char* sLocal_147 = NULL;
	char* sLocal_148 = NULL;
	char* sLocal_149 = NULL;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	float fLocal_152 = 0f;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	float fLocal_157 = 0f;
	vector3 vLocal_158 = { 0f, 0f, 0f };
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 16;
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
	var uLocal_279 = 0;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	struct<2> Local_326 = { 0, 5 } ;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 5;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 0x00000003;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_45 = -1f;
	iLocal_53 = unk_0xAD1355DD1E5D2D9B();
	uLocal_54 = unk_0x817B3657F78A517A();
	vLocal_64 = { -3092.82f, 749.8f, 21.48f };
	vLocal_65 = { 181.8977f, 4415.152f, 73.463f };
	vLocal_66 = { 2743.461f, 4385.51f, 47.7521f };
	vLocal_67 = { -382.1346f, 2817.971f, 44.0671f };
	vLocal_79 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_106, "", 24);
	vLocal_61 = { ScriptParam_326.f_1[0x00000000 /*3*/] };
	func_279();
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (unk_0x16102BEDC7435774(iLocal_71))
			{
				unk_0x0A94A109271BE75A(iLocal_71);
			}
		}
		func_257();
	}
	if (func_228(vLocal_61, 0x0000000D, iLocal_68, 0x00000000, 0x00000000))
	{
		func_225(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x338D6FF72D84D90F() || iLocal_89)
		{
			if (!func_224())
			{
				if (func_223())
				{
					func_257();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_HL", 0x00000000);
			switch (iLocal_55)
			{
				case 0x00000000:
					if (func_211())
					{
						func_257();
					}
					if (!iLocal_60)
					{
						func_210();
					}
					else
					{
						func_209();
					}
					if (bLocal_59)
					{
						iLocal_111 = 0x00000001;
						iLocal_55 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						switch (iLocal_56)
						{
							case 0x00000000:
								if ((func_208() && iLocal_57 != 0x00000008) && iLocal_57 != 0x0000000A)
								{
									if (!func_224())
									{
										func_199(0x00000001);
									}
									iLocal_56 = 0x00000001;
								}
								switch (iLocal_57)
								{
									case 0x00000000:
										func_192();
										break;
									
									case 0x00000001:
										func_190();
										break;
									
									case 0x00000002:
										if (func_189())
										{
										}
										iLocal_126 = unk_0x1C0640BA9A7327B3();
										if (iLocal_108 < 0x00000001 && !iLocal_109)
										{
											func_188();
										}
										if (iLocal_58 == 0x00000001)
										{
											func_187();
										}
										else if (iLocal_58 == 0x00000002)
										{
											func_186();
										}
										else if (iLocal_58 == 0x00000003)
										{
											func_185();
										}
										else if (iLocal_58 == 0x00000005)
										{
											func_182();
										}
										break;
									
									case 0x00000003:
										func_179();
										break;
									
									case 0x00000004:
										if (iLocal_58 == 0x00000001)
										{
											func_162();
											func_161();
										}
										else if (iLocal_58 == 0x00000003)
										{
											func_156();
											func_155();
										}
										else if (iLocal_58 == 0x00000005)
										{
											func_156();
											func_146();
										}
										if (!bLocal_92)
										{
											func_142();
											func_141();
											func_138();
											func_137();
											func_134();
											func_132();
											func_131();
											func_130();
										}
										func_122();
										break;
									
									case 0x00000006:
										func_68();
										if (iLocal_58 == 0x00000003)
										{
											func_155();
										}
										break;
									
									case 0x00000007:
										func_67();
										if (iLocal_58 == 0x00000003)
										{
											func_155();
										}
										break;
									
									case 0x00000008:
										if (iLocal_58 == 0x00000003)
										{
											func_63();
											func_155();
										}
										break;
									
									case 0x00000009:
										if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
										{
											if (unk_0x5A91F08DF773C39D(iLocal_71, vLocal_77, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
											{
												unk_0x96167B03C5A77156(iLocal_71, vLocal_77, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
											}
											else
											{
												unk_0x01E4BB5190DF7317(iLocal_71, 0x471C4000, 0x00000000);
											}
											unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
											SYSTEM::WAIT(0x00001388);
										}
										func_59();
										break;
									
									case 0x0000000A:
										break;
								}
								if ((func_58() && !func_57()) && iLocal_57 != 0x0000000A)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
									{
										if (unk_0x5A91F08DF773C39D(iLocal_71, vLocal_79, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
										{
											func_56(0x00000000);
											SYSTEM::WAIT(0x00000000);
											func_54();
											iLocal_57 = 0x0000000A;
										}
									}
								}
								if (func_53())
								{
									if (unk_0xC844350D5D58C99A(iLocal_71))
									{
										unk_0xEBA53F35D0085654(&iLocal_71);
									}
									func_24();
								}
								break;
							
							case 0x00000001:
								func_54();
								SYSTEM::WAIT(0x00000000);
								if (iLocal_58 == 0x00000001)
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_AGG", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								else if (iLocal_58 == 0x00000002)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_AGG", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								else if (iLocal_58 == 0x00000003)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_AGG", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
									{
										unk_0xA3BF0AA5A2608191(iLocal_72);
										unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
									}
								}
								else if (iLocal_58 == 0x00000005)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_AGG", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
								{
									unk_0xA3BF0AA5A2608191(iLocal_71);
									unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
									func_59();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_257();
		}
		if (iLocal_57 > 0x00000002)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0xC844350D5D58C99A(iLocal_71))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
					{
						if (!unk_0x12DE711B1C681E9E(iLocal_71, unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0x00000000, 0x00000001, 0x00000000))
						{
							func_59();
						}
					}
				}
			}
		}
		if (iLocal_57 > 0x00000000 && iLocal_57 < 0x00000008)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					if (!func_224())
					{
						func_199(0x00000001);
					}
					func_59();
				}
				else if (!unk_0x869EFD0BC0868856(iLocal_71))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_71, unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0xA3BF0AA5A2608191(iLocal_71);
						unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						func_59();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0x00000000);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_21(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_20();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_8();
		func_3();
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
		func_22();
	}
	return 0x00000000;
}

void func_3()
{
	if (!func_4())
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

int func_4()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_7())
	{
		return 0x00000000;
	}
	if (func_5(unk_0xD803B885F5E47A62()))
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

bool func_5(int iParam0)
{
	return func_6(iParam0, 0x00000014);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_7()
{
	return 0xFFFFFFFF;
}

void func_8()
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

void func_9()
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

int func_10()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11()
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

void func_12()
{
	if (func_19(0x0000000E))
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
		Global_4C1E = func_13();
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

int func_13()
{
	func_14();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_17(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_16(unk_0x16F2683693E537C9());
			if (func_15(iVar0) && (!func_19(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_15(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_15(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_18(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_19(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
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

void func_22()
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_24()
{
	while (!func_52())
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_48(func_13(), 0x00000004, 0x00000005);
	func_28(0x0000000D, iLocal_68);
	func_25();
	func_257();
}

void func_25()
{
	func_26();
}

int func_26()
{
	if (func_27(0x00000000))
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

bool func_27(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_28(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_46();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_45(iParam0))
	{
		func_44(iParam0, iParam1);
		if (!func_43(0x00000033))
		{
			func_39("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_42(), 0x00000000, 0x0000008A, 0x00000000);
			func_38(0x00000033);
		}
		if (func_37(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_36(iParam0, iParam1) != 0x00000142)
		{
			func_30(func_36(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_29(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_29(0x00000007);
			}
			else
			{
				func_29(0x00000001);
			}
		}
	}
}

void func_29(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_30(int iParam0, var uParam1, var uParam2)
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
		func_34((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_31();
	}
}

void func_31()
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
		func_33(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_32() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_26();
				}
			}
		}
	}
}

int func_32()
{
	return Global_7830;
}

int func_33(int iParam0, int iParam1)
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

int func_34(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_35();
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

int func_35()
{
	return Global_1407E9;
}

int func_36(int iParam0, int iParam1)
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

int func_37(int iParam0)
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

void func_38(int iParam0)
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

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_40(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_41();
	}
}

void func_41()
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

int func_42()
{
	func_14();
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

int func_43(int iParam0)
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

void func_44(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_45(int iParam0)
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

int func_46()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_47(Var0);
	return uVar1;
}

int func_47(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_48(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_51(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_49(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_49(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_35();
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

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_50(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_52()
{
	return 0x00000001;
}

int func_53()
{
	if (Global_791E)
	{
		func_29(0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_54()
{
	Global_4CD7 = 0x00000000;
	func_55();
}

void func_55()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_56(int iParam0)
{
	Global_5538 = iParam0;
}

int func_57()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_58()
{
	return Global_791D;
}

void func_59()
{
	func_61();
	while (func_60())
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_257();
}

int func_60()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_61()
{
	Global_4CD7 = 0x00000000;
	func_62();
}

void func_62()
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

void func_63()
{
	struct<6> Var0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_72) && !unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_72, 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_71, 40f, 40f, 40f, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0xA3BF0AA5A2608191(iLocal_72);
			unk_0x96167B03C5A77156(iLocal_72, vLocal_77, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			func_24();
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_72, unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (func_60())
			{
				Var0 = { func_66() };
				if ((unk_0x7F8A39872A07D2CE(&Var0, "REHH3_JB_2") || unk_0x7F8A39872A07D2CE(&Var0, "REHH3_JB_4")) || unk_0x7F8A39872A07D2CE(&Var0, "REHH3_JB_6"))
				{
					func_54();
				}
			}
		}
		if (SYSTEM::TIMERB() > 0x00001388)
		{
			if (unk_0x4734A6196B611C3B(iLocal_72, unk_0x16F2683693E537C9()))
			{
				iLocal_127 = 0x00000004;
			}
		}
	}
	if (!iLocal_91)
	{
		if (unk_0xC844350D5D58C99A(iLocal_71))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					func_54();
					SYSTEM::WAIT(0x00000000);
					func_1(&uLocal_161, cLocal_146, "REHH3_JB2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_91 = 0x00000001;
				}
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (unk_0x869EFD0BC0868856(iLocal_71))
		{
			unk_0x8FB4E06C94958F84(iLocal_71);
		}
		if (unk_0xEB6A8945D1AC98A1(iLocal_72) && unk_0x5A91F08DF773C39D(iLocal_71, unk_0x68F4C0EC296D3901(iLocal_72, 0x00000000), 1f, 1f, 5f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_127 = 0x00000005;
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
	{
		unk_0x6C3AE6E278DB3D0E(iLocal_72, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		func_59();
	}
	else
	{
		func_59();
	}
	if (!iLocal_136)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_72))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_100))
			{
				unk_0x142CC44DB769B57E(&iLocal_100);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				iLocal_127 = 0x00000003;
			}
		}
	}
	if (!iLocal_138)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && !unk_0xEB6A8945D1AC98A1(iLocal_72))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				if (unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()))
				{
					iLocal_127 = 0x00000002;
				}
			}
		}
		if (unk_0xEB6A8945D1AC98A1(iLocal_72))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_100))
			{
				unk_0x142CC44DB769B57E(&iLocal_100);
			}
			func_65(&uLocal_161, 0x00000004);
			if (unk_0xB87D13D0C064E9D1(iLocal_72, unk_0x16F2683693E537C9(), 0x00000001) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				iLocal_127 = 0x00000002;
			}
		}
		else if (!unk_0x437347B10A200C4B(iLocal_71, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_71, iLocal_72, 0x00000001))
			{
				iLocal_127 = 0x00000002;
			}
		}
	}
	switch (iLocal_127)
	{
		case 0x00000000:
			if (!iLocal_136)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && !unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000) && unk_0x65851B2C8786EE74(iLocal_72))
					{
						if (!iLocal_137)
						{
							unk_0xDD353D0E9C789D0E(&iLocal_75);
							unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_72, 0xFFFFFFFF, 0x00000804, 0x00000002);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "f_distressed_loop", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xF96A174EE26D7588(0x00000000, iLocal_72, 0xFFFFFFFF);
							unk_0x75ABDC5F81978924(iLocal_75);
							unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
							unk_0xF82EA857DA10E0CD(&iLocal_75);
							iLocal_137 = 0x00000001;
						}
					}
				}
			}
			else
			{
				func_24();
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0x75CDA8644CD3B5F5(iLocal_71, 0x00000000, 0x00000000);
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_127 = 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (!iLocal_138)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					func_54();
					SYSTEM::WAIT(0x00000000);
					if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004))
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_GUN", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_AGG", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
					{
						unk_0xA3BF0AA5A2608191(iLocal_71);
						unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
						{
							unk_0x08082071A5F7C155(iLocal_72, 0x00000006, 0x00000000, 0x00000000);
							unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
					}
					func_24();
					iLocal_138 = 0x00000001;
					iLocal_127 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				func_54();
				SYSTEM::WAIT(0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					unk_0x08082071A5F7C155(iLocal_71, 0x00000007, 0x00000000, 0x00000000);
				}
				func_1(&uLocal_161, cLocal_146, "REHH3_BAS", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && unk_0xC844350D5D58C99A(iLocal_72))
				{
					unk_0xA3BF0AA5A2608191(iLocal_71);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0xBC43ED9FE28DB191(0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "f_distressed_loop", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_72, 0xFFFFFFFF, 0x00000804, 0x00000004);
					unk_0x96167B03C5A77156(0x00000000, unk_0x68F4C0EC296D3901(iLocal_72, 0x00000000), 1f, 0xFFFFFFFF, 3f, 0x00000000, 0x471C4000);
					unk_0xF96A174EE26D7588(0x00000000, iLocal_72, 0xFFFFFFFF);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "f_distressed_loop", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "f_distressed_loop", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
					unk_0x11AD11297DC58CC7(iLocal_71, 0x00000000);
					SYSTEM::WAIT(0x00002710);
					iLocal_136 = 0x00000001;
					iLocal_127 = 0x00000000;
				}
			}
			break;
		
		case 0x00000004:
			if (func_64())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_71, unk_0x16F2683693E537C9(), 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_NOO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							SYSTEM::SETTIMERB(0x00000000);
							iLocal_127 = 0x00000000;
						}
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
			{
				if (func_1(&uLocal_161, cLocal_146, "REHH3_FHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_127 = 0x00000000;
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				func_61();
				SYSTEM::WAIT(0x00000000);
				if (func_1(&uLocal_161, cLocal_146, "REHH3_ATT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_127 = 0x00000000;
				}
			}
			break;
	}
}

int func_64()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_65(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

struct<6> func_66()
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

void func_67()
{
	if (iLocal_58 == 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (unk_0x16102BEDC7435774(iLocal_71))
			{
				unk_0x0A94A109271BE75A(iLocal_71);
			}
			iLocal_57 = 0x00000008;
		}
	}
}

void func_68()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_69))
	{
		unk_0x142CC44DB769B57E(&iLocal_69);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_70))
	{
		unk_0x142CC44DB769B57E(&iLocal_70);
	}
	if (iLocal_58 == 0x00000001)
	{
		unk_0x55D0A2DB35045A35(iLocal_145);
		unk_0x8910D3D58E0132B8("TIMER_SCENE");
		if (!iLocal_102)
		{
			func_54();
			SYSTEM::WAIT(0x00000000);
			func_1(&uLocal_161, cLocal_146, "REHH1_TKA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x98EF6C2D1F172740(-1055.515f, -2533.221f, 19.3049f, 0xFFFFFFFF, 0x00000BB8, 0x000007D0, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				func_93(func_13(), 0x00000001, 0x00000064, 0x00000000, 0x00000001);
				func_92(0x000000C6, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001F40, 0x00000804, 0x00000004);
				unk_0xDD353D0E9C789D0E(&iLocal_75);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000BB8, 0x00400041);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8);
				unk_0x96167B03C5A77156(0x00000000, -1055.515f, -2533.221f, 19.3049f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x80AA372E04ED318D(0x00000000, -1046.832f, -2518.146f, 12.9447f, 2f, 0xFFFFFFFF, 0x471C4000, 0x3F000000);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(iLocal_75);
				unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
				unk_0xF82EA857DA10E0CD(&iLocal_75);
				unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_102 = 0x00000001;
			}
		}
		if (SYSTEM::TIMERB() < 0x00001B58)
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011E, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001A, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000111, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000004, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000010E, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000005, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000010F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000006, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000110, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000003, 0x00000001);
		}
		if (SYSTEM::TIMERB() > 0x00000BB8 && SYSTEM::TIMERB() < 0x00001B58)
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		else if (SYSTEM::TIMERB() > 0x00001B58)
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			unk_0x29D5132FBDCF2B1E(0x00000000);
			if (SYSTEM::TIMERB() > 0x00002134 && !iLocal_104)
			{
				if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x6C3F127AAF415E69() == 0x00000004) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xF3545351E9CBB11F() == 0x00000004))
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
					iLocal_104 = 0x00000001;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_71) || SYSTEM::TIMERB() > 0x00003A98)
		{
			if (unk_0x5A91F08DF773C39D(iLocal_71, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000) || SYSTEM::TIMERB() > 0x00003A98)
			{
				unk_0xEBA53F35D0085654(&iLocal_71);
				func_24();
			}
		}
	}
	else if (iLocal_58 == 0x00000002)
	{
		if (!iLocal_102)
		{
			func_54();
			SYSTEM::WAIT(0x00000000);
			func_1(&uLocal_161, cLocal_146, "REHH2_TKB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			iLocal_102 = 0x00000001;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (!unk_0x869EFD0BC0868856(iLocal_71))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_75);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
				unk_0x78A77CDD64392938(0x00000000, 0x00001194);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00400041);
				unk_0x96167B03C5A77156(0x00000000, 3323.43f, 5166.832f, 17.406f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, 3320.684f, 5186.017f, 17.4016f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, 3303.612f, 5185.269f, 18.7155f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(iLocal_75);
				unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
				unk_0xF82EA857DA10E0CD(&iLocal_75);
				unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001388, 0x00000804, 0x00000002);
				unk_0x0A94A109271BE75A(iLocal_71);
				SYSTEM::WAIT(0x000003E8);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				if (func_13() == 0x00000000)
				{
					func_72(0x00000009, 0x00000001, 0x00000000);
				}
				else if (func_13() == 0x00000001)
				{
					func_72(0x00000009, 0x00000001, 0x00000001);
				}
				else if (func_13() == 0x00000002)
				{
					func_72(0x00000009, 0x00000001, 0x00000002);
				}
				SYSTEM::WAIT(0x00001F40);
				func_24();
			}
		}
	}
	else if (iLocal_58 == 0x00000003)
	{
		if (SYSTEM::TIMERA() > 0x000003E8)
		{
			if (func_1(&uLocal_161, cLocal_146, "REHH3_JB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					unk_0x33CE5A9E32EA10B2(iLocal_72, 0x00000001);
					if (!unk_0xE4EDC4B0E92C078B(iLocal_99))
					{
						unk_0x142CC44DB769B57E(&iLocal_99);
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_100))
					{
						iLocal_100 = func_69(iLocal_72, 0x00000001, 0x00000091);
					}
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 17f, 1f, 0x40000000, 0x00000000);
					unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_72, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
					unk_0x11AD11297DC58CC7(iLocal_72, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					unk_0xF63400DBE3303D26("rghBoyfriend", &iLocal_160);
					unk_0x6DF7BF67E86AAE86(iLocal_72, iLocal_160);
					unk_0x0E2400AB9174FA81(0x00000004, 0xA49E591C, iLocal_160);
					unk_0x0E2400AB9174FA81(0x00000001, 0xF50B51B7, iLocal_160);
					unk_0x0E2400AB9174FA81(0x00000001, iLocal_160, 0xF50B51B7);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_57 = 0x00000007;
				}
			}
		}
	}
	else if (iLocal_58 == 0x00000005)
	{
		if (!iLocal_102)
		{
			func_54();
			SYSTEM::WAIT(0x00000000);
			func_1(&uLocal_161, cLocal_146, "REHH5_THX", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			iLocal_102 = 0x00000001;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_75);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00400041);
			unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000804, 0x00000002);
			unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8);
			unk_0x96167B03C5A77156(0x00000000, -346.029f, 632.2272f, 171.2525f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x96167B03C5A77156(0x00000000, -346.6342f, 627.3992f, 170.3573f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x96167B03C5A77156(0x00000000, -355.2473f, 622.1964f, 170.3572f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x96167B03C5A77156(0x00000000, -355.6499f, 615.3431f, 170.3572f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x96167B03C5A77156(0x00000000, -350.163f, 605.0463f, 170.7292f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x96167B03C5A77156(0x00000000, -333.177f, 594.991f, 170.7553f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_HANG_OUT_STREET", 0x00000000, 0x00000001);
			unk_0x78A77CDD64392938(0x00000000, 0xFFFFFFFF);
			unk_0x75ABDC5F81978924(iLocal_75);
			unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
			unk_0xF82EA857DA10E0CD(&iLocal_75);
			unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
			unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001388, 0x00000804, 0x00000002);
			unk_0x0A94A109271BE75A(iLocal_71);
		}
		SYSTEM::WAIT(0x000007D0);
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		SYSTEM::WAIT(0x00000BB8);
		func_24();
	}
}

int func_69(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_70(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_72(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0x00000000)
	{
		iParam2 = func_91();
	}
	if (func_90(iParam2) == 0x00000004)
	{
	}
	bVar0 = Global_1B416.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x8CD06866876216F2())
		{
			if (!func_88(func_89(iParam0), 0x00000003))
			{
				bVar0 = 0x00000000;
			}
		}
		else if (!func_88(func_89(iParam0), 0x00000004))
		{
			bVar0 = 0x00000000;
		}
	}
	Global_1B416.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_87(iParam0, 0x00000000);
			func_82(func_89(iParam0), func_90(iParam2), 0x00000001);
			iVar1 = unk_0x09AC81E49EA267F7(0x001B7740, 0x00200B20);
			switch (iParam2)
			{
				case 0x00000003:
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					unk_0x5D96D8530B3D0904(&(Global_200000[func_81() /*10930*/].f_181E.f_4F8), iParam0);
					func_78(0xFC6B2D44, 0x0000000F, 0x00000000);
					break;
			}
			func_77(iVar1);
			func_76(iParam0, iVar1);
			Global_1B028.f_F[iParam0] = unk_0x1C0640BA9A7327B3();
		}
	}
	else if (bVar0)
	{
		func_73(func_89(iParam0), func_90(iParam2));
	}
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (iParam1 > 0x00000003)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 0x00000000);
			func_74(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

void func_76(int iParam0, int iParam1)
{
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1B028.f_4[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
	}
	else
	{
		Global_1B028.f_4[iParam0] = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00124F80, 0x00200B20));
	}
}

void func_77(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF)
	{
		Global_1B028.f_3 = (unk_0x1C0640BA9A7327B3() + iParam0);
	}
	else
	{
		Global_1B028.f_3 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x01499700, 0x01808580));
	}
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_80(iParam1, iParam2))
	{
		iVar0 = func_79();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_80(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_1F6A = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_12();
		if (iParam1 == 0x00000004)
		{
			func_75(iParam0, 0x00000000, 0x00000001);
			func_75(iParam0, 0x00000001, 0x00000001);
			func_75(iParam0, 0x00000002, 0x00000001);
			func_74(iParam0, 0x00000000, 0x00000001);
			func_74(iParam0, 0x00000001, 0x00000001);
			func_74(iParam0, 0x00000002, 0x00000001);
		}
		else
		{
			if (func_86(iParam0, iParam1) == 0x00000001 && func_85(iParam0, iParam1) == 0x00000001)
			{
				bParam2 = 0x00000000;
			}
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 0x00000001);
			func_74(iParam0, iVar0, 0x00000001);
		}
		if (bParam2)
		{
			if (!Global_12B4E)
			{
				if (iParam1 != 0x00000004)
				{
					if (Global_4C1E != iParam1)
					{
						Global_1F4F[iParam1 /*4*/] = { func_84(iParam0) };
						Global_1F60[iParam1] = 0x00000001;
						Global_1F65[iParam1] = iParam0;
					}
					else if (iParam0 == Global_4C1E)
					{
					}
					else
					{
						Global_1F1E[0x00000001 /*6*/] = { func_84(iParam0) };
						Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
						func_83();
					}
				}
				else
				{
					Global_1F1E[0x00000001 /*6*/] = { func_84(iParam0) };
					Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
					func_83();
				}
			}
			else
			{
				Global_1F1E[0x00000001 /*6*/] = { func_84(iParam0) };
				Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
				func_83();
			}
		}
	}
}

void func_83()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_1F6A /*29*/].f_7)), 64);
	if (Global_1F7D == 0x00000000)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_1F1E[0x00000001 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_1F1E[0x00000001 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, "", 0x00000000);
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000000);
}

struct<4> func_84(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_85(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_87(int iParam0, int iParam1)
{
	Global_1B416.f_F3[func_91() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_88(int iParam0, int iParam1)
{
	if (func_86(iParam0, iParam1) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000068;
			break;
		
		case 0x00000001:
			return 0x00000069;
			break;
		
		case 0x00000002:
			return 0x0000006A;
			break;
		
		case 0x00000003:
			return 0x0000006B;
			break;
		
		case 0x00000004:
			return 0x0000006C;
			break;
		
		case 0x00000005:
			return 0x0000006D;
			break;
		
		case 0x00000006:
			return 0x0000006E;
			break;
		
		case 0x00000007:
			return 0x0000006F;
			break;
		
		case 0x00000008:
			return 0x00000070;
			break;
		
		case 0x00000009:
			return 0x0000005D;
			break;
	}
	return 0x00000091;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			return 0x00000003;
			break;
	}
	return 0x00000004;
}

int func_91()
{
	int iVar0;
	
	iVar0 = func_13();
	switch (iVar0)
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
		
		default:
			switch (func_50(0xFFFFFFFF))
			{
				case 0x00000000:
					return 0x00000003;
					break;
				
				case 0x00000001:
					return 0x00000004;
					break;
				
				case 0x00000002:
					return 0x00000005;
					break;
				
				case 0x00000003:
					return 0x00000006;
					break;
				
				case 0x00000004:
					return 0x00000007;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0x00000003;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_93(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_121(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_121(iParam0) == 0x00000004)
	{
		return;
	}
	func_94(func_121(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_120();
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
					func_119(0x00000063, 0x00000001);
					func_118(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_118(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_118(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_104(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_100(0x00000005))
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
							func_118(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_118(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_118(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_100(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_118(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_118(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_118(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_118(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_118(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_118(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_118(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_118(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_118(joaat("sp2_money_spent_property"), iParam3);
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
									func_118(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_118(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_118(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_118(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_118(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_118(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_100(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_118(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_118(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_118(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_118(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_118(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_118(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_99(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_119(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_119(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_119(0x00000060, iParam3);
					break;
			}
			func_119(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_97(iVar1);
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
					func_118(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_118(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_118(joaat("sp2_total_cash_earned"), iParam3);
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
	func_96(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_95(0x00000000);
	}
	return 0x00000001;
}

void func_95(bool bParam0)
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

void func_96(int iParam0)
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

void func_97(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_34(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_34(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_34(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_34(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_49(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_49(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_49(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_49(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_49(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_49(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_81() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_81() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_98(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_98(int iParam0)
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

void func_99(int iParam0)
{
	func_119(0x0000005D, iParam0);
	func_119(0x0000001D, iParam0);
	func_119(0x0000001E, iParam0);
}

bool func_100(int iParam0)
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
		return func_101(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_101(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_101(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_101(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_51(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_51(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_51(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_51(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_51(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_51(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_81() /*10930*/].f_181E.f_A, iParam0);
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_35();
	}
	iVar1 = func_103(iParam0, iParam1);
	uVar2 = func_102(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_102(int iParam0)
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

int func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_35();
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

int func_104(bool bParam0)
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
		func_33(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_105(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_105(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_106(iParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (func_19(0x0000000E) && !func_117(iParam0))
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
	if (func_116(&Global_4127F1))
	{
		if (func_114(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_107(&Global_4127F1, iParam0))
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

int func_107(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_19(0x0000000E) && !func_117(iParam1))
	{
		return 0x00000000;
	}
	if (func_114(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0x00000000);
	}
	func_110(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_108(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_108(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_19(0x0000000E) && !func_117(iParam1))
	{
		return 0x00000000;
	}
	if (func_114(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_109(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_109(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_110(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_111(uParam0, iVar0);
		iVar0++;
	}
	func_112(uParam0, (Global_4127F0 - 0.5f));
}

void func_111(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_112(var uParam0, float fParam1)
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

float func_113(var uParam0)
{
	return uParam0->f_50;
}

bool func_114(var uParam0, int iParam1)
{
	return func_115(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_115(var uParam0, int iParam1)
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

bool func_116(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_117(int iParam0)
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

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_119(int iParam0, int iParam1)
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

void func_120()
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

int func_121(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_122()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (!func_129())
			{
				if (unk_0x16102BEDC7435774(iLocal_71))
				{
					unk_0x0A94A109271BE75A(iLocal_71);
				}
				if (unk_0xD1960163A3042274(iLocal_71, 0x4924437D) != 0x00000001 && unk_0xD1960163A3042274(iLocal_71, 0x4924437D) != 0x00000000)
				{
					unk_0xE185F110925D87DB(iLocal_71, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 6f, 0x40000000, 0x40000000, 0x00000000);
				}
				if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_71, 0x00000000, 0x00000000);
				}
				if (!iLocal_110)
				{
					func_124(0x00000000);
					func_54();
					SYSTEM::WAIT(0x00000000);
					if (!func_60())
					{
						if (iLocal_58 == 0x00000001)
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (iLocal_58 == 0x00000002)
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (iLocal_58 == 0x00000003)
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (iLocal_58 == 0x00000005)
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						iLocal_110 = 0x00000001;
					}
				}
			}
			else
			{
				iLocal_110 = 0x00000000;
				if (unk_0xD1960163A3042274(iLocal_71, 0x4924437D) == 0x00000001 && unk_0xD1960163A3042274(iLocal_71, 0x4924437D) == 0x00000000)
				{
					unk_0xA3BF0AA5A2608191(iLocal_71);
				}
			}
		}
		else if (!unk_0x16102BEDC7435774(iLocal_71))
		{
			unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
			unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
			unk_0xBF541ED34EA81209(iLocal_71, 0x00000000);
		}
	}
}

int func_123()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105)
		{
			if (func_128(&uLocal_161, cLocal_146, &Local_107, &Local_106, 0x00000008, 0x00000000, 0x00000000))
			{
				iLocal_105 = 0x00000000;
			}
		}
	}
	else if ((!iLocal_105 && unk_0x25037C66EB32B076()) && !func_126())
	{
		Local_107 = { func_125() };
		Local_106 = { func_66() };
		func_61();
		iLocal_105 = 0x00000001;
	}
}

struct<6> func_125()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_126()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_127("REHH1_VEH") || func_127("REHH2_VEH")) || func_127("REHH3_VEH")) || func_127("REHH4_VEH")) || func_127("REHH5_VEH")) || func_127("REHH1_VEH2")) || func_127("REHH2_VEH2")) || func_127("REHH3_VEH2")) || func_127("REHH4_VEH2")) || func_127("REHH5_VEH2")) || func_127("REHH1_WLK")) || func_127("REHH2_WLK")) || func_127("REHH3_WLK")) || func_127("REHH4_WLK")) || func_127("REHH5_WLK")) || func_127("REHH1_SLR")) || func_127("REHH4_SLR")) || func_127("REHH1_SLW")) || func_127("REHH2_SLW")) || func_127("REHH3_SLW")) || func_127("REHH4_SLW")) || func_127("REHH5_SLW")) || func_127("REHH1_OUT")) || func_127("REHH2_GETOUT")) || func_127("REHH3_GETOUT")) || func_127("REHH5_GETOUT")) || func_127("REHH1_JACK")) || func_127("REHH2_JACK")) || func_127("REHH3_JACK")) || func_127("REHH5_JACK")) || func_127("REHH1_GUN")) || func_127("REHH2_SHOOT")) || func_127("REHH3_SHOOT")) || func_127("REHH5_SHOO")) || func_127("REHH1_1HOUR")) || func_127("REHH2_1HOUR")) || func_127("REHH1_HHOUR")) || func_127("REHH2_HHOUR")) || func_127("REHH1_CRASH")) || func_127("REHH1_WAY")) || func_127("REHH2_NEAR")) || func_127("REHH3_NEAR")) || func_127("REHH5_NEAR")) || func_127("REHH2_CULT")) || func_127("REHH3_CULT")) || func_127("REHH5_CULT"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_127(char* sParam0)
{
	var uVar0;
	
	if (func_60())
	{
		MemCopy(&uVar0, {func_125()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_128(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_2(sParam2, iParam4, 0x00000000);
}

int func_129()
{
	if (iLocal_58 == 0x00000005)
	{
		if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if ((((!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) && !unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) && !unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")))
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
			if (((!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) != joaat("rhino"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_130()
{
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		if (!iLocal_118)
		{
			iLocal_120 = unk_0x1C0640BA9A7327B3();
			iLocal_118 = 0x00000001;
		}
		else
		{
			iLocal_122 = unk_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_122 = 0x00000000;
		iLocal_121 = 0x00000000;
		iLocal_118 = 0x00000000;
		iLocal_119 = 0x00000000;
	}
	if ((iLocal_122 - iLocal_120) > 0x00000BB8 && (iLocal_122 - iLocal_121) > 0x00001770)
	{
		if (!func_60())
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_SLR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_121 = iLocal_122;
		}
	}
	if ((iLocal_122 - iLocal_120) > 0x0000C350 && !iLocal_119)
	{
		func_124(0x00000000);
		func_54();
		SYSTEM::WAIT(0x00000000);
		if (!func_60())
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (iLocal_58 == 0x00000002)
			{
				func_1(&uLocal_161, cLocal_146, "REHH2_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (iLocal_58 == 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					if (!unk_0xFBF1556B75C783FC(iLocal_71))
					{
						unk_0x8FB4E06C94958F84(iLocal_71);
					}
				}
				func_1(&uLocal_161, cLocal_146, "REHH3_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (iLocal_58 == 0x00000005)
			{
				func_1(&uLocal_161, cLocal_146, "REHH5_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_119 = 0x00000001;
		}
	}
	if ((iLocal_122 - iLocal_120) > 0x0000EA60 && iLocal_119)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			unk_0x33CE5A9E32EA10B2(iLocal_71, 0x00000001);
			if (unk_0x16102BEDC7435774(iLocal_71))
			{
				if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
				{
					if (unk_0x5A91F08DF773C39D(iLocal_71, vLocal_77, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
					{
						unk_0x96167B03C5A77156(iLocal_71, vLocal_77, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					}
					else
					{
						unk_0x01E4BB5190DF7317(iLocal_71, 0x471C4000, 0x00000000);
					}
					if (iLocal_58 == 0x00000001)
					{
						unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
					unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
					unk_0x0A94A109271BE75A(iLocal_71);
					func_59();
				}
			}
		}
	}
}

void func_131()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (unk_0xE3614539F8B5C807(iLocal_71))
		{
			if (!iLocal_115)
			{
				iLocal_116 = unk_0x1C0640BA9A7327B3();
				iLocal_115 = 0x00000001;
			}
			else
			{
				iLocal_117 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			iLocal_115 = 0x00000000;
		}
	}
	if ((iLocal_117 - iLocal_116) > 0x00015F90)
	{
		func_124(0x00000000);
		func_54();
		SYSTEM::WAIT(0x00000000);
		if (iLocal_58 == 0x00000001)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_WLK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000002)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_WLK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000003)
		{
			func_1(&uLocal_161, cLocal_146, "REHH3_WLK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000005)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_WLK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			unk_0x33CE5A9E32EA10B2(iLocal_71, 0x00000001);
			if (unk_0x5A91F08DF773C39D(iLocal_71, vLocal_77, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0x96167B03C5A77156(iLocal_71, vLocal_77, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			}
			else
			{
				unk_0x01E4BB5190DF7317(iLocal_71, 0x471C4000, 0x00000000);
			}
			if (iLocal_58 == 0x00000001)
			{
				unk_0xF3268524E9BE6D6E(iLocal_71, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			unk_0xFADC0A217229F6B5(iLocal_71, 0x00000001);
			if (unk_0x16102BEDC7435774(iLocal_71))
			{
				unk_0x0A94A109271BE75A(iLocal_71);
			}
			func_59();
		}
	}
}

void func_132()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xC42A92762C58E1B9(iLocal_71, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_99))
				{
					iLocal_99 = func_69(iLocal_71, 0x00000000, 0x00000091);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_69))
				{
					unk_0x142CC44DB769B57E(&iLocal_69);
				}
			}
			else
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_69))
				{
					iLocal_69 = func_133(vLocal_77, 0x00000001);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_99))
				{
					unk_0x142CC44DB769B57E(&iLocal_99);
				}
			}
		}
		else if (!unk_0xE4EDC4B0E92C078B(iLocal_99))
		{
			iLocal_99 = func_69(iLocal_71, 0x00000000, 0x00000091);
		}
		if (((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x405E212DDE472467(iLocal_71, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_77, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_69))
			{
				iLocal_69 = func_133(vLocal_77, 0x00000001);
			}
		}
		else if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_77, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_69))
			{
				unk_0x142CC44DB769B57E(&iLocal_69);
			}
		}
	}
}

int func_133(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_134()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0x405E212DDE472467(iLocal_71, 0x00000001)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_71, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (func_136())
			{
				func_56(0x00000000);
				iLocal_103 = 0x00000000;
			}
		}
		else if (!unk_0xFBF1556B75C783FC(iLocal_71))
		{
			if (func_60() && !iLocal_103)
			{
				func_56(0x00000001);
				iLocal_103 = 0x00000001;
			}
		}
		if (unk_0xFBF1556B75C783FC(iLocal_71))
		{
			unk_0xC722B6355F3075E5(iLocal_71, 0x00000000);
		}
		if (func_135("REHH3_CHT3_7"))
		{
			unk_0x8D4C354BB8991817(iLocal_71, 0x00000001, 0x00000001);
		}
		if (func_135("REHH3_CHT6_5"))
		{
			unk_0x8D4C354BB8991817(iLocal_71, 0x00000000, 0x00000001);
		}
		if (func_135("REHH3_CHT8_3"))
		{
			unk_0x8D4C354BB8991817(iLocal_71, 0x00000001, 0x00000001);
		}
		if ((func_127("REHH3_CHT8M") || func_127("REHH3_CHT8F")) || func_127("REHH3_CHT8T"))
		{
			unk_0x8D4C354BB8991817(iLocal_71, 0x00000000, 0x00000001);
		}
	}
}

int func_135(char* sParam0)
{
	var uVar0;
	
	if (func_60())
	{
		MemCopy(&uVar0, {func_66()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_136()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_137()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (iLocal_58 == 0x00000001)
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_71, unk_0x728870EB733D12A1(), 0x00000000))
				{
					if (unk_0xE608C809F9416F00(unk_0x728870EB733D12A1()))
					{
						if (!func_127("REHH1_CRASH"))
						{
							func_124(0x00000000);
							func_54();
							SYSTEM::WAIT(0x00000000);
							func_1(&uLocal_161, cLocal_146, "REHH1_CRASH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
			}
		}
		if (!iLocal_112)
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000001) && unk_0xC42A92762C58E1B9(iLocal_71, unk_0x728870EB733D12A1(), 0x00000000))
				{
					func_124(0x00000000);
					func_54();
					SYSTEM::WAIT(0x00000000);
					if (!func_60())
					{
						if (iLocal_58 == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_OUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (iLocal_58 == 0x00000002)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_GETOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (iLocal_58 == 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								if (!unk_0xFBF1556B75C783FC(iLocal_71))
								{
									unk_0x8FB4E06C94958F84(iLocal_71);
								}
							}
							func_1(&uLocal_161, cLocal_146, "REHH3_GETOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (iLocal_58 == 0x00000005)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_GETOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_112 = 0x00000001;
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_71, unk_0x728870EB733D12A1(), 0x00000000))
			{
				iLocal_112 = 0x00000000;
			}
		}
		if (!iLocal_113)
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
			{
				func_124(0x00000000);
				func_54();
				SYSTEM::WAIT(0x00000000);
				if (!func_60())
				{
					if (iLocal_58 == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_JACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_JACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000003)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_JACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000005)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_JACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_113 = 0x00000001;
				}
			}
		}
		else if (!unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
		{
			iLocal_113 = 0x00000000;
		}
		if (!iLocal_114)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_124(0x00000000);
				func_54();
				SYSTEM::WAIT(0x00000000);
				if (!func_60())
				{
					if (iLocal_58 == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_GUN", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_SHOOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000003)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
						{
							if (!unk_0xFBF1556B75C783FC(iLocal_71))
							{
								unk_0x8FB4E06C94958F84(iLocal_71);
							}
						}
						func_1(&uLocal_161, cLocal_146, "REHH3_SHOOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000005)
					{
					}
					iLocal_114 = 0x00000001;
				}
			}
		}
		else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			iLocal_114 = 0x00000000;
		}
	}
}

void func_138()
{
	if (func_140(vLocal_77))
	{
		func_124(0x00000000);
		func_54();
		SYSTEM::WAIT(0x00000000);
		if (iLocal_58 == 0x00000001)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_WAY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000002)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000003)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (!unk_0xFBF1556B75C783FC(iLocal_71))
				{
					unk_0x8FB4E06C94958F84(iLocal_71);
				}
			}
			func_1(&uLocal_161, cLocal_146, "REHH3_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000005)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (func_139())
	{
		func_124(0x00000000);
		func_54();
		SYSTEM::WAIT(0x00000000);
		if (iLocal_58 == 0x00000001)
		{
		}
		else if (iLocal_58 == 0x00000002)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_NEAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000003)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (!unk_0xFBF1556B75C783FC(iLocal_71))
				{
					unk_0x8FB4E06C94958F84(iLocal_71);
				}
			}
			func_1(&uLocal_161, cLocal_146, "REHH3_NEAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iLocal_58 == 0x00000005)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_NEAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

int func_139()
{
	if (func_13() == 0x00000002)
	{
		if (func_58())
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

int func_140(vector3 vParam0)
{
	if (func_13() == 0x00000002)
	{
		if (func_58() && !Global_7920)
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

void func_141()
{
	if (!func_126())
	{
		func_124(0x00000001);
	}
	if (!func_60())
	{
		switch (iLocal_86)
		{
			case 0x00000000:
				if (iLocal_58 == 0x00000001)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
				}
				else if (iLocal_58 == 0x00000002)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
				}
				else if (iLocal_58 == 0x00000003)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3() + 2000;
				}
				else if (iLocal_58 == 0x00000005)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
				}
				iLocal_86++;
				break;
			
			case 0x00000001:
				if (iLocal_88 < unk_0x1C0640BA9A7327B3())
				{
					if (iLocal_58 == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000003)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_58 == 0x00000005)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_86++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_88 < unk_0x1C0640BA9A7327B3())
				{
					if (iLocal_58 == 0x00000001)
					{
						if (func_13() == 0x00000000)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000002)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (iLocal_58 == 0x00000002)
					{
						if (func_13() == 0x00000000)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTm2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTf2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000002)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTt2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (iLocal_58 == 0x00000003)
					{
						if (func_13() == 0x00000000)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000002)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (iLocal_58 == 0x00000005)
					{
						if (func_13() == 0x00000000)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_RESPM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_RESPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000002)
						{
							if (!bLocal_90)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_RESPT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					iLocal_86++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_58 == 0x00000001)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
				}
				else if (iLocal_58 == 0x00000002)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
				}
				else if (iLocal_58 == 0x00000003)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3() + 500;
				}
				else if (iLocal_58 == 0x00000005)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3();
				}
				iLocal_86++;
				break;
			
			case 0x00000004:
				if (iLocal_88 < unk_0x1C0640BA9A7327B3())
				{
					if (iLocal_58 == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_86++;
					}
					else if (iLocal_58 == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_86++;
					}
					else if (iLocal_58 == 0x00000003)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_86++;
					}
					else if (iLocal_58 == 0x00000005)
					{
						if (bLocal_90 && !bLocal_92)
						{
							if (func_13() == 0x00000000)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (func_13() == 0x00000001)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (func_13() == 0x00000002)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_86++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (iLocal_58 == 0x00000001)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatm", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatf", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatt", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x00000006:
				if (iLocal_58 == 0x00000001)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_CHAT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000005)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1b", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1c", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1d", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iLocal_86++;
				break;
			
			case 0x00000007:
				if (iLocal_58 == 0x00000001)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATb", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATc", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATd", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x00000008:
				if (iLocal_58 == 0x00000001)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_CHATe", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT4", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT4", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000005)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2b", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2c", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2d", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iLocal_86++;
				break;
			
			case 0x00000009:
				if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2e", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x0000000A:
				if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT5", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT5", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000005)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2f", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2g", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2h", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iLocal_86++;
				break;
			
			case 0x0000000B:
				if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x0000000C:
				if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT6", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT6", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000005)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3b", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3c", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3d", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iLocal_86++;
				break;
			
			case 0x0000000D:
				if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x0000000E:
				if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT7", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT7", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000005)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4b", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4c", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4d", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iLocal_86++;
				break;
			
			case 0x0000000F:
				if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_RUNOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x00000010:
				if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT8", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT8", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x00000011:
				if (iLocal_58 == 0x00000003)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3() + 700;
				}
				iLocal_86++;
				break;
			
			case 0x00000012:
				if (iLocal_58 == 0x00000002)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_13() == 0x00000000)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_13() == 0x00000002)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iLocal_86++;
				break;
			
			case 0x00000013:
				if (iLocal_58 == 0x00000002)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT9", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_58 == 0x00000003)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT9", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			
			case 0x00000014:
				if (iLocal_58 == 0x00000003)
				{
					iLocal_88 = unk_0x1C0640BA9A7327B3() + 300;
				}
				iLocal_86++;
				break;
			
			case 0x00000015:
				if (iLocal_88 < unk_0x1C0640BA9A7327B3())
				{
					if (iLocal_58 == 0x00000003)
					{
						if (func_13() == 0x00000000)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000002)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					iLocal_86++;
				}
				break;
			
			case 0x00000016:
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_71, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, 0xFFFFFFFF, 0x00000021, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_86++;
				break;
			}
	}
}

void func_142()
{
	if (iLocal_58 != 0x00000003)
	{
		if (func_145())
		{
			SYSTEM::SETTIMERA(0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_77, 3f, 3f, 2f, 0x00000001, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(iLocal_71, vLocal_77, Global_13, 0x00000000, 0x00000001, 0x00000000))
				{
					if (func_144(0x00000001, 0x00000000, 0x00000001))
					{
						func_143();
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), (10.5f + 2f), 0x00000003, 0x00000000);
						}
						unk_0x8FB4E06C94958F84(iLocal_71);
						iLocal_57 = 0x00000006;
					}
				}
			}
		}
	}
	else if (bLocal_90)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_72))
		{
			iLocal_57 = 0x00000007;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0x00000000, 0x00000001, 0x00000000) || (unk_0x5A91F08DF773C39D(iLocal_71, 824.8886f, 1275.671f, 359.4312f, Global_13, 0x00000001, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(iLocal_71, unk_0x16F2683693E537C9(), 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000)))
			{
				func_54();
				SYSTEM::WAIT(0x00000000);
				func_1(&uLocal_161, cLocal_146, "REHH3_CHT10", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && !unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
					{
						unk_0x8FB4E06C94958F84(iLocal_71);
						unk_0xDD353D0E9C789D0E(&iLocal_75);
						unk_0xBC43ED9FE28DB191(0x00000000);
						unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_72, 0xFFFFFFFF, 0x00000804, 0x00000004);
						unk_0x75CDA8644CD3B5F5(0x00000000, 0x000001F4, 0x00000000);
						unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 5f, 1f, 0x40000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "come_here_idle_c", 2f, -2f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF96A174EE26D7588(0x00000000, iLocal_72, 0xFFFFFFFF);
						unk_0x75ABDC5F81978924(iLocal_75);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
						unk_0xF82EA857DA10E0CD(&iLocal_75);
					}
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
					{
						unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), (10.5f + 2f), 0x00000002, 0x00000000);
					}
				}
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_57 = 0x00000006;
			}
		}
	}
}

void func_143()
{
	Global_4CD7 = 0x00000000;
	func_22();
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
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

int func_145()
{
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x82CCEAB29E9451DD(iLocal_71, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_77, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_146()
{
	if (bLocal_92)
	{
		if (unk_0xC844350D5D58C99A(iLocal_72))
		{
			if ((((unk_0xEB6A8945D1AC98A1(iLocal_72) || !unk_0x12DE711B1C681E9E(iLocal_72, unk_0x16F2683693E537C9(), 150f, 150f, 150f, 0x00000000, 0x00000001, 0x00000000)) || SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_77) < 250f) || SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_79) < 250f) || iLocal_94)
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_100))
				{
					unk_0x142CC44DB769B57E(&iLocal_100);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_101))
				{
					unk_0x142CC44DB769B57E(&iLocal_101);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					unk_0x08082071A5F7C155(iLocal_72, 0x00000006, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E(iLocal_72, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x6DAD7906B73F064D(&iLocal_72);
				}
				func_54();
				SYSTEM::WAIT(0x00000000);
				func_1(&uLocal_161, cLocal_146, "REHH5_CHT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				unk_0x6DAD7906B73F064D(&iLocal_72);
				if (unk_0xC844350D5D58C99A(iLocal_139))
				{
					unk_0x046C362CF15F1935(&iLocal_139);
				}
				bLocal_92 = 0x00000000;
			}
			else
			{
				if (!iLocal_95)
				{
					if (!func_60())
					{
						if (func_13() == 0x00000000)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else if (func_13() == 0x00000002)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_95 = 0x00000001;
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
				{
					func_154(&iLocal_72, &iLocal_100, &iLocal_139, &iLocal_101);
					func_153(&iLocal_72, &iLocal_100, &iLocal_139, &iLocal_101);
					func_147(iLocal_139, unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_153, &uLocal_156, &vLocal_158, &fLocal_157, &uLocal_159, 0f, 0f, 0f, 0x000005DC, 0f);
					if (unk_0x12DE711B1C681E9E(iLocal_72, unk_0x16F2683693E537C9(), 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (iLocal_87 < unk_0x1C0640BA9A7327B3())
						{
							if (!func_60())
							{
								if (func_64())
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_FHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_FEAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								iLocal_87 = unk_0x1C0640BA9A7327B3() + 8000;
							}
						}
						if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
						{
							if (!func_127("REHH5_SHO"))
							{
								func_54();
								SYSTEM::WAIT(0x00000000);
								func_1(&uLocal_161, cLocal_146, "REHH5_SHO", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(iLocal_72))
						{
							if ((unk_0xE3614539F8B5C807(iLocal_72) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004)) && unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()))
							{
								iLocal_94 = 0x00000001;
							}
						}
					}
					if (!iLocal_93 && !unk_0xEB6A8945D1AC98A1(iLocal_72))
					{
						if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iLocal_72, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_72, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							func_54();
							SYSTEM::WAIT(0x00000000);
							func_1(&uLocal_161, cLocal_146, "REHH5_GRM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							iLocal_93 = 0x00000001;
						}
					}
				}
			}
		}
	}
}

void func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (((((((unk_0xC844350D5D58C99A(iParam1) && iParam0 != iParam1) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam1))) && unk_0xF79A7BCA9E38BBBC(iParam1)) && func_152(iParam0))
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), *uParam4, 0x00000001) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x8A5E176FF719A014(*uParam2, *uParam3, vParam7) };
				*uParam3 = func_151(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001));
				func_150(iParam1, uParam4, uParam5);
			}
			if (!unk_0x03068588A1FCED1A(iParam0))
			{
				*uParam6 = unk_0x1C0640BA9A7327B3();
			}
			else if ((unk_0x1C0640BA9A7327B3() - *uParam6) > iParam8)
			{
				if (func_149(iParam0, iParam1, 0x00000001) > fParam9 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), *uParam2, 0x00000001) > 20f)
				{
					if (!func_148(*uParam2))
					{
						if (!unk_0x8E28E832BEAC3DCE(*uParam2, 3f))
						{
							unk_0x745CE398A4B0A3C6(*uParam2, 1.5f, 0x00000000);
							unk_0x28F5E4DA506AC0CA(*uParam2, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iParam0, *uParam2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iParam0, *uParam3);
							unk_0xB9FD7450C0DAB575(iParam0, 0x40A00000);
							unk_0x1AEF7184B203A58D(iParam0, 10f);
							unk_0x56FDC9ADE35F7DB0(iParam0, 0x00000001, 0x00000001, 0x00000000);
							*uParam6 = unk_0x1C0640BA9A7327B3();
						}
						else
						{
							vVar0 = { unk_0x8A5E176FF719A014(vLocal_158, fLocal_157, vParam7) };
							if (!func_148(vVar0))
							{
								if (!unk_0x8E28E832BEAC3DCE(vVar0, 2f))
								{
									unk_0x745CE398A4B0A3C6(vVar0, 1.5f, 0x00000000);
									unk_0x28F5E4DA506AC0CA(vVar0, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0xA47B46945FF6DE74(iParam0, vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									unk_0xD8F6A53F4799FAFE(iParam0, fLocal_157);
									unk_0xB9FD7450C0DAB575(iParam0, 0x40A00000);
									unk_0x1AEF7184B203A58D(iParam0, 10f);
									unk_0x56FDC9ADE35F7DB0(iParam0, 0x00000001, 0x00000001, 0x00000000);
									*uParam6 = unk_0x1C0640BA9A7327B3();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_148(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_149(int iParam0, int iParam1, bool bParam2)
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

void func_150(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			*uParam1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			*uParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
	}
}

float func_151(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (!unk_0xBBA8A868118C90ED(iParam0, 0xFFFFFFFF, 0x00000000))
			{
				iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0xC844350D5D58C99A(*iParam2))
	{
		if (unk_0xDF1306B443CD3D15(*iParam2, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(*iParam0))
			{
				if (unk_0xC42A92762C58E1B9(*iParam0, *iParam2, 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(*iParam1))
					{
						unk_0x142CC44DB769B57E(iParam1);
					}
					iVar0 = 0x00000001;
				}
				else if (!unk_0xE4EDC4B0E92C078B(*iParam1))
				{
					*iParam1 = func_69(*iParam0, 0x00000001, 0x00000091);
				}
			}
			if (!unk_0xE4EDC4B0E92C078B(*iParam3))
			{
				if (iVar0 == 0x00000001)
				{
					*iParam3 = func_133(unk_0x68F4C0EC296D3901(*iParam2, 0x00000001), 0x00000000);
					unk_0x61755AC17D8F538E(*iParam3, 0x00000001);
					unk_0x2A065371C9D96655(*iParam3, 0x00000009);
					unk_0xDC5B2F9D0CCE3A10(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0xAC14F6E4B17D7835(*iParam3) };
				vVar2 = { unk_0x68F4C0EC296D3901(*iParam2, 0x00000001) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * SYSTEM::TIMESTEP()));
				unk_0x2F9282246F89FFD1(*iParam3, vVar1);
				if (iVar0 == 0x00000000)
				{
					unk_0x142CC44DB769B57E(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam3))
			{
				unk_0x142CC44DB769B57E(iParam3);
			}
			if (!unk_0xEB6A8945D1AC98A1(*iParam0))
			{
				if (!unk_0xE4EDC4B0E92C078B(*iParam1))
				{
					*iParam1 = func_69(*iParam0, 0x00000001, 0x00000091);
				}
			}
		}
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x142CC44DB769B57E(iParam1);
			}
			unk_0x6DAD7906B73F064D(iParam0);
		}
		else
		{
			iVar0 = 0x00000001;
			if (!unk_0x405E212DDE472467(*iParam0, 0x00000000))
			{
			}
			else if (unk_0xC844350D5D58C99A(*iParam2))
			{
				if (unk_0xDF1306B443CD3D15(*iParam2, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(*iParam0, *iParam2, 0x00000000))
					{
						iVar1 = 0x00000001;
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(*iParam2))
	{
		if (unk_0xDF1306B443CD3D15(*iParam2, 0x00000000))
		{
			if (iVar0 == 0x00000001 || iVar1 == 0x00000001)
			{
			}
			else
			{
				unk_0x78CCB85A0DC35709(*iParam2);
				unk_0x7AA3AFA47C4179D1(*iParam2);
				unk_0x06FF977AA95DCCE3(*iParam2, 0x00000000);
				unk_0x046C362CF15F1935(iParam2);
				if (unk_0xE4EDC4B0E92C078B(*iParam3))
				{
					unk_0x142CC44DB769B57E(iParam3);
				}
			}
		}
		else
		{
			unk_0x78CCB85A0DC35709(*iParam2);
			unk_0x7AA3AFA47C4179D1(*iParam2);
			unk_0x06FF977AA95DCCE3(*iParam2, 0x00000000);
			unk_0x046C362CF15F1935(iParam2);
			if (unk_0xE4EDC4B0E92C078B(*iParam3))
			{
				unk_0x142CC44DB769B57E(iParam3);
			}
		}
	}
}

void func_155()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(iLocal_72, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xBF75E4DF4C367CD9(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0x00000000, 0f, 0x00000000);
			}
			if (unk_0xBF75E4DF4C367CD9(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0x00000000, 0f, 0x00000000);
			}
		}
		else
		{
			if (unk_0xBF75E4DF4C367CD9(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0x00000001, 0f, 0x00000000);
			}
			if (unk_0xBF75E4DF4C367CD9(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0x00000001, 0f, 0x00000000);
			}
		}
	}
}

void func_156()
{
	if (!bLocal_90)
	{
		if (iLocal_58 == 0x00000003)
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_84, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0x523BCC9DC80CD82F(iLocal_81);
				unk_0x4E09E67A27F104A7("move_m@brave");
				if (unk_0xB87F6CF6E5628C67(iLocal_81) && unk_0x59F02DA2266A744C("move_m@brave"))
				{
					iLocal_72 = unk_0x36F2404464202779(0x0000001A, iLocal_81, vLocal_84, fLocal_85, 0x00000001, 0x00000001);
					unk_0x64F9F278AB9DCA2C(iLocal_72, 0x00000000, 0x00000002, 0x00000001, 0x00000000);
					unk_0x64F9F278AB9DCA2C(iLocal_72, 0x00000003, 0x00000000, 0x00000002, 0x00000000);
					unk_0x11AD11297DC58CC7(iLocal_72, 0x00000001);
					unk_0x4E885A246A9D983A(iLocal_72, 0x0000002A, 0x00000001);
					unk_0x1365063FA6365BE8(iLocal_72, 0x00000001);
					unk_0x79C43E2BAC7C696F(iLocal_72, "move_m@brave", 0x3E800000);
					unk_0x4E885A246A9D983A(iLocal_72, 0x00000089, 0x00000001);
					func_160(&uLocal_161, 0x00000004, iLocal_72, sLocal_148, 0x00000000, 0x00000001);
					unk_0xC6EB89C59F2AF6B8(iLocal_72, "random@hitch_lift", "idle_a", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x0C8C0C840C2D1AD2(iLocal_72, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000004);
					unk_0x71199B01895C6202(iLocal_81);
					bLocal_90 = 0x00000001;
				}
			}
		}
		else if (iLocal_58 == 0x00000005)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_67, 0x00000001) > 320f && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_71, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
					{
						if (unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x09AC81E49EA267F7(0x00000002, 0x00000005), &vLocal_62, 0x00000001, 0x40400000, 0x00000000))
						{
							if (!unk_0x8E28E832BEAC3DCE(vLocal_62, 7f) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_62) < 110f)
							{
								unk_0x523BCC9DC80CD82F(iLocal_81);
								if (unk_0xB87F6CF6E5628C67(iLocal_81))
								{
									func_61();
									SYSTEM::WAIT(0x00000000);
									if (func_159(&uLocal_161, cLocal_146, "REHH5_CHS", "REHH5_CHS_1", 0x00000004, 0x00000000, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_71))
									{
										iLocal_139 = unk_0x122AAB0B1D6F55AD(iLocal_82, vLocal_62, func_157(vLocal_62, func_158(unk_0xD803B885F5E47A62()), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
										unk_0xC002508A277213DE(iLocal_139, 0x00000086, 0x00000086);
										unk_0xCCD53AC1B5D5E456(iLocal_139, 0f);
										iLocal_72 = unk_0x852A19533F896693(iLocal_139, 0x0000001A, iLocal_81, 0xFFFFFFFF, 0x00000001, 0x00000001);
										unk_0x64F9F278AB9DCA2C(iLocal_72, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
										unk_0x64F9F278AB9DCA2C(iLocal_72, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
										unk_0x4E885A246A9D983A(iLocal_72, 0x0000002A, 0x00000001);
										unk_0x33CE5A9E32EA10B2(iLocal_72, 0x00000001);
										func_160(&uLocal_161, 0x00000004, iLocal_72, sLocal_148, 0x00000000, 0x00000001);
										unk_0xB9FD7450C0DAB575(iLocal_139, 0x40A00000);
										unk_0x89258193691A7600(iLocal_72, iLocal_139, iLocal_71, 0x00000006, 60f, 0x000C0024, -1f, -1f, 0x00000001);
										unk_0x6C3AE6E278DB3D0E(iLocal_72, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0xFADC0A217229F6B5(iLocal_72, 0x00000001);
										unk_0x71199B01895C6202(iLocal_81);
										unk_0x71199B01895C6202(iLocal_82);
										unk_0x1AEF7184B203A58D(iLocal_139, (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) + 15f));
										if (unk_0xE4EDC4B0E92C078B(iLocal_69))
										{
											unk_0x142CC44DB769B57E(&iLocal_69);
										}
										func_61();
										while (func_60())
										{
											SYSTEM::WAIT(0x00000000);
										}
										func_128(&uLocal_161, cLocal_146, "REHH5_CHS", "REHH5_CHS_2", 0x00000004, 0x00000000, 0x00000000);
										bLocal_92 = 0x00000001;
										bLocal_90 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_157(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)
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

Vector3 func_158(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_159(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	Global_5524 = 0x00000001;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_2(sParam2, iParam4, 0x00000000);
}

void func_160(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_161()
{
	if (!iLocal_144 && !func_60())
	{
		if (iLocal_142 == 0x00000006 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000006 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000007 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000007 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM4", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000008 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM5", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000008 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM6", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000009 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM7", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000009 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM8", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000A && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM9", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000A && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM10", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000B && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM11", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000B && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM12", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000C && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM13", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000C && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM14", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000D && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM15", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000D && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM16", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000E && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM17", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000E && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM18", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000F && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM19", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x0000000F && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM20", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000010 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM21", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000010 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM22", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000011 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM23", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000011 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM24", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000012 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM25", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000012 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM26", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000013 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM27", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000013 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM28", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000014 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM29", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000014 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM30", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000015 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM31", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000015 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM32", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000016 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM33", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000016 && iLocal_141 == 0x0000001E)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM34", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
		if (iLocal_142 == 0x00000017 && iLocal_141 == 0x00000000)
		{
			if (iLocal_58 == 0x00000001)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM35", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_144 = 0x00000001;
		}
	}
}

void func_162()
{
	iLocal_123 = func_167(func_168()) * 1000;
	iLocal_123 = (iLocal_123 + func_166(func_168()) * 1000 * 60);
	if (!iLocal_132)
	{
		if ((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) || (iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0))
		{
			func_163((((iLocal_142 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_141 * 1000 - func_167(func_168()) * 1000)) - 0x0015F900), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		else
		{
			func_163(((iLocal_142 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_141 * 1000 - func_167(func_168()) * 1000)), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	else if ((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) || (iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0))
	{
		func_163((((iLocal_142 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_141 * 1000 - func_167(func_168()) * 1000)) - 0x0015F900), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	else
	{
		func_163(((iLocal_142 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_141 * 1000 - func_167(func_168()) * 1000)), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	if ((iLocal_142 == func_166(func_168()) + 1 && iLocal_141 == func_167(func_168())) || (((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) && iLocal_142 == func_166(func_168()) + 25) && iLocal_141 == func_167(func_168())))
	{
		if (!iLocal_131)
		{
			if (!func_127("REHH1_1HOUR") && !func_127("REHH4_1HOUR"))
			{
				func_124(0x00000000);
			}
			func_54();
			SYSTEM::WAIT(0x00000000);
			if (!func_60())
			{
				if (iLocal_58 == 0x00000001)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_1HOUR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_131 = 0x00000001;
			}
		}
	}
	if (iLocal_141 == 0x0000001E)
	{
		if ((iLocal_142 == func_166(func_168()) && iLocal_141 == func_167(func_168()) + 30) || (((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) && iLocal_142 == func_166(func_168()) + 24) && iLocal_141 == func_167(func_168()) + 30))
		{
			if (!iLocal_132)
			{
				if (!func_127("REHH1_HHOUR") && !func_127("REHH4_HHOUR"))
				{
					func_124(0x00000000);
				}
				func_54();
				SYSTEM::WAIT(0x00000000);
				if (!func_60())
				{
					if (iLocal_58 == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_HHOUR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_132 = 0x00000001;
				}
				if (!iLocal_133)
				{
					iLocal_145 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(iLocal_145, "VARIABLE_COUNTDOWN_CLOCK_wp", 0x00000000, 0x00000001);
					unk_0x6F6BA3FE885E6C91(iLocal_145, "countdown_fadein", 35f);
					unk_0x8BC9595FD2792B5D("TIMER_SCENE");
					iLocal_133 = 0x00000001;
				}
			}
		}
		if ((iLocal_142 == func_166(func_168()) && iLocal_141 == func_167(func_168()) + 5) || (((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) && iLocal_142 == func_166(func_168()) + 24) && iLocal_141 == func_167(func_168()) + 5))
		{
			if (!iLocal_134)
			{
				unk_0x6F6BA3FE885E6C91(iLocal_145, "countdown_fast", 1f);
				iLocal_134 = 0x00000001;
			}
		}
	}
	if (iLocal_141 == 0x00000000)
	{
		if ((iLocal_142 == func_166(func_168()) + 1 && iLocal_141 == (func_167(func_168()) - 0x0000001E)) || (((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) && iLocal_142 == func_166(func_168()) + 25) && iLocal_141 == (func_167(func_168()) - 0x0000001E)))
		{
			if (!iLocal_132)
			{
				if (!func_127("REHH1_HHOUR") && !func_127("REHH4_HHOUR"))
				{
					func_124(0x00000000);
				}
				func_54();
				SYSTEM::WAIT(0x00000000);
				if (!func_60())
				{
					if (iLocal_58 == 0x00000001)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_HHOUR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_132 = 0x00000001;
				}
				if (!iLocal_133)
				{
					iLocal_145 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(iLocal_145, "VARIABLE_COUNTDOWN_CLOCK_wp", 0x00000000, 0x00000001);
					unk_0x6F6BA3FE885E6C91(iLocal_145, "countdown_fadein", 35f);
					unk_0x8BC9595FD2792B5D("TIMER_SCENE");
					iLocal_133 = 0x00000001;
				}
			}
		}
		if ((iLocal_142 == func_166(func_168()) + 1 && iLocal_141 == (func_167(func_168()) - 0x00000037)) || (((iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0) && iLocal_142 == func_166(func_168()) + 25) && iLocal_141 == (func_167(func_168()) - 0x00000037)))
		{
			if (!iLocal_134)
			{
				unk_0x6F6BA3FE885E6C91(iLocal_145, "countdown_fast", 1f);
				iLocal_134 = 0x00000001;
			}
		}
	}
	if (iLocal_142 >= 0x00000018 && iLocal_123 < 0x000249F0)
	{
		if (iLocal_142 == func_166(func_168()) + 24 && iLocal_141 == func_167(func_168()))
		{
			bLocal_143 = 0x00000001;
		}
	}
	else if (iLocal_142 == func_166(func_168()) && iLocal_141 == func_167(func_168()))
	{
		bLocal_143 = 0x00000001;
	}
	if (bLocal_143)
	{
		func_54();
		SYSTEM::WAIT(0x00000000);
		unk_0x55D0A2DB35045A35(iLocal_145);
		unk_0x8910D3D58E0132B8("TIMER_SCENE");
		if (iLocal_58 == 0x00000001)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_TLATE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
		{
			if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
			{
				unk_0xE0C0351D5B931E37(unk_0x6937EA2286828455(iLocal_71, 0x00000000), (10.5f + 2f), 0x00000002, 0x00000000);
				unk_0x75CDA8644CD3B5F5(iLocal_71, 0x00000001, 0x00000000);
				unk_0x0A94A109271BE75A(iLocal_71);
				if (unk_0xE4EDC4B0E92C078B(iLocal_69))
				{
					unk_0x142CC44DB769B57E(&iLocal_69);
				}
			}
		}
		iLocal_57 = 0x00000009;
	}
}

void func_163(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_165(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_164(0x00000007, iVar0);
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

void func_164(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_165(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_166(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_167(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_168()
{
	var uVar0;
	
	func_178(&uVar0, unk_0x4460E481B9E33ADA());
	func_177(&uVar0, unk_0x8D199E381D262EEF());
	func_176(&uVar0, unk_0xD8A54335F18763BA());
	func_171(&uVar0, unk_0x972A296334C9D57B());
	func_170(&uVar0, unk_0x118229AD063C3C1D());
	func_169(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_169(var uParam0, int iParam1)
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

void func_170(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_171(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(*uParam0);
	iVar1 = func_173(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_174(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_174(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_175(int iParam0)
{
	return iParam0 & 0x0000000F;
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_178(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

void func_179()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_71, unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_99))
				{
					unk_0x142CC44DB769B57E(&iLocal_99);
				}
				if (!unk_0x16102BEDC7435774(iLocal_71))
				{
					unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
					unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
					unk_0xBF541ED34EA81209(iLocal_71, 0x00000000);
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_69))
				{
					iLocal_69 = func_133(vLocal_77, 0x00000001);
				}
				if (((func_13() == 0x00000002 && !func_57()) && iLocal_58 != 0x00000001) && iLocal_58 != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_70))
					{
						iLocal_70 = func_133(vLocal_79, 0x00000000);
						unk_0xBC8E0A7390523199(iLocal_70, 0x0000010D);
						func_180();
					}
				}
				if (iLocal_58 == 0x00000001)
				{
					if (!func_60())
					{
						if (iLocal_58 == 0x00000001)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_WTA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_142 = func_166(func_168()) + 2;
						if (func_167(func_168()) >= 0x0000001E)
						{
							iLocal_141 = 0x00000000;
							iLocal_142++;
						}
						else
						{
							iLocal_141 = 0x0000001E;
						}
						iLocal_89 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_57 = 0x00000004;
					}
				}
				else if (iLocal_58 == 0x00000002)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH2_WTB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_89 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_57 = 0x00000004;
					}
				}
				else if (iLocal_58 == 0x00000003)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH3_WTC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_89 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_57 = 0x00000004;
					}
				}
				else if (iLocal_58 == 0x00000005)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH5_WTE", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_89 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_57 = 0x00000004;
					}
				}
			}
		}
	}
}

void func_180()
{
	if (func_13() == 0x00000002)
	{
		if (!Global_791F)
		{
			func_181("CULT_BLIP_HELP", 0xFFFFFFFF);
			Global_791F = 0x00000001;
		}
	}
}

void func_181(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_182()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (iLocal_88 < unk_0x1C0640BA9A7327B3())
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_STO", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_88 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001194, 0x00001964));
				}
				if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 24f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
					{
						fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0.5f);
						}
						unk_0xDD353D0E9C789D0E(&iLocal_75);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
						unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, fLocal_152, 2f, 0x40000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_75);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
						unk_0xF82EA857DA10E0CD(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 12f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
				{
					fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
					fLocal_152 = (fLocal_152 - 0.25f);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, fLocal_152, 2f, 0x40000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xE4EDC4B0E92C078B(iLocal_99))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_99, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001388, 0x00000804, 0x00000002);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
					{
						if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 25f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 150f))
							{
								unk_0x8FB4E06C94958F84(iLocal_71);
								unk_0xDD353D0E9C789D0E(&iLocal_75);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000004);
								if (unk_0xBBA8A868118C90ED(iLocal_73, 0x00000000, 0x00000000))
								{
									unk_0x7B5CD34C8882F120(0x00000000, iLocal_73, 0xFFFFFFFF, 0x00000000, 2f);
								}
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_75);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
								unk_0xF82EA857DA10E0CD(&iLocal_75);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000804, 0x00000002);
					if (func_1(&uLocal_161, cLocal_146, "REHH5_NOV", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_109 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
				{
					if (func_149(iLocal_71, iLocal_73, 0x00000001) < 25f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH5_ASK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x12DE711B1C681E9E(iLocal_71, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f && func_184(iLocal_71, unk_0x16F2683693E537C9()) < 25f)
						{
							if (!func_60())
							{
								if (func_13() == 0x00000000)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
								else if (func_13() == 0x00000001)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
								else if (func_13() == 0x00000002)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_184(iLocal_71, unk_0x16F2683693E537C9()) < 25f)
				{
					if (func_129())
					{
						if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							if (unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000))
							{
								unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
								unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
								unk_0xBF541ED34EA81209(iLocal_71, 0x00000000);
								unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
								unk_0x5B1D360B9C6F0A09(iLocal_71, unk_0x728870EB733D12A1(), 0xFFFFFFFF, 0x00000000, 2f, 0x00000001, 0x00000000);
								func_183();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xA30B8362589C124A(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000);
								if (unk_0xEB6A8945D1AC98A1(iVar0))
								{
									iLocal_56 = 0x00000001;
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_71);
									unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
									unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_71, 0x00000001);
									unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_60())
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_110 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (func_129())
				{
					if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
					{
						unk_0xBC43ED9FE28DB191(iLocal_71);
						iLocal_89 = 0x00000001;
						iLocal_57 = 0x00000003;
					}
					else if (SYSTEM::TIMERA() > 0x0000EA60)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH5_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							func_59();
						}
					}
					if (func_184(iLocal_71, unk_0x16F2683693E537C9()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					unk_0x0A94A109271BE75A(iLocal_71);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108 = 0x00000004;
				}
			}
			break;
	}
}

void func_183()
{
	if (!func_57())
	{
		if (func_13() == 0x00000002)
		{
			Global_791D = 0x00000001;
		}
	}
}

float func_184(int iParam0, int iParam1)
{
	return func_149(iParam0, iParam1, 0x00000001);
}

void func_185()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 12f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
					{
						fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0.5f);
						}
						unk_0x8FB4E06C94958F84(iLocal_71);
						unk_0xDD353D0E9C789D0E(&iLocal_75);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
						unk_0xA8CC11FF8D2962D4(0x00000000, unk_0x16F2683693E537C9(), 2.5f, 0f, 0f, 1f, 0x00001388, 0x3DCCCCCD, 0x00000001);
						unk_0x75ABDC5F81978924(iLocal_75);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
						unk_0xF82EA857DA10E0CD(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 8f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
				{
					fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
					fLocal_152 = (fLocal_152 - 0.25f);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, fLocal_152, 1f, 0x40000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xE4EDC4B0E92C078B(iLocal_99))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_99, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001388, 0x00000804, 0x00000002);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
					{
						if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 10f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 150f))
							{
								unk_0x8FB4E06C94958F84(iLocal_71);
								unk_0xDD353D0E9C789D0E(&iLocal_75);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000004);
								if (unk_0xBBA8A868118C90ED(iLocal_73, 0x00000000, 0x00000000))
								{
									unk_0x7B5CD34C8882F120(0x00000000, iLocal_73, 0xFFFFFFFF, 0x00000000, 1f);
								}
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_75);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
								unk_0xF82EA857DA10E0CD(&iLocal_75);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000804, 0x00000002);
					if (func_1(&uLocal_161, cLocal_146, "REHH3_NOV", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_109 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
				{
					if (func_149(iLocal_71, iLocal_73, 0x00000001) < 13f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH3_ASK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x81A5359F25512A04(iLocal_71))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f && func_184(iLocal_71, unk_0x16F2683693E537C9()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0x00000000)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
								else if (func_13() == 0x00000001)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
								else if (func_13() == 0x00000002)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_184(iLocal_71, unk_0x16F2683693E537C9()) < 15f)
				{
					if (func_129())
					{
						if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							if (unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000))
							{
								unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
								unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
								unk_0xBF541ED34EA81209(iLocal_71, 0x00000000);
								unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
								unk_0x5B1D360B9C6F0A09(iLocal_71, unk_0x728870EB733D12A1(), 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
								func_183();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xA30B8362589C124A(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000);
								if (unk_0xEB6A8945D1AC98A1(iVar0))
								{
									iLocal_56 = 0x00000001;
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_71);
									unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
									unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_71, 0x00000001);
									unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_60())
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_110 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (func_129())
				{
					unk_0xCAF7AE54F764D5AA(iLocal_71, 1f);
					if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
					{
						unk_0xBC43ED9FE28DB191(iLocal_71);
						iLocal_89 = 0x00000001;
						iLocal_57 = 0x00000003;
					}
					else if (SYSTEM::TIMERA() > 0x0000EA60)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							func_59();
						}
					}
					if (func_184(iLocal_71, unk_0x16F2683693E537C9()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					unk_0x0A94A109271BE75A(iLocal_71);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108 = 0x00000004;
				}
			}
			break;
	}
}

void func_186()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 12f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
					{
						fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0.5f);
						}
						unk_0xDD353D0E9C789D0E(&iLocal_75);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
						unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, fLocal_152, 1f, 0x40000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_75);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
						unk_0xF82EA857DA10E0CD(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 8f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
				{
					fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
					fLocal_152 = (fLocal_152 - 0.25f);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, fLocal_152, 1f, 0x40000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xE4EDC4B0E92C078B(iLocal_99))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_99, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001388, 0x00000804, 0x00000002);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
					{
						if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 10f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 150f))
							{
								unk_0x8FB4E06C94958F84(iLocal_71);
								unk_0xDD353D0E9C789D0E(&iLocal_75);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
								if (unk_0xBBA8A868118C90ED(iLocal_73, 0x00000000, 0x00000000))
								{
									unk_0x7B5CD34C8882F120(0x00000000, iLocal_73, 0xFFFFFFFF, 0x00000000, 1f);
								}
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_75);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
								unk_0xF82EA857DA10E0CD(&iLocal_75);
								func_54();
								SYSTEM::WAIT(0x00000000);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0xA3BF0AA5A2608191(iLocal_71);
					unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000804, 0x00000002);
					if (func_1(&uLocal_161, cLocal_146, "REHH2_NOV", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_109 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
				{
					if (func_149(iLocal_71, iLocal_73, 0x00000001) < 13f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH2_ASK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x81A5359F25512A04(iLocal_71))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f && func_184(iLocal_71, unk_0x16F2683693E537C9()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0x00000000)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
								else if (func_13() == 0x00000001)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
								else if (func_13() == 0x00000002)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_184(iLocal_71, unk_0x16F2683693E537C9()) < 15f)
				{
					if (func_129())
					{
						iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
						{
							if (unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000))
							{
								unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
								unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
								unk_0xBF541ED34EA81209(iLocal_71, 0x00000000);
								unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
								unk_0x5B1D360B9C6F0A09(iLocal_71, unk_0x728870EB733D12A1(), 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
								func_183();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xA30B8362589C124A(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000);
								if (unk_0xEB6A8945D1AC98A1(iVar0))
								{
									iLocal_56 = 0x00000001;
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_71);
									unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
									unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_71, 0x00000001);
									unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_60())
						{
							if (!func_189())
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_110 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (!iLocal_83)
				{
					if (unk_0x12DE711B1C681E9E(iLocal_71, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!func_60())
						{
							if (func_1(&uLocal_161, cLocal_146, "REHH2_INA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_83 = 0x00000001;
							}
						}
					}
				}
				if (func_129())
				{
					unk_0xCAF7AE54F764D5AA(iLocal_71, 1f);
					if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
					{
						unk_0xBC43ED9FE28DB191(iLocal_71);
						iLocal_89 = 0x00000001;
						iLocal_57 = 0x00000003;
					}
					else if (SYSTEM::TIMERA() > 0x0000EA60)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH2_SLW", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							func_59();
						}
					}
				}
				else
				{
					unk_0x0A94A109271BE75A(iLocal_71);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108 = 0x00000004;
				}
				if (func_184(iLocal_71, unk_0x16F2683693E537C9()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_187()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (func_184(unk_0x16F2683693E537C9(), iLocal_71) < 12f || (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()) && func_184(unk_0x16F2683693E537C9(), iLocal_71) < 30f))
				{
					unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_71, 0x00001388, 0x00000804, 0x00000002);
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_75);
							unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_73, 0x00007530, 0x00000806, 0x00000002);
							unk_0xC6EB89C59F2AF6B8(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_75);
							unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
							unk_0xF82EA857DA10E0CD(&iLocal_75);
						}
						iLocal_108++;
					}
					else if (!iLocal_109)
					{
						unk_0xA3BF0AA5A2608191(iLocal_71);
						unk_0xDD353D0E9C789D0E(&iLocal_75);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000806, 0x00000002);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
						unk_0x75ABDC5F81978924(iLocal_75);
						unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
						unk_0xF82EA857DA10E0CD(&iLocal_75);
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_109 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xE4EDC4B0E92C078B(iLocal_99))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_99, 0x00000001);
			}
			if (func_129())
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0x9C66D99E63E8E24C(iLocal_73) < 10f)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 150f))
							{
								fLocal_152 = func_149(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001);
								if (fLocal_152 > 5f)
								{
									fLocal_152 = (fLocal_152 - 0.5f);
								}
								else
								{
									fLocal_152 = (fLocal_152 - 0.25f);
								}
								unk_0xDD353D0E9C789D0E(&iLocal_75);
								unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_73, 0x00002710, 0x00000806, 0x00000002);
								if (unk_0xBBA8A868118C90ED(iLocal_73, 0x00000000, 0x00000000))
								{
									unk_0x7B5CD34C8882F120(0x00000000, iLocal_73, 0xFFFFFFFF, 0x00000000, 1f);
								}
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
								unk_0x75ABDC5F81978924(iLocal_75);
								unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
								unk_0xF82EA857DA10E0CD(&iLocal_75);
								iLocal_108++;
							}
							else
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_71, iLocal_73, 0x00002710, 0x00000806, 0x00000002);
								iLocal_108++;
							}
						}
					}
				}
			}
			else if (!iLocal_109)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(iLocal_71);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000806, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					if (!func_60())
					{
						if (!func_189())
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_109 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f)
				{
					func_143();
					iLocal_108++;
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71) && unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH1_ASK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x8FB4E06C94958F84(iLocal_71);
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_108++;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (unk_0x81A5359F25512A04(iLocal_71))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
				}
				if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 15f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iLocal_73 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xDF1306B443CD3D15(iLocal_73, 0x00000000))
						{
							if (unk_0x9C66D99E63E8E24C(iLocal_73) < 2.5f)
							{
								if (!func_60())
								{
									if (func_13() == 0x00000000)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										SYSTEM::SETTIMERA(0x00000000);
										iLocal_108++;
									}
									else if (func_13() == 0x00000001)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										SYSTEM::SETTIMERA(0x00000000);
										iLocal_108++;
									}
									else if (func_13() == 0x00000002)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										SYSTEM::SETTIMERA(0x00000000);
										iLocal_108++;
									}
								}
							}
						}
					}
					else if (!iLocal_109)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_109 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (func_184(iLocal_71, unk_0x16F2683693E537C9()) < 15f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (func_129())
						{
							if (unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000))
							{
								unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
								unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
								unk_0xBF541ED34EA81209(iLocal_71, 0x00000000);
								unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
								unk_0x5B1D360B9C6F0A09(iLocal_71, unk_0x728870EB733D12A1(), 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xA30B8362589C124A(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000);
								if (unk_0xEB6A8945D1AC98A1(iVar0))
								{
									iLocal_56 = 0x00000001;
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_71);
									unk_0xE25C96A9C36BE5D2(iLocal_71, func_123());
									unk_0x7BECA8F360B1686D(iLocal_71, 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_71, 0x00000001);
									unk_0x0C8C0C840C2D1AD2(iLocal_71, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000002);
									iLocal_108++;
								}
							}
						}
						else if (!iLocal_110)
						{
							if (!func_60())
							{
								if (!func_189())
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								}
								iLocal_110 = 0x00000001;
							}
						}
					}
					else if (!iLocal_109)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_109 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				if (func_129())
				{
					unk_0xCAF7AE54F764D5AA(iLocal_71, 1f);
					if (unk_0x405E212DDE472467(iLocal_71, 0x00000000))
					{
						unk_0xBC43ED9FE28DB191(iLocal_71);
						iLocal_89 = 0x00000001;
						iLocal_57 = 0x00000003;
					}
					else if (SYSTEM::TIMERA() > 0x0000EA60)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOH", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							func_59();
						}
					}
				}
				else
				{
					unk_0x0A94A109271BE75A(iLocal_71);
					unk_0xDD353D0E9C789D0E(&iLocal_75);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_75);
					unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
					unk_0xF82EA857DA10E0CD(&iLocal_75);
					iLocal_108 = 0x00000005;
				}
				if (func_184(iLocal_71, unk_0x16F2683693E537C9()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_188()
{
	int iVar0;
	
	if ((iLocal_126 - iLocal_125) > 0x000003E8)
	{
		iLocal_140 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(iLocal_71, 0x00000000), 18f, 0x00000000, 0x00000004);
	}
	if (iLocal_140 != 0x00000000)
	{
		iLocal_124++;
		iLocal_125 = unk_0x1C0640BA9A7327B3();
		if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000064) < 0x00000032)
		{
			iVar0 = 0x00000001;
		}
		else
		{
			iVar0 = 0x00000002;
		}
		if (iLocal_124 > iVar0)
		{
			unk_0x73270B3C9CC833FD(iLocal_140, 0x00000001, 0x00000000);
			if (unk_0xDF1306B443CD3D15(iLocal_140, 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_140, 0x00000000))
				{
					if (iLocal_58 == 0x00000001)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_STO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_71, iLocal_140, 0x00000BB8, 0x00000804, 0x00000002);
							}
						}
						iLocal_150 = unk_0x1C0640BA9A7327B3();
						iLocal_124 = 0x00000000;
					}
					else if (iLocal_58 == 0x00000002)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH2_STO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_71, iLocal_140, 0x00000BB8, 0x00000804, 0x00000002);
							}
						}
						iLocal_150 = unk_0x1C0640BA9A7327B3();
						iLocal_124 = 0x00000000;
					}
					else if (iLocal_58 == 0x00000003)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_STO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_71, iLocal_140, 0x00000BB8, 0x00000804, 0x00000002);
							}
						}
						iLocal_150 = unk_0x1C0640BA9A7327B3();
						iLocal_124 = 0x00000000;
					}
					else if (iLocal_58 == 0x00000005)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH5_STO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_71, iLocal_140, 0x00000BB8, 0x00000804, 0x00000002);
							}
						}
						iLocal_150 = unk_0x1C0640BA9A7327B3();
						iLocal_124 = 0x00000000;
					}
				}
			}
		}
		else
		{
			iLocal_151 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_151 - iLocal_150) > 0x00000DAC)
			{
				unk_0x046C362CF15F1935(&iLocal_140);
			}
			iLocal_140 = 0x00000000;
		}
	}
}

int func_189()
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

void func_190()
{
	if (iLocal_58 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iLocal_71))
		{
			if (!unk_0x437347B10A200C4B(iLocal_71, 0x00000000))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x03068588A1FCED1A(iLocal_71)) || func_184(unk_0x16F2683693E537C9(), iLocal_71) < 12f)
				{
					func_191();
					iLocal_57 = 0x00000002;
				}
			}
		}
	}
	else if (iLocal_58 == 0x00000002)
	{
		if (!iLocal_135)
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_76, 100f, 100f, 100f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_75);
				unk_0x96167B03C5A77156(0x00000000, 178.993f, 4413.097f, 73.6132f, 1f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, 159.6669f, 4413.197f, 74.8915f, 1f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, 142.7866f, 4415.111f, 74.3799f, 1f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x75ABDC5F81978924(iLocal_75);
				unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
				unk_0xF82EA857DA10E0CD(&iLocal_75);
				iLocal_135 = 0x00000001;
			}
		}
	}
	else if (iLocal_58 == 0x00000005)
	{
		if (!iLocal_135)
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_76, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_75);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000003);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x96167B03C5A77156(0x00000000, -337.3163f, 2828.018f, 55.2198f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, -343.4485f, 2826.222f, 54.5089f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, -356.4033f, 2811.062f, 51.5931f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, -365.6846f, 2809.158f, 48.7646f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, -382.4106f, 2818.384f, 44.078f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0x96167B03C5A77156(0x00000000, -370.3838f, 2866.677f, 41.0979f, 2f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, 0xFFFFFFFF, 0x00000021, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_75);
				unk_0x78ADC381772E3D54(iLocal_71, iLocal_75);
				unk_0xF82EA857DA10E0CD(&iLocal_75);
				iLocal_135 = 0x00000001;
			}
		}
	}
	if (iLocal_58 != 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iLocal_71))
		{
			if (!unk_0x437347B10A200C4B(iLocal_71, 0x00000000))
			{
				if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_71, 95f, 95f, 50f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x03068588A1FCED1A(iLocal_71)) || func_184(unk_0x16F2683693E537C9(), iLocal_71) < 12f)
				{
					func_191();
					iLocal_57 = 0x00000002;
				}
			}
		}
	}
}

void func_191()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_98))
	{
		unk_0x142CC44DB769B57E(&iLocal_98);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_99))
		{
			if (!unk_0x437347B10A200C4B(iLocal_71, 0x00000000))
			{
				iLocal_99 = func_69(iLocal_71, 0x00000000, 0x00000091);
				unk_0xF2D30B8ACAF12A39(iLocal_99, 0x00000000);
			}
		}
		if (!func_224())
		{
			func_199(0x00000001);
		}
		func_160(&uLocal_161, 0x00000003, iLocal_71, sLocal_147, 0x00000000, 0x00000001);
	}
	if (func_13() == 0x00000000)
	{
		func_160(&uLocal_161, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	else if (func_13() == 0x00000001)
	{
		func_160(&uLocal_161, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	else if (func_13() == 0x00000002)
	{
		func_160(&uLocal_161, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
}

void func_192()
{
	func_194(0x00000027, 0x00000001);
	func_194(0x00000028, 0x00000001);
	func_194(0x00000029, 0x00000001);
	func_194(0x0000002A, 0x00000001);
	func_194(0x0000002B, 0x00000001);
	func_194(0x0000002C, 0x00000001);
	iLocal_71 = unk_0x36F2404464202779(0x0000001A, iLocal_80, vLocal_76, fLocal_78, 0x00000001, 0x00000001);
	unk_0x71199B01895C6202(iLocal_80);
	unk_0x11AD11297DC58CC7(iLocal_71, 0x00000001);
	unk_0x25C5402CC10F76CD(iLocal_71, 0x00000000);
	unk_0x4F39CC3882DD074E(iLocal_71, sLocal_149);
	unk_0x4E885A246A9D983A(iLocal_71, 0x00000089, 0x00000001);
	unk_0x4E885A246A9D983A(iLocal_71, 0x000000CE, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_71, 0x00000400, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_71, 0x00010000, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_71, 0x00000002, 0x00000000);
	unk_0xAFF39FB306F8E232(iLocal_71, 0x00000011, 0x00000001);
	unk_0xE652C92E8AF37788(iLocal_71, 60f);
	unk_0x8B66ED74C2DC2E98(iLocal_71, 5f);
	if (iLocal_58 == 0x00000001)
	{
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000002, 0x00000001, 0x00000002, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000003, 0x00000000, 0x00000002, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
		unk_0xAB8E2DDC7AF955E0(iLocal_82, 0x00000001);
		iLocal_139 = unk_0x122AAB0B1D6F55AD(iLocal_82, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x5DAB50E08C3C504A(iLocal_139, 150f);
		unk_0x611DFA9294B339CA(iLocal_139, 0x00000004, 0x00000000, 0x00000000);
		unk_0x05EC10F460C3A4AF(iLocal_139, 0x00000000);
		unk_0x71199B01895C6202(iLocal_82);
		unk_0xC6EB89C59F2AF6B8(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iLocal_58 == 0x00000002)
	{
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000004, 0x00000000, 0x00000001, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x7D6CA5F52B3748BF(vLocal_77 - Vector(20f, 50f, 50f), vLocal_77 + Vector(20f, 50f, 50f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		func_193(0x00000001);
	}
	else if (iLocal_58 == 0x00000003)
	{
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_71, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x7D6CA5F52B3748BF(vLocal_77 - Vector(20f, 50f, 50f), vLocal_77 + Vector(20f, 50f, 50f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	}
	else if (iLocal_58 == 0x00000005)
	{
	}
	iLocal_57 = 0x00000001;
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_1B066, unk_0xBB0808A181D4745C(), 24);
		Global_1B060 = 0x00000001;
	}
	else
	{
		StringCopy(&Global_1B066, "NULL", 24);
		Global_1B060 = 0x00000000;
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_198(iParam0, 0x00000002, 0x00000001))
		{
			func_197(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_198(iParam0, 0x00000002, 0x00000001))
	{
		func_195(iParam0, 0x00000002, 0x00000001);
	}
}

void func_195(int iParam0, int iParam1, bool bParam2)
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
		if (func_32() == 0x00000000)
		{
			iVar0 = func_51(func_196(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_49(func_196(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_196(int iParam0)
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

void func_197(int iParam0, int iParam1, bool bParam2)
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
		if (func_32() == 0x00000000)
		{
			iVar0 = func_51(func_196(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_49(func_196(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_198(int iParam0, int iParam1, bool bParam2)
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
		if (func_32() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_51(func_196(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_199(int iParam0)
{
	if (func_202())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_37(Global_1B40B))
		{
			func_200(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_37(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_181(func_201(iParam0), 0xFFFFFFFF);
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
					func_181(func_201(iParam0), 0xFFFFFFFF);
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
					func_181(func_201(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_201(int iParam0)
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

int func_202()
{
	switch (func_203(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_203(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_207(0x00000000))
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
		if (!func_205(iParam2))
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
			func_204(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_204(var uParam0, int iParam1)
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

bool func_205(int iParam0)
{
	return func_206(iParam0, Global_A1D7);
}

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_205(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_208()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000001;
	}
	if (!unk_0x437347B10A200C4B(iLocal_71, 0x00000000))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_71, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_71, unk_0x728870EB733D12A1(), 0x00000001))
			{
				return 0x00000001;
			}
		}
		if (!bLocal_92)
		{
			if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001), 10f, 0x00000001) || unk_0x723EE7F83DF1497D(unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001) - Vector(10f, 10f, 10f), unk_0x68F4C0EC296D3901(iLocal_71, 0x00000001) + Vector(10f, 10f, 10f), 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (unk_0xEB6A8945D1AC98A1(iLocal_72) && unk_0xC844350D5D58C99A(iLocal_72))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_72, unk_0x16F2683693E537C9(), 0x00000001) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
				{
					unk_0x08082071A5F7C155(iLocal_71, 0x00000006, 0x00000000, 0x00000000);
				}
				return 0x00000001;
			}
		}
		if ((!unk_0x16102BEDC7435774(iLocal_71) && unk_0x7069CC4DE1EA3FAA(iLocal_71, unk_0x16F2683693E537C9(), 90f)) && unk_0x12DE711B1C681E9E(iLocal_71, unk_0x16F2683693E537C9(), 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_71) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_71))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_209()
{
	unk_0x523BCC9DC80CD82F(iLocal_80);
	unk_0x3F423BF5B8125A50("random@hitch_lift");
	if (iLocal_58 == 0x00000001 || iLocal_58 == 0x00000005)
	{
		unk_0x523BCC9DC80CD82F(iLocal_82);
	}
	if (iLocal_58 == 0x00000001)
	{
		unk_0x9CBC55A05A07FC47(0x00000000);
		unk_0xAE317D00A5A55DF6("timer", 0x00000000, 0xFFFFFFFF);
	}
	else if (iLocal_58 == 0x00000003)
	{
		unk_0x3F423BF5B8125A50("facials@gen_female@base");
	}
	if (unk_0xB87F6CF6E5628C67(iLocal_80) && unk_0xB4AE0788C1587752("random@hitch_lift"))
	{
		if (iLocal_58 == 0x00000001 || iLocal_58 == 0x00000005)
		{
			if (unk_0xB87F6CF6E5628C67(iLocal_82))
			{
				bLocal_59 = 0x00000001;
			}
		}
		else if (iLocal_58 == 0x00000003)
		{
			if (unk_0xB4AE0788C1587752("facials@gen_female@base"))
			{
				bLocal_59 = 0x00000001;
			}
		}
		else
		{
			bLocal_59 = 0x00000001;
		}
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_80);
		unk_0x3F423BF5B8125A50("random@hitch_lift");
		if (iLocal_58 == 0x00000001 || iLocal_58 == 0x00000005)
		{
			unk_0x523BCC9DC80CD82F(iLocal_82);
		}
		else if (iLocal_58 == 0x00000003)
		{
			unk_0x3F423BF5B8125A50("facials@gen_female@base");
		}
	}
}

void func_210()
{
	if (iLocal_58 == 0x00000001)
	{
		vLocal_76 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_78 = 17.9234f;
		vLocal_77 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_80 = joaat("a_m_m_business_01");
		cLocal_146 = "REHH1AU";
		sLocal_147 = "BUSINESSMAN";
		sLocal_149 = "BUSINESSMAN";
		iLocal_82 = joaat("schafter2");
	}
	else if (iLocal_58 == 0x00000002)
	{
		vLocal_76 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_78 = 75.9173f;
		vLocal_77 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_80 = joaat("a_f_y_hiker_01");
		cLocal_146 = "REHH2AU";
		sLocal_147 = "REHH2Hiker";
		sLocal_149 = "REHH2Hiker";
	}
	else if (iLocal_58 == 0x00000003)
	{
		vLocal_76 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_78 = 19.4143f;
		vLocal_77 = { 814.455f, 1274.797f, 359.5112f };
		vLocal_84 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_85 = 340.7372f;
		iLocal_80 = joaat("a_f_y_hipster_03");
		iLocal_81 = joaat("s_m_m_security_01");
		cLocal_146 = "REHH3AU";
		sLocal_147 = "REHH3Hipster";
		sLocal_149 = "REHH3Hipster";
		sLocal_148 = "REHH3Security";
	}
	else if (iLocal_58 == 0x00000005)
	{
		vLocal_76 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_78 = 56.5422f;
		vLocal_77 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_80 = joaat("ig_bride");
		iLocal_81 = joaat("a_m_y_business_01");
		cLocal_146 = "REHH5AU";
		sLocal_147 = "REHH5Bride";
		sLocal_149 = "REHH5Bride";
		sLocal_148 = "REHH5Groom";
		iLocal_82 = joaat("patriot");
	}
	iLocal_60 = 0x00000001;
}

int func_211()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_44) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_222())
		{
			return 0x00000000;
		}
	}
	if (func_218())
	{
		return 0x00000001;
	}
	if (func_212(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_212(float fParam0, bool bParam1)
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
		if (func_15(func_13()))
		{
			iVar5 = func_42();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_213(iVar1, &Var0);
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

void func_213(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_214(uParam1, "Abigail1", func_216(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_214(uParam1, "Abigail2", func_216(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_214(uParam1, "Barry1", func_216(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_214(uParam1, "Barry2", func_216(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_214(uParam1, "Barry3", func_216(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_214(uParam1, "Barry3A", func_216(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_214(uParam1, "Barry3C", func_216(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_214(uParam1, "Barry4", func_216(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_214(uParam1, "Dreyfuss1", func_216(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_214(uParam1, "Epsilon1", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_214(uParam1, "Epsilon2", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_214(uParam1, "Epsilon3", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_214(uParam1, "Epsilon4", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_214(uParam1, "Epsilon5", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_214(uParam1, "Epsilon6", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_214(uParam1, "Epsilon7", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_214(uParam1, "Epsilon8", func_216(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_214(uParam1, "Extreme1", func_216(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_214(uParam1, "Extreme2", func_216(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_214(uParam1, "Extreme3", func_216(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_214(uParam1, "Extreme4", func_216(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_214(uParam1, "Fanatic1", func_216(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_214(uParam1, "Fanatic2", func_216(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_214(uParam1, "Fanatic3", func_216(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_214(uParam1, "Hao1", func_216(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_214(uParam1, "Hunting1", func_216(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_214(uParam1, "Hunting2", func_216(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_214(uParam1, "Josh1", func_216(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_214(uParam1, "Josh2", func_216(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_214(uParam1, "Josh3", func_216(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_214(uParam1, "Josh4", func_216(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_214(uParam1, "Maude1", func_216(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_214(uParam1, "Minute1", func_216(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_214(uParam1, "Minute2", func_216(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_214(uParam1, "Minute3", func_216(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_214(uParam1, "MrsPhilips1", func_216(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_214(uParam1, "MrsPhilips2", func_216(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_214(uParam1, "Nigel1", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_214(uParam1, "Nigel1A", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_214(uParam1, "Nigel1B", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_214(uParam1, "Nigel1C", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_214(uParam1, "Nigel1D", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_214(uParam1, "Nigel2", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_214(uParam1, "Nigel3", func_216(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_214(uParam1, "Omega1", func_216(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_214(uParam1, "Omega2", func_216(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_214(uParam1, "Paparazzo1", func_216(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_214(uParam1, "Paparazzo2", func_216(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_214(uParam1, "Paparazzo3", func_216(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_214(uParam1, "Paparazzo3A", func_216(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_214(uParam1, "Paparazzo3B", func_216(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_214(uParam1, "Paparazzo4", func_216(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_214(uParam1, "Rampage1", func_216(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_214(uParam1, "Rampage3", func_216(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_214(uParam1, "Rampage4", func_216(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_214(uParam1, "Rampage5", func_216(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_214(uParam1, "Rampage2", func_216(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_215(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_214(uParam1, "TheLastOne", func_216(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_214(uParam1, "Tonya1", func_216(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_214(uParam1, "Tonya2", func_216(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_214(uParam1, "Tonya3", func_216(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_214(uParam1, "Tonya4", func_216(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_214(uParam1, "Tonya5", func_216(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_215(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_214(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_215(int iParam0)
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

struct<2> func_216(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_217(iParam0) };
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

struct<2> func_217(int iParam0)
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

int func_218()
{
	if (func_221() && !func_222())
	{
		return 0x00000001;
	}
	if (func_220() && func_219())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_219()
{
	return Global_1B2FC > 0x00000000;
}

int func_220()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_221()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_222()
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

int func_223()
{
	if (!func_205(0x00000005))
	{
		return 0x00000001;
	}
	if (func_218())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_222())
		{
			return 0x00000000;
		}
	}
	if (func_212(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_224()
{
	if ((Global_1B40B == func_46() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_225(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_46();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_227(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_226();
}

void func_226()
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

void func_227(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_228(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_46();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_256())
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
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_222())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_27(0x00000000))
		{
			return 0x00000000;
		}
		if (func_218())
		{
			return 0x00000000;
		}
		if (func_255())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_15(func_13()))
		{
			if (func_212(100f, 0x00000001) != 0xFFFFFFFF)
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
		if (!func_254(iParam1))
		{
			return 0x00000000;
		}
		if (func_15(func_13()))
		{
			if (func_253(func_13()) == 0x00000004 || func_253(func_13()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_15(func_13()))
		{
			if (!func_252(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_251(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_250())
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
		if (!func_241(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_205(0x00000005))
		{
			return 0x00000000;
		}
		if (func_240(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_240(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_254(0x0000001E) && !func_240(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_15(func_13()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_239(iVar4))
				{
					if (func_230(iVar2))
					{
						if (!func_229(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_13() != iVar2)
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

bool func_229(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_231(iVar0);
}

int func_231(int iParam0)
{
	return func_232(iParam0, 0x00000001);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_239(iParam0))
	{
		return 0x00000000;
	}
	func_233(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_233(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_234(func_168(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_238(iParam0, iParam1))
	{
		iVar0 = func_175(iParam1);
		iVar1 = func_173(iParam0);
		iVar2 = (func_173(iParam0) - func_173(iParam1));
		iVar3 = (func_175(iParam0) - func_175(iParam1));
		iVar4 = (func_237(iParam0) - func_237(iParam1));
		iVar5 = (func_166(iParam0) - func_166(iParam1));
		iVar6 = (func_167(iParam0) - func_167(iParam1));
		iVar7 = (func_236(iParam0) - func_236(iParam1));
	}
	else
	{
		iVar0 = func_175(iParam0);
		iVar1 = func_173(iParam1);
		iVar2 = (func_173(iParam1) - func_173(iParam0));
		iVar3 = (func_175(iParam1) - func_175(iParam0));
		iVar4 = (func_237(iParam1) - func_237(iParam0));
		iVar5 = (func_166(iParam1) - func_166(iParam0));
		iVar6 = (func_167(iParam1) - func_167(iParam0));
		iVar7 = (func_236(iParam1) - func_236(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_235(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_235(float fParam0, float fParam1, float fParam2)
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

int func_236(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_237(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_238(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_239(iParam1) || !func_239(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_167(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_239(int iParam0)
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
	iVar0 = func_236(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_167(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_166(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_173(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_175(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_237(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_240(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_241(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_13();
				if (!func_15(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_249()) || Global_1B05D) || Global_7832) || func_248()) || func_21(0x00000008, 0xFFFFFFFF)) || func_247()) || func_246()) || func_245()) || func_244()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_249()) || Global_7832) || func_248()) || func_21(0x00000008, 0xFFFFFFFF)) || func_245()) || func_247()) || func_246()) || func_244()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_249()) || Global_1B05D) || Global_7832) || func_248()) || func_21(0x00000008, 0xFFFFFFFF)) || func_245()) || func_247()) || func_246()) || func_244()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_249()) || Global_1B05D) || Global_7832) || func_248()) || func_21(0x00000008, 0xFFFFFFFF)) || func_247()) || func_246()) || func_244()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_249() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_21(0x00000008, 0xFFFFFFFF)) || func_244()) || func_243()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_21(0x00000008, 0xFFFFFFFF) || func_247()) || func_246()) || func_243()) || func_242())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_249()) || Global_7832) || func_248()) || func_21(0x00000008, 0xFFFFFFFF)) || func_246()) || func_245()) || func_244()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_249()) || func_246()) || Global_1B05D) || Global_7832) || func_248()) || Global_A664) || func_21(0x00000008, 0xFFFFFFFF)) || func_245()) || func_243()) || func_244()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_249()) || Global_1B05D) || Global_7832) || func_248()) || func_21(0x00000008, 0xFFFFFFFF)) || func_245()) || func_243()) || func_247()) || func_246()) || func_244())
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

var func_242()
{
	return Global_181DF.f_1;
}

int func_243()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_244()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_245()
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

bool func_246()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_247()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_248()
{
	return Global_14086D;
}

int func_249()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_250()
{
	func_12();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_251(int iParam0)
{
	return func_238(func_168(), iParam0);
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_13();
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

int func_253(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_254(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_256())
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

int func_255()
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

int func_256()
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

void func_257()
{
	if (iLocal_111)
	{
		func_278(0x00000000);
		if (Global_7921)
		{
			unk_0xC92DB9682A650680("AC_STOP");
		}
		func_277();
		unk_0xB547E3FFEB27073E();
		func_193(0x00000000);
		if (unk_0x8C74DE122769E1BF())
		{
			unk_0x29D5132FBDCF2B1E(0x00000000);
		}
		if (unk_0x3F333B5CBA674248())
		{
			unk_0xE1A9998AC4404A1F(0x00000000);
		}
		Global_7983[0x00000000 /*7*/].f_6 = 0x00000000;
		func_269(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		func_61();
		if (unk_0xC844350D5D58C99A(iLocal_71))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_71))
			{
				unk_0x4E885A246A9D983A(iLocal_71, 0x0000013D, 0x00000001);
				if (!unk_0x405E212DDE472467(iLocal_71, 0x00000000))
				{
					unk_0x61F0DE0226FF7252(iLocal_71);
				}
				if (iLocal_58 != 0x00000002)
				{
					unk_0x8FB4E06C94958F84(iLocal_71);
				}
				if (unk_0xD1960163A3042274(iLocal_71, 0x6BA30179) != 0x00000001 && unk_0xD1960163A3042274(iLocal_71, 0x6BA30179) != 0x00000000)
				{
					unk_0x11AD11297DC58CC7(iLocal_71, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iLocal_71, 0x00000001);
				if (unk_0x16102BEDC7435774(iLocal_71))
				{
					unk_0x0A94A109271BE75A(iLocal_71);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_72))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_72))
			{
				if (!unk_0xE9FDA1035CFEA94F(iLocal_72))
				{
					unk_0x11AD11297DC58CC7(iLocal_72, 0x00000000);
				}
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
		}
	}
	unk_0x8C26F31DFF77D124();
	if (func_224())
	{
		if (unk_0xBF75E4DF4C367CD9(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0x00000000))
		{
			unk_0x6DA3AC47D5DB9EED(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0x00000000, 0f, 0x00000000);
		}
		if (unk_0xBF75E4DF4C367CD9(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0x00000000))
		{
			unk_0x6DA3AC47D5DB9EED(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0x00000000, 0f, 0x00000000);
		}
	}
	func_258(0xFFFFFFFF);
	unk_0x10FAF14A60A0DBE1();
}

void func_258(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_46();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_224())
	{
		func_262(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_261(0x00007530);
		StringCopy(&cVar0, func_260(Global_1B40B, 0x00000001), 64);
		if (func_45(Global_1B40B) > 0x00000000)
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
	func_259(&Global_786B);
	Global_1B40C = 0x00000000;
	func_227(0xFFFFFFFF);
}

void func_259(var uParam0)
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

char* func_260(int iParam0, bool bParam1)
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

void func_261(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_262(int iParam0)
{
	func_263(iParam0, 0x00000000, func_268(iParam0));
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_168();
	func_266(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_265(iParam0, &uVar0);
	Var1 = { func_264(&uVar0) };
}

struct<16> func_264(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_166(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_167(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_236(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_237(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_175(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_173(*uParam0), 64);
	return Var0;
}

void func_265(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_266(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_175(*uParam0);
	iVar2 = func_237(*uParam0);
	iVar3 = func_166(*uParam0);
	iVar4 = func_167(*uParam0);
	iVar5 = func_236(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_267(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_267(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_178(uParam0, iParam1);
	func_177(uParam0, iParam2);
	func_176(uParam0, iParam3);
	func_170(uParam0, iParam5);
	func_171(uParam0, iParam4);
	func_169(uParam0, iParam6);
}

int func_268(int iParam0)
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

void func_269(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_276(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_10())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_275(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_276(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_275(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_273(unk_0xD803B885F5E47A62())) && !func_271(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_270()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_273(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_270()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_271(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_272(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_272(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_35();
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

int func_273(int iParam0)
{
	if (func_271(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_274())
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

bool func_274()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_275(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_276(int iParam0)
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

void func_277()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

void func_278(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_194(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_279()
{
	float fVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_64, 0x00000001);
		iLocal_63 = 0x00000001;
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_65, 0x00000001) < fVar0)
		{
			fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_65, 0x00000001);
			iLocal_63 = 0x00000002;
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_66, 0x00000001) < fVar0)
		{
			fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_66, 0x00000001);
			iLocal_63 = 0x00000003;
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_67, 0x00000001) < fVar0)
		{
			fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_67, 0x00000001);
			iLocal_63 = 0x00000005;
		}
		if (iLocal_63 == 0x00000001)
		{
			iLocal_68 = 0x00000001;
			iLocal_58 = 0x00000001;
			return vLocal_64;
		}
		else if (iLocal_63 == 0x00000002)
		{
			iLocal_68 = 0x00000002;
			iLocal_58 = 0x00000002;
			return vLocal_65;
		}
		else if (iLocal_63 == 0x00000003)
		{
			iLocal_68 = 0x00000003;
			iLocal_58 = 0x00000003;
			return vLocal_66;
		}
		else if (iLocal_63 == 0x00000005)
		{
			iLocal_68 = 0x00000004;
			iLocal_58 = 0x00000005;
			return vLocal_67;
		}
	}
	return 0f, 0f, 0f;
}

