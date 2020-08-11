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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73[2] = { 0, 0 };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<6> Local_117 = { 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_118[24] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	vector3 vLocal_125 = { 0f, 0f, 0f };
	var uLocal_126[2] = { 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	int iLocal_130 = 0;
	float fLocal_131 = 0f;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 16;
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
	int iLocal_305 = 0;
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_307 = { 0f, 0f, 0f };
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<2> Local_311 = { 0, 5 } ;
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
	var uLocal_326 = 0;
	var uLocal_327 = 5;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
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
	iLocal_49 = unk_0xAD1355DD1E5D2D9B();
	uLocal_50 = unk_0x817B3657F78A517A();
	vLocal_71 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_104 = 0xFFFFFFFF;
	StringCopy(&Local_117, "", 24);
	iLocal_132 = 0xFFFFFFFF;
	vLocal_306 = { -1017.345f, -1354.196f, 4.4568f };
	vLocal_307 = { 2003.456f, 3071.102f, 46.0499f };
	vLocal_55 = { ScriptParam_311.f_1[0x00000000 /*3*/] };
	func_280();
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		func_242();
	}
	if (func_200(vLocal_55, 0x0000001B, iLocal_308, 0x00000000, 0x00000000))
	{
		func_197(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	iLocal_128 = unk_0x1C0640BA9A7327B3();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x338D6FF72D84D90F() || iLocal_58)
		{
			if (!func_196())
			{
				if (func_195())
				{
					func_242();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_DD", 0x00000000);
			switch (iLocal_51)
			{
				case 0x00000000:
					if (iLocal_54)
					{
						iLocal_139 = 0x00000001;
						iLocal_51 = 0x00000001;
					}
					else
					{
						if (func_183())
						{
							func_242();
						}
						if (!bLocal_56)
						{
							func_182();
						}
						if (bLocal_56)
						{
							func_181();
						}
					}
					break;
				
				case 0x00000001:
					func_174();
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						func_173();
						func_170();
						if (iLocal_52 == 0x00000001 && !unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
						{
							func_76();
							if (func_74() || unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
							{
								if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
								{
									if (!unk_0x437347B10A200C4B(iLocal_73[0x00000000], 0x00000000))
									{
										if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
										{
											unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
										}
										unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
										unk_0xF3268524E9BE6D6E(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
										unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
										func_68();
										SYSTEM::WAIT(0x00000000);
										func_67(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									}
								}
								func_66();
							}
						}
						if (iLocal_52 == 0x00000002 || (iLocal_52 == 0x00000001 && unk_0xC844350D5D58C99A(iLocal_73[0x00000001])))
						{
							func_76();
							if (iLocal_53 != 0x00000009)
							{
								if (func_74() || unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
								{
									if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
										{
											if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
											{
												unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
											}
											unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
											unk_0xF3268524E9BE6D6E(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
											func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
											unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
										}
									}
									if (unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
										{
											if (unk_0x16102BEDC7435774(iLocal_73[0x00000001]))
											{
												unk_0x0A94A109271BE75A(iLocal_73[0x00000001]);
											}
											unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
											unk_0xF3268524E9BE6D6E(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
											func_70(iLocal_73[0x00000001], 0x0001D4C0, 0x00000000);
											unk_0xFADC0A217229F6B5(iLocal_73[0x00000001], 0x00000001);
										}
									}
									if (iLocal_52 == 0x00000001)
									{
										func_68();
										SYSTEM::WAIT(0x00000000);
										func_67(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									}
									if (iLocal_52 == 0x00000002)
									{
										func_68();
										SYSTEM::WAIT(0x00000000);
										func_67(&uLocal_140, "REDR2AU", "REDR2_AT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									}
									func_66();
								}
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								unk_0xCAF7AE54F764D5AA(iLocal_73[0x00000000], 1f);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
							{
								unk_0xCAF7AE54F764D5AA(iLocal_73[0x00000001], 1f);
							}
						}
					}
					if ((func_65() && !func_64()) && iLocal_53 != 0x00000009)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							if (unk_0x5A91F08DF773C39D(iLocal_73[0x00000000], vLocal_71, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (iLocal_52 == 0x00000002)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
									{
										if (!unk_0x16102BEDC7435774(iLocal_73[0x00000000]) && !unk_0x16102BEDC7435774(iLocal_73[0x00000001]))
										{
											unk_0xE25C96A9C36BE5D2(iLocal_73[0x00000000], func_63());
											unk_0xE25C96A9C36BE5D2(iLocal_73[0x00000001], func_63());
										}
									}
								}
								func_62(0x00000000);
								SYSTEM::WAIT(0x00000000);
								func_68();
								iLocal_53 = 0x00000009;
							}
						}
					}
					if (func_61())
					{
						if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
						{
							unk_0xEBA53F35D0085654(&(iLocal_73[0x00000000]));
						}
						if (unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
						{
							unk_0xEBA53F35D0085654(&(iLocal_73[0x00000001]));
						}
						func_36();
					}
					if ((func_35() || func_34()) || func_3())
					{
						func_66();
					}
					break;
			}
		}
		else
		{
			func_242();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_52 == 0x00000001 && iLocal_53 == 0x00000007) && iLocal_60 == 0x00000005) && iLocal_90)
	{
		iLocal_128 = unk_0x1C0640BA9A7327B3();
		if (func_2())
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				vLocal_129 = { unk_0x698705F356FA8F72(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) };
			}
		}
	}
}

int func_2()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (iLocal_52 == 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							return 0x00000001;
						}
					}
				}
			}
			if (iLocal_52 == 0x00000002)
			{
				if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_73[0x00000001], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_3()
{
	if (iLocal_52 == 0x00000002)
	{
		if (!unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
		{
			if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_74, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			if (((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_OFFR")) && !func_33("REDR2_CULT"))
			{
				func_5(0x00000001);
			}
			if (((((((((((((((((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_AKB")) && !func_33("REDR2_TRY")) && !func_33("REDR2_JIC")) && !func_33("REDR2_CH")) && !func_33("REDR2_WH2")) && !func_33("REDR2_BCK")) && !func_33("REDR2_JIA")) && !func_33("REDR2_JIB")) && !func_33("REDR2_JIC")) && !func_33("REDR2_WHA")) && !func_33("REDR2_WHB")) && !func_33("REDR2_WHC")) && !func_33("REDR2_PSM")) && !func_33("REDR2_PSF")) && !func_33("REDR2_PST")) && !func_33("REDR2_TK"))
			{
				if (unk_0xE608C809F9416F00(iLocal_74) && unk_0x7F6DC62EA9922664(iLocal_74) < iLocal_68)
				{
					iLocal_68 = unk_0x7F6DC62EA9922664(iLocal_74);
					func_5(0x00000000);
					func_68();
					SYSTEM::WAIT(0x00000000);
					func_67(&uLocal_140, "REDR2AU", "REDR2_DC", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			if (!unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000) || unk_0x5B17F10380E80E5B(iLocal_74))
			{
				func_68();
				SYSTEM::WAIT(0x00000000);
				if (!func_4())
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_LC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							unk_0x01E4BB5190DF7317(iLocal_73[0x00000000], 0x471C4000, 0x00000000);
							unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							unk_0xE185F110925D87DB(iLocal_73[0x00000001], iLocal_73[0x00000000], 0xFFFFFFFF, 0f, 1f, 0x40000000, 0x00000000);
							unk_0xFADC0A217229F6B5(iLocal_73[0x00000001], 0x00000001);
						}
						return 0x00000001;
					}
				}
			}
			if (unk_0x54648B774DB42A3A(iLocal_74, 0x00000000, 0x00000002) && unk_0xB87D13D0C064E9D1(iLocal_74, unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
					unk_0xF3268524E9BE6D6E(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
					unk_0xF3268524E9BE6D6E(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_4()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_116)
		{
			if (func_10(&uLocal_140, "REDR2AU", &cLocal_118, &Local_117, 0x00000008, 0x00000000, 0x00000000))
			{
				iLocal_116 = 0x00000000;
			}
		}
	}
	else if ((!iLocal_116 && unk_0x25037C66EB32B076()) && !func_33("REDR1_SWV"))
	{
		cLocal_118 = { func_9() };
		Local_117 = { func_8() };
		func_6();
		iLocal_116 = 0x00000001;
	}
}

void func_6()
{
	Global_4CD7 = 0x00000000;
	func_7();
}

void func_7()
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

struct<6> func_8()
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

struct<6> func_9()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_11(sParam2, iParam4, 0x00000000);
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_33(char* sParam0)
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_34()
{
	if (iLocal_52 == 0x00000001)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
		{
			return 0x00000001;
		}
	}
	if (iLocal_52 == 0x00000002)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_35()
{
	if (iLocal_52 == 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
		{
			return 0x00000001;
		}
	}
	if (iLocal_52 == 0x00000002)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_73[0x00000000]) && !unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_36()
{
	while (!func_60())
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_40(0x0000001B, iLocal_308);
	func_37();
	func_242();
}

void func_37()
{
	func_38();
}

int func_38()
{
	if (func_39(0x00000000))
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

bool func_39(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_40(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_58();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_57(iParam0))
	{
		func_56(iParam0, iParam1);
		if (!func_55(0x00000033))
		{
			func_51("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_54(), 0x00000000, 0x0000008A, 0x00000000);
			func_50(0x00000033);
		}
		if (func_49(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_48(iParam0, iParam1) != 0x00000142)
		{
			func_42(func_48(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_41(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_41(0x00000007);
			}
			else
			{
				func_41(0x00000001);
			}
		}
	}
}

void func_41(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2)
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
		func_46((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_43();
	}
}

void func_43()
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
		func_45(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_44() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()
{
	return Global_7830;
}

int func_45(int iParam0, int iParam1)
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

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_47();
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

int func_47()
{
	return Global_1407E9;
}

int func_48(int iParam0, int iParam1)
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

int func_49(int iParam0)
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

void func_50(int iParam0)
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

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_52(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_52(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_53();
	}
}

void func_53()
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

int func_54()
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

int func_55(int iParam0)
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

void func_56(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_57(int iParam0)
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

int func_58()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_59(Var0);
	return uVar1;
}

int func_59(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_60()
{
	return 0x00000001;
}

int func_61()
{
	if (Global_791E)
	{
		func_41(0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_62(int iParam0)
{
	Global_5538 = iParam0;
}

int func_63()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_64()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_65()
{
	return Global_791D;
}

void func_66()
{
	func_242();
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_68()
{
	Global_4CD7 = 0x00000000;
	func_69();
}

void func_69()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_73(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	iVar1 = func_72(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (!bParam2)
	{
		if (iParam1 == 0x00000000 || iParam1 < 0x00000000)
		{
			return 0x00000000;
		}
	}
	iVar2 = func_71();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	Global_A575[iVar2 /*5*/] = 0x00000000;
	Global_A575[iVar2 /*5*/].f_1 = iParam0;
	Global_A575[iVar2 /*5*/].f_2 = iParam1;
	Global_A575[iVar2 /*5*/].f_3 = iParam1;
	Global_A575[iVar2 /*5*/].f_4 = 0x00000000;
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		Global_A662 = 0x00000001;
	}
	Global_A573++;
	return 0x00000001;
}

int func_71()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/] == 0x0000000D)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_73(int iParam0)
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

int func_74()
{
	unk_0xD5CA1F51A9931B2F(0x00000001);
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000001;
	}
	if ((unk_0xD3DCEC81D13AAFB1(vLocal_125, 40f, 0x00000001) || unk_0xD3DCEC81D13AAFB1(func_75(unk_0xD803B885F5E47A62()), 10f, 0x00000000)) || unk_0x723EE7F83DF1497D(vLocal_125 - Vector(40f, 40f, 40f), vLocal_125 + Vector(40f, 40f, 40f), 0x00000000))
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) || unk_0x70EED0761B82965E(iLocal_73[0x00000000]))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_73[0x00000000], unk_0x728870EB733D12A1(), 0x00000001))
			{
				return 0x00000001;
			}
		}
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_73[0x00000000]) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_73[0x00000000]))
			{
				if (unk_0xE115347EA59F7B86(iLocal_73[0x00000000], unk_0x16F2683693E537C9()))
				{
					return 0x00000001;
				}
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_73[0x00000001], unk_0x728870EB733D12A1(), 0x00000001))
				{
					return 0x00000001;
				}
			}
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_73[0x00000001]) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_73[0x00000001]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_73[0x00000001], unk_0x16F2683693E537C9()))
					{
						return 0x00000001;
					}
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_75(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_76()
{
	int iVar0;
	
	switch (iLocal_53)
	{
		case 0x00000000:
			if (iLocal_52 == 0x00000001)
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0x00000000, 0x00000001, 0x00000000) && unk_0x8E28E832BEAC3DCE(vLocal_125, 1f)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_125, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_124))
					{
						unk_0x142CC44DB769B57E(&iLocal_124);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						if (!unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
						{
							uLocal_126[0x00000000] = func_169(iLocal_73[0x00000000], 0x00000000, 0x00000091);
							unk_0xF2D30B8ACAF12A39(uLocal_126[0x00000000], 0x00000000);
						}
					}
					if (!func_196())
					{
						if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
						{
							iLocal_75 = unk_0x728870EB733D12A1();
						}
						func_168(&uLocal_140, "REDR1AU", "REDR1_DCO", 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						func_159(0x00000001);
						func_158(0x00000001);
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							func_157();
							unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000001], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_103 = (unk_0x1C0640BA9A7327B3() + 0x0000EA60);
							if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
							{
								unk_0xF2D30B8ACAF12A39(uLocal_126[0x00000000], 0x00000001);
							}
							iLocal_53 = 0x00000001;
						}
					}
				}
			}
			if (iLocal_52 == 0x00000002)
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0x00000000, 0x00000001, 0x00000000) && unk_0x8E28E832BEAC3DCE(vLocal_125, 1f)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_125, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_156();
					if (!func_196())
					{
						if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
						{
							iLocal_75 = unk_0x728870EB733D12A1();
						}
						func_159(0x00000001);
						func_158(0x00000001);
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_67(&uLocal_140, "REDR2AU", "REDR2_DCA", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
						{
							unk_0xF2D30B8ACAF12A39(uLocal_126[0x00000000], 0x00000001);
						}
						if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000001]))
						{
							unk_0xF2D30B8ACAF12A39(uLocal_126[0x00000001], 0x00000001);
						}
						iLocal_103 = (unk_0x1C0640BA9A7327B3() + 0x0001D4C0);
						iLocal_53 = 0x00000003;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iLocal_103 < unk_0x1C0640BA9A7327B3())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_79);
					unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_73[0x00000001], 0x00001B58, 0x0000080C, 0x00000004);
					unk_0x78A77CDD64392938(0x00000000, 0x000009C4);
					unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_74, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
					unk_0x75ABDC5F81978924(uLocal_79);
					unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
					unk_0xF82EA857DA10E0CD(&uLocal_79);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_79);
					unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_73[0x00000000], 0x00001B58, 0x0000080C, 0x00000004);
					unk_0x96167B03C5A77156(0x00000000, -1052.215f, -1354.937f, 4.3754f, 1f, 0xFFFFFFFF, 1f, 0x00000000, 0x471C4000);
					unk_0x96167B03C5A77156(0x00000000, -1061.464f, -1384.922f, 4.2462f, 1f, 0xFFFFFFFF, 1f, 0x00000001, 0x471C4000);
					unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
					unk_0x75ABDC5F81978924(uLocal_79);
					unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
					unk_0xF82EA857DA10E0CD(&uLocal_79);
				}
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_53 = 0x00000003;
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 8f, 8f, 4f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 80f))
					{
						bLocal_101 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_53 = 0x00000004;
					}
				}
				else if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x707318B0EDF0FF50(0x00000001);
				}
				else
				{
					unk_0x707318B0EDF0FF50(0x00000000);
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_52 == 0x00000001)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
					{
						if (func_67(&uLocal_140, "REDR1AU", "REDR1_DCL", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							SYSTEM::SETTIMERA(0x00000000);
							iLocal_53 = 0x00000004;
						}
					}
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 8f, 8f, 4f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 80f))
						{
							bLocal_101 = 0x00000001;
							SYSTEM::SETTIMERA(0x00000000);
							iLocal_53 = 0x00000004;
						}
					}
				}
			}
			if (iLocal_52 == 0x00000002)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_155();
						if (func_154())
						{
							func_62(0x00000000);
						}
					}
					else if (func_4())
					{
						func_62(0x00000001);
					}
				}
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_62, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3366C505CA31A0C9(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 80f))
						{
							if (unk_0xE115347EA59F7B86(iLocal_73[0x00000000], unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_79);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
									unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "exit_1", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
									unk_0x75ABDC5F81978924(uLocal_79);
									unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
									unk_0xF82EA857DA10E0CD(&uLocal_79);
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
								{
									unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
								}
								SYSTEM::SETTIMERA(0x00000000);
								iLocal_53 = 0x00000004;
							}
						}
					}
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_79);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "exit_1", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x75ABDC5F81978924(uLocal_79);
						unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
						unk_0xF82EA857DA10E0CD(&uLocal_79);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
						}
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_53 = 0x00000004;
					}
				}
				if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_74, 1.5f, 1.5f, 5f, 0x00000000, 0x00000001, 0x00000000) && unk_0x3366C505CA31A0C9(unk_0x16F2683693E537C9()))
					{
						if (func_154())
						{
							func_62(0x00000000);
						}
						func_68();
						SYSTEM::WAIT(0x00000000);
						if (func_67(&uLocal_140, "REDR2AU", "REDR2_TRY", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_137 = 0x00000002;
							iLocal_59 = 0x00000000;
							while (iLocal_59 <= 0x00000001)
							{
								if (unk_0xE4EDC4B0E92C078B(uLocal_126[iLocal_59]))
								{
									unk_0x142CC44DB769B57E(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							if (!unk_0xE4EDC4B0E92C078B(iLocal_127))
							{
								iLocal_127 = func_152(iLocal_74, 0x00000000, 0x00000000);
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								unk_0x327AAEE25F323797(iLocal_73[0x00000000]);
							}
							iLocal_53 = 0x00000004;
						}
					}
				}
				if (iLocal_103 < unk_0x1C0640BA9A7327B3())
				{
					if (func_154())
					{
						func_62(0x00000000);
					}
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_DRV", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						if ((!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001])) && unk_0xC844350D5D58C99A(iLocal_74))
						{
							unk_0xDD353D0E9C789D0E(&uLocal_79);
							unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_73[0x00000001], 0xFFFFFFFF, 0x0000080C, 0x00000004);
							unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_74, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
							unk_0x75ABDC5F81978924(uLocal_79);
							unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
							unk_0xF82EA857DA10E0CD(&uLocal_79);
							unk_0xDD353D0E9C789D0E(&uLocal_79);
							unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_73[0x00000000], 0xFFFFFFFF, 0x0000080C, 0x00000004);
							unk_0xF96A174EE26D7588(0x00000000, iLocal_73[0x00000000], 0x00000000);
							unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_74, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
							unk_0x75ABDC5F81978924(uLocal_79);
							unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
							unk_0xF82EA857DA10E0CD(&uLocal_79);
							iLocal_59 = 0x00000000;
							while (iLocal_59 <= 0x00000001)
							{
								if (unk_0xE4EDC4B0E92C078B(uLocal_126[iLocal_59]))
								{
									unk_0x142CC44DB769B57E(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							iLocal_53 = 0x00000002;
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (iLocal_52 == 0x00000001)
			{
				switch (iLocal_137)
				{
					case 0x00000000:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 8f, 8f, 4f, 0x00000000, 0x00000001, 0x00000000) || bLocal_101)
							{
								unk_0x707318B0EDF0FF50(0x00000000);
								unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
								unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
								unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0xFFFFFFFF, 0x0000080C, 0x00000004);
								if ((unk_0x1C0640BA9A7327B3() + 0x0000C350) > iLocal_103 || unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()))
								{
									func_6();
									if (bLocal_101)
									{
										if (!func_4())
										{
											if (func_22() == 0x00000000)
											{
												if (func_67(&uLocal_140, "REDR1AU", "REDR1_HYM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
												{
													SYSTEM::SETTIMERA(0x00000000);
													iLocal_137++;
												}
											}
											else if (func_22() == 0x00000001)
											{
												if (func_67(&uLocal_140, "REDR1AU", "REDR1_HYF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
												{
													SYSTEM::SETTIMERA(0x00000000);
													iLocal_137++;
												}
											}
											else if (func_22() == 0x00000002)
											{
												if (func_67(&uLocal_140, "REDR1AU", "REDR1_HYT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
												{
													SYSTEM::SETTIMERA(0x00000000);
													iLocal_137++;
												}
											}
										}
									}
									else
									{
										iLocal_137++;
									}
								}
							}
						}
						break;
					
					case 0x00000001:
						if (!func_4())
						{
							if (func_151())
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_79);
									unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
									unk_0x75ABDC5F81978924(uLocal_79);
									unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
									unk_0xF82EA857DA10E0CD(&uLocal_79);
									if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
									{
										unk_0xDD353D0E9C789D0E(&uLocal_79);
										unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										unk_0xF96A174EE26D7588(0x00000000, iLocal_73[0x00000000], 0x00000000);
										unk_0x78A77CDD64392938(0x00000000, 0x00000BB8);
										unk_0x96167B03C5A77156(0x00000000, -1052.215f, -1354.937f, 4.3754f, 1f, 0xFFFFFFFF, 1f, 0x00000000, 0x471C4000);
										unk_0x96167B03C5A77156(0x00000000, -1061.464f, -1384.922f, 4.2462f, 1f, 0xFFFFFFFF, 1f, 0x00000001, 0x471C4000);
										unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
										unk_0x75ABDC5F81978924(uLocal_79);
										unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
										unk_0xF82EA857DA10E0CD(&uLocal_79);
									}
									func_150();
								}
							}
							else
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
								{
									if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 80f))
									{
										unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
										unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00002710, 0x0000080C, 0x00000004);
										func_6();
										SYSTEM::WAIT(0x00000000);
										iLocal_137++;
									}
									else
									{
										func_149(iLocal_73[0x00000000], &(uLocal_61[0x00000000]));
									}
								}
								if (!func_4())
								{
									iLocal_137++;
								}
							}
						}
						break;
					
					case 0x00000002:
						if (func_151())
						{
							iLocal_137 = 0x00000006;
						}
						else
						{
							iLocal_137++;
						}
						break;
					
					case 0x00000003:
						if (!iLocal_84)
						{
							if (SYSTEM::TIMERA() > 0x000005DC)
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_79);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
									unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
									unk_0x75ABDC5F81978924(uLocal_79);
									unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
									unk_0xF82EA857DA10E0CD(&uLocal_79);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_84 = 0x00000001;
								}
							}
						}
						func_149(iLocal_73[0x00000000], &(uLocal_61[0x00000000]));
						if (!func_4())
						{
							if (func_67(&uLocal_140, "REDR1AU", "REDR1_LFT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_137++;
							}
						}
						break;
					
					case 0x00000004:
						if (!func_151())
						{
							if (!func_4())
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_PLS", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
									if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
									{
										unk_0x142CC44DB769B57E(&(uLocal_126[0x00000000]));
									}
									if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000001]))
									{
										unk_0x142CC44DB769B57E(&(uLocal_126[0x00000001]));
									}
									if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
									{
										unk_0x71EDC33E5A423750(iLocal_74, 0x00000001);
										if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
										{
											unk_0x5B1D360B9C6F0A09(iLocal_73[0x00000000], iLocal_74, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
										}
									}
									iLocal_137++;
								}
							}
						}
						else
						{
							if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_126[0x00000000]));
							}
							if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000001]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_126[0x00000001]));
							}
							iLocal_137++;
						}
						break;
					
					case 0x00000005:
						if (func_151())
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								if (!unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
									unk_0xE25C96A9C36BE5D2(iLocal_73[0x00000000], func_63());
									unk_0x7BECA8F360B1686D(iLocal_73[0x00000000], 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_73[0x00000000], 0x00000000);
								}
								unk_0x0E2400AB9174FA81(0x000000FF, iLocal_80, 0x6F0783F5);
								func_148();
							}
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_74)
								{
									if (!func_4())
									{
										if (func_22() == 0x00000000)
										{
											if (func_67(&uLocal_140, "REDR1AU", "REDR1_TKM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_53 = 0x00000007;
											}
										}
										else if (func_22() == 0x00000001)
										{
											if (func_67(&uLocal_140, "REDR1AU", "REDR1_TKF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_53 = 0x00000007;
											}
										}
										else if (func_22() == 0x00000002)
										{
											if (func_67(&uLocal_140, "REDR1AU", "REDR1_TKT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_53 = 0x00000007;
											}
										}
									}
								}
								else
								{
									iLocal_53 = 0x00000007;
								}
							}
						}
						break;
					
					case 0x00000006:
						func_149(iLocal_73[0x00000000], &(uLocal_61[0x00000000]));
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_67(&uLocal_140, "REDR1AU", "REDR1_AKB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_137 = 0x0000000A;
									}
								}
							}
							else
							{
								iLocal_137 = 0x00000004;
							}
						}
						else
						{
							iLocal_137 = 0x00000004;
						}
						break;
					
					case 0x00000007:
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_22() == 0x00000000)
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_JIA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											SYSTEM::SETTIMERA(0x00000000);
											iLocal_137 = 0x0000000A;
										}
									}
									else if (func_22() == 0x00000001)
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_JIB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											SYSTEM::SETTIMERA(0x00000000);
											iLocal_137 = 0x0000000A;
										}
									}
									else if (func_22() == 0x00000002)
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_JIC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											SYSTEM::SETTIMERA(0x00000000);
											iLocal_137 = 0x0000000A;
										}
									}
								}
							}
							else
							{
								iLocal_137 = 0x00000004;
							}
						}
						else
						{
							iLocal_137 = 0x00000004;
						}
						break;
					
					case 0x0000000A:
						if (func_151())
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								if (!unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
									unk_0xE25C96A9C36BE5D2(iLocal_73[0x00000000], func_63());
									unk_0x7BECA8F360B1686D(iLocal_73[0x00000000], 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_73[0x00000000], 0x00000000);
								}
								unk_0x0E2400AB9174FA81(0x000000FF, iLocal_80, 0x6F0783F5);
								func_148();
							}
							iLocal_137++;
						}
						else
						{
							iLocal_137 = 0x00000004;
						}
						break;
					
					case 0x0000000B:
						iLocal_53 = 0x00000007;
						break;
					}
			}
			if (iLocal_52 == 0x00000002)
			{
				switch (iLocal_137)
				{
					case 0x00000000:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0x7069CC4DE1EA3FAA(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 50f))
								{
									unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0xFFFFFFFF, 0x0000080C, 0x00000004);
									unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
									unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
									if (func_154())
									{
										func_62(0x00000000);
									}
									func_6();
									SYSTEM::WAIT(0x00000000);
									if (func_67(&uLocal_140, "REDR2AU", "REDR2_AKA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_137++;
									}
								}
								else
								{
									func_149(iLocal_73[0x00000000], &(uLocal_61[0x00000000]));
								}
							}
						}
						break;
					
					case 0x00000001:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							unk_0xDD353D0E9C789D0E(&uLocal_79);
							unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
							unk_0x75ABDC5F81978924(uLocal_79);
							unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
							unk_0xF82EA857DA10E0CD(&uLocal_79);
							SYSTEM::SETTIMERA(0x00000000);
							iLocal_137++;
						}
						break;
					
					case 0x00000002:
						func_149(iLocal_73[0x00000000], &(uLocal_61[0x00000000]));
						if (!unk_0x3366C505CA31A0C9(unk_0x16F2683693E537C9()))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
							{
								unk_0x71EDC33E5A423750(iLocal_74, 0x00000001);
							}
						}
						if (SYSTEM::TIMERA() > 0x00001F40)
						{
							if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_126[0x00000000]));
							}
							if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000001]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_126[0x00000001]));
							}
							if (!unk_0xE4EDC4B0E92C078B(iLocal_127))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
								{
									iLocal_127 = func_152(iLocal_74, 0x00000000, 0x00000000);
									unk_0x71EDC33E5A423750(iLocal_74, 0x00000001);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000) && SYSTEM::TIMERA() > 0x0000251C)
								{
									iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
									if (iVar0 < 0x0000003C)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_PLS", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											SYSTEM::SETTIMERA(0x00000000);
										}
									}
									else if (func_67(&uLocal_140, "REDR2AU", "REDR2_CAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										SYSTEM::SETTIMERA(0x00000000);
									}
								}
							}
						}
						if (!unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_74, 0x00000001))
							{
								iLocal_53 = 0x00000007;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 0x00000001)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
				{
					if (SYSTEM::TIMERA() > 0x0000C350 || unk_0xA30B8362589C124A(iLocal_74, 0xFFFFFFFF, 0x00000000) == iLocal_73[0x00000000])
					{
						if (func_67(&uLocal_140, "REDR1AU", "REDR1_FU", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000) && !unk_0x5B17F10380E80E5B(iLocal_74))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
								{
									if (unk_0xBBA8A868118C90ED(iLocal_74, 0xFFFFFFFF, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], iLocal_74, 0x00000000))
									{
										unk_0x16A6C233289238AA(iLocal_73[0x00000000], iLocal_74, 0x00000000);
										iLocal_53 = 0x00000002;
									}
									else if (unk_0xA30B8362589C124A(iLocal_74, 0xFFFFFFFF, 0x00000000) == iLocal_73[0x00000000])
									{
										iLocal_53 = 0x00000002;
									}
									else if (unk_0xA30B8362589C124A(iLocal_74, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
									{
										iLocal_53 = 0x00000007;
									}
									else
									{
										func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
										unk_0x01E4BB5190DF7317(iLocal_73[0x00000000], 0x471C4000, 0x00000000);
										unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
										SYSTEM::WAIT(0x00000000);
										func_66();
									}
								}
							}
							else if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
								unk_0x01E4BB5190DF7317(iLocal_73[0x00000000], 0x471C4000, 0x00000000);
								unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
								SYSTEM::WAIT(0x00000000);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 0x00000002)
			{
				if (SYSTEM::TIMERA() > 0x0000EA60)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_FU", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
						{
							if (unk_0xBBA8A868118C90ED(iLocal_74, 0xFFFFFFFF, 0x00000000))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_79);
									unk_0xBC43ED9FE28DB191(0x00000000);
									unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_74, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
									unk_0x75ABDC5F81978924(uLocal_79);
									unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
									unk_0xF82EA857DA10E0CD(&uLocal_79);
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
							{
								unk_0xDD353D0E9C789D0E(&uLocal_79);
								unk_0xBC43ED9FE28DB191(0x00000000);
								unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_74, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
								unk_0x75ABDC5F81978924(uLocal_79);
								unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
								unk_0xF82EA857DA10E0CD(&uLocal_79);
							}
							iLocal_53 = 0x00000002;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_52 == 0x00000001)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					if (!unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], iLocal_74, 0x00000000))
						{
							if (unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x153011FC) != 0x00000001 && unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x153011FC) != 0x00000000)
							{
								unk_0x5DAB50E08C3C504A(iLocal_74, 5f);
								unk_0xDC2C59BD0989562B(iLocal_74, 0x00000001);
								unk_0xDD353D0E9C789D0E(&uLocal_79);
								unk_0x132B85BCE016BCA0(0x00000000, iLocal_74, -1016.152f, -1352.855f, 4.4854f, 0x00000004, 50f, 0x00040000, -1f, 100f, 0x00000001);
								unk_0x132B85BCE016BCA0(0x00000000, iLocal_74, -1005.757f, -1353.806f, 4.4756f, 0x00000004, 50f, 0x00040000, -1f, 100f, 0x00000001);
								unk_0x132B85BCE016BCA0(0x00000000, iLocal_74, -989.2302f, -1354.278f, -7.3581f, 0x00000004, 50f, 0x00040000, -1f, 100f, 0x00000001);
								unk_0x75ABDC5F81978924(uLocal_79);
								unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
								unk_0xF82EA857DA10E0CD(&uLocal_79);
								unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 0x00000002)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
					{
						if (unk_0x82CCEAB29E9451DD(iLocal_73[0x00000000], iLocal_74) && unk_0x82CCEAB29E9451DD(iLocal_73[0x00000001], iLocal_74))
						{
							unk_0xDC2C59BD0989562B(iLocal_74, 0x00000001);
							unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
							unk_0x93D47DFD0AE94949(iLocal_73[0x00000001], 0xFFFFFFFF);
							unk_0xFADC0A217229F6B5(iLocal_73[0x00000001], 0x00000001);
							iLocal_53 = 0x00000005;
						}
						if (!iLocal_81)
						{
							if (unk_0x82CCEAB29E9451DD(iLocal_73[0x00000000], iLocal_74) && !unk_0x82CCEAB29E9451DD(iLocal_73[0x00000001], iLocal_74))
							{
								unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
								unk_0x93D47DFD0AE94949(iLocal_73[0x00000000], 0xFFFFFFFF);
							}
							if (!unk_0x82CCEAB29E9451DD(iLocal_73[0x00000000], iLocal_74) && unk_0x82CCEAB29E9451DD(iLocal_73[0x00000001], iLocal_74))
							{
								unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
								unk_0x93D47DFD0AE94949(iLocal_73[0x00000001], 0xFFFFFFFF);
							}
							iLocal_81 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
					unk_0xDD353D0E9C789D0E(&uLocal_79);
					unk_0xE9362E4D600DD12A(0x00000000, iLocal_74, unk_0x68E4ADDDDCD7BDDE(iLocal_74, 0f, 2f, 0f), 10f, 0x00000000, iLocal_78, 0x00040000, 5f, -1f);
					unk_0xD1F0F33C375B8446(0x00000000, iLocal_74, 0x00000018, 0x000001F4);
					unk_0xD1F0F33C375B8446(0x00000000, iLocal_74, 0x00000009, 0x000005DC);
					unk_0xD1F0F33C375B8446(0x00000000, iLocal_74, 0x00000018, 0x000001F4);
					unk_0xD1F0F33C375B8446(0x00000000, iLocal_74, 0x0000000B, 0x000005DC);
					unk_0x132B85BCE016BCA0(0x00000000, iLocal_74, 2185.817f, 3915.471f, 27.9257f, 0x00000004, 30f, 0x00040000, 0f, 0f, 0x00000001);
					unk_0x75ABDC5F81978924(uLocal_79);
					unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
					unk_0xF82EA857DA10E0CD(&uLocal_79);
					unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
				}
			}
			iLocal_53 = 0x00000006;
			break;
		
		case 0x00000006:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				if (unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x0E763797) == 0x00000001)
				{
					if (unk_0x4F1B602325013CC2(iLocal_73[0x00000000]) == 0x00000005)
					{
						func_66();
					}
				}
			}
			break;
		
		case 0x00000007:
			if (iLocal_52 == 0x00000001)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000001], 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
					{
						unk_0x6DAD7906B73F064D(&(iLocal_73[0x00000001]));
					}
				}
				switch (iLocal_60)
				{
					case 0x00000000:
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (!unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
							{
								uLocal_126[0x00000000] = func_169(iLocal_73[0x00000000], 0x00000000, 0x00000091);
							}
							iLocal_60++;
							SYSTEM::SETTIMERA(0x00000000);
						}
						break;
					
					case 0x00000001:
						if (SYSTEM::TIMERA() > 0x000003E8)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
							{
								if (func_151())
								{
									if (unk_0xDF1306B443CD3D15(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000))
									{
										fLocal_131 = func_147(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00000001);
										iLocal_60++;
									}
								}
								else if (!iLocal_99)
								{
									if (func_67(&uLocal_140, "REDR1AU", "REDR1_LFC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_99 = 0x00000001;
									}
								}
							}
						}
						break;
					
					case 0x00000002:
						func_146();
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							if (func_151())
							{
								if (!iLocal_98)
								{
									if (func_147(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00000001) > (fLocal_131 + 5f))
									{
										if (func_67(&uLocal_140, "REDR1AU", "REDR1_LEA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_98 = 0x00000001;
										}
									}
								}
							}
							else if (!iLocal_99)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_LFC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_99 = 0x00000001;
								}
							}
						}
						if (func_2())
						{
							if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
							{
								unk_0x71EDC33E5A423750(iLocal_74, 0x00000001);
							}
							if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_126[0x00000000]));
							}
							if (func_22() == 0x00000002 && !func_64())
							{
								if (!unk_0xE4EDC4B0E92C078B(iLocal_83))
								{
									iLocal_83 = func_144(vLocal_71, 0x00000000);
									unk_0xBC8E0A7390523199(iLocal_83, 0x0000010D);
									func_142();
								}
							}
							iLocal_58 = 0x00000001;
							iLocal_60++;
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							if (func_147(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00000001) > 50f)
							{
								func_66();
							}
						}
						break;
					
					case 0x00000003:
						if (!func_4())
						{
							SYSTEM::WAIT(0x000005DC);
							unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
							if (func_22() == 0x00000000)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_WHA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_60++;
								}
							}
							else if (func_22() == 0x00000001)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_WHB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_60++;
								}
							}
							else if (func_22() == 0x00000002)
							{
								if (func_67(&uLocal_140, "REDR1AU", "REDR1_WHC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_60++;
								}
							}
						}
						break;
					
					case 0x00000004:
						if (!func_4())
						{
							if (func_67(&uLocal_140, "REDR1AU", "REDR1_WH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_138 = unk_0x1C0640BA9A7327B3();
								iLocal_60++;
							}
						}
						break;
					
					case 0x00000005:
						func_141();
						func_140();
						func_146();
						if (!iLocal_90)
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_138) > 0x00001B58)
							{
								if (!func_4())
								{
									if (func_67(&uLocal_140, "REDR1AU", "REDR1_ILL", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_138 = unk_0x1C0640BA9A7327B3();
										iLocal_90 = 0x00000001;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_89 && !bLocal_88)
							{
								func_139();
							}
							else
							{
								func_136();
								func_135();
								unk_0xF3039DE1FDB4F6FD(0x00000001);
							}
						}
						if (func_134(vLocal_69))
						{
							func_5(0x00000000);
							func_68();
							SYSTEM::WAIT(0x00000000);
							func_67(&uLocal_140, "REDR1AU", "REDR1_OFFR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_133())
						{
							func_5(0x00000000);
							func_68();
							SYSTEM::WAIT(0x00000000);
							func_67(&uLocal_140, "REDR1AU", "REDR1_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							if (unk_0x5A91F08DF773C39D(iLocal_73[0x00000000], vLocal_69, Global_16, 0x00000001, 0x00000001, 0x00000000))
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_82))
								{
									unk_0x142CC44DB769B57E(&iLocal_82);
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_83))
								{
									unk_0x142CC44DB769B57E(&iLocal_83);
								}
								iLocal_53 = 0x00000008;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 0x00000002)
			{
				switch (iLocal_60)
				{
					case 0x00000000:
						if (!unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_74, 0x00000001))
							{
								if (!unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
								{
									uLocal_126[0x00000000] = func_169(iLocal_73[0x00000000], 0x00000000, 0x00000091);
								}
								if (!unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000001]))
								{
									uLocal_126[0x00000001] = func_169(iLocal_73[0x00000001], 0x00000000, 0x00000091);
								}
								if (!func_4())
								{
									SYSTEM::SETTIMERA(0x00000000);
									if (func_22() == 0x00000000)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_JIA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_60++;
										}
									}
									else if (func_22() == 0x00000001)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_JIB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_60++;
										}
									}
									else if (func_22() == 0x00000002)
									{
										if (func_67(&uLocal_140, "REDR2AU", "REDR2_JIC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_60++;
										}
									}
								}
							}
						}
						break;
					
					case 0x00000001:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
						{
							unk_0xBC43ED9FE28DB191(iLocal_73[0x00000000]);
							unk_0x5B1D360B9C6F0A09(iLocal_73[0x00000000], iLocal_74, 0x00007530, 0x00000002, 2f, 0x00000001, 0x00000000);
						}
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_60++;
						break;
					
					case 0x00000002:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]) && !unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
						{
							unk_0xDD353D0E9C789D0E(&uLocal_79);
							unk_0xBC43ED9FE28DB191(0x00000000);
							unk_0xA8CC11FF8D2962D4(0x00000000, iLocal_74, 1.5f, -3f, 0f, 1f, 0x00000FA0, 0x3DCCCCCD, 0x00000001);
							unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_74, 0x00007530, 0x00000001, 2f, 0x00000001, 0x00000000);
							unk_0x75ABDC5F81978924(uLocal_79);
							unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
							unk_0xF82EA857DA10E0CD(&uLocal_79);
						}
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_60++;
						break;
					
					case 0x00000003:
						func_141();
						func_140();
						if (!iLocal_97)
						{
							if (!func_4())
							{
								if (func_67(&uLocal_140, "REDR2AU", "REDR2_BCK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_97 = 0x00000001;
								}
							}
						}
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
							{
								if (!unk_0x437347B10A200C4B(iLocal_73[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B(iLocal_73[0x00000001], 0x00000000))
								{
									if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_73[0x00000001], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
									{
										unk_0x0E2400AB9174FA81(0x000000FF, iLocal_80, 0x6F0783F5);
										func_148();
										iLocal_59 = 0x00000000;
										while (iLocal_59 <= (iLocal_72 - 0x00000001))
										{
											if (unk_0xE4EDC4B0E92C078B(uLocal_126[iLocal_59]))
											{
												unk_0x142CC44DB769B57E(&(uLocal_126[iLocal_59]));
											}
											iLocal_59++;
										}
										if (unk_0xE4EDC4B0E92C078B(iLocal_127))
										{
											unk_0x142CC44DB769B57E(&iLocal_127);
										}
										if (func_22() == 0x00000002 && !func_64())
										{
											if (!unk_0xE4EDC4B0E92C078B(iLocal_83))
											{
												iLocal_83 = func_144(vLocal_71, 0x00000000);
												unk_0xBC8E0A7390523199(iLocal_83, 0x0000010D);
												func_142();
											}
										}
										if (func_22() == 0x00000000)
										{
											if (func_67(&uLocal_140, "REDR2AU", "REDR2_WHA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												SYSTEM::SETTIMERA(0x00000000);
												iLocal_60++;
											}
										}
										else if (func_22() == 0x00000001)
										{
											if (func_67(&uLocal_140, "REDR2AU", "REDR2_WHB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												SYSTEM::SETTIMERA(0x00000000);
												iLocal_60++;
											}
										}
										else if (func_22() == 0x00000002)
										{
											if (func_67(&uLocal_140, "REDR2AU", "REDR2_WHC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
											{
												SYSTEM::SETTIMERA(0x00000000);
												iLocal_60++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 0x00000004:
						func_141();
						func_140();
						if (!func_4())
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_WH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_58 = 0x00000001;
								unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
								iLocal_138 = unk_0x1C0640BA9A7327B3();
								iLocal_60++;
							}
						}
						break;
					
					case 0x00000005:
						func_141();
						if (iLocal_309 == 0x00000000 || iLocal_309 == 0x00000009)
						{
							func_140();
						}
						if ((unk_0x1C0640BA9A7327B3() - iLocal_138) > 0x00002328)
						{
							func_127();
						}
						if (iLocal_309 == 0x00000009 && ((unk_0x1C0640BA9A7327B3() - iLocal_310) > 0x00001770 && (unk_0x1C0640BA9A7327B3() - iLocal_310) < 0x00001964))
						{
							func_67(&uLocal_140, "REDR2AU", "REDR2_CHAT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_134(vLocal_69))
						{
							func_5(0x00000000);
							func_68();
							SYSTEM::WAIT(0x00000000);
							func_67(&uLocal_140, "REDR2AU", "REDR2_OFFR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_133())
						{
							func_5(0x00000000);
							func_68();
							SYSTEM::WAIT(0x00000000);
							func_67(&uLocal_140, "REDR2AU", "REDR2_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (!unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
						{
							if ((!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001])) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_74, 0x00000000))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_73[0x00000000], vLocal_69, Global_16, 0x00000001, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(iLocal_73[0x00000001], vLocal_69, Global_16, 0x00000000, 0x00000001, 0x00000000))
								{
									iLocal_60++;
								}
							}
						}
						break;
					
					case 0x00000006:
						if (unk_0xE4EDC4B0E92C078B(iLocal_82))
						{
							unk_0x142CC44DB769B57E(&iLocal_82);
						}
						if (unk_0xE4EDC4B0E92C078B(iLocal_83))
						{
							unk_0x142CC44DB769B57E(&iLocal_83);
						}
						iLocal_53 = 0x00000008;
						break;
					}
			}
			break;
		
		case 0x00000008:
			iLocal_59 = 0x00000000;
			while (iLocal_59 <= (iLocal_72 - 0x00000001))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[iLocal_59]))
				{
					unk_0x11AD11297DC58CC7(iLocal_73[iLocal_59], 0x00000000);
				}
				iLocal_59++;
			}
			if (iLocal_52 == 0x00000001)
			{
				if (func_126(0x00000001, 0x00000000, 0x00000001) && iLocal_104 == 0xFFFFFFFF)
				{
					func_6();
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), (10.5f - 5f), 0x00000002, 0x00000000);
					}
					if (func_2())
					{
						if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) == iLocal_74)
						{
							iLocal_104 = 0x00000000;
						}
						else
						{
							iLocal_104 = 0x00000001;
						}
					}
					else
					{
						iLocal_104 = 0x00000002;
					}
				}
				if (iLocal_104 == 0x00000000)
				{
					func_125();
				}
				if (iLocal_104 == 0x00000001)
				{
					func_124();
				}
				if (iLocal_104 == 0x00000002)
				{
					func_123();
				}
				if (bLocal_110)
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					func_36();
				}
			}
			if (iLocal_52 == 0x00000002)
			{
				if (func_126(0x00000001, 0x00000000, 0x00000001) && iLocal_104 == 0xFFFFFFFF)
				{
					func_68();
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), (10.5f - 4f), 0x00000002, 0x00000000);
						unk_0x9E632F16E887F781(1143.587f, 2672.224f, 37.1142f, 70f, 0x00000002);
						unk_0x9E632F16E887F781(930.2788f, 2856.145f, 59.2884f, 70f, 0x00000002);
					}
					func_115(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					while (func_4())
					{
						SYSTEM::WAIT(0x00000000);
					}
					if (func_2())
					{
						if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) == iLocal_74)
						{
							iLocal_104 = 0x00000000;
						}
					}
				}
				if (iLocal_104 == 0x00000000)
				{
					func_112();
				}
				else if (iLocal_104 == 0x00000001)
				{
					func_111();
				}
				else if (iLocal_104 == 0x00000002)
				{
					func_77();
				}
				if (bLocal_110)
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					func_36();
				}
			}
			break;
		
		case 0x00000009:
			break;
	}
}

