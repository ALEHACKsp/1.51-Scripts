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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_73[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	float fLocal_78[2] = { 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 16;
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
	int iLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
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
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
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
	iLocal_18 = 0x00000003;
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
	vLocal_85 = { 154.92f, 6841.12f, 19.14f };
	iLocal_99 = 0x000000C8;
	vLocal_113 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_114 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_120, "", 24);
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0x16102BEDC7435774(iLocal_51))
			{
				unk_0x0A94A109271BE75A(iLocal_51);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_304.f_1[0x00000000 /*3*/], 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000))
	{
		func_167(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x338D6FF72D84D90F() || iLocal_105)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_BU", 0x00000000);
			switch (iLocal_46)
			{
				case 0x00000000:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_60)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_50)
					{
						iLocal_122 = 0x00000001;
						iLocal_46 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						func_150();
						switch (iLocal_47)
						{
							case 0x00000000:
								func_140();
								iLocal_47 = 0x00000001;
								break;
							
							case 0x00000001:
								if ((!func_133(iLocal_52[0x00000000], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0x00000000) && !func_133(iLocal_52[0x00000001], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0x00000000)) && !func_132())
								{
									switch (iLocal_48)
									{
										case 0x00000000:
											func_131();
											if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_72, 50f, 35f, 50f, 0x00000000, 0x00000001, 0x00000000))
											{
												func_130();
											}
											if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_72, 80f, 65f, 50f, 0x00000000, 0x00000001, 0x00000000))
											{
												func_129();
											}
											if (!unk_0x437347B10A200C4B(iLocal_54, 0x00000000))
											{
												if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0x00000000, 0x00000001, 0x00000000))
												{
													func_128();
													if (unk_0xE4EDC4B0E92C078B(iLocal_88))
													{
														unk_0xF2D30B8ACAF12A39(iLocal_88, 0x00000000);
													}
													iLocal_58 = 0x00000000;
													while (iLocal_58 <= 0x00000001)
													{
														if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
														{
															unk_0xF2D30B8ACAF12A39(iLocal_87[iLocal_58], 0x00000000);
														}
														iLocal_58++;
													}
													if (!func_166())
													{
														func_119(0x00000001);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_47 = 0x00000002;
								}
								break;
							
							case 0x00000002:
								if ((func_133(iLocal_52[0x00000000], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0x00000000) || func_133(iLocal_52[0x00000001], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0x00000000)) || iLocal_103)
								{
									iLocal_103 = 0x00000001;
									if (!func_166())
									{
										func_119(0x00000001);
									}
									if (unk_0xE4EDC4B0E92C078B(iLocal_88))
									{
										unk_0xF2D30B8ACAF12A39(iLocal_88, 0x00000001);
									}
									iLocal_58 = 0x00000000;
									while (iLocal_58 <= 0x00000001)
									{
										if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
										{
											unk_0xF2D30B8ACAF12A39(iLocal_87[iLocal_58], 0x00000001);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0x00000000:
											func_118();
											break;
										
										case 0x00000001:
											func_118();
											break;
										
										case 0x00000002:
											func_118();
											break;
										
										case 0x00000003:
											func_118();
											break;
										
										case 0x00000004:
											func_118();
											break;
										
										case 0x00000005:
											func_118();
											break;
										}
								}
								if (func_132())
								{
									iLocal_69 = 0x00000001;
									if (unk_0xE4EDC4B0E92C078B(iLocal_88))
									{
										unk_0xF2D30B8ACAF12A39(iLocal_88, 0x00000001);
									}
									iLocal_58 = 0x00000000;
									while (iLocal_58 <= 0x00000001)
									{
										if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
										{
											unk_0xF2D30B8ACAF12A39(iLocal_87[iLocal_58], 0x00000001);
										}
										iLocal_58++;
									}
									if (!func_117())
									{
										switch (iLocal_49)
										{
											case 0x00000001:
												func_114();
												break;
											
											case 0x00000003:
												func_113();
												break;
											
											case 0x00000004:
												func_112();
												break;
											
											case 0x00000005:
												func_110();
												SYSTEM::WAIT(0x00000000);
												if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
												{
													func_108(iLocal_52[0x00000000], "GENERIC_WAR_CRY", 0x00000018);
												}
												else if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
												{
													func_108(iLocal_52[0x00000001], "GENERIC_WAR_CRY", 0x00000018);
												}
												func_118();
												break;
											
											case 0x00000006:
												func_110();
												SYSTEM::WAIT(0x00000000);
												if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
												{
													func_108(iLocal_52[0x00000000], "GENERIC_SHOCKED_HIGH", 0x00000018);
												}
												else if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
												{
													func_108(iLocal_52[0x00000001], "GENERIC_SHOCKED_HIGH", 0x00000018);
												}
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										SYSTEM::WAIT(0x00000000);
										iVar0 = 0x00000000;
										while (iVar0 < iLocal_52)
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_52[iVar0]))
											{
												unk_0x08082071A5F7C155(iLocal_52[iVar0], 0x00000005, 0x00000000, 0x00000000);
												unk_0xF3268524E9BE6D6E(iLocal_52[iVar0], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
												unk_0xFADC0A217229F6B5(iLocal_52[iVar0], 0x00000001);
												if (unk_0xC844350D5D58C99A(iLocal_56))
												{
													if (unk_0xD59B17D2DFF98E26(iLocal_56))
													{
														unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
													}
												}
												if (unk_0xE4EDC4B0E92C078B(iLocal_87[iVar0]))
												{
													unk_0x142CC44DB769B57E(&(iLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 0x00000003;
									}
								}
								break;
							
							case 0x00000003:
								if (!bLocal_104)
								{
									func_107();
								}
								if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
								{
									func_92();
								}
								break;
							
							case 0x00000004:
								func_91();
								if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_85, 100f, 100f, 100f, 0x00000001, 0x00000001, 0x00000000))
								{
									unk_0x51B096AAC60548C1(1f);
									if (unk_0xC844350D5D58C99A(iLocal_52[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_52[0x00000001]))
									{
										unk_0x6DAD7906B73F064D(&(iLocal_52[0x00000000]));
										unk_0x6DAD7906B73F064D(&(iLocal_52[0x00000001]));
									}
								}
								if (!unk_0xC844350D5D58C99A(iLocal_53))
								{
									if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_113, 200f, 200f, 200f, 0x00000001, 0x00000001, 0x00000000))
									{
										unk_0x523BCC9DC80CD82F(joaat("s_m_m_highsec_01"));
										unk_0x523BCC9DC80CD82F(joaat("granger"));
										if (unk_0xB87F6CF6E5628C67(joaat("s_m_m_highsec_01")) && unk_0xB87F6CF6E5628C67(joaat("granger")))
										{
											iLocal_55 = unk_0x122AAB0B1D6F55AD(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 0x00000001, 0x00000001, 0x00000000);
											unk_0x25BD67336EA4AECE(iLocal_55, 0x000000C8);
											unk_0xF8CF67C6E39C23A9(iLocal_55, 1.5f);
											iLocal_53 = unk_0x852A19533F896693(iLocal_55, 0x0000001A, joaat("s_m_m_highsec_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
											unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000000, 0x00000000, 0x00000002, 0x00000000);
											unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
											unk_0x64F9F278AB9DCA2C(iLocal_53, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
											unk_0x262EF6C6306BEA6C(iLocal_53, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
											unk_0x6DF7BF67E86AAE86(iLocal_53, iLocal_137);
										}
									}
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 0x00000001)
										{
											if (!iLocal_106)
											{
												func_87(0x00000000);
												func_110();
												SYSTEM::WAIT(0x00000000);
												func_71(&uLocal_138, "REBU2AU", "REBU2_WV", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
												iLocal_106 = 0x00000001;
											}
										}
									}
									else
									{
										iLocal_106 = 0x00000000;
									}
									if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_113, Global_16, 0x00000001, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(iLocal_51, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (unk_0x16102BEDC7435774(iLocal_51))
										{
											if (unk_0xE4EDC4B0E92C078B(iLocal_111))
											{
												unk_0x142CC44DB769B57E(&iLocal_111);
											}
											if (unk_0xE4EDC4B0E92C078B(iLocal_112))
											{
												unk_0x142CC44DB769B57E(&iLocal_112);
											}
											if (func_70())
											{
												iLocal_47 = 0x00000005;
											}
											else
											{
												iLocal_47 = 0x00000006;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(vLocal_113))
										{
											func_87(0x00000000);
											func_110();
											SYSTEM::WAIT(0x00000000);
											func_71(&uLocal_138, "REBU2AU", "REBU2_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										}
										if (func_50())
										{
											func_87(0x00000000);
											func_110();
											SYSTEM::WAIT(0x00000000);
											func_71(&uLocal_138, "REBU2AU", "REBU2_NEAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										}
									}
								}
								break;
							
							case 0x00000005:
								func_91();
								if (func_49(0x00000001, 0x00000000, 0x00000001))
								{
									func_48();
								}
								if (bLocal_98)
								{
									iLocal_47 = 0x00000008;
								}
								break;
							
							case 0x00000006:
								func_91();
								if (func_49(0x00000001, 0x00000000, 0x00000001))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 0x00000008;
								}
								break;
							
							case 0x00000008:
								func_13();
								break;
							
							case 0x00000007:
								func_11();
								if (unk_0xC844350D5D58C99A(iLocal_56))
								{
									if (unk_0xD59B17D2DFF98E26(iLocal_56))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
										{
											if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0x00000000], "random@burial", "a_burial_stop", 0x00000003))
											{
												if (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
												}
											}
											else
											{
												unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
											}
										}
									}
								}
								if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) || unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
								{
									bLocal_117 = 0x00000001;
								}
								if (bLocal_117)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_54, 0x00000000))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
										{
											unk_0x2ECF845953E95D1B(iLocal_52[0x00000000]);
											if (unk_0x3CAA763EEC01ADF7(iLocal_52[0x00000000], iLocal_54, 0xFFFFFFFF, 0x00000000, 0x00000000) || unk_0x3CAA763EEC01ADF7(iLocal_52[0x00000000], iLocal_54, 0x00000000, 0x00000000, 0x00000000))
											{
												if (!iLocal_124)
												{
													unk_0xA3BF0AA5A2608191(iLocal_52[0x00000000]);
													if (unk_0xC844350D5D58C99A(iLocal_56))
													{
														if (unk_0xD59B17D2DFF98E26(iLocal_56))
														{
															unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
														}
													}
													unk_0xDD353D0E9C789D0E(&iLocal_59);
													unk_0xBC43ED9FE28DB191(0x00000000);
													unk_0xE20F700AC2AFCA92(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_54, -0.5f, 0.5f, 0f), unk_0x16F2683693E537C9(), 3f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
													unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_54, 0xFFFFFFFF, 0xFFFFFFFF, 3f, 0x00000009, 0x00000000);
													unk_0x89258193691A7600(0x00000000, iLocal_54, unk_0x16F2683693E537C9(), 0x00000008, 30f, 0x00040000, -1f, 10f, 0x00000001);
													unk_0x75ABDC5F81978924(iLocal_59);
													unk_0x78ADC381772E3D54(iLocal_52[0x00000000], iLocal_59);
													unk_0xF82EA857DA10E0CD(&iLocal_59);
													unk_0xFADC0A217229F6B5(iLocal_52[0x00000000], 0x00000001);
													unk_0xDC2C59BD0989562B(iLocal_54, 0x00000001);
													iLocal_124 = 0x00000001;
												}
												else if (unk_0xD1960163A3042274(iLocal_52[0x00000000], 0x0E763797) == 0x00000001)
												{
													if (unk_0x4F1B602325013CC2(iLocal_52[0x00000000]) == 0x00000003)
													{
														if (!unk_0x12DE711B1C681E9E(iLocal_52[0x00000000], unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x5A91F08DF773C39D(iLocal_52[0x00000000], vLocal_74, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
														{
															unk_0x6DAD7906B73F064D(&(iLocal_52[0x00000000]));
														}
													}
												}
											}
											else
											{
												unk_0x6C3AE6E278DB3D0E(iLocal_52[0x00000000], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
												unk_0xFADC0A217229F6B5(iLocal_52[0x00000000], 0x00000001);
											}
										}
										if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
										{
											unk_0x2ECF845953E95D1B(iLocal_52[0x00000001]);
											if (unk_0x3CAA763EEC01ADF7(iLocal_52[0x00000001], iLocal_54, 0xFFFFFFFF, 0x00000000, 0x00000000) || unk_0x3CAA763EEC01ADF7(iLocal_52[0x00000001], iLocal_54, 0x00000000, 0x00000000, 0x00000000))
											{
												if (!iLocal_124)
												{
													unk_0xA3BF0AA5A2608191(iLocal_52[0x00000001]);
													unk_0xDD353D0E9C789D0E(&iLocal_59);
													unk_0xBC43ED9FE28DB191(0x00000000);
													unk_0xE20F700AC2AFCA92(0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_54, -0.5f, 0.5f, 0f), unk_0x16F2683693E537C9(), 3f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
													unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_54, 0xFFFFFFFF, 0xFFFFFFFF, 3f, 0x00000009, 0x00000000);
													unk_0x89258193691A7600(0x00000000, iLocal_54, unk_0x16F2683693E537C9(), 0x00000008, 30f, 0x00040000, -1f, 10f, 0x00000001);
													unk_0x75ABDC5F81978924(iLocal_59);
													unk_0x78ADC381772E3D54(iLocal_52[0x00000001], iLocal_59);
													unk_0xF82EA857DA10E0CD(&iLocal_59);
													unk_0xFADC0A217229F6B5(iLocal_52[0x00000001], 0x00000001);
													unk_0xDC2C59BD0989562B(iLocal_54, 0x00000001);
													iLocal_124 = 0x00000001;
												}
												else if (unk_0xD1960163A3042274(iLocal_52[0x00000001], 0x0E763797) == 0x00000001)
												{
													if (unk_0x4F1B602325013CC2(iLocal_52[0x00000001]) == 0x00000003)
													{
														if (!unk_0x12DE711B1C681E9E(iLocal_52[0x00000001], unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x5A91F08DF773C39D(iLocal_52[0x00000001], vLocal_74, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
														{
															unk_0x6DAD7906B73F064D(&(iLocal_52[0x00000001]));
														}
													}
												}
											}
											else
											{
												unk_0x6C3AE6E278DB3D0E(iLocal_52[0x00000001], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
												unk_0xFADC0A217229F6B5(iLocal_52[0x00000001], 0x00000001);
											}
										}
									}
								}
								break;
							
							case 0x00000009:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 0x00000009)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_51, vLocal_114, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
								{
									func_8(0x00000000);
									SYSTEM::WAIT(0x00000000);
									func_110();
									iLocal_47 = 0x00000009;
								}
							}
						}
						if (func_6())
						{
							if (unk_0xC844350D5D58C99A(iLocal_51))
							{
								unk_0xEBA53F35D0085654(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 0x00000003)
						{
							if (func_1())
							{
								unk_0xC92DB9682A650680("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_84 = unk_0x1C0640BA9A7327B3() + 8500;
									iLocal_68 = 0x00000001;
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
								{
									if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000001))
									{
										if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_47 = 0x00000003;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 0x00000001 || iLocal_47 == 0x00000002) || iLocal_47 == 0x00000003) || iLocal_47 == 0x00000007)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
							{
								if (!bLocal_104)
								{
									if (unk_0xD1960163A3042274(iLocal_51, 0x6A67A5CC) != 0x00000001 && unk_0xD1960163A3042274(iLocal_51, 0x6A67A5CC) != 0x00000000)
									{
										unk_0x327AAEE25F323797(iLocal_51);
										iLocal_303 = unk_0xE9744DB7B8CA6965(vLocal_72, -2f, -4f, 18f, 0x00000002);
										unk_0x915804B434753CBD(iLocal_51, iLocal_303, "random@burial", "b_burial", 1000f, -4f, 0x00000001, 0x00006010, 0x447A0000, 0x00000000);
										unk_0xE14EC663EED44AD5(iLocal_57[0x00000000], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0x00000000, 0x447A0000);
										unk_0xE14EC663EED44AD5(iLocal_57[0x00000001], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0x00000000, 0x447A0000);
										unk_0xC90224D9E95E5E3A(iLocal_303, 0x00000001);
										unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
									}
									if (unk_0x4E861BC5B1EDA7BD(iLocal_51))
									{
										unk_0xA86D71B57C84C089(iLocal_51, 0x00000001);
										unk_0xF20820358777D05E(iLocal_51, 0x00000001);
										unk_0xD458AC1C1D29C3B4(iLocal_51, 0x00000000, 0x00000000);
									}
								}
								if ((unk_0xD24FAF25ADC00F44(iLocal_51) || unk_0xE147126C9AD09A60(iLocal_51)) || (iLocal_99 - unk_0x7F6DC62EA9922664(iLocal_51)) >= 0x00000032)
								{
									unk_0xA86D71B57C84C089(iLocal_51, 0x00000001);
									unk_0xF20820358777D05E(iLocal_51, 0x00000001);
									unk_0xD458AC1C1D29C3B4(iLocal_51, 0x00000000, 0x00000000);
								}
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
								{
									if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 5f)
									{
									}
									else if (unk_0x1B3D109B39CC2C89(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), iLocal_51))
									{
										unk_0xA86D71B57C84C089(iLocal_51, 0x00000001);
										unk_0xF20820358777D05E(iLocal_51, 0x00000001);
										unk_0xD458AC1C1D29C3B4(iLocal_51, 0x00000000, 0x00000000);
									}
								}
								if (!unk_0x437347B10A200C4B(iLocal_54, 0x00000000))
								{
									if (unk_0x1B3D109B39CC2C89(iLocal_54, iLocal_51))
									{
										unk_0xA86D71B57C84C089(iLocal_51, 0x00000001);
										unk_0xF20820358777D05E(iLocal_51, 0x00000001);
										unk_0xD458AC1C1D29C3B4(iLocal_51, 0x00000000, 0x00000000);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	if (!bLocal_104)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_52[0x00000000]) && !unk_0xC844350D5D58C99A(iLocal_52[0x00000001]))
		{
			return 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(iLocal_52[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_52[0x00000001]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) && unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
			{
				return 0x00000001;
			}
			if (unk_0xA750A57C629763A9(iLocal_52[0x00000000]) && unk_0xA750A57C629763A9(iLocal_52[0x00000001]))
			{
				return 0x00000001;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_52[0x00000000]) && !unk_0xC844350D5D58C99A(iLocal_52[0x00000001]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
			{
				return 0x00000001;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_52[0x00000001]) && !unk_0xC844350D5D58C99A(iLocal_52[0x00000000]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_2()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_87[0x00000000]))
		{
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				if (unk_0xD59B17D2DFF98E26(iLocal_56))
				{
					unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
				}
			}
			func_3(&uLocal_138, 0x00000004);
			unk_0x142CC44DB769B57E(&(iLocal_87[0x00000000]));
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_87[0x00000001]))
		{
			func_3(&uLocal_138, 0x00000003);
			unk_0x142CC44DB769B57E(&(iLocal_87[0x00000001]));
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000))
		{
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_88))
		{
			func_3(&uLocal_138, 0x00000005);
			unk_0x142CC44DB769B57E(&iLocal_88);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_4()
{
	unk_0xC92DB9682A650680("RE6_END");
	func_212();
}

int func_5()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_6()
{
	if (Global_791E)
	{
		func_7(0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_7(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_8(int iParam0)
{
	Global_5538 = iParam0;
}

int func_9()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_10()
{
	return Global_791D;
}

void func_11()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0x00000000:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000DAC, 0x00001388));
								iLocal_128++;
							}
						}
						break;
					
					case 0x00000001:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000DAC, 0x00001388));
								iLocal_128++;
							}
						}
						break;
					
					case 0x00000002:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000DAC, 0x00001388));
								iLocal_128++;
							}
						}
						break;
					
					case 0x00000003:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000DAC, 0x00001388));
								iLocal_128 = 0x00000000;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_13()
{
	while (!func_46())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!func_6())
	{
		if (func_45() == 0x00000000)
		{
			func_42(0xB887EF6B, 0x00000006, 0x00000001, 0x0000005F, 0x00000003, 0x0000EA60, 0x00007530, 0x7684CF5C, 0xFFFFFFFF, 0x00000095, 0xFFFFFFFF, 0x00000080);
		}
		else if (func_45() == 0x00000001)
		{
			func_42(0x408804E7, 0x00000006, 0x00000002, 0x0000005F, 0x00000003, 0x0000EA60, 0x00007530, 0x7684CF5C, 0xFFFFFFFF, 0x00000095, 0xFFFFFFFF, 0x00000080);
		}
		else if (func_45() == 0x00000002)
		{
			func_42(0x82CDE574, 0x00000006, 0x00000004, 0x0000005F, 0x00000003, 0x0000EA60, 0x00007530, 0x7684CF5C, 0xFFFFFFFF, 0x00000095, 0xFFFFFFFF, 0x00000080);
		}
	}
	unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	func_17(0xFFFFFFFF, 0x00000000);
	func_14();
	func_212();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0x00000000))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_17(int iParam0, int iParam1)
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
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_7(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_7(0x00000007);
			}
			else
			{
				func_7(0x00000001);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_19();
	}
}

