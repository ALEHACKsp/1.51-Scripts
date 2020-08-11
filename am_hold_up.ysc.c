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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	struct<73> Local_73 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_74[32];
	struct<54> Local_75 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	float fLocal_83 = 0f;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	float fLocal_98 = 0f;
	vector3 vLocal_99 = { 0f, 0f, 0f };
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	float fLocal_117 = 0f;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	float fLocal_120 = 0f;
	var uLocal_121 = 16;
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
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286[5] = { 0, 0, 0, 0, 0 };
	int iLocal_287[5] = { 0, 0, 0, 0, 0 };
	float fLocal_288 = 0f;
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
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	vector3 vLocal_312 = { 0f, 0f, 0f };
	struct<21> Local_313 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_80 = joaat("mp_m_shopkeep_01");
	iLocal_84 = 0xFFFFFFFF;
	iLocal_87 = 0xFFFFFFFF;
	iLocal_101 = 0x1213B24D;
	iLocal_102 = SYSTEM::ROUND(Global_40001.f_976);
	iLocal_103 = SYSTEM::ROUND(Global_40001.f_972) + 1;
	iLocal_104 = 0x00000001;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_443(ScriptParam_313))
		{
			func_438();
		}
		if (func_437(0x00000001))
		{
			func_425(unk_0xD803B885F5E47A62(), 0x00000000, 0x00018200, 0x00000000);
		}
	}
	while (0x00000001)
	{
		func_424();
		if (func_413())
		{
			func_438();
		}
		func_411();
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006))
		{
			if (func_437(0x00000001))
			{
				func_425(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
				func_408();
				unk_0x0674E58A79778E99(&(Local_75.f_35), 0x00000007);
				func_407();
			}
		}
		switch (func_406(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				unk_0x3F423BF5B8125A50("mp_am_hold_up");
				if (unk_0xB4AE0788C1587752("mp_am_hold_up"))
				{
					if (func_396())
					{
						unk_0x0D3BE1DE0262A012(func_395(Local_75), 0x00000000);
						if (unk_0xE9F78D191AD5EDBA(Local_73))
						{
							if (func_394() > 0x00000000)
							{
								if (!func_393(Local_73))
								{
									func_392(&uLocal_121, 0x00000003, unk_0x1B50683925F00106(Local_73), &(Local_73.f_2E), 0x00000001, 0x00000000);
									func_391();
								}
								unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000016);
								Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000002;
							}
						}
					}
				}
				if (func_394() == 0x00000006)
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000005;
				}
				break;
			
			case 0x00000002:
				func_266(&Local_75, vLocal_85, vLocal_86, &Local_73, &(Local_74[unk_0x57270EE11514DC67() /*10*/]), unk_0x3D1053F9EB43B7AD(unk_0x1B50683925F00106(Local_73), vLocal_118, vLocal_119, fLocal_120, 0x00000000, 0x00000001, 0x00000000), 0x00000000);
				func_259();
				if (func_394() == 0x00000002)
				{
					func_129();
				}
				else if (func_394() == 0x00000006)
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000005;
				}
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000006;
				}
				break;
			
			case 0x00000005:
				func_128(&(Local_73.f_45));
				if (func_127(&(Local_73.f_45)))
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000006;
				}
				break;
			
			case 0x00000004:
				Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000006;
			
			case 0x00000006:
				func_53();
				func_438();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_394())
			{
				case 0x00000000:
					if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000010))
					{
						func_51(func_52(0x00000000));
						func_51(func_52(0x00000001));
						func_51(func_52(0x00000002));
						unk_0x3F423BF5B8125A50("mp_am_hold_up");
						if (unk_0xB4AE0788C1587752("mp_am_hold_up"))
						{
							if (func_396())
							{
								unk_0x536F1BE96C726C4B(vLocal_85, 1.5f, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
								unk_0x536F1BE96C726C4B(vLocal_82, 1.5f, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
								unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000010);
							}
						}
					}
					else if (func_49())
					{
						Local_73.f_C = 0x00000002;
					}
					break;
				
				case 0x00000002:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_73.f_C = 0x00000006;
					}
					break;
				
				case 0x00000006:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_D))
	{
		if (func_3(Local_73.f_D))
		{
			if (unk_0xD59B17D2DFF98E26(unk_0x09AD4CE7DA179533(Local_73.f_D)))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000001);
				func_2(&(Local_73.f_D));
			}
		}
	}
}

void func_2(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_3(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

int func_4()
{
	if (func_5())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_5()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000002))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000003))
	{
		return 0x00000001;
	}
	if (!func_10())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000013)) || (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014)))
		{
			func_6(Local_75.f_32, 0x00000001, func_7());
			return 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000012))
		{
			func_6(Local_75.f_32, 0x00000001, func_7());
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000012))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000007))
		{
			func_6(Local_75.f_32, 0x00000001, func_7());
			unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000007);
		}
	}
	return 0x00000000;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = 0x36AD1BD5;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000004, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0x15673EFF6BDD825C(func_9(), 0xFFFFFFFF, 0x00000000));
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_9()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000D) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001B)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_11()
{
	var uVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000015))
	{
		if (func_393(Local_73))
		{
			Local_73.f_48 = unk_0x39DDAA68EF6A6BF4(Local_73, &uVar0);
			unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000015);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000013))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000A) && Local_73.f_25 <= 0f)
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000013);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000011))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014))
		{
			if (func_3(Local_73.f_D))
			{
				unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000000, 0x00000000);
				unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000011);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006))
	{
		if (Global_26B66F.f_8 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000006);
			unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000010);
		}
	}
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFF81ED3B99522C7() || !unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000000))
	{
		return 0x00000000;
	}
	if (Local_73.f_42 != 0x00000006)
	{
		if (Local_73.f_42 > 0x00000000 && func_393(Local_73.f_F))
		{
			Local_73.f_42 = 0x00000006;
			return 0x00000000;
		}
		switch (Local_73.f_42)
		{
			case 0x00000000:
				if (!func_18(&uLocal_301, 0x00002710, 0x00000000))
				{
					iVar0 = unk_0xF187F2EA5437526A(vLocal_118, 20f, 20f, 20f, 0xFFFFFFFF);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!unk_0xAF6690C489CC6203(iVar0))
						{
							iVar1 = unk_0x134B62B726CEC8E6(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0x029064EA9141FCC2(vLocal_118, 25f, 25f, 25f)) && !unk_0x5A91F08DF773C39D(iVar0, vLocal_113, 1f, 1f, 2f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x03A10A5707B2BB1F(iVar0, 0x00000007)) && !unk_0x405E212DDE472467(iVar0, 0x00000001)) && unk_0x232B70EDA3C8983B(iVar0)) && func_17(iVar1))
							{
								unk_0x0C8A454B494DAA0D(iVar0);
								if (unk_0xAFE0D3608EDA7039(iVar0))
								{
									if (func_16(&(Local_73.f_F), iVar0, 0x00000001, 0x00000000))
									{
										unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73.f_F), joaat("weapon_pistol"), 0x000061A8, 0x00000000);
										unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_F), 0x00000001);
										Local_73.f_42 = 0x00000001;
										unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000001);
										unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_F), Global_18085D);
										unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_73.f_F), 0x00000002);
										unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_73.f_F), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
										func_392(&uLocal_121, 0x00000004, unk_0x1B50683925F00106(Local_73.f_F), "StoreHero", 0x00000001, 0x00000000);
										unk_0x509B8296EBA9B408(unk_0x1B50683925F00106(Local_73.f_F), func_15(), 0x00000000, 0x00000001);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000005)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004))
				{
					Local_73.f_42 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_18(&(Local_73.f_43), 0x00000BB8, 0x00000000) || (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x4924437D) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x4924437D) != 0x00000001))
				{
					func_14(&(Local_73.f_43));
					Local_73.f_42 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000005) || unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000008)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000009)) || func_18(&(Local_73.f_43), 0x00001388, 0x00000000))
				{
					if (func_13() || func_18(&(Local_73.f_43), 0x00001388, 0x00000000))
					{
						Local_73.f_42 = 0x00000004;
					}
					else
					{
						Local_73.f_42 = 0x00000005;
					}
				}
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000005:
				break;
			}
	}
	return 0x00000001;
}

int func_13()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

char* func_15()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
	if (iVar0 < 0x0000001E)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 0x0000001E && iVar0 < 0x00000046)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x73270B3C9CC833FD(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x7D3E8C4CDBD80BDF(iParam1);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (bParam2)
		{
			unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_17(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == 0x1422D45B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_19(uParam0, bParam2, 0x00000000);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_73.f_1E == 0x00000000)
	{
		if (Local_73.f_3 >= 0x00000002 && Local_73.f_3 != 0x00000009)
		{
			Local_73.f_1E = unk_0x0952F7603629A4C0(0x00000065, unk_0x16F2683693E537C9(), 60000f);
		}
	}
}

void func_21()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000005))
	{
		if (Local_73.f_29 > 0x00000000)
		{
			func_25();
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000005))
			{
				return;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000001))
	{
		if (Local_73.f_2 == 0x00000003 && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009))
		{
			Local_73.f_2 = 0x00000000;
		}
		unk_0x0674E58A79778E99(&(Local_73.f_1), 0x00000001);
	}
	switch (Local_73.f_2)
	{
		case 0x00000000:
			if ((((func_3(Local_73) && !func_393(Local_73)) && func_3(Local_73.f_10[Local_73.f_1A])) && Local_73.f_3 != 0x00000008) && Local_73.f_3 != 0x00000007)
			{
				if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009) || unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000004))
					{
						Local_73.f_2 = 0x00000002;
						return;
					}
					if (!iLocal_78)
					{
						unk_0xE655C47E46F9A7E4(unk_0x1B50683925F00106(Local_73), Local_73.f_2A, 0x00000640);
						iLocal_78 = 0x00000001;
					}
					if (func_18(&uLocal_291, 0x00000064, 0x00000000))
					{
						fVar0 = unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_73));
						fVar1 = (Local_73.f_2A - 10f);
						fVar2 = (Local_73.f_2A + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_73.f_2A - 10f) + 360f);
							fVar1 = ((Local_73.f_2A + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_73.f_2A - 10f) - 360f);
							fVar1 = ((Local_73.f_2A + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_297, 0x000003E8, 0x00000000)) || func_18(&uLocal_297, 0x00000C35, 0x00000000))
						{
							unk_0x8FB4E06C94958F84(unk_0x1B50683925F00106(Local_73));
							Local_73.f_1B = unk_0xF66E5A439A080021(unk_0x68E4ADDDDCD7BDDE(unk_0x1B50683925F00106(Local_73), -0.65f, 0.87f, -0.02f), vLocal_86, 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_73), Local_73.f_1B, "mp_am_hold_up", func_24(Local_73.f_1A), 1.5f, -1.5f, 0x0000009D, 0x00000010, 0x447A0000, 0x00000000);
							if (unk_0xE9F78D191AD5EDBA(Local_73.f_10[Local_73.f_1A]))
							{
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[Local_73.f_1A]), 0x00000001, 0x00000000);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_73.f_10[Local_73.f_1A]), Local_73.f_1B, "mp_am_hold_up", func_23(Local_73.f_1A), 4f, -4f, 0x00000008);
							}
							unk_0x914E6894744915F8(Local_73.f_1B);
							Local_73.f_2 = 0x00000001;
							iLocal_87 = unk_0xF958843510932FF6(Local_73.f_1B);
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009) || unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000004))
			{
				iLocal_87 = unk_0xF958843510932FF6(Local_73.f_1B);
				if (unk_0x69DF961355195C3C(iLocal_87))
				{
					unk_0x45934E8E3471AAA9(Local_73.f_1B);
				}
				Local_73.f_2 = 0x00000002;
				return;
			}
			if (iLocal_87 != 0xFFFFFFFF)
			{
				if (unk_0x69DF961355195C3C(iLocal_87) || func_18(&uLocal_293, 0x000007D0, 0x00000000))
				{
					if ((unk_0x69DF961355195C3C(iLocal_87) && unk_0xA45992A6CE82FB43(iLocal_87) == 1f) || func_18(&uLocal_293, 0x000007D0, 0x00000000))
					{
						if ((func_3(Local_73) && !func_393(Local_73)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009))
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
						}
						unk_0x45934E8E3471AAA9(Local_73.f_1B);
						Local_73.f_2 = 0x00000002;
					}
				}
			}
			else
			{
				iLocal_87 = unk_0xF958843510932FF6(Local_73.f_1B);
			}
			break;
		
		case 0x00000002:
			func_3(Local_73.f_10[Local_73.f_1A]);
			if (func_18(&uLocal_299, 0x000003E8, 0x00000000) && func_3(Local_73.f_10[Local_73.f_1A]))
			{
				if (unk_0xC844350D5D58C99A(unk_0x09AD4CE7DA179533(Local_73.f_10[Local_73.f_1A])))
				{
					unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[Local_73.f_1A]), 0x00000000, 0x00000000);
					unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[Local_73.f_1A]), 0x00000001);
					unk_0xA47B46945FF6DE74(unk_0x09AD4CE7DA179533(Local_73.f_10[Local_73.f_1A]), func_22(Local_73.f_1A), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				iLocal_87 = 0xFFFFFFFF;
				iLocal_78 = 0x00000000;
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000004))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_1), 0x00000004);
				}
				func_14(&uLocal_299);
				func_14(&uLocal_293);
				func_14(&uLocal_291);
				func_14(&uLocal_297);
				Local_73.f_2 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return vLocal_99 - Vector(1f, 0.2f, 0.1f);
		
		case 0x00000001:
			return vLocal_99 - Vector(1f, 0.2f, 0f);
		
		case 0x00000002:
			return vLocal_99 - Vector(1f, 0.2f, -0.1f);
		
		case 0x00000004:
			return vLocal_99 - Vector(1f, -0.2f, 0.1f);
		
		case 0x00000000:
			return vLocal_99 - Vector(1f, -0.2f, 0f);
		
		case 0x00000005:
			return vLocal_99 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_99 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return "purchase_chocbar";
		
		case 0x00000001:
			return "purchase_chocbar";
		
		case 0x00000002:
			return "purchase_chocbar";
		
		case 0x00000004:
			return "purchase_cigarette";
		
		case 0x00000000:
			return "purchase_beer";
		
		case 0x00000005:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return "purchase_chocbar_shopkeeper";
		
		case 0x00000001:
			return "purchase_chocbar_shopkeeper";
		
		case 0x00000002:
			return "purchase_chocbar_shopkeeper";
		
		case 0x00000004:
			return "purchase_cigarette_shopkeeper";
		
		case 0x00000000:
			return "purchase_beer_shopkeeper";
		
		case 0x00000005:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if (((((!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000003]) || !unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000001])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000002])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000004])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000000])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000005]))
	{
		if (((((func_51(func_27(0x00000003)) && func_51(func_27(0x00000001))) && func_51(func_27(0x00000002))) && func_51(func_27(0x00000004))) && func_51(func_27(0x00000000))) && func_51(func_27(0x00000005)))
		{
			if (unk_0x2358623ECCDB11B3(0x00000000, 0x00000000, 0x00000006, 0x00000000))
			{
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000003]))
				{
					if (func_26(&(Local_73.f_10[0x00000003]), func_27(0x00000003), func_22(0x00000003), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000003]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000003]), 0x00000001);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000003]), 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000001]))
				{
					if (func_26(&(Local_73.f_10[0x00000001]), func_27(0x00000001), func_22(0x00000001), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000001]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000001]), 0x00000001);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000001]), 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000002]))
				{
					if (func_26(&(Local_73.f_10[0x00000002]), func_27(0x00000002), func_22(0x00000002), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000002]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000002]), 0x00000001);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000002]), 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000004]))
				{
					if (func_26(&(Local_73.f_10[0x00000004]), func_27(0x00000004), func_22(0x00000004), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000004]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000004]), 0x00000001);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000004]), 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000000]))
				{
					if (func_26(&(Local_73.f_10[0x00000000]), func_27(0x00000000), func_22(0x00000000), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000000]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000000]), 0x00000001);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000000]), 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_10[0x00000005]))
				{
					if (func_26(&(Local_73.f_10[0x00000005]), func_27(0x00000005), func_22(0x00000005), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000005]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000005]), 0x00000001);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_10[0x00000005]), 0x00000000, 0x00000000);
					}
				}
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000005);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_26(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x081C8BC5094A7B76(0x00000001))
	{
		return 0x00000000;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, iParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, iParam4, bParam3, bParam5));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), 0x00000001);
		}
		if (bParam9)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), 0x00000000, 0x00000000);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return joaat("prop_choc_pq");
		
		case 0x00000001:
			return joaat("prop_choc_ego");
		
		case 0x00000002:
			return joaat("prop_choc_meto");
		
		case 0x00000004:
			return joaat("prop_ld_fags_01");
		
		case 0x00000000:
			return joaat("prop_ecola_can");
		
		case 0x00000005:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_28()
{
	float fVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009))
	{
		if (Global_26B66F.f_8 == 0x00000001 || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006))
		{
			if ((((func_3(Local_73.f_D) && func_3(Local_73)) && !func_393(Local_73)) && Local_73.f_3 != 0x00000008) && Local_73.f_3 != 0x00000007)
			{
				if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001E))
					{
						unk_0xE655C47E46F9A7E4(unk_0x1B50683925F00106(Local_73), Local_73.f_2A, 0x00000640);
						unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x0000001E);
					}
					if (func_18(&uLocal_289, 0x00000064, 0x00000000))
					{
						fVar0 = unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_73));
						if ((fVar0 > (Local_73.f_2A - 20f) && fVar0 < (Local_73.f_2A + 20f)) || func_18(&uLocal_295, 0x000005DC, 0x00000000))
						{
							unk_0x8FB4E06C94958F84(unk_0x1B50683925F00106(Local_73));
							Local_73.f_1D = unk_0xF66E5A439A080021(vLocal_85, vLocal_86, 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_73), Local_73.f_1D, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 0x0000009D, 0x00000010, 0x447A0000, 0x00000000);
							if (unk_0xE9F78D191AD5EDBA(Local_73.f_D))
							{
								unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000000);
								unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_73.f_D), Local_73.f_1D, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 0x00000089);
							}
							if (unk_0xE9F78D191AD5EDBA(Local_73.f_E))
							{
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_73.f_E), Local_73.f_1D, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 0x00000089);
							}
							unk_0x914E6894744915F8(Local_73.f_1D);
							unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000009);
						}
					}
				}
				else
				{
					Local_73.f_3 = 0x00000008;
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000011))
	{
		iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
		if (iLocal_84 != 0xFFFFFFFF)
		{
			func_3(Local_73);
			if (unk_0x69DF961355195C3C(iLocal_84))
			{
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000011);
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000F))
	{
		iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
		if (iLocal_84 != 0xFFFFFFFF)
		{
			if (unk_0x69DF961355195C3C(iLocal_84))
			{
				func_3(Local_73);
				if ((unk_0xE9F78D191AD5EDBA(Local_73.f_D) && func_3(Local_73.f_D)) && func_3(Local_73))
				{
					if (unk_0xA45992A6CE82FB43(iLocal_84) > 0.44f)
					{
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000000);
						unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x0000000F);
					}
				}
			}
		}
	}
}

int func_29()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0x00000000;
	}
	func_43();
	if (Local_73.f_3 != 0x00000009)
	{
		if (func_393(Local_73))
		{
			Local_73.f_3 = 0x00000009;
			return 0x00000000;
		}
		if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009)) && Local_73.f_3 < 0x00000008)
		{
			if (!unk_0xE9F78D191AD5EDBA(Local_73.f_D) || !unk_0xE9F78D191AD5EDBA(Local_73.f_E))
			{
				Local_73.f_3 = 0x00000008;
			}
		}
		switch (Local_73.f_3)
		{
			case 0x00000000:
				if (!func_393(Local_73))
				{
					Local_73.f_3 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004))
				{
					Local_73.f_3 = 0x00000002;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009))
				{
					Local_73.f_3 = 0x00000004;
				}
				else if (func_41() || func_34(0x00000000))
				{
					Local_73.f_3 = 0x00000008;
				}
				else if (func_32())
				{
					Local_73.f_3 = 0x00000007;
				}
				break;
			
			case 0x00000002:
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009))
				{
					Local_73.f_3 = 0x00000004;
				}
				else if (func_41() || func_34(0x00000001))
				{
					Local_73.f_3 = 0x00000008;
				}
				else if (func_32())
				{
					Local_73.f_3 = 0x00000007;
				}
				break;
			
			case 0x00000003:
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0x7276D3DF) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0x7276D3DF) != 0x00000001)
				{
					Local_73.f_3 = 0x00000004;
				}
				else if (func_34(0x00000001))
				{
					Local_73.f_3 = 0x00000008;
				}
				else if (func_32())
				{
					Local_73.f_3 = 0x00000007;
				}
				break;
			
			case 0x00000004:
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000011))
				{
					iVar0 = 0x00000000;
					iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
					if (iLocal_84 != 0xFFFFFFFF)
					{
						if (unk_0x69DF961355195C3C(iLocal_84))
						{
							if (unk_0xD3DCEC81D13AAFB1(vLocal_81, 3f, 0x00000000))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000019))
								{
									unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000019);
								}
								Local_73.f_21 = (Local_73.f_21 + 0.35f);
							}
							fVar1 = unk_0xA45992A6CE82FB43(iLocal_84);
							if (fVar1 >= 0.8f)
							{
								Local_73.f_25 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_73.f_25 = 0f;
							}
							else if (fVar1 > Local_73.f_25)
							{
								Local_73.f_25 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_73.f_25 = 1f;
								iVar0 = 0x00000001;
							}
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
					if (iVar0 == 0x00000001)
					{
						Local_73.f_3 = 0x00000006;
					}
					else if (func_34(0x00000001))
					{
						Local_73.f_3 = 0x00000008;
					}
					else if (func_32())
					{
						Local_73.f_3 = 0x00000007;
					}
				}
				break;
			
			case 0x00000005:
				if (func_41() || func_34(0x00000001))
				{
					Local_73.f_3 = 0x00000008;
				}
				break;
			
			case 0x00000006:
				func_30();
				if (func_41() || func_34(0x00000001))
				{
					Local_73.f_3 = 0x00000008;
				}
				else if (func_32())
				{
					Local_73.f_3 = 0x00000007;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000003))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000004))
					{
						Local_73.f_3 = 0x00000007;
					}
				}
				break;
			
			case 0x00000008:
				func_30();
				break;
			
			case 0x00000007:
				break;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000A))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_73))
		{
			Local_73.f_2B = (Local_73.f_2B - 0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x0000000A);
		}
	}
	return 0x00000001;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000002))
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
		iVar1 = (iLocal_104 + func_31());
		if (iVar0 < iVar1)
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000003);
		}
		unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000002);
	}
}