void func_77()
{
	switch (iLocal_106)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
				unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00002710, 0x0000080C, 0x00000004);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
			{
				unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
				unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
			}
			func_67(&uLocal_140, "REDR2AU", "REDR2_TK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			iLocal_106++;
			break;
		
		case 0x00000001:
			iLocal_106++;
			break;
		
		case 0x00000002:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					unk_0x80AA372E04ED318D(iLocal_73[0x00000000], vLocal_70, 1f, 0xFFFFFFFF, 0x471C4000, 0x3F000000);
					iLocal_105 = unk_0x1C0640BA9A7327B3() + 500;
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					unk_0x96167B03C5A77156(iLocal_73[0x00000001], vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000004:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				iLocal_106++;
			}
			break;
		
		case 0x00000005:
			func_78(func_22(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
			bLocal_110 = 0x00000001;
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_110(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_110(iParam0) == 0x00000004)
	{
		return;
	}
	func_79(func_110(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_109();
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
					func_108(0x00000063, 0x00000001);
					func_107(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_107(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_107(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_88(0x00000005))
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
							func_107(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_107(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_107(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_107(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_107(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_107(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_107(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_107(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_107(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_107(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_107(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_107(joaat("sp2_money_spent_property"), iParam3);
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
									func_107(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_107(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_107(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_107(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_107(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_107(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_107(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_107(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_107(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_107(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_107(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_107(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_108(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_108(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_108(0x00000060, iParam3);
					break;
			}
			func_108(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_82(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_82(iVar1);
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
					func_107(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_107(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_107(joaat("sp2_total_cash_earned"), iParam3);
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
	func_81(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_80(0x00000000);
	}
	return 0x00000001;
}

void func_80(bool bParam0)
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

void func_81(int iParam0)
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

void func_82(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_46(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_46(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_46(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_46(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_85(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_85(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_85(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_85(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_85(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_85(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_84() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_84() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_83(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_83(int iParam0)
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

int func_84()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_86(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_47();
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

void func_87(int iParam0)
{
	func_108(0x0000005D, iParam0);
	func_108(0x0000001D, iParam0);
	func_108(0x0000001E, iParam0);
}

bool func_88(int iParam0)
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
		return func_90(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_90(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_90(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_90(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_89(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_89(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_89(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_89(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_89(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_89(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_84() /*10930*/].f_181E.f_A, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_86(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_47();
	}
	iVar1 = func_92(iParam0, iParam1);
	uVar2 = func_91(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)
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

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_47();
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

int func_93(bool bParam0)
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
		func_45(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_94(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (func_28(0x0000000E) && !func_106(iParam0))
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
	if (func_105(&Global_4127F1))
	{
		if (func_103(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_96(&Global_4127F1, iParam0))
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

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_28(0x0000000E) && !func_106(iParam1))
	{
		return 0x00000000;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0x00000000);
	}
	func_99(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_28(0x0000000E) && !func_106(iParam1))
	{
		return 0x00000000;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_99(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4127F0 - 0.5f));
}

void func_100(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_101(var uParam0, float fParam1)
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

float func_102(var uParam0)
{
	return uParam0->f_50;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_104(var uParam0, int iParam1)
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

bool func_105(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_106(int iParam0)
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

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_108(int iParam0, int iParam1)
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

void func_109()
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

int func_110(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_111()
{
	int iVar0;
	
	switch (iLocal_106)
	{
		case 0x00000000:
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x8B38C0DAEEDB5F9C(iVar0))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
							unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
							unk_0x0A94A109271BE75A(iLocal_73[0x00000001]);
						}
					}
					func_67(&uLocal_140, "REDR2AU", "REDR2_TK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000001:
			iLocal_106++;
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_79);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0x96167B03C5A77156(0x00000000, vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0x75ABDC5F81978924(uLocal_79);
				unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
				unk_0xF82EA857DA10E0CD(&uLocal_79);
				iLocal_105 = unk_0x1C0640BA9A7327B3() + 1500;
				iLocal_106++;
			}
			break;
		
		case 0x00000003:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					unk_0x96167B03C5A77156(iLocal_73[0x00000000], vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000004:
			if (func_22() == 0x00000002)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_105 = unk_0x1C0640BA9A7327B3() + 1000;
					iLocal_106 = 0x00000007;
				}
			}
			else if (func_22() == 0x00000001)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_105 = unk_0x1C0640BA9A7327B3() + 1500;
					iLocal_106 = 0x00000007;
				}
			}
			else if (func_22() == 0x00000000)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_105 = unk_0x1C0640BA9A7327B3() + 750;
					iLocal_106 = 0x00000007;
				}
			}
			break;
		
		case 0x00000005:
			iLocal_106++;
			break;
		
		case 0x00000006:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				if (func_22() == 0x00000002)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_NOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x96167B03C5A77156(iLocal_73[0x00000000], vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						iLocal_105 = unk_0x1C0640BA9A7327B3() + 3500;
						iLocal_106++;
					}
				}
				if (func_22() == 0x00000001 || func_22() == 0x00000000)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_MIS", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x96167B03C5A77156(iLocal_73[0x00000000], vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						iLocal_105 = unk_0x1C0640BA9A7327B3() + 3500;
						iLocal_106++;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!func_4())
			{
				iLocal_106++;
			}
			break;
		
		case 0x00000008:
			func_78(func_22(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
			bLocal_110 = 0x00000001;
			break;
	}
}

void func_112()
{
	unk_0x3FC8DBCC154CA56B();
	switch (iLocal_106)
	{
		case 0x00000000:
			unk_0x8BCB70EB440DED83(0x00000000);
			unk_0xBFE31971E49FA500(0x00000000);
			if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
			{
				if (unk_0x8B38C0DAEEDB5F9C(iLocal_74))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
							unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
							unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00000FA0, 0x0000080C, 0x00000004);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
							unk_0x0A94A109271BE75A(iLocal_73[0x00000001]);
						}
					}
					StringCopy(&cLocal_118, "", 24);
					func_68();
					SYSTEM::WAIT(0x00000000);
					func_67(&uLocal_140, "REDR2AU", "REDR2_TK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
			{
				iLocal_108 = unk_0xAE06CCC36C49929C(0x019286A9, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0x00000000, 0x00000002);
				iLocal_109 = unk_0xAE06CCC36C49929C(0x019286A9, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0x00000000, 0x00000002);
				unk_0x91F5B0244AAE6222(iLocal_108, "HAND_SHAKE", 0.3f);
				unk_0x91F5B0244AAE6222(iLocal_109, "HAND_SHAKE", 0.3f);
				unk_0xF1E4C781086FABC1(iLocal_109, iLocal_108, 0x000009C4, 0x00000000, 0x00000000);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x536F1BE96C726C4B(vLocal_69, 8f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0xA47B46945FF6DE74(iLocal_74, 1120.551f, 2647.307f, 36.9963f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(iLocal_74, 179.7675f);
				unk_0xB9FD7450C0DAB575(iLocal_74, 0x40A00000);
				iLocal_105 = unk_0x1C0640BA9A7327B3() + 2500;
				iLocal_106++;
			}
			break;
		
		case 0x00000002:
			if (iLocal_105 - 0x000001F4) < unk_0x1C0640BA9A7327B3()
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					if (unk_0x405E212DDE472467(iLocal_73[0x00000001], 0x00000000))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_79);
						unk_0x96167B03C5A77156(0x00000000, vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						unk_0x75ABDC5F81978924(uLocal_79);
						unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
						unk_0xF82EA857DA10E0CD(&uLocal_79);
						unk_0xFADC0A217229F6B5(iLocal_73[0x00000001], 0x00000001);
					}
				}
			}
			if (iLocal_105 - 0x000003E8) < unk_0x1C0640BA9A7327B3()
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					if (unk_0x405E212DDE472467(iLocal_73[0x00000000], 0x00000000))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_79);
						unk_0x96167B03C5A77156(0x00000000, vLocal_70 - Vector(0f, 0f, 1f), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						unk_0x75ABDC5F81978924(uLocal_79);
						unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
						unk_0xF82EA857DA10E0CD(&uLocal_79);
						unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
					}
				}
			}
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				unk_0x86F44313DFA8F00C(iLocal_108, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_109, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0xF1E4C781086FABC1(iLocal_109, iLocal_108, 0x00001388, 0x00000000, 0x00000000);
				unk_0x486B4ADE317F0689();
				iLocal_105 = unk_0x1C0640BA9A7327B3() + 6000;
				iLocal_106++;
			}
			break;
		
		case 0x00000003:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				unk_0x86F44313DFA8F00C(iLocal_108, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_109, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0xF1E4C781086FABC1(iLocal_109, iLocal_108, 0x000005DC, 0x00000001, 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					unk_0xA47B46945FF6DE74(iLocal_73[0x00000000], 1141.156f, 2643.205f, 37.1487f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_73[0x00000000], 262.7369f);
					unk_0xA47B46945FF6DE74(iLocal_73[0x00000001], 1140.152f, 2644.149f, 37.1487f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_73[0x00000001], 262.1522f);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				}
				if (func_22() == 0x00000002)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
					}
				}
				else if (func_22() == 0x00000001)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
					}
				}
				else if (func_22() == 0x00000000)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_TKM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
					}
				}
				iLocal_105 = unk_0x1C0640BA9A7327B3() + 1700;
				iLocal_106++;
			}
			break;
		
		case 0x00000004:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				iLocal_106++;
			}
			break;
		
		case 0x00000005:
			iLocal_106 = 0x00000007;
			break;
		
		case 0x00000006:
			if (!func_4())
			{
				if (func_22() == 0x00000002)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_NOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_105 = unk_0x1C0640BA9A7327B3() + 5500;
						iLocal_106++;
					}
				}
				if (func_22() == 0x00000001 || func_22() == 0x00000000)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_MIS", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_105 = unk_0x1C0640BA9A7327B3() + 5500;
						iLocal_106++;
					}
				}
			}
			break;
		
		case 0x00000007:
			unk_0x486B4ADE317F0689();
			unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
			func_115(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0xEBA53F35D0085654(&(iLocal_73[0x00000000]));
			unk_0xEBA53F35D0085654(&(iLocal_73[0x00000001]));
			if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
			{
				unk_0x71EDC33E5A423750(iLocal_74, 0x00000007);
			}
			if (iLocal_111)
			{
				if (!unk_0x437347B10A200C4B(iLocal_74, 0x00000000))
				{
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					unk_0x05CA0E7946B27A19(iLocal_74, 0x00000001);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
			}
			else
			{
				unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
			}
			unk_0xE3BB8E05FCEB3FBE(iLocal_108, 0x00000000);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(-7f, 0x3F800000);
			unk_0x8BCB70EB440DED83(0x00000001);
			unk_0xBFE31971E49FA500(0x00000001);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			func_78(func_22(), 0x00000001, 0x00000028, 0x00000000, 0x00000001);
			bLocal_110 = 0x00000001;
	}
	if (iLocal_106 != 0x00000000)
	{
		if (func_113(0x000003E8))
		{
			func_68();
			iLocal_111 = 0x00000001;
			iLocal_106 = 0x00000007;
		}
	}
}

int func_113(int iParam0)
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
			if (func_114())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_114()
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

void func_115(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_122(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_19())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_121(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_122(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_121(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_119(unk_0xD803B885F5E47A62())) && !func_117(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_116()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_119(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_116()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_117(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_118(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_118(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_47();
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

int func_119(int iParam0)
{
	if (func_117(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_120())
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

bool func_120()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_122(int iParam0)
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

void func_123()
{
	switch (iLocal_106)
	{
		case 0x00000000:
			if (!func_4())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
					unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
					unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00002710, 0x0000080C, 0x00000004);
				}
				if (bLocal_88)
				{
					func_67(&uLocal_140, "REDR1AU", "REDR1_TK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_67(&uLocal_140, "REDR1AU", "REDR1_TK1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_106++;
			}
			break;
		
		case 0x00000001:
			iLocal_105 = unk_0x1C0640BA9A7327B3() + 3000;
			iLocal_106++;
			break;
		
		case 0x00000002:
			if (func_22() == 0x00000000)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 0x00000001)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 0x00000002)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_79);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000708);
				unk_0x96167B03C5A77156(0x00000000, vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, 0xFFFFFFFF, 0x00240008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(uLocal_79);
				unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
				unk_0xF82EA857DA10E0CD(&uLocal_79);
				unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
				iLocal_105 = unk_0x1C0640BA9A7327B3() + 2000;
				iLocal_106++;
			}
			break;
		
		case 0x00000004:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				iLocal_106++;
			}
			break;
		
		case 0x00000005:
			func_78(func_22(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
			bLocal_110 = 0x00000001;
			break;
	}
}

void func_124()
{
	int iVar0;
	
	switch (iLocal_106)
	{
		case 0x00000000:
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x8B38C0DAEEDB5F9C(iVar0) && !func_4())
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
						unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
						unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
						unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00002710, 0x0000080C, 0x00000004);
					}
					if (bLocal_88)
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000001:
			iLocal_106++;
			break;
		
		case 0x00000002:
			iLocal_106++;
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_79);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00400000);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000708);
				unk_0x96167B03C5A77156(0x00000000, vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, 0xFFFFFFFF, 0x00240008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(uLocal_79);
				unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
				unk_0xF82EA857DA10E0CD(&uLocal_79);
				unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
			}
			func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			iLocal_105 = unk_0x1C0640BA9A7327B3() + 3000;
			iLocal_106++;
			break;
		
		case 0x00000004:
			iLocal_105 = unk_0x1C0640BA9A7327B3() + 3000;
			if (func_22() == 0x00000000)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 0x00000001)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 0x00000002)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000005:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				iLocal_106++;
			}
			break;
		
		case 0x00000006:
			func_78(func_22(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
			bLocal_110 = 0x00000001;
			break;
	}
}

void func_125()
{
	switch (iLocal_106)
	{
		case 0x00000000:
			if (unk_0xDF1306B443CD3D15(iLocal_74, 0x00000000))
			{
				if (unk_0x8B38C0DAEEDB5F9C(iLocal_74) && !func_4())
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
						unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
						unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0x00002710, 0x0000080C, 0x00000004);
						unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 0x00002710, 0x0000080C, 0x00000004);
					}
					if (bLocal_88)
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_67(&uLocal_140, "REDR1AU", "REDR1_TK1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000001:
			iLocal_106++;
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_79);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00400000);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000708);
				unk_0x96167B03C5A77156(0x00000000, vLocal_70, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, 0xFFFFFFFF, 0x00240008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(uLocal_79);
				unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
				unk_0xF82EA857DA10E0CD(&uLocal_79);
				unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
				func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				iLocal_105 = unk_0x1C0640BA9A7327B3() + 3000;
				iLocal_106++;
			}
			break;
		
		case 0x00000003:
			iLocal_105 = unk_0x1C0640BA9A7327B3() + 3000;
			if (func_22() == 0x00000000)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 0x00000001)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			else if (func_22() == 0x00000002)
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_GBT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 0x00000004:
			if (iLocal_105 < unk_0x1C0640BA9A7327B3())
			{
				iLocal_106++;
			}
			break;
		
		case 0x00000005:
			iLocal_106++;
			break;
		
		case 0x00000006:
			iLocal_106++;
			break;
		
		case 0x00000007:
			func_78(func_22(), 0x00000001, 0x00000050, 0x00000000, 0x00000001);
			bLocal_110 = 0x00000001;
			break;
	}
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
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

void func_127()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_enter_m", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_idle_m", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_exit_m", 0x00000003))
	{
		iVar0 = 0x00000000;
		iVar1 = unk_0x5A0033B025D45F1B();
		if (iVar1 != 0x00000000)
		{
			iVar2 = unk_0xA4FD7964FEE91ED8(iVar1);
			if (iVar2 == 0x00000004)
			{
				iVar0 = 0x00000001;
			}
		}
		if ((((((((func_132(0x00000040) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000056)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000047)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000048)) || unk_0x06F8112AA79C53D9(0x00000000, 0x0000004C)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000049)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000044)) || unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B)) || iVar0)
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			if (func_131())
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], iLocal_73[0x00000001], 0xFFFFFFFF, 0x0000080C, 0x00000004);
				unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], iLocal_73[0x00000000], 0xFFFFFFFF, 0x0000080C, 0x00000004);
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_HC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_79);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(uLocal_79);
					unk_0x78ADC381772E3D54(iLocal_73[0x00000000], uLocal_79);
					unk_0xF82EA857DA10E0CD(&uLocal_79);
					unk_0xDD353D0E9C789D0E(&uLocal_79);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(uLocal_79);
					unk_0x78ADC381772E3D54(iLocal_73[0x00000001], uLocal_79);
					unk_0xF82EA857DA10E0CD(&uLocal_79);
					iLocal_310 = unk_0x1C0640BA9A7327B3();
					iLocal_309++;
				}
			}
			break;
		
		case 0x00000001:
			if (!func_4())
			{
				iLocal_310 = unk_0x1C0640BA9A7327B3();
				iLocal_309++;
			}
			break;
		
		case 0x00000002:
			if (func_131())
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_310) > 0x00001388)
				{
					if (func_67(&uLocal_140, "REDR2AU", "REDR2_CH", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_310 = unk_0x1C0640BA9A7327B3();
						iLocal_309++;
					}
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_310) > 0x00003A98)
			{
				if (func_131())
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_309++;
				}
			}
			break;
		
		case 0x00000004:
			if (func_131())
			{
				func_129();
				if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_intro_m", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_310 = unk_0x1C0640BA9A7327B3();
						iLocal_309++;
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
			{
				unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
				unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
				iLocal_309 = 0x00000003;
			}
			break;
		
		case 0x00000005:
			if (func_131())
			{
				func_129();
				func_128();
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iLocal_73[0x00000001], 0x00000000), 0x00000000))
				{
					if ((unk_0x1C0640BA9A7327B3() - iLocal_310) > 0x00003A98)
					{
						bVar3 = 0x00000000;
						iVar4 = unk_0x5A0033B025D45F1B();
						if (iVar4 != 0x00000000)
						{
							iVar5 = unk_0xA4FD7964FEE91ED8(iVar4);
							if (iVar5 == 0x00000004)
							{
								bVar3 = 0x00000001;
							}
						}
						if (!bVar3)
						{
							unk_0xDD353D0E9C789D0E(&uLocal_79);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(uLocal_79);
							unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uLocal_79);
							unk_0xF82EA857DA10E0CD(&uLocal_79);
						}
						if (func_22() == 0x00000000)
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_PSM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_310 = unk_0x1C0640BA9A7327B3();
								iLocal_309++;
							}
						}
						else if (func_22() == 0x00000001)
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_PSF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_310 = unk_0x1C0640BA9A7327B3();
								iLocal_309++;
							}
						}
						else if (func_22() == 0x00000002)
						{
							if (func_67(&uLocal_140, "REDR2AU", "REDR2_PST", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_310 = unk_0x1C0640BA9A7327B3() + 14000;
								iLocal_309++;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			func_129();
			func_128();
			if ((unk_0x1C0640BA9A7327B3() - iLocal_310) > 0x00001388 && func_131())
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iLocal_73[0x00000001], 0x00000000), 0x00000000))
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_loop_m", 0x00000003))
					{
						if (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_idle_m", 0x00000003))
							{
								unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_309++;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			func_129();
			if (func_131())
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_outro_m", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						unk_0xDFC6BA855748EB10(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000), 0x00000000, 0f, 0f, 20f, -0.4f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
						iLocal_310 = unk_0x1C0640BA9A7327B3();
						iLocal_309++;
					}
				}
			}
			break;
		
		case 0x00000008:
			func_129();
			if (func_131())
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iLocal_73[0x00000001], 0x00000000), 0x00000000))
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_outro_m", 0x00000003))
					{
						if (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_309 = 0x00000006;
						}
					}
				}
			}
			if ((unk_0x1C0640BA9A7327B3() - iLocal_310) > 0x00002710)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
					unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
					iLocal_310 = unk_0x1C0640BA9A7327B3();
					iLocal_309++;
				}
			}
			break;
	}
}

void func_128()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000), 0x00000000))
		{
			if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f", 0x00000003))
			{
				if ((((unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && unk_0x8CA9406E01C7EE58(iLocal_73[0x00000001], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					unk_0xDFC6BA855748EB10(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000), 0x00000000, 0f, 0f, 15f, -0.4f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "SUSPENSION_SCRIPT_FORCE", unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000), 0x00000000, 0x00000000, 0x00000000);
				}
			}
		}
	}
}

void func_129()
{
	unk_0xC2127C0F64D6A3B9();
	func_130();
}

void func_130()
{
	Global_56C3.f_86 = 0x00000001;
}

int func_131()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
	{
		if (unk_0x405E212DDE472467(iLocal_73[0x00000001], 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(iLocal_73[0x00000001], 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], iVar0, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, 0x00000002, 0x00000000) == iLocal_73[0x00000000] && unk_0xA30B8362589C124A(iVar0, 0x00000001, 0x00000000) == iLocal_73[0x00000001])
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C3) - 0x00000080);
	iVar1 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C4) - 0x00000080);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_133()
{
	if (func_22() == 0x00000002)
	{
		if (func_65())
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

int func_134(vector3 vParam0)
{
	if (func_22() == 0x00000002)
	{
		if (func_65() && !Global_7920)
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

void func_135()
{
	if (!bLocal_88)
	{
		if ((((((((!func_33("REDR1_SWV") && !func_33("REDR1_COM")) && !func_33("REDR1_BANT1")) && !func_33("REDR1_SIK")) && !func_33("REDR2_DC")) && !func_33("REDR1_OFFR")) && !func_33("REDR2_OFFR")) && !func_33("REDR1_CULT")) && !func_33("REDR2_CULT"))
		{
			func_5(0x00000001);
		}
		if ((iLocal_90 && !iLocal_114) && (unk_0x1C0640BA9A7327B3() - iLocal_138) > 0x00002328)
		{
			if (!func_4())
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_BANT1", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_114 = 0x00000001;
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_115)
	{
		if (!func_4())
		{
			if (func_22() == 0x00000000)
			{
				func_67(&uLocal_140, "REDR1AU", "REDR1_RESPM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (func_22() == 0x00000001)
			{
				func_67(&uLocal_140, "REDR1AU", "REDR1_RESPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (func_22() == 0x00000002)
			{
				func_67(&uLocal_140, "REDR1AU", "REDR1_RESPT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_122 = unk_0x1C0640BA9A7327B3() + 6000;
			iLocal_115 = 0x00000001;
		}
	}
	if (!bLocal_88)
	{
		if ((iLocal_114 && !iLocal_113) && iLocal_122 < unk_0x1C0640BA9A7327B3())
		{
			if (!func_4())
			{
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_COM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_115 = 0x00000000;
					iLocal_113 = 0x00000001;
				}
			}
		}
	}
	else if ((bLocal_88 && !iLocal_112) && iLocal_122 < unk_0x1C0640BA9A7327B3())
	{
		if (!func_4())
		{
			if (func_67(&uLocal_140, "REDR1AU", "REDR1_BANT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_115 = 0x00000000;
				iLocal_112 = 0x00000001;
			}
		}
	}
}

void func_136()
{
	if (func_2() && iLocal_91 < 0x00000002)
	{
		if ((unk_0xE0A10C635E6C44CF(unk_0xD803B885F5E47A62()) > 0x00000000 && unk_0xE0A10C635E6C44CF(unk_0xD803B885F5E47A62()) < 0x00000064) || unk_0xE608C809F9416F00(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
		{
			if (!func_33("REDR1_SWV"))
			{
				func_5(0x00000000);
				func_68();
				SYSTEM::WAIT(0x00000000);
				func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_130 += 6;
			}
		}
		func_137(vLocal_129, (unk_0x1C0640BA9A7327B3() - iLocal_128));
	}
	if (iLocal_130 > 0x00000011)
	{
		iLocal_89 = 0x00000001;
	}
}

void func_137(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (func_2())
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			vVar0 = { unk_0x698705F356FA8F72(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) };
		}
	}
	vVar1 = { vVar0 - vParam0 };
	vVar1 = { func_138(vVar1, iParam1) };
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (!unk_0xF79A7BCA9E38BBBC(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && !func_33("REDR1_SWV"))
			{
				if (iLocal_132 == 0xFFFFFFFF)
				{
					iLocal_132 = unk_0x1C0640BA9A7327B3() + 400;
				}
				else if (iLocal_132 < unk_0x1C0640BA9A7327B3())
				{
					iLocal_130 += 3;
					func_5(0x00000000);
					func_68();
					SYSTEM::WAIT(0x00000000);
					func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				iLocal_132 = 0xFFFFFFFF;
			}
		}
	}
	if (vVar1.y > 0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 0x00000004)
		{
			func_5(0x00000000);
			func_68();
			SYSTEM::WAIT(0x00000000);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (vVar1.y < -0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 0x00000004)
		{
			func_5(0x00000000);
			func_68();
			SYSTEM::WAIT(0x00000000);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (vVar1.x > 0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 0x00000004)
		{
			func_5(0x00000000);
			func_68();
			SYSTEM::WAIT(0x00000000);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (vVar1.x < -0.025f)
	{
		iLocal_130++;
		if (!func_33("REDR1_SWV") && iLocal_91 < 0x00000004)
		{
			func_5(0x00000000);
			func_68();
			SYSTEM::WAIT(0x00000000);
			func_67(&uLocal_140, "REDR1AU", "REDR1_SWV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

Vector3 func_138(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = (vParam0.x / IntToFloat(iParam1));
	vVar0.y = (vParam0.y / IntToFloat(iParam1));
	vVar0.z = (vParam0.z / IntToFloat(iParam1));
	return vVar0;
}

void func_139()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
	{
		switch (iLocal_91)
		{
			case 0x00000000:
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_SIK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
					{
						unk_0x920D29D81E211607(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
					}
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_91++;
				}
				break;
			
			case 0x00000001:
				if (SYSTEM::TIMERB() > 0x00000BB8 || !func_4())
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
						unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_94, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_91++;
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_94, 0x00000003))
				{
					fVar0 = unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_94);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_85)
						{
							unk_0x97A0DB46CA749F31("scr_puke_in_car", iLocal_73[0x00000000], 0f, 0f, 0f, 0f, 0f, 0f, 0x0000796E, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_85 = 0x00000001;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_86)
						{
							unk_0x97A0DB46CA749F31("scr_puke_in_car", iLocal_73[0x00000000], 0f, 0f, 0f, 0f, 0f, 0f, 0x0000796E, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_86 = 0x00000001;
							if (func_22() == 0x00000000)
							{
								func_67(&uLocal_140, "REDR1AU", "REDR1_SIKM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (func_22() == 0x00000001)
							{
								func_67(&uLocal_140, "REDR1AU", "REDR1_SIKF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (func_22() == 0x00000002)
							{
								func_67(&uLocal_140, "REDR1AU", "REDR1_SIKT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_87)
						{
							unk_0x97A0DB46CA749F31("scr_puke_in_car", iLocal_73[0x00000000], 0f, 0f, 0f, 0f, 0f, 0f, 0x0000796E, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_87 = 0x00000001;
						}
					}
					if (unk_0x8CA9406E01C7EE58(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_94) > 0.8f)
					{
						iLocal_91++;
					}
				}
				break;
			
			case 0x00000003:
				if (!unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_94, 0x00000003))
				{
				}
				if (func_67(&uLocal_140, "REDR1AU", "REDR1_APO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_93, 2f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_85 = 0x00000000;
					iLocal_91++;
				}
				break;
			
			case 0x00000004:
				unk_0x55D0A2DB35045A35(iLocal_92);
				bLocal_88 = 0x00000001;
				break;
			}
	}
}

void func_140()
{
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		if (!iLocal_135)
		{
			iLocal_133 = unk_0x1C0640BA9A7327B3();
			iLocal_135 = 0x00000001;
		}
		else
		{
			iLocal_134 = unk_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_134 = 0x00000000;
		iLocal_135 = 0x00000000;
		iLocal_136 = 0x00000000;
	}
	if ((iLocal_134 - iLocal_133) > 0x0000C350 && !iLocal_136)
	{
		if (iLocal_52 == 0x00000001)
		{
			func_68();
			SYSTEM::WAIT(0x00000000);
			func_67(&uLocal_140, "REDR1AU", "REDR1_WLK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		iLocal_136 = 0x00000001;
	}
	if ((iLocal_134 - iLocal_133) > 0x0000EA60 && iLocal_136)
	{
		if (iLocal_52 == 0x00000002)
		{
			func_68();
			SYSTEM::WAIT(0x00000000);
			func_67(&uLocal_140, "REDR2AU", "REDR2_FU", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
		{
			unk_0x01E4BB5190DF7317(iLocal_73[0x00000000], 0x471C4000, 0x00000000);
			func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
			if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
			{
				unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
			}
			unk_0xA8CC11FF8D2962D4(iLocal_73[0x00000001], iLocal_73[0x00000000], 0f, 1f, 0f, 1f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
			func_70(iLocal_73[0x00000001], 0x0001D4C0, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_73[0x00000001], 0x00000001);
			if (unk_0x16102BEDC7435774(iLocal_73[0x00000001]))
			{
				unk_0x0A94A109271BE75A(iLocal_73[0x00000001]);
			}
		}
		func_66();
	}
}

void func_141()
{
	if (iLocal_52 == 0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
		{
			if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 150f, 150f, 150f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_66();
			}
			if (func_151() || unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
				{
					unk_0xE25C96A9C36BE5D2(iLocal_73[0x00000000], func_63());
					unk_0x7BECA8F360B1686D(iLocal_73[0x00000000], 0x00000001);
					unk_0xBF541ED34EA81209(iLocal_73[0x00000000], 0x00000000);
				}
			}
			else if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
			{
				unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
				{
					if ((!unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_93, 0x00000003) && !unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_94, 0x00000003)) && !unk_0x81A5359F25512A04(iLocal_73[0x00000000]))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_93, 2f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_154())
					{
						func_62(0x00000000);
						iLocal_100 = 0x00000000;
					}
				}
				else if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_93, 0x00000003))
				{
					unk_0x5B8BE59CB25E8968(iLocal_73[0x00000000], 0x00000000, 0x00000000);
				}
			}
			else
			{
				if (unk_0x405E212DDE472467(iLocal_73[0x00000000], 0x00000000))
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_73[0x00000000], "random@drunk_driver_1", sLocal_93, 0x00000003))
					{
						unk_0x5B8BE59CB25E8968(iLocal_73[0x00000000], 0x00000000, 0x00000000);
					}
				}
				if (func_4() && !iLocal_100)
				{
					func_62(0x00000001);
					iLocal_100 = 0x00000001;
				}
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000) || unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
			{
				if (unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_126[0x00000000]));
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_82))
				{
					iLocal_82 = func_144(vLocal_69, 0x00000001);
				}
			}
			else
			{
				if (!unk_0xE4EDC4B0E92C078B(uLocal_126[0x00000000]))
				{
					uLocal_126[0x00000000] = func_169(iLocal_73[0x00000000], 0x00000000, 0x00000091);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_82))
				{
					unk_0x142CC44DB769B57E(&iLocal_82);
				}
			}
		}
	}
	if (iLocal_52 == 0x00000002)
	{
		if ((!unk_0x437347B10A200C4B(iLocal_74, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
		{
			if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 150f, 150f, 150f, 0x00000000, 0x00000001, 0x00000000) || !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000001], 150f, 150f, 150f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
					{
						if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
						{
							unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
						}
						unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
						unk_0xF3268524E9BE6D6E(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						func_70(iLocal_73[0x00000000], 0x0001D4C0, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_73[0x00000000], 0x00000001);
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_73[0x00000001]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000001]))
					{
						if (unk_0x16102BEDC7435774(iLocal_73[0x00000001]))
						{
							unk_0x0A94A109271BE75A(iLocal_73[0x00000001]);
						}
						unk_0xA3BF0AA5A2608191(iLocal_73[0x00000001]);
						unk_0xF3268524E9BE6D6E(iLocal_73[0x00000001], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						func_70(iLocal_73[0x00000001], 0x0001D4C0, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_73[0x00000001], 0x00000001);
					}
				}
				func_66();
			}
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_74, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_73[0x00000000], iLocal_74, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_73[0x00000001], iLocal_74, 0x00000000))
				{
					if (func_154())
					{
						func_62(0x00000000);
						iLocal_100 = 0x00000000;
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_82))
					{
						iLocal_82 = func_144(vLocal_69, 0x00000001);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_127))
				{
					unk_0x142CC44DB769B57E(&iLocal_127);
				}
			}
			else
			{
				if ((func_4() && !iLocal_100) && iLocal_60 > 0x00000003)
				{
					func_62(0x00000001);
					iLocal_100 = 0x00000001;
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_127))
				{
					iLocal_127 = func_152(iLocal_74, 0x00000000, 0x00000000);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_82))
				{
					unk_0x142CC44DB769B57E(&iLocal_82);
				}
			}
		}
	}
}

void func_142()
{
	if (func_22() == 0x00000002)
	{
		if (!Global_791F)
		{
			func_143("CULT_BLIP_HELP", 0xFFFFFFFF);
			Global_791F = 0x00000001;
		}
	}
}

void func_143(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_144(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_145(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (!func_151())
			{
				if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
				{
					unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
				}
				if (unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x4924437D) != 0x00000001 && unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x4924437D) != 0x00000000)
				{
					unk_0xE185F110925D87DB(iLocal_73[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 6f, 0x40000000, 0x40000000, 0x00000000);
				}
				if (unk_0x405E212DDE472467(iLocal_73[0x00000000], 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_73[0x00000000], 0x00000000, 0x00000000);
				}
				if (!iLocal_102)
				{
					if (!func_4())
					{
						func_67(&uLocal_140, "REHH1AU", "REDR1_NO", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_102 = 0x00000001;
					}
				}
			}
			else
			{
				iLocal_102 = 0x00000000;
				if (unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x4924437D) == 0x00000001 && unk_0xD1960163A3042274(iLocal_73[0x00000000], 0x4924437D) == 0x00000000)
				{
					unk_0xA3BF0AA5A2608191(iLocal_73[0x00000000]);
				}
			}
		}
		else if (!unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
		{
			unk_0xE25C96A9C36BE5D2(iLocal_73[0x00000000], func_63());
			unk_0x7BECA8F360B1686D(iLocal_73[0x00000000], 0x00000001);
			unk_0xBF541ED34EA81209(iLocal_73[0x00000000], 0x00000000);
		}
	}
}

float func_147(int iParam0, int iParam1, bool bParam2)
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

void func_148()
{
	if (!func_64())
	{
		if (func_22() == 0x00000002)
		{
			Global_791D = 0x00000001;
		}
	}
}

void func_149(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_79);
				unk_0xBC43ED9FE28DB191(0x00000000);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x0000080C, 0x00000004);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
				unk_0x75ABDC5F81978924(uLocal_79);
				unk_0x78ADC381772E3D54(iParam0, uLocal_79);
				unk_0xF82EA857DA10E0CD(&uLocal_79);
				*uParam1++;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
				{
					*uParam1 = 0x00000000;
				}
			}
			break;
	}
}

void func_150()
{
	if (func_22() == 0x00000000)
	{
		if (func_67(&uLocal_140, "REDR1AU", "REDR1_OFFA", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_137++;
		}
	}
	else if (func_22() == 0x00000001)
	{
		if (func_67(&uLocal_140, "REDR1AU", "REDR1_OFFB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_137++;
		}
	}
	else if (func_22() == 0x00000002)
	{
		if (func_67(&uLocal_140, "REDR1AU", "REDR1_OFFC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_137++;
		}
	}
}

int func_151()
{
	int iVar0;
	
	if (iLocal_52 == 0x00000001)
	{
		iVar0 = 0x00000001;
	}
	if (iLocal_52 == 0x00000002)
	{
		iVar0 = 0x00000002;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if ((((((!unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()) && !unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && !unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) && !unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) && !unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")))
			{
				if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) >= iVar0)
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
			if (((((!unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) != joaat("rhino"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_152(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_145(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_145(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_145(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_154()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_155()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_73[0x00000000], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!iLocal_95)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_DCB", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_95 = 0x00000001;
				}
			}
			if (!iLocal_96)
			{
				if (func_67(&uLocal_140, "REDR2AU", "REDR2_DCC", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_96 = 0x00000001;
				}
			}
		}
	}
}

void func_156()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_124))
	{
		unk_0x142CC44DB769B57E(&iLocal_124);
	}
	iLocal_59 = 0x00000000;
	while (iLocal_59 <= (iLocal_72 - 0x00000001))
	{
		if (!unk_0xE4EDC4B0E92C078B(uLocal_126[iLocal_59]))
		{
			uLocal_126[iLocal_59] = func_169(iLocal_73[iLocal_59], 0x00000000, 0x00000091);
			unk_0xF2D30B8ACAF12A39(uLocal_126[iLocal_59], 0x00000000);
		}
		iLocal_59++;
	}
}

void func_157()
{
	unk_0x871665896C890C7F();
	Global_5525 = 0x00000000;
}

void func_158(bool bParam0)
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

int func_159(int iParam0)
{
	if (func_162())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_49(Global_1B40B))
		{
			func_160(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_49(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_143(func_161(iParam0), 0xFFFFFFFF);
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
					func_143(func_161(iParam0), 0xFFFFFFFF);
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
					func_143(func_161(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_161(int iParam0)
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

int func_162()
{
	switch (func_163(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_163(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_167(0x00000000))
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
		if (!func_165(iParam2))
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
			func_164(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_164(var uParam0, int iParam1)
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

bool func_165(int iParam0)
{
	return func_166(iParam0, Global_A1D7);
}

int func_166(int iParam0, int iParam1)
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

int func_167(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_165(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_168(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	Global_5526 = 0x00000001;
	Global_552A = 0x00000000;
	Global_5528 = iParam7;
	Global_280001 = 0x00000000;
	return func_11(sParam2, iParam3, 0x00000000);
}

int func_169(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_153(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_170()
{
	if (func_172())
	{
		sLocal_93 = "drunk_idle_van";
		sLocal_94 = "vomit_van";
	}
	else if (func_171())
	{
		sLocal_93 = "drunk_idle_low";
		sLocal_94 = "vomit_low";
	}
	else
	{
		sLocal_93 = "drunk_idle";
		sLocal_94 = "vomit_outside";
	}
}

int func_171()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iLocal_73[0x00000000], 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000), 0x00000000))
		{
			iVar0 = unk_0x1F099C9E2AE4874D(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000));
			if ((((((((((iVar0 == 0x84D77E93 || iVar0 == 0x37254CF9) || iVar0 == 0xD158A20D) || iVar0 == 0x41E72EC9) || iVar0 == 0x205A6F50) || iVar0 == 0x04163EC9) || iVar0 == 0x8F7B4F4E) || iVar0 == 0xBB736A9B) || iVar0 == 0x613655C1) || iVar0 == 0xE461FA3B) || iVar0 == 0x793A200A)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_172()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iLocal_73[0x00000000], 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000), 0x00000000))
		{
			iVar0 = unk_0x1F099C9E2AE4874D(unk_0x6937EA2286828455(iLocal_73[0x00000000], 0x00000000));
			if (((((((((((iVar0 == 0x8ADF98D5 || iVar0 == 0x36CE3DC4) || iVar0 == 0x9269BEA0) || iVar0 == 0x6967F0BC) || iVar0 == 0x5DF7414D) || iVar0 == 0x375F8F8C) || iVar0 == 0xE25535CF) || iVar0 == 0x9D0E8E8E) || iVar0 == 0x19E59D55) || iVar0 == 0x6C40A6DC) || iVar0 == 0x65FA4F90) || iVar0 == 0x632CFD0D)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_173()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 0x000007D0, 0x00000800, 0x00000002);
						}
					}
				}
			}
		}
	}
}

void func_174()
{
	if (!iLocal_57)
	{
		func_176(0x00000027, 0x00000001);
		func_176(0x00000028, 0x00000001);
		func_176(0x00000029, 0x00000001);
		func_176(0x0000002A, 0x00000001);
		func_176(0x0000002B, 0x00000001);
		func_176(0x0000002C, 0x00000001);
		unk_0x536F1BE96C726C4B(vLocal_62, 8f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x7D6CA5F52B3748BF(vLocal_62 - Vector(8f, 8f, 8f), vLocal_62 + Vector(8f, 8f, 8f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		unk_0xE342F209E49C5314(vLocal_66 - Vector(10f, 15f, 15f), vLocal_66 + Vector(10f, 15f, 15f), 0x00000000, 0x00000001);
		unk_0xE342F209E49C5314(vLocal_69 - Vector(10f, 15f, 15f), vLocal_69 + Vector(10f, 15f, 15f), 0x00000000, 0x00000001);
		unk_0x5D96D8530B3D0904(&uLocal_123, 0x00000005);
		if (func_22() == 0x00000000)
		{
			func_175(&uLocal_140, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		}
		else if (func_22() == 0x00000001)
		{
			func_175(&uLocal_140, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
		}
		else if (func_22() == 0x00000002)
		{
			func_175(&uLocal_140, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
		}
		unk_0xF63400DBE3303D26("rghDrunkPeds", &iLocal_80);
		iLocal_74 = unk_0x122AAB0B1D6F55AD(iLocal_78, vLocal_66, fLocal_67, 0x00000001, 0x00000001, 0x00000000);
		unk_0x2F625BED8BF7F26A(iLocal_74);
		unk_0xB9FD7450C0DAB575(iLocal_74, 0x40A00000);
		unk_0xAB8E2DDC7AF955E0(iLocal_78, 0x00000001);
		unk_0x71EDC33E5A423750(iLocal_74, 0x00000003);
		unk_0xF3F7BF451A720FDF(iLocal_74, 0x00000001);
		iLocal_68 = unk_0x7F6DC62EA9922664(iLocal_74);
		iLocal_73[0x00000000] = unk_0x36F2404464202779(0x0000001A, iLocal_76, vLocal_62, fLocal_63, 0x00000001, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_73[0x00000000], 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_73[0x00000000], iLocal_80);
		unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x000000B9, 0x00000001);
		unk_0xBAFED2F6486F771A(iLocal_73[0x00000000], 0x00010000, 0x00000001);
		unk_0x71199B01895C6202(iLocal_76);
		unk_0x33CE5A9E32EA10B2(iLocal_73[0x00000000], 0x00000001);
		iLocal_73[0x00000001] = unk_0x36F2404464202779(0x0000001A, iLocal_77, vLocal_64, fLocal_65, 0x00000001, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_73[0x00000001], 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_73[0x00000001], iLocal_80);
		unk_0x4E885A246A9D983A(iLocal_73[0x00000001], 0x000000B9, 0x00000001);
		unk_0xBAFED2F6486F771A(iLocal_73[0x00000001], 0x00010000, 0x00000001);
		unk_0x33CE5A9E32EA10B2(iLocal_73[0x00000001], 0x00000001);
		unk_0x0E2400AB9174FA81(0x00000005, iLocal_80, 0x6F0783F5);
		unk_0x71199B01895C6202(iLocal_77);
		if (iLocal_52 == 0x00000001)
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000000], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(iLocal_73[0x00000001], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x79C43E2BAC7C696F(iLocal_73[0x00000000], "MOVE_M@DRUNK@VERYDRUNK", 0x3E800000);
			unk_0x79C43E2BAC7C696F(iLocal_73[0x00000001], "MOVE_M@DRUNK@MODERATEDRUNK", 0x3E800000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000000], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000000], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000000], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			unk_0x920D29D81E211607(iLocal_74, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x000000CE, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x0000012B, 0x00000001);
			unk_0x25C5402CC10F76CD(iLocal_73[0x00000000], 0x00000000);
			unk_0x4F39CC3882DD074E(iLocal_73[0x00000000], "REDR1Drunk1_AI_Drunk");
			unk_0x4F39CC3882DD074E(iLocal_73[0x00000001], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_175(&uLocal_140, 0x00000003, iLocal_73[0x00000000], "REDR1Drunk1", 0x00000000, 0x00000001);
			func_175(&uLocal_140, 0x00000004, iLocal_73[0x00000001], "REDR1Drunk2", 0x00000000, 0x00000001);
		}
		if (iLocal_52 == 0x00000002)
		{
			unk_0x7D6CA5F52B3748BF(vLocal_69 - Vector(10f, 50f, 30f), vLocal_69 + Vector(10f, 50f, 30f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			unk_0x44A200C9B6E1CEA6(iLocal_74, 0x00000001);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000002, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000003, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000004, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iLocal_73[0x00000001], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x00000086, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000001], 0x00000086, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x0000001A, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000001], 0x0000001A, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x000000CE, 0x00000001);
			unk_0x4E885A246A9D983A(iLocal_73[0x00000001], 0x000000CE, 0x00000001);
			unk_0x25C5402CC10F76CD(iLocal_73[0x00000000], 0x00000000);
			unk_0x25C5402CC10F76CD(iLocal_73[0x00000001], 0x00000000);
			unk_0x509B8296EBA9B408(iLocal_73[0x00000000], "WORLD_HUMAN_BUM_STANDING", 0x00000000, 0x00000000);
			unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000000], iLocal_73[0x00000001], 0xFFFFFFFF, 0x0000080C, 0x00000004);
			unk_0x509B8296EBA9B408(iLocal_73[0x00000001], "WORLD_HUMAN_BUM_STANDING", 0x00000000, 0x00000000);
			unk_0xA245D14CC59CDD36(iLocal_73[0x00000001], 0x00000000);
			unk_0x0C8C0C840C2D1AD2(iLocal_73[0x00000001], iLocal_73[0x00000000], 0xFFFFFFFF, 0x0000080C, 0x00000004);
			unk_0x79C43E2BAC7C696F(iLocal_73[0x00000000], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 0x3E800000);
			unk_0x79C43E2BAC7C696F(iLocal_73[0x00000001], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 0x3E800000);
			unk_0x4F39CC3882DD074E(iLocal_73[0x00000000], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0x4F39CC3882DD074E(iLocal_73[0x00000001], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_175(&uLocal_140, 0x00000003, iLocal_73[0x00000000], "REDR2DrunkM", 0x00000000, 0x00000001);
			func_175(&uLocal_140, 0x00000004, iLocal_73[0x00000001], "REDR2DrunkF", 0x00000000, 0x00000001);
		}
		iLocal_57 = 0x00000001;
	}
}

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_180(iParam0, 0x00000002, 0x00000001))
		{
			func_179(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_180(iParam0, 0x00000002, 0x00000001))
	{
		func_177(iParam0, 0x00000002, 0x00000001);
	}
}

void func_177(int iParam0, int iParam1, bool bParam2)
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
		if (func_44() == 0x00000000)
		{
			iVar0 = func_89(func_178(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_85(func_178(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_178(int iParam0)
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

void func_179(int iParam0, int iParam1, bool bParam2)
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
		if (func_44() == 0x00000000)
		{
			iVar0 = func_89(func_178(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_85(func_178(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_180(int iParam0, int iParam1, bool bParam2)
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
		if (func_44() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_89(func_178(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_181()
{
	unk_0x523BCC9DC80CD82F(iLocal_76);
	unk_0x523BCC9DC80CD82F(iLocal_78);
	unk_0x523BCC9DC80CD82F(iLocal_77);
	if (iLocal_52 == 0x00000001)
	{
		unk_0x9E5E60D8C63FD9D1();
		unk_0x3F423BF5B8125A50("random@drunk_driver_1");
		unk_0x4942FBD1EF896E39("MOVE_M@DRUNK@VERYDRUNK");
		unk_0xAE317D00A5A55DF6("Taxi_Vomit", 0x00000000, 0xFFFFFFFF);
	}
	else if (iLocal_52 == 0x00000002)
	{
		unk_0x3F423BF5B8125A50("random@drunk_driver_2");
		unk_0x3F423BF5B8125A50("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0x3F423BF5B8125A50("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0x4942FBD1EF896E39("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0xB87F6CF6E5628C67(iLocal_76) && unk_0xB87F6CF6E5628C67(iLocal_78)) && unk_0xDF3FDDA1EADEDD07("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0xB87F6CF6E5628C67(iLocal_77))
	{
		if (iLocal_52 == 0x00000001)
		{
			if (((unk_0x25F7A4D42AF2AB93() && unk_0xB4AE0788C1587752("random@drunk_driver_1")) && unk_0xDF3FDDA1EADEDD07("MOVE_M@DRUNK@VERYDRUNK")) && unk_0xAE317D00A5A55DF6("CONSTRUCTION_ACCIDENT_1", 0x00000000, 0xFFFFFFFF))
			{
				iLocal_54 = 0x00000001;
			}
		}
		else if (iLocal_52 == 0x00000002)
		{
			if ((unk_0xB4AE0788C1587752("random@drunk_driver_2") && unk_0xB4AE0788C1587752("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0xB4AE0788C1587752("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_54 = 0x00000001;
			}
		}
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_76);
		unk_0x523BCC9DC80CD82F(iLocal_78);
		unk_0x523BCC9DC80CD82F(iLocal_77);
		if (iLocal_52 == 0x00000001)
		{
			unk_0x9E5E60D8C63FD9D1();
			unk_0x3F423BF5B8125A50("random@drunk_driver_1");
			unk_0x4942FBD1EF896E39("MOVE_M@DRUNK@VERYDRUNK");
			unk_0xAE317D00A5A55DF6("Taxi_Vomit", 0x00000000, 0xFFFFFFFF);
		}
		else if (iLocal_52 == 0x00000002)
		{
			unk_0x3F423BF5B8125A50("random@drunk_driver_2");
			unk_0x3F423BF5B8125A50("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0x3F423BF5B8125A50("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0x4942FBD1EF896E39("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_182()
{
	if (iLocal_52 == 0x00000001)
	{
		vLocal_125 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_72 = 0x00000002;
		iLocal_76 = joaat("a_m_y_beachvesp_01");
		iLocal_77 = joaat("a_m_y_beachvesp_02");
		vLocal_62 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_63 = 247.8087f;
		vLocal_64 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_65 = 66.3861f;
		vLocal_66 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_67 = 76.9418f;
		iLocal_78 = joaat("baller2");
		vLocal_69 = { 160.8892f, -111.4167f, 61.2999f };
		vLocal_70 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_56 = 0x00000001;
	}
	if (iLocal_52 == 0x00000002)
	{
		vLocal_125 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_72 = 0x00000002;
		iLocal_76 = joaat("a_m_y_genstreet_01");
		iLocal_77 = joaat("a_f_y_hipster_03");
		vLocal_62 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_63 = 252.0142f;
		vLocal_64 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_65 = 86.1102f;
		vLocal_66 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_67 = 299.4672f;
		iLocal_78 = joaat("emperor");
		vLocal_69 = { 1120.551f, 2647.307f, 36.9963f };
		vLocal_70 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_56 = 0x00000001;
	}
}

int func_183()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_44) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_194())
		{
			return 0x00000000;
		}
	}
	if (func_190())
	{
		return 0x00000001;
	}
	if (func_184(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_184(float fParam0, bool bParam1)
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
		if (func_24(func_22()))
		{
			iVar5 = func_54();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_185(iVar1, &Var0);
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

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_186(uParam1, "Barry1", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_186(uParam1, "Barry2", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_186(uParam1, "Barry3", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_186(uParam1, "Barry3A", func_188(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_186(uParam1, "Barry3C", func_188(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_186(uParam1, "Barry4", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_186(uParam1, "Hao1", func_188(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_186(uParam1, "Josh1", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_186(uParam1, "Josh2", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_186(uParam1, "Josh3", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_186(uParam1, "Josh4", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_186(uParam1, "Maude1", func_188(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_186(uParam1, "Minute1", func_188(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_186(uParam1, "Minute2", func_188(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_186(uParam1, "Minute3", func_188(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_186(uParam1, "Omega1", func_188(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_186(uParam1, "Omega2", func_188(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_189(iParam0) };
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

struct<2> func_189(int iParam0)
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

int func_190()
{
	if (func_193() && !func_194())
	{
		return 0x00000001;
	}
	if (func_192() && func_191())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_191()
{
	return Global_1B2FC > 0x00000000;
}

int func_192()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_193()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_194()
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

int func_195()
{
	if (!func_165(0x00000005))
	{
		return 0x00000001;
	}
	if (func_190())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_194())
		{
			return 0x00000000;
		}
	}
	if (func_184(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_196()
{
	if ((Global_1B40B == func_58() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_197(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_58();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_199(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_198();
}

void func_198()
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

void func_199(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_200(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_58();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_241())
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
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_194())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_39(0x00000000))
		{
			return 0x00000000;
		}
		if (func_190())
		{
			return 0x00000000;
		}
		if (func_240())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_24(func_22()))
		{
			if (func_184(100f, 0x00000001) != 0xFFFFFFFF)
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
		if (!func_239(iParam1))
		{
			return 0x00000000;
		}
		if (func_24(func_22()))
		{
			if (func_238(func_22()) == 0x00000004 || func_238(func_22()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_24(func_22()))
		{
			if (!func_237(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_236(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_235())
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
		if (!func_226(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_165(0x00000005))
		{
			return 0x00000000;
		}
		if (func_225(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_225(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_239(0x0000001E) && !func_225(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_24(func_22()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_224(iVar4))
				{
					if (func_202(iVar2))
					{
						if (!func_201(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_22() != iVar2)
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

bool func_201(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_203(iVar0);
}

int func_203(int iParam0)
{
	return func_204(iParam0, 0x00000001);
}

int func_204(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_224(iParam0))
	{
		return 0x00000000;
	}
	func_205(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_206(func_217(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_206(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_216(iParam0, iParam1))
	{
		iVar0 = func_215(iParam1);
		iVar1 = func_213(iParam0);
		iVar2 = (func_213(iParam0) - func_213(iParam1));
		iVar3 = (func_215(iParam0) - func_215(iParam1));
		iVar4 = (func_212(iParam0) - func_212(iParam1));
		iVar5 = (func_211(iParam0) - func_211(iParam1));
		iVar6 = (func_210(iParam0) - func_210(iParam1));
		iVar7 = (func_209(iParam0) - func_209(iParam1));
	}
	else
	{
		iVar0 = func_215(iParam0);
		iVar1 = func_213(iParam1);
		iVar2 = (func_213(iParam1) - func_213(iParam0));
		iVar3 = (func_215(iParam1) - func_215(iParam0));
		iVar4 = (func_212(iParam1) - func_212(iParam0));
		iVar5 = (func_211(iParam1) - func_211(iParam0));
		iVar6 = (func_210(iParam1) - func_210(iParam0));
		iVar7 = (func_209(iParam1) - func_209(iParam0));
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
		iVar4 = (iVar4 + func_208(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_207(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_207(float fParam0, float fParam1, float fParam2)
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

int func_208(int iParam0, int iParam1)
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

int func_209(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_210(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_211(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_212(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_213(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_214(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_214(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_215(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_224(iParam1) || !func_224(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_217()
{
	var uVar0;
	
	func_223(&uVar0, unk_0x4460E481B9E33ADA());
	func_222(&uVar0, unk_0x8D199E381D262EEF());
	func_221(&uVar0, unk_0xD8A54335F18763BA());
	func_220(&uVar0, unk_0x972A296334C9D57B());
	func_219(&uVar0, unk_0x118229AD063C3C1D());
	func_218(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_218(var uParam0, int iParam1)
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

void func_219(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_220(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_215(*uParam0);
	iVar1 = func_213(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_221(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_222(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_223(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_224(int iParam0)
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
	iVar0 = func_209(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_210(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_211(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_213(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_215(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_208(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_225(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_22();
				if (!func_24(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_234()) || Global_1B05D) || Global_7832) || func_233()) || func_30(0x00000008, 0xFFFFFFFF)) || func_232()) || func_231()) || func_230()) || func_229()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_234()) || Global_7832) || func_233()) || func_30(0x00000008, 0xFFFFFFFF)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_234()) || Global_1B05D) || Global_7832) || func_233()) || func_30(0x00000008, 0xFFFFFFFF)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_234()) || Global_1B05D) || Global_7832) || func_233()) || func_30(0x00000008, 0xFFFFFFFF)) || func_232()) || func_231()) || func_229()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_234() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_30(0x00000008, 0xFFFFFFFF)) || func_229()) || func_228()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_30(0x00000008, 0xFFFFFFFF) || func_232()) || func_231()) || func_228()) || func_227())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_234()) || Global_7832) || func_233()) || func_30(0x00000008, 0xFFFFFFFF)) || func_231()) || func_230()) || func_229()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_234()) || func_231()) || Global_1B05D) || Global_7832) || func_233()) || Global_A664) || func_30(0x00000008, 0xFFFFFFFF)) || func_230()) || func_228()) || func_229()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_234()) || Global_1B05D) || Global_7832) || func_233()) || func_30(0x00000008, 0xFFFFFFFF)) || func_230()) || func_228()) || func_232()) || func_231()) || func_229())
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

var func_227()
{
	return Global_181DF.f_1;
}

int func_228()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_229()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_230()
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

bool func_231()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_232()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_233()
{
	return Global_14086D;
}

int func_234()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_235()
{
	func_21();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_236(int iParam0)
{
	return func_216(func_217(), iParam0);
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_22();
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

int func_238(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_239(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_241())
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

int func_240()
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

int func_241()
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

void func_242()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if ((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_enter_m", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_idle_m", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "random@drunk_driver_2", "driver_exit_m", 0x00000003))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
	}
	if (iLocal_139)
	{
		func_279(0x00000000);
		if (Global_7921)
		{
			unk_0xC92DB9682A650680("AC_STOP");
		}
		func_278();
		func_6();
		unk_0x707318B0EDF0FF50(0x00000000);
		unk_0xB547E3FFEB27073E();
		unk_0xE342F209E49C5314(vLocal_66 - Vector(10f, 15f, 15f), vLocal_66 + Vector(10f, 15f, 15f), 0x00000001, 0x00000001);
		unk_0xE342F209E49C5314(vLocal_69 - Vector(10f, 15f, 15f), vLocal_69 + Vector(10f, 15f, 15f), 0x00000001, 0x00000001);
		func_158(0x00000000);
		if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (!unk_0xAF6690C489CC6203(unk_0x728870EB733D12A1()))
			{
				unk_0x73270B3C9CC833FD(unk_0x728870EB733D12A1(), 0x00000001, 0x00000000);
			}
		}
		if (!unk_0x437347B10A200C4B(iLocal_75, 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_75, 0x00000000) && func_147(unk_0x16F2683693E537C9(), iLocal_75, 0x00000001) > 50f)
			{
				func_254(iLocal_75, 0x00000000, 0x00000091);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_73[0x00000000]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_73[0x00000000]))
			{
				unk_0x4E885A246A9D983A(iLocal_73[0x00000000], 0x0000013D, 0x00000001);
				if (!unk_0x405E212DDE472467(iLocal_73[0x00000000], 0x00000000))
				{
					unk_0x61F0DE0226FF7252(iLocal_73[0x00000000]);
				}
				if (unk_0x16102BEDC7435774(iLocal_73[0x00000000]))
				{
					unk_0x0A94A109271BE75A(iLocal_73[0x00000000]);
				}
			}
		}
		iLocal_59 = 0x00000000;
		while (iLocal_59 <= (iLocal_72 - 0x00000001))
		{
			if (unk_0xC844350D5D58C99A(iLocal_73[iLocal_59]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_73[iLocal_59]))
				{
					unk_0x4E885A246A9D983A(iLocal_73[iLocal_59], 0x0000013D, 0x00000001);
					if (!unk_0x405E212DDE472467(iLocal_73[iLocal_59], 0x00000000))
					{
						unk_0x61F0DE0226FF7252(iLocal_73[iLocal_59]);
					}
					unk_0x25C5402CC10F76CD(iLocal_73[iLocal_59], 0x00000001);
					unk_0x0E2400AB9174FA81(0x000000FF, iLocal_80, 0x6F0783F5);
					unk_0x11AD11297DC58CC7(iLocal_73[iLocal_59], 0x00000000);
				}
				unk_0x6DAD7906B73F064D(&(iLocal_73[iLocal_59]));
			}
			iLocal_59++;
		}
		iLocal_59 = 0x00000000;
		while (iLocal_59 <= (iLocal_72 - 0x00000001))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_126[iLocal_59]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_126[iLocal_59]));
			}
			iLocal_59++;
		}
		if (iLocal_52 == 0x00000001)
		{
			unk_0xF5894FEB702E7E76(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 0x00000001);
		}
		if (unk_0x9F4FE516EAACCFC5(iLocal_107))
		{
			if (unk_0xFBB4F23D534EB790(iLocal_107))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_107, 0x00000000);
			}
		}
	}
	func_243(0xFFFFFFFF);
	unk_0x10FAF14A60A0DBE1();
}

void func_243(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_58();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_196())
	{
		func_247(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_246(0x00007530);
		StringCopy(&cVar0, func_245(Global_1B40B, 0x00000001), 64);
		if (func_57(Global_1B40B) > 0x00000000)
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
	func_244(&Global_786B);
	Global_1B40C = 0x00000000;
	func_199(0xFFFFFFFF);
}

void func_244(var uParam0)
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

char* func_245(int iParam0, bool bParam1)
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

void func_246(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_247(int iParam0)
{
	func_248(iParam0, 0x00000000, func_253(iParam0));
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_217();
	func_251(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_250(iParam0, &uVar0);
	Var1 = { func_249(&uVar0) };
}

struct<16> func_249(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_211(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_210(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_209(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_212(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_215(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_213(*uParam0), 64);
	return Var0;
}

void func_250(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_213(*uParam0);
	iVar1 = func_215(*uParam0);
	iVar2 = func_212(*uParam0);
	iVar3 = func_211(*uParam0);
	iVar4 = func_210(*uParam0);
	iVar5 = func_209(*uParam0);
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
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_252(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_223(uParam0, iParam1);
	func_222(uParam0, iParam2);
	func_221(uParam0, iParam3);
	func_219(uParam0, iParam5);
	func_220(uParam0, iParam4);
	func_218(uParam0, iParam6);
}

int func_253(int iParam0)
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

int func_254(int iParam0, int iParam1, int iParam2)
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
	func_255(iParam0, iParam2);
	return 0x00000001;
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_261(iParam0))
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
	func_256(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_256(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_260(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_259(uParam1->f_42))
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
		func_258(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_257(iVar0 + 1));
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

int func_257(int iParam0)
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

int func_258(int iParam0, var uParam1, var uParam2)
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

int func_259(int iParam0)
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

void func_260(var uParam0)
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

int func_261(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_276(iParam0, 0x00000000, 0x00000000)) || func_276(iParam0, 0x00000001, 0x00000000)) || func_276(iParam0, 0x00000002, 0x00000000)) || func_275(iParam0) != 0x00000091) || func_274(iParam0)) || func_273(iParam0)) || func_272(iParam0)) || func_271(iParam0)) || !func_262(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_273(iParam0))
		{
		}
		if (func_273(iParam0))
		{
		}
		if (func_276(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_276(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_276(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_275(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_262(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_263(iParam0, 0x00000000))
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

int func_263(int iParam0, bool bParam1)
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
		if (!func_241())
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
		if ((((!func_270() && !func_269()) && !func_268()) && !func_267()) && !func_241())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_268())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_266(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_264(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_264(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_265())
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

int func_265()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_266(int iParam0)
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

int func_267()
{
	return 0x00000000;
}

int func_268()
{
	return 0x00000001;
}

int func_269()
{
	return 0x00000001;
}

int func_270()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_271(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_263(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_272(int iParam0)
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

int func_273(int iParam0)
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

int func_274(int iParam0)
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

int func_275(int iParam0)
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

int func_276(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_277(iParam1, iVar0, &sVar1, &iVar2))
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

int func_277(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_278()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

void func_279(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_176(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_280()
{
	float fVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_306, 0x00000001);
		iLocal_305 = 0x00000001;
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_307, 0x00000001) < fVar0)
		{
			fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_307, 0x00000001);
			iLocal_305 = 0x00000002;
		}
		if (iLocal_305 == 0x00000001)
		{
			iLocal_308 = 0x00000001;
			iLocal_52 = 0x00000001;
			return vLocal_306;
		}
		if (iLocal_305 == 0x00000002)
		{
			iLocal_308 = 0x00000002;
			iLocal_52 = 0x00000002;
			return vLocal_307;
		}
	}
	return 0f, 0f, 0f;
}