void func_19()
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
		func_21(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_20() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_7830;
}

int func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

int func_23()
{
	return Global_1407E9;
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

int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_16(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam8 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam9 == 0x000000EB)
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
	if (iParam4 < 0x00000003)
	{
		if (iParam4 != iParam3)
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_88 < 0x00000009)
	{
		Var0 = iParam0;
		if (Global_1B416.f_1E03.f_38F == Var0)
		{
			Global_1B416.f_1E03.f_38F = 0xFFFFFFFF;
		}
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = iParam7;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000001);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		if (iParam7 != 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000B);
		}
		else if (iParam1 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000A);
		}
		Global_1B416.f_1E03[Global_1B416.f_1E03.f_88 /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_88++;
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam2, iVar1))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_1B416.f_1E03[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_3 == 0x00000005)
			{
				iVar1 = 0x00000005;
			}
		}
		iVar2++;
	}
	Global_1B416.f_1E03.f_397[iParam0] = iVar1;
}

int func_44(int iParam0)
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

int func_45()
{
	func_31();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_46()
{
	return 0x00000001;
}

void func_47()
{
	switch (iLocal_110)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51) && unk_0xDF1306B443CD3D15(iLocal_55, 0x00000000))
			{
				if (unk_0x16102BEDC7435774(iLocal_51))
				{
					unk_0x0A94A109271BE75A(iLocal_51);
				}
				unk_0x11AD11297DC58CC7(iLocal_51, 0x00000000);
				unk_0x25C5402CC10F76CD(iLocal_51, 0x00000001);
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00001388, 0x00000800, 0x00000002);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_55, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_51, iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_BACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_110++;
			break;
		
		case 0x00000001:
			if (unk_0xDF1306B443CD3D15(iLocal_55, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_51, iLocal_55, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
					{
						unk_0xE072601B4380E9DF(iLocal_53, iLocal_54, 10f, 0x000C00A7);
						unk_0xFADC0A217229F6B5(iLocal_53, 0x00000001);
					}
					unk_0xDC2C59BD0989562B(iLocal_55, 0x00000001);
					iLocal_110++;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_110++;
			break;
		
		case 0x00000003:
			iLocal_110++;
			break;
		
		case 0x00000004:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 0x00000005:
			SYSTEM::SETTIMERA(0x00000000);
			func_13();
			break;
	}
}