int func_31()
{
	int iVar0;
	
	iVar0 = (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_24 - 0x00000001);
	if (iVar0 >= 0x00000004)
	{
		return 0x00000004;
	}
	return iVar0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000018) || unk_0xBFC0798A6E3417F9(0x00000000, 0x00000101))
	{
		iVar0 = func_33(unk_0x16F2683693E537C9());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0x00000000) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0x654E7ACE881E41FE(iVar0);
			if (((((((unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iVar0) == 0x00000000 && iVar1 != 0xD49321D4) && iVar1 != 0x1E3DEED0) && iVar1 != 0x00000000) && iVar1 != 0xFDBF656C) && iVar1 != 0xD035CE98) && iVar1 != 0x19B9968F) && iVar1 != 0xD2F7B56B)
			{
				if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

var func_33(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

int func_34(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_39(unk_0xD803B885F5E47A62(), 0x00000092))
	{
		return 0x00000001;
	}
	if (func_38(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000005))
	{
		return 0x00000001;
	}
	if (unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
	{
		return 0x00000001;
	}
	if (func_37() || func_36())
	{
		return 0x00000001;
	}
	if (func_35())
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		if (unk_0xB98DB26FBF676FA1(0x00000001, iVar0) == 0x000000B9)
		{
			if (unk_0x218F818E64020C17(0x00000001, iVar0, &Var1, 0x0000000D))
			{
				if (unk_0xC844350D5D58C99A(Var1) && unk_0xEC560E589DF8370E(Var1))
				{
					iVar2 = unk_0x940C1429253D3B1B(Var1);
					if (unk_0xEB6A8945D1AC98A1(iVar2) && unk_0x4D570FEF9D230CE7(iVar2) == iLocal_109)
					{
						if (unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1))
						{
							iVar3 = unk_0x940C1429253D3B1B(Var1.f_1);
							if (iVar3 != unk_0x1B50683925F00106(Local_73))
							{
								return 0x00000001;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000005))
		{
			if (unk_0x029064EA9141FCC2(vLocal_115 - Vector(25f, 25f, 25f), vLocal_115 + Vector(25f, 25f, 25f)))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000005);
			}
		}
	}
	return 0x00000000;
}

int func_35()
{
	if (Local_75.f_32 >= 0x0000000F && Local_75.f_32 <= 0x00000013)
	{
		if (unk_0x681F21BF9F7B449B(0x00000009, vLocal_115, 40f))
		{
			return 0x00000001;
		}
	}
	if (unk_0x6AD0ABEEDDABA1F8(0xFFFFFFFF, vLocal_115, vLocal_116, fLocal_117))
	{
		return 0x00000001;
	}
	if (unk_0x6AD0ABEEDDABA1F8(0xFFFFFFFF, vLocal_118, vLocal_119, fLocal_120))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_36()
{
	if ((unk_0x7DF98E52B481B6E3(vLocal_118, vLocal_119, fLocal_120, joaat("weapon_grenade"), 0x00000000) || unk_0x7DF98E52B481B6E3(vLocal_118, vLocal_119, fLocal_120, joaat("weapon_molotov"), 0x00000000)) || unk_0x7DF98E52B481B6E3(vLocal_118, vLocal_119, fLocal_120, joaat("weapon_stickybomb"), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37()
{
	if ((unk_0x7DF98E52B481B6E3(vLocal_115, vLocal_116, fLocal_117, joaat("weapon_grenade"), 0x00000000) || unk_0x7DF98E52B481B6E3(vLocal_115, vLocal_116, fLocal_117, joaat("weapon_molotov"), 0x00000000)) || unk_0x7DF98E52B481B6E3(vLocal_115, vLocal_116, fLocal_117, joaat("weapon_stickybomb"), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_38(int iParam0)
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

int func_39(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0x00000000;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_42()
{
	if (unk_0x53129655DBEDC6EA(vLocal_115, vLocal_116, fLocal_117, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x53129655DBEDC6EA(vLocal_118, vLocal_119, fLocal_120, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_43()
{
	if (Local_73.f_21 > 0f)
	{
		if (func_44(&(Local_73.f_22), 0x00000032, 0x00000000))
		{
			Local_73.f_21 = (Local_73.f_21 - 0.02f);
			if (Local_73.f_21 < 0f)
			{
				Local_73.f_21 = 0f;
			}
			func_14(&(Local_73.f_22));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_19(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_45()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_94)))
	{
		iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_94));
		iVar1 = unk_0x9539D44F3E4492F6(iVar0);
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000005))
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_D))
				{
					if (func_3(Local_73.f_D))
					{
						unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000001);
						func_47(&(Local_73.f_D));
					}
				}
				else
				{
					Local_73.f_26 = { Local_74[iLocal_94 /*10*/].f_7 };
					Local_73.f_2C = 0x00000007;
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000000B);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000E))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000006))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000000E);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000F))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000007))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000000F);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001A))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000018))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000001A);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000016))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000016))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000016);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000017))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000017))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000017);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000019))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000001E);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001F))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000001A))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000001F);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000006))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000001D))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000006);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000009))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000001F))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000009);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000003))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_1, 0x00000003))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000003);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000006))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000006);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000007))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000007);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000005))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000005);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000000B))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000014);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000011))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000000D))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000011);
			}
		}
		if (func_46(iVar0, 0x00000001, 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000005))
			{
				if (!func_393(Local_73))
				{
					if (unk_0xB87D13D0C064E9D1(unk_0x1B50683925F00106(Local_73), iVar1, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000005);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000008))
				{
					if (!func_393(Local_73.f_F))
					{
						if (unk_0xB87D13D0C064E9D1(unk_0x1B50683925F00106(Local_73.f_F), iVar1, 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000008);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000009))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 0x00000003))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000009);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000006);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000010))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000008))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000010);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000001B))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000001);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000007);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000A))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000004))
				{
					if (Local_73.f_3 != 0x00000005 && Local_73.f_3 != 0x00000006)
					{
						Local_73.f_3 = 0x00000005;
					}
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000000A);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000002))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_1, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000002);
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000004);
					iLocal_96 = iLocal_94;
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_96 /*10*/].f_1, 0x00000002))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 0x00000002);
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000003))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_1), 0x00000003);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000008))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x0000001E))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000008);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_1, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000000);
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000001);
					Local_73.f_1A = Local_74[iLocal_94 /*10*/].f_2;
					iLocal_95 = iLocal_94;
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_95 /*10*/].f_1, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 0x00000000);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000D))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0x00000015))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x0000000D);
				}
			}
		}
	}
	iLocal_94++;
	if (iLocal_94 == unk_0x54EABC0DD106045B())
	{
		iLocal_94 = 0x00000000;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000002);
	unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000003);
	unk_0x0674E58A79778E99(&(Local_73.f_17), 0x0000000D);
	unk_0x0674E58A79778E99(&(Local_73.f_17), 0x0000001B);
	unk_0x0674E58A79778E99(&(Local_73.f_17), 0x0000001C);
	unk_0x0674E58A79778E99(&(Local_73.f_18), 0x00000004);
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000012))
	{
		if (func_393(Local_73))
		{
			if (Local_73.f_25 <= 0f)
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000012);
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			iVar6 = unk_0x9539D44F3E4492F6(iVar5);
			if (Local_74[iVar0 /*10*/].f_3 > 0x00000000)
			{
				Local_73.f_4 = (Local_73.f_4 + Local_74[iVar0 /*10*/].f_3);
				Local_74[iVar0 /*10*/].f_3 = 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000003))
			{
				if (unk_0x5A91F08DF773C39D(iVar6, vLocal_114, 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_17), 0x00000003);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000010))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iVar0 /*10*/], 0x0000000C))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000010);
				}
			}
			if (func_46(iVar5, 0x00000001, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000002))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_17), 0x00000002);
				}
				if (unk_0x4D570FEF9D230CE7(iVar6) == iLocal_109)
				{
					if (unk_0xB0A50BC6EDB99CA9(iVar6) == iLocal_110 || unk_0xB0A50BC6EDB99CA9(iVar6) == iLocal_111)
					{
						iVar2 = 0x00000001;
					}
					else if (unk_0xB0A50BC6EDB99CA9(iVar6) == iLocal_112)
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000001B);
						iVar3 = 0x00000001;
					}
				}
				if (iVar2 == 0x00000001 || iVar3 == 0x00000001)
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000000D);
					iVar4++;
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000015))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004))
						{
							if (unk_0xCAE036C45E7FC720(iVar6, &iVar1, 0x00000001))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0x00000000) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_73.f_20 == 0xFFFFFFFF)
									{
										Local_73.f_20 = iVar0;
									}
									else if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_20)))
									{
										Local_73.f_20 = 0xFFFFFFFF;
									}
									unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000004);
									if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000C))
									{
										if (unk_0x5A91F08DF773C39D(iVar6, vLocal_81, 2.5f, 2.5f, 3f, 0x00000000, 0x00000001, 0x00000000))
										{
											unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000000C);
										}
									}
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000000))
						{
							if (unk_0x179932739160BA96(iVar5) > 0x00000000)
							{
								unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000000);
							}
						}
					}
				}
				else if (unk_0x5A91F08DF773C39D(iVar6, vLocal_114, 5f, 5f, 2.5f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x0000001C);
					iVar4++;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000004))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_74[iVar0 /*10*/], 0x0000001C))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x00000004);
					}
				}
				if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000013))
				{
					if (Local_74[iLocal_94 /*10*/].f_6 > Local_73.f_21)
					{
						Local_73.f_21 = Local_74[iVar0 /*10*/].f_6;
						func_14(&(Local_73.f_22));
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000018))
						{
							if (Local_73.f_21 > (0.55f + 0.2f))
							{
								unk_0x5D96D8530B3D0904(&(Local_73.f_17), 0x00000018);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_73.f_29 != iVar4)
	{
		Local_73.f_29 = iVar4;
	}
}

int func_49()
{
	int iVar0;
	
	if ((!unk_0xE9F78D191AD5EDBA(Local_73) || !unk_0xE9F78D191AD5EDBA(Local_73.f_D)) || !unk_0xE9F78D191AD5EDBA(Local_73.f_E))
	{
		if ((func_51(iLocal_80) && func_51(func_52(0x00000001))) && func_51(func_52(0x00000002)))
		{
			if (unk_0x2358623ECCDB11B3(0x00000001, 0x00000000, 0x00000002, 0x00000000))
			{
				if (!unk_0xE9F78D191AD5EDBA(Local_73))
				{
					if (func_50(&Local_73, 0x00000004, iLocal_80, vLocal_81 - Vector(1f, 0f, 0f), Local_73.f_2A, 0x00000001, 0x00000001, 0x00000001))
					{
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 0x00000000, iLocal_286[0x00000000], iLocal_287[0x00000000], 0x00000000);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 0x00000002, iLocal_286[0x00000001], iLocal_287[0x00000001], 0x00000000);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 0x00000003, iLocal_286[0x00000002], iLocal_287[0x00000002], 0x00000000);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 0x00000004, iLocal_286[0x00000003], iLocal_287[0x00000003], 0x00000000);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 0x00000008, iLocal_286[0x00000004], iLocal_287[0x00000004], 0x00000000);
						unk_0xAA738CBC845A2BD8(unk_0x1B50683925F00106(Local_73), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
						unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0x00000001);
						unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73), 0x00000001, 0x00000000);
						unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
						unk_0xC978532B427F303B(unk_0x1B50683925F00106(Local_73), 0x00000000);
						unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 0x00000400, 0x00000001);
						unk_0xE3A2D2E900FEFBE7(unk_0x1B50683925F00106(Local_73), 0x00000001);
						unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_73), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
						if (!unk_0x30F813723591D02E(unk_0x1B50683925F00106(Local_73), "XP_Blocker"))
						{
							unk_0xA1093ABB024EC9BD(unk_0x1B50683925F00106(Local_73), "XP_Blocker", 0x00000001);
						}
						func_392(&uLocal_121, 0x00000003, unk_0x1B50683925F00106(Local_73), &(Local_73.f_2E), 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_D))
				{
					iVar0 = unk_0xEC03378782221D46(0x94FA0B5E, vLocal_97, 0x00000000, func_52(0x00000001));
					if (unk_0xC844350D5D58C99A(iVar0))
					{
						Local_73.f_D = unk_0x4193A2DE62BC07C0(iVar0);
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001);
						unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000000, 0x00000000);
						unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_73.f_D), fLocal_98);
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_D), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001);
						unk_0x568AB11F0ED52091(unk_0x09AD4CE7DA179533(Local_73.f_D), -0.2f, 0x00000001);
						unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000000);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_E))
				{
					if (func_26(&(Local_73.f_E), func_52(0x00000002), vLocal_99 - Vector(0.12f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_73.f_E), fLocal_100);
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_E), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_E), 0x00000001);
					}
				}
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_50(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*iParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*iParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, bParam7);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*iParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_51(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("mp_m_shopkeep_01");
		
		case 0x00000001:
			return joaat("p_poly_bag_01_s");
		
		case 0x00000002:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_53()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000014))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B) || unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000010))
		{
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109 || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 5f, 5f, 2.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_56();
				func_54();
				func_6(Local_75.f_32, 0x00000001, func_7());
				unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000014);
			}
			else
			{
				if ((unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001F) && (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_56();
				}
				unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000014);
			}
		}
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = func_55(0x0000002F);
	Global_24D752[iVar0 /*83*/] = 0x0000002F;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
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

void func_56()
{
	int iVar0;
	
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))
	{
		iVar0 = func_126(0x0000049D, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, Local_75.f_32))
		{
			func_124(0x0000000E, 0x00000001, 0xFFFFFFFF);
			unk_0x5D96D8530B3D0904(&iVar0, Local_75.f_32);
			func_123(0x0000049D, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			if (func_122(0x0000000E, 0xFFFFFFFF) >= 0x00000014)
			{
				func_108(0x0000002C, 0x00000001);
			}
			else
			{
				func_107(0x0000002C, func_122(0x0000000E, 0xFFFFFFFF));
			}
		}
		func_105(0x0000048F, 0x00000001, 0xFFFFFFFF);
		func_104(0x0000000C, 0x00000001, 0xFFFFFFFF, 0x00000001);
		func_102(0x00000013);
		iLocal_304 = 0x00000064;
		iLocal_304 = SYSTEM::ROUND((IntToFloat(iLocal_304) * Global_40001.f_1082));
		func_57(0x00000002, "XPT_HOLDUP", 0x9E79F1A6, 0xF1F32D14, iLocal_304, 0x00000001, 0xFFFFFFFF, 0x00000000);
	}
}

var func_57(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_58(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_59(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_101(unk_0xD803B885F5E47A62()) || func_100(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_97() || func_93(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 0x00003A98)
	{
		iVar2 = 0x00003A98;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_92(sParam2))
	{
	}
	if (func_91())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_89(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_88(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_85(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_85(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_81(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 0x00000001)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_105(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_70((func_80(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_105(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_64(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_60((func_62(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_60((func_62(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_60(int iParam0)
{
	if (func_91())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_61(joaat("mpply_globalxp"), iParam0);
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_62(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_46(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_63(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_63(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_63(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_64(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_69(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_67(func_68(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_66(&Global_152D8B, iParam0);
				func_65(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_66(&Global_152D8C, iParam0);
				func_65(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_66(&Global_152D8D, iParam0);
				func_65(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_66(&Global_152D8E, iParam0);
				func_65(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_66(&Global_152D8F, iParam0);
				func_65(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_67(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_152D87)
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_152D88)
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_152D89)
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 0x00000004;
	}
	else
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_68(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_91())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_78(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_78(0xFFFFFFFF)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xBAEFBC23, 0xAFCE7619);
				if (iParam2 == 0x00000000)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 < 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xA169804B, iParam1);
				return;
			}
		}
		if (func_77(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_75(iParam0, 0x00000001);
		}
		func_74(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_123(0x00000280, func_75(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_78(0xFFFFFFFF)] = iParam0;
		func_71(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_72()
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

int func_73(int iParam0, var uParam1)
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

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_78(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0x00000000);
}

int func_76(int iParam0, int iParam1)
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

int func_77(int iParam0)
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

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1407E9;
}

int func_80(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_78(0xFFFFFFFF)];
			}
			else if (func_77(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_78(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 0xFFFFFFFF)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_84(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_83(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_82(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_82(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_82(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_69(iParam0) };
		Global_26594F = { func_69(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 0x00000023, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0x00000001)
	{
		if (iParam0 == iParam1)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iParam0 > 0xFFFFFFFF && iParam1 > 0xFFFFFFFF) && iParam0 == iParam1)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000000);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000001);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000002);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000003);
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000004);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000005);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000006);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000007);
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000008);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000009);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000A);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000B);
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000C);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000D);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000E);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000F);
				
				default:
			}
			break;
	}
	return 0x00000000;
}

void func_85(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_46(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_83(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar4 = iVar0;
			if (func_46(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_86(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_82(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_82(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_86(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_87(iParam0), func_87(iParam1));
	return 0f;
}

Vector3 func_87(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_82(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_89(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_80(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_80(unk_0xD803B885F5E47A62());
		}
	}
	if (func_90(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_90(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_80(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_90(0x00001F40, 0x00000000, 0x00000000) - func_80(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_90(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0x00000000)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 0x00001F40)
	{
		iParam0 = 0x00001F40;
	}
	return Global_4713D[iParam0];
}

int func_91()
{
	return 0x00000001;
}

int func_92(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_93(int iParam0)
{
	return func_94(func_95(iParam0));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_97()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_99();
	}
	return func_98(Global_440000.f_2F9AE);
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

var func_99()
{
	return Global_2564C8.f_11;
}

bool func_100(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_101(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_102(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_103() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 0xFFFFFFFF)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 0x00000001;
				return;
			}
		}
		iVar0++;
	}
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_104(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_79();
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

void func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_78(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_106(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_106(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_107(int iParam0, int iParam1)
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

int func_108(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_109(iParam0, iParam1);
}

int func_109(int iParam0, int iParam1)
{
	if (func_121(0x0000000E) && !func_120(iParam0))
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
	if (func_119(&Global_4127F1))
	{
		if (func_117(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_110(&Global_4127F1, iParam0))
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

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_121(0x0000000E) && !func_120(iParam1))
	{
		return 0x00000000;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0x00000000);
	}
	func_113(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_111(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_121(0x0000000E) && !func_120(iParam1))
	{
		return 0x00000000;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_112(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_112(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_113(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_114(uParam0, iVar0);
		iVar0++;
	}
	func_115(uParam0, (Global_4127F0 - 0.5f));
}

void func_114(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_115(var uParam0, float fParam1)
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

float func_116(var uParam0)
{
	return uParam0->f_50;
}

bool func_117(var uParam0, int iParam1)
{
	return func_118(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_118(var uParam0, int iParam1)
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

bool func_119(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_120(int iParam0)
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

bool func_121(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_78(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_122(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_125(iParam0, iVar0, iParam2);
}

void func_125(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_78(uParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_127(var uParam0)
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

void func_128(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_19(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_129()
{
	bool bVar0;
	int iVar1;
	
	func_251();
	func_221();
	func_172();
	func_53();
	func_170();
	func_169();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
		{
			if (Global_26B66F.f_16FC.f_1 == 0x00000000)
			{
				Global_26B66F.f_16FC.f_1 = 0x00000001;
			}
			if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == iLocal_110 || unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == iLocal_111)
			{
				bVar0 = 0x00000001;
			}
			else if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == iLocal_112)
			{
				iVar1 = 0x00000001;
			}
		}
		else if (Global_26B66F.f_16FC.f_1 == 0x00000001)
		{
			Global_26B66F.f_16FC.f_1 = 0x00000000;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001F))
	{
		if (func_95(unk_0xD803B885F5E47A62()) != 0x0000009A)
		{
			if ((bVar0 || iVar1) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, (5f / 2f), (5f / 2f), (5f / 2f), 0x00000000, 0x00000001, 0x00000000))
			{
				if (!func_38(unk_0xD803B885F5E47A62()))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x0000001F);
				}
			}
		}
	}
	if ((!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001A) && bVar0) && !(func_168(0x00000000) || func_167()))
	{
		if (func_165("SNK_MNU", Local_75, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x0000001A);
		}
	}
	if (!bVar0 && unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001A))
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) || (unk_0x9F4FE516EAACCFC5(Local_75.f_1) && unk_0xFBB4F23D534EB790(Local_75.f_1)))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			if (Local_75.f_33 > 0x00000000)
			{
				Local_74[unk_0x57270EE11514DC67() /*10*/].f_3 = Local_75.f_33;
				Local_75.f_33 = 0x00000000;
			}
			func_408();
			unk_0x0674E58A79778E99(&(Local_75.f_35), 0x00000007);
			if (unk_0x9F4FE516EAACCFC5(Local_75.f_1))
			{
				unk_0x9A8DDC7C522F5BF5(Local_75.f_1, 0x00000000);
			}
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		}
		func_162(0x00000001, Local_75);
		unk_0x0674E58A79778E99(&(Local_75.f_34), 0x0000001A);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000015))
	{
		if (iVar1 || func_160(unk_0x16F2683693E537C9(), Local_75.f_32))
		{
			unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000015);
		}
	}
	if (bVar0 || iVar1)
	{
		func_157();
		func_151();
		func_145();
		func_141(0x00000001);
		func_134();
		unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
		unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_7, 0x00000000))
		{
			unk_0x38F2DF3E2CE56869(Local_73.f_47);
			func_132(vLocal_114, func_133(0x0000001E), 0x00000000);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_7), 0x00000000);
		}
	}
	else
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 5f, 5f, 2.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_141(0x00000000);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_7, 0x00000000))
		{
			unk_0xF4F1F4F85B61EBA2();
			func_130(vLocal_114, func_133(0x0000001E), "");
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_7), 0x00000000);
		}
	}
	if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000016) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000017)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007))
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
	}
}

int func_130(vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000010)
		{
			if (!unk_0x7F8A39872A07D2CE(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4)))
				{
					Global_26B66F.f_F80[iVar0 /*26*/] = 0x00000001;
					Global_26B66F.f_F80[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_A), sParam2, 64);
					return 0x00000001;
				}
			}
			else if (!func_131(Global_26B66F.f_F80[iVar0 /*26*/].f_1, vParam0, 0x00000000))
			{
				Global_26B66F.f_F80[iVar0 /*26*/] = 0x00000001;
				Global_26B66F.f_F80[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_A), sParam2, 64);
				return 0x00000001;
			}
			else
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_131(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_132(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000010)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_131(Global_26B66F.f_F80[iVar0 /*26*/].f_1, vParam0, 0x00000000))
				{
					Global_26B66F.f_F80[iVar0 /*26*/] = 0x00000000;
					Global_26B66F.f_F80[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_A), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_133(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0674E58A79778E99(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000001C);
	if (!func_393(Local_73) && func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_73), 45f)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_73), 5f, 5f, 2f, 0x00000000, 0x00000001, 0x00000000)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73))) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73)))
				{
					if (!(func_168(0x00000000) || func_167()) && ((!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 0x0000009A) || func_95(unk_0xD803B885F5E47A62()) == 0x000000AB))
					{
						if (func_136(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73)) || unk_0x9749E8930AE90341(unk_0xD803B885F5E47A62()))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))
							{
								func_135(func_8(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())));
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000001);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000008))
							{
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000008);
							}
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000001C);
					}
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001C))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000001C))
		{
			if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001))
			{
				if (iVar1 != 0x00000000 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0x654E7ACE881E41FE(iVar1);
					if (iVar2 == 0x18D5FA97)
					{
						sLocal_79 = "hold_up_head_additive_pistol";
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 8f, -8f, 0xFFFFFFFF, 0x00000131, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else if ((((iVar2 == 0x451B04BC || iVar2 == 0x39D5C192) || iVar2 == 0x33431399) || iVar2 == 0xB7BBD827) || iVar2 == 0xC6E9A5C5)
					{
						sLocal_79 = "hold_up_head_additive_rifle";
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 8f, -8f, 0xFFFFFFFF, 0x00000131, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						sLocal_79 = "";
					}
					unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x0000001C);
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000001C) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEA6BC48857E0AC4C(sLocal_79))
		{
			if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 0x00000003))
			{
				unk_0xFB131B855F2FD560(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 0xC1000000);
			}
		}
		unk_0x0674E58A79778E99(&(Local_75.f_34), 0x0000001C);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 0x00000003))
		{
			if (!func_393(Local_73.f_F) && func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar3, 0x00000001))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_168(0x00000000) || func_167()))
					{
						if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73.f_F)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73.f_F)))
						{
							if (func_136(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73.f_F)) || unk_0x9749E8930AE90341(unk_0xD803B885F5E47A62()))
							{
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 0x00000003);
							}
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 0x8A7ED442;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000002, iParam0);
	}
}

