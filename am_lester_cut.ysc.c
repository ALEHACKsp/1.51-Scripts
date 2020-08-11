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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
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
	float fLocal_60 = 0f;
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
	struct<4> Local_73 = { 0, 0, 0, 0 } ;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 32;
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
	var uLocal_113 = 32;
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
	int iLocal_149 = 0;
	vector3 vLocal_150[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 16;
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
	bool bLocal_321 = 0;
	bool bLocal_322 = 0;
	int iLocal_323 = 0;
	char* sLocal_324 = NULL;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	struct<21> Local_335 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	bLocal_322 = 0x00000001;
	sLocal_324 = "MP_INTRO_MCS_13";
	func_232(ScriptParam_335);
	while (0x00000001)
	{
		func_231();
		if (func_221())
		{
			func_217();
		}
		func_212(&Global_195C0B);
		switch (func_211(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_210() == 0x00000002)
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 0x00000002;
				}
				else if (func_210() == 0x00000006)
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 0x00000005;
				}
				break;
			
			case 0x00000002:
				if (func_210() == 0x00000002)
				{
					if (!func_209(unk_0xD803B885F5E47A62()))
					{
						func_19();
					}
					else if (unk_0xE4EDC4B0E92C078B(Global_195C0B))
					{
						func_12();
						unk_0x661342B9651D16E2(Global_195C0B, 0x00000000);
						unk_0x142CC44DB769B57E(&Global_195C0B);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000003))
						{
							unk_0x5C8D148FC238F38A();
						}
						unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
					}
					if (func_8(unk_0xD803B885F5E47A62()))
					{
						vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
						Global_26B66F.f_6B5 = 0x00000000;
					}
				}
				else if (func_210() == 0x00000006)
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 0x00000005;
				}
				break;
			
			case 0x00000005:
				func_6(&(Local_73.f_3));
				if (func_5(&(Local_73.f_3)))
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 0x00000006;
				}
				break;
			
			case 0x00000003:
				vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 0x00000006;
			
			case 0x00000006:
				func_217();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_210())
			{
				case 0x00000000:
					Local_73.f_2 = 0xFFFFFFFF;
					Local_73 = 0x00000002;
					break;
				
				case 0x00000002:
					func_3();
					func_2();
					if (func_1())
					{
						Local_73 = 0x00000006;
					}
					break;
				
				case 0x00000006:
					break;
				}
		}
	}
}