void func_48()
{
	switch (iLocal_110)
	{
		case 0x00000000:
			unk_0x0E2400AB9174FA81(0x000000FF, iLocal_137, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x000000FF, 0x6F0783F5, iLocal_137);
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 5f, 0x00000002, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51) && unk_0xDF1306B443CD3D15(iLocal_55, 0x00000000))
				{
					if (unk_0x16102BEDC7435774(iLocal_51))
					{
						unk_0x0A94A109271BE75A(iLocal_51);
					}
					unk_0x11AD11297DC58CC7(iLocal_51, 0x00000000);
					unk_0x25C5402CC10F76CD(iLocal_51, 0x00000001);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00001388, 0x00000800, 0x00000002);
					unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_55, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_51, iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
					func_110();
					SYSTEM::WAIT(0x00000000);
					func_71(&uLocal_138, "REBU2AU", "REBU2_BACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			SYSTEM::WAIT(0x00000A8C);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			iLocal_110++;
			break;
		
		case 0x00000001:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
				{
					if (!unk_0x1150BCE24B1630AC(unk_0x728870EB733D12A1(), 0x00000001))
					{
						if (unk_0xF409BCB95E61D4DB(unk_0x728870EB733D12A1(), 0x00000001) > 0.1f)
						{
							if (func_45() == 0x00000000)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							if (func_45() == 0x00000001)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
							if (func_45() == 0x00000002)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 0x00000002:
			if (unk_0xDF1306B443CD3D15(iLocal_55, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_51, iLocal_55, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
					{
						unk_0xE072601B4380E9DF(iLocal_53, iLocal_55, 10f, 0x000C00A7);
						unk_0xFADC0A217229F6B5(iLocal_53, 0x00000001);
					}
					unk_0xDC2C59BD0989562B(iLocal_55, 0x00000001);
					iLocal_110++;
				}
			}
			break;
		
		case 0x00000003:
			if (!func_12())
			{
				bLocal_98 = 0x00000001;
			}
			break;
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
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

int func_50()
{
	if (func_45() == 0x00000002)
	{
		if (func_10())
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

int func_51(vector3 vParam0)
{
	if (func_45() == 0x00000002)
	{
		if (func_10() && !Global_7920)
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

void func_52()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			unk_0x8D4C354BB8991817(iLocal_51, 0x00000001, 0x00000001);
			unk_0xBC43ED9FE28DB191(iLocal_51);
		}
		if (func_56("REBU2_LV2_9") || iLocal_66 > 0x00000001)
		{
			unk_0x8D4C354BB8991817(iLocal_51, 0x00000000, 0x00000001);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(0x00000001);
		}
		switch (iLocal_66)
		{
			case 0x00000000:
				func_71(&uLocal_138, "REBU2AU", "REBU2_LV2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_66++;
				break;
			
			case 0x00000001:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 1500;
				iLocal_66++;
				break;
			
			case 0x00000002:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_66++;
				}
				break;
			
			case 0x00000003:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x00000004:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 500;
				iLocal_66++;
				break;
			
			case 0x00000005:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_66++;
				}
				break;
			
			case 0x00000006:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x00000007:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_66++;
				break;
			
			case 0x00000008:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x00000009:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_66++;
				break;
			
			case 0x0000000A:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x0000000B:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_66++;
				break;
			
			case 0x0000000C:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x0000000D:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_66++;
				break;
			
			case 0x0000000E:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x0000000F:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_66++;
				break;
			
			case 0x00000010:
				if (func_45() == 0x00000000)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000001)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_45() == 0x00000002)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_66++;
				break;
			
			case 0x00000011:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 1000;
				iLocal_66++;
				break;
			
			case 0x00000012:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_66++;
				}
				break;
			
			case 0x00000013:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 2500;
				iLocal_66++;
				break;
			
			case 0x00000014:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					if (func_45() == 0x00000000)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_45() == 0x00000001)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_45() == 0x00000002)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_53()
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_54(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<6> func_55()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_56(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<6> func_57()
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

void func_58()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (!iLocal_107)
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000001) && unk_0xC42A92762C58E1B9(iLocal_51, unk_0x728870EB733D12A1(), 0x00000000))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0x00000000);
						func_110();
						SYSTEM::WAIT(0x00000000);
						func_71(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_107 = 0x00000001;
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_51, unk_0x728870EB733D12A1(), 0x00000000))
			{
				iLocal_107 = 0x00000000;
			}
		}
		if (!iLocal_108)
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
			{
				func_87(0x00000000);
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_JACK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_108 = 0x00000001;
			}
		}
		else if (!unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
		{
			iLocal_108 = 0x00000000;
		}
		if (!iLocal_109)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_87(0x00000000);
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_109 = 0x00000001;
			}
		}
		else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			iLocal_109 = 0x00000000;
		}
	}
}

void func_59()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (!func_62())
			{
				if (unk_0x16102BEDC7435774(iLocal_51))
				{
					unk_0x0A94A109271BE75A(iLocal_51);
				}
				if (unk_0xD1960163A3042274(iLocal_51, 0x4924437D) != 0x00000001 && unk_0xD1960163A3042274(iLocal_51, 0x4924437D) != 0x00000000)
				{
					unk_0xE185F110925D87DB(iLocal_51, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 6f, 0x40000000, 0x40000000, 0x00000000);
				}
				if (unk_0x405E212DDE472467(iLocal_51, 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_51, 0x00000000, 0x00400000);
				}
				if (!iLocal_106)
				{
					func_87(0x00000000);
					func_110();
					SYSTEM::WAIT(0x00000000);
					iLocal_106 = 0x00000001;
					if (!func_61())
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_UNS1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_UNS2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			else
			{
				iLocal_106 = 0x00000000;
				if (((unk_0xD1960163A3042274(iLocal_51, 0x4924437D) == 0x00000001 || unk_0xD1960163A3042274(iLocal_51, 0x4924437D) == 0x00000000) || unk_0xD1960163A3042274(iLocal_51, 0x0E763797) == 0x00000001) || unk_0xD1960163A3042274(iLocal_51, 0x0E763797) == 0x00000000)
				{
					unk_0xA3BF0AA5A2608191(iLocal_51);
				}
			}
		}
		else if (((!unk_0x16102BEDC7435774(iLocal_51) && !unk_0x405E212DDE472467(iLocal_51, 0x00000000)) && unk_0xD1960163A3042274(iLocal_51, 0x0E763797) != 0x00000001) && unk_0xD1960163A3042274(iLocal_51, 0x0E763797) != 0x00000000)
		{
			unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
			unk_0x7BECA8F360B1686D(iLocal_51, 0x00000001);
			unk_0xBF541ED34EA81209(iLocal_51, 0x00000000);
		}
	}
}

int func_60()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_61()
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

int func_62()
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