int func_136(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_46(iParam0, 0x00000001, 0x00000001))
	{
		vVar0 = { func_87(iParam0) };
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_137(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_137(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_138(int iParam0)
{
	if (func_40(iParam0))
	{
		return 0x00000001;
	}
	if (func_139(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_140(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_140(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD803B885F5E47A62() != Global_26B66F.f_13B9 && !func_38(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000006))
		{
			if (iParam0 == 0x00000001)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0x00000000) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_81, 2.5f, 2.5f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							iVar1 = 0x00000001;
						}
						iVar0 = 0x00000001;
					}
				}
				if ((((iVar1 == 0x00000001 || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000005)) || (iVar0 == 0x00000001 && Local_73.f_3 >= 0x00000003)) || (iVar0 == 0x00000001 && unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000010))) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000000C))
				{
					if (((!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000C) || Local_73.f_3 >= 0x00000003) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000000C)) || (iVar0 == 0x00000001 && unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000010)))
					{
						Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_24++;
						func_14(&(Global_2537E2.f_EA4));
						func_19(&(Global_2537E2.f_EA4), 0x00000000, 0x00000000);
						if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_24 <= 0x00000002)
						{
							if (func_144())
							{
								if (func_143() < 0x00000002)
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(func_143()));
								}
								else
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000002));
								}
							}
							else
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000002));
							}
						}
						else if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_24 >= 0x00000005)
						{
							if (func_144())
							{
								if (func_143() < 0x00000003)
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(func_143()));
								}
								else
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000003));
								}
							}
							else
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000004));
							}
						}
						else if (func_144())
						{
							if (func_143() < 0x00000003)
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(func_143()));
							}
							else
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000003));
							}
						}
						else
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000003));
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000002);
						}
						unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000006);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000019);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001B) && !unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000006))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					if (func_18(&uLocal_107, 0x000007D0, 0x00000000) || unk_0x05569C69D7945F99(unk_0x16F2683693E537C9()))
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000001));
						unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x0000001B);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000001B);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000019);
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000002);
						}
					}
				}
				else if (func_142(&uLocal_107))
				{
					func_14(&uLocal_107);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000018))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001F))
			{
				if (func_393(Local_73))
				{
					if (func_144())
					{
						if (func_143() < 0x00000003)
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(func_143()));
						}
						else
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000003));
						}
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x0000000D, unk_0xBC64C2447446D57B(0x00000003));
					}
					unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000018);
					if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000002);
					}
				}
			}
		}
	}
}

bool func_142(var uParam0)
{
	return uParam0->f_1;
}

int func_143()
{
	return Global_40001.f_3135;
}

int func_144()
{
	if (func_139(unk_0xD803B885F5E47A62()) && func_95(unk_0xD803B885F5E47A62()) == 0x0000009A)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_145()
{
	int iVar0;
	int iVar1;
	
	if (func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000017) && unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000011))
		{
			if (!func_393(Local_73))
			{
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
				if (iLocal_84 != 0xFFFFFFFF)
				{
					if (unk_0x69DF961355195C3C(iLocal_84))
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Global_193A66, 0x0000000F) && func_150()) && func_149())
						{
							unk_0x5D96D8530B3D0904(&Global_193A66, 0x0000000F);
						}
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							iVar0 = func_126(0x000004A6, 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
							{
								if (unk_0xA45992A6CE82FB43(iLocal_84) < 0.4f && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
								{
									func_148("FHU_HELP3", 0xFFFFFFFF);
									unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
									func_123(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005) || !unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
							{
								if (unk_0xA45992A6CE82FB43(iLocal_84) < 0.7f && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
								{
									func_148("FHU_HELP4", 0xFFFFFFFF);
									unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
									func_123(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
									unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000017);
								}
							}
							else
							{
								unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000017);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(unk_0xD803B885F5E47A62(), 0x00000092) && !func_147()) && func_95(unk_0xD803B885F5E47A62()) != 0x000000A7) && func_95(unk_0xD803B885F5E47A62()) != 0x000000BE) && func_95(unk_0xD803B885F5E47A62()) != 0x000000BF) && func_95(unk_0xD803B885F5E47A62()) != 0x000000FA) && func_95(unk_0xD803B885F5E47A62()) != 0x000000ED) && func_95(unk_0xD803B885F5E47A62()) != 0x000000EE) && !func_38(unk_0xD803B885F5E47A62())) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 0x0000009A))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000001))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (((((func_393(Local_73) || Local_73.f_3 > 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B)) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000005)) && unk_0xA4F4A1E4DDB4728B(vLocal_85, 1.5f) == 0x00000000)
					{
						iVar1 = func_126(0x000004A6, 0xFFFFFFFF, 0x00000000);
						if (!unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000014) || !unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000015))
						{
							func_148("FHU_HELPM", 0xFFFFFFFF);
							if (!unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000014))
							{
								unk_0x5D96D8530B3D0904(&iVar1, 0x00000014);
							}
							else
							{
								unk_0x5D96D8530B3D0904(&iVar1, 0x00000015);
							}
							func_123(0x000004A6, iVar1, 0xFFFFFFFF, 0x00000001, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000001);
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000001);
						}
					}
				}
			}
			else if (func_146("FHU_HELPM"))
			{
				if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B)) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000005))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
		}
	}
}

bool func_146(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_147()
{
	return Global_1801DE;
}

void func_148(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_149()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C4, 0x00000015);
}

bool func_150()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000003);
}

void func_151()
{
	float fVar0;
	float fVar1;
	
	if (Local_73.f_3 == 0x00000004)
	{
		if (func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!func_393(Local_73))
			{
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
				if (iLocal_84 != 0xFFFFFFFF)
				{
					if (unk_0x69DF961355195C3C(iLocal_84))
					{
						fVar0 = unk_0xA45992A6CE82FB43(iLocal_84);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_152(SYSTEM::ROUND(fVar0), 0x0000037A, "HUP_PROG", func_156(unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62())), 0x00000000, 0x00000001, 0x0000000D);
						}
						fVar1 = unk_0x71FE9B11268C88D8(unk_0xD803B885F5E47A62());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_74[unk_0x57270EE11514DC67() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_152(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0x00000000, iParam5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
}

void func_153(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_155(0x00000000, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_154(0x00000000, iVar0);
		Global_150976.f_46F[iVar0] = uParam0;
		Global_150976.f_46F.f_B[iVar0] = uParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = uParam3;
		Global_150976.f_46F.f_B7[iVar0] = uParam4;
		Global_150976.f_46F.f_D8[iVar0] = uParam5;
		Global_150976.f_46F.f_E3[iVar0 /*3*/] = fParam6;
		Global_150976.f_46F.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_150976.f_46F.f_102[iVar0] = iParam8;
		Global_150976.f_46F.f_10D[iVar0] = uParam9;
		Global_150976.f_46F.f_138[iVar0] = iParam10;
		Global_150976.f_46F.f_143[iVar0] = iParam11;
		Global_150976.f_46F.f_14E[iVar0] = iParam12;
		Global_150976.f_46F.f_159[iVar0] = iParam13;
		Global_150976.f_46A = 0x00000001;
		Global_150976.f_46F.f_164[iVar0] = iParam14;
		Global_150976.f_46F.f_16F[iVar0] = iParam15;
		Global_150976.f_46F.f_17A[iVar0] = iParam16;
		Global_150976.f_46F.f_185[iVar0] = iParam17;
		Global_150976.f_46F.f_190[iVar0] = iParam18;
		Global_150976.f_46F.f_19B[iVar0] = iParam19;
		Global_150976.f_46F.f_1A6[iVar0] = iParam20;
		Global_150976.f_46F.f_1B1[iVar0] = iParam21;
		Global_150976.f_46F.f_1BC[iVar0] = iParam22;
		Global_150976.f_46F.f_1C7[iVar0] = iParam23;
		Global_150976.f_46F.f_1D2[iVar0] = iParam24;
		Global_150976.f_46F.f_CD[iVar0] = iParam25;
		Global_150976.f_46F.f_1DD[iVar0] = iParam26;
		Global_150976.f_46F.f_1E8[iVar0] = iParam27;
		Global_150976.f_46F.f_1F3[iVar0] = iParam28;
		Global_150976.f_46F.f_1FE[iVar0] = iParam29;
		Global_150976.f_46F.f_209[iVar0] = iParam30;
		Global_150976.f_46F.f_214[iVar0] = iParam31;
		Global_150976.f_46F.f_21F[iVar0] = iParam32;
		Global_150976.f_46F.f_22A[iVar0] = iParam33;
	}
}

void func_154(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_155(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
	}
	return 0x00000074;
}

void func_157()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000002))
	{
		unk_0x3F423BF5B8125A50("oddjobs@shop_robbery@rob_till");
		unk_0x3F423BF5B8125A50(func_158());
		if (unk_0xB4AE0788C1587752("oddjobs@shop_robbery@rob_till") && unk_0xB4AE0788C1587752(func_158()))
		{
			unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000002);
		}
	}
}

char* func_158()
{
	if (func_159(unk_0xD803B885F5E47A62()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_159(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000001;
	}
	return Global_25033E[iParam0 /*421*/].f_E6;
}

int func_160(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_161(iParam1, &vVar0, &vVar1, &fVar2);
	if (unk_0x3D1053F9EB43B7AD(iParam0, vVar0, vVar1, fVar2, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_161(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0x00000000)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000001)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000002)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000003)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000004)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000005)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000006)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000007)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000008)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x00000009)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 0x0000000A)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 0x0000000B)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 0x0000000C)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 0x0000000D)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 0x0000000E)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 0x0000000F)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 0x00000010)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 0x00000011)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 0x00000012)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 0x00000013)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_162(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_164(&iVar0, 0x00000000, iParam1))
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
		func_163(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_163(int iParam0)
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

int func_164(var uParam0, bool bParam1, int iParam2)
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

bool func_165(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_164(&iVar0, 0x00000001, iParam1))
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
	bVar2 = func_166(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_166(var uParam0)
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

int func_167()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_168(int iParam0)
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

void func_169()
{
	if (unk_0xD803B885F5E47A62() != Global_26B66F.f_13B9 && !func_38(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000018))
		{
			if (Local_73.f_48 == unk_0xD803B885F5E47A62() || (unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001F) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_115, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000)))
			{
				if (func_393(Local_73))
				{
					if (func_144())
					{
						if (func_143() < 0x00000003)
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(func_143()));
						}
						else
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000003));
						}
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x0000000D, unk_0xBC64C2447446D57B(0x00000003));
					}
					unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000018);
					if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000002);
					}
				}
			}
		}
	}
}

int func_170()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_393(Local_73.f_F))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_303))
		{
			unk_0x142CC44DB769B57E(&iLocal_303);
		}
		return 0x00000000;
	}
	if (Local_73.f_42 == 0x00000004)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_303))
		{
			iLocal_303 = unk_0x5C3B41825F6AC5A0(unk_0x1B50683925F00106(Local_73.f_F));
			unk_0x61755AC17D8F538E(iLocal_303, 0x00000001);
			unk_0x516E63E474722206(iLocal_303, 0.7f);
		}
	}
	if (!unk_0x526BC32A660C89E6(Local_73.f_F))
	{
		return 0x00000000;
	}
	switch (Local_73.f_42)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x2A89B8A7) != 0x00000000)
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x2A89B8A7) != 0x00000001)
				{
					if (func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
					{
						unk_0xE185F110925D87DB(unk_0x1B50683925F00106(Local_73.f_F), unk_0x16F2683693E537C9(), 0xFFFFFFFF, 4f, 2f, 0x40000000, 0x00000000);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 0x00000000))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x4924437D) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x4924437D) != 0x00000001)
				{
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73.f_F), unk_0x16F2683693E537C9(), 0x00002710);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 0x00000000);
				}
			}
			if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 0x00000001)) && !func_171())
			{
				func_392(&uLocal_121, 0x00000004, unk_0x1B50683925F00106(Local_73.f_F), "StoreHero", 0x00000001, 0x00000000);
				unk_0xC8B576D6F470FFC6(unk_0x1B50683925F00106(Local_73.f_F), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 0x00000001);
			}
			break;
		
		case 0x00000004:
			if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 0x00000002)) && !func_171())
			{
				func_392(&uLocal_121, 0x00000004, unk_0x1B50683925F00106(Local_73.f_F), "StoreHero", 0x00000001, 0x00000000);
				unk_0xC8B576D6F470FFC6(unk_0x1B50683925F00106(Local_73.f_F), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 0x00000002);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_19, 0x00000007) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 0x00000002))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0xAA05B492) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0xAA05B492) != 0x00000001)
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73.f_F));
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_F), Global_18085E);
					unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73.f_F), 20f, 0x00000000);
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_F), 0x00000001);
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x0E763797) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0x0E763797) != 0x00000001)
			{
				unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73.f_F));
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73.f_F), iLocal_89);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_F), 0x00000001);
			}
			else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0xCBCE4595) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_F), 0xCBCE4595) != 0x00000000)
			{
				if (func_18(&uLocal_105, 0x00001388, 0x00000000))
				{
					func_14(&uLocal_105);
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73.f_F), unk_0x16F2683693E537C9(), 0x00002710);
				}
			}
			break;
	}
	return 0x00000001;
}

int func_171()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_172()
{
	if (Local_73.f_3 == 0x00000004)
	{
		if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000A) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000004)) && unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000011))
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_D))
			{
				if (unk_0x526BC32A660C89E6(Local_73.f_D) || (!unk_0x83F012E6200426DB(Local_73.f_D) && unk_0xBFF81ED3B99522C7()))
				{
					if (!func_393(Local_73))
					{
						if (unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
						{
							unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000000);
							unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001);
							unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_73.f_D), 0f, 0f, -1f);
							unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000004);
						}
					}
					else
					{
						unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000000);
						unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001);
						unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_73.f_D), 0f, 0f, -1f);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000004);
					}
				}
			}
		}
	}
	func_173();
}

void func_173()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_D))
	{
		if (!unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000000))
		{
			if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000005)) && Local_73.f_25 > 0f)
			{
				if (((func_220() || func_219(0.87f)) || Local_73.f_3 >= 0x00000005) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000A))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000000B))
					{
						if (unk_0x526BC32A660C89E6(Local_73.f_D))
						{
							unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000000D);
						}
						if (func_95(unk_0xD803B885F5E47A62()) != 0x0000009B)
						{
							unk_0xD3DD9662CCFC031F(func_52(0x00000001), 0x00000001);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000000B);
					}
					if (unk_0x50B5F6F3C29E9380(unk_0x09AD4CE7DA179533(Local_73.f_D), unk_0x16F2683693E537C9()))
					{
						Local_74[unk_0x57270EE11514DC67() /*10*/].f_7 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						unk_0xE82754C349C7B581(Local_74[unk_0x57270EE11514DC67() /*10*/].f_7, &(Local_74[unk_0x57270EE11514DC67() /*10*/].f_7.f_2), 0x00000000, 0x00000000);
						if (unk_0x526BC32A660C89E6(Local_73.f_D))
						{
							unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000001);
							func_47(&(Local_73.f_D));
						}
						iVar0 = unk_0x09AC81E49EA267F7(iLocal_102, iLocal_103);
						if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000A))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_73.f_25));
						}
						if (Local_73.f_4 > 0x000003E8)
						{
							Local_73.f_4 = 0x000003E8;
						}
						iVar0 = (iVar0 + Local_73.f_4);
						iVar0 = func_218(iVar0, 0x00000001);
						if (iVar0 > Global_40001.f_A7)
						{
							iVar0 = Global_40001.f_A7;
						}
						if (func_217(unk_0xD803B885F5E47A62()) && func_215(func_216(unk_0xD803B885F5E47A62())) < 1f)
						{
							if (Global_40001.f_1083 > 1f)
							{
								Global_40001.f_1083 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1083));
						}
						if (iVar0 > 0x00000000)
						{
							if (func_214())
							{
								func_203(0x676706D3, iVar0, &uVar1, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_199(iVar0, 0x00000001, 0x00000001, 0x41200000);
								unk_0xDACD1EB0C24D33AC(iVar0);
							}
						}
						Global_26B66F.f_16FC = (Global_26B66F.f_16FC + iVar0);
						Global_26B66F.f_16FC.f_2 = 0x00000001;
						Global_26B66F.f_16FC.f_5 = 0x00000001;
						iLocal_305 = (iLocal_305 + iVar0);
						func_198(0x00000003);
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000005))
						{
							func_197(Local_73.f_26, iVar0);
						}
						else
						{
							func_188(unk_0x16F2683693E537C9(), iVar0);
						}
						func_187(0x00000001, iVar0);
						if (func_183(0x00000001))
						{
							func_174(0x00000004);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000005);
						unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000006);
					}
				}
			}
		}
	}
}

void func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_40001.f_451C;
			break;
		
		case 0x00000001:
			iVar0 = Global_40001.f_4512;
			break;
		
		case 0x00000002:
			iVar0 = Global_40001.f_451D;
			break;
		
		case 0x00000003:
			iVar0 = Global_40001.f_4515;
			break;
		
		case 0x00000004:
			iVar0 = Global_40001.f_4511;
			break;
		
		case 0x00000006:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000007:
			iVar0 = Global_40001.f_4520;
			break;
		
		case 0x00000008:
			iVar0 = Global_40001.f_4521;
			break;
		
		case 0x00000009:
			iVar0 = Global_40001.f_4524;
			break;
		
		case 0x00000016:
			iVar0 = Global_40001.f_4525;
			break;
		
		case 0x00000017:
			iVar0 = Global_40001.f_451E;
			break;
		
		case 0x00000019:
			iVar0 = Global_40001.f_4897;
			break;
		
		case 0x0000001A:
			iVar0 = Global_40001.f_4896;
			break;
	}
	if (iVar0 != 0x00000000)
	{
		unk_0xF9647457141B11A7(func_181(func_182()), func_179(func_182()), func_178(), func_177(), iParam0, iVar0);
	}
	func_176(iVar0);
	func_175(iVar0);
}

void func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = func_126(0x00000F80, 0xFFFFFFFF, 0x00000000);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (iVar0 > 0x0000270F)
	{
		iVar0 = 0x0000270F;
	}
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1EA = iVar0;
	func_123(0x00000F80, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

void func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 + iParam0);
	if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 < 0xFFFFD8F1)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 0x0000270F;
	}
	else if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 > 0x0000270F)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 0x0000270F;
	}
}

int func_177()
{
	if (Global_198C74.f_3 != 0x00000000)
	{
		return Global_198C74.f_3;
	}
	return 0xFFFFFFFF;
}

int func_178()
{
	if (Global_198C74.f_2 != 0x00000000)
	{
		return Global_198C74.f_2;
	}
	return 0xFFFFFFFF;
}

int func_179(int iParam0)
{
	if (iParam0 == func_180())
	{
		return 0xFFFFFFFF;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000001];
}

int func_180()
{
	return 0xFFFFFFFF;
}

int func_181(int iParam0)
{
	if (iParam0 == func_180())
	{
		return 0xFFFFFFFF;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000000];
}

int func_182()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_183(bool bParam0)
{
	return func_184(unk_0xD803B885F5E47A62(), bParam0);
}

int func_184(int iParam0, bool bParam1)
{
	return func_185(iParam0, bParam1, 0x00000001);
}

int func_185(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_180())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_186(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_180() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0 != func_180())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_180())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_187(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		if (Global_40001.f_5BC1 == 0x00000000 || Global_40001.f_5BC1 == 0x00000001)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 0x00000001)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0x00000000;
			}
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_195(unk_0x16F2683693E537C9(), 0x00000001) };
	if (iParam0 == func_194(unk_0x16F2683693E537C9()))
	{
		func_193(0x00000001);
	}
	func_189(vVar0, iParam1, 0x00000007, 0x00000000, 0x00000000);
}