int func_1()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2()
{
	if (unk_0xBFF81ED3B99522C7())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_149 == 0x00000000)
		{
			unk_0x0674E58A79778E99(&iLocal_323, 0x00000000);
			unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000001);
			if (Local_73.f_2 != 0xFFFFFFFF)
			{
				if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_2)))
				{
					Local_73.f_2 = 0xFFFFFFFF;
				}
			}
		}
		iVar0 = iLocal_149;
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_150[iLocal_149 /*3*/].f_2, 0x00000000))
			{
				unk_0x0674E58A79778E99(&iLocal_323, 0x00000001);
			}
			if (func_4(iVar1, 0x00000000, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_150[iLocal_149 /*3*/].f_2, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000C);
					if (Local_73.f_2 == 0xFFFFFFFF)
					{
						if (Local_73.f_2 != iLocal_149)
						{
							Local_73.f_2 = iLocal_149;
						}
					}
				}
				else if (Local_73.f_2 == iLocal_149)
				{
					Local_73.f_2 = 0xFFFFFFFF;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 == 0x00000020)
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000000);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000C))
			{
				if (Local_73.f_2 != 0xFFFFFFFF)
				{
					Local_73.f_2 = 0xFFFFFFFF;
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000000);
			iLocal_149 = 0x00000000;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 0x000003E8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_7(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

int func_8(int iParam0)
{
	if (func_11(iParam0))
	{
		return 0x00000001;
	}
	if (func_9(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_10(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

void func_12()
{
	if (!func_18())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_13();
}

void func_13()
{
	func_15();
	func_14(0x00000000);
}

void func_14(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_15()
{
	if (!func_17())
	{
	}
	if (func_18())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_16();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_16()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_17()
{
	if (!func_18())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_16();
	return unk_0xB165082A56EE6E7F();
}

int func_18()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_19()
{
	int iVar0;
	
	switch (vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000005))
				{
					if (!func_208())
					{
						if (!func_207())
						{
							if (!func_205())
							{
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
								{
									if (!func_204(0x00000000))
									{
										if (!func_201(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
										{
											if (!func_200())
											{
												if (func_199() == 0x00000000)
												{
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
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000005))
			{
				if (((((func_201(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_200()) || func_199() > 0x00000000) || func_198()) || func_196()) || func_195())
				{
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000005);
					func_12();
					if (unk_0xE4EDC4B0E92C078B(Global_195C0B))
					{
						unk_0x661342B9651D16E2(Global_195C0B, 0x00000000);
						unk_0x142CC44DB769B57E(&Global_195C0B);
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(Global_195C0B))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000E))
						{
							if (Local_73.f_2 != 0xFFFFFFFF)
							{
								if (Local_73.f_2 != unk_0x57270EE11514DC67())
								{
									unk_0x61755AC17D8F538E(Global_195C0B, 0x00000027);
									unk_0x516E63E474722206(Global_195C0B, 0.7f);
									unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000E);
								}
							}
						}
						else if (Local_73.f_2 == 0xFFFFFFFF || Local_73.f_2 == unk_0x57270EE11514DC67())
						{
							unk_0x61755AC17D8F538E(Global_195C0B, 0x00000000);
							unk_0x516E63E474722206(Global_195C0B, 1f);
							unk_0x0674E58A79778E99(&iLocal_323, 0x0000000E);
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000008))
					{
						unk_0x0674E58A79778E99(&iLocal_323, 0x00000008);
					}
					if (func_194())
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							if ((bLocal_321 && unk_0x62A1F4500E8F07E0()) || !bLocal_321)
							{
								if (!unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000001))
								{
									unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000001);
								}
								if (unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000001))
								{
									if (Local_73.f_2 == unk_0x57270EE11514DC67())
									{
										func_12();
										if (unk_0xE4EDC4B0E92C078B(Global_195C0B))
										{
											unk_0x661342B9651D16E2(Global_195C0B, 0x00000000);
											unk_0x142CC44DB769B57E(&Global_195C0B);
										}
										unk_0xA37A90C62806D848(0x00000001);
										func_193(0x0000000C, 0x00000001);
										func_191();
										unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
										unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000019);
										unk_0x536F1BE96C726C4B(1274.854f, -1721.154f, 53.6808f, 2f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
										if (bLocal_322)
										{
											func_190();
											iLocal_331 = unk_0xB01F55A0FD1CFD49("SECURITY_CAM");
										}
										vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000001;
									}
									else if (Local_73.f_2 != 0xFFFFFFFF)
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000D))
										{
											if (func_184(0x00000001, 0x00000001, 0x00000001, 0x00000001))
											{
												func_183("FM_LCUT_LRB", 0xFFFFFFFF);
												unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000D);
											}
										}
									}
								}
							}
						}
						else if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (!func_182("FM_LCUT_LCP"))
							{
								func_183("FM_LCUT_LCP", 0xFFFFFFFF);
							}
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000009))
						{
							if (func_184(0x00000000, 0x00000001, 0x00000001, 0x00000001))
							{
								if (!func_198())
								{
									func_183("FM_LCUT_LBLP", 0xFFFFFFFF);
									if (!unk_0xE4EDC4B0E92C078B(Global_195C0B))
									{
										Global_195C0B = unk_0x6CC513A908911CF0(Global_195C0C);
										unk_0xBC8E0A7390523199(Global_195C0B, 0x0000004D);
										unk_0xF412DD40DE84CE72(Global_195C0B, 0x00000001);
										unk_0x0EC848EFF66DF45A(Global_195C0B, 0x00001B58);
									}
									unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000002);
									unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000009);
								}
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000001))
						{
							unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000001);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000D))
						{
							unk_0x0674E58A79778E99(&iLocal_323, 0x0000000D);
						}
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (unk_0x0F1CCD77290EE12F())
					{
						if ((((!func_201(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !func_200()) && func_199() == 0x00000000) && !func_198()) && !func_196())
						{
							if (!func_181(&uLocal_326))
							{
								func_7(&uLocal_326, 0x00000000, 0x00000000);
							}
							else if (func_180(&uLocal_326, 0x0000000A, 0x00000000))
							{
								unk_0x0674E58A79778E99(&iLocal_323, 0x00000005);
								unk_0x0674E58A79778E99(&iLocal_323, 0x00000002);
								unk_0x0674E58A79778E99(&iLocal_323, 0x00000003);
								unk_0x0674E58A79778E99(&iLocal_323, 0x00000008);
								func_179(&uLocal_326);
								if (!unk_0xE4EDC4B0E92C078B(Global_195C0B))
								{
									Global_195C0B = unk_0x6CC513A908911CF0(Global_195C0C);
									unk_0xBC8E0A7390523199(Global_195C0B, 0x0000004D);
								}
							}
						}
					}
				}
			}
			if (bLocal_321)
			{
			}
			break;
		
		case 0x00000001:
			if (bLocal_321)
			{
				if (func_178())
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000002;
				}
			}
			else if (func_138())
			{
				vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_83())
			{
				vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
			}
			break;
	}
	if (func_82())
	{
		if (unk_0xE4EDC4B0E92C078B(Global_195C0B))
		{
			unk_0x142CC44DB769B57E(&Global_195C0B);
		}
		func_12();
		iVar0 = Global_152E10[func_81(0xFFFFFFFF)];
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
		unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
		func_80(0x00000517, iVar0, 0xFFFFFFFF, 0x00000001);
		func_193(0x0000000C, 0x00000000);
		if (bLocal_321)
		{
			unk_0x5C8D148FC238F38A();
		}
		func_71();
		func_20(0x00000001);
	}
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1406C0)
	{
		if (!func_70())
		{
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000008)
			{
				Global_1806ED[iVar0] = 0x00000000;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_67(unk_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_65(iVar1, bParam0);
	if (!func_64(0xFFFFFFFF))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000008)
		{
			Global_1806ED[iVar0] = 0x00000000;
			iVar0++;
		}
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Global_1806ED[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar4 = 0x00000000;
	while (iVar4 <= 0x000000FF)
	{
		iVar3 = func_63(iVar4);
		if (iVar2 >= iVar3 && iVar3 != 0xFFFFFFFF)
		{
			if (func_61(iVar4))
			{
				func_53(iVar4, 0x00000001);
			}
		}
		iVar4++;
	}
	func_47(func_48(0x0000003B, 0x00000000, 0x00000000), 0x00000000);
	func_42(func_48(0x00000087, 0x00000000, 0x00000000), 0x00000001);
	func_40(func_48(0x00000016, 0x00000000, 0x00000000), func_48(0x00000049, 0x00000000, 0x00000000));
	if (func_70())
	{
		if (func_39(0x0000004D, 0xFFFFFFFF))
		{
			func_38(0x00000001);
			func_37(0x00000001);
		}
	}
	if (func_36() || func_35())
	{
		func_33(0x0000004D, 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (unk_0x8CD06866876216F2())
		{
			func_21(0x0000001C, 0x00000001, 0x00000000);
			func_21(0x0000001D, 0x00000001, 0x00000000);
			func_21(0x0000001E, 0x00000001, 0x00000000);
			func_21(0x0000001F, 0x00000001, 0x00000000);
			func_21(0x00000020, 0x00000001, 0x00000000);
			func_21(0x00000021, 0x00000001, 0x00000000);
			func_21(0x00000022, 0x00000001, 0x00000000);
			func_21(0x00000023, 0x00000001, 0x00000000);
			func_21(0x00000024, 0x00000001, 0x00000000);
			func_21(0x00000025, 0x00000001, 0x00000000);
			func_21(0x00000026, 0x00000001, 0x00000000);
		}
	}
	if (func_48(0x00000015, 0x00000000, 0x00000000))
	{
		unk_0x0F30FBDF741A7E3E(0x00000000);
	}
	Global_EC6CF = 0x00000000;
}

void func_21(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0x00000000, 0x00000000))
		{
			if (iParam2 && Global_181EC.f_12[iParam0])
			{
				if (func_31(iParam0) == 0x00000003 && !func_30(iParam0))
				{
					func_29(iParam0);
					func_28(iParam0, 0x00000000, 0x00000000);
					func_23(iParam0, 0x00000001, 0x00000000);
					func_22(iParam0);
				}
				else
				{
					func_28(iParam0, 0x00000001, 0x00000000);
					func_22(iParam0);
				}
			}
			else
			{
				func_28(iParam0, 0x00000000, 0x00000000);
				func_23(iParam0, 0x00000001, 0x00000000);
				func_22(iParam0);
			}
		}
		else
		{
			func_23(iParam0, 0x00000001, 0x00000000);
			func_22(iParam0);
		}
	}
	else if (func_32(iParam0, 0x00000000, 0x00000000))
	{
		func_23(iParam0, 0x00000000, 0x00000000);
		func_23(iParam0, 0x00000001, 0x00000000);
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_23(int iParam0, int iParam1, bool bParam2)
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
		if (func_27() == 0x00000000)
		{
			iVar0 = func_25(func_26(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_81(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_26(int iParam0)
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

int func_27()
{
	return Global_7830;
}

void func_28(int iParam0, int iParam1, bool bParam2)
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
		if (func_27() == 0x00000000)
		{
			iVar0 = func_25(func_26(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_29(int iParam0)
{
	if (Global_181EC.f_12[iParam0])
	{
		func_28(iParam0, 0x0000000A, 0x00000001);
		func_28(iParam0, 0x00000013, 0x00000001);
	}
}

bool func_30(int iParam0)
{
	return func_32(iParam0, 0x00000005, 0x00000001);
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
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
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

int func_32(int iParam0, int iParam1, bool bParam2)
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
		if (func_27() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_25(func_26(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_81(iParam2)];
		if (iVar0 != 0x00000000)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_34()
{
	return 0x00000001;
	return 0x00000000;
}

bool func_35()
{
	return Global_140861;
}

bool func_36()
{
	return Global_140863;
}

void func_37(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_21(0x0000001C, bParam0, 0x00000000);
	func_21(0x0000001E, bParam0, 0x00000000);
	func_21(0x0000001F, bParam0, 0x00000000);
	func_21(0x00000021, bParam0, 0x00000000);
	func_21(0x00000022, bParam0, 0x00000000);
	func_21(0x00000026, bParam0, 0x00000000);
}

void func_38(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_21(0x0000001D, bParam0, 0x00000000);
	func_21(0x00000020, bParam0, 0x00000000);
	func_21(0x00000024, bParam0, 0x00000000);
	func_21(0x00000023, bParam0, 0x00000000);
	func_21(0x00000025, bParam0, 0x00000000);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = 0x00000001;
	if (bParam0)
	{
		bVar0 = 0x00000000;
	}
	func_21(0x00000000, bParam0, 0x00000001);
	func_21(0x00000001, bParam0, 0x00000001);
	func_21(0x00000002, bParam0, 0x00000001);
	func_21(0x00000003, bParam0, 0x00000001);
	func_21(0x00000004, bParam0, 0x00000001);
	func_21(0x00000005, bParam0, 0x00000001);
	func_21(0x00000006, bParam0, 0x00000001);
	func_21(0x00000007, bParam0, bVar0);
	func_21(0x00000008, bParam0, 0x00000001);
	func_21(0x00000009, bParam0, 0x00000001);
	func_21(0x0000000A, bParam0, 0x00000001);
	func_21(0x0000000B, bParam0, 0x00000001);
	func_21(0x0000000C, bParam0, bVar0);
	func_21(0x0000000D, bParam0, 0x00000001);
	func_21(0x00000015, bParam0, 0x00000001);
	func_21(0x0000000E, bParam0, 0x00000001);
	func_21(0x0000000F, bParam0, 0x00000001);
	func_21(0x00000010, bParam0, 0x00000001);
	func_21(0x00000011, bParam0, 0x00000001);
	func_21(0x00000012, bParam0, 0x00000001);
	func_21(0x00000013, bParam0, 0x00000001);
	func_21(0x00000014, bParam0, 0x00000001);
	func_21(0x00000016, bParam0, 0x00000001);
	func_21(0x00000017, bParam0, 0x00000001);
	func_21(0x00000018, bParam0, 0x00000001);
	func_21(0x00000019, bParam0, 0x00000001);
	func_21(0x0000001A, bParam0, 0x00000001);
	func_21(0x0000001B, bParam0, 0x00000001);
	func_41(0x00000001, !bParam1);
	if (!bVar0)
	{
		func_29(0x0000000C);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_181EC.f_9[iParam0] = 0x00000001;
	}
	else
	{
		Global_181EC.f_9[iParam0] = 0x00000000;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_46(0x00000000);
	if (Global_40001.f_3F == 0x00000001 && func_48(0x00000087, 0x00000000, 0x00000000))
	{
		bParam0 = 0x00000001;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(0x0000002C, bParam0, 0x00000000);
	}
	if (bParam1)
	{
		if (!func_30(0x0000002C))
		{
			func_29(0x0000002C);
		}
	}
	if (bParam0)
	{
		if (func_43(0x00000000) > 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C7), 0x0000000A);
		}
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (Global_19823F[iParam0 /*8*/] == 0xFFFFFFFF)
	{
		iVar0 = func_25(func_45(iParam0), 0xFFFFFFFF, 0x00000000);
		if (iVar0 == 0xFFFFFFFF)
		{
			func_44(iParam0, 0x00000000);
			iVar0 = 0x00000000;
		}
		Global_19823F[iParam0 /*8*/] = iVar0;
	}
	return Global_19823F[iParam0 /*8*/];
}

void func_44(int iParam0, int iParam1)
{
	Global_19823F[iParam0 /*8*/] = iParam1;
	func_24(func_45(iParam0), iParam1, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000026FA;
		
		default:
	}
	return 0x000026FA;
}

int func_46(bool bParam0)
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6BE, 0x0000001A))
		{
			iVar0 = func_25(0x000004A7, 0xFFFFFFFF, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000017))
			{
				return 0x00000000;
			}
		}
	}
	return func_39(0x0000007A, 0xFFFFFFFF);
}

void func_47(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_46(0x00000000);
	func_21(0x00000027, bParam0, 0x00000000);
	func_21(0x00000028, bParam0, 0x00000000);
	func_21(0x00000029, bParam0, 0x00000000);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(0x0000002B, bParam0, 0x00000000);
		func_21(0x0000002A, bParam0, 0x00000000);
	}
	if (bParam1)
	{
		if (!func_30(0x00000027))
		{
			func_29(0x00000027);
		}
		if (!func_30(0x00000028))
		{
			func_29(0x00000028);
		}
		if (!func_30(0x00000029))
		{
			func_29(0x00000029);
		}
		if (!func_30(0x0000002A))
		{
			func_29(0x0000002A);
		}
		if (!func_30(0x0000002B))
		{
			func_29(0x0000002B);
		}
	}
}

bool func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1E06 == 0x00000001)
	{
		if (iParam0 == 0x00000043)
		{
			return 0x00000001;
		}
		if (iParam0 == 0x0000004A)
		{
			return 0x00000001;
		}
		if (func_50(unk_0xD803B885F5E47A62(), 0x00000055))
		{
			if (((((iParam0 == 0x00000040 || iParam0 == 0x0000004D) || iParam0 == 0x0000003D) || iParam0 == 0x00000051) || iParam0 == 0x0000003F) || iParam0 == 0x0000003E)
			{
				return 0x00000001;
			}
		}
		if ((((((((((iParam0 == 0x00000042 || iParam0 == 0x00000074) || iParam0 == 0x00000067) || iParam0 == 0x00000068) || iParam0 == 0x00000069) || iParam0 == 0x00000077) || iParam0 == 0x00000058) || iParam0 == 0x0000004B) || iParam0 == 0x0000005F) || iParam0 == 0x00000041) || iParam0 == 0x00000062)
		{
			return 0x00000001;
		}
	}
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000001F)
	{
		if (Global_40001.f_126E == 0x00000001)
		{
			return 0x00000001;
		}
	}
	if (func_36() || func_35())
	{
		return 0x00000001;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 0x00000020);
	iVar0 = (iVar0 % 0x00000020);
	if (bParam1)
	{
		if (iParam0 == 0x00000003)
		{
			if (func_49())
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (bParam2)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1806ED[iVar1], iVar0);
}

int func_49()
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000017))
	{
		return 0x00000001;
	}
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_81(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000017);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_70())
	{
		return 0x00000000;
	}
	if (func_52())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000056)
	{
		return 0x00000001;
	}
	uVar0 = func_51(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_2DA, iVar1);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000056:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000001;
		
		case 0x0000000C:
			return 0x00000002;
		
		case 0x0000001F:
			return 0x00000003;
		
		case 0x00000014:
			return 0x00000004;
		
		case 0x00000012:
			return 0x00000005;
		
		case 0x00000002:
			return 0x00000006;
		
		case 0x0000004C:
			return 0x00000007;
		
		case 0x00000016:
			return 0x00000008;
		
		case 0x00000035:
			return 0x00000009;
		
		case 0x00000022:
			return 0x0000000A;
		
		case 0x00000098:
			return 0x0000000B;
		
		case 0x00000055:
			return 0x0000000C;
		
		case 0x00000054:
			return 0x0000000D;
		
		case 0x00000000:
			return 0x0000000E;
		
		case 0x00000001:
			return 0x0000000F;
		
		case 0x00000099:
			return 0x00000010;
		
		case 0x00000097:
			return 0x00000011;
		
		case 0x0000000E:
			return 0x00000012;
		
		case 0x0000000F:
			return 0x00000013;
		
		case 0x00000018:
			return 0x00000014;
		
		case 0x0000001E:
			return 0x00000015;
		
		case 0x0000002E:
			return 0x00000016;
		
		case 0x0000002F:
			return 0x00000017;
		
		case 0x00000036:
			return 0x00000018;
		
		case 0x00000033:
			return 0x00000019;
		
		case 0x0000003C:
			return 0x0000001A;
		
		case 0x0000003E:
			return 0x0000001B;
		
		case 0x00000042:
			return 0x0000001C;
		
		case 0x00000045:
			return 0x0000001D;
		
		case 0x0000009A:
			return 0x0000001E;
		
		case 0x00000052:
			return 0x0000001F;
		
		case 0x0000009D:
			return 0x00000020;
		
		default:
	}
	return 0x00000001;
}