void func_63()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0xE3614539F8B5C807(iLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = unk_0x1C0640BA9A7327B3();
				iLocal_130 = 0x00000001;
			}
			else
			{
				iLocal_132 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			iLocal_130 = 0x00000000;
		}
	}
	if ((iLocal_132 - iLocal_131) > 0x0002BF20)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0x16102BEDC7435774(iLocal_51))
			{
				unk_0x0A94A109271BE75A(iLocal_51);
				if (unk_0x5A91F08DF773C39D(iLocal_51, vLocal_113, 100f, 100f, 100f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x96167B03C5A77156(iLocal_51, 1740.797f, 4648.756f, 42.6529f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
				}
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_WK", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = unk_0x1C0640BA9A7327B3();
			iLocal_133 = 0x00000001;
		}
		else
		{
			iLocal_135 = unk_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_133 = 0x00000000;
	}
	if ((iLocal_135 - iLocal_134) > 0x0001D4C0)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0x16102BEDC7435774(iLocal_51))
			{
				unk_0x0A94A109271BE75A(iLocal_51);
				if (unk_0x5A91F08DF773C39D(iLocal_51, vLocal_113, 100f, 100f, 100f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x96167B03C5A77156(iLocal_51, vLocal_113, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
				}
				else
				{
					unk_0x75CDA8644CD3B5F5(iLocal_51, 0x00000000, 0x00400000);
				}
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_QM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				func_4();
			}
		}
	}
}

void func_65()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000) || unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
		{
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xC42A92762C58E1B9(iLocal_51, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && !unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_88))
				{
					iLocal_88 = func_68(iLocal_51, 0x00000000, 0x00000091);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_111))
				{
					unk_0x142CC44DB769B57E(&iLocal_111);
				}
			}
			else
			{
				if (!unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_88))
					{
						unk_0x142CC44DB769B57E(&iLocal_88);
					}
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_111))
				{
					iLocal_111 = func_66(vLocal_113, 0x00000001);
				}
			}
		}
		else if (!unk_0xE4EDC4B0E92C078B(iLocal_88))
		{
			iLocal_88 = func_68(iLocal_51, 0x00000000, 0x00000091);
		}
		if (!unk_0x16102BEDC7435774(iLocal_51))
		{
			if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0xA3BF0AA5A2608191(iLocal_51);
				unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
				unk_0x7BECA8F360B1686D(iLocal_51, 0x00000001);
				unk_0xBF541ED34EA81209(iLocal_51, 0x00000000);
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				unk_0xA3BF0AA5A2608191(iLocal_51);
				unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
				unk_0x7BECA8F360B1686D(iLocal_51, 0x00000001);
				unk_0xBF541ED34EA81209(iLocal_51, 0x00000000);
			}
		}
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 150f, 150f, 150f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_4();
		}
	}
}

int func_66(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_68(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_70()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iLocal_129 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xDF1306B443CD3D15(iLocal_129, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
			{
				if (unk_0x82CCEAB29E9451DD(iLocal_51, iLocal_129))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0x00000000);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_78();
		func_73();
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
		func_85();
	}
	return 0x00000000;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_77())
	{
		return 0x00000000;
	}
	if (func_75(unk_0xD803B885F5E47A62()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 0x00000014);
}

bool func_76(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_77()
{
	return 0xFFFFFFFF;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_81()
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

void func_82()
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
		Global_4C1E = func_45();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_87(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!unk_0xEA6BC48857E0AC4C(&Local_121))
			{
				if (func_90(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 0x00000008, 0x00000000, 0x00000000))
				{
					iLocal_119 = 0x00000000;
				}
			}
			else
			{
				iLocal_119 = 0x00000000;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_53())
	{
		Local_121 = { func_55() };
		Local_120 = { func_57() };
		func_88();
		iLocal_119 = 0x00000001;
	}
}

void func_88()
{
	Global_4CD7 = 0x00000000;
	func_89();
}

void func_89()
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

bool func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_72(sParam2, iParam4, 0x00000000);
}

void func_91()
{
	if (unk_0xC844350D5D58C99A(iLocal_51))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			unk_0x9DD8618CA5BF832D(iLocal_51, 0x0000018A, 0x00000001);
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_51, unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
			{
				unk_0xF3268524E9BE6D6E(iLocal_51, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
			{
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_137, 0x6F0783F5);
				unk_0x6C3AE6E278DB3D0E(iLocal_53, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0xFADC0A217229F6B5(iLocal_53, 0x00000001);
			}
			func_110();
			SYSTEM::WAIT(0x00000000);
			func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			func_4();
			iLocal_49 = 0x00000004;
		}
		if (unk_0xC844350D5D58C99A(iLocal_53))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_53, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
				{
					unk_0xF3268524E9BE6D6E(iLocal_51, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
				{
					unk_0x0E2400AB9174FA81(0x00000005, iLocal_137, 0x6F0783F5);
					unk_0x6C3AE6E278DB3D0E(iLocal_53, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0xFADC0A217229F6B5(iLocal_53, 0x00000001);
				}
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				func_4();
				iLocal_49 = 0x00000004;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000001)
		{
			unk_0xF3268524E9BE6D6E(iLocal_51, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
			func_110();
			SYSTEM::WAIT(0x00000000);
			func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			func_4();
			iLocal_49 = 0x00000004;
		}
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 1.2f, 1.2f, 5f, 0x00000000, 0x00000001, 0x00000000) && unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9())) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
		{
			if (func_49(0x00000001, 0x00000000, 0x00000001))
			{
				bLocal_104 = 0x00000001;
				if (!iLocal_89)
				{
					func_99(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000018);
					unk_0xA37A90C62806D848(0x00000001);
					unk_0x8BCB70EB440DED83(0x00000000);
					unk_0xBFE31971E49FA500(0x00000000);
					unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000001);
					if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
					{
						unk_0x73270B3C9CC833FD(unk_0x728870EB733D12A1(), 0x00000001, 0x00000000);
						if (unk_0x4E861BC5B1EDA7BD(unk_0x728870EB733D12A1()))
						{
							func_98(unk_0x728870EB733D12A1());
							unk_0x5DAB50E08C3C504A(unk_0x728870EB733D12A1(), 200f);
						}
						if (unk_0x12DE711B1C681E9E(unk_0x728870EB733D12A1(), iLocal_51, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x728870EB733D12A1(), vLocal_74, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0xA47B46945FF6DE74(unk_0x728870EB733D12A1(), unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001) - Vector(0f, 3f, 5f), 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
							{
								unk_0xB9FD7450C0DAB575(unk_0x728870EB733D12A1(), 0x40A00000);
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_54))
					{
						if (unk_0x4E861BC5B1EDA7BD(iLocal_54))
						{
							func_98(iLocal_54);
							unk_0x5DAB50E08C3C504A(iLocal_54, 200f);
						}
						if (unk_0x12DE711B1C681E9E(iLocal_54, iLocal_51, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0xA47B46945FF6DE74(iLocal_54, vLocal_74, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							if (!unk_0x437347B10A200C4B(iLocal_54, 0x00000000))
							{
								unk_0xB9FD7450C0DAB575(iLocal_54, 0x40A00000);
							}
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
					{
						iLocal_129 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001), 5f, 0x00000000, 0x00000002);
						if (!unk_0x437347B10A200C4B(iLocal_129, 0x00000000))
						{
							if (unk_0x4E861BC5B1EDA7BD(iLocal_129))
							{
								func_98(iLocal_129);
								unk_0x5DAB50E08C3C504A(iLocal_129, 200f);
							}
							unk_0xA47B46945FF6DE74(iLocal_129, unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001) + Vector(0f, 5f, 5f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
					}
					unk_0x7800CEC090C01D4D(vLocal_72, 10f);
					unk_0x679C321F8CAA2CFA(vLocal_72, 10f, 0x00000000);
					unk_0x28F5E4DA506AC0CA(vLocal_72, 4.5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xA47B46945FF6DE74(iLocal_51, vLocal_72, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_72, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
					{
					}
					iVar0 = 0x00000000;
					while (iVar0 < iLocal_52)
					{
						if (unk_0xC844350D5D58C99A(iLocal_52[iVar0]))
						{
							if (unk_0x5A91F08DF773C39D(iLocal_52[iVar0], unk_0x68F4C0EC296D3901(iLocal_51, 0x00000000), 1.5f, 1.5f, 1.5f, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xEBA53F35D0085654(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
					{
						iLocal_303 = unk_0xE9744DB7B8CA6965(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 0x00000002);
						iLocal_71 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000000);
						unk_0x93E9ED66DAB9FBE3(iLocal_71, iLocal_303, "untie_cam", "random@burial");
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 162.6699f, 6839.238f, 18.8314f, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 18.2311f);
						unk_0xD458AC1C1D29C3B4(iLocal_51, 0x000000C8, 0x00000000);
						unk_0xA86D71B57C84C089(iLocal_51, 0x00000000);
						unk_0xF20820358777D05E(iLocal_51, 0x00000000);
						unk_0x327AAEE25F323797(iLocal_51);
						unk_0x915804B434753CBD(iLocal_51, iLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xF895E10BF4C72645(iLocal_51, 0x00000000, 0x00000000);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						unk_0xE14EC663EED44AD5(iLocal_57[0x00000000], iLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0x00000000, 0x447A0000);
						unk_0xE14EC663EED44AD5(iLocal_57[0x00000001], iLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0x00000000, 0x447A0000);
						unk_0xE3BB8E05FCEB3FBE(iLocal_71, 0x00000001);
						unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						iLocal_94 = unk_0x1C0640BA9A7327B3();
						iLocal_89 = 0x00000001;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		unk_0x3FC8DBCC154CA56B();
		if (unk_0x69DF961355195C3C(iLocal_303))
		{
			if ((unk_0xA45992A6CE82FB43(iLocal_303) > 0.115f && unk_0xA45992A6CE82FB43(iLocal_303) < 0.12f) || (unk_0xA45992A6CE82FB43(iLocal_303) > 0.355f && unk_0xA45992A6CE82FB43(iLocal_303) < 0.36f))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 0x00000001);
			}
			if (unk_0xA45992A6CE82FB43(iLocal_303) > 0.6f)
			{
				if (!iLocal_90)
				{
					func_110();
					SYSTEM::WAIT(0x00000000);
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_UNT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_90 = 0x00000001;
					}
				}
			}
		}
		iLocal_93 = unk_0x1C0640BA9A7327B3();
		if (((iLocal_93 - iLocal_94) > 0x000025E4 && !iLocal_97) && unk_0x6C3F127AAF415E69() == 0x00000004)
		{
			unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
			iLocal_97 = 0x00000001;
		}
		if ((iLocal_93 - iLocal_94) > 0x00002710)
		{
			iLocal_91 = 0x00000001;
		}
		if (func_96(0x000003E8))
		{
			func_110();
			unk_0x53491B90E4FD0E56(0x00000320);
			while (unk_0xD0BB2359EC70FC37())
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_91 = 0x00000001;
			bLocal_92 = 0x00000001;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		unk_0x8BCB70EB440DED83(0x00000001);
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x57E0CF9BF653D99A(iLocal_303, 1f);
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 162.5284f, 6839.658f, 18.8198f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 256.7693f);
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			unk_0x327AAEE25F323797(iLocal_51);
			unk_0xF895E10BF4C72645(iLocal_51, 0x00000000, 0x00000000);
			unk_0x46CB381A452EF99D(iLocal_51, 0x00000001);
			unk_0xA47B46945FF6DE74(iLocal_51, 164.4963f, 6839.333f, 18.9657f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(iLocal_51, 73.449f);
		}
		unk_0x2FB9A57162E54BAB(26.1578f);
		unk_0xEF6276132B396452(-8.1198f, 0x3F800000);
		unk_0xE3BB8E05FCEB3FBE(iLocal_71, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_71, 0x00000000);
		unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
		if (bLocal_92)
		{
			unk_0x82E51BCA72537B6C(0x00000320);
			while (unk_0x7BCE0E6DD4A1F749())
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
		bLocal_96 = 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_45() == 0x00000000)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM0", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_45() == 0x00000001)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_45() == 0x00000002)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					unk_0x0E2400AB9174FA81(0x00000001, iLocal_137, 0x6F0783F5);
					unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, iLocal_137);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000FA0);
					if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_51, unk_0x728870EB733D12A1(), 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000) && unk_0xD6DF381716822EFE(unk_0x728870EB733D12A1()) > 0x00000000)
						{
							unk_0x5B1D360B9C6F0A09(0x00000000, unk_0x728870EB733D12A1(), 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
						}
						else if (!unk_0x16102BEDC7435774(iLocal_51))
						{
							unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
							unk_0x7BECA8F360B1686D(iLocal_51, 0x00000001);
							unk_0xBF541ED34EA81209(iLocal_51, 0x00000000);
						}
					}
					else if (!unk_0x16102BEDC7435774(iLocal_51))
					{
						unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
						unk_0x7BECA8F360B1686D(iLocal_51, 0x00000001);
						unk_0xBF541ED34EA81209(iLocal_51, 0x00000000);
					}
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_51, iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					if (unk_0xE4EDC4B0E92C078B(iLocal_88))
					{
						unk_0x142CC44DB769B57E(&iLocal_88);
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_111))
					{
						iLocal_111 = func_66(vLocal_113, 0x00000001);
					}
					if (func_45() == 0x00000002 && !func_9())
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_112))
						{
							iLocal_112 = func_66(vLocal_114, 0x00000000);
							unk_0xBC8E0A7390523199(iLocal_112, 0x0000010D);
							func_94();
						}
					}
					func_93();
					iLocal_105 = 0x00000001;
					iLocal_95 = 0x00000001;
					SYSTEM::SETTIMERA(0x00000000);
					unk_0x21688103CC7F9B19(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0x00000000);
					unk_0xE342F209E49C5314(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0x00000000, 0x00000001);
					func_99(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000004);
					unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
					iLocal_47 = 0x00000004;
				}
			}
		}
	}
}

void func_93()
{
	if (!func_9())
	{
		if (func_45() == 0x00000002)
		{
			Global_791D = 0x00000001;
		}
	}
}

void func_94()
{
	if (func_45() == 0x00000002)
	{
		if (!Global_791F)
		{
			func_95("CULT_BLIP_HELP", 0xFFFFFFFF);
			Global_791F = 0x00000001;
		}
	}
}

void func_95(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_96(int iParam0)
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
			if (func_97())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_97()
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

void func_98(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				unk_0x98B861C98966897A(iParam0);
				unk_0xD458AC1C1D29C3B4(iParam0, unk_0x7F6DC62EA9922664(iParam0) + 200, 0x00000000);
				unk_0x5DAB50E08C3C504A(iParam0, (unk_0x6EE94F60DA2A2273(iParam0) + 200f));
				unk_0xDC544F7DF5E5164D(iParam0, (unk_0xD96C5EC6FCB061BA(iParam0) + 200f));
				unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 5f);
				unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 2.5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_106(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_80())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_105(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_106(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_105(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_103(unk_0xD803B885F5E47A62())) && !func_101(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_100()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_103(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_100()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_101(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_102(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_23();
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

int func_103(int iParam0)
{
	if (func_101(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_104())
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

bool func_104()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_106(int iParam0)
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

void func_107()
{
	if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000))
	{
		switch (iLocal_128)
		{
			case 0x00000000:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000FA0, 0x0000157C));
						iLocal_128++;
					}
				}
				break;
			
			case 0x00000001:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000FA0, 0x0000157C));
						iLocal_128++;
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000FA0, 0x0000157C));
						iLocal_128++;
					}
				}
				break;
			
			case 0x00000003:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000FA0, 0x0000157C));
						iLocal_128 = 0x00000000;
					}
				}
				break;
			}
	}
}