void func_189(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0x00000000)
	{
		iVar1 = 0xFFFFFFFF;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000014)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000000 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000007)
			{
				iVar1 = iVar0;
				iVar0 = 0x00000014;
			}
			iVar0++;
		}
		if (iVar1 != 0xFFFFFFFF)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 0x00000001;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_192(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_191();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_190();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_190()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_191()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_192(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 0x00000001);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

void func_193(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_194(int iParam0)
{
	return iParam0;
}

Vector3 func_195(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(0x00000002) };
	}
	if (iParam0 == func_196(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_196(int iParam0)
{
	return iParam0;
}

void func_197(vector3 vParam0, int iParam1)
{
	func_189(vParam0, iParam1, 0x00000006, 0x00000000, 0x00000000);
}

void func_198(int iParam0)
{
	Global_2537E2.f_765 = iParam0;
}

void func_199(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_200(iParam0, iParam1, iParam2, fParam3);
}

void func_200(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_201(iParam0, iParam1, iParam2, fParam3);
}

void func_201(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 0x00000001)
	{
		iParam1 = 0x00000001;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0x00000000)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 0x00000001)
	{
		func_202(iVar1, 0x00000000);
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_203(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_214())
	{
		return;
	}
	iVar0 = 0x00000001;
	if (bParam4)
	{
		iVar0 = 0x00000004;
	}
	else if (bParam3)
	{
		iVar0 = 0x00000002;
	}
	else if (bParam5)
	{
		iVar0 = 0x00000008;
	}
	switch (iParam0)
	{
		case 0x9DEFCB5B:
		case 0xDD16A585:
		case 0xAEF994E9:
		case 0x1B14F96B:
		case 0xC571DB3D:
		case 0x61F840EB:
		case 0x847B5E8A:
		case 0x26C85CA3:
		case 0x62A4B6CC:
		case 0xCBBC5D1E:
		case 0x040E0F34:
		case 0x8180486D:
		case 0x15DAFB97:
		case 0x10E398B4:
		case 0x11611C06:
		case 0x467E2916:
		case 0xE13B1F5A:
		case 0x3DC70F44:
		case 0x108CD6EE:
		case 0x79D2BE32:
		case 0x6DA50854:
		case 0x3CF098E4:
		case 0x73AF3590:
		case 0xAD32107E:
		case 0x2A6B291E:
		case 0x6597C63C:
		case 0x5A58E3BD:
		case 0x45F48C05:
		case 0xCA5E1B40:
		case 0xD86D0371:
		case 0x48090EBA:
		case 0xDB72FD6E:
		case 0xD80064A4:
		case 0xE7BA9A2C:
		case 0xD30E80F5:
		case 0x8F9E64E9:
		case 0x7323DAB3:
		case 0x3F79E8B3:
		case 0xF54343EF:
		case 0x7F096F7D:
		case 0x601646D2:
		case 0xE1286116:
		case 0x741DADD0:
		case 0x421452FF:
		case 0x92AEAB9C:
		case 0xB62639D4:
		case 0xF2BEFF3E:
		case 0xB3E76D2C:
		case 0x5D40F1F0:
		case 0xFA3E19A3:
		case 0x2C41A631:
		case 0x7A31F111:
		case 0x978B277B:
		case 0x25CFCEFF:
		case 0x6E53C312:
		case 0x2D80114E:
		case 0x73BA02A6:
		case 0x27A4C3FB:
		case 0xB0AE4A42:
		case 0x75CD3B70:
		case 0x10077806:
		case 0x6F6E2AEA:
		case 0xEBECC7F6:
		case 0xABCC04E3:
		case 0x24D87C9E:
		case 0x3A732240:
		case 0x1A108B80:
		case 0xF7E7A848:
		case 0xC88FBB63:
		case 0xAB4EA4F8:
		case 0x98AE71E5:
		case 0x8F2EC53A:
		case 0xA3DDECA8:
		case 0x798D498F:
		case 0x17FDC07D:
		case 0xBBD76B5A:
		case 0x6405F5A6:
		case 0x31F23149:
		case 0xA4A86838:
		case 0x6C36F5BD:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_204(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0xFE249573:
		case 0xC2C5E339:
		case 0xACA75AAE:
		case 0x628502B3:
		case 0xFC8D0020:
		case 0xB77DD8B4:
		case 0xFD389995:
		case 0xEAFF75BD:
		case 0xC4F96E65:
		case 0x2195C3D1:
		case 0x676706D3:
		case 0x381AE70B:
		case 0xB94DDB9B:
		case 0x89AD02CE:
		case 0xBCD304B8:
		case 0xF97DB87A:
		case 0x129A5B6E:
		case 0x762D6BF6:
		case 0xD89979EE:
		case 0x4D8C639E:
		case 0xA174F633:
		case 0x176D9D54:
		case 0x016B1CDE:
		case 0xBFCBE6B6:
		case 0x6A22D039:
		case 0x862FB02E:
		case 0x8D682613:
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0x506A6AF5:
		case 0x60988977:
		case 0x74EC47CE:
		case 0x0C92ECEF:
		case 0xFC71898E:
		case 0x67878154:
		case 0xA87819A3:
		case 0x06A679FE:
		case 0x5AEF7C87:
		case 0x39B3A1A7:
		case 0x5E0B0A1C:
		case 0xC84D30CC:
		case 0xB8D124BE:
		case 0xF353DF93:
		case 0xCF63BF45:
		case 0x3E7AA93E:
		case 0x21ECDA63:
		case 0xCCFA5F2D:
		case 0x328CD5AA:
		case 0xFD2A7DE7:
		case 0xEE884170:
		case 0x1B9AFE05:
		case 0x5C66709A:
		case 0xF9F62A7C:
		case 0xD8630BC3:
		case 0x23C04B23:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
		case 0x50503398:
		case 0x3EBB7442:
		case 0x8107BB89:
		case 0xB6D37A76:
		case 0x6F225978:
		case 0x0CD9EBA6:
		case 0xCBC91B24:
		case 0xD4E9820B:
		case 0x53E15D9D:
		case 0xA1DC5A42:
		case 0xFE5D3D39:
		case 0x46521174:
		case 0x370A42A5:
		case 0xED97AFC1:
		case 0x23F59C7C:
		case 0xFF3F6FB2:
		case 0xED74CC1D:
		case 0x33E1D8F6:
		case 0xC5ED889C:
		case 0xFFC0D962:
		case 0xB99C11F6:
		case 0x8DACDD38:
		case 0x32537662:
		case 0x7353182D:
		case 0x6E63A5AC:
		case 0x7D1FD84C:
		case 0x7462F9E7:
		case 0xBA16F44B:
		case 0x87DF725B:
		case 0xA2228687:
		case 0xC6B7C57F:
		case 0x43ADDE78:
		case 0x4B6A869C:
		case 0xDA2AD714:
		case 0x29849CDA:
		case 0x180D054D:
		case 0xCB511DC2:
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
		case 0xDE8FA2AB:
			func_204(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
	switch (iParam0)
	{
		case 0xB001B7EB:
		case 0x9B0E293D:
		case 0x6F581424:
		case 0xD670D38D:
		case 0xB2C78A3D:
		case 0x367BBE86:
		case 0x178D16AE:
		case 0xEC365EEC:
		case 0x63A19A7F:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_204(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0x49F3549B:
		case 0x4A05F619:
		case 0xBE60A029:
		case 0xE285893D:
		case 0x314FB8B0:
		case 0x9145F938:
		case 0x653BCC2D:
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
		case 0x87B8E853:
		case 0x6374FB50:
		case 0x86DA0F67:
		case 0xB703ED29:
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
		case 0x69D9B7DA:
		case 0xCDCF2380:
			func_204(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_204(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_214())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam3 == 0x3FA29128 || iParam3 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar3 = 0x00000001;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000005;
	iVar4 = 0x7FFFFFFF;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_211(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 0xFFFFFFFF)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 0x00000001;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 0x00000001;
				}
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		if (iParam7 & 0x00000002 != 0x00000000)
		{
			Global_411257 = 0x00000001;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		if (iParam7 & 0x00000008 != 0x00000000)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		bVar5 = 0x00000000;
		if (bVar5)
		{
			func_210(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_205(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_206(iParam0);
	}
}

void func_206(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_214())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_209(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_207(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_207(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_208(&(uParam0->f_E));
	func_208(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_208(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_209(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_210(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_214())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && bParam10)
			{
				func_212(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_212(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_8(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_213();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_213()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_214()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

float func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
		case 0x0000008A:
		case 0x0000008C:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000092:
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
			return 0f;
		
		case 0x00000090:
			return 0f;
		
		case 0x000000B9:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

int func_218(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (iParam0 > 0x00000000)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_40001);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_219(float fParam0)
{
	iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
	if (iLocal_84 != 0xFFFFFFFF)
	{
		if (unk_0x69DF961355195C3C(iLocal_84))
		{
			if (unk_0xA45992A6CE82FB43(iLocal_84) >= fParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_220()
{
	iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
	if (iLocal_84 != 0xFFFFFFFF)
	{
		if (unk_0x69DF961355195C3C(iLocal_84))
		{
			if (unk_0xA45992A6CE82FB43(iLocal_84) >= 1f)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_221()
{
	func_222();
}

int func_222()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x526BC32A660C89E6(Local_73))
	{
		return 0x00000000;
	}
	if (func_393(Local_73))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000003))
		{
			unk_0x16BEAC335EC5109B(unk_0x1B50683925F00106(Local_73));
			unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000003);
		}
		return 0x00000000;
	}
	switch (Local_73.f_3)
	{
		case 0x00000000:
			unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_73), 0x00000047, 0x00000001);
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000C))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000D))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000011))
					{
						unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
						unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							func_228(0x0000000A);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000000))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000B))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000C))
								{
									func_228(0x0000000D);
								}
								else
								{
									func_228(0x00000014);
								}
							}
							else
							{
								func_228(0x00000011);
							}
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000019);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000B))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000C))
							{
								func_228(0x00000000);
							}
							else
							{
								func_228(0x00000012);
							}
						}
						else
						{
							func_228(0x0000000F);
						}
						unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000011);
					}
					else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xCBCE4595) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xCBCE4595) != 0x00000000)
					{
						if (func_18(&uLocal_105, 0x00001388, 0x00000000))
						{
							func_14(&uLocal_105);
							if (!iLocal_78)
							{
								unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), 0x00002710);
							}
							unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
						}
					}
				}
			}
			unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_73), 0x00000047, 0x00000001);
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000000))
			{
				iVar1 = unk_0x16F2683693E537C9();
				if (Local_73.f_20 > 0xFFFFFFFF)
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_20)))
					{
						iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_20));
						iVar1 = unk_0x9539D44F3E4492F6(iVar0);
					}
				}
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), iVar1, 0xFFFFFFFF, 0x00000000, 0x00000002);
					unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
					unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_73), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000000);
				}
			}
			else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xCBCE4595) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xCBCE4595) != 0x00000000)
			{
				if (func_18(&uLocal_105, 0x00001388, 0x00000000))
				{
					iVar1 = unk_0x16F2683693E537C9();
					if (Local_73.f_20 > 0xFFFFFFFF)
					{
						if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_20)))
						{
							iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_20));
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
						}
					}
					func_14(&uLocal_105);
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73), iVar1, 0x00002710);
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), iVar1, 0xFFFFFFFF, 0x00000000, 0x00000002);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000010))
			{
				unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
			}
			unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_73), 0x00000047, 0x00000001);
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000019))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0x7276D3DF) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0x7276D3DF) != 0x00000001)
				{
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 0x00000002, 0x00000000);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 0x00000008, 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 0x00000010, 0x00000001);
					unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
					unk_0xE655C47E46F9A7E4(unk_0x1B50683925F00106(Local_73), Local_73.f_2A, 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x00000019);
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000011) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000003))
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					Global_26B66F.f_8 = 0x00000001;
				}
				iVar2 = unk_0x16F2683693E537C9();
				if (Global_26B66F.f_9 != func_180())
				{
					if (func_46(Global_26B66F.f_9, 0x00000001, 0x00000001))
					{
						iVar2 = unk_0x9539D44F3E4492F6(Global_26B66F.f_9);
					}
				}
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), iVar2, 0x00007530, 0x00000000, 0x00000003);
				unk_0xDCDFC17557D5706C(unk_0x1B50683925F00106(Local_73), "mood_stressed_1", 0x00000000);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000003);
			}
			else
			{
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
				if (iLocal_84 != 0xFFFFFFFF)
				{
					if (unk_0x69DF961355195C3C(iLocal_84))
					{
						fLocal_288 = (Local_73.f_21 + 0.6f);
						if (fLocal_288 < 0.75f)
						{
							fLocal_288 = 0.75f;
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000004))
						{
							fLocal_288 = (fLocal_288 + 0.25f);
						}
						if (fLocal_288 > 1.75f)
						{
							fLocal_288 = 1.75f;
						}
						unk_0x5E4E98C6D98C9C57(iLocal_84, fLocal_288);
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000000A))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0x0E763797) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0x0E763797) != 0x00000001)
				{
					if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
					{
						iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
						if ((iLocal_84 != 0xFFFFFFFF && !unk_0x69DF961355195C3C(iLocal_84)) || iLocal_84 == 0xFFFFFFFF)
						{
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), iLocal_89);
							unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
							unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000000A);
						}
					}
				}
			}
			else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xCBCE4595) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xCBCE4595) != 0x00000000)
			{
				if (func_18(&uLocal_105, 0x00001388, 0x00000000))
				{
					func_14(&uLocal_105);
					iVar1 = unk_0x16F2683693E537C9();
					if (Local_73.f_20 > 0xFFFFFFFF)
					{
						if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_20)))
						{
							iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_20));
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
						}
					}
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73), iVar1, 0x00002710);
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				}
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000000A))
			{
				if ((iLocal_84 == 0xFFFFFFFF || !unk_0x69DF961355195C3C(iLocal_84)) || unk_0xA45992A6CE82FB43(iLocal_84) >= 0.95f)
				{
					func_227();
					iVar1 = unk_0x16F2683693E537C9();
					if (Local_73.f_20 > 0xFFFFFFFF)
					{
						if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_20)))
						{
							iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_20));
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
						}
					}
					unk_0xF9B5DB58254657F1(unk_0x1B50683925F00106(Local_73), 0xFFFFFFFF, iVar1, 0xFFFFFFFF, 0x00000001);
					unk_0xF895E10BF4C72645(unk_0x1B50683925F00106(Local_73), 0x00000000, 0x00000000);
					unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000010);
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000000A);
				}
			}
			break;
		
		case 0x00000007:
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xAA05B492) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xAA05B492) != 0x00000001)
			{
				if (!func_171())
				{
					func_226();
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
					unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73), 20f, 0x00000000);
					func_228(0x00000004);
				}
			}
			break;
		
		case 0x00000008:
			if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000009))
			{
				func_227();
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
				if ((iLocal_84 != 0xFFFFFFFF && !unk_0x69DF961355195C3C(iLocal_84)) || iLocal_84 == 0xFFFFFFFF)
				{
					if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001B) && !func_37()) && !func_36())
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000003))
							{
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), iLocal_91);
								iVar3 = 0x00000001;
							}
							else
							{
								func_226();
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), iLocal_92);
								iVar3 = 0x00000001;
							}
						}
					}
					else
					{
						unk_0xEEB67C3D0A71A47B(unk_0x1B50683925F00106(Local_73), vLocal_82, 250f, 0xFFFFFFFF, 0x00000001, 0x00000000);
						iVar3 = 0x00000001;
					}
					if (iVar3 == 0x00000001)
					{
						func_228(0x00000019);
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
						func_6(Local_75.f_32, 0x00000001, func_7());
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000009);
					}
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000013))
			{
				iVar4 = unk_0x1C97A5F82B15E49A(unk_0x1B50683925F00106(Local_73));
				if (iVar4 == 0x00000003)
				{
					unk_0x8FB4E06C94958F84(unk_0x1B50683925F00106(Local_73));
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000013);
				}
				else if (iVar4 == 0x00000002)
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000003))
					{
						unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), iLocal_93);
					}
					else
					{
						unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73), 20f, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000013);
				}
			}
			break;
	}
	func_223();
	return 0x00000001;
}

void func_223()
{
	if ((Local_73.f_3 != 0x00000008 && Local_73.f_3 != 0x00000007) && Local_73.f_2 == 0x00000003)
	{
		if ((((!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000E) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000F)) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000016)) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000017)) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001E))
		{
			iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
			if (iLocal_84 != 0xFFFFFFFF)
			{
				if (unk_0x69DF961355195C3C(iLocal_84))
				{
					if (!func_171())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000E) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000006))
						{
							func_228(0x00000002);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000006);
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000F) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000007))
						{
							if (unk_0xA45992A6CE82FB43(iLocal_84) > 0.87f)
							{
								func_228(0x00000003);
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000007);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000016) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000016))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000018) && !func_171())
							{
								func_228(0x0000000B);
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000016);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000017) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000017))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000019) && !func_171())
							{
								func_228(0x0000000C);
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000017);
							}
						}
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000009))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001A) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000018))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007))
				{
					if (!func_171())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000B))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000C))
							{
								func_228(0x00000001);
							}
							else
							{
								func_228(0x00000013);
							}
						}
						else
						{
							func_228(0x00000010);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000018);
						return;
					}
					else
					{
						func_224();
						return;
					}
				}
			}
			if (((!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001E) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000019)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000000) && !func_171())
				{
					if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007) && unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004)) || (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000004)))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000B))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000C))
							{
								func_228(0x0000000D);
							}
							else
							{
								func_228(0x00000014);
							}
						}
						else
						{
							func_228(0x00000011);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000019);
						return;
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000001F) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000001A))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000001) && !func_171())
				{
					func_228(0x0000000E);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000001A);
					return;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000001F))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000008) && !func_171())
				{
					func_228(0x00000016);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000001F);
					return;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000003) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_1, 0x00000003))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000002) && !func_171())
				{
					func_228(0x00000018);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_1), 0x00000003);
					return;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000E) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000014))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x0000000D) && !func_171())
				{
					func_228(0x00000017);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x00000014);
					return;
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000001D))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000005))
		{
			if (!func_171())
			{
				func_228(0x00000015);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000001D);
				return;
			}
		}
	}
}

void func_224()
{
	Global_4CD7 = 0x00000000;
	func_225();
}

void func_225()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_226()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000C);
	if (iVar0 < 0x00000003)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_pistol"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x0000000A, 0x00000023));
	}
	else if (iVar0 < 0x00000006)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_combatpistol"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x0000000F, 0x00000028));
	}
	else if (iVar0 == 0x00000006)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_microsmg"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x0000000A, 0x00000019));
	}
	else if (iVar0 == 0x00000007)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_combatmg"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x00000005, 0x0000000F));
	}
	else if (iVar0 == 0x00000008)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_bat"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x00000014, 0x00000028));
	}
	else if (iVar0 == 0x00000009)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_assaultrifle"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x00000005, 0x0000001E));
	}
	else if (iVar0 == 0x0000000A)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_sawnoffshotgun"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x00000005, 0x00000014));
	}
	else
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_pumpshotgun"), 0x000061A8, 0x00000000);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(0x0000000A, 0x00000019));
	}
	func_6(Local_75.f_32, 0x00000001, func_7());
	unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73), Global_18085E);
	unk_0x20EC6650986ACDC7(unk_0x1B50683925F00106(Local_73), 0x00000001);
	unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_73), 0x00000001);
	unk_0xED253B8DDB3FFB77(unk_0x1B50683925F00106(Local_73), vLocal_81, 20f, 0x00000000, 0x00000000);
	unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
}

void func_227()
{
	iLocal_84 = unk_0xF958843510932FF6(Local_73.f_1D);
	if (iLocal_84 != 0xFFFFFFFF)
	{
		if (unk_0x69DF961355195C3C(iLocal_84))
		{
			unk_0x45934E8E3471AAA9(Local_73.f_1D);
		}
	}
}

void func_228(int iParam0)
{
	struct<2> Var0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000D))
	{
		if (!func_393(Local_73))
		{
			if (unk_0x526BC32A660C89E6(Local_73) || (!unk_0x83F012E6200426DB(Local_73) && unk_0xBFF81ED3B99522C7()))
			{
				if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
				{
					if (Local_73.f_2D == 0x00000000)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_73.f_2D == 0x00000001)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_73.f_1F, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x7F8A39872A07D2CE(&Var0, "RB_SH241"))
					{
						if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0x00000000) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_250(iVar1)) || func_249(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_392(&uLocal_121, 0x00000003, unk_0x1B50683925F00106(Local_73), &(Local_73.f_2E), 0x00000001, 0x00000000);
					switch (iParam0)
					{
						case 0x00000000:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_GREET", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000001:
							func_229(&uLocal_121, "RB_12AU", &Var0, 0x0000000C, 0x00000001, 0x00000000, 0x00000001);
							break;
						
						case 0x00000002:
							func_229(&uLocal_121, "RB_12AU", &Var0, 0x0000000C, 0x00000001, 0x00000000, 0x00000001);
							break;
						
						case 0x00000003:
							func_229(&uLocal_121, "RB_12AU", &Var0, 0x0000000C, 0x00000001, 0x00000000, 0x00000001);
							break;
						
						case 0x00000004:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_BRAVE", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x0000000A:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_REMOVE_VEHICLE", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x0000000B:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_REACT_TO_SHOUT", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x0000000C:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_HURRYING", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x0000000D:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_COPS", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x0000000E:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_THREATENED", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x0000000F:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_GREET_START", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000010:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_SCARED_START", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000011:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_COPS_START", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000012:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_GREET_END", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000013:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_SCARED_END", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000014:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_COPS_END", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000015:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_COPS_ARRIVED", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000016:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_SELL", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000017:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_ENTRY", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000018:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_STEAL", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						
						case 0x00000019:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SCREAM_PANIC", &(Local_73.f_32), "SPEECH_PARAMS_FORCE", 0x00000001);
							break;
						}
					}
				}
			}
	}
}

int func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 0x00000001;
	return func_230(sParam2, iParam3, 0x00000000);
}

int func_230(char* sParam0, int iParam1, bool bParam2)
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
					func_247();
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
		if (func_246(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_245();
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
				func_238();
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
				if (func_237())
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
			if (func_236())
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
			func_235();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_234();
		func_231();
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
		func_247();
	}
	return 0x00000000;
}

void func_231()
{
	if (!func_232())
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

int func_232()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_180())
	{
		return 0x00000000;
	}
	if (func_233(unk_0xD803B885F5E47A62()))
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

bool func_233(int iParam0)
{
	return func_140(iParam0, 0x00000014);
}

void func_234()
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

void func_235()
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

int func_236()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_237()
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