bool func_52()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000003);
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		if (bParam1)
		{
			if (!func_60(0xFFFFFFFF))
			{
				if (!func_70())
				{
					return;
				}
			}
			if (!func_60(0xFFFFFFFF))
			{
				if (iParam0 == 0x0000001E)
				{
					if (!func_59() && !func_58())
					{
						return;
					}
				}
			}
			if (iParam0 == 0x0000003C)
			{
				if (!func_57())
				{
					return;
				}
			}
			if (iParam0 == 0x0000001D)
			{
				if (!func_60(0xFFFFFFFF))
				{
					if (!func_54())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 0x00000020);
		iVar0 = (iVar0 % 0x00000020);
		unk_0x5D96D8530B3D0904(&(Global_1806ED[iVar1]), iVar0);
	}
}

int func_54()
{
	int iVar0;
	
	if (func_209(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_81(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
	{
		func_55(0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000019))
		{
			func_56(unk_0xD803B885F5E47A62(), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000019);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000019))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000019);
	}
}

void func_56(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_51(iParam1);
	iVar1 = uVar0;
	unk_0x5D96D8530B3D0904(&(Global_184507[iParam0 /*876*/].f_2DA), iVar1);
}

int func_57()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000006))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_81(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000006))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000006);
		}
		return 0x00000001;
	}
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000007);
}

int func_59()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	return func_39(0x00000079, 0xFFFFFFFF);
}

bool func_60(int iParam0)
{
	return func_39(0x0000007B, iParam0);
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000017:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001E:
		case 0x00000008:
		case 0x00000020:
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000014:
		case 0x0000001B:
		case 0x0000001D:
		case 0x00000013:
		case 0x0000001F:
		case 0x0000003B:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000043:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x00000051:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005D:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x00000077:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
		case 0x00000080:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x0000009C:
		case 0x00000088:
		case 0x0000008A:
		case 0x00000089:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000094:
		case 0x00000087:
		case 0x00000082:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 0x00000020);
			iVar0 = func_25(func_62(iParam0), 0xFFFFFFFF, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iVar1))
			{
				return 0x00000001;
			}
			break;
		
		default:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 0x00000020);
	switch (iVar0)
	{
		case 0x00000000:
			return 0x000004B0;
		
		case 0x00000001:
			return 0x000004B1;
		
		case 0x00000002:
			return 0x000004B2;
		
		case 0x00000003:
			return 0x000004B3;
		
		case 0x00000004:
			return 0x000004B4;
		
		case 0x00000005:
			return 0x000004B6;
		
		case 0x00000006:
			return 0x00000EE7;
		
		case 0x00000007:
			return 0x00000FB2;
		
		case 0x00000008:
			return 0x00001560;
		
		default:
	}
	return 0x000004B0;
}

int func_63(int iParam0)
{
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000010:
		case 0x00000001:
		case 0x00000002:
		case 0x0000001C:
			return 0x00000001;
		
		case 0x00000015:
			return 0x00000002;
		
		case 0x00000016:
		case 0x00000012:
		case 0x00000011:
		case 0x00000049:
		case 0x0000001E:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000004C:
		case 0x0000000D:
		case 0x0000005A:
		case 0x00000000:
		case 0x00000063:
		case 0x00000005:
		case 0x00000020:
		case 0x0000007D:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000089:
		case 0x00000094:
		case 0x00000087:
		case 0x000000EC:
		case 0x00000096:
			if (!func_60(0xFFFFFFFF))
			{
				return 0x00000003;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
		case 0x00000066:
		case 0x0000006E:
		case 0x0000009C:
			return 0x00000005;
		
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000007A:
			return 0x00000006;
		
		case 0x00000061:
		case 0x0000006B:
			return 0x00000007;
		
		case 0x00000004:
			return 0x00000008;
		
		case 0x00000013:
			return 0x00000008;
		
		case 0x0000001D:
			return 0x0000000A;
		
		case 0x00000008:
			return 0x0000000B;
		
		case 0x0000003D:
		case 0x00000077:
		case 0x00000079:
		case 0x00000060:
		case 0x00000080:
			return 0x0000000C;
		
		case 0x00000059:
			return 0x0000000D;
		
		case 0x0000001F:
			return 0x0000000E;
		
		case 0x00000003:
		case 0x00000067:
		case 0x0000007C:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
			return 0x0000000F;
		
		case 0x0000006D:
		case 0x00000058:
			return 0x00000010;
		
		case 0x0000004A:
		case 0x00000064:
			return 0x00000011;
		
		case 0x00000006:
			return 0x00000012;
		
		case 0x00000014:
			return 0x00000013;
		
		case 0x0000003E:
		case 0x0000006C:
		case 0x00000082:
			return 0x00000014;
		
		case 0x00000041:
		case 0x0000005D:
			return 0x00000015;
		
		case 0x0000003F:
		case 0x00000068:
			return 0x00000019;
		
		case 0x0000004D:
		case 0x0000006A:
			return 0x0000001E;
		
		case 0x00000051:
		case 0x00000062:
			return 0x00000023;
		
		case 0x0000004B:
		case 0x0000005F:
			return 0x00000028;
		
		case 0x00000069:
			return 0x0000002D;
			break;
		
		case 0x00000043:
		case 0x00000040:
			return 0x00000032;
	}
	return 0xFFFFFFFF;
}