void func_108(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_109(iParam2), 0x00000001);
}

int func_109(int iParam0)
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

void func_110()
{
	Global_4CD7 = 0x00000000;
	func_111();
}

void func_111()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_112()
{
	if (!iLocal_61 && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_85, 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATVF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_61 = 0x00000001;
			}
		}
	}
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
		{
			unk_0x89258193691A7600(iLocal_52[0x00000000], iLocal_54, unk_0x16F2683693E537C9(), 0x00000008, 30f, 0x00040000, -1f, 10f, 0x00000001);
			unk_0xFADC0A217229F6B5(iLocal_52[0x00000000], 0x00000001);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
		{
			unk_0x5B1D360B9C6F0A09(iLocal_52[0x00000001], iLocal_54, 0xFFFFFFFF, 0x00000000, 3f, 0x00000001, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_52[0x00000001], 0x00000001);
		}
	}
	else
	{
		iLocal_58 = 0x00000000;
		while (iLocal_58 <= 0x00000001)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[iLocal_58]))
			{
				unk_0xF3268524E9BE6D6E(iLocal_52[iLocal_58], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_52[iLocal_58], 0x00000001);
			}
			iLocal_58++;
		}
	}
	SYSTEM::WAIT(0x00000000);
	func_4();
}

void func_113()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
	{
		if (!unk_0x688A90832774AB83(iLocal_52[0x00000000]) && !unk_0x688A90832774AB83(iLocal_52[0x00000001]))
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_VH", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				if (!unk_0x168558745A6AC21E(iLocal_52[0x00000001]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_52[0x00000001]);
					unk_0x2C4A1A0F54A166E8(iLocal_52[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0xC6EE6B4C);
				}
			}
		}
	}
	iLocal_47 = 0x00000007;
}

void func_114()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[0x00000001], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				iLocal_62 = 0x00000001;
			}
			if (unk_0x7069CC4DE1EA3FAA(iLocal_52[0x00000001], unk_0x16F2683693E537C9(), 90f))
			{
				func_110();
				SYSTEM::WAIT(0x00000000);
				func_71(&uLocal_138, "REBU2AU", "REBU2_GUY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
				{
					fVar0 = func_116(iLocal_52[0x00000000], unk_0x16F2683693E537C9(), 0x00000001);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000000, 0x00000001);
					unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_52[0x00000000], unk_0x4A089F2B762B8D33(iLocal_52[0x00000000], 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0xA3BF0AA5A2608191(iLocal_52[0x00000000]);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "random@burial", "a_burial_stop", 8f, -4f, 0x000007D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_52[0x00000000], iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					unk_0x5745EA6329A91E29(iLocal_52[0x00000001], joaat("weapon_sawnoffshotgun"), 0x00000001);
					unk_0xA3BF0AA5A2608191(iLocal_52[0x00000001]);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, fVar0, 1f, 0x40000000, 0x00000000);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_52[0x00000001], iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					iLocal_63 = 0x00000001;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			if (unk_0xD59B17D2DFF98E26(iLocal_56))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0x00000000], "random@burial", "a_burial_stop", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_WHO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0x161356BF7864C47B(0x00000000, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 1f, 0x00000000, 3.5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
				unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[0x00000001], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xC92DB9682A650680("RE6_START");
				iLocal_125 = 0x00000001;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_WAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0x00000000], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0x00000001], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x9BE7E7B6B488CC55(iLocal_52[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
				}
				iLocal_126 = 0x00000001;
				SYSTEM::SETTIMERB(0x00000000);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (SYSTEM::TIMERB() > 0x00003A98 && !func_12())
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0x00000000], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0x00000001], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xF96A174EE26D7588(iLocal_52[0x00000000], unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xF96A174EE26D7588(iLocal_52[0x00000001], unk_0x16F2683693E537C9(), 0x00000000);
					func_71(&uLocal_138, "REBU2AU", "REBU2_SHO", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					bLocal_127 = 0x00000001;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0x00000000], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0x00000001], 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!func_12())
				{
					if (func_115())
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_FO", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			else
			{
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0xE185F110925D87DB(0x00000000, iLocal_52[0x00000001], 0xFFFFFFFF, 2f, 1f, 0x40000000, 0x00000000);
				unk_0xF96A174EE26D7588(0x00000000, iLocal_52[0x00000001], 0x00000000);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_HANG_OUT_STREET", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[0x00000000], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0xE185F110925D87DB(0x00000000, iLocal_52[0x00000000], 0xFFFFFFFF, 2f, 1f, 0x40000000, 0x00000000);
				unk_0xF96A174EE26D7588(0x00000000, iLocal_52[0x00000000], 0x00000000);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_HANG_OUT_STREET", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[0x00000001], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				SYSTEM::SETTIMERB(0x00003A98);
				iLocal_115 = 0x00000000;
				iLocal_126 = 0x00000001;
				iLocal_64 = 0x00000001;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_118();
		}
		if (((unk_0xE115347EA59F7B86(iLocal_52[0x00000000], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_52[0x00000001], unk_0x16F2683693E537C9())) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[0x00000000])) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[0x00000001]))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000003))
			{
				if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					if (!iLocal_70)
					{
						func_110();
						SYSTEM::WAIT(0x00000000);
						if (func_71(&uLocal_138, "REBU2AU", "REBU2_GUN", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_70 = 0x00000001;
							func_118();
						}
					}
				}
			}
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000003) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004))
			{
				if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					if (!iLocal_70)
					{
						func_110();
						SYSTEM::WAIT(0x00000000);
						if (func_71(&uLocal_138, "REBU2AU", "REBU2_WEP", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_70 = 0x00000001;
							func_118();
						}
					}
				}
			}
			if (unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_118();
			}
		}
	}
}