void func_238()
{
	if (func_121(0x0000000E))
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
		Global_4C1E = func_239();
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

var func_239()
{
	func_240();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_240()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_243(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_242(unk_0x16F2683693E537C9());
			if (func_241(iVar0) && (!func_121(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_241(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_241(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_243(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_243(int iParam0)
{
	if (func_241(iParam0))
	{
		return func_244(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_244(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_245()
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

bool func_246(int iParam0, int iParam1)
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

void func_247()
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

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 0x00000001;
			break;
		
		case 0xBA45E8B8:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case 0xCD274149:
		case 0x94117305:
		case 0x19044EE0:
		case 0x3813FC08:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_251()
{
	int iVar0;
	
	iVar0 = unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000);
	if (Local_73.f_2B != iVar0)
	{
		if (Local_73.f_2B < iVar0 || func_258(Local_73.f_2B, 0x00000000, 0x00000001))
		{
			unk_0x0BEC04ECA8485A3A(Local_73.f_2B);
		}
	}
	iVar0 = unk_0xBF3DE18643F54472(0x00000000, 0x00000000);
	if (Local_73.f_2C != iVar0)
	{
		if (Local_73.f_2C < iVar0 || func_252(Local_73.f_2C, 0x00000000, 0x00000001))
		{
			unk_0x3A4967AE7C71F999(Local_73.f_2C);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0x00000002, iParam0, 0x00000001, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x0000000A;
			break;
		
		case 0x00000002:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F0.f_1;
			break;
		
		case 0x00000001:
			return Global_1532F0.f_2;
			break;
		
		case 0x00000002:
			return Global_1532F0.f_3;
			break;
	}
	return 0x00000000;
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D1;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000001:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D2;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D3;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0x00000000);
			}
			break;
	}
	return 0x00000000;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F8;
			break;
		
		case 0x00000001:
			return Global_1532F9;
			break;
		
		case 0x00000002:
			return Global_1532FA;
			break;
	}
	return 0x00000000;
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

void func_259()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_306)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000000))
			{
				if (unk_0xE9F78D191AD5EDBA(Local_73.f_E))
				{
					if (func_265(vLocal_312))
					{
						vLocal_312 = { unk_0x68E4ADDDDCD7BDDE(unk_0x09AD4CE7DA179533(Local_73.f_E), 0f, -0.5f, 0f) };
						unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000000);
					}
				}
			}
			if ((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_312, 0.5f, 0.5f, 1f, 0x00000000, 0x00000001, 0x00000000) && (func_393(Local_73) || Local_73.f_3 > 0x00000007)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B)) && unk_0xA4F4A1E4DDB4728B(vLocal_85, 1.5f) == 0x00000000)
			{
				if (((((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_168(0x00000000)) && !func_264()) && !unk_0x798A3F1296751F46()) && !func_39(unk_0xD803B885F5E47A62(), 0x00000092)) && !func_38(unk_0xD803B885F5E47A62())) && unk_0xE9F78D191AD5EDBA(Local_73.f_E)) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 0x0000009A))
				{
					func_148("FHU_MANR", 0xFFFFFFFF);
					Global_26B66F.f_16FC.f_4 = 0x00000001;
					iLocal_306 = 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			if (((((!unk_0xEAE0D21A50E6C7F4(Local_73.f_18, 0x00000010) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x0000000C)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x0000000B)) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_312, 0.5f, 0.5f, 1f, 0x00000000, 0x00000001, 0x00000000)) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 0x0000009A))
			{
				if (((unk_0xBFC0798A6E3417F9(0x00000000, 0x00000033) && !func_263(0x00000000)) && !func_264()) && !unk_0x798A3F1296751F46())
				{
					if (func_146("FHU_MANR"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000280);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0x0000000C);
					iLocal_306 = 0x00000002;
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
					if (iLocal_311 == 0x00000000)
					{
						func_260(&iLocal_311, 0x00000004, "FHU_MANR", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			else if (func_146("FHU_MANR"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				vLocal_312.z = (vVar3.z - 1f);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_312, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xE7D606C557C86100((vLocal_99.x - vLocal_312.x), (vLocal_99.y - vLocal_312.y)));
				unk_0xF82EA857DA10E0CD(&iVar4);
				unk_0xDD353D0E9C789D0E(&iVar4);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 0x00000FA0, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 0x00000FA0, 0x00040001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 0x00000FA0, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar4);
				unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar4);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000C8, 0x00000001);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000047, 0x00000001);
				bVar2 = unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_310, 0x00000001);
				if (bVar2)
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				}
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				if (!unk_0x9F4FE516EAACCFC5(iLocal_307))
				{
					iLocal_307 = unk_0xAE06CCC36C49929C(0x019286A9, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0x00000000, 0x00000002);
				}
				unk_0xC5940439E4EB9A33(iLocal_307, unk_0x16F2683693E537C9(), -0.1878f, 3.0635f, 0.68f, 0x00000001);
				unk_0x1305278186D1C53E(iLocal_307, unk_0x16F2683693E537C9(), -0.0129f, 0.0927f, 0.3008f, 0x00000001);
				unk_0x5818C8D5303DCCF8(iLocal_307, 35f);
				unk_0x91F5B0244AAE6222(iLocal_307, "HAND_SHAKE", 0.1f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_307, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			}
			iLocal_306 = 0x00000003;
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x9F4FE516EAACCFC5(iLocal_308))
				{
					iLocal_308 = unk_0xAE06CCC36C49929C(0x019286A9, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0x00000000, 0x00000002);
				}
				unk_0xC5940439E4EB9A33(iLocal_308, unk_0x16F2683693E537C9(), -1.0346f, 2.9183f, 0.68f, 0x00000001);
				unk_0x1305278186D1C53E(iLocal_308, unk_0x16F2683693E537C9(), -0.0574f, 0.1074f, 0.3008f, 0x00000001);
				unk_0x5818C8D5303DCCF8(iLocal_308, 35f);
				unk_0x91F5B0244AAE6222(iLocal_308, "HAND_SHAKE", 0.1f);
				unk_0xF1E4C781086FABC1(iLocal_308, iLocal_307, 0x00001770, 0x00000001, 0x00000001);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000047, 0x00000001);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000C8, 0x00000001);
			}
			iLocal_306 = 0x00000004;
			break;
		
		case 0x00000004:
			if (!unk_0xFA06B985B30FB0FC(iLocal_308))
			{
				iLocal_306 = 0x00000005;
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop", 0x00000003))
				{
					fVar0 = unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_309)
						{
							iVar5 = SYSTEM::ROUND(((IntToFloat(iLocal_102) * 0.75f) / 4f));
							iVar6 = SYSTEM::ROUND(((IntToFloat(iLocal_103) * 0.75f) / 4f));
							iVar1 = unk_0x09AC81E49EA267F7(iVar5, iVar6 + 1);
							iVar1 = func_218(iVar1, 0x00000001);
							if (iVar1 > (Global_40001.f_A7 / 0x00000004))
							{
								iVar1 = (Global_40001.f_A7 / 0x00000004);
							}
							if (func_217(unk_0xD803B885F5E47A62()) && func_215(func_216(unk_0xD803B885F5E47A62())) < 1f)
							{
								if (Global_40001.f_1083 > 1f)
								{
									Global_40001.f_1083 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1083));
							}
							if (iVar1 > 0x00000000)
							{
								if (func_214())
								{
									func_203(0x676706D3, iVar1, &uVar7, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									func_199(iVar1, 0x00000001, 0x00000001, 0x41200000);
									unk_0xDACD1EB0C24D33AC(iVar1);
								}
							}
							Global_26B66F.f_16FC = (Global_26B66F.f_16FC + iVar1);
							iLocal_305 = (iLocal_305 + iVar1);
							func_187(0x00000001, iLocal_305);
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 0x00000001);
							iLocal_309 = 0x00000001;
						}
					}
					else if (iLocal_309)
					{
						iLocal_309 = 0x00000000;
					}
				}
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000047, 0x00000001);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000C8, 0x00000001);
			}
			break;
		
		case 0x00000005:
			if (iLocal_310 != joaat("weapon_unarmed") && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_310, 0x00000001);
			}
			unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000001, 0xFFFFFFFF, 0x00000000);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			if (unk_0x9F4FE516EAACCFC5(iLocal_307))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_307, 0x00000000);
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_308))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_308, 0x00000000);
			}
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			Global_26B66F.f_16FC.f_2 = 0x00000001;
			Global_26B66F.f_16FC.f_5 = 0x00000001;
			if (func_183(0x00000001))
			{
				func_174(0x00000004);
			}
			iLocal_306 = 0x00000007;
			break;
		
		case 0x00000006:
			unk_0xE3BB8E05FCEB3FBE(iLocal_308, 0x00000000);
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			iLocal_306 = 0x00000005;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_261(iParam0);
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

void func_261(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*uParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*uParam0 = 0xFFFFFFFF;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				if (Global_4C1D == 0x00000001)
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
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		if (Global_4C1D == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		if (Global_4C1D == 0x00000001)
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

bool func_264()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_265(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 0x000003E8 || (uParam5->f_4 + uParam0->f_33) >= 0x000003E8) || func_390(&(uParam5->f_5))) || (func_142(&(Global_26B66F.f_A)) && !func_389(Global_26B66F.f_A, 0x000493E0, 0x00000000)))
	{
		if (func_142(&(Global_26B66F.f_A)))
		{
			if ((unk_0x1C0640BA9A7327B3() % 0x000009C4) < 0x00000032)
			{
			}
		}
		if (!uParam0->f_22)
		{
			uParam0->f_22 = 0x00000001;
			if (!func_142(&(Global_26B66F.f_A)))
			{
				func_19(&(Global_26B66F.f_A), 0x00000000, 0x00000000);
			}
		}
	}
	else
	{
		if (func_142(&(Global_26B66F.f_A)))
		{
			func_14(&(Global_26B66F.f_A));
		}
		if (uParam0->f_22)
		{
			uParam0->f_22 = 0x00000000;
		}
	}
	if ((unk_0x1C0640BA9A7327B3() % 0x00001388) < 0x00000032)
	{
	}
	if ((((((uParam5->f_3 < 0x00000002 && func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(uParam0->f_34, 0x0000001A)) && !func_388(0xBF800000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001) && !bParam7) && !func_393(*uParam5))
	{
		iVar4 = 0x00000000;
		if ((unk_0x798A3F1296751F46() && uParam0->f_36 != 0x00000000) && !unk_0x590766B2AF637235())
		{
			if (!bParam8)
			{
				uParam0->f_36 = 0x00000000;
				func_387(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_36)
		{
			case 0x00000000:
				if ((((!unk_0x798A3F1296751F46() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && !unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9())) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 0x0000009A)) && !func_386(unk_0xD803B885F5E47A62(), 0x00000015))
				{
					if (func_385(*uParam0, &uParam1, vParam4.z, &(uParam0->f_10[0x00000000 /*3*/]), &(uParam0->f_10[0x00000001 /*3*/]), &(uParam0->f_17), &(uParam0->f_1A)))
					{
						vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						vVar3 = { unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(*uParam5), 0x00000001) };
						if ((unk_0x0EB28750412C3A5A(vVar2, uParam0->f_17, 0x00000001) < 5f && unk_0x755FF954DAE327E1((vVar2.z - vVar3.z)) < 0.25f) || func_437(0x00000001))
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), uParam0->f_10[0x00000000 /*3*/], uParam0->f_10[0x00000001 /*3*/], uParam0->f_1A, 0x00000000, 0x00000001, 0x00000000) || func_437(0x00000001))
							{
								if (unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), uParam0->f_17, 135f) || func_437(0x00000001))
								{
									if (uParam0->f_22)
									{
										if (func_437(0x00000001))
										{
											func_407();
										}
										if (((!func_146("SHR_HOLDUP_1") && !func_146("SHR_MENU")) && !func_384()) && func_383())
										{
											func_148("SHR_SOLD_OUT", 0xFFFFFFFF);
											uParam0->f_36 = 0x0000000A;
										}
									}
									else
									{
										if (func_437(0x00000001))
										{
										}
										uParam0->f_E = 0xFFFFFFFF;
										func_260(&(uParam0->f_E), 0x00000004, "SHR_MENU", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										uParam0->f_36 = 0x00000002;
									}
								}
								else if ((unk_0x1C0640BA9A7327B3() % 0x00001F40) < 0x00000032)
								{
								}
							}
							else
							{
								if ((unk_0x1C0640BA9A7327B3() % 0x00001F40) < 0x00000032)
								{
								}
								unk_0x4ADCCF23C40DC113(vVar2, uParam0->f_10[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
								unk_0x4ADCCF23C40DC113(vVar2, uParam0->f_10[0x00000001 /*3*/], 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
							}
						}
						else
						{
							if ((unk_0x1C0640BA9A7327B3() % 0x00001F40) < 0x00000032)
							{
							}
							unk_0x4ADCCF23C40DC113(vVar2, uParam0->f_17, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
						}
					}
				}
				else
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (func_40(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_35, 0x00000004))
						{
							func_148("SHR_FM_CRIT", 0xFFFFFFFF);
							unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(uParam0->f_35), 0x00000004);
						}
					}
					if ((unk_0x1C0640BA9A7327B3() % 0x00001F40) < 0x00000032)
					{
					}
				}
				break;
			
			case 0x00000002:
				vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(*uParam5), 0x00000001) };
				if ((!unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), uParam0->f_17, 135f) || unk_0x755FF954DAE327E1((vVar2.z - vVar3.z)) >= 0.25f) && !func_437(0x00000001))
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					func_261(&(uParam0->f_E));
					uParam0->f_36 = 0x00000000;
				}
				if (unk_0x798A3F1296751F46())
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					func_261(&(uParam0->f_E));
					uParam0->f_36 = 0x00000000;
				}
				if (func_168(0x00000000) || func_167())
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					func_261(&(uParam0->f_E));
					func_162(0x00000001, *uParam0);
					unk_0x0674E58A79778E99(&(uParam0->f_34), 0x0000001A);
					uParam0->f_36 = 0x00000000;
				}
				if (!unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()))
				{
					if (func_382(uParam0->f_E, 0x00000001) || func_437(0x00000001))
					{
						if (func_437(0x00000001))
						{
							func_407();
						}
						if (func_146("SHR_MENU"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						func_380(&(uParam0->f_2C));
						func_261(&(uParam0->f_E));
						func_374(0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&(uParam0->f_35), 0x00000007);
						func_425(unk_0xD803B885F5E47A62(), 0x00000000, 0x00010200, 0x00000000);
						unk_0xC60408C24B32AAC4();
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_393(*uParam5))
						{
							unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(*uParam5), 0x00000000);
							unk_0x0674E58A79778E99(&(iParam6->f_1), 0x00000001);
						}
						func_373();
						uParam0->f_36 = 0x00000003;
					}
				}
				break;
			
			case 0x00000003:
				if (!bParam8)
				{
					if (!unk_0x9F4FE516EAACCFC5(uParam0->f_1))
					{
						uParam0->f_1 = unk_0xAE06CCC36C49929C(0x019286A9, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0x00000000, 0x00000002);
						func_372(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						unk_0x608A456FDD8A83D8(uParam0->f_1, uParam0->f_2);
						unk_0x5F3CBA6EB9341C90(uParam0->f_1, uParam0->f_5, 0x00000002);
						unk_0x5818C8D5303DCCF8(uParam0->f_1, fVar6);
						unk_0x91F5B0244AAE6222(uParam0->f_1, "HAND_SHAKE", 0.1f);
						unk_0xE3BB8E05FCEB3FBE(uParam0->f_1, 0x00000001);
						unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					}
					uParam0->f_25 = func_395(*uParam0);
				}
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				uParam0->f_D = 0x00000006;
				func_371(0x00000000, 0x00000000);
				func_370(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_369(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000001);
				func_368("SNK_ITEM");
				if (!bParam8)
				{
					func_366(0x00000001, uParam0->f_25, uParam0->f_25);
				}
				iVar7 = 0x00000000;
				while (iVar7 < uParam0->f_D)
				{
					func_361(iVar7, func_365(iVar7), 0x00000000, 0x00000001, 0x00000000, 0x00000000);
					if (uParam5->f_5[iVar7] >= 0x0000000A || ((func_142(&(Global_26B66F.f_C[iVar7 /*2*/])) && !func_389(Global_26B66F.f_C[iVar7 /*2*/], 0x000249F0, 0x00000000)) && *uParam0 == Global_26B66F.f_1B))
					{
						func_361(iVar7, "", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
						func_360(0x0000000F, 0x00000000);
						if (func_142(&(Global_26B66F.f_C[iVar7 /*2*/])) && !func_389(Global_26B66F.f_C[iVar7 /*2*/], 0x000249F0, 0x00000000))
						{
							uParam5->f_5[iVar7] = 0x0000000A;
						}
						if (!func_142(&(Global_26B66F.f_C[iVar7 /*2*/])))
						{
							Global_26B66F.f_1B = *uParam0;
							func_19(&(Global_26B66F.f_C[iVar7 /*2*/]), 0x00000000, 0x00000000);
						}
					}
					else if (func_357(iVar7))
					{
						func_361(iVar7, "SNK_FULL", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
					}
					else if (!bParam8)
					{
						func_361(iVar7, "ITEM_COST", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
						func_353(func_356(uParam0, iVar7), 0x00000000);
					}
					else
					{
						func_361(iVar7, "SNK_FREE", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
					}
					iVar7++;
				}
				func_352(0x00000000);
				func_351(uParam0->f_C, 0x00000001, 0x00000001);
				if (uParam0->f_23)
				{
					if (!bParam8)
					{
						func_350("SNK_BOUGHT", 0x00000000, 0x00000000);
					}
					else
					{
						func_350("SNK_STORED", 0x00000000, 0x00000000);
					}
				}
				else if (uParam5->f_5[uParam0->f_C] >= 0x0000000A)
				{
					func_350("SNK_SOUT", 0x00000000, 0x00000000);
				}
				else
				{
					func_350(func_349(uParam0->f_C), 0x00000000, 0x00000000);
				}
				func_348(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF, 0x00000000);
				func_348(0x000000CA, "ITEM_BACK", 0xFFFFFFFF, 0x00000000);
				if (!bParam8)
				{
					func_348(0x000000CB, "SNK_LIFT", 0xFFFFFFFF, 0x00000000);
					func_314(0x00000001, *uParam0, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				uParam0->f_36 = 0x00000004;
				break;
			
			case 0x00000004:
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xCBCE4595) == 0x00000007)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000001))
					{
						if (!bParam8)
						{
							func_425(unk_0xD803B885F5E47A62(), 0x00000000, 0x00018200, 0x00000000);
						}
						else
						{
							func_425(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
						}
						unk_0x5D96D8530B3D0904(&(iParam6->f_1), 0x00000001);
					}
				}
				iVar4 = 0x00000000;
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
						func_310(0x00000000, 0x00000000, 0x00000000, 0x00000001);
						func_309(0x00000000, 0xFFFFFFFF, 0x00000001);
						if (func_308())
						{
							if (Global_4121D1 != uParam0->f_C)
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								uParam0->f_C = Global_4121D1;
								func_351(uParam0->f_C, 0x00000001, 0x00000001);
								uParam0->f_1B = 0x00000000;
								uParam0->f_1D = 0x00000000;
								uParam0->f_1E = 0x00000000;
								uParam0->f_20 = 0x00000000;
								sVar5 = func_349(uParam0->f_C);
								if (unk_0xEF07223F00EBE9C9(sVar5))
								{
									func_350(sVar5, 0x00000000, 0x00000000);
								}
							}
							else
							{
								iVar4 = 0x00000001;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_314(0x00000001, *uParam0, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				func_298(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 0x00000002 && unk_0xEAE0D21A50E6C7F4(uParam5->f_1, 0x00000000)) && unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000000))
				{
					unk_0x0674E58A79778E99(&(iParam6->f_1), 0x00000000);
				}
				if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || iVar4 == 0x00000001) || uParam0->f_2F)
				{
					if (!uParam0->f_2F)
					{
						uParam0->f_1B = 0x00000001;
						uParam0->f_1D = 0x00000000;
						uParam0->f_1E = 0x00000000;
						uParam0->f_20 = 0x00000000;
						func_380(&(uParam0->f_2C));
					}
					if ((uParam0->f_1C && uParam0->f_1F) && uParam0->f_21)
					{
						if (func_214())
						{
							uParam0->f_2F = 0x00000001;
							uParam0->f_30 = 0x00000000;
							uParam0->f_31 = 0xFFFFFFFF;
							iVar0 = 0x00000000;
							if (!bParam8)
							{
								iVar0 = func_356(uParam0, uParam0->f_C);
							}
							func_286(uParam0, 0xB2491B6E, 0x2005D9A9, iVar0);
							uParam0->f_36 = 0x00000005;
						}
						else
						{
							uParam0->f_23 = 0x00000001;
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
							uParam5->f_5[uParam0->f_C]++;
							uParam0->f_36 = 0x00000006;
						}
					}
					else
					{
						uParam0->f_23 = 0x00000000;
						if (!uParam0->f_1C && !uParam0->f_24)
						{
							iVar0 = 0x00000000;
							if (!bParam8)
							{
								iVar0 = func_356(uParam0, uParam0->f_C);
							}
							func_285(unk_0x12AB0310C2281427(func_349(uParam0->f_C)), iVar0, 0x00000000);
							func_278(0x00000000, 0x0000001F, 0x00000003);
							uParam0->f_36 = 0x0000000B;
						}
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
					}
					if (!uParam0->f_21)
					{
						uParam0->f_36 = 0x00000003;
					}
				}
				if (!bParam8)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CB) && !uParam0->f_2F)
					{
						uParam0->f_1B = 0x00000001;
						if (uParam5->f_5[uParam0->f_C] < 0x0000000A)
						{
							uParam0->f_21 = 0x00000001;
						}
						else
						{
							uParam0->f_21 = 0x00000000;
						}
						func_380(&(uParam0->f_2C));
						if (!uParam0->f_21)
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
						}
						else if (!uParam0->f_1F)
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), func_158(), func_277(), 8f, -8f, 0xFFFFFFFF, 0x00100000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							uParam0->f_36 = 0x00000008;
							uParam0->f_F = unk_0x1C0640BA9A7327B3();
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
							if (!bParam8)
							{
								func_387(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA) || unk_0xB9132A06AE472728(0x00000002, 0x000000EE))
				{
					if (func_437(0x00000001))
					{
						func_407();
					}
					uParam0->f_36 = 0x00000009;
					uParam0->f_F = unk_0x1C0640BA9A7327B3();
					if (!bParam8)
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
						func_387(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BACK", "HUD_FREEMODE_SOUNDSET", 0x00000001);
						Global_258C26 = 0x00000001;
					}
				}
				if (uParam0->f_22)
				{
					uParam0->f_36 = 0x0000000A;
					uParam0->f_F = unk_0x1C0640BA9A7327B3();
					if (!bParam8)
					{
						func_387(uParam0, &(iParam6->f_3));
					}
					func_148("SHR_SOLD_OUT", 0xFFFFFFFF);
				}
				iVar8 = 0x00000000;
				while (iVar8 < uParam0->f_D)
				{
					if (func_142(&(Global_26B66F.f_C[iVar8 /*2*/])) && func_389(Global_26B66F.f_C[iVar8 /*2*/], 0x000249F0, 0x00000000))
					{
						func_14(&(Global_26B66F.f_C[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0x00000000;
						uParam0->f_36 = 0x00000003;
					}
					iVar8++;
				}
				break;
			
			case 0x00000005:
				iVar0 = 0x00000000;
				if (!bParam8)
				{
					func_314(0x00000001, *uParam0, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					iVar0 = func_356(uParam0, uParam0->f_C);
				}
				if (func_286(uParam0, 0xB2491B6E, 0x2005D9A9, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_31)
					{
						case 0x00000000:
							uParam0->f_23 = 0x00000000;
							if (!uParam0->f_1C && !uParam0->f_24)
							{
								if (!bParam8)
								{
									iVar0 = func_356(uParam0, uParam0->f_C);
								}
								func_285(unk_0x12AB0310C2281427(func_349(uParam0->f_C)), iVar0, 0x00000000);
								func_278(0x00000000, 0x0000001F, 0x00000003);
								func_276();
								func_275();
								uParam0->f_36 = 0x0000000B;
							}
							else
							{
								if (func_437(0x00000001))
								{
									func_407();
								}
								uParam0->f_36 = 0x00000009;
								uParam0->f_F = unk_0x1C0640BA9A7327B3();
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
								if (!bParam8)
								{
									func_387(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 0x00000002:
							uParam0->f_23 = 0x00000001;
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
							uParam5->f_5[uParam0->f_C]++;
							uParam0->f_36 = 0x00000006;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 0x00000006:
				if (!bParam8)
				{
					func_314(0x00000001, *uParam0, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				if (func_214())
				{
					unk_0x7A87D9FAFCB10ADC(func_273(func_274()));
				}
				if (bParam8)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_7B, 0x00000006))
					{
						unk_0xCB699ED5E9A0C070(0x00000001, uParam0->f_C, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_7B), 0x00000006);
					}
					iVar1 = 0x00000000;
					switch (uParam0->f_C)
					{
						case 0x00000003:
							func_105(0x000004FB, 0x00000001, 0xFFFFFFFF);
							func_104(0x00000010, 0x00000001, 0xFFFFFFFF, 0x00000001);
							break;
						
						case 0x00000001:
							func_105(0x000004FC, 0x00000001, 0xFFFFFFFF);
							func_104(0x0000000F, 0x00000001, 0xFFFFFFFF, 0x00000001);
							break;
						
						case 0x00000002:
							func_104(0x0000000E, 0x00000001, 0xFFFFFFFF, 0x00000001);
							func_105(0x000004FD, 0x00000001, 0xFFFFFFFF);
							break;
						
						case 0x00000004:
							uParam0->f_37 = 0x00000014;
							if (func_126(0x00000449, 0xFFFFFFFF, 0x00000000) + 20 > 0x00000014)
							{
								uParam0->f_37 = (0x00000014 - func_126(0x00000449, 0xFFFFFFFF, 0x00000000));
							}
							func_105(0x00000449, uParam0->f_37, 0xFFFFFFFF);
							break;
						
						case 0x00000000:
							func_105(0x0000003E, 0x00000001, 0xFFFFFFFF);
							break;
						
						case 0x00000005:
							func_105(0x0000003F, 0x00000001, 0xFFFFFFFF);
							break;
					}
				}
				else
				{
					switch (uParam0->f_C)
					{
						case 0x00000003:
							if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
							{
								iVar1 = 0x00000000;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_C);
							}
							func_105(0x000004FB, 0x00000001, 0xFFFFFFFF);
							func_104(0x00000010, 0x00000001, 0xFFFFFFFF, 0x00000001);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM1"), 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							break;
						
						case 0x00000001:
							if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
							{
								iVar1 = 0x00000000;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_C);
							}
							func_105(0x000004FC, 0x00000001, 0xFFFFFFFF);
							func_104(0x0000000F, 0x00000001, 0xFFFFFFFF, 0x00000001);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM2"), 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							break;
						
						case 0x00000002:
							if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
							{
								iVar1 = 0x00000000;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_C);
							}
							func_104(0x0000000E, 0x00000001, 0xFFFFFFFF, 0x00000001);
							func_105(0x000004FD, 0x00000001, 0xFFFFFFFF);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM3"), 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							break;
						
						case 0x00000004:
							if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
							{
								iVar1 = 0x00000000;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_C);
							}
							uParam0->f_37 = 0x00000014;
							if (func_126(0x00000449, 0xFFFFFFFF, 0x00000000) + 20 > 0x00000014)
							{
								uParam0->f_37 = (0x00000014 - func_126(0x00000449, 0xFFFFFFFF, 0x00000000));
							}
							func_105(0x00000449, uParam0->f_37, 0xFFFFFFFF);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM4"), 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							break;
						
						case 0x00000000:
							if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
							{
								iVar1 = 0x00000000;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_C);
							}
							func_105(0x0000003E, 0x00000001, 0xFFFFFFFF);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM5"), 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							break;
						
						case 0x00000005:
							if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
							{
								iVar1 = 0x00000000;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_C);
							}
							func_105(0x0000003F, 0x00000001, 0xFFFFFFFF);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM6"), 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							break;
						}
				}
				if (func_214())
				{
					func_206(func_274());
				}
				func_271(-iVar1, 0x00000000);
				uParam0->f_33 = (uParam0->f_33 + iVar1);
				if (!unk_0xEAE0D21A50E6C7F4(*iParam6, 0x0000001E))
				{
					unk_0x5D96D8530B3D0904(iParam6, 0x0000001E);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(iParam6->f_1), 0x00000000);
					iParam6->f_2 = uParam0->f_C;
				}
				if (uParam0->f_22 || uParam0->f_33 >= 0x000003E8)
				{
					uParam0->f_36 = 0x0000000A;
					if (!bParam8)
					{
						func_387(uParam0, &(iParam6->f_3));
					}
					func_148("SHR_SOLD_OUT", 0xFFFFFFFF);
				}
				else if (uParam5->f_5[uParam0->f_C] >= 0x0000000A || func_357(uParam0->f_C))
				{
					uParam0->f_36 = 0x00000003;
				}
				else
				{
					uParam0->f_36 = 0x00000004;
				}
				break;
			
			case 0x00000008:
				func_193(0x00000001);
				switch (uParam0->f_C)
				{
					case 0x00000003:
						func_269(0x00000000, 1f, 0x00000003);
						func_105(0x000004FB, 0x00000001, 0xFFFFFFFF);
						func_104(0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000001);
						break;
					
					case 0x00000001:
						func_269(0x00000001, 1f, 0x00000003);
						func_105(0x000004FC, 0x00000001, 0xFFFFFFFF);
						func_104(0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000001);
						break;
					
					case 0x00000002:
						func_269(0x00000002, 1f, 0x00000003);
						func_105(0x000004FD, 0x00000001, 0xFFFFFFFF);
						func_104(0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000001);
						break;
					
					case 0x00000004:
						uParam0->f_37 = 0x00000014;
						if (func_126(0x00000449, 0xFFFFFFFF, 0x00000000) + 20 > 0x00000014)
						{
							uParam0->f_37 = (0x00000014 - func_126(0x00000449, 0xFFFFFFFF, 0x00000000));
						}
						func_269(0x00000005, SYSTEM::TO_FLOAT(uParam0->f_37), 0x00000003);
						func_105(0x00000449, uParam0->f_37, 0xFFFFFFFF);
						break;
					
					case 0x00000000:
						func_269(0x00000003, 1f, 0x00000003);
						func_105(0x0000003E, 0x00000001, 0xFFFFFFFF);
						break;
					
					case 0x00000005:
						func_269(0x00000004, 1f, 0x00000003);
						func_105(0x0000003F, 0x00000001, 0xFFFFFFFF);
						break;
				}
				if (!bParam8)
				{
					func_425(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001 && !func_267(unk_0xD803B885F5E47A62()))
				{
					unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 0x00000025, unk_0xBC64C2447446D57B(0x00000001));
					unk_0x5D96D8530B3D0904(iParam6, 0x00000019);
					if (!unk_0xEAE0D21A50E6C7F4(*iParam6, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(iParam6, 0x00000002);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&(iParam6->f_1), 0x00000002);
				}
				uParam0->f_36 = 0x0000000C;
				break;
			
			case 0x0000000B:
				if (!Global_181EC.f_589 && !unk_0x590766B2AF637235())
				{
					uParam0->f_36 = 0x00000004;
				}
				break;
			
			case 0x0000000A:
				if (!bParam8)
				{
					func_425(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
				}
				if ((unk_0x1C0640BA9A7327B3() - uParam0->f_F) > 0x000003E8)
				{
					uParam0->f_36 = 0x0000000C;
				}
				else
				{
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CB);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BD);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BE);
				}
				break;
			
			case 0x00000009:
				if ((unk_0x1C0640BA9A7327B3() - uParam0->f_F) > 0x000003E8)
				{
					uParam0->f_36 = 0x00000000;
				}
				else
				{
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CB);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BD);
					unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BE);
				}
				break;
			
			case 0x0000000C:
				if (unk_0xEAE0D21A50E6C7F4(uParam5->f_1, 0x00000003))
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000002))
					{
						unk_0x0674E58A79778E99(&(iParam6->f_1), 0x00000002);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000003))
					{
						unk_0x0674E58A79778E99(&(iParam6->f_1), 0x00000003);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0x1C0640BA9A7327B3() % 0x00001F40) < 0x00000032)
		{
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam5->f_1, 0x00000003))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000002))
			{
				unk_0x0674E58A79778E99(&(iParam6->f_1), 0x00000002);
			}
			if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0x00000003))
			{
				unk_0x0674E58A79778E99(&(iParam6->f_1), 0x00000003);
			}
		}
		if ((uParam0->f_36 != 0x0000000C && unk_0xEAE0D21A50E6C7F4(uParam0->f_34, 0x0000001A)) && !unk_0x590766B2AF637235())
		{
			if ((((uParam0->f_36 == 0x00000004 || uParam0->f_36 == 0x00000003) || uParam0->f_36 == 0x00000006) || uParam0->f_36 == 0x0000000B) || uParam0->f_36 == 0x00000005)
			{
				func_387(uParam0, &(iParam6->f_3));
			}
			uParam0->f_36 = 0x0000000C;
		}
		if (uParam0->f_E != 0xFFFFFFFF)
		{
			func_261(&(uParam0->f_E));
		}
	}
}