int func_64(int iParam0)
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	return func_39(0x00000077, iParam0);
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0, 0x00000000);
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_67(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_68(iParam0);
}

int func_68(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_81(0xFFFFFFFF)];
			}
			else if (func_69(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_81(0xFFFFFFFF)];
	}
	return 0x00000000;
}

int func_69(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

int func_70()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	return func_39(0x00000078, 0xFFFFFFFF);
}

void func_71()
{
	if (!func_79(0x00000001, 0xFFFFFFFF))
	{
		func_77(0x00000001, 0xFFFFFFFF);
	}
	if (func_198() && func_27() == 0x00000000)
	{
	}
	else
	{
		unk_0x45019D71A0DF8B62(0x00000000);
	}
	if (func_76(0x00000001))
	{
		unk_0xED41266DE64A57FD(0x00000001);
	}
	else
	{
		unk_0xED41266DE64A57FD(0x00000000);
	}
	Global_2564C8.f_283 = 0x00000000;
	if (func_72())
	{
		if (!func_39(0x00000085, 0xFFFFFFFF))
		{
			func_33(0x00000085, 0x00000001, 0xFFFFFFFF, 0x00000001);
		}
	}
}

int func_72()
{
	if (func_74() && func_73(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_73(int iParam0)
{
	return Global_140676[iParam0];
}

var func_74()
{
	return func_73(func_75() + 1);
}

int func_75()
{
	return Global_1407E9;
}

bool func_76(int iParam0)
{
	return Global_195CCB.f_10[iParam0 /*44*/].f_3;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_75();
	}
	Global_152D85 = 0x00000000;
	if (unk_0xE0DC536BD2AC0301() == 0x00000000)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xD5F10CECBB7D51B6(0x00000000, iParam1);
			iVar1 = func_78(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			break;
		
		default:
			iVar1 = func_78(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_33(0x00000078, 0x00000000, iParam1, 0x00000001);
			func_33(0x0000007C, 0x00000000, iParam1, 0x00000001);
			func_33(0x00000073, 0x00000000, iParam1, 0x00000001);
			func_33(0x00000077, 0x00000000, iParam1, 0x00000001);
			func_33(0x00000079, 0x00000000, iParam1, 0x00000001);
			func_33(0x0000007A, 0x00000000, iParam1, 0x00000001);
			func_33(0x0000007D, 0x00000000, iParam1, 0x00000001);
			func_24(0x00000517, 0x00000000, iParam1, 0x00000001, 0x00000000);
			func_24(0x00001C41, 0x00000000, iParam1, 0x00000001, 0x00000000);
			break;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_75();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000392;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000393;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000394;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000395;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000396;
			break;
	}
	return iVar0;
}

bool func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_75();
	}
	iVar0 = func_78(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_75();
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

int func_82()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_83()
{
	switch (iLocal_151)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000012))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
				{
					iLocal_325 = unk_0x5C3B41825F6AC5A0(iLocal_152);
					unk_0x321E019A46034F39(iLocal_325, 0x00000001);
					unk_0xDC5B2F9D0CCE3A10(iLocal_325, "FM_LEST_BLP");
					func_132("FM_LEST_GTL", 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000012);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000014))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1272.747f, -1715.223f, 53.45897f, 1273.732f, -1717.427f, 55.70897f, 2f, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_155 = unk_0xE9744DB7B8CA6965(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 0x00000002);
							unk_0x915804B434753CBD(iLocal_152, iLocal_155, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 0x00000005, 0x00000010, 0x447A0000, 0x00000000);
							unk_0xE14EC663EED44AD5(iLocal_154, iLocal_155, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 0x00000004, 0x447A0000);
							unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000014);
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000003))
			{
				unk_0xAE1670DD12E839C3(sLocal_324, 0x00000008);
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000003);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000A))
			{
				if (unk_0x75EECC9B0572F772())
				{
					unk_0xCB667BE6562FEBD1("MP_1", 0x00000000, 0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000A);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1275.095f, -1715.769f, 53.70897f, 1274.382f, -1714.219f, 56.02147f, 1.375f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000A))
					{
						iLocal_151++;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0x62A1F4500E8F07E0())
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == joaat("mp_f_freemode_01"))
					{
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_1", 0x00000000, 0x00000000, 0x00000040);
					}
					else
					{
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_1", 0x00000000, 0x00000000, 0x00000040);
					}
				}
				func_131(0x00000001);
				unk_0x4C902758BEA97C68(0x00000000);
				unk_0x7F2C3F971FA7A9EA(0x00000000);
				func_122(unk_0xD803B885F5E47A62(), 0x00000000, 0x00008004, 0x00000000);
				func_118(0x00000000);
				iLocal_151++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x22A8E52414415B76())
			{
				func_114();
				iLocal_151++;
			}
			break;
		
		case 0x00000003:
			if (unk_0x22A8E52414415B76())
			{
				func_113();
			}
			else
			{
				iLocal_151++;
			}
			break;
		
		case 0x00000004:
			if (iLocal_329)
			{
				if (!unk_0x39B7A3CCD2467CAB())
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(0x000001F4);
					}
					iLocal_329 = 0x00000000;
				}
			}
			else if (unk_0x154B5473FBFD0156())
			{
				func_86(0x00000001, 0x00000001, 0x00000000, 0x00000001);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x7F2C3F971FA7A9EA(0x00000001);
				if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000019))
				{
					unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
				}
				if (iLocal_328 != 0x00000000)
				{
					unk_0x25BB71BA267FE042(iLocal_328);
				}
				unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000001);
				func_84();
				iLocal_151++;
			}
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000B))
	{
		if (unk_0x3148AE92ED70DC30("MP_1", 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1275.219f, -1722.503f, 53.655f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 228.4235f);
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000B);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000001A))
	{
		if (iLocal_151 > 0x00000002)
		{
			if (unk_0xEABED1927EFB48CA(0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000001A);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000013))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000F, 0x00000001);
	}
	return 0x00000000;
}

void func_84()
{
	int iVar0;
	
	iVar0 = func_85(0x00000035);
	Global_24D752[iVar0 /*83*/] = 0x00000035;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000013;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000013)
	{
		if (Global_24D752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		else if (Global_24D752[iVar1 /*83*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		iVar1++;
	}
	return iVar0;
}

void func_86(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_111();
	if (bParam0)
	{
		func_109(0x00000001);
		unk_0xA37A90C62806D848(0x00000001);
	}
	unk_0x790015DC92C918E2();
	func_106();
	unk_0x4DC7B72197441408(0x00000000);
	func_102(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, bParam2);
	func_101();
	func_100(0x0000000C, 0x00000000, 0xFFFFFFFF);
	func_99(0x00000001);
	unk_0x5413873D3F67BF93(0x00000000, 0xFFFFFFFF);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	func_98();
	unk_0xBEF52C1D400C0A44(0x00000001);
	if (unk_0x8CD06866876216F2())
	{
		if (bParam3)
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0xF601BB024C8F11A7(0x00000000, 0x00000000);
			}
		}
	}
	func_131(0x00000000);
	if (((((func_198() == 0x00000000 && func_97() == 0x00000000) && iParam1) && !func_95(unk_0xD803B885F5E47A62())) && !unk_0xEB880D98B5988D0C()) && func_93())
	{
		func_122(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
	}
	Global_2537E2.f_EA3 = 0x00000000;
	func_87();
}

void func_87()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8CD06866876216F2() && func_181(&Global_26D966))
	{
		if (!func_180(&Global_26D966, 0x00000DAC, 0x00000001) || unk_0xFD59EF2472AF72AF(unk_0xD803B885F5E47A62()))
		{
			if (!func_92())
			{
				if (unk_0x757EF87A33649210())
				{
					func_91(&Global_26D966, 0x00000001, 0x00000000);
				}
				else if (!func_89(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x76CA4A8E) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x76CA4A8E) != 0x00000000)
					{
						unk_0x946CEAB3EE0FE12A(0x00000001);
						unk_0x0ADC5FFEF2329036(unk_0xD803B885F5E47A62(), 0x00000001);
					}
					unk_0x4FB9A846E72E2F23(unk_0x16F2683693E537C9(), 0x000000FF, 0x00000000);
				}
			}
			else
			{
				func_91(&Global_26D966, 0x00000001, 0x00000000);
			}
		}
		else
		{
			if (unk_0x8CD06866876216F2())
			{
				unk_0x672BED15BAF1B335(unk_0x16F2683693E537C9());
			}
			func_179(&Global_26D966);
		}
	}
	if (Global_26D96A > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_26D96A, iVar0))
			{
				iVar1 = unk_0x117658E336116132(iVar0);
				if (func_4(iVar1, 0x00000001, 0x00000001))
				{
					func_88(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_88(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26D96A, iParam0) && unk_0x8CD06866876216F2())
	{
		if (!func_180(&(Global_26D96B[iParam0 /*2*/]), 0x00000DAC, 0x00000001) || unk_0xFD59EF2472AF72AF(iParam0))
		{
			if (!func_92())
			{
				if (unk_0x757EF87A33649210())
				{
					func_91(&(Global_26D96B[iParam0 /*2*/]), 0x00000001, 0x00000000);
				}
				else if (!func_89(iParam0, 0x00000000))
				{
					unk_0x0ADC5FFEF2329036(iParam0, 0x00000001);
					if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
					{
						unk_0x4FB9A846E72E2F23(unk_0x9539D44F3E4492F6(iParam0), 0x000000FF, 0x00000000);
					}
				}
			}
			else
			{
				func_91(&(Global_26D96B[iParam0 /*2*/]), 0x00000001, 0x00000000);
			}
		}
		else
		{
			if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				unk_0x672BED15BAF1B335(unk_0x9539D44F3E4492F6(iParam0));
			}
			func_179(&(Global_26D96B[iParam0 /*2*/]));
			unk_0x0674E58A79778E99(&Global_26D96A, iParam0);
		}
	}
}