int func_115()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_116(int iParam0, int iParam1, bool bParam2)
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

int func_117()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				if ((((unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")) || unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9())) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("annihilator"))) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("buzzard"))) || unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_118()
{
	func_11();
	unk_0xC92DB9682A650680("RE6_START");
	if (!iLocal_115)
	{
		if (unk_0xC844350D5D58C99A(iLocal_52[0x00000000]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
			{
				unk_0x9DD8618CA5BF832D(iLocal_52[0x00000000], 0x0000009C, 0x00000001);
				if (unk_0xC844350D5D58C99A(iLocal_56))
				{
					unk_0x2ECF845953E95D1B(iLocal_52[0x00000000]);
					if (unk_0xD59B17D2DFF98E26(iLocal_56))
					{
						if (!iLocal_64)
						{
							unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000000, 0x00000001);
							unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_52[0x00000000], unk_0x4A089F2B762B8D33(iLocal_52[0x00000000], 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
							unk_0xA3BF0AA5A2608191(iLocal_52[0x00000000]);
							unk_0xDD353D0E9C789D0E(&iLocal_59);
							unk_0xBC43ED9FE28DB191(0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "random@burial", "a_burial_stop", 8f, -8f, 0x000007D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_59);
							unk_0x78ADC381772E3D54(iLocal_52[0x00000000], iLocal_59);
							unk_0xF82EA857DA10E0CD(&iLocal_59);
							unk_0xFADC0A217229F6B5(iLocal_52[0x00000000], 0x00000001);
							unk_0xF895E10BF4C72645(iLocal_52[0x00000000], 0x00000000, 0x00000000);
							iLocal_115 = 0x00000001;
						}
					}
					else
					{
						unk_0xDD353D0E9C789D0E(&iLocal_59);
						unk_0xBC43ED9FE28DB191(0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0x75ABDC5F81978924(iLocal_59);
						unk_0x78ADC381772E3D54(iLocal_52[0x00000000], iLocal_59);
						unk_0xF82EA857DA10E0CD(&iLocal_59);
						unk_0xFADC0A217229F6B5(iLocal_52[0x00000000], 0x00000001);
						iLocal_115 = 0x00000001;
					}
				}
			}
			else
			{
				iLocal_115 = 0x00000001;
			}
		}
		else
		{
			iLocal_115 = 0x00000001;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_56))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_56))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0x00000000], "random@burial", "a_burial_stop", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (unk_0xC844350D5D58C99A(iLocal_52[0x00000001]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
			{
				unk_0x9DD8618CA5BF832D(iLocal_52[0x00000001], 0x0000009C, 0x00000001);
				unk_0x2ECF845953E95D1B(iLocal_52[0x00000001]);
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0xBC43ED9FE28DB191(0x00000000);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000001F4);
				unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[0x00000001], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xFADC0A217229F6B5(iLocal_52[0x00000001], 0x00000001);
				iLocal_116 = 0x00000001;
			}
			else
			{
				iLocal_116 = 0x00000001;
			}
		}
		else
		{
			iLocal_116 = 0x00000001;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = unk_0x1C0640BA9A7327B3() + 8500;
		SYSTEM::SETTIMERA(0x00000000);
		iLocal_47 = 0x00000007;
	}
}

int func_119(int iParam0)
{
	if (func_122())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_25(Global_1B40B))
		{
			func_120(0x00000000);
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

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_95(func_121(iParam0), 0xFFFFFFFF);
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
					func_95(func_121(iParam0), 0xFFFFFFFF);
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
					func_95(func_121(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0x00000000))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_A1D7);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_125(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_128()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_123))
	{
		unk_0x142CC44DB769B57E(&iLocal_123);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_88))
	{
		if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000))
		{
			iLocal_88 = func_68(iLocal_51, 0x00000000, 0x00000091);
		}
	}
	iLocal_58 = 0x00000000;
	while (iLocal_58 <= 0x00000001)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_52[iLocal_58], 0x00000000))
			{
				iLocal_87[iLocal_58] = func_68(iLocal_52[iLocal_58], 0x00000001, 0x00000091);
			}
		}
		iLocal_58++;
	}
}

void func_129()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		switch (iLocal_128)
		{
			case 0x00000000:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001194, 0x00001964));
						iLocal_128++;
					}
				}
				break;
			
			case 0x00000001:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001194, 0x00001964));
						iLocal_128++;
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001194, 0x00001964));
						iLocal_128++;
					}
				}
				break;
			
			case 0x00000003:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001194, 0x00001964));
						iLocal_128 = 0x00000000;
					}
				}
				break;
			}
	}
}

void func_130()
{
	switch (iLocal_86)
	{
		case 0x00000000:
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH1", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_86++;
			}
			break;
		
		case 0x00000001:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 0x00000002:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH3", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 0x00000003:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH4", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 0x00000004:
			iLocal_84 = unk_0x1C0640BA9A7327B3() + 3000;
			iLocal_86++;
			break;
		
		case 0x00000005:
			break;
	}
}

void func_131()
{
	if (unk_0xC844350D5D58C99A(iLocal_56))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_56))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0x00000000], "random@burial", "a_burial_stop", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial_stop") > 0.124f && unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xE81656B429E5C4B5("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0x00000000], "random@burial", "a_burial", 0x00000003))
				{
					if (((((unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") > 0.04f && unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") < 0.043f) || (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") > 0.24f && unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") < 0.243f)) || (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") > 0.44f && unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") < 0.443f)) || (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") > 0.64f && unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") < 0.643f)) || (unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") > 0.84f && unk_0x8CA9406E01C7EE58(iLocal_52[0x00000000], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xE81656B429E5C4B5("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
		}
	}
}

int func_132()
{
	if (!iLocal_103)
	{
		if (unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 0x00000001) || unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 0x00000001))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) || unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
			{
				iLocal_49 = 0x00000001;
				return 0x00000001;
			}
			else if (!unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 0x00000001) || !unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 0x00000001))
			{
				iLocal_49 = 0x00000001;
				return 0x00000001;
			}
		}
		if (((((((((unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 0x00000001) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 0x00000001)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 0x00000001)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 0x00000001)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 0x00000001)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 0x00000001)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 0x00000001)) || unk_0x372F6F38C16E36DA(0x00000002, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x372F6F38C16E36DA(0x00000004, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x372F6F38C16E36DA(0x00000000, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 0x00000001;
			return 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			if (!unk_0x437347B10A200C4B(iLocal_54, 0x00000000))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_54, unk_0x16F2683693E537C9(), 0x00000001) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 0x00000000))
				{
					unk_0xE910A68AA670B4AA(iLocal_54);
					func_118();
					iLocal_49 = 0x00000003;
					return 0x00000001;
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("towtruck")) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("towtruck2")))
					{
						if (unk_0x6D18156F72BE0773(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), iLocal_54))
						{
							func_118();
							iLocal_49 = 0x00000003;
							return 0x00000001;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
			{
				if ((((unk_0xE115347EA59F7B86(iLocal_52[0x00000000], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_52[0x00000001], unk_0x16F2683693E537C9())) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[0x00000000])) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[0x00000001])) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_49 = 0x00000001;
						return 0x00000001;
					}
				}
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0x00000001]))
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
				{
					if (unk_0x1B3D109B39CC2C89(unk_0x728870EB733D12A1(), iLocal_52[0x00000000]) || unk_0x1B3D109B39CC2C89(unk_0x728870EB733D12A1(), iLocal_52[0x00000001]))
					{
						iLocal_49 = 0x00000005;
						return 0x00000001;
					}
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_51, unk_0x16F2683693E537C9(), 0x00000000) || unk_0x54648B774DB42A3A(iLocal_51, joaat("weapon_stungun"), 0x00000000))
			{
				iLocal_49 = 0x00000004;
				return 0x00000001;
			}
		}
		else
		{
			iLocal_49 = 0x00000004;
			return 0x00000001;
		}
		if (unk_0x437347B10A200C4B(iLocal_52[0x00000000], 0x00000000) || unk_0x437347B10A200C4B(iLocal_52[0x00000001], 0x00000000))
		{
			iLocal_49 = 0x00000006;
			return 0x00000001;
		}
		if (iLocal_69)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_133(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !bParam4)
	{
		if (unk_0xE3614539F8B5C807(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !bParam4)
		{
			vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			vVar4 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			fVar5 = SYSTEM::VDIST(vVar3, vVar4);
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000003))
			{
				if (func_139(iParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 0x00000003;
					func_137(iParam0);
					return 0x00000001;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000001))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xD3DCEC81D13AAFB1(vVar4, fParam5, 0x00000001))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 0x00000001;
					func_137(iParam0);
					return 0x00000001;
				}
				if (unk_0x723EE7F83DF1497D(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0x00000000))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 0x00000001;
					func_137(iParam0);
					return 0x00000001;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000002))
			{
				fVar0 = unk_0xF428D43975FB0E0E(unk_0x16F2683693E537C9());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
				{
					if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xF649DD3BF44195C7(iParam0, unk_0x16F2683693E537C9(), 0x00000011))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_138("	aggro Ped knows player is pointing gun\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\n");
								func_134("		time since not LockedOn = ", (unk_0x1C0640BA9A7327B3() - iLocal_19));
								func_138("\n");
								bVar2 = 0x00000001;
								if (unk_0x1C0640BA9A7327B3() > (iLocal_19 + *uParam2))
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 0x00000002;
									func_137(iParam0);
									return 0x00000001;
								}
							}
						}
						else
						{
							bVar2 = 0x00000000;
						}
					}
					else
					{
						bVar2 = 0x00000000;
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000000))
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0x00000000;
					func_137(iParam0);
					return 0x00000001;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x1C0640BA9A7327B3();
	}
	return 0x00000000;
}

void func_134(char* sParam0, int iParam1)
{
	func_136(sParam0);
	func_135(iParam1);
}

void func_135(int iParam0)
{
	if (iParam0 > 0x00000000)
	{
	}
}