int func_267(int iParam0)
{
	if ((func_40(iParam0) || func_268(iParam0)) && func_215(func_216(iParam0)) == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

void func_269(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
			func_193(0x00000001);
			iVar3 = 0xFFFFFFFF;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000014)
			{
				if (Global_2537E2.f_50A[iVar2 /*30*/].f_6 == 0x00000000 || Global_2537E2.f_50A[iVar2 /*30*/].f_6 == 0x00000007)
				{
					iVar3 = iVar2;
					iVar2 = 0x00000014;
				}
				iVar2++;
			}
			if (iVar3 != 0xFFFFFFFF)
			{
				Global_2537E2.f_50A[iVar3 /*30*/] = { vVar1 };
				Global_2537E2.f_50A[iVar3 /*30*/].f_6 = 0x00000001;
				Global_2537E2.f_50A[iVar3 /*30*/].f_4 = func_192(Global_2537E2.f_50A[iVar3 /*30*/], &Global_14063D, &Global_14063E);
				Global_2537E2.f_50A[iVar3 /*30*/].f_5 = fParam1;
				Global_2537E2.f_50A[iVar3 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
				Global_2537E2.f_50A[iVar3 /*30*/].f_8 = iParam2;
				Global_2537E2.f_50A[iVar3 /*30*/].f_E = { Var0 };
				Global_2537E2.f_50A[iVar3 /*30*/].f_9 = func_191();
				Global_2537E2.f_50A[iVar3 /*30*/].f_A = func_190();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 0x00000001;
		
		case 0x00000001:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 0x00000001;
		
		case 0x00000002:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 0x00000001;
		
		case 0x00000003:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 0x00000001;
		
		case 0x00000004:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 0x00000001;
		
		case 0x00000005:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 0x00000001;
		
		case 0x00000006:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_271(int iParam0, int iParam1)
{
	func_201(iParam0, 0x00000001, 0x00000001, 0x00000000);
	if (iParam1 == 0x00000001)
	{
		func_202(iParam0, 0x00000000);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_180())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_273(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42;
	}
	return 0xFFFFFFFF;
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_273(iVar0) != 0x7FFFFFFF)
		{
			if (func_209(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_275()
{
	Global_2564C8.f_2AC.f_20 = 0x00000001;
}

void func_276()
{
	Global_2564C8.f_2AC.f_1C = 0x00000001;
	Global_2564C8.f_2AC.f_20 = 0x00000000;
	Global_2564C8.f_2AC.f_1F = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	func_14(&(Global_2564C8.f_2AC.f_1D));
}

char* func_277()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x4C2428CBA698034D())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() && func_282(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		return;
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C7) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000C7))
	{
		return;
	}
	if (unk_0x8BB17FEBE0394018() != 0x00000000)
	{
		return;
	}
	if (unk_0x798A3F1296751F46())
	{
		return;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() || iParam0)
	{
		if (!Global_181EC.f_589 && !unk_0x590766B2AF637235())
		{
			iVar0 = 0x00000012;
			UI::_SET_WARNING_MESSAGE_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			Global_259026 = iParam1;
			Global_181EC.f_589 = 0x00000001;
			Global_181EC.f_58A = iParam2;
		}
	}
}

int func_279()
{
	if (func_280())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_280()
{
	return Global_258DFD;
}

bool func_281()
{
	return Global_25908F;
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_283(iParam0))
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

bool func_283(int iParam0)
{
	return func_284(iParam0);
}

bool func_284(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	Global_181EC.f_58B = iParam0;
	Global_181EC.f_58C = iParam1;
	Global_181EC.f_58D = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_2F)
	{
		switch (uParam0->f_30)
		{
			case 0x00000000:
				iVar0 = 0x00000000;
				iVar1 = 0x00000000;
				iVar2 = iParam3;
				if (unk_0x3A6D64D2A1228113() > 0x00000000)
				{
					if (unk_0x3A6D64D2A1228113() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0x3A6D64D2A1228113()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0x00000000)
				{
					if (unk_0x62F8C2EDB26F57B3(0xFFFFFFFF) > 0x00000000)
					{
						if (unk_0x62F8C2EDB26F57B3(0xFFFFFFFF) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0x62F8C2EDB26F57B3(0xFFFFFFFF)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_365(uParam0->f_C);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(0x04A9A0AE, iParam1, unk_0x12AB0310C2281427(&sVar4), iParam2, 0x00000001, iParam3, 0x00000001, 0x00000008, 0x00000000, 0x00000003))
				{
					if (func_289())
					{
						unk_0x26D598B045655D3C(0x00000001);
						unk_0x897805B8E15447A7(-iVar0, -iVar1);
						uParam0->f_30 = 0x00000001;
					}
					else
					{
						uParam0->f_30 = 0x00000003;
					}
				}
				else
				{
					uParam0->f_30 = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 0x00000002)
					{
						uParam0->f_30 = 0x00000002;
					}
					else
					{
						uParam0->f_30 = 0x00000003;
					}
				}
				break;
			
			case 0x00000002:
				uParam0->f_2F = 0x00000000;
				uParam0->f_30 = 0x00000000;
				unk_0x26D598B045655D3C(0x00000000);
				unk_0x3584F71E5CA29322(0x0000000D);
				uParam0->f_31 = 0x00000002;
				return 0x00000000;
				break;
			
			case 0x00000003:
				func_206(func_274());
				uParam0->f_2F = 0x00000000;
				uParam0->f_30 = 0x00000000;
				unk_0x26D598B045655D3C(0x00000000);
				unk_0x3584F71E5CA29322(0x0000000D);
				uParam0->f_31 = 0x00000000;
				return 0x00000000;
				break;
		}
		return 0x00000001;
	}
	uParam0->f_30 = 0x00000000;
	uParam0->f_31 = 0xFFFFFFFF;
	return 0x00000000;
}

int func_287(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2;
	}
	return 0x00000000;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2 != 0x00000001;
	}
	return 0x00000000;
}

int func_289()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = 0x00000000;
	if (!func_214())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	iVar2 = func_274();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_290(Global_411012[iVar2 /*85*/].f_42.f_6, Global_411012[iVar2 /*85*/].f_42.f_4, Global_411012[iVar2 /*85*/].f_42.f_1) == 0x00000001)
			{
				Global_411258 = 0x00000001;
			}
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (Global_411012[iVar2 /*85*/].f_42.f_6 == 0x3FA29128 || Global_411012[iVar2 /*85*/].f_42.f_6 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 0x7FFFFFFF)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_411012[iVar2 /*85*/].f_42.f_D = 0x00000001;
			Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar2 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_411012[iVar2 /*85*/].f_42.f_8 = 0x00000001;
				Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000001;
			}
			Global_411012[iVar2 /*85*/].f_42.f_12 = 0x00000000;
			if (bVar0 || iVar1)
			{
				func_212(Global_411012[iVar2 /*85*/], iVar2);
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0xE62A3AA1 || iParam0 == 0x57DE404E)
	{
		switch (iParam1)
		{
			case 0x73AF3590:
				if (iParam2 >= 0x00002710)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
				break;
			
			case 0xFE249573:
			case 0xEC745CB2:
			case 0x20D60B56:
			case 0x31D3FC9B:
			case 0x50503398:
			case 0xBE60A029:
				if (iParam2 >= 0x000003E8)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000002;
				}
				break;
			
			case 0x762D6BF6:
				return 0x00000000;
				break;
			
			case 0x666D4B21:
			case 0xC2C5E339:
			case 0xACA75AAE:
			case 0x628502B3:
			case 0xFC8D0020:
			case 0xB77DD8B4:
			case 0xFD389995:
			case 0xEAFF75BD:
			case 0xC4F96E65:
			case 0x2195C3D1:
			case 0x676706D3:
			case 0x381AE70B:
			case 0xB94DDB9B:
			case 0x89AD02CE:
			case 0xBCD304B8:
			case 0xF97DB87A:
			case 0x129A5B6E:
			case 0xD89979EE:
			case 0x4D8C639E:
			case 0xA174F633:
			case 0x176D9D54:
			case 0x016B1CDE:
			case 0xBFCBE6B6:
			case 0x6A22D039:
			case 0x862FB02E:
			case 0x8D682613:
			case 0x4CBAC3AA:
			case 0x29358006:
			case 0x5841CC24:
			case 0x5A26EAEF:
			case 0x2183C4D7:
			case 0xF6C6F8D3:
			case 0xAEC77375:
			case 0x267CBC1B:
			case 0x2DC5587F:
			case 0x8A91E076:
			case 0x2AD8ED30:
			case 0x8B70731D:
			case 0x3530C574:
			case 0xAAF2EA7A:
			case 0x506A6AF5:
			case 0x60988977:
			case 0x74EC47CE:
			case 0x0C92ECEF:
			case 0xFC71898E:
			case 0x67878154:
			case 0xA87819A3:
			case 0x06A679FE:
			case 0x5AEF7C87:
			case 0x39B3A1A7:
			case 0x5E0B0A1C:
			case 0xC84D30CC:
			case 0xB8D124BE:
			case 0xF353DF93:
			case 0xCF63BF45:
			case 0x3E7AA93E:
			case 0x21ECDA63:
			case 0xCCFA5F2D:
			case 0x328CD5AA:
			case 0xFD2A7DE7:
			case 0xEE884170:
			case 0x1B9AFE05:
			case 0x5C66709A:
			case 0xD8630BC3:
			case 0x23C04B23:
			case 0x3EBB7442:
			case 0x8107BB89:
			case 0xB6D37A76:
			case 0x6F225978:
			case 0x0CD9EBA6:
			case 0xCBC91B24:
			case 0xD4E9820B:
			case 0x53E15D9D:
			case 0xA1DC5A42:
			case 0xFE5D3D39:
			case 0x46521174:
			case 0x370A42A5:
			case 0xED97AFC1:
			case 0x23F59C7C:
			case 0xFF3F6FB2:
			case 0xED74CC1D:
			case 0x33E1D8F6:
			case 0xC5ED889C:
			case 0xFFC0D962:
			case 0xB99C11F6:
			case 0x8DACDD38:
			case 0x32537662:
			case 0x7353182D:
			case 0x6E63A5AC:
			case 0x7D1FD84C:
			case 0x7462F9E7:
			case 0xBA16F44B:
			case 0x87DF725B:
			case 0xA2228687:
			case 0xC6B7C57F:
			case 0x43ADDE78:
			case 0x4B6A869C:
			case 0xDA2AD714:
			case 0x29849CDA:
			case 0x1A6CF069:
			case 0x180D054D:
			case 0xCB511DC2:
			case 0xC0925945:
			case 0xAD5032C1:
			case 0xD54402B0:
			case 0x43D5DFD2:
			case 0xDE8FA2AB:
			case 0x49F3549B:
			case 0x4A05F619:
			case 0xE285893D:
			case 0x314FB8B0:
			case 0x9145F938:
			case 0x653BCC2D:
			case 0x87B8E853:
			case 0x3F0A835A:
			case 0x6BEA24A6:
			case 0x1AE83BEC:
			case 0x3126BC47:
			case 0x4ABE30A4:
			case 0xA20EEA82:
			case 0x59E889DD:
			case 0x552534EE:
			case 0x8D9EE291:
			case 0x4B318D68:
			case 0x465B7057:
			case 0x545237BE:
			case 0x0F9590A2:
			case 0x87246378:
			case 0x6374FB50:
			case 0x86DA0F67:
				return 0x00000001;
				break;
			
			case 0x5A58E3BD:
			case 0x45F48C05:
			case 0xCA5E1B40:
			case 0xD86D0371:
			case 0x48090EBA:
			case 0xDB72FD6E:
			case 0xD80064A4:
			case 0x11611C06:
			case 0xB3E76D2C:
			case 0x2A6B291E:
			case 0xE7BA9A2C:
			case 0xD30E80F5:
			case 0x8F9E64E9:
			case 0x7323DAB3:
			case 0x3F79E8B3:
			case 0xF54343EF:
			case 0x7F096F7D:
			case 0x10E398B4:
			case 0x421452FF:
			case 0xCBBC5D1E:
			case 0x040E0F34:
				return 0x00000002;
				break;
			
			default:
				return 0x00000000;
				break;
		}
		switch (iParam1)
		{
			case 0xECF7C43F:
			case 0xE4315BE0:
			case 0x72CBE556:
			case 0x234B8864:
			case 0x7954FD0F:
			case 0x5D7FD908:
			case 0xB703ED29:
			case 0x48B92E52:
			case 0x7A3568F7:
			case 0x235376A5:
			case 0xCDCF2380:
				return 0x00000001;
			
			case 0x69D9B7DA:
				return 0x00000002;
				break;
		}
	}
	else if ((iParam0 == 0xBC5B83BA || iParam0 == 0x372897DD) || iParam0 == 0xA14400BE)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = 0x00000000;
	if (!func_214())
	{
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam1 == 0x3FA29128 || iParam1 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = func_274();
	if (iVar1 == 0xFFFFFFFF)
	{
		if (!func_293(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0x00000000;
		}
	}
	if (iVar1 != 0xFFFFFFFF)
	{
		if (iParam8 != 0x00000000 && func_292(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_411012[iVar1 /*85*/].f_42.f_1 = Var2.f_2;
		Global_411012[iVar1 /*85*/].f_42.f_F = Var2;
		Global_411012[iVar1 /*85*/].f_42.f_10 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 0xF2C77E1D:
		case 0xB6FD233F:
		case 0x81855910:
		case 0x531CEF2D:
		case 0x85A48AE6:
		case 0x65679D34:
		case 0x94EB09E5:
		case 0x8D08CFA8:
		case 0x22A9F688:
		case 0x015FAF63:
		case 0x7E349B56:
		case 0xADDF33D9:
		case 0xE1EB447E:
		case 0x71A98DCA:
		case 0x9FA465A5:
		case 0x94BD7097:
		case 0x100EA9C3:
		case 0x0426E041:
		case 0xF9CEEAB6:
		case 0xA6E56D90:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = 0x00000000;
	if (!func_214())
	{
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam2 == 0x3FA29128 || iParam2 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		if (Global_411012[iVar1 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar2 = 0x00000001;
		}
		else if (Global_411012[iVar1 /*85*/].f_42.f_5 == 0x00000001)
		{
			return 0x00000000;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0x00000000;
	}
	*iParam0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_211(iVar3, iParam1, 0x83B4A55B, iParam3, iParam2, 0x00000000, 0x00000001, iParam4, uParam5, 0x00000000, bVar0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)
{
	if (func_272(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_296(unk_0xD803B885F5E47A62()))
	{
		return 0x00000003;
	}
	else if (uParam0->f_32 >= 0x0000000A && uParam0->f_32 <= 0x0000000E)
	{
		return 0x00000000;
	}
	else if (uParam0->f_32 >= 0x0000000F && uParam0->f_32 <= 0x00000013)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000002;
	}
	return 0xFFFFFFFF;
}

int func_296(int iParam0)
{
	if (iParam0 != func_180())
	{
		if (func_46(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_297(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_297(int iParam0)
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

void func_298(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_1D)
	{
	}
	if (func_307(uParam0))
	{
		uParam0->f_1B = 0x00000000;
		func_306(&(uParam0->f_2C));
		uParam0->f_C = (uParam0->f_C - 0x00000001);
		if (uParam0->f_C < 0x00000000)
		{
			uParam0->f_C = (uParam0->f_D - 0x00000001);
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
		func_351(uParam0->f_C, 0x00000001, 0x00000001);
		sVar0 = func_349(uParam0->f_C);
		uParam0->f_1D = 0x00000000;
		uParam0->f_1E = 0x00000000;
		uParam0->f_20 = 0x00000000;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_350(sVar0, 0x00000000, 0x00000000);
		}
	}
	if (func_303(uParam0))
	{
		uParam0->f_1B = 0x00000000;
		func_306(&(uParam0->f_2C));
		uParam0->f_C++;
		if (uParam0->f_C > (uParam0->f_D - 0x00000001))
		{
			uParam0->f_C = 0x00000000;
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 0x00000001);
		func_351(uParam0->f_C, 0x00000001, 0x00000001);
		sVar0 = func_349(uParam0->f_C);
		uParam0->f_1D = 0x00000000;
		uParam0->f_1E = 0x00000000;
		uParam0->f_20 = 0x00000000;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_350(sVar0, 0x00000000, 0x00000000);
		}
	}
	if (!uParam0->f_1D)
	{
		if (unk_0x7A7BDE279347E517(func_356(uParam0, uParam0->f_C), 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
		{
			uParam0->f_1C = 0x00000001;
		}
		else
		{
			uParam0->f_1C = 0x00000000;
			uParam0->f_24 = 0x00000001;
		}
		uParam0->f_1D = 0x00000001;
	}
	if (!uParam0->f_1E)
	{
		uParam0->f_1F = 0x00000001;
		if (uParam0->f_C == 0x00000003)
		{
			uParam0->f_1F = func_126(0x000004FB, 0xFFFFFFFF, 0x00000000) < 0x0000001E;
		}
		else if (uParam0->f_C == 0x00000001)
		{
			uParam0->f_1F = func_126(0x000004FC, 0xFFFFFFFF, 0x00000000) < 0x0000000F;
		}
		else if (uParam0->f_C == 0x00000002)
		{
			uParam0->f_1F = func_126(0x000004FD, 0xFFFFFFFF, 0x00000000) < 0x00000005;
		}
		else if (uParam0->f_C == 0x00000004)
		{
			uParam0->f_1F = func_126(0x00000449, 0xFFFFFFFF, 0x00000000) < 0x00000014;
		}
		else if (uParam0->f_C == 0x00000000)
		{
			uParam0->f_1F = func_126(0x0000003E, 0xFFFFFFFF, 0x00000000) < 0x0000000A;
		}
		else if (uParam0->f_C == 0x00000005)
		{
			uParam0->f_1F = func_126(0x0000003F, 0xFFFFFFFF, 0x00000000) < 0x0000000A;
		}
		uParam0->f_1E = 0x00000001;
	}
	if (!uParam0->f_20)
	{
		if ((*uParam1)[uParam0->f_C] < 0x0000000A)
		{
			uParam0->f_21 = 0x00000001;
		}
		else
		{
			uParam0->f_21 = 0x00000000;
			func_350("SNK_SOUT", 0x00000000, 0x00000000);
		}
		uParam0->f_20 = 0x00000001;
	}
	if (uParam0->f_1B)
	{
		if (func_299(&(uParam0->f_2C)) < 3f)
		{
			if (uParam0->f_23)
			{
				if (!bParam2)
				{
					func_350("SNK_BOUGHT", 0x00000000, 0x00000000);
				}
				else
				{
					func_350("SNK_STORED", 0x00000000, 0x00000000);
				}
			}
			else if (!uParam0->f_1C)
			{
				func_350("SNK_AFFORD", 0x00000000, 0x00000000);
			}
			else if (!uParam0->f_21)
			{
				func_350("SNK_SOUT", 0x00000000, 0x00000000);
			}
			else if (!uParam0->f_1F)
			{
				if (uParam0->f_C == 0x00000003)
				{
					func_350("SNK_SNK1FU", 0x00000000, 0x00000000);
				}
				else if (uParam0->f_C == 0x00000001)
				{
					func_350("SNK_SNK2FU", 0x00000000, 0x00000000);
				}
				else if (uParam0->f_C == 0x00000002)
				{
					func_350("SNK_SNK3FU", 0x00000000, 0x00000000);
				}
				else if (uParam0->f_C == 0x00000004)
				{
					func_350("SNK_SMOKFU", 0x00000000, 0x00000000);
				}
				else if (uParam0->f_C == 0x00000000)
				{
					func_350("SNK_DRK1FU", 0x00000000, 0x00000000);
				}
				else if (uParam0->f_C == 0x00000005)
				{
					func_350("SNK_DRK2FU", 0x00000000, 0x00000000);
				}
				else
				{
					func_350("SNK_NEEDED", 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&(uParam0->f_35), 0x0000001A);
			}
		}
		else
		{
			uParam0->f_1B = 0x00000000;
			uParam0->f_23 = 0x00000000;
			func_306(&(uParam0->f_2C));
			sVar0 = func_349(uParam0->f_C);
			if (unk_0xEF07223F00EBE9C9(sVar0))
			{
				func_350(sVar0, 0x00000000, 0x00000000);
			}
		}
	}
}

float func_299(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_300(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_301(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_302(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_303(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(0x00000002, 0x000000DB);
	if ((fVar0 > 0.8f || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))
	{
		if (!func_302(&(uParam0->f_29)))
		{
			func_305(&(uParam0->f_29));
			return 0x00000001;
		}
		else if (func_304(&(uParam0->f_29)) > 0.25f)
		{
			func_380(&(uParam0->f_29));
			return 0x00000001;
		}
	}
	else if (func_302(&(uParam0->f_29)))
	{
		func_306(&(uParam0->f_29));
	}
	return 0x00000000;
}

float func_304(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_305(int iParam0)
{
	if (!func_302(iParam0))
	{
		func_380(iParam0);
	}
}

void func_306(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

int func_307(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(0x00000002, 0x000000DB);
	if ((fVar0 < -0.8f || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))
	{
		if (!func_302(&(uParam0->f_26)))
		{
			func_305(&(uParam0->f_26));
			return 0x00000001;
		}
		else if (func_304(&(uParam0->f_26)) > 0.25f)
		{
			func_380(&(uParam0->f_26));
			return 0x00000001;
		}
	}
	else if (func_302(&(uParam0->f_26)))
	{
		func_306(&(uParam0->f_26));
	}
	return 0x00000000;
}

int func_308()
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 > 0xFFFFFFFF)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_309(int iParam0, int iParam1, bool bParam2)
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

void func_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_313();
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
				func_312(0x00000000);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 0xFFFFFFFD;
			if (bParam3)
			{
				func_312(0x00000000);
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
				func_311(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 0x000000FF, 0x000000FF, 0x000000FF, iVar10);
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

void func_311(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

void func_312(bool bParam0)
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
		func_311(fVar0, fVar1, Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	else if (Global_4121D1 == 0xFFFFFFFD)
	{
		func_311(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_313()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000EF);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000F0);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_164(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_346(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_344(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
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
		if (func_343())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_343())
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
			func_361(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
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
					StringCopy(&cVar63, func_342(0x0000001D), 64);
					StringCopy(&cVar64, func_340(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_311(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
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
				func_311(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_339();
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
					func_339();
					func_337((((Global_574B + fParam5) - 0.00390625f) - func_338("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_339();
						func_337((((Global_574B + fParam5) - 0.00390625f) - func_338("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
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
				func_311(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_344(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_336(fVar40);
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
				func_311(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_336(fVar40);
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
					func_344(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_335(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_342(Global_574E.f_12A0), func_340(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
					func_344(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_336(fVar40);
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
				func_311(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_336(fVar40);
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
					func_344(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_335(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_342(Global_412185.f_43), func_340(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
			func_328(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
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
											func_326(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_344(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
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
										if (func_344(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_344(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_342(0x0000001A), func_340(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_344(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_344(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_342(0x0000001B), func_340(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
										func_326(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_325(bVar32);
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
												if (func_344(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_344(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_335(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_342(Global_574E.f_1151[(iVar22 + iVar28)]), func_340(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_342(Global_574E.f_1151[(iVar22 + iVar28)]), func_340(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
											if (func_324() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_326(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
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
												if (func_344(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_344(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_335(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_342(Global_574E.f_1151[(iVar22 + iVar14)]), func_340(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_342(Global_574E.f_1151[(iVar22 + iVar14)]), func_340(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_342(Global_574E.f_1151[(iVar22 + iVar14)]), func_340(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
										func_326(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_325(bVar32);
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
										if (func_344(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_344(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_342(0x0000001A), func_340(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_344(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_344(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_342(0x0000001B), func_340(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_326(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_323((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
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
										func_326(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_325(bVar32);
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
										if (func_344(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_344(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_342(0x0000001A), func_340(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_344(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_344(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_342(0x0000001B), func_340(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_326(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_322((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_344(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
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
											if (func_344(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_344(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_335(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_342(0x0000001A), func_340(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_344(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_344(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_335(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_342(0x0000001B), func_340(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_344(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_335(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_342(Global_574E.f_1151[iVar22]), func_340(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_321(Global_574E.f_1151[iVar22])), (fVar37 * func_321(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
								if (func_344(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
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
		func_316(0x00000000);
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
		func_315(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_315(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_316(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_168(0x00000000))
		{
			func_317(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_317(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_319())
		{
			func_318(0x00000001, 0x00000001);
		}
		else
		{
			func_318(0x00000000, 0x00000000);
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
	if (!func_236())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_318(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_168(0x00000000))
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

bool func_319()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_320()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_321(int iParam0)
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

void func_322(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_323(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_324()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_325(bool bParam0)
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

void func_326(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_327(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_327(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_164(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_346(bParam4, bParam8))
	{
		return;
	}
	if (func_333())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_331(unk_0xD803B885F5E47A62(), 0x00000000))
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
					func_330(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_330(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_329(&(Global_574E.f_1364[iVar1 /*4*/]));
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
				func_330(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_329(&(Global_412185.f_10));
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

void func_329(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_330(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_331(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_332(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_332(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_79();
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

int func_333()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_334())
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

int func_334()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_335(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_336(float fParam0)
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

void func_337(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_338(char* sParam0, int iParam1, int iParam2)
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
	func_339();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_339()
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

var func_340(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_69(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_341(&uVar1);
			}
		}
		else
		{
			return func_341(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_341(var uParam0)
{
	return uParam0;
}

char* func_342(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_69(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_341(&uVar0);
		}
		else
		{
			return func_341(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_343()
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

int func_344(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_342(iParam0), 64);
	StringCopy(&cVar1, func_340(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_343())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_343())
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
		vVar7.x = (vVar7.x * (func_345(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_345(iParam0) / fVar4));
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

float func_345(int iParam0)
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

int func_346(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_246(0x00000008, 0xFFFFFFFF) && func_347() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_347()
{
	return Global_14082C;
}

void func_348(int iParam0, char* sParam1, int iParam2, bool bParam3)
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
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_13BC), Global_574E.f_12A1);
	}
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

char* func_349(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 0x00000006;
	}
	switch (iVar0)
	{
		case 0x00000006:
			return "SNK_AFFORD";
		
		case 0x00000003:
			return "SNK_ITEM1_D";
		
		case 0x00000001:
			return "SNK_ITEM2_D";
		
		case 0x00000002:
			return "SNK_ITEM3_D";
		
		case 0x00000004:
			return "SNK_ITEM4_D";
		
		case 0x00000000:
			return "SNK_ITEM5_D";
		
		case 0x00000005:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_350(char* sParam0, int iParam1, int iParam2)
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

void func_351(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = uParam0;
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

void func_352(int iParam0)
{
	Global_574E.f_166A = iParam0;
}

void func_353(var uParam0, bool bParam1)
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
	Global_574E.f_F4E[Global_574E.f_1466] = uParam0;
	Global_574E.f_1466++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000002;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_355();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_344(0x0000001A, 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
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
			fVar3 = func_354();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

float func_354()
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
			if (func_344(Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)], 0x00000001, 0x00000000, &uVar3, &fVar4, 0x00000000))
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

float func_355()
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
	func_326(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, iVar6 > 0x00000000, 0x00000000);
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
			func_344(Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)], 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_356(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_295(uParam0))
	{
		case 0x00000000:
			switch (iVar0)
			{
				case 0x00000003:
					return 0x00000002;
				
				case 0x00000001:
					return 0x00000003;
				
				case 0x00000002:
					return 0x00000005;
				
				case 0x00000004:
					return 0x00000007;
				
				case 0x00000000:
					return 0x00000002;
				
				case 0x00000005:
					return 0x00000002;
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iVar0)
			{
				case 0x00000003:
					return 0x00000001;
				
				case 0x00000001:
					return 0x00000002;
				
				case 0x00000002:
					return 0x00000003;
				
				case 0x00000004:
					return 0x00000008;
				
				case 0x00000000:
					return 0x00000002;
				
				case 0x00000005:
					return 0x00000005;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iVar0)
			{
				case 0x00000003:
					return 0x00000001;
				
				case 0x00000001:
					return 0x00000002;
				
				case 0x00000002:
					return 0x00000004;
				
				case 0x00000004:
					return 0x00000006;
				
				case 0x00000000:
					return 0x00000003;
				
				case 0x00000005:
					return 0x00000004;
				
				default:
			}
			break;
	}
	return 0x00000000;
}

int func_357(int iParam0)
{
	if (func_126(func_359(iParam0), 0xFFFFFFFF, 0x00000000) >= func_358(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 0x00000003:
			return 0x0000001E;
		
		case 0x00000001:
			return 0x0000000F;
		
		case 0x00000002:
			return 0x00000005;
		
		case 0x00000004:
			return 0x00000014;
		
		case 0x00000000:
			return 0x0000000A;
		
		case 0x00000005:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_359(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 0x00000003:
			return 0x000004FB;
		
		case 0x00000001:
			return 0x000004FC;
		
		case 0x00000002:
			return 0x000004FD;
		
		case 0x00000004:
			return 0x00000449;
		
		case 0x00000000:
			return 0x0000003E;
		
		case 0x00000005:
			return 0x0000003F;
		
		default:
	}
	return 0x00002CF7;
}

void func_360(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_574E.f_1468 >= 0x00000100)
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
	Global_574E.f_1151[Global_574E.f_1468] = iParam0;
	Global_574E.f_1468++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000004;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_355();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_344(0x0000001A, 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
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
			fVar3 = func_354();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

void func_361(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_364(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_364(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_363(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_344(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
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
			fVar4 = func_362(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
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

float func_362(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_363(char* sParam0)
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
	func_326(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_364(int iParam0, bool bParam1)
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

char* func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0x00000003:
			return "SNK_ITEM1";
		
		case 0x00000001:
			return "SNK_ITEM2";
		
		case 0x00000002:
			return "SNK_ITEM3";
		
		case 0x00000004:
			return "SNK_ITEM4";
		
		case 0x00000000:
			return "SNK_ITEM5";
		
		case 0x00000005:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_366(int iParam0, char* sParam1, char* sParam2)
{
	Global_574E = iParam0;
	func_367(0x0000001D, sParam1, sParam2);
}

void func_367(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_574E.f_1784[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_574E.f_1B75[iParam0 /*16*/]), sParam2, 64);
}

void func_368(char* sParam0)
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

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_371(bool bParam0, bool bParam1)
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

int func_372(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { unk_0x8A5E176FF719A014(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 0x00000001:
			*uParam1 = { unk_0x8A5E176FF719A014(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 0x00000002:
			*uParam1 = { unk_0x8A5E176FF719A014(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 0x00000003:
			*uParam1 = { unk_0x8A5E176FF719A014(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 0x00000004:
			*uParam1 = { unk_0x8A5E176FF719A014(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 0x00000005:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 0x00000006:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 0x00000007:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 0x00000008:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 0x00000009:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 0x0000000A:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x0000000B:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x0000000C:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x0000000D:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x0000000E:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x0000000F:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x00000010:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x00000011:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0x00000012:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 0xFFFFFFFE:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 0x00000001;
}

void func_373()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (!func_282(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || iParam1)
	{
		if (!func_379())
		{
			Global_1406A2.f_1 = 0x00000001;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_9 = 0x00000001;
			if (iParam0 == 0x00000001)
			{
				Global_1406A2.f_2 = 0x00000001;
			}
			func_375(0x00000007, 0x00000000, 0xFFFFFFFF);
		}
	}
}

void func_375(int iParam0, int iParam1, int iParam2)
{
	if (!func_379() || iParam1)
	{
		Global_1406A2 = 0x00000001;
		func_378(0x00000001);
		if (((!unk_0xA14BB9332558B949() && !func_377()) && !func_376(unk_0xD803B885F5E47A62())) && !func_138(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000001;
		}
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000001;
		unk_0x6EC9FBED3024FDF5(0x00000001, iParam0, iParam2, 0xFFFFFFFF);
	}
}

int func_376(int iParam0)
{
	if (func_282(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_377()
{
	return Global_2564C8.f_2E4;
}

void func_378(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_379())
		{
			if (func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000000);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0x00000000);
			unk_0xDC4BBCD7EBECDC32(0x00000001);
			if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
			{
				Global_1406A2.f_2 = 0x00000000;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
				}
			}
		}
		else
		{
			if (func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000001);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
				{
					unk_0x03718F4C6E876DE6(0x00000001, 0x00000000);
				}
			}
			unk_0x2F82E0AC5EC27DF2(0x00000001);
			unk_0xDC4BBCD7EBECDC32(0x00000000);
		}
	}
}

bool func_379()
{
	return Global_1406A2;
}

void func_380(int iParam0)
{
	func_381(iParam0, 0f);
}

void func_381(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_300(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

int func_382(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_168(0x00000000))
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

int func_383()
{
	if (Global_1B416.f_4FB5.f_91 > 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_384()
{
	return Global_56C1;
}

int func_385(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 0xFFFFFFFE:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 0x00000001;
}

bool func_386(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

void func_387(var uParam0, var uParam1)
{
	unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	func_425(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	if (uParam0->f_33 > 0x00000000)
	{
		*uParam1 = uParam0->f_33;
		uParam0->f_33 = 0x00000000;
	}
	func_408();
	unk_0x0674E58A79778E99(&(uParam0->f_35), 0x00000007);
	if (func_146("SHR_MENU"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (uParam0->f_E != 0xFFFFFFFF)
	{
		func_261(&(uParam0->f_E));
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_1))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0x00000000);
	}
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
}

int func_388(float fParam0)
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

int func_389(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_390(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if ((*uParam0)[iVar0] < 0x0000000A)
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_391()
{
	unk_0xDD353D0E9C789D0E(&iLocal_89);
	unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "handsup_enter", 8f, -8f, 0xFFFFFFFF, 0x00040030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "handsup_base", 8f, -4f, 0xFFFFFFFF, 0x00040031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_89);
	unk_0xDD353D0E9C789D0E(&iLocal_90);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "handsup_base", 4f, -4f, 0xFFFFFFFF, 0x00040031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_90);
	unk_0xDD353D0E9C789D0E(&iLocal_91);
	unk_0x96167B03C5A77156(0x00000000, vLocal_82, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, fLocal_83);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "cower_intro", 8f, -4f, 0xFFFFFFFF, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "cower_loop", 8f, -4f, 0xFFFFFFFF, 0x00042001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xEEB67C3D0A71A47B(0x00000000, vLocal_82, 250f, 0xFFFFFFFF, 0x00000001, 0x00000000);
	unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_91);
	unk_0xDD353D0E9C789D0E(&iLocal_93);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "cower_intro", 8f, -4f, 0xFFFFFFFF, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mp_am_hold_up", "cower_loop", 8f, -4f, 0xFFFFFFFF, 0x00042001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_93);
	unk_0xDD353D0E9C789D0E(&iLocal_92);
	unk_0x96167B03C5A77156(0x00000000, vLocal_82, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, (fLocal_83 - 180f));
	unk_0x9294582561BECEE7(0x00000000, 0x00000001);
	unk_0x7C8478BF70C1E072(0x00000000, 20f, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_92);
}

void func_392(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_393(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

int func_394()
{
	return Local_73.f_C;
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return "ShopUI_Title_GasStation";
		
		case 0x00000005:
			return "ShopUI_Title_LiquorStore3";
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			return "ShopUI_Title_LiquorStore2";
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return "ShopUI_Title_ConvenienceStore";
		
		case 0xFFFFFFFE:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_396()
{
	vector3 vVar0;
	
	if (func_404(&(Local_75.f_32), 0x00000000))
	{
		func_402(Local_75.f_32, &iLocal_109, &iLocal_110, &iLocal_111, &iLocal_112, &vLocal_113, &vLocal_114);
		func_401(Local_75.f_32, &vLocal_115, &vLocal_116, &fLocal_117);
		func_400(Local_75.f_32, &vLocal_118, &vLocal_119, &fLocal_120);
		switch (Local_75.f_32)
		{
			case 0x00000000:
				vLocal_85 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_86 = { 0f, 0f, 21.89f };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_83 = 116.5329f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000001;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000001:
				vLocal_86 = { 0f, 0f, -160f };
				vLocal_85 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_83 = 178.8753f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000001;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000001;
				}
				break;
			
			case 0x00000002:
				vLocal_85 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_86 = { 0f, 0f, 175.52f };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_83 = 191.594f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000002;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000002;
				}
				break;
			
			case 0x00000003:
				vLocal_86 = { 0f, 0f, -82.38f };
				vLocal_85 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_83 = 228.4295f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000001;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000004:
				vLocal_86 = { 0f, 0f, 180f };
				vLocal_85 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_83 = 197.2994f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000001;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000001;
				}
				break;
			
			case 0x00000005:
				vLocal_86 = { 0f, 0f, 155f };
				vLocal_85 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_83 = 296.5427f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000002;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000002;
				}
				break;
			
			case 0x00000006:
				vLocal_86 = { 0f, 0f, 63.3f };
				vLocal_85 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_83 = 130.9518f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000001;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000007:
				vLocal_86 = { 0f, 0f, 117f };
				vLocal_85 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_83 = 73.6245f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000001;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000001;
				}
				break;
			
			case 0x00000008:
				vLocal_86 = { 0f, 0f, 92f };
				vLocal_85 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_83 = 110.7699f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000002;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000002;
				}
				break;
			
			case 0x00000009:
				vLocal_86 = { 0f, 0f, 75f };
				vLocal_85 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_83 = 52.0064f;
				iLocal_104 = 0x00000001;
				if (func_398(0x00000006, 0x00000012))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000000;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x0000000A:
				vLocal_86 = { 0f, 0f, 0f };
				vLocal_85 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_83 = 136.5945f;
				iLocal_104 = 0x00000003;
				if (func_398(0x0000000A, 0x00000016))
				{
					iLocal_286[0x00000000] = 0x00000001;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x0000000B:
				vLocal_86 = { 0f, 0f, -92f };
				vLocal_85 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_83 = 176.1174f;
				iLocal_104 = 0x00000003;
				if (func_398(0x0000000A, 0x00000016))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x0000000C:
				vLocal_86 = { 0f, 0f, -145f };
				vLocal_85 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_83 = 43.8031f;
				iLocal_104 = 0x00000003;
				if (func_398(0x0000000A, 0x00000016))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x0000000D:
				vLocal_86 = { 0f, 0f, 103f };
				vLocal_85 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_83 = 269.2587f;
				iLocal_104 = 0x00000003;
				if (func_398(0x0000000A, 0x00000016))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000001;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x0000000E:
				vLocal_86 = { 0f, 0f, -41f };
				vLocal_85 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_83 = 36.5415f;
				iLocal_104 = 0x00000003;
				if (func_398(0x0000000A, 0x00000016))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x0000000F:
				vLocal_86 = { 0f, 0f, 145f };
				vLocal_85 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_83 = 24.9178f;
				iLocal_104 = 0x00000002;
				if (func_398(0x00000008, 0x00000014))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000010:
				vLocal_86 = { 0f, 0f, -87f };
				vLocal_85 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_83 = 291.6504f;
				iLocal_104 = 0x00000002;
				if (func_398(0x00000008, 0x00000014))
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000011:
				vLocal_86 = { 0f, 0f, -125f };
				vLocal_85 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -40.42f, -1751.423f, 28.421f };
				fLocal_83 = 145.6553f;
				iLocal_104 = 0x00000002;
				if (func_398(0x00000008, 0x00000014))
				{
					iLocal_286[0x00000000] = 0x00000001;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000001;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000001;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000002;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000012:
				vLocal_86 = { 0f, 0f, -74f };
				vLocal_85 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_83 = 232.6337f;
				iLocal_104 = 0x00000002;
				if (func_398(0x00000008, 0x00000014))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000000;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000000;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
			
			case 0x00000013:
				vLocal_85 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_86 = { 0f, 0f, -47.3f };
				iLocal_80 = func_52(0x00000000);
				vLocal_82 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_83 = 247.1234f;
				iLocal_104 = 0x00000002;
				if (func_398(0x00000008, 0x00000014))
				{
					iLocal_286[0x00000000] = 0x00000002;
					iLocal_287[0x00000000] = 0x00000001;
					iLocal_286[0x00000001] = 0x00000000;
					iLocal_287[0x00000001] = 0x00000000;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000000;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				else
				{
					iLocal_286[0x00000000] = 0x00000000;
					iLocal_287[0x00000000] = 0x00000002;
					iLocal_286[0x00000001] = 0x00000002;
					iLocal_287[0x00000001] = 0x00000001;
					iLocal_286[0x00000002] = 0x00000000;
					iLocal_287[0x00000002] = 0x00000001;
					iLocal_286[0x00000003] = 0x00000000;
					iLocal_287[0x00000003] = 0x00000001;
					iLocal_286[0x00000004] = 0x00000001;
					iLocal_287[0x00000004] = 0x00000000;
				}
				break;
		}
		vLocal_85 = { unk_0x8A5E176FF719A014(vLocal_85, vLocal_86.z, 0f, 0.075f, 0f) };
		vLocal_81 = { unk_0x1BB04F10296A1C5E("mp_am_hold_up", "holdup_victim_20s", vLocal_85, vLocal_86, 0x00000000, 0x00000002) };
		vVar0 = { unk_0xEEB20D14BD38615E("mp_am_hold_up", "holdup_victim_20s", vLocal_85, vLocal_86, 0x00000000, 0x00000002) };
		Local_73.f_2A = vVar0.z;
		vLocal_97 = { unk_0x1BB04F10296A1C5E("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_85, vLocal_86, 0x00000000, 0x00000002) };
		vVar0 = { unk_0xEEB20D14BD38615E("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_85, vLocal_86, 0x00000000, 0x00000002) };
		fLocal_98 = vVar0.z;
		vLocal_99 = { unk_0x1BB04F10296A1C5E("mp_am_hold_up", "holdup_victim_20s_till", vLocal_85, vLocal_86, 0x00000000, 0x00000002) };
		vVar0 = { unk_0xEEB20D14BD38615E("mp_am_hold_up", "holdup_victim_20s_till", vLocal_85, vLocal_86, 0x00000000, 0x00000002) };
		fLocal_100 = vVar0.z;
		Local_75 = func_397(Local_75.f_32);
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_73.f_2D = iLocal_286[0x00000000];
			if (Local_73.f_2D == 0x00000000)
			{
				StringCopy(&(Local_73.f_32), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_73.f_2E), "StoreOwner2", 16);
			}
			else if (Local_73.f_2D == 0x00000001)
			{
				StringCopy(&(Local_73.f_32), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_73.f_2E), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_73.f_32), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_73.f_2E), "StoreOwner3", 16);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001D))
		{
			unk_0x3124890FDA752DE4(vLocal_85, 0.5f, iLocal_101, 0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_75.f_34), 0x0000001D);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000010:
			return 0x00000000;
		
		case 0x00000011:
			return 0x00000001;
		
		case 0x00000012:
			return 0x00000002;
		
		case 0x0000000F:
			return 0x00000003;
		
		case 0x00000013:
			return 0x00000004;
		
		case 0x0000000A:
			return 0x00000005;
		
		case 0x0000000B:
			return 0x00000006;
		
		case 0x0000000C:
			return 0x00000007;
		
		case 0x0000000D:
			return 0x00000008;
		
		case 0x0000000E:
			return 0x00000009;
		
		case 0x00000002:
			return 0x0000000A;
		
		case 0x00000001:
			return 0x0000000B;
		
		case 0x00000003:
			return 0x0000000C;
		
		case 0x00000004:
			return 0x0000000D;
		
		case 0x00000005:
			return 0x0000000E;
		
		case 0x00000006:
			return 0x0000000F;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x00000008:
			return 0x00000011;
		
		case 0x00000009:
			return 0x00000012;
		
		case 0x00000000:
			return 0xFFFFFFFE;
		
		default:
	}
	return 0xFFFFFFFF;
}

bool func_398(int iParam0, int iParam1)
{
	return func_399(unk_0xD8A54335F18763BA(), iParam0, iParam1);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0x00000018)
	{
		iParam1 = 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000018)
	{
		iParam2 = 0x00000000;
	}
	if (iParam2 < 0x00000000 || iParam2 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam1 == iParam2)
	{
		return 0x00000001;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 0x00000018;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	if (!bVar0)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_400(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0x00000000)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 0x00000001)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000002)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000003)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000004)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000005)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000006)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000007)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000008)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x00000009)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x0000000A)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 0x0000000B)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 0x0000000C)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 0x0000000D)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 0x0000000E)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 0x0000000F)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 0x00000010)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 0x00000011)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 0x00000012)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 0x00000013)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_401(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0x00000000)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 0x00000001)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000002)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000003)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000004)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000005)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000006)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000007)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000008)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x00000009)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 0x0000000A)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 0x0000000B)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 0x0000000C)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 0x0000000D)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 0x0000000E)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 0x0000000F)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 0x00000010)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 0x00000011)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 0x00000012)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 0x00000013)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_402(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_403(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0x00000000:
			if (*iParam1 == 0x00000000)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_methlab");
			}
			*uParam2 = 0x9F5586F6;
			*uParam4 = 0xC8E9ABAE;
			*uParam3 = 0xFFFFFFFF;
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			if (*iParam1 == 0x00000000)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_shop_247");
			}
			*uParam2 = 0x5D91282F;
			*uParam4 = 0x1B92D7DA;
			*uParam3 = 0xFFFFFFFF;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			if (*iParam1 == 0x00000000)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_gen_liquor");
			}
			*uParam2 = 0xEF664545;
			*uParam4 = 0xB2E7BC57;
			*uParam3 = 0xFFFFFFFF;
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
			if (*iParam1 == 0x00000000)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_gasstation");
			}
			*uParam2 = 0x9D15BA25;
			*uParam4 = 0xB428DD2F;
			*uParam3 = 0xCE30C4A8;
			break;
	}
}

void func_403(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 0x00000001:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 0x00000002:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 0x00000003:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 0x00000004:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 0x00000005:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 0x00000006:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 0x00000007:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 0x00000008:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 0x00000009:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 0x0000000A:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 0x0000000B:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 0x0000000C:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 0x0000000D:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 0x0000000E:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 0x0000000F:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 0x00000010:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 0x00000011:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 0x00000012:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 0x00000013:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_404(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000014)
	{
		fVar0 = unk_0x0EB28750412C3A5A(func_87(unk_0xD803B885F5E47A62()), func_405(iVar2), 0x00000001);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_250293.f_3E, iVar2) && unk_0xEAE0D21A50E6C7F4(Global_250293.f_40, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 0x00000001;
}

Vector3 func_405(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	func_403(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_406(int iParam0)
{
	return Local_74[iParam0 /*10*/].f_4;
}

void func_407()
{
	Global_2564C8.f_2AC.f_1C = 0x00000000;
}

void func_408()
{
	if (Global_1406A2.f_1 == 0x00000001)
	{
		func_409(0x00000007, 0x00000000, 0x00000001);
		Global_1406A2.f_1 = 0x00000000;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_9 = 0x00000000;
	}
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	if (func_379())
	{
		if (iParam1 == 0x00000001)
		{
			if (Global_26B66F.f_112B == 0xFFFFFFFF)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_410(&(Global_26B66F.f_1129), 0x00000000, 0x00000000);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 0xFFFFFFFF)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_410(&(Global_26B66F.f_112C), 0x00000000, 0x00000000);
			}
			else
			{
				Global_1406A2 = 0x00000000;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
				func_378(0x00000001);
			}
		}
		else
		{
			Global_1406A2 = 0x00000000;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
			func_378(0x00000001);
		}
		if ((!unk_0xA14BB9332558B949() && !func_377()) && !func_376(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000000;
		}
		unk_0x6EC9FBED3024FDF5(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, iParam0);
	}
}

void func_410(var uParam0, bool bParam1, bool bParam2)
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

void func_411()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_46(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		iVar0 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000005))
		{
			iVar1 = unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
			iVar2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&iVar2, 0x00000008);
			unk_0x5D96D8530B3D0904(&iVar2, 0x00000004);
			unk_0x5D96D8530B3D0904(&iVar2, 0x00000001);
			if (iLocal_305 > Global_40001.f_A7)
			{
				iLocal_305 = Global_40001.f_A7;
			}
			if (iVar1 < iLocal_305)
			{
				if (iVar1 > 0x00000000)
				{
					if (func_51(func_52(0x00000001)))
					{
						if (unk_0xAC0726A85BBACC32(iVar1, 0x00000000, 0x00000000, 0x00000000, &uVar3, 0xFFFFFFFF, 0x00000000))
						{
							if (func_214())
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_7, 0x00000001))
								{
									Global_26B66F.f_1355 = iVar1;
									Global_26B66F.f_1356 = iVar2;
									Global_26B66F.f_1357 = { unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 0x3F99999A, 0x3FC00000) };
									func_204(&(Global_26B66F.f_1354), 0xBC537E0D, 0x2005D9A9, 0x57DE404E, 0x3CF098E4, Global_26B66F.f_1355, 0x00000001, 0x00000003);
									unk_0x5D96D8530B3D0904(&(Global_26B66F.f_7), 0x00000001);
									iLocal_305 = 0x00000000;
									unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000005);
								}
							}
							else
							{
								unk_0xB8D1BBEFD1257857(joaat("pickup_money_variable"), unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 0x3F99999A, 0x3FC00000), iVar2, iVar1, func_52(0x00000001), 0x00000000, 0x00000000);
								func_199(-iVar1, 0x00000001, 0x00000001, 0x41200000);
								unk_0x3B4B5F7107265106(iVar1, 0x00000000, 0x00000000);
								func_203(0x3CF098E4, iVar1, &uVar4, 0x00000000, 0x00000000, 0x00000000);
								iLocal_305 = 0x00000000;
								func_412();
								unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000005);
							}
						}
					}
					else
					{
						iVar0 = 0x00000000;
					}
				}
			}
			else if (iLocal_305 > 0x00000000)
			{
				if (func_51(func_52(0x00000001)))
				{
					if (unk_0xAC0726A85BBACC32(iLocal_305, 0x00000000, 0x00000000, 0x00000000, &uVar3, 0xFFFFFFFF, 0x00000000))
					{
						if (func_214())
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_7, 0x00000001))
							{
								Global_26B66F.f_1355 = iLocal_305;
								Global_26B66F.f_1356 = iVar2;
								Global_26B66F.f_1357 = { unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 0x3F99999A, 0x3FC00000) };
								func_204(&(Global_26B66F.f_1354), 0xBC537E0D, 0x2005D9A9, 0x57DE404E, 0x3CF098E4, Global_26B66F.f_1355, 0x00000001, 0x00000003);
								unk_0x5D96D8530B3D0904(&(Global_26B66F.f_7), 0x00000001);
								iLocal_305 = 0x00000000;
								unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000005);
							}
						}
						else
						{
							unk_0xB8D1BBEFD1257857(joaat("pickup_money_variable"), unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 0x3F99999A, 0x3FC00000), iVar2, iLocal_305, func_52(0x00000001), 0x00000000, 0x00000000);
							func_199(-iLocal_305, 0x00000001, 0x00000001, 0x41200000);
							unk_0x3B4B5F7107265106(iLocal_305, 0x00000000, 0x00000000);
							func_203(0x3CF098E4, iLocal_305, &uVar5, 0x00000000, 0x00000000, 0x00000000);
							iLocal_305 = 0x00000000;
							func_412();
							unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000005);
						}
					}
				}
				else
				{
					iVar0 = 0x00000000;
				}
			}
		}
		if (iVar0 == 0x00000001)
		{
			func_438();
		}
		else
		{
			return;
		}
	}
}

void func_412()
{
	Global_26B66F.f_11B = 0x00000000;
	Global_26B66F.f_11C = 0x00000000;
	Global_26B66F.f_11D = 0x00000000;
}

int func_413()
{
	var uVar0;
	
	func_421(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_420())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_419())
	{
		return 0x00000001;
	}
	if (func_418(0x0000009F))
	{
		if (!func_417())
		{
			return 0x00000001;
		}
	}
	if (func_418(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_414() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_414()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_414()
{
	switch (func_416())
	{
		case 0x00000000:
			return func_415();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_415()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_416()
{
	return Global_7830;
}

bool func_417()
{
	return Global_2564C8.f_256;
}

int func_418(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_419()
{
	return Global_258C08;
}

bool func_420()
{
	return Global_2564C8.f_251;
}

void func_421(var uParam0)
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
					func_422(iVar0);
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

void func_422(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_46(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_423(iVar2, &bVar3))
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

int func_423(int iParam0, var uParam1)
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

void func_424()
{
	SYSTEM::WAIT(0x00000000);
}

void func_425(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_436())
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
		if (!func_434())
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
				else if (bVar14 || (!func_331(unk_0xD803B885F5E47A62(), 0x00000000) && !func_433()))
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
					func_430(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_429(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_428();
					func_427();
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
				if (!func_429(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_426(Global_440000.f_38DB3))
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

bool func_426(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_427()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_428()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_429(int iParam0)
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

void func_430(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (bParam0 == 0x00000001)
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
			if (bParam0 == 0x00000001)
			{
				func_432();
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
		if (func_331(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_431(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_431(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_432()
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

bool func_433()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_434()
{
	if (func_435() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_435()
{
	return Global_1406D3.f_12;
}

int func_436()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_437(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2564C8.f_2AC.f_1C && unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_2564C8.f_2AC.f_1F);
	}
	return Global_2564C8.f_2AC.f_1C;
}

void func_438()
{
	int iVar0;
	
	Global_26B66F.f_8 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_393(Local_73))
		{
			if (unk_0x526BC32A660C89E6(Local_73) || (!unk_0x83F012E6200426DB(Local_73) && unk_0xBFF81ED3B99522C7()))
			{
				unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0x00000000);
				unk_0x16BEAC335EC5109B(unk_0x1B50683925F00106(Local_73));
				if (unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000016))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000014))
					{
						if (Local_73.f_3 != 0x00000007)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000009))
							{
								unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), iLocal_91);
								unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0x00000000);
							}
						}
						else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xAA05B492) != 0x00000000 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 0xAA05B492) != 0x00000001)
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
							if (!unk_0x440C646F2F11A2A1(unk_0x1B50683925F00106(Local_73), joaat("weapon_pistol"), 0x00000000))
							{
								unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_pistol"), 0x000061A8, 0x00000001);
								unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), 0x0000001E);
							}
							func_228(0x00000004);
							unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73), 20f, 0x00000000);
						}
					}
					else if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000003) || !func_10()) || !func_442())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0x00000009))
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), iLocal_91);
							unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0x00000000);
						}
					}
					else
					{
						unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 0x00000001);
						unk_0x93D47DFD0AE94949(unk_0x1B50683925F00106(Local_73), 0xFFFFFFFF);
						unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0x00000000);
					}
				}
			}
		}
		if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000003) || !func_10()) || unk_0x0DC0B2DBBD52B0C0() <= 0x00000001)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_D))
			{
				if (unk_0x526BC32A660C89E6(Local_73.f_D))
				{
					unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_D), 0x00000001, 0x00000001);
					func_47(&(Local_73.f_D));
				}
			}
		}
		if (((unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000003) || !func_10()) || unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x00000014)) || unk_0x0DC0B2DBBD52B0C0() <= 0x00000001)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_E))
			{
				if (unk_0x526BC32A660C89E6(Local_73.f_E))
				{
					func_47(&(Local_73.f_E));
				}
			}
		}
		if (func_214() && unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_7, 0x00000001))
		{
			if (func_287(Global_26B66F.f_1354) == 0x00000001)
			{
				func_441(Global_26B66F.f_1354, 0x00000004);
			}
			else
			{
				func_206(Global_26B66F.f_1354);
			}
			unk_0x0674E58A79778E99(&(Global_26B66F.f_7), 0x00000001);
		}
		if (Local_73.f_C == 0x00000006)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73))
			{
				if (unk_0x30F813723591D02E(unk_0x1B50683925F00106(Local_73), "XP_Blocker"))
				{
					unk_0x059C92C065EF869A(unk_0x1B50683925F00106(Local_73), "XP_Blocker");
				}
			}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			unk_0x850CF499433B183D(Local_73.f_1E);
		}
	}
	func_440();
	unk_0x8D17794CE3273D70("mp_am_hold_up");
	unk_0xF4F1F4F85B61EBA2();
	if (func_146("SHR_MENU"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	Global_26B66F.f_9 = func_180();
	unk_0xF5A41F3D3B38EFE3(func_395(Local_75));
	func_162(0x00000001, Local_75);
	if (Local_75.f_E != 0xFFFFFFFF)
	{
		func_261(&(Local_75.f_E));
	}
	Global_26B66F.f_1B = Local_75;
	if (Global_26B66F.f_16FC.f_4 == 0x00000001)
	{
		Global_26B66F.f_16FC.f_4 = 0x00000000;
	}
	if (Global_26B66F.f_16FC.f_5 == 0x00000001)
	{
		Global_26B66F.f_16FC.f_5 = 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_75.f_34, 0x0000001D))
	{
		unk_0x77ADAEFF81EAE1E4(vLocal_85, 0.5f, iLocal_101, 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_75.f_35, 0x00000007))
	{
		func_408();
		unk_0x0674E58A79778E99(&(Local_75.f_35), 0x00000007);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000015))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_17, 0x00000015))
			{
				iVar0 = 0x00000001;
			}
			unk_0x529565B257F62F7E(0x0000001E, iLocal_304, iLocal_305, iVar0);
		}
	}
	if (unk_0x9F4FE516EAACCFC5(Local_75.f_1))
	{
		if (unk_0xFBB4F23D534EB790(Local_75.f_1))
		{
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(Local_75.f_1, 0x00000000);
	}
	func_439();
}

void func_439()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_440()
{
	unk_0xF82EA857DA10E0CD(&uLocal_88);
	unk_0xF82EA857DA10E0CD(&iLocal_89);
}

void func_441(int iParam0, int iParam1)
{
	if (func_273(iParam0) != 0xFFFFFFFF)
	{
		if (Global_411012[iParam0 /*85*/].f_42.f_2 == 0x00000001)
		{
			Global_411012[iParam0 /*85*/].f_42.f_B = iParam1;
		}
	}
}

int func_442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			iVar2 = unk_0x9539D44F3E4492F6(iVar1);
			if (func_46(iVar1, 0x00000001, 0x00000001))
			{
				if (unk_0x4D570FEF9D230CE7(iVar2) == iLocal_109)
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_443(struct<21> Param0)
{
	int iVar0;
	
	func_449(func_450(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(0x00000002);
	unk_0x3A4967AE7C71F999(0x00000008);
	func_447(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_73, 0x00000049);
	unk_0x35B62793EAE9ADDF(&Local_74, 0x00000141);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_446())
	{
		return 0x00000000;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		func_51(func_52(0x00000000));
		func_51(func_52(0x00000001));
		func_51(func_52(0x00000002));
		unk_0x3F423BF5B8125A50("mp_am_hold_up");
		unk_0x3F423BF5B8125A50("mp_missheist_countrybank@cower");
		Local_73.f_2C = 0x00000008;
		if (func_445())
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x0000000B);
		}
		else if (func_444())
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_18), 0x0000000C);
		}
		Local_73.f_1C = unk_0x09AC81E49EA267F7(0x00000001, 0x0000000B);
		Local_73.f_1F = unk_0x09AC81E49EA267F7(0x00000001, 0x00000005);
		if ((func_13() && !func_386(unk_0xD803B885F5E47A62(), 0x00000001)) && !func_386(unk_0xD803B885F5E47A62(), 0x00000002))
		{
			Local_73.f_2B = 0x00000002;
			unk_0x5D96D8530B3D0904(&(Local_73.f_19), 0x00000000);
		}
		else
		{
			Local_73.f_2B = 0x00000001;
		}
		Local_73.f_47 = unk_0x79833B02DBD2A244(18f, 28f);
	}
	if (func_95(unk_0xD803B885F5E47A62()) != 0x0000009B)
	{
		unk_0xD3DD9662CCFC031F(func_52(0x00000001), 0x00000000);
	}
	iVar0 = func_126(0x000004A6, 0xFFFFFFFF, 0x00000000);
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000014) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000015))
	{
		unk_0x5D96D8530B3D0904(&(Local_75.f_35), 0x00000001);
	}
	Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0x00000000;
	return 0x00000001;
}

int func_444()
{
	if (Local_75.f_32 >= 0x00000000 && Local_75.f_32 <= 0x00000009)
	{
		if (func_398(0x00000005, 0x00000006) || func_398(0x00000011, 0x00000012))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (Local_75.f_32 >= 0x0000000A && Local_75.f_32 <= 0x0000000E)
	{
		if (func_398(0x00000009, 0x0000000A) || func_398(0x00000015, 0x00000016))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (Local_75.f_32 >= 0x0000000F && Local_75.f_32 <= 0x00000013)
	{
		if (func_398(0x00000007, 0x00000008) || func_398(0x00000013, 0x00000014))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_445()
{
	if (Local_75.f_32 >= 0x00000000 && Local_75.f_32 <= 0x00000009)
	{
		if (func_398(0x00000006, 0x00000007) || func_398(0x00000012, 0x00000013))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (Local_75.f_32 >= 0x0000000A && Local_75.f_32 <= 0x0000000E)
	{
		if (func_398(0x0000000A, 0x0000000B) || func_398(0x00000016, 0x00000017))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (Local_75.f_32 >= 0x0000000F && Local_75.f_32 <= 0x00000013)
	{
		if (func_398(0x00000008, 0x00000009) || func_398(0x00000014, 0x00000015))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_446()
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
		if (func_420())
		{
			return 0x00000000;
		}
		if (func_418(0x0000009D))
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

int func_447(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_448())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_420())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_418(0x0000009D))
				{
					if (!bParam2)
					{
						func_439();
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
					func_439();
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
				func_439();
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
			func_439();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_448()
{
	return Global_140856;
}

void func_449(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_439();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_450(int iParam0)
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