bool func_89(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_90(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_75();
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

void func_91(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 0x00000001;
}

int func_92()
{
	if (unk_0x22A8E52414415B76() || unk_0xF929B1A0A409FF93())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_93()
{
	if (func_94() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_94()
{
	return Global_1406D3.f_12;
}

int func_95(int iParam0)
{
	if (func_89(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_96())
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

bool func_96()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_97()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000007);
}

void func_98()
{
	Global_56C3.f_5 = 0x00000000;
}

void func_99(int iParam0)
{
	Global_26B66F.f_11B3 = iParam0;
}

void func_100(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam2 > 0xFFFFFFFF)
			{
				Global_150392.f_89[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_150392.f_416), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_150392.f_416), iParam0);
			}
			break;
	}
}

void func_101()
{
	func_99(0x00000001);
	func_100(0x00000004, 0x00000000, 0xFFFFFFFF);
	func_100(0x00000006, 0x00000000, 0xFFFFFFFF);
	func_100(0x00000007, 0x00000000, 0xFFFFFFFF);
	func_100(0x00000003, 0x00000000, 0xFFFFFFFF);
	func_100(0x00000001, 0x00000000, 0xFFFFFFFF);
	func_100(0x00000002, 0x00000000, 0xFFFFFFFF);
	func_100(0x0000000B, 0x00000000, 0xFFFFFFFF);
	func_100(0x0000000D, 0x00000000, 0xFFFFFFFF);
	func_100(0x0000000E, 0x00000000, 0xFFFFFFFF);
	func_100(0x00000010, 0x00000000, 0xFFFFFFFF);
}

void func_102(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_131(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_105())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_104(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_131(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_104(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_95(unk_0xD803B885F5E47A62())) && !func_89(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_103()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_95(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_103()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_104(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_105()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_106()
{
	func_107(0x00000000);
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		func_108();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_204(0x00000000))
		{
			func_118(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_108()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1AED2)
	{
		unk_0x2CBCC7DC0EEFF804(iVar0, iParam0);
		func_110(iVar0);
		iVar0++;
	}
}

void func_110(int iParam0)
{
	Global_1AED2[iParam0 /*28*/].f_15 = 0x00000000;
	StringCopy(&(Global_1AED2[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_1AED2[iParam0 /*28*/].f_4), "", 64);
	Global_1AED2[iParam0 /*28*/].f_17 = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_18 = { 0f, 0f, 0f };
	Global_1AED2[iParam0 /*28*/].f_1B = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_14 = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_16 = 0x00000000;
}

void func_111()
{
	if (!Global_14073F)
	{
		return;
	}
	func_112();
}

void func_112()
{
	Global_14073F = 0x00000000;
	StringCopy(&(Global_14073F.f_1), "", 32);
	Global_14073F.f_9 = 0x00000000;
}

void func_113()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x0000015A, 0x00000001);
		if (unk_0x5B99ACBBF316951B(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x9749E8930AE90341(unk_0xD803B885F5E47A62()))
			{
			}
		}
	}
}

void func_114()
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_325))
	{
		unk_0x142CC44DB769B57E(&iLocal_325);
	}
	if (unk_0xC844350D5D58C99A(iLocal_152))
	{
		iVar0 = iLocal_152;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	if (unk_0xC844350D5D58C99A(iLocal_154))
	{
		iVar0 = iLocal_154;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	func_12();
	unk_0x71199B01895C6202(func_115(0x0000000C));
	unk_0x71199B01895C6202(joaat("prop_wheelchair_01_s"));
	unk_0x8D17794CE3273D70("missfinale_c2leadinoutfin_c_int");
}

int func_115(int iParam0)
{
	if (!func_117(iParam0))
	{
		return func_116(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_116(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_117(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_118(int iParam0)
{
	if (func_121())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_120())
		{
			func_119(0x00000001, 0x00000001);
		}
		else
		{
			func_119(0x00000000, 0x00000000);
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
	if (!func_105())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_119(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_204(0x00000000))
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

bool func_120()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_121()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_122(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_130())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_93())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_89(unk_0xD803B885F5E47A62(), 0x00000000) && !func_96()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_127(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_126(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_125();
					func_124();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_126(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_123(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_123(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_124()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_125()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (iParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (iParam0 == 0x00000001)
			{
				func_129();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_89(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_128(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 0x00000001);
	}
}

void func_129()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

int func_130()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_131(int iParam0)
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

void func_132(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_136(sParam0))
	{
		return;
	}
	func_13();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_135();
	func_134(bParam1);
	func_133();
}

void func_133()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_135()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_136(char* sParam0)
{
	if (!func_18())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_137(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_137(char* sParam0)
{
	if (!func_18())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_138()
{
	switch (iLocal_330)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000019))
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000019);
			}
			if (unk_0x83D8570832F172A7(iLocal_331) && func_190())
			{
				func_171();
				func_170();
				func_167(0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				func_122(unk_0xD803B885F5E47A62(), 0x00000000, 0x00002004, 0x00000000);
				unk_0xB5EB44E161D3DCB8(0x00000000, 0x00000001);
				unk_0x4AE2D6991D4E4082(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
				func_164(0x00000001, 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
				{
					unk_0x536F1BE96C726C4B(1273.885f, -1718.004f, 53.7715f, 3f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x327AAEE25F323797(iLocal_153);
					unk_0xA47B46945FF6DE74(iLocal_153, 1275.256f, -1722.368f, 53.655f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_153, 12.6638f);
					unk_0xBD453909DC26A85D(iLocal_153, 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					unk_0x5745EA6329A91E29(iLocal_153, joaat("weapon_unarmed"), 0x00000001);
				}
				iLocal_332 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
				unk_0xE3BB8E05FCEB3FBE(iLocal_332, 0x00000001);
				unk_0x86F44313DFA8F00C(iLocal_332, 1276.409f, -1719.918f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x7E60C62A7CE58FC8(iLocal_331, "SET_DETAILS");
				func_163("FM_LEST_CAM");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(iLocal_331, "SET_LOCATION");
				func_163("FM_LEST_CAM2");
				unk_0x7E60D21B163E9D56();
				if (unk_0xE0FCC099E413CCBA() == 0xFFFFFFFF)
				{
					unk_0x63D6BFA449464BBF("scanline_cam");
				}
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000F);
				func_7(&uLocal_333, 0x00000000, 0x00000000);
				unk_0x523BCC9DC80CD82F(func_115(0x0000000C));
				unk_0x523BCC9DC80CD82F(joaat("prop_wheelchair_01_s"));
				unk_0x3F423BF5B8125A50("MissLester1ALeadInOut");
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000017);
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000011))
				{
					if (unk_0x76395FF5E8D5E643(0x0C699614))
					{
						unk_0x1BA7FCEAFCE8D46E(0x0C699614, 0x00000000, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000011);
					}
				}
				iLocal_330 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000015))
				{
					if (func_180(&uLocal_333, 0x000003E8, 0x00000000))
					{
						unk_0xDBE4EC9C88839074(iLocal_153, 1276.409f, -1719.918f, 56.1054f, 0xFFFFFFFF, 0x00000000, 0x00000002);
						unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000015);
					}
				}
			}
			if (func_180(&uLocal_333, 0x000005DC, 0x00000000))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000011))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
						{
							if (func_144(&uLocal_156, "FM_1AU", "FM_LESTCUT", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								func_179(&uLocal_333);
								func_7(&uLocal_333, 0x00000000, 0x00000000);
								iLocal_330++;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
			{
				if (!func_208())
				{
					unk_0x4E885A246A9D983A(iLocal_153, 0x00000068, 0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000016);
					unk_0xBC43ED9FE28DB191(iLocal_153);
					unk_0x96167B03C5A77156(iLocal_153, 1273.576f, -1718.459f, 53.7715f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					func_179(&uLocal_333);
					func_7(&uLocal_333, 0x00000000, 0x00000000);
					iLocal_330++;
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
			{
				if (func_180(&uLocal_333, 0x00001388, 0x00000000) || unk_0x3D1053F9EB43B7AD(iLocal_153, 1275.138f, -1718.426f, 53.72994f, 1272.451f, -1719.627f, 55.45897f, 1.5625f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1273.885f, -1718.004f, 53.7715f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 21.8709f);
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
						if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
						{
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0x3F67C6AF, 0x00000000, 0x00000000, 0x00000000);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						}
					}
					func_143();
					func_86(0x00000001, 0x00000001, 0x00000000, 0x00000001);
					unk_0x0674E58A79778E99(&iLocal_323, 0x00000016);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					func_122(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
					unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000019);
					unk_0x5F30A037D837553E(0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000018);
					iLocal_330 = 0x00000063;
				}
			}
			break;
		
		case 0x00000063:
			if (unk_0x76395FF5E8D5E643(0x0C699614))
			{
				unk_0x1BA7FCEAFCE8D46E(0x0C699614, 0x00000004, 0x00000000, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x00000013);
				iLocal_330 = 0x00000064;
			}
			break;
		
		case 0x00000064:
			return 0x00000001;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000F))
	{
		if (unk_0x83D8570832F172A7(iLocal_331))
		{
			unk_0x7E60C62A7CE58FC8(iLocal_331, "SET_TIME");
			if (unk_0xD8A54335F18763BA() >= 0x00000000 && unk_0xD8A54335F18763BA() <= 0x0000000C)
			{
				unk_0x3CAEA85DA607305E(unk_0xD8A54335F18763BA());
			}
			else
			{
				unk_0x3CAEA85DA607305E((unk_0xD8A54335F18763BA() - 0x0000000C));
			}
			unk_0x3CAEA85DA607305E(unk_0x8D199E381D262EEF());
			unk_0x3CAEA85DA607305E(0x00000000);
			if (unk_0xD8A54335F18763BA() >= 0x00000000 && unk_0xD8A54335F18763BA() < 0x0000000C)
			{
				func_163("FM_LEST_AM");
			}
			else
			{
				func_163("FM_LEST_PM");
			}
			unk_0x7E60D21B163E9D56();
			unk_0x6567AE843FADBA94(iLocal_331, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000016))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
		{
			unk_0x4E885A246A9D983A(iLocal_153, 0x00000068, 0x00000001);
			unk_0x9DD8618CA5BF832D(iLocal_153, 0x0000003C, 0x00000001);
			unk_0x9DD8618CA5BF832D(iLocal_153, 0x00000156, 0x00000001);
			unk_0x9DD8618CA5BF832D(iLocal_153, 0x0000015C, 0x00000001);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000017))
	{
		if (func_139())
		{
			unk_0x0674E58A79778E99(&iLocal_323, 0x00000017);
		}
	}
	return 0x00000000;
}

int func_139()
{
	bool bVar0;
	
	unk_0x523BCC9DC80CD82F(func_115(0x0000000C));
	unk_0x523BCC9DC80CD82F(joaat("prop_wheelchair_01_s"));
	unk_0x3F423BF5B8125A50("missfinale_c2leadinoutfin_c_int");
	if (!unk_0xC844350D5D58C99A(iLocal_152))
	{
		if (unk_0xB87F6CF6E5628C67(func_115(0x0000000C)))
		{
			if (func_141(&iLocal_152, 0x0000000C, 1276.39f, -1712.845f, 54.372f, 338.0729f, 0x00000001))
			{
				unk_0x11AD11297DC58CC7(iLocal_152, 0x00000001);
				unk_0xE121AE1BBF90E186(iLocal_152, 0x00000001);
				func_140(&uLocal_156, 0x00000008, iLocal_152, "Lester", 0x00000000, 0x00000001);
				unk_0x9A28E8CB86CD4694(iLocal_152, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_154))
	{
		if (unk_0xB87F6CF6E5628C67(joaat("prop_wheelchair_01_s")))
		{
			iLocal_154 = unk_0x7707E48765093646(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_152))
	{
		return 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
	{
		if (!unk_0x8A83E339B374E53A(iLocal_152))
		{
			return 0x00000000;
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_154))
	{
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("missfinale_c2leadinoutfin_c_int"))
	{
		return 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
	{
		iLocal_155 = unk_0xE9744DB7B8CA6965(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 0x00000002);
		unk_0x915804B434753CBD(iLocal_152, iLocal_155, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 0x00000005, 0x00000000, 0x447A0000, 0x00000000);
		unk_0xE14EC663EED44AD5(iLocal_154, iLocal_155, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 0x00000004, 0x447A0000);
		unk_0xC90224D9E95E5E3A(iLocal_155, 0x00000001);
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_140(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_141(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_117(iParam1))
	{
		iVar0 = func_115(iParam1);
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
			func_142(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_142(var uParam0, int iParam1)
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

void func_143()
{
	int iVar0;
	
	if (unk_0x9F4FE516EAACCFC5(iLocal_332))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_332, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_332, 0x00000000);
	}
	unk_0x0674E58A79778E99(&iLocal_323, 0x0000000F);
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	if (unk_0xC844350D5D58C99A(iLocal_153))
	{
		iVar0 = iLocal_153;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	unk_0xE17FDF9E3068281B(&iLocal_331);
	unk_0x225CFE81EA219E44();
}

bool func_144(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_162(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_145(sParam2, iParam3, 0x00000000);
}

int func_145(char* sParam0, int iParam1, bool bParam2)
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
					func_161();
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
		if (func_160(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_159();
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
				func_153();
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
				if (func_152())
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
			if (func_105())
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
			func_151();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_150();
		func_146();
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
		func_161();
	}
	return 0x00000000;
}

void func_146()
{
	if (!func_147())
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

int func_147()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_149())
	{
		return 0x00000000;
	}
	if (func_148(unk_0xD803B885F5E47A62()))
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

bool func_148(int iParam0)
{
	return func_10(iParam0, 0x00000014);
}

int func_149()
{
	return 0xFFFFFFFF;
}

void func_150()
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

void func_151()
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

int func_152()
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

void func_153()
{
	if (func_158(0x0000000E))
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
		Global_4C1E = func_154();
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

var func_154()
{
	func_155();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_155()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_157(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_156(unk_0x16F2683693E537C9());
			if (func_117(iVar0) && (!func_158(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_117(Global_1B416.f_936.f_21B.f_10E1))
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

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_157(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_157(int iParam0)
{
	if (func_117(iParam0))
	{
		return func_116(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

bool func_158(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_159()
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

bool func_160(int iParam0, int iParam1)
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

void func_161()
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

void func_162(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_163(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_164(bool bParam0, int iParam1)
{
	func_166();
	func_109(0x00000001);
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x790015DC92C918E2();
	func_102(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_165();
	func_100(0x0000000C, 0x00000001, 0xFFFFFFFF);
	func_99(0x00000000);
	unk_0x5413873D3F67BF93(0x00000001, 0xFFFFFFFF);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_109(0x00000001);
	func_131(0x00000001);
	Global_2537E2.f_EA3 = 0x00000001;
	if (bParam0)
	{
		if (!unk_0xF929B1A0A409FF93())
		{
			unk_0xF601BB024C8F11A7(0x00000001, iParam1);
		}
	}
}

void func_165()
{
	func_99(0x00000000);
	func_100(0x00000004, 0x00000001, 0xFFFFFFFF);
	func_100(0x00000006, 0x00000001, 0xFFFFFFFF);
	func_100(0x00000007, 0x00000001, 0xFFFFFFFF);
	func_100(0x00000003, 0x00000001, 0xFFFFFFFF);
	func_100(0x00000001, 0x00000001, 0xFFFFFFFF);
	func_100(0x00000002, 0x00000001, 0xFFFFFFFF);
	func_100(0x0000000B, 0x00000001, 0xFFFFFFFF);
	func_100(0x0000000D, 0x00000001, 0xFFFFFFFF);
	func_100(0x0000000E, 0x00000001, 0xFFFFFFFF);
	func_100(0x00000010, 0x00000001, 0xFFFFFFFF);
}

void func_166()
{
	Global_14073F = 0x00000001;
	StringCopy(&(Global_14073F.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_14073F.f_9 = unk_0x12AB0310C2281427(&(Global_14073F.f_1));
}

void func_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_169();
	func_107(0x00000001);
	func_99(0x00000001);
	func_100(0x0000000C, 0x00000001, 0xFFFFFFFF);
	func_168();
	unk_0xBEF52C1D400C0A44(0x00000000);
	if (bParam0)
	{
		unk_0x225FD7B8E8464E9E(unk_0xD803B885F5E47A62(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 0x00002000;
	}
	if (bParam4)
	{
		iVar0 |= 0x00000004;
	}
	if (!bParam2)
	{
		iVar0 |= 0x00004000;
	}
	if (bParam3)
	{
		iVar0 |= 0x00008000;
	}
	func_122(unk_0xD803B885F5E47A62(), 0x00000000, iVar0, 0x00000000);
	if (bParam5)
	{
		if (unk_0x82F88FD400E98881(unk_0x16F2683693E537C9()))
		{
			unk_0xDB4B1656BA06B94E(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
}

void func_168()
{
	Global_56C3.f_5 = 0x00000001;
}

void func_169()
{
	func_118(0x00000000);
	func_107(0x00000001);
}

void func_170()
{
	Global_2537E2.f_484.f_9 = 0x00000001;
}

void func_171()
{
	if (func_177() || func_176())
	{
		func_175();
		func_172();
	}
}

void func_172()
{
	if ((!func_174() && !func_173()) && Global_2567E1)
	{
		Global_440000.f_2F9AE = 0x00000000;
	}
}

bool func_173()
{
	return Global_2564C8.f_24F;
}

bool func_174()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

void func_175()
{
	Global_2564C8.f_290 = 0x00000001;
}

var func_176()
{
	return Global_2564C8.f_27B;
}

bool func_177()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

int func_178()
{
	switch (iLocal_151)
	{
		case 0x00000000:
			if (unk_0x22A8E52414415B76())
			{
				iLocal_151++;
			}
			break;
		
		case 0x00000001:
			if (unk_0x22A8E52414415B76())
			{
				func_113();
			}
			else
			{
				iLocal_151++;
			}
			break;
		
		case 0x00000002:
			if (iLocal_329)
			{
				if (!unk_0x39B7A3CCD2467CAB())
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(0x000001F4);
					}
					iLocal_329 = 0x00000000;
				}
			}
			else if (unk_0x154B5473FBFD0156())
			{
				func_86(0x00000001, 0x00000001, 0x00000000, 0x00000001);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x7F2C3F971FA7A9EA(0x00000001);
				if (iLocal_328 != 0x00000000)
				{
					unk_0x25BB71BA267FE042(iLocal_328);
				}
				unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000001);
				iLocal_151++;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x0000000B))
	{
		if (unk_0x3148AE92ED70DC30("MP_1", 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1275.219f, -1722.503f, 53.655f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 228.4235f);
				unk_0x5D96D8530B3D0904(&iLocal_323, 0x0000000B);
			}
		}
	}
	return 0x00000000;
}

void func_179(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_180(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_7(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_181(var uParam0)
{
	return uParam0->f_1;
}

bool func_182(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_183(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_184(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (func_208())
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (func_189())
	{
		return 0x00000000;
	}
	if (func_200())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (func_201(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (bParam0)
	{
		if (func_188(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_187())
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (Global_180528)
	{
		return 0x00000000;
	}
	if (func_186())
	{
		return 0x00000000;
	}
	if (func_173())
	{
		return 0x00000000;
	}
	if (func_174())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (Global_26DD70)
	{
		return 0x00000000;
	}
	if (func_185(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_186()
{
	return Global_2564C8.f_2E8;
}

bool func_187()
{
	return Global_2537E2.f_BE7.f_242;
}

int func_188(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_D0 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_189()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_190()
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iLocal_153))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar0 = unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
			iLocal_153 = unk_0x36F2404464202779(0x00000004, iVar0, 1273.827f, -1717.873f, 53.7715f, 19.2225f, 0x00000000, 0x00000000);
			unk_0xE121AE1BBF90E186(iLocal_153, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_153, 0x00000001);
			unk_0x7237EE202FA06DBA(unk_0x16F2683693E537C9(), iLocal_153);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_153))
	{
		return 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
	{
		if (!unk_0x8A83E339B374E53A(iLocal_153))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_191()
{
	unk_0x45019D71A0DF8B62(0x00000001);
	func_192(0x00000001, 0xFFFFFFFF);
	unk_0xED41266DE64A57FD(0x00000001);
	if (func_39(0x00000085, 0xFFFFFFFF))
	{
		func_33(0x00000085, 0x00000000, 0xFFFFFFFF, 0x00000001);
	}
	Global_2564C8.f_283 = 0x00000001;
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_75();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xD5F10CECBB7D51B6(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_78(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_33(0x00000078, 0x00000000, iParam1, 0x00000001);
			func_33(0x0000007C, 0x00000000, iParam1, 0x00000001);
			func_33(0x00000073, 0x00000000, iParam1, 0x00000001);
			func_33(0x00000077, 0x00000000, iParam1, 0x00000001);
			break;
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

int func_194()
{
	int iVar0;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (bLocal_322)
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1274.547f, -1720.694f, 53.6807f) > 500f)
		{
			if (unk_0xC844350D5D58C99A(iLocal_153))
			{
				iVar0 = iLocal_153;
				unk_0x2ABAFAE29D459CE5(&iVar0);
			}
			return 0x00000000;
		}
		func_190();
	}
	if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1273.804f, -1722.466f, 53.21749f, 1277.147f, -1720.779f, 56.09249f, 3.4375f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_195()
{
	return Global_198C72;
}

int func_196()
{
	int iVar0;
	
	return 0x00000000;
	if (func_197(0x00000000))
	{
		iVar0 = 0x00000001;
	}
	if (func_197(0x00000009))
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

bool func_197(int iParam0)
{
	int iVar0;
	
	if (Global_258C2A)
	{
		return 0x00000001;
	}
	iVar0 = func_25(0x000009AF, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

bool func_198()
{
	return Global_14086D;
}

int func_199()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C5;
}

bool func_200()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_201(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_202(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_202(int iParam0)
{
	return func_203(iParam0);
}

bool func_203(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_204(int iParam0)
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

bool func_205()
{
	return func_206();
}

bool func_206()
{
	return Global_14E99F.f_28 == 0x00000003;
}

int func_207()
{
	if (Global_5145 == 0x00000004)
	{
		if (unk_0x1EE04CEA36EF313B())
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

int func_208()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_209(int iParam0)
{
	if (func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000019);
}

int func_210()
{
	return Local_73;
}

int func_211(int iParam0)
{
	return vLocal_150[iParam0 /*3*/];
}

void func_212(var uParam0)
{
	if (func_214(0x00000001))
	{
		if (unk_0xE4EDC4B0E92C078B(*uParam0) && !unk_0x0BB13030F24E9E05(*uParam0))
		{
			unk_0x6ABCCE651368DB93(*uParam0, 0x00000001);
			unk_0x4F505BE81426535E(*uParam0, 0x00000000);
			unk_0x2A065371C9D96655(*uParam0, 0x00000005);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*uParam0) && (unk_0x0BB13030F24E9E05(*uParam0) && !func_213()))
	{
		unk_0x6ABCCE651368DB93(*uParam0, 0x00000000);
		unk_0x4F505BE81426535E(*uParam0, 0x00000001);
	}
}

int func_213()
{
	return 0x00000000;
}

bool func_214(bool bParam0)
{
	return func_215(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_215(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_216(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_149();
}

int func_216(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_149())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

void func_217()
{
	int iVar0;
	
	func_12();
	func_193(0x0000000C, 0x00000000);
	func_71();
	if (iLocal_328 != 0x00000000)
	{
		unk_0x25BB71BA267FE042(iLocal_328);
	}
	if (unk_0xC844350D5D58C99A(iLocal_153))
	{
		iVar0 = iLocal_153;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_195C0B))
	{
		unk_0x661342B9651D16E2(Global_195C0B, 0x00000000);
		unk_0x142CC44DB769B57E(&Global_195C0B);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000011))
	{
		if (unk_0x76395FF5E8D5E643(0x0C699614))
		{
			unk_0x1BA7FCEAFCE8D46E(0x0C699614, 0x00000004, 0x00000000, 0x00000000);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000013))
	{
		unk_0xEAB026E686C0D991(0x00000000, 0x00000025, 0x00000001);
		unk_0xEAB026E686C0D991(0x00000000, 0x0000000E, 0x00000001);
		unk_0xEAB026E686C0D991(0x00000000, 0x0000000F, 0x00000001);
	}
	if (func_220())
	{
		func_219();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000019))
	{
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 0x00000018))
	{
		unk_0x5F30A037D837553E(0x00000001);
	}
	func_114();
	unk_0x5C8D148FC238F38A();
	func_218();
}

void func_218()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_219()
{
	Global_2537E2.f_484.f_9 = 0x00000000;
}

bool func_220()
{
	return Global_2537E2.f_484.f_9;
}

int func_221()
{
	var uVar0;
	
	func_228(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_227())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_226())
	{
		return 0x00000001;
	}
	if (func_225(0x0000009F))
	{
		if (!func_224())
		{
			return 0x00000001;
		}
	}
	if (func_225(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_222() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_222()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_222()
{
	switch (func_27())
	{
		case 0x00000000:
			return func_223();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_223()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_224()
{
	return Global_2564C8.f_256;
}

int func_225(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_226()
{
	return Global_258C08;
}

bool func_227()
{
	return Global_2564C8.f_251;
}

void func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_229(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_229(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_4(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_230(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_230(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_231()
{
	SYSTEM::WAIT(0x00000000);
}

void func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	func_234(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_73, 0x0000004F);
	unk_0x35B62793EAE9ADDF(&vLocal_150, 0x00000061);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_233())
	{
		func_217();
	}
}

int func_233()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_227())
		{
			return 0x00000000;
		}
		if (func_225(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_225(0x0000009D))
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_218();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_218();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_235()
{
	return Global_140856;
}

void func_236(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_218();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000020;
		
		case 0x00000020:
			return 0x00000020;
		
		case 0x00000021:
			return 0x00000020;
		
		case 0x00000022:
			return 0x00000020;
		
		case 0x00000023:
			return 0x00000020;
		
		case 0x00000024:
			return 0x00000020;
		
		case 0x00000025:
			return 0x00000020;
		
		case 0x00000026:
			return 0x00000020;
		
		case 0x00000027:
			return 0x00000020;
		
		case 0x00000028:
			return 0x00000020;
		
		case 0x00000029:
			return 0x00000020;
		
		case 0x0000002A:
			return 0x00000020;
		
		case 0x0000002B:
			return 0x00000020;
		
		case 0x0000002C:
			return 0x00000020;
		
		case 0x0000002D:
			return 0x00000020;
		
		case 0x0000002E:
			return 0x00000020;
		
		case 0x0000002F:
			return 0x00000020;
		
		case 0x00000030:
			return 0x00000020;
		
		case 0x00000031:
			return 0x00000020;
		
		case 0x00000032:
			return 0x00000004;
		
		case 0x00000033:
			return 0x00000020;
		
		case 0x00000034:
			return 0x00000020;
		
		case 0x00000035:
			return 0x00000020;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000020;
		
		case 0x00000038:
			return 0x00000020;
		
		case 0x00000039:
			return 0x00000020;
		
		case 0x0000003A:
			return 0x00000020;
		
		case 0x0000003B:
			return 0x00000020;
		
		case 0x0000003C:
			return 0x00000020;
		
		case 0x0000003D:
			return 0x00000020;
		
		case 0x0000003E:
			return 0x00000020;
		
		case 0x0000003F:
			return 0x00000020;
		
		case 0x00000040:
			return 0x00000004;
		
		case 0x00000041:
			return 0x00000020;
		
		case 0x00000042:
			return 0x00000004;
		
		case 0x00000043:
			return 0x00000004;
		
		case 0x00000044:
			return 0x00000020;
		
		case 0x00000045:
			return 0x00000020;
		
		case 0x00000046:
			return 0x00000004;
		
		case 0x00000047:
			return 0x00000020;
		
		case 0x00000048:
			return 0x00000020;
		
		case 0x00000049:
		case 0x0000004A:
			return 0x00000004;
		
		case 0x0000004B:
			return 0x00000020;
		
		case 0x0000004C:
			return 0x00000020;
		
		case 0x0000004D:
			return 0x00000020;
		
		case 0x0000004E:
			return 0x00000020;
		
		case 0x0000004F:
			return 0x00000020;
		
		case 0x00000050:
			return 0x00000020;
		
		case 0x00000051:
			return 0x00000020;
		
		case 0x00000052:
			return 0x00000020;
		
		case 0x00000054:
			return 0x00000020;
		
		case 0x00000053:
			return 0x00000020;
		
		case 0x00000055:
			return 0x00000020;
		
		case 0x00000056:
			return 0x00000008;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000020;
		
		case 0x00000059:
			return 0x00000020;
		
		case 0x0000005A:
			return 0x00000020;
		
		case 0x0000005B:
			return 0x00000008;
		
		case 0x0000005C:
			return 0x00000020;
		
		case 0x0000005D:
			return 0x00000008;
		
		case 0x0000005E:
			return 0x00000008;
		
		case 0x00000066:
			return 0x00000008;
		
		case 0x0000005F:
			return 0x00000008;
		
		case 0x00000060:
			return 0x00000020;
		
		case 0x00000061:
			return 0x00000020;
		
		case 0x00000062:
			return 0x00000020;
		
		case 0x00000063:
			return 0x00000008;
		
		case 0x00000064:
			return 0x00000020;
		
		case 0x00000065:
			return 0x00000020;
		
		case 0x00000067:
			return 0x00000020;
		
		case 0x00000068:
			return 0x00000020;
		
		case 0x00000069:
			return 0x00000020;
		
		case 0x0000006A:
			return 0x00000008;
		
		case 0x0000006B:
			return 0x00000008;
		
		case 0x0000006C:
			return 0x00000008;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000008;
		
		case 0x0000006F:
			return 0x00000008;
		
		case 0x00000070:
			return 0x00000008;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000020;
		
		case 0x00000073:
			return 0x00000008;
		
		case 0x00000074:
			return 0x00000008;
		
		case 0x00000075:
			return 0x00000008;
		
		case 0x00000076:
			return 0x00000008;
		
		case 0x00000077:
			return 0x00000020;
		
		case 0x00000078:
			return 0x00000020;
		
		case 0x00000079:
			return 0x00000020;
		
		case 0x0000007A:
			return 0x00000020;
		
		case 0x0000007B:
			return 0x00000008;
		
		case 0x0000007C:
			return 0x00000008;
		
		case 0x0000007D:
			return 0x00000008;
		
		case 0x0000007E:
			return 0x00000008;
		
		case 0x0000007F:
			return 0x00000020;
		
		case 0x00000080:
			return 0x00000020;
		
		case 0x00000081:
			return 0x00000020;
		
		case 0x0000000C:
			return 0x00000020;
		
		case 0x00000004:
			return 0x00000010;
		
		case 0x0000000D:
			return 0x00000020;
		
		case 0x00000005:
			return 0x00000010;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000002;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000004;
		
		case 0x0000000F:
			return 0x00000020;
		
		case 0x00000010:
			return 0x00000020;
		
		case 0x0000001B:
			return 0x00000002;
		
		case 0x00000019:
			return 0x00000002;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x00000012:
			return 0x00000020;
		
		case 0x0000001C:
			return 0x00000020;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000020;
		
		case 0x0000001F:
			return 0x00000020;
		
		case 0x00000011:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000020;
		
		case 0x00000083:
			return 0x00000020;
		
		case 0x00000013:
			return 0x00000020;
		
		case 0x00000016:
			return 0x00000020;
		
		case 0x00000017:
			return 0x00000020;
		
		case 0x00000018:
			return 0x00000020;
		
		case 0x00000014:
			return 0x00000002;
		
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000020;
		
		case 0x0000008E:
			return 0x00000020;
		
		case 0x0000008F:
			return 0x00000020;
		
		case 0x00000084:
			return 0x00000020;
		
		case 0x00000085:
			return 0x00000020;
		
		case 0x00000089:
			return 0x00000020;
		
		case 0x00000087:
			return 0x00000020;
		
		case 0x00000088:
			return 0x00000020;
		
		case 0x0000008C:
			return 0x00000020;
		
		case 0x0000008D:
			return 0x00000020;
		
		case 0x0000008A:
			return 0x00000020;
		
		case 0x0000008B:
			return 0x00000020;
		
		case 0x00000090:
			return 0x00000020;
		
		case 0x00000091:
			return 0x00000020;
		
		case 0x00000092:
			return 0x00000020;
		
		case 0x00000093:
			return 0x00000020;
		
		case 0x00000094:
			return 0x00000002;
		
		case 0x00000099:
			return 0x00000001;
		
		case 0x00000095:
			return 0x00000002;
		
		case 0x00000096:
			return 0x00000004;
		
		case 0x00000097:
			return 0x00000002;
		
		case 0x00000098:
			return 0x00000002;
		
		case 0x00000086:
			return 0x00000001;
		
		case 0x0000009A:
			return 0x00000002;
		
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
			return 0x00000000;
		
		case 0x000000B0:
			return 0x00000001;
		
		case 0x000000A1:
			return 0x00000004;
		
		case 0x000000A4:
			return 0x00000004;
		
		case 0x000000A5:
			return 0x00000001;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AC:
			return 0x00000001;
		
		case 0x000000A8:
			return 0x00000002;
		
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000A9:
			return 0x00000001;
		
		case 0x000000A7:
			return 0x00000002;
		
		case 0x000000AA:
			return 0x00000008;
		
		case 0x000000AB:
			return 0x00000008;
		
		case 0x000000AE:
			return 0x00000001;
		
		case 0x000000A2:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000020;
		
		default:
	}
	return 0x00000000;
}