void func_136(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_137(int iParam0)
{
	unk_0x0FB22E2FED7BCC7E(iParam0);
}

void func_138(char* sParam0)
{
	func_136(sParam0);
}

int func_139(int iParam0, int iParam1)
{
	if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		if ((unk_0x65BC0B7172CA52DD(iParam0) - unk_0x7F6DC62EA9922664(iParam0)) > iParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_140()
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_142(0x00000027, 0x00000001);
	func_142(0x00000028, 0x00000001);
	func_142(0x00000029, 0x00000001);
	func_142(0x0000002A, 0x00000001);
	func_142(0x0000002B, 0x00000001);
	func_142(0x0000002C, 0x00000001);
	unk_0x7D6CA5F52B3748BF(vLocal_113 - Vector(20f, 40f, 40f), vLocal_113 + Vector(20f, 40f, 40f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0x7D6CA5F52B3748BF(vLocal_72 - Vector(20f, 50f, 60f), vLocal_72 + Vector(20f, 50f, 50f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0xAB8E2DDC7AF955E0(iLocal_83, 0x00000001);
	unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
	unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
	unk_0x51B096AAC60548C1(0f);
	iLocal_51 = unk_0x36F2404464202779(0x0000001A, iLocal_80, vLocal_72, fLocal_77, 0x00000001, 0x00000001);
	unk_0x11AD11297DC58CC7(iLocal_51, 0x00000001);
	unk_0x25C5402CC10F76CD(iLocal_51, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_51, 0x00000002, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_51, 0x00000080, 0x00000001);
	unk_0xAFF39FB306F8E232(iLocal_51, 0x00000001, 0x00000000);
	unk_0xAFF39FB306F8E232(iLocal_51, 0x00000006, 0x00000000);
	unk_0x4E885A246A9D983A(iLocal_51, 0x000000CE, 0x00000001);
	unk_0x4E885A246A9D983A(iLocal_51, 0x0000013E, 0x00000000);
	unk_0x4E885A246A9D983A(iLocal_51, 0x00000076, 0x00000000);
	unk_0x4E885A246A9D983A(iLocal_51, 0x000000D0, 0x00000001);
	unk_0x71199B01895C6202(iLocal_80);
	unk_0xD458AC1C1D29C3B4(iLocal_51, iLocal_99, 0x00000000);
	unk_0xF4CB0B98F8F79D8D(unk_0x16F2683693E537C9(), 0x00000000);
	unk_0xF63400DBE3303D26("rghKidnappers", &iLocal_136);
	unk_0xF63400DBE3303D26("rghVictim", &iLocal_137);
	unk_0x6DF7BF67E86AAE86(iLocal_51, iLocal_137);
	iLocal_58 = 0x00000000;
	while (iLocal_58 <= 0x00000001)
	{
		iLocal_52[iLocal_58] = unk_0x36F2404464202779(0x0000001A, iLocal_81, vLocal_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], 0x00000001, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_52[iLocal_58], 0x00000001);
		unk_0x20EC6650986ACDC7(iLocal_52[iLocal_58], 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_52[iLocal_58], 0x00000000, 0x00000001);
		unk_0xBAFED2F6486F771A(iLocal_52[iLocal_58], 0x00000002, 0x00000000);
		unk_0xBAFED2F6486F771A(iLocal_52[iLocal_58], 0x00000080, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_52[iLocal_58], 0x0000002A, 0x00000001);
		unk_0x3CC33E4E9CE523F4(iLocal_52[0x00000000], 0x00000002);
		unk_0xAFF39FB306F8E232(iLocal_52[0x00000000], 0x00000032, 0x00000001);
		unk_0x29CD9554726C7577(iLocal_52[iLocal_58], 0x00000032);
		unk_0x298903DD96203C2C(iLocal_52[iLocal_58], 0x0000000D);
		unk_0xE8832A9E16A57A1F(iLocal_52[iLocal_58], 0x00000001, 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_52[iLocal_58], iLocal_136);
		unk_0x6D80F1AEBA734886(iLocal_52[iLocal_58], unk_0x09AC81E49EA267F7(0x00000320, 0x000007D0));
		iLocal_58++;
	}
	unk_0x71199B01895C6202(iLocal_82);
	unk_0x71199B01895C6202(iLocal_81);
	unk_0x29CD9554726C7577(iLocal_52[0x00000001], 0x00000064);
	unk_0xAA714ADDDC372E0F(iLocal_52[0x00000001], 0xD6FF6D61);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_136, 0x6F0783F5);
	unk_0x262EF6C6306BEA6C(iLocal_52[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
	unk_0x262EF6C6306BEA6C(iLocal_52[0x00000001], joaat("weapon_sawnoffshotgun"), 0xFFFFFFFF, 0x00000000, 0x00000001);
	iLocal_54 = unk_0x122AAB0B1D6F55AD(iLocal_83, vLocal_74, fLocal_79, 0x00000001, 0x00000001, 0x00000000);
	unk_0xB9FD7450C0DAB575(iLocal_54, 0x40A00000);
	unk_0x0882E3DC0C991680(iLocal_54, 0x00000003);
	unk_0x611DFA9294B339CA(iLocal_54, 0x00000005, 0x00000000, 0x00000000);
	unk_0x71199B01895C6202(iLocal_83);
	iLocal_56 = unk_0x7707E48765093646(joaat("prop_ld_shovel"), vLocal_85, 0x00000001, 0x00000001, 0x00000000);
	unk_0x71199B01895C6202(joaat("prop_ld_shovel"));
	iLocal_57[0x00000000] = unk_0x7707E48765093646(joaat("p_arm_bind_cut_s"), vLocal_85, 0x00000001, 0x00000001, 0x00000000);
	iLocal_57[0x00000001] = unk_0x7707E48765093646(joaat("p_arm_bind_cut_s"), vLocal_85 + Vector(1f, 1f, 1f), 0x00000001, 0x00000001, 0x00000000);
	unk_0x523BCC9DC80CD82F(joaat("p_arm_bind_cut_s"));
	unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_52[0x00000000], unk_0x4A089F2B762B8D33(iLocal_52[0x00000000], 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0x00000000], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0x00000000], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0x00000000], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0x00000001], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0x00000001], 0x00000003, 0x00000002, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0x00000001], 0x00000004, 0x00000001, 0x00000001, 0x00000000);
	vVar0 = { vLocal_72 };
	vVar1 = { -2f, -4f, 18f };
	iLocal_303 = unk_0xE9744DB7B8CA6965(vVar0, vVar1, 0x00000002);
	unk_0x915804B434753CBD(iLocal_51, iLocal_303, "random@burial", "b_burial", 4f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
	unk_0xE14EC663EED44AD5(iLocal_57[0x00000000], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0x00000000, 0x447A0000);
	unk_0xE14EC663EED44AD5(iLocal_57[0x00000001], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0x00000000, 0x447A0000);
	unk_0xC90224D9E95E5E3A(iLocal_303, 0x00000001);
	unk_0xFADC0A217229F6B5(iLocal_51, 0x00000001);
	unk_0xC6EB89C59F2AF6B8(iLocal_52[0x00000000], "random@burial", "a_burial", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(iLocal_52[0x00000001], "random@burial", "c_burial", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x17EAEF3CBDBACF1B(iLocal_52[0x00000000], vLocal_75, vLocal_76, 2.75f, 0x00000000, 0x00000000);
	unk_0x17EAEF3CBDBACF1B(iLocal_52[0x00000001], vLocal_75, vLocal_76, 2.75f, 0x00000000, 0x00000000);
	if (func_45() == 0x00000000)
	{
		func_141(&uLocal_138, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	else if (func_45() == 0x00000001)
	{
		func_141(&uLocal_138, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	else if (func_45() == 0x00000002)
	{
		func_141(&uLocal_138, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	unk_0x4F39CC3882DD074E(iLocal_52[0x00000000], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x4F39CC3882DD074E(iLocal_52[0x00000001], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x4F39CC3882DD074E(iLocal_51, "KIDNAPPEDFEMALE");
	func_141(&uLocal_138, 0x00000004, iLocal_52[0x00000000], "KIDNAPPER2", 0x00000000, 0x00000001);
	func_141(&uLocal_138, 0x00000003, iLocal_52[0x00000001], "KIDNAPPER1", 0x00000000, 0x00000001);
	func_141(&uLocal_138, 0x00000005, iLocal_51, "KIDNAPPEDFEMALE", 0x00000000, 0x00000001);
}

void func_141(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 0x00000002, 0x00000001))
		{
			func_148(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_149(iParam0, 0x00000002, 0x00000001))
	{
		func_143(iParam0, 0x00000002, 0x00000001);
	}
}

void func_143(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0x00000000)
		{
			iVar0 = func_146(func_147(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_144(func_147(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_23();
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

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_145(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_147(int iParam0)
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

void func_148(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0x00000000)
		{
			iVar0 = func_146(func_147(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_144(func_147(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_146(func_147(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_150()
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

void func_151()
{
	unk_0x523BCC9DC80CD82F(iLocal_80);
	unk_0x523BCC9DC80CD82F(iLocal_82);
	unk_0x523BCC9DC80CD82F(iLocal_81);
	unk_0x523BCC9DC80CD82F(iLocal_83);
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_shovel"));
	unk_0x523BCC9DC80CD82F(joaat("p_arm_bind_cut_s"));
	unk_0x3F423BF5B8125A50("random@burial");
	unk_0x9E5E60D8C63FD9D1();
	unk_0xAE317D00A5A55DF6("ROPE_CUT", 0x00000000, 0xFFFFFFFF);
	unk_0x13896FDECC859926("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0xB87F6CF6E5628C67(iLocal_80) && unk_0xB87F6CF6E5628C67(iLocal_82)) && unk_0xB87F6CF6E5628C67(iLocal_81)) && unk_0xB87F6CF6E5628C67(iLocal_83)) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_shovel"))) && unk_0xB87F6CF6E5628C67(joaat("p_arm_bind_cut_s"))) && unk_0xB4AE0788C1587752("random@burial")) && unk_0x25F7A4D42AF2AB93()) && unk_0xAE317D00A5A55DF6("ROPE_CUT", 0x00000000, 0xFFFFFFFF)) && unk_0x13896FDECC859926("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = 0x00000001;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_80);
		unk_0x523BCC9DC80CD82F(iLocal_82);
		unk_0x523BCC9DC80CD82F(iLocal_81);
		unk_0x523BCC9DC80CD82F(iLocal_83);
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_shovel"));
		unk_0x523BCC9DC80CD82F(joaat("p_arm_bind_cut_s"));
		unk_0x3F423BF5B8125A50("random@burial");
		unk_0x9E5E60D8C63FD9D1();
		unk_0xAE317D00A5A55DF6("ROPE_CUT", 0x00000000, 0xFFFFFFFF);
		unk_0x13896FDECC859926("RE6_BOTH_DEAD_OS");
	}
}

void func_152()
{
	iLocal_80 = joaat("u_f_y_mistress");
	iLocal_81 = joaat("a_m_m_salton_01");
	iLocal_82 = joaat("a_m_m_salton_01");
	iLocal_83 = joaat("bison");
	vLocal_72 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_77 = 0f;
	vLocal_73[0x00000000 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_78[0x00000000] = 297.0056f;
	vLocal_73[0x00000001 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_78[0x00000001] = 193.3866f;
	vLocal_74 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_79 = 265.6862f;
	vLocal_75 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_76 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_60 = 0x00000001;
}

int func_153()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_44) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_164())
		{
			return 0x00000000;
		}
	}
	if (func_160())
	{
		return 0x00000001;
	}
	if (func_154(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_154(float fParam0, bool bParam1)
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
		if (func_33(func_45()))
		{
			iVar5 = func_30();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_155(iVar1, &Var0);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_156(uParam1, "Barry1", func_158(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_156(uParam1, "Barry2", func_158(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_156(uParam1, "Barry3", func_158(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_156(uParam1, "Barry3A", func_158(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_156(uParam1, "Barry3C", func_158(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_156(uParam1, "Barry4", func_158(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_156(uParam1, "Hao1", func_158(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_156(uParam1, "Josh1", func_158(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_156(uParam1, "Josh2", func_158(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_156(uParam1, "Josh3", func_158(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_156(uParam1, "Josh4", func_158(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_156(uParam1, "Maude1", func_158(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_156(uParam1, "Minute1", func_158(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_156(uParam1, "Minute2", func_158(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_156(uParam1, "Minute3", func_158(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_156(uParam1, "Omega1", func_158(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_156(uParam1, "Omega2", func_158(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_157(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_157(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 0x00000001;
	}
	if (func_162() && func_161())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_161()
{
	return Global_1B2FC > 0x00000000;
}

int func_162()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_163()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_164()
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

int func_165()
{
	if (!func_125(0x00000005))
	{
		return 0x00000001;
	}
	if (func_160())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_164())
		{
			return 0x00000000;
		}
	}
	if (func_154(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_166()
{
	if ((Global_1B40B == func_40() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_167(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_40();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_169(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_168();
}

void func_168()
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

void func_169(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_170(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		if (!func_211())
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
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_164())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_16(0x00000000))
		{
			return 0x00000000;
		}
		if (func_160())
		{
			return 0x00000000;
		}
		if (func_210())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_33(func_45()))
		{
			if (func_154(100f, 0x00000001) != 0xFFFFFFFF)
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
		if (!func_209(iParam1))
		{
			return 0x00000000;
		}
		if (func_33(func_45()))
		{
			if (func_208(func_45()) == 0x00000004 || func_208(func_45()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_207(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_206(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_205())
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
		if (!func_196(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_125(0x00000005))
		{
			return 0x00000000;
		}
		if (func_195(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_195(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_209(0x0000001E) && !func_195(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_194(iVar4))
				{
					if (func_172(iVar2))
					{
						if (!func_171(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_45() != iVar2)
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

bool func_171(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_173(iVar0);
}

int func_173(int iParam0)
{
	return func_174(iParam0, 0x00000001);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(iParam0))
	{
		return 0x00000000;
	}
	func_175(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185(iParam1);
		iVar1 = func_183(iParam0);
		iVar2 = (func_183(iParam0) - func_183(iParam1));
		iVar3 = (func_185(iParam0) - func_185(iParam1));
		iVar4 = (func_182(iParam0) - func_182(iParam1));
		iVar5 = (func_181(iParam0) - func_181(iParam1));
		iVar6 = (func_180(iParam0) - func_180(iParam1));
		iVar7 = (func_179(iParam0) - func_179(iParam1));
	}
	else
	{
		iVar0 = func_185(iParam0);
		iVar1 = func_183(iParam1);
		iVar2 = (func_183(iParam1) - func_183(iParam0));
		iVar3 = (func_185(iParam1) - func_185(iParam0));
		iVar4 = (func_182(iParam1) - func_182(iParam0));
		iVar5 = (func_181(iParam1) - func_181(iParam0));
		iVar6 = (func_180(iParam1) - func_180(iParam0));
		iVar7 = (func_179(iParam1) - func_179(iParam0));
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
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_177(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2)
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

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_180(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_181(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_182(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_183(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_184(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(iParam1) || !func_194(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_187()
{
	var uVar0;
	
	func_193(&uVar0, unk_0x4460E481B9E33ADA());
	func_192(&uVar0, unk_0x8D199E381D262EEF());
	func_191(&uVar0, unk_0xD8A54335F18763BA());
	func_190(&uVar0, unk_0x972A296334C9D57B());
	func_189(&uVar0, unk_0x118229AD063C3C1D());
	func_188(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_194(int iParam0)
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
	iVar0 = func_179(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_180(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_183(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_185(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_182(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_195(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_45();
				if (!func_33(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_204()) || Global_1B05D) || Global_7832) || func_203()) || func_84(0x00000008, 0xFFFFFFFF)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_204()) || Global_7832) || func_203()) || func_84(0x00000008, 0xFFFFFFFF)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_204()) || Global_1B05D) || Global_7832) || func_203()) || func_84(0x00000008, 0xFFFFFFFF)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_204()) || Global_1B05D) || Global_7832) || func_203()) || func_84(0x00000008, 0xFFFFFFFF)) || func_202()) || func_201()) || func_199()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_204() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_84(0x00000008, 0xFFFFFFFF)) || func_199()) || func_198()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_84(0x00000008, 0xFFFFFFFF) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_204()) || Global_7832) || func_203()) || func_84(0x00000008, 0xFFFFFFFF)) || func_201()) || func_200()) || func_199()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_204()) || func_201()) || Global_1B05D) || Global_7832) || func_203()) || Global_A664) || func_84(0x00000008, 0xFFFFFFFF)) || func_200()) || func_198()) || func_199()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_204()) || Global_1B05D) || Global_7832) || func_203()) || func_84(0x00000008, 0xFFFFFFFF)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_181DF.f_1;
}

int func_198()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_199()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_200()
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

bool func_201()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_202()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_203()
{
	return Global_14086D;
}

int func_204()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_205()
{
	func_82();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_206(int iParam0)
{
	return func_186(func_187(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_45();
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

int func_208(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_209(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_211())
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

int func_210()
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

int func_211()
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

void func_212()
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_225(0x00000000);
		unk_0xB547E3FFEB27073E();
		unk_0x38DC636F3D2D2FA8("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_7921)
			{
				unk_0xC92DB9682A650680("AC_STOP");
			}
			else
			{
				unk_0xC92DB9682A650680("RE6_END");
			}
		}
		func_224();
		unk_0x0E2400AB9174FA81(0x000000FF, iLocal_137, 0x6F0783F5);
		unk_0x0E2400AB9174FA81(0x000000FF, 0x6F0783F5, iLocal_137);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
			{
				unk_0x4E885A246A9D983A(iLocal_51, 0x0000013D, 0x00000001);
				if (!unk_0x405E212DDE472467(iLocal_51, 0x00000000))
				{
					unk_0x61F0DE0226FF7252(iLocal_51);
				}
				if (unk_0x16102BEDC7435774(iLocal_51))
				{
					unk_0x0A94A109271BE75A(iLocal_51);
				}
				unk_0x11AD11297DC58CC7(iLocal_51, 0x00000000);
				unk_0x25C5402CC10F76CD(iLocal_51, 0x00000001);
			}
			else if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000))
			{
				unk_0xA86D71B57C84C089(iLocal_51, 0x00000001);
				unk_0xF20820358777D05E(iLocal_51, 0x00000001);
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_52)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x2ECF845953E95D1B(iLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_52[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_52[iVar0], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					func_110();
				}
				unk_0xFADC0A217229F6B5(iLocal_52[iVar0], 0x00000001);
			}
			iVar0++;
		}
		unk_0xF690C84DADBB3551(&(iLocal_57[0x00000000]));
		unk_0xF690C84DADBB3551(&(iLocal_57[0x00000001]));
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			unk_0x046C362CF15F1935(&iLocal_54);
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			if (unk_0xD59B17D2DFF98E26(iLocal_56))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_56, 0x00000001, 0x00000001);
			}
			unk_0xEEEE2E5FA6F78DF0(&iLocal_56);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			unk_0x142CC44DB769B57E(&iLocal_123);
		}
		iLocal_58 = 0x00000000;
		while (iLocal_58 <= 0x00000001)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_88))
		{
			unk_0x142CC44DB769B57E(&iLocal_88);
		}
		if (unk_0x9F4FE516EAACCFC5(iLocal_71))
		{
			unk_0x9A8DDC7C522F5BF5(iLocal_71, 0x00000000);
		}
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
		unk_0x51B096AAC60548C1(1f);
		unk_0xE342F209E49C5314(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0x00000001, 0x00000001);
	}
	func_213(0xFFFFFFFF);
	unk_0x10FAF14A60A0DBE1();
}

void func_213(int iParam0)
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
	if (func_166())
	{
		func_217(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_216(0x00007530);
		StringCopy(&cVar0, func_215(Global_1B40B, 0x00000001), 64);
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
	func_214(&Global_786B);
	Global_1B40C = 0x00000000;
	func_169(0xFFFFFFFF);
}

void func_214(var uParam0)
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

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0x00000000, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_181(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_182(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_185(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	iVar2 = func_182(*uParam0);
	iVar3 = func_181(*uParam0);
	iVar4 = func_180(*uParam0);
	iVar5 = func_179(*uParam0);
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
	iVar6 = func_178(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
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

void func_224()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

void func_225(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_142(iVar0, bParam0);
		iVar0++;
	}
}

