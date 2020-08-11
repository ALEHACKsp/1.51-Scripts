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
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
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
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = 0xFFFFFFFF;
	bLocal_303 = 0x00000001;
	unk_0x5E8C29AE121DF1C7("stripperhome");
	unk_0x7798376279BB5369(0x00000001);
	unk_0xB008F1989AB372AF(unk_0xD803B885F5E47A62(), 0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x0000004B))
	{
		func_303();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		unk_0x37AD2AB54480FA6A(0x00000020, 0x00000000, 0xFFFFFFFF);
		func_298(0x00000000, 0xFFFFFFFF, 0x00000000);
		unk_0x0BEC04ECA8485A3A(0x00000001);
		unk_0x256D93AFAE851A7A(0x00000000);
	}
	uLocal_74[0x00000000] = ScriptParam_308[0x00000000];
	Global_1B047.f_1 = uLocal_74[0x00000000];
	bVar0 = 0x00000000;
	bVar1 = 0x00000001;
	iVar2 = unk_0xD8A54335F18763BA();
	if (func_297() && ScriptParam_308.f_4)
	{
		bVar1 = 0x00000000;
		if (iVar2 > 0x0000000E && iVar2 < 0x00000016)
		{
			bVar0 = 0x00000001;
		}
	}
	while (((!func_268(&ScriptParam_308, bVar0) && iLocal_72 != 0x00000006) && iLocal_72 != 0x00000005) && (iLocal_72 != 0xFFFFFFFF || !func_267(uLocal_300, 0x00000400)))
	{
		func_259(0x00000000);
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x71199B01895C6202(func_258(0x00000000, 0x00000000));
	unk_0x71199B01895C6202(func_258(0x00000001, 0x00000000));
	if (!bVar1)
	{
		iLocal_72 = 0x00000002;
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (iLocal_302 > 0x00000000)
		{
			func_256();
			iLocal_302 = (iLocal_302 - SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
		}
		switch (iLocal_72)
		{
			case 0xFFFFFFFF:
				func_255();
				break;
			
			case 0x00000000:
				func_215(0x00000001);
				break;
			
			case 0x00000001:
				func_108();
				break;
			
			case 0x00000002:
				func_215(0x00000000);
				break;
			
			case 0x00000003:
				func_90();
				break;
			
			case 0x00000004:
				func_38(bLocal_303);
				break;
			
			case 0x00000005:
				func_11();
				break;
			
			case 0x00000006:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

int func_3(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_4(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

void func_7(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_11()
{
	if (!func_267(uLocal_300, 0x00002000))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 0x00000006;
		}
	}
	if (func_267(uLocal_300, 0x00004000))
	{
		if (func_12())
		{
			iLocal_72 = 0x00000006;
		}
	}
}

int func_12()
{
	if (unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
	{
		return 0x00000001;
	}
	if (func_267(uLocal_300, 0x00002000))
	{
		unk_0x9DD8618CA5BF832D(iLocal_271[0x00000000], 0x0000003C, 0x00000001);
		if (unk_0x5A91F08DF773C39D(iLocal_271[0x00000000], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0x00000000, 0x00000001, 0x00000001) || func_25(unk_0x16F2683693E537C9(), 96.8033f, -1287.597f, 28.2688f, 0x00000001) > 100f)
		{
			if (unk_0xBF75E4DF4C367CD9(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0x00000001, 0f, 0x00000000);
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_279[0x00000000]))
			{
				if (unk_0x9CF8D5C7090408A2(iLocal_279[0x00000000]))
				{
					func_13(0x00000001, 0x00000001, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					unk_0x9A8DDC7C522F5BF5(iLocal_279[0x00000000], 0x00000001);
				}
			}
			unk_0xEBA53F35D0085654(&(iLocal_271[0x00000000]));
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_15(0x00000000, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	func_14(0x00000017, 0x00000000);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_24(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_23())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_22(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_24(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_22(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_20(unk_0xD803B885F5E47A62())) && !func_17(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_16()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_20(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_16()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_18(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1407E9;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_21())
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

bool func_21()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_23()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_24(int iParam0)
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

float func_25(int iParam0, vector3 vParam1, bool bParam2)
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

void func_26()
{
	int iVar0;
	
	func_29();
	if (unk_0xBF75E4DF4C367CD9(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0x00000000))
	{
		unk_0x6DA3AC47D5DB9EED(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0x00000000, 0f, 0x00000000);
	}
	func_27(&uLocal_300, 0x00004000);
	unk_0x1E9649458B15960F(iLocal_271[0x00000000], 0x00000000);
	unk_0x4E885A246A9D983A(iLocal_271[0x00000000], 0x00000068, 0x00000001);
	unk_0xDD353D0E9C789D0E(&iVar0);
	unk_0x96167B03C5A77156(0x00000000, 98.2041f, -1291.252f, 28.2688f, 1f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
	unk_0x96167B03C5A77156(0x00000000, 107.6303f, -1304.742f, 27.7688f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
	unk_0xC6EB89C59F2AF6B8(0x00000000, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 0x00003A98, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x75ABDC5F81978924(iVar0);
	unk_0x78ADC381772E3D54(iLocal_271[0x00000000], iVar0);
	unk_0xF82EA857DA10E0CD(&iVar0);
	func_27(&uLocal_300, 0x00002000);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0x03068588A1FCED1A(iLocal_271[0x00000000]) && func_36(0x00000001, 0x00000000, 0x00000001))
	{
		func_30(0x00000000, 0x00000000, 0x00000000);
		iLocal_279[0x00000000] = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 0x00000001, 0x00000002);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_31(0x00000000);
	func_15(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_14(0x00000017, 0x00000001);
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_34())
		{
			func_32(0x00000001, 0x00000001);
		}
		else
		{
			func_32(0x00000000, 0x00000000);
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
	if (!func_23())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0x00000000))
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

int func_33(int iParam0)
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

bool func_34()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_35()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_36(bool bParam0, bool bParam1, bool bParam2)
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

int func_37()
{
	if ((uLocal_74[0x00000000] == 0x00000008 || uLocal_74[0x00000000] == 0x00000009) || func_25(iLocal_271[0x00000000], 96.12f, -1284.91f, 29.43f, 0x00000001) > 10f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_38(bool bParam0)
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	
	func_65();
	if (bParam0)
	{
		vVar0 = { vLocal_287 };
	}
	else
	{
		func_64(&vVar0, &uVar1, 0x00000000);
	}
	func_61(vVar0);
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(iLocal_271[0x00000000], 0x00000000))
		{
			iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar2) && !unk_0x437347B10A200C4B(iVar2, 0x00000000))
			{
				if (iLocal_305)
				{
					if (func_59(iVar2, 4f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
					{
						func_58();
						unk_0x75CDA8644CD3B5F5(iLocal_271[0x00000000], 0x00000000, 0x01000000);
						func_39();
					}
				}
				else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar0, 4f, 4f, 2f, 0x00000001, 0x00000001, 0x00000002))
				{
					iLocal_305 = 0x00000001;
				}
			}
		}
	}
}

void func_39()
{
	func_57();
	func_50(0x00000127, 0x00000000, 0x00000000);
	func_40(0x00000000);
	func_303();
}

void func_40(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_47())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0x00000000 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[0x00000001 /*8*/]), "Location", 32);
	StringCopy(&(Var0[0x00000002 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0x00000000 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0x00000000 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[0x00000001 /*6*/]), "City", 24);
	StringCopy(&(Var1[0x00000002 /*6*/]), "????", 24);
	if (func_45(0x000000C8, &Var1, &Var0, 0x00000003, 0xFFFFFFFF, 0x00000000, 0x00000000))
	{
		unk_0x6106B2DBBCB1AA39(0x00000083, func_44(), 0f);
		unk_0x6106B2DBBCB1AA39(0x0000006C, func_43(), 0f);
		unk_0x6106B2DBBCB1AA39(0x00000066, func_42(), 0f);
		unk_0x6106B2DBBCB1AA39(0x00000008, func_41(), 0f);
	}
	iLocal_64 = 0x00000000;
	iLocal_65 = 0x00000000;
	iLocal_66 = 0x00000000;
	iLocal_67 = 0x00000000;
}

int func_41()
{
	return iLocal_65;
}

int func_42()
{
	return iLocal_66;
}

int func_43()
{
	return iLocal_64;
}

int func_44()
{
	return 0x00000000;
}

int func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 0x00000004;
		Var0 = iParam0;
		if (iParam4 == 0xFFFFFFFF)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_46(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 0x00000023, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0x00000000;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 0x00000008);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_258538.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_195CCB.f_A));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 0x00000001;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0x00000000;
}

struct<13> func_46(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_47()
{
	if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && func_48())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_48()
{
	if (func_49())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_49()
{
	return Global_258DFD;
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
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
		func_51();
	}
}

void func_51()
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
		func_55(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_54() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0x00000000))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_54()
{
	return Global_7830;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

void func_57()
{
	iLocal_66++;
	iLocal_67 = 0x00000001;
}

void func_58()
{
	if (unk_0xC844350D5D58C99A(iLocal_271[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
	{
		unk_0x33CE5A9E32EA10B2(iLocal_271[0x00000000], 0x00000001);
		if (unk_0x16102BEDC7435774(iLocal_271[0x00000000]))
		{
			unk_0x0A94A109271BE75A(iLocal_271[0x00000000]);
		}
	}
}

int func_59(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_60(iParam0);
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

void func_60(int iParam0)
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

void func_61(vector3 vParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_277))
	{
		unk_0x142CC44DB769B57E(&iLocal_277);
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		if (unk_0x405E212DDE472467(iLocal_271[0x00000000], 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_271[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_276))
				{
					iLocal_276 = func_62(vParam0, 0x00000001);
				}
			}
		}
	}
}

int func_62(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, var uParam1, bool bParam2)
{
	vLocal_290 = { vLocal_290 };
	switch (uLocal_74[0x00000000])
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 0x00000009:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
	}
}

void func_65()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_271[0x00000000]))
	{
		if (!unk_0xC844350D5D58C99A(iLocal_271[0x00000000]))
		{
		}
		else if (unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
		{
		}
		func_66(0x00000000);
	}
}

void func_66(int iParam0)
{
	if ((uLocal_74[0x00000000] > 0xFFFFFFFF && uLocal_74[0x00000000] < 0x0000000A) && iParam0 != 0x00000002)
	{
		func_88(uLocal_74[0x00000000], (func_89(uLocal_74[0x00000000]) / 0x00000002));
	}
	func_86();
	switch (iParam0)
	{
		case 0x00000000:
			func_84("SCLUB_HOME_D", uLocal_74[0x00000000]);
			func_88(uLocal_74[0x00000000], 0x00000000);
			func_72(uLocal_74[0x00000000], 0x00000001);
			iLocal_72 = 0x00000006;
			break;
		
		case 0x00000001:
			unk_0x790015DC92C918E2();
			func_67("SCLUB_HOME_A", uLocal_74[0x00000000], 0x00000000);
			iLocal_72 = 0x00000005;
			break;
		
		case 0x00000002:
			iLocal_72 = 0x00000005;
			break;
		
		case 0x00000004:
			func_84("SCLUB_HOME_D3", uLocal_74[0x00000000]);
			iLocal_72 = 0x00000006;
			break;
		
		case 0x00000003:
			if (func_25(iLocal_271[0x00000000], 92.5861f, -1282.86f, 28.2548f, 0x00000001) < 10f)
			{
				iLocal_72 = 0x00000005;
			}
			else
			{
				iLocal_72 = 0x00000006;
			}
			break;
	}
}

void func_67(char* sParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_71(iParam1)}, 0x00000006);
	if (!func_70(sParam0, &sVar0))
	{
		if (!bParam2)
		{
			func_69(sParam0, &sVar0, 0xFFFFFFFF);
		}
		else
		{
			func_68(sParam0, &sVar0);
		}
	}
}

void func_68(char* sParam0, char* sParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_69(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam2);
}

bool func_70(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

struct<4> func_71(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 0x00000002);
	}
	else
	{
		func_73(&(Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 0x00000002);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_75()
{
	int iVar0;
	
	iVar0 = func_77();
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
			switch (func_76(0xFFFFFFFF))
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

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_19();
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

int func_77()
{
	func_78();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_78()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_82(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_81(unk_0x16F2683693E537C9());
			if (func_80(iVar0) && (!func_79(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_80(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_79(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_80(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_83(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_84(char* sParam0, int iParam1)
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_71(iParam1)}, 0x00000006);
	func_85(sParam0, &sVar0, 0x00001D4C, 0x00000001);
}

void func_85(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000001);
}

void func_86()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_277))
	{
		unk_0x142CC44DB769B57E(&iLocal_277);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_276))
	{
		unk_0x142CC44DB769B57E(&iLocal_276);
	}
	func_87();
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_278[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)
{
	return Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()
{
	func_65();
	func_86();
	switch (iLocal_77)
	{
		case 0x00000000:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(iLocal_271[0x00000000], 0x00000000))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) == 0f)
					{
						unk_0xA37A90C62806D848(0x00000001);
						unk_0x3F423BF5B8125A50(func_100(iLocal_271[0x00000000], 0x00000000, 0x00000000));
						iLocal_77 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (func_93())
			{
				iLocal_77 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x0E763797) != 0x00000001)
			{
				func_256();
				if (unk_0xD8A54335F18763BA() > 0x00000014 || unk_0xD8A54335F18763BA() < 0x00000004)
				{
					bLocal_303 = 0x00000000;
				}
				unk_0xA79E2388E9C0B0DB(iLocal_45);
				func_91(bLocal_303);
				iLocal_72 = 0x00000004;
			}
			break;
	}
}

void func_91(bool bParam0)
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO", uLocal_74[0x00000000]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000008:
		case 0x00000009:
			func_92("SCLUB_HOME_GO3", 0x00001D4C, 0x00000001);
			break;
	}
}

void func_92(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_93()
{
	if (unk_0xB4AE0788C1587752(func_100(iLocal_271[0x00000000], 0x00000000, 0x00000000)))
	{
		func_94(iLocal_271[0x00000000], 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000001);
		func_94(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_94(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000001);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		return;
	}
	iLocal_45 = unk_0x6C3F127AAF415E69();
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && func_99(0x00000000, 0x00000001))
	{
		if (iLocal_45 != 0x00000004)
		{
			unk_0xA79E2388E9C0B0DB(0x00000004);
		}
	}
	bVar1 = func_98(iVar0);
	sVar2 = func_100(iParam0, 0x00000000, 0x00000000);
	if (!unk_0xB4AE0788C1587752(sVar2))
	{
		unk_0x3F423BF5B8125A50(sVar2);
	}
	else
	{
		unk_0xDD353D0E9C789D0E(&iVar3);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_95(0x00000000, bParam2, bParam1, bVar1), 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_95(0x00000001, bParam2, bParam1, bVar1), 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_95(0x00000002, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_95(0x00000003, bParam2, bParam1, bVar1), 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_95(0x00000004, bParam2, bParam1, bVar1), 4f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iVar3);
		unk_0x78ADC381772E3D54(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xF82EA857DA10E0CD(&iVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(0x00000012);
					}
					else
					{
						sVar0 = func_97(0x00000017);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(0x00000008);
				}
				else
				{
					sVar0 = func_97(0x0000000D);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(0x00000012);
				}
				else
				{
					sVar0 = func_96(0x00000017);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(0x00000008);
			}
			else
			{
				sVar0 = func_96(0x0000000D);
			}
			break;
		
		case 0x00000001:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(0x00000013);
					}
					else
					{
						sVar0 = func_97(0x00000018);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(0x00000009);
				}
				else
				{
					sVar0 = func_97(0x0000000E);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(0x00000013);
				}
				else
				{
					sVar0 = func_96(0x00000018);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(0x00000009);
			}
			else
			{
				sVar0 = func_96(0x0000000E);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(0x00000014);
					}
					else
					{
						sVar0 = func_97(0x00000019);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(0x0000000A);
				}
				else
				{
					sVar0 = func_97(0x0000000F);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(0x00000014);
				}
				else
				{
					sVar0 = func_96(0x00000019);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(0x0000000A);
			}
			else
			{
				sVar0 = func_96(0x0000000F);
			}
			break;
		
		case 0x00000003:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(0x00000015);
					}
					else
					{
						sVar0 = func_97(0x0000001A);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(0x0000000B);
				}
				else
				{
					sVar0 = func_97(0x00000010);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(0x00000015);
				}
				else
				{
					sVar0 = func_96(0x0000001A);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(0x0000000B);
			}
			else
			{
				sVar0 = func_96(0x00000010);
			}
			break;
		
		case 0x00000004:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(0x00000016);
					}
					else
					{
						sVar0 = func_97(0x0000001B);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(0x0000000C);
				}
				else
				{
					sVar0 = func_97(0x00000011);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(0x00000016);
				}
				else
				{
					sVar0 = func_96(0x0000001B);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(0x0000000C);
			}
			else
			{
				sVar0 = func_96(0x00000011);
			}
			break;
		
		case 0x00000005:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(0x00000003);
				}
				else
				{
					sVar0 = func_97(0x00000002);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(0x00000003);
			}
			else
			{
				sVar0 = func_96(0x00000002);
			}
			break;
		
		case 0x00000006:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "into_proposition_male";
			break;
		
		case 0x00000001:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 0x00000002:
			sVar0 = "proposition_loop_male";
			break;
		
		case 0x00000003:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 0x00000004:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 0x00000005:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 0x00000006:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 0x00000007:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 0x00000008:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 0x00000009:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 0x0000000A:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 0x0000000B:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 0x0000000C:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 0x0000000D:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 0x0000000E:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 0x0000000F:
			sVar0 = "sex_loop_male";
			break;
		
		case 0x00000010:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 0x00000011:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 0x00000012:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 0x00000013:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 0x00000014:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 0x00000015:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 0x00000016:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 0x00000017:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 0x00000018:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 0x00000019:
			sVar0 = "BJ_loop_male";
			break;
		
		case 0x0000001A:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 0x0000001B:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_97(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 0x00000001:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 0x00000002:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 0x00000003:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 0x00000004:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 0x00000005:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 0x00000006:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 0x00000007:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 0x00000008:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 0x00000009:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 0x0000000A:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 0x0000000B:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 0x0000000C:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 0x0000000D:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 0x0000000E:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 0x0000000F:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 0x00000010:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 0x00000011:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 0x00000012:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 0x00000013:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 0x00000014:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 0x00000015:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 0x00000016:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 0x00000017:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 0x00000018:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 0x00000019:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 0x0000001A:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 0x0000001B:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_98(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x84D77E93:
			case 0xFDB5DC9C:
			case 0xD158A20D:
			case 0x205A6F50:
			case 0x04163EC9:
			case 0x8F7B4F4E:
			case 0xE461FA3B:
			case 0x793A200A:
			case 0x93775997:
			case 0x652B6E19:
			case 0xDA1C0701:
			case 0xA95DAB1C:
			case 0x6D8780E5:
			case 0x7808B340:
			case 0x7B7DBC2F:
			case 0x7EFF5584:
			case 0xA3D7E5D4:
			case 0x47186FD7:
			case 0xED0C8CA8:
			case 0x21FA1EE8:
			case 0x48415DE9:
			case 0xF47EB4CA:
			case 0x1E6B77B1:
			case 0xC5168F32:
			case 0x49F1A7A9:
			case 0xDA9AFDA8:
			case 0x3ACDA851:
			case 0x685F9933:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

bool func_99(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (bParam0)
	{
		bVar0 = unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xA4FD7964FEE91ED8(0x00000001) == 0x00000004;
		}
	}
	return bVar0;
}

char* func_100(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000001);
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (func_98(iVar0))
			{
				if ((!func_99(0x00000000, 0x00000001) || iParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == 0x56CDEE7D)
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0x00000000, 0x00000001) || iParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_64(&vVar5, &uVar6, 0x00000000);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
		vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if (unk_0xA89A37CE7C5E4A5E(vVar3, &vVar7, 0x40400000, 0x00000000))
		{
			fVar8 = SYSTEM::VDIST(vVar3, vVar7);
			if (fVar8 <= 10f)
			{
				return 0x00000000;
			}
		}
		if (SYSTEM::VDIST(vVar3, vLocal_287) < 20f || SYSTEM::VDIST(vVar3, vVar5) < 20f)
		{
			return 0x00000000;
		}
		if (unk_0x9E9FD30CF64A88A8(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0x00000000;
		}
		unk_0xE51E576EA6B739AC(vVar3, fVar4, 0x00000001, 0x00000001, &iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF);
		if (!iVar0 == 0x00000000)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xF649DD3BF44195C7(iVar0, unk_0x16F2683693E537C9(), 0x00000011))
				{
					return 0x00000000;
				}
			}
		}
		else
		{
			iVar1 = unk_0x6E7D01E16ABEFABB(vVar3, fVar4, 0x00000000, 0xFFFFFFFF);
			if (!iVar1 == 0x00000000)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
					{
						iVar0 = unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000);
						if (!iVar0 == 0x00000000)
						{
							return 0x00000000;
						}
					}
				}
			}
		}
		iVar9 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
		if (!iVar9 == 0x00000000)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_106(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_107(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 0x0000000C && iLocal_73 >= 0x00000002)
	{
		if (func_213(0x00000BB8))
		{
			unk_0x53491B90E4FD0E56(0x000003E8);
			iLocal_73 = 0x0000000C;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 0x00000005)
	{
		iVar0 = unk_0x4EF27AB24893425F();
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = 0x00000000;
			}
			else if (unk_0x56E1CD81AE700E98(unk_0x4EF27AB24893425F()) && uLocal_74[0x00000000] == 0x00000005)
			{
				bLocal_69 = func_210(&uLocal_68, -865f, 516.3f, 90f, 0x00000001, 15f);
			}
			else if (func_209(unk_0x4EF27AB24893425F()))
			{
				bLocal_69 = func_210(&uLocal_68, vLocal_292, 0x00000001, fLocal_294);
			}
			else
			{
				bLocal_69 = func_210(&uLocal_68, vLocal_287, 0x00000001, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0x00000000 && iLocal_73 < 0x0000000D)
	{
		unk_0x3FC8DBCC154CA56B();
	}
	switch (iLocal_73)
	{
		case 0x00000000:
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x790015DC92C918E2();
			func_86();
			unk_0xAE317D00A5A55DF6("TIME_LAPSE", 0x00000000, 0xFFFFFFFF);
			func_30(0x00000038, 0x00000001, 0x00000000);
			if (!func_267(uLocal_300, 0x00020000))
			{
				func_27(&uLocal_300, 0x00020000);
			}
			if (!func_267(uLocal_300, 0x00000100))
			{
				func_208();
				func_27(&uLocal_300, 0x00000100);
			}
			if (!func_267(uLocal_300, 0x00008000))
			{
				unk_0x3F423BF5B8125A50(func_207());
				func_27(&uLocal_300, 0x00008000);
			}
			if (!func_267(uLocal_300, 0x00000100))
			{
				unk_0x3F423BF5B8125A50(func_206());
				func_27(&uLocal_300, 0x00000100);
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_307 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				func_205(unk_0x16F2683693E537C9(), iLocal_307);
				iLocal_73 = 0x00000001;
			}
			else
			{
				func_58();
				func_203(unk_0x16F2683693E537C9(), vLocal_285);
				func_203(iLocal_271[0x00000000], vLocal_286);
				iLocal_73 = 0x00000002;
			}
			func_201();
			break;
		
		case 0x00000001:
			if (!unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_307, 0x00000001), vLocal_287) < 2f)
				{
					func_58();
					func_203(unk_0x16F2683693E537C9(), vLocal_285);
					func_203(iLocal_271[0x00000000], vLocal_286);
					unk_0x486B4ADE317F0689();
					iLocal_73 = 0x00000002;
				}
				else if (unk_0x1C0640BA9A7327B3() >= 0x00002710)
				{
					iLocal_73 = 0x0000000D;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0x9CF8D5C7090408A2(iLocal_279[0x00000000]))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_279[0x00000000], 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (!unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
				{
					if (unk_0x134B62B726CEC8E6(iLocal_307) == joaat("blimp2"))
					{
						unk_0x4A4806F9D471E491(iLocal_307, 0x00000000, 0x00000000);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (func_200(&iLocal_252) > 1f)
			{
				unk_0xF1E4C781086FABC1(iLocal_279[0x00000001], iLocal_279[0x00000000], 0x00001770, 0x00000001, 0x00000001);
				func_199(&Local_280, 0x00000001, 0x00000000, 0x000007D0, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
				iVar1 = unk_0xD8A54335F18763BA();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 0x00000017)
				{
					iLocal_297 = (iLocal_297 - 0x00000018);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (!unk_0xFA06B985B30FB0FC(iLocal_279[0x00000001]) && unk_0x9CF8D5C7090408A2(iLocal_279[0x00000001]))
			{
				if (!func_267(uLocal_298, 0x00000200))
				{
					if (unk_0xC844350D5D58C99A(iLocal_307) && !unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
					{
						unk_0x05CA0E7946B27A19(iLocal_307, 0x00000001);
					}
					func_196(unk_0x16F2683693E537C9(), func_198());
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_195());
					func_172();
					func_27(&uLocal_298, 0x00000200);
				}
				else if (!func_267(uLocal_298, 0x00000800))
				{
					if (unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
					{
					}
					if (!func_171() && !unk_0x65636D4556D82155(iLocal_271[0x00000000]))
					{
						func_172();
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
							unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
						}
						func_27(&uLocal_298, 0x00000800);
						func_8(&iLocal_252);
						sLocal_273 = func_170();
						iLocal_73 = 0x00000005;
					}
				}
			}
			break;
		
		case 0x00000005:
			if (func_200(&iLocal_252) > 1f)
			{
				if (func_145(iLocal_297, 0x00000000, sLocal_273, "", &Local_280, (func_200(&iLocal_252) * 0.2f), 0x00000000))
				{
					if (!func_171())
					{
						if (unk_0xC844350D5D58C99A(iLocal_307))
						{
							if (unk_0x134B62B726CEC8E6(iLocal_307) != joaat("blimp2"))
							{
								unk_0x536F1BE96C726C4B(vLocal_286, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else
						{
							unk_0x536F1BE96C726C4B(vLocal_286, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(iLocal_271[0x00000000]))
						{
							unk_0x4A4806F9D471E491(iLocal_271[0x00000000], 0x00000000, 0x00000000);
						}
						unk_0x97AC90C1F2A44CEE(unk_0x16F2683693E537C9(), 0x00000000);
						func_8(&iLocal_252);
						iLocal_73 = 0x00000006;
					}
				}
			}
			break;
		
		case 0x00000006:
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
			if (func_200(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_143(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 0x00000007;
			}
			break;
		
		case 0x00000007:
			if (!unk_0x9CF8D5C7090408A2(iLocal_279[0x00000002]))
			{
				unk_0xF8041E6992430151();
				unk_0x9B84ADFFC9CAC31A(0x00000001);
				unk_0x365391E40B6BA75B(0x00000001);
				unk_0xF1E4C781086FABC1(iLocal_279[0x00000002], iLocal_279[0x00000001], 0x00001770, 0x00000001, 0x00000001);
				func_8(&iLocal_252);
				iLocal_73 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (!func_267(uLocal_300, 0x00040000))
			{
				if (func_200(&iLocal_252) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&iLocal_252) > 6f)
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_279[0x00000003], 0x00000001);
				if (!unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
				{
					if (unk_0x134B62B726CEC8E6(iLocal_307) == joaat("blimp2"))
					{
						unk_0x4A4806F9D471E491(iLocal_307, 0x00000001, 0x00000000);
					}
					unk_0x73270B3C9CC833FD(iLocal_307, 0x00000001, 0x00000001);
					unk_0x5DAB50E08C3C504A(iLocal_307, 1000f);
					unk_0xDC544F7DF5E5164D(iLocal_307, 1000f);
					unk_0x51B954DAB1BCAF73(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 0x0000000A;
			}
			break;
		
		case 0x0000000A:
			if (func_200(&iLocal_252) > 2f)
			{
				unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
				iLocal_73 = 0x0000000D;
			}
			break;
		
		case 0x0000000C:
			if (unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				if (!func_267(uLocal_300, 0x00040000))
				{
					unk_0x28B8A2632901EC2F(unk_0xD803B885F5E47A62(), vLocal_289, fLocal_293, 0x00000000, 0x00000001, 0x00000001);
					func_142();
				}
				if (!unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
				{
					if (unk_0x134B62B726CEC8E6(iLocal_307) == joaat("blimp2"))
					{
						unk_0x4A4806F9D471E491(iLocal_307, 0x00000001, 0x00000000);
					}
				}
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				if (!unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
				{
					unk_0x73270B3C9CC833FD(iLocal_307, 0x00000001, 0x00000001);
					unk_0x5DAB50E08C3C504A(iLocal_307, 1000f);
					unk_0xDC544F7DF5E5164D(iLocal_307, 1000f);
					unk_0x51B954DAB1BCAF73(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 0x0000000D;
			}
			break;
		
		case 0x0000000D:
			if (!unk_0xD0BB2359EC70FC37() && func_200(&iLocal_252) >= 1f)
			{
				func_13(0x00000001, 0x00000001, 0x00000000);
				unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9()), 0x00000000);
				unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 0x0000001E, 0x00000001, 0x00000000);
				if (unk_0x61C907EA8258B04D(unk_0x16F2683693E537C9(), func_82(0x00000000)))
				{
					func_141();
				}
				unk_0x842F1AEB2FCC00B7(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 0x00000001);
				if (!unk_0x437347B10A200C4B(iLocal_307, 0x00000000))
				{
					unk_0x73270B3C9CC833FD(iLocal_307, 0x00000001, 0x00000001);
					if (unk_0x134B62B726CEC8E6(iLocal_307) != joaat("blimp2"))
					{
						unk_0xA47B46945FF6DE74(iLocal_307, vLocal_287, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(iLocal_307, fLocal_294);
						if (unk_0x56E1CD81AE700E98(iLocal_307) && uLocal_74[0x00000000] == 0x00000005)
						{
							unk_0xA47B46945FF6DE74(iLocal_307, -865f, 516.3f, 90f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iLocal_307, 15f);
						}
						else if (func_209(iLocal_307))
						{
							unk_0xA47B46945FF6DE74(iLocal_307, vLocal_292, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iLocal_307, fLocal_295);
						}
						unk_0xB9FD7450C0DAB575(iLocal_307, 0x40A00000);
					}
				}
				if (!unk_0x757EF87A33649210())
				{
					func_199(&Local_280, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				else
				{
					unk_0x8B89F2ABF0EA71C1(0x00000008, 0x00000000, 0x00000000);
					func_139(SYSTEM::TO_FLOAT(0x00000008));
					unk_0x82E51BCA72537B6C(0x000007D0);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					func_199(&Local_280, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
				}
				if (unk_0xC844350D5D58C99A(iLocal_271[0x00000000]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_271[0x00000000]));
				}
				if (!func_138(uLocal_74[0x00000000], 0xFFFFFFFF))
				{
					if (uLocal_74[0x00000000] == 0x00000005)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_74[0x00000000], 0x00000000);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_74[0x00000000], 0x00000000);
					}
					func_119(uLocal_74[0x00000000], 0x00000001, 0xFFFFFFFF);
					SYSTEM::WAIT(0x00000FA0);
				}
				func_117(uLocal_74[0x00000000]);
				iVar2 = func_116(uLocal_74[0x00000000]);
				if (iVar2 <= 0x00000002)
				{
					iVar3 = func_115(uLocal_74[0x00000000]);
					iVar4 = func_114(iVar2);
					func_109(0xE913D6D0, iVar3, iVar4, 0x00000003, func_113(), func_112(uLocal_74[0x00000000]), 0x0000EA60, 0x00002710, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000001);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_53(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam6 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam7 < 0x00000000)
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
	if (iParam5 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, iParam5))
		{
			return 0x00000000;
		}
	}
	if (iParam4 < 0x00000001 || iParam4 > 0x00000007)
	{
		return 0x00000000;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000053 || iParam2 == 0x00000053)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_2FC < 0x00000008)
	{
		Var0 = iParam0;
		Var0.f_3 = func_111(iParam3);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_D = iParam12;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		Global_1B416.f_1E03.f_28B[Global_1B416.f_1E03.f_2FC /*14*/] = { Var0 };
		Global_1B416.f_1E03.f_2FC++;
		func_110(0x00000000);
		func_110(0x00000001);
		func_110(0x00000002);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_80(iParam0))
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

int func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113()
{
	func_78();
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

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000008;
			break;
		
		case 0x00000002:
			return 0x00000009;
			break;
	}
	return 0xFFFFFFFF;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000002;
			break;
		
		case 0x00000005:
			return 0x00000003;
			break;
		
		case 0x00000008:
			return 0x00000004;
			break;
		
		case 0x00000009:
			return 0x00000005;
			break;
	}
	return 0xFFFFFFFF;
}

int func_116(int iParam0)
{
	return Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)
{
	if (func_116(iParam0) < 0x00000000)
	{
		func_118(iParam0, 0x00000000);
	}
	Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)
{
	Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0x00000000)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 0x00000004)
	{
	}
	bVar0 = Global_1B416.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x8CD06866876216F2())
		{
			if (!func_136(func_112(iParam0), 0x00000003))
			{
				bVar0 = 0x00000000;
			}
		}
		else if (!func_136(func_112(iParam0), 0x00000004))
		{
			bVar0 = 0x00000000;
		}
	}
	Global_1B416.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(iParam0, 0x00000000);
			func_129(func_112(iParam0), func_137(iParam2), 0x00000001);
			iVar1 = unk_0x09AC81E49EA267F7(0x001B7740, 0x00200B20);
			switch (iParam2)
			{
				case 0x00000003:
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					unk_0x5D96D8530B3D0904(&(Global_200000[func_128() /*10930*/].f_181E.f_4F8), iParam0);
					func_125(0xFC6B2D44, 0x0000000F, 0x00000000);
					break;
			}
			func_124(iVar1);
			func_123(iParam0, iVar1);
			Global_1B028.f_F[iParam0] = unk_0x1C0640BA9A7327B3();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(iParam0), func_137(iParam2));
	}
}

void func_120(int iParam0, int iParam1)
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
			func_122(iParam0, iVar0, 0x00000000);
			func_121(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_121(int iParam0, int iParam1, int iParam2)
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

void func_122(int iParam0, int iParam1, int iParam2)
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

void func_123(int iParam0, int iParam1)
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

void func_124(int iParam0)
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

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_127(iParam1, iParam2))
	{
		iVar0 = func_126();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_126()
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

int func_127(int iParam0, var uParam1)
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

int func_128()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_1F6A = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_134();
		if (iParam1 == 0x00000004)
		{
			func_122(iParam0, 0x00000000, 0x00000001);
			func_122(iParam0, 0x00000001, 0x00000001);
			func_122(iParam0, 0x00000002, 0x00000001);
			func_121(iParam0, 0x00000000, 0x00000001);
			func_121(iParam0, 0x00000001, 0x00000001);
			func_121(iParam0, 0x00000002, 0x00000001);
		}
		else
		{
			if (func_133(iParam0, iParam1) == 0x00000001 && func_132(iParam0, iParam1) == 0x00000001)
			{
				bParam2 = 0x00000000;
			}
			iVar0 = iParam1;
			func_122(iParam0, iVar0, 0x00000001);
			func_121(iParam0, iVar0, 0x00000001);
		}
		if (bParam2)
		{
			if (!Global_12B4E)
			{
				if (iParam1 != 0x00000004)
				{
					if (Global_4C1E != iParam1)
					{
						Global_1F4F[iParam1 /*4*/] = { func_131(iParam0) };
						Global_1F60[iParam1] = 0x00000001;
						Global_1F65[iParam1] = iParam0;
					}
					else if (iParam0 == Global_4C1E)
					{
					}
					else
					{
						Global_1F1E[0x00000001 /*6*/] = { func_131(iParam0) };
						Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_1F1E[0x00000001 /*6*/] = { func_131(iParam0) };
					Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_1F1E[0x00000001 /*6*/] = { func_131(iParam0) };
				Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()
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

struct<4> func_131(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_133(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_134()
{
	if (func_79(0x0000000E))
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
		Global_4C1E = func_77();
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

void func_135(int iParam0, int iParam1)
{
	Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_136(int iParam0, int iParam1)
{
	if (func_133(iParam0, iParam1) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_137(int iParam0)
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

bool func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = func_75();
	}
	return Global_1B416.f_F3[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (func_10(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000006)
	{
		if (func_10(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/])))
		{
			func_140(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x9911B88AFCF2F6D2();
}

void func_140(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (iVar0 < 0x00000001)
		{
			Global_173E6[iVar0] = Global_173E6[iVar0 + 1];
		}
		else
		{
			Global_173E6[iVar0] = unk_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB4AE0788C1587752(sLocal_272))
	{
	}
	else
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000C350);
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		unk_0xDD353D0E9C789D0E(&iVar1);
		unk_0x96167B03C5A77156(0x00000000, vLocal_289, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, fLocal_293);
		if (iVar0 < 0x00003A98)
		{
			unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_272, "fidget_rub_hands", 1.5f, -1f, 0xFFFFFFFF, 0x00002080, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (iVar0 >= 0x00003A98 && iVar0 < 0x000088B8)
		{
			unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_272, "fidget_rub_chin", 1.5f, -1f, 0xFFFFFFFF, 0x00002080, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_272, "fidget_arm_swing", 1.5f, -1f, 0xFFFFFFFF, 0x00002080, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		unk_0x75ABDC5F81978924(iVar1);
		unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar1);
		unk_0xF82EA857DA10E0CD(&iVar1);
		func_27(&uLocal_300, 0x00040000);
	}
}

void func_143(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!func_144(iVar0))
		{
			unk_0x20641932E5104B25(iVar0, 0x00000001, 0x00000000);
			unk_0x4A4806F9D471E491(iVar0, 0x00000001, 0x00000000);
			unk_0x1E9649458B15960F(iVar0, 0x00000000);
		}
	}
}

int func_144(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
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

int func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0x00000000:
			*uParam4 = func_169();
			iVar4 = func_169();
			func_168(&iVar4, iParam0);
			func_167(&iVar4, iParam1);
			func_166(&iVar4, 0x00000000);
			if (func_164(*uParam4, iVar4))
			{
				func_159(&iVar4, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			}
			func_156(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_B = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			unk_0x25CDE70818786F1F(0.6f);
			unk_0x365391E40B6BA75B(0x00000000);
			unk_0x9B84ADFFC9CAC31A(0x00000000);
			func_155();
			uParam4->f_A = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(uParam4->f_A, "TIME_LAPSE_MASTER", 0x00000000, 0x00000001);
			unk_0x8BC9595FD2792B5D("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3++;
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 0x00000001)
				{
					if (unk_0x12AB0310C2281427(sParam2) != 0x00000000)
					{
						unk_0x8225571BCEE038F8(sParam2, 1f);
					}
					if (unk_0x12AB0310C2281427(sParam3) != 0x00000000)
					{
						unk_0xF1662D1948765623();
						unk_0xCD7E6F59323AEBCB(sParam3, 0x00000000);
					}
					uParam4->f_3 = 0x00000002;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_159(&iVar4, uParam4->f_B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x71592C07333285FE(func_153(iVar4), func_152(iVar4), func_151(iVar4));
				unk_0x55D0A2DB35045A35(uParam4->f_A);
				unk_0x42740B44BA8D7B43("TIME_LAPSE");
				return 0x00000001;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar11));
			iVar4 = *uParam4;
			func_159(&iVar4, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x71592C07333285FE(func_153(iVar4), func_152(iVar4), func_151(iVar4));
			if (func_149(iVar4) != unk_0x972A296334C9D57B())
			{
				unk_0xD3A9F3BA3F4248BA(func_149(iVar4), func_148(iVar4), func_146(iVar4));
			}
			func_256();
			unk_0xF99F2927BEBB5EE7(0x00000006);
			break;
	}
	return 0x00000000;
}

int func_146(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_147(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_149(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

float func_150(float fParam0, float fParam1, float fParam2)
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

int func_151(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_152(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_153(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

int func_155()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	unk_0x3CBF2C83A68C1611(iVar0, "OFF");
	return 0x00000001;
}

void func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_164(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_149(iParam0) - func_149(iParam1));
		iVar5 = (func_153(iParam0) - func_153(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_151(iParam0) - func_151(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_149(iParam1) - func_149(iParam0));
		iVar5 = (func_153(iParam1) - func_153(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_151(iParam1) - func_151(iParam0));
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
		iVar4 = (iVar4 + func_158(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_157(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(int iParam0, int iParam1)
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_146(*iParam0);
	iVar1 = func_148(*iParam0);
	iVar2 = func_149(*iParam0);
	iVar3 = func_153(*iParam0);
	iVar4 = func_152(*iParam0);
	iVar5 = func_151(*iParam0);
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
	iVar6 = func_158(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_158(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_166(uParam0, iParam1);
	func_167(uParam0, iParam2);
	func_168(uParam0, iParam3);
	func_163(uParam0, iParam5);
	func_162(uParam0, iParam4);
	func_161(uParam0, iParam6);
}

void func_161(var uParam0, int iParam1)
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

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_165(iParam1) || !func_165(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_165(int iParam0)
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
	iVar0 = func_151(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_153(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_149(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_158(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_166(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x03F00000);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

void func_167(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x000FC000);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 0x00003E00);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

int func_169()
{
	var uVar0;
	
	func_166(&uVar0, unk_0x4460E481B9E33ADA());
	func_167(&uVar0, unk_0x8D199E381D262EEF());
	func_168(&uVar0, unk_0xD8A54335F18763BA());
	func_162(&uVar0, unk_0x972A296334C9D57B());
	func_163(&uVar0, unk_0x118229AD063C3C1D());
	func_161(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

char* func_170()
{
	char* sVar0;
	
	switch (uLocal_74[0x00000000])
	{
		case 0x00000000:
			sVar0 = "CLEARING";
			break;
		
		case 0x00000001:
			sVar0 = "OVERCAST";
			break;
		
		case 0x00000004:
			sVar0 = "CLOUDS";
			break;
		
		case 0x00000005:
			sVar0 = "CLEAR";
			break;
		
		case 0x00000008:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 0x00000009:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
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
	if (!unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
	{
		if (uLocal_74[0x00000000] == 0x00000008 || uLocal_74[0x00000000] == 0x00000009)
		{
			func_193(&uLocal_78, 0x00000001, 0x00000000, func_194(uLocal_74[0x00000000]), 0x00000000, 0x00000001);
			func_175("SC_SEX", 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_173(iLocal_271[0x00000000], "SEX_ORAL", 0x0000000A);
		}
	}
}

void func_173(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_174(iParam2), 0x00000001);
}

int func_174(int iParam0)
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

int func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_176(&uLocal_78, cVar1, &Var0, 0x00000007, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_177(sParam2, iParam3, 0x00000000);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
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
					func_188();
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
		if (func_187(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_183();
		func_178();
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
		func_188();
	}
	return 0x00000000;
}

void func_178()
{
	if (!func_179())
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

int func_179()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_182())
	{
		return 0x00000000;
	}
	if (func_180(unk_0xD803B885F5E47A62()))
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

bool func_180(int iParam0)
{
	return func_181(iParam0, 0x00000014);
}

bool func_181(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_182()
{
	return 0xFFFFFFFF;
}

void func_183()
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

void func_184()
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

int func_185()
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

void func_186()
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

bool func_187(int iParam0, int iParam1)
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

void func_188()
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

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_190(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0x00000000];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_191(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 0x00000002)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0x00000000)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 0x00000001)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

int func_192()
{
	if ((unk_0xD17F06053799A7CA() || unk_0x25037C66EB32B076()) || Global_5145 != 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "Juliet";
			break;
		
		case 0x00000001:
			return "Nikki";
			break;
		
		case 0x00000002:
			return "Chastity";
			break;
		
		case 0x00000003:
			return "Cheetah";
			break;
		
		case 0x00000004:
			return "Sapphire";
			break;
		
		case 0x00000005:
			return "Infernus";
			break;
		
		case 0x00000006:
			return "Fufu";
			break;
		
		case 0x00000007:
			return "Peach";
			break;
		
		case 0x00000008:
			return "TaxiLiz";
			break;
		
		case 0x00000009:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_195()
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000001:
			return 325.6f;
			break;
		
		case 0x00000000:
			return 52.89f;
			break;
		
		case 0x00000004:
			return 14.5f;
			break;
		
		case 0x00000005:
			return 43.85f;
			break;
		
		case 0x00000008:
			return 193.5f;
			break;
		
		case 0x00000009:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_196(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0x00000000, 0x00000000))
	{
		vParam1.z = uVar0;
	}
	if (func_197(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	return vParam1;
}

bool func_197(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

Vector3 func_198()
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000001:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0x00000000:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 0x00000004:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 0x00000005:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 0x00000008:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 0x00000009:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 0x00000001)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()), 0x00000040);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), !bParam1, 0x00000000);
	}
	if (bParam7)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0x00000001);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 0x00000001, 0x00000000, 0x00000000);
	}
	if (bParam1)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	else
	{
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			if (unk_0xFBB4F23D534EB790(uParam0->f_4))
			{
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000000);
			}
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000001);
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
		}
		iVar0 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0x4A4806F9D471E491(iVar0, 0x00000001, 0x00000000);
		}
		unk_0x42740B44BA8D7B43("TIME_LAPSE");
		if (unk_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
		{
			unk_0x55D0A2DB35045A35(uParam0->f_A);
			unk_0x42740B44BA8D7B43("TIME_LAPSE");
			unk_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_154();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x71592C07333285FE(uParam0->f_7, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x71592C07333285FE(uParam0->f_8, 0x00000000, 0x00000000);
		}
	}
	if (!bParam1)
	{
		if (unk_0x757EF87A33649210())
		{
			unk_0x82E51BCA72537B6C(0x000000FA);
		}
	}
	if (!bParam1)
	{
		if (Global_1B416.f_7FE8.f_12C1 != 0xFFFFFFF1)
		{
			Global_1B416.f_7FE8.f_12C1 = func_169();
		}
	}
}

float func_200(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_201()
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2[4];
	var uVar3[4];
	
	func_202(&vVar1, &vVar2, &uVar3);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (!unk_0x9F4FE516EAACCFC5(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = unk_0xAE06CCC36C49929C(0x019286A9, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0x00000000, 0x00000002);
			unk_0x91F5B0244AAE6222(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
	unk_0xB2ABBA6B919F5CE7(Local_280.f_4, vVar1[0x00000000 /*3*/], vVar2[0x00000000 /*3*/], 0x00001770, 0x00000003, 0x00000002);
	unk_0xB2ABBA6B919F5CE7(Local_280.f_4, vVar1[0x00000001 /*3*/], vVar2[0x00000001 /*3*/], 0x00001770, 0x00000003, 0x00000002);
	unk_0x5818C8D5303DCCF8(Local_280.f_4, uVar3[0x00000000]);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000001:
			*(uParam0[0x00000000 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0x00000000 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0x00000000] = 40f;
			*(uParam0[0x00000001 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[0x00000001 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[0x00000001] = 40f;
			*(uParam0[0x00000002 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[0x00000002 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[0x00000002] = 50f;
			*(uParam0[0x00000003 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[0x00000003 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[0x00000003] = 50f;
			break;
		
		case 0x00000000:
			*(uParam0[0x00000000 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0x00000000 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0x00000000] = 40f;
			*(uParam0[0x00000001 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[0x00000001 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[0x00000001] = 40f;
			*(uParam0[0x00000002 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[0x00000002 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[0x00000002] = 40f;
			*(uParam0[0x00000003 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[0x00000003 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[0x00000003] = 40f;
			break;
		
		case 0x00000004:
			*(uParam0[0x00000000 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0x00000000 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0x00000000] = 40f;
			*(uParam0[0x00000001 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[0x00000001 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[0x00000001] = 40f;
			*(uParam0[0x00000002 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[0x00000002 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[0x00000002] = 45f;
			*(uParam0[0x00000003 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[0x00000003 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[0x00000003] = 45f;
			break;
		
		case 0x00000005:
			*(uParam0[0x00000000 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0x00000000 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0x00000000] = 40f;
			*(uParam0[0x00000001 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[0x00000001 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[0x00000001] = 40f;
			*(uParam0[0x00000002 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[0x00000002 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[0x00000002] = 40f;
			*(uParam0[0x00000003 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[0x00000003 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[0x00000003] = 40f;
			break;
		
		case 0x00000008:
			*(uParam0[0x00000000 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0x00000000 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0x00000000] = 40f;
			*(uParam0[0x00000001 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[0x00000001 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[0x00000001] = 40f;
			*(uParam0[0x00000002 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[0x00000002 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[0x00000002] = 40f;
			*(uParam0[0x00000003 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[0x00000003 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[0x00000003] = 40f;
			break;
		
		case 0x00000009:
			*(uParam0[0x00000000 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0x00000000 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0x00000000] = 40f;
			*(uParam0[0x00000001 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[0x00000001 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[0x00000001] = 40f;
			*(uParam0[0x00000002 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[0x00000002 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[0x00000002] = 40f;
			*(uParam0[0x00000003 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[0x00000003 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[0x00000003] = 40f;
			break;
	}
}

void func_203(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x97AC90C1F2A44CEE(iParam0, 0x00000001);
		if (unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000001)
		{
			unk_0xF82EA857DA10E0CD(&iLocal_306);
			unk_0xDD353D0E9C789D0E(&iLocal_306);
			if (unk_0x405E212DDE472467(iParam0, 0x00000000))
			{
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x01000000);
			}
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vLocal_285);
				fVar1 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vLocal_286);
				if (fVar1 < fVar0)
				{
					unk_0xF96A174EE26D7588(0x00000000, iLocal_271[0x00000000], 0x00000000);
				}
				else if (!unk_0xEA6BC48857E0AC4C(func_204()))
				{
					unk_0xF44B0E19CAC31C33(0x00000000, func_204(), 0x00000000, 0x00000228, 0xFFFFFFFF);
				}
				else
				{
					unk_0x96167B03C5A77156(0x00000000, vLocal_285, 1f, 0xFFFFFFFF, 0.25f, 0x00000040, 0x471C4000);
				}
			}
			if (iParam0 != unk_0x16F2683693E537C9())
			{
				if (!unk_0xEA6BC48857E0AC4C(func_204()))
				{
					unk_0xF44B0E19CAC31C33(0x00000000, func_204(), 0x00000000, 0x00000222, 0xFFFFFFFF);
				}
				else
				{
					unk_0x96167B03C5A77156(0x00000000, vParam1, 1f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
				}
				if (func_25(iParam0, vParam1, 0x00000001) > 5f)
				{
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x00000BB8, 0x00001770));
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x00000BB8, 0x00001770));
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			unk_0x75ABDC5F81978924(iLocal_306);
			unk_0x78ADC381772E3D54(iParam0, iLocal_306);
		}
	}
}

char* func_204()
{
	char* sVar0;
	
	if (uLocal_74[0x00000000] == 0x00000001)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		unk_0x27F3789FF35EEDF1(iParam0, iParam1, vLocal_287, fLocal_294, 0x00000003, 10f, 0x00000000);
	}
}

char* func_206()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()
{
	if (func_77() == 0x00000000)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 0x00000001)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 0x00000002)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()
{
	sLocal_272 = "move_p_m_one_idles@generic";
	unk_0x3F423BF5B8125A50(sLocal_272);
}

int func_209(int iParam0)
{
	if (unk_0x4906F8A34E9F4814(iParam0, joaat("blimp")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("cargobob")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("cargobob2")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("cargobob3")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("buzzard")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("buzzard2")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("maverick")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("polmav")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("annihilator")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("frogger")))
	{
		return 0x00000001;
	}
	else if (unk_0x4906F8A34E9F4814(iParam0, joaat("frogger2")))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_210(var uParam0, vector3 vParam1, bool bParam2, float fParam3)
{
	if (func_212(uParam0))
	{
		unk_0xBA486C69AC1FDE77(*uParam0);
		if (!func_211(vParam1))
		{
			unk_0xA47B46945FF6DE74(*uParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			if (bParam2)
			{
				unk_0xD8F6A53F4799FAFE(*uParam0, fParam3);
			}
			unk_0xB9FD7450C0DAB575(*uParam0, 0x40A00000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_211(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_212(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!func_144(iVar0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iVar0, unk_0x16F2683693E537C9(), vLocal_63, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0xBA486C69AC1FDE77(iVar0);
				unk_0x20641932E5104B25(iVar0, 0x00000000, 0x00000000);
				unk_0x4A4806F9D471E491(iVar0, 0x00000000, 0x00000000);
				unk_0x1E9649458B15960F(iVar0, 0x00000001);
				unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000001);
				*uParam0 = iVar0;
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_213(int iParam0)
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
			if (func_214())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_214()
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

void func_215(bool bParam0)
{
	struct<4> Var0;
	float fVar1;
	
	func_65();
	if (unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
	{
		return;
	}
	unk_0xE342F209E49C5314(vLocal_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0x00000000, 0x00000001);
	fVar1 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_271[0x00000000], 0x00000001));
	if (iLocal_75 != 0x00000009)
	{
		if (((fVar1 >= (200f / 2f) && func_192()) && !func_267(uLocal_300, 0x00000002)) || func_254(iLocal_271[0x00000000], 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_277))
			{
				unk_0x142CC44DB769B57E(&iLocal_277);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_276))
			{
				unk_0x142CC44DB769B57E(&iLocal_276);
			}
			func_251(0x00000000);
			func_84("SCLUB_HOME_R", uLocal_74[0x00000000]);
			iLocal_75 = 0x00000009;
		}
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (iLocal_75 != 0x00000008)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_277))
			{
				unk_0x142CC44DB769B57E(&iLocal_277);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_276))
			{
				unk_0x142CC44DB769B57E(&iLocal_276);
			}
			iLocal_75 = 0x00000008;
		}
	}
	if (func_240(iLocal_271[0x00000000], &uLocal_264, &iLocal_261))
	{
		func_66(0x00000004);
	}
	if (iLocal_75 <= 0x00000001)
	{
		func_259(0x00000001);
	}
	switch (iLocal_75)
	{
		case 0x00000000:
			iLocal_76 = 0x00000000;
			if (func_192())
			{
				if (!func_267(uLocal_300, 0x00000001))
				{
					unk_0x1E9649458B15960F(iLocal_271[0x00000000], 0x00000001);
					func_84("SCLUB_HOME_MEET", uLocal_74[0x00000000]);
					func_251(0x00000000);
					func_27(&uLocal_300, 0x00000001);
				}
				iLocal_75 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			iLocal_76 = 0x00000001;
			Var0 = { func_71(uLocal_74[0x00000000]) };
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_307 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				iLocal_301 = unk_0x7F6DC62EA9922664(iLocal_307);
			}
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_271[0x00000000], 0x00000001), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000) || (unk_0xDF1306B443CD3D15(iLocal_307, 0x00000000) && func_239(iLocal_307, iLocal_271[0x00000000], 0x00000001) <= 10f))
			{
				unk_0x1E9649458B15960F(iLocal_271[0x00000000], 0x00000000);
				if (unk_0xC844350D5D58C99A(iLocal_307) && (unk_0xD6DF381716822EFE(iLocal_307) < 0x00000001 || (!bParam0 && !unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iLocal_307)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_74[0x00000000], 0x00000000);
						func_173(iLocal_271[0x00000000], "NEED_A_VEHICLE", 0x0000000A);
					}
				}
				else
				{
					unk_0xA37A90C62806D848(0x00000001);
					unk_0xA3BF0AA5A2608191(iLocal_271[0x00000000]);
					func_237();
					if (!func_267(uLocal_300, 0x00000002))
					{
						func_27(&uLocal_300, 0x00000002);
					}
					func_236();
					func_86();
					func_229(0x00000027, 0x00000001);
					func_229(0x00000028, 0x00000001);
					func_229(0x00000029, 0x00000001);
					func_229(0x0000002A, 0x00000001);
					func_229(0x0000002B, 0x00000001);
					func_229(0x0000002C, 0x00000001);
					iLocal_75 = 0x00000002;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			break;
		
		case 0x00000002:
			iLocal_76 = 0x00000002;
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(iLocal_271[0x00000000], 0x00000000))
				{
					iLocal_75 = 0x00000003;
				}
			}
			else
			{
				func_173(iLocal_271[0x00000000], "NEED_A_VEHICLE", 0x0000000A);
				iLocal_75 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			iLocal_76 = 0x00000003;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					unk_0xF858EFDE1871B5F2(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 0x00000000, 0x00000001);
					unk_0xE342F209E49C5314(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 0x00000000, 0x00000001);
					unk_0x28F5E4DA506AC0CA(vLocal_287, 10f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x745CE398A4B0A3C6(vLocal_287, 10f, 0x00000000);
					iLocal_284 = unk_0x7D6CA5F52B3748BF(vLocal_287 - Vector(35f, 35f, 35f), vLocal_287 + Vector(35f, 35f, 35f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_91(0x00000001);
						func_225();
					}
					else
					{
						iLocal_72 = 0x00000003;
					}
				}
			}
			break;
		
		case 0x00000004:
			iLocal_76 = 0x00000004;
			func_222(fVar1, vLocal_288);
			func_216();
			if ((func_4(&iLocal_255) > 45f || SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_291) > (100f * 100f)) && func_25(unk_0x16F2683693E537C9(), vLocal_288, 0x00000001) > 100f)
			{
				if (uLocal_74[0x00000000] == 0x00000008)
				{
					func_175("SC_WALK", 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_173(iLocal_271[0x00000000], "GENERIC_FUCK_YOU", 0x0000000A);
				}
				func_66(0x00000003);
			}
			else if (func_254(iLocal_271[0x00000000], 0x00000001))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_277))
				{
					unk_0x142CC44DB769B57E(&iLocal_277);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_276))
				{
					unk_0x142CC44DB769B57E(&iLocal_276);
				}
				func_251(0x00000000);
				func_84("SCLUB_HOME_R", uLocal_74[0x00000000]);
				iLocal_75 = 0x00000009;
			}
			else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_287, 3f, 3f, 2f, 0x00000001, 0x00000001, 0x00000002) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_286, 5f, 5f, 2f, 0x00000001, 0x00000001, 0x00000001))
			{
				if (func_36(0x00000001, 0x00000000, 0x00000001))
				{
					iLocal_72 = 0x00000001;
				}
			}
			else if (!unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				func_225();
			}
			break;
		
		case 0x00000005:
			iLocal_76 = 0x00000005;
			func_222(fVar1, vLocal_287);
			func_216();
			func_237();
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_287, 1f, 1f, 2f, 0x00000001, 0x00000001, 0x00000002))
			{
				iLocal_75 = 0x00000006;
			}
			else
			{
				if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					func_225();
				}
				else
				{
					func_61(vLocal_287);
				}
				if (func_107("SCLUB_HOME_WALK"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			break;
		
		case 0x00000006:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					if (func_59(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 3f, 0x00000002, 0.5f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_58();
						func_203(iLocal_271[0x00000000], vLocal_286);
						if (uLocal_74[0x00000000] == 0x00000009 || uLocal_74[0x00000000] == 0x00000008)
						{
							func_175("SC_GO_DOOR", 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_175("SC_FOLLOWD", 0x00000000, 0x00000000, 0x00000001);
						}
						iLocal_75 = 0x00000007;
					}
				}
			}
			else if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				unk_0x327AAEE25F323797(iLocal_271[0x00000000]);
				func_225();
				unk_0xA37A90C62806D848(0x00000001);
			}
			break;
		
		case 0x00000007:
			iLocal_76 = 0x00000007;
			if ((!func_171() && !unk_0xD17F06053799A7CA()) && !func_267(uLocal_300, 0x00000800))
			{
				Var0 = { func_71(uLocal_74[0x00000000]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 0x00001D4C, 0x00000001);
				func_86();
				func_251(0x00000000);
				func_27(&uLocal_300, 0x00000800);
			}
			if ((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_288, 5f, 5f, 2f, 0x00000000, 0x00000001, 0x00000001) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_286, 5f, 5f, 2f, 0x00000000, 0x00000001, 0x00000001)) && unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				if (func_36(0x00000001, 0x00000000, 0x00000001))
				{
					iLocal_72 = 0x00000001;
				}
			}
			break;
		
		case 0x00000008:
			if ((!func_267(uLocal_298, 0x00001000) && !func_171()) && !unk_0x65636D4556D82155(iLocal_271[0x00000000]))
			{
				if (iLocal_76 > 0x00000001 || SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_271[0x00000000], 0x00000001)) < (3f * 3f))
				{
					func_173(iLocal_271[0x00000000], "GENERIC_FRIGHTENED_MED", 0x0000000A);
					func_27(&uLocal_298, 0x00001000);
				}
			}
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 0x00000009:
			if (fVar1 > 200f)
			{
				func_66(0x00000001);
			}
			else if (fVar1 <= (200f / 2f) && !func_254(iLocal_271[0x00000000], 0x00000001))
			{
				unk_0x790015DC92C918E2();
				iLocal_75 = iLocal_76;
				if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_267(uLocal_300, 0x00000010))
	{
		if (func_217())
		{
			func_27(&uLocal_300, 0x00000010);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_100(iLocal_271[0x00000000], 0x00000000, 0x00000000);
	if (!func_267(uLocal_300, 0x00000008))
	{
		if (!func_267(uLocal_300, 0x00000004))
		{
			if (!func_267(uLocal_298, 0x00000100))
			{
				if (uLocal_74[0x00000000] == 0x00000008 || uLocal_74[0x00000000] == 0x00000009)
				{
					func_175("SC_BJ", 0x00000000, 0x00000000, 0x00000000);
				}
				func_27(&uLocal_298, 0x00000100);
			}
			else
			{
				unk_0x3F423BF5B8125A50(sVar0);
				func_27(&uLocal_300, 0x00000004);
			}
		}
		else if (unk_0xB4AE0788C1587752(sVar0))
		{
			func_94(iLocal_271[0x00000000], 0x00000001, 0x00000001, 0xFFFFFFFF, 0x00000001);
			unk_0xFADC0A217229F6B5(iLocal_271[0x00000000], 0x00000001);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 0x00000008);
		}
	}
	else if (func_267(uLocal_300, 0x00000004))
	{
		iVar1 = 0x00000000;
		bVar2 = unk_0xB4ECF989E2C1DAC8(iLocal_271[0x00000000], sVar0, func_95(0x00000004, 0x00000001, 0x00000001, func_98(iLocal_307)), 0x00000003);
		bVar3 = unk_0x168558745A6AC21E(unk_0x16F2683693E537C9());
		bVar4 = unk_0xD1960163A3042274(iLocal_271[0x00000000], 0x0E763797) == 0x00000007;
		bVar5 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
		bVar6 = 0x00000000;
		if (bVar5)
		{
			if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				bVar6 = (unk_0xE608C809F9416F00(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 5f);
			}
		}
		if ((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || func_4(&iLocal_252) > 35f) || SYSTEM::VDIST(vLocal_287, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_271[0x00000000], sVar0, func_95(0x00000004, 0x00000001, 0x00000001, func_98(iLocal_307)), 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (bVar3)
			{
				iLocal_302 = 0x000007D0;
			}
			iVar1 = 0x00000001;
		}
		else if (bVar4)
		{
			iVar1 = 0x00000001;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), (unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) - SYSTEM::CEIL((IntToFloat(unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9())) * 0.1f))), 0x00000000);
					func_173(unk_0x16F2683693E537C9(), "GENERIC_CURSE_HIGH", 0x0000000A);
				}
				else
				{
					func_173(unk_0x16F2683693E537C9(), "SEX_CLIMAX", 0x0000000A);
				}
				func_27(&uLocal_298, 0x00000080);
			}
			unk_0x8D17794CE3273D70(sVar0);
			func_73(&uLocal_300, 0x00000004);
		}
		if (!func_267(uLocal_298, 0x00000040))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_173(unk_0x16F2683693E537C9(), "SEX_GENERIC", 0x0000000A);
				func_173(iLocal_271[0x00000000], "SEX_ORAL", 0x0000000A);
				func_27(&uLocal_298, 0x00000040);
			}
		}
		unk_0xD1B833B834838C01();
		func_256();
	}
}

int func_217()
{
	vector3 vVar0;
	var uVar1;
	
	if (!func_192())
	{
		return 0x00000000;
	}
	func_64(&vVar0, &uVar1, 0x00000000);
	if (((SYSTEM::VDIST(vLocal_287, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > (75f * 2f) && SYSTEM::VDIST(vVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > (75f / 2f)) && func_116(uLocal_74[0x00000000]) > 0x00000001) && func_218())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_218()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iVar0);
		if (func_220(iVar1, 0x00000000) && func_219(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000031)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 0x00000011 && iVar1 != 0x00000012) && iVar1 != 0x00000013) && iVar1 != 0x00000014) && iVar1 != 0x00000015) && iVar1 != 0x00000016)
				{
					if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != 0xFFFFFFFF)
					{
						StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
						iVar2 = unk_0x12AB0310C2281427(&cVar3);
						if (iVar2 != 0x00000000)
						{
							if (iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
							{
								return 0x00000000;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case 0x9472CD24:
				if ((!unk_0xDD62D560CFE11A27(iParam0, 0x00000002) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000003)) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000004))
				{
					return 0x00000000;
				}
				break;
			
			case 0x4201A843:
				if (((!unk_0xDD62D560CFE11A27(iParam0, 0x00000002) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000003)) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000004)) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
				{
					return 0x00000000;
				}
				break;
			
			case 0x98F65A5E:
				if (!unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
				{
					return 0x00000000;
				}
				break;
			
			case 0xD757D97D:
				if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) == 0xFFFFFFFF)
				{
					return 0x00000000;
				}
				break;
			
			case 0x665F785D:
				if (unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
				{
					return 0x00000000;
				}
				break;
		}
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x84D77E93:
			case 0xD158A20D:
			case 0x205A6F50:
			case 0x04163EC9:
			case 0x8F7B4F4E:
			case 0x589D7B2F:
			case 0x8DB2A5D9:
			case 0xAC3C0E50:
			case 0xF69542B7:
			case 0xEF4E5E35:
			case 0x65FA4F90:
			case 0x632CFD0D:
			case 0x19E59D55:
			case 0x6C40A6DC:
			case 0x36CE3DC4:
			case 0x3854C58D:
			case 0x05128863:
			case 0x73950148:
			case 0x6F727ECC:
			case 0xFE512F48:
			case 0xBB736A9B:
			case 0xE461FA3B:
			case 0xD60F2985:
			case 0x0BCC84E2:
			case 0xF39668AC:
			case 0x793A200A:
			case 0x93775997:
			case 0x652B6E19:
			case 0xDA1C0701:
			case 0x8E1C66A3:
			case 0xBAF8EB5B:
			case 0x92ABFEDD:
			case 0xA95DAB1C:
			case 0x8B7ECC39:
			case 0x6D8780E5:
			case 0x7808B340:
			case 0x51EA33D0:
			case 0x54A17ED2:
			case 0xE09ACFC0:
			case 0x5FF71292:
			case 0xC62E7E2C:
			case 0x7B7DBC2F:
			case 0x58649EBC:
			case 0x7EFF5584:
			case 0xA3D7E5D4:
			case 0x5411F27D:
			case 0x47186FD7:
			case 0xB2399742:
			case 0xED0C8CA8:
			case 0x21FA1EE8:
			case 0x48415DE9:
			case 0xF47EB4CA:
			case 0x1E6B77B1:
			case 0xC5168F32:
			case 0x38E4D8B9:
			case 0x22DBE905:
			case 0x8166F17F:
			case 0x400D12F8:
			case 0x6C6BA10B:
			case 0xE9ED0B6B:
			case 0x49F1A7A9:
			case 0xDA9AFDA8:
			case 0x3ACDA851:
			case 0x919477B0:
			case 0xDBEF865B:
			case 0x685F9933:
			case 0xC4E117AC:
				return 0x00000001;
				break;
		}
		if (unk_0x1F099C9E2AE4874D(iParam0) == 0x378B2713 && unk_0x134B62B726CEC8E6(iParam0) == joaat("slamvan"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_220(int iParam0, bool bParam1)
{
	if ((((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0)) || unk_0x7D8B2A8F9EA82DB7(iParam0))
	{
		return 0x00000000;
	}
	if (func_221(iParam0))
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0x00000000;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 0x34DBA661) || iParam0 == 0xF34DFB25) || iParam0 == 0xF8C2E0E7) || iParam0 == 0x71CBEA98) || iParam0 == 0x6068AD86) || iParam0 == 0x3D7C6410) || iParam0 == 0x1DD4C0FF) || iParam0 == 0x1A861243) || iParam0 == 0xC7E55211) || iParam0 == 0xE1C03AB0) || iParam0 == 0x185E2FF3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_222(float fParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_267(uLocal_298, 0x00040000))
	{
		if (func_224(iLocal_271[0x00000000]))
		{
			if (uLocal_74[0x00000000] == 0x00000008)
			{
				func_175("SC_STEALC", 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_173(iLocal_271[0x00000000], "GENERIC_SHOCKED_MED", 0x0000000A);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 0x00040000);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_73(&uLocal_298, 0x00040000);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_300, 0x00000004))
	{
		return;
	}
	if (!func_267(uLocal_298, 0x00000001) && !func_267(uLocal_298, 0x00000080))
	{
		if (SYSTEM::VDIST(vParam1, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 75f)
		{
			if (uLocal_74[0x00000000] == 0x00000008 || uLocal_74[0x00000000] == 0x00000009)
			{
				if (func_175("SC_NEAR", 0x00000000, 0x00000000, 0x00000000))
				{
					func_27(&uLocal_298, 0x00000001);
				}
			}
			else
			{
				func_27(&uLocal_298, 0x00000001);
			}
			unk_0x28F5E4DA506AC0CA(vLocal_287, 5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (!func_267(uLocal_298, 0x00000010))
		{
			func_173(iLocal_271[0x00000000], "NEED_A_VEHICLE", 0x0000000A);
			func_27(&uLocal_298, 0x00000010);
			func_8(&iLocal_243);
		}
		if (!func_267(uLocal_298, 0x00000004))
		{
			func_73(&uLocal_298, 0x00000004);
		}
		if (!func_267(uLocal_298, 0x00000008))
		{
			func_73(&uLocal_298, 0x00000008);
		}
	}
	else
	{
		fVar1 = unk_0x9C66D99E63E8E24C(iVar0);
		fVar2 = unk_0xD890711CFD5AF100(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_267(uLocal_298, 0x00000004))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_173(iLocal_271[0x00000000], "DRIVEN_FAST", 0x0000000A);
				func_27(&uLocal_298, 0x00000004);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_73(&uLocal_298, 0x00000004);
			func_8(&iLocal_243);
		}
		if (!func_267(uLocal_298, 0x00000008))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_173(iLocal_271[0x00000000], "DRIVEN_SLOW", 0x0000000A);
				func_27(&uLocal_298, 0x00000004);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_73(&uLocal_298, 0x00000008);
			func_8(&iLocal_243);
		}
		if (!func_267(uLocal_298, 0x00020000))
		{
			if (func_223(iLocal_271[0x00000000], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_173(iLocal_271[0x00000000], "CRASH_GENERIC_DRIVEN", 0x0000000A);
					func_27(&uLocal_298, 0x00020000);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_73(&uLocal_298, 0x00020000);
			func_8(&iLocal_246);
		}
		if (!func_267(uLocal_298, 0x00010000))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_267(uLocal_298, 0x00000020)))
			{
				func_173(iLocal_271[0x00000000], "BOOTY_FLIRT", 0x0000000A);
				func_27(&uLocal_298, 0x00000020);
				func_27(&uLocal_298, 0x00080000);
				func_8(&iLocal_243);
			}
			else if (func_267(uLocal_298, 0x00080000))
			{
				if (!unk_0x65636D4556D82155(iLocal_271[0x00000000]) && func_4(&iLocal_243) > 4f)
				{
					func_173(unk_0x16F2683693E537C9(), "BOOTY_FLIRT_RESP", 0x0000000A);
					func_73(&uLocal_298, 0x00080000);
				}
			}
		}
	}
}

int func_223(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iVar0))
		{
			if (unk_0xE608C809F9416F00(iVar0))
			{
				iVar1 = unk_0x7F6DC62EA9922664(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				unk_0xE910A68AA670B4AA(iVar0);
				if (iVar2 > 0x0000000A)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_224(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x72DA46B7797D51EA(0x0000006E, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f) && unk_0x6AB6A474D29FA7D8(iParam0, unk_0x16F2683693E537C9()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_225()
{
	func_87();
	func_8(&iLocal_243);
	if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_276))
		{
			unk_0x142CC44DB769B57E(&iLocal_276);
		}
		if (!unk_0xE4EDC4B0E92C078B(iLocal_277))
		{
			iLocal_277 = func_62(vLocal_288, 0x00000000);
		}
		func_8(&iLocal_255);
		vLocal_291 = { unk_0x68F4C0EC296D3901(iLocal_271[0x00000000], 0x00000001) };
		iLocal_75 = 0x00000004;
	}
	else
	{
		func_8(&iLocal_246);
		func_61(vLocal_287);
		iLocal_75 = 0x00000005;
	}
}

void func_226()
{
	if (!func_267(uLocal_298, 0x00000400))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (func_227(uLocal_74[0x00000000]))
			{
				if (!func_171())
				{
					func_173(iLocal_271[0x00000000], "NICE_CAR", 0x0000000A);
					func_27(&uLocal_298, 0x00000400);
				}
			}
		}
	}
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iVar0);
		if (func_228(iParam0, iVar1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0x00000000)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 0x00000002)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 0x00000003 || iParam0 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 0x00000004 || iParam0 == 0x00000007)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 0x00000006 || iParam0 == 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 0x00000008)
			{
				return 0x00000001;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 0x00000009)
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 0x00000002, 0x00000001))
		{
			func_234(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_235(iParam0, 0x00000002, 0x00000001))
	{
		func_230(iParam0, 0x00000002, 0x00000001);
	}
}

void func_230(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0x00000000)
		{
			iVar0 = func_232(func_233(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_231(func_233(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_76(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_233(int iParam0)
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

void func_234(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0x00000000)
		{
			iVar0 = func_232(func_233(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_231(func_233(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_235(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_232(func_233(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_236()
{
	if (uLocal_74[0x00000000] == 0x00000008)
	{
		func_175("SC_GREET", 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_173(iLocal_271[0x00000000], "GENERIC_HI_FLIRTY", 0x0000000A);
	}
}

void func_237()
{
	if (!unk_0x16102BEDC7435774(iLocal_271[0x00000000]) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_271[0x00000000], 0x00000001)) < 10f)
	{
		unk_0xE25C96A9C36BE5D2(iLocal_271[0x00000000], func_238());
		unk_0xBF541ED34EA81209(iLocal_271[0x00000000], 0x00000000);
	}
}

int func_238()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

float func_239(int iParam0, int iParam1, bool bParam2)
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

int func_240(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
		if (func_243(iParam0, iVar1, uParam1, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
		{
			func_241(&uVar0);
			if (unk_0xC844350D5D58C99A(iParam0))
			{
				if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
				{
					if (!unk_0x1C43D178459D5730(iLocal_70))
					{
						unk_0xF63400DBE3303D26("BootyCall", &iLocal_70);
					}
					unk_0x0E2400AB9174FA81(0x00000002, iLocal_70, 0x6F0783F5);
					unk_0x0E2400AB9174FA81(0x00000002, 0x6F0783F5, iLocal_70);
					unk_0x6DF7BF67E86AAE86(iParam0, iLocal_70);
					unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
			func_8(iParam2);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_241(var uParam0)
{
	switch (*uParam0)
	{
		case 0x00000001:
		case 0x00000004:
		case 0x00000010:
			func_242(0x00000001);
			break;
		
		case 0x00000002:
			break;
	}
}

void func_242(bool bParam0)
{
	Global_1B028 = 0x00000000;
	Global_1B028.f_1 = 0xFFFFFFFF;
	Global_1B028.f_2 = 0xFFFFFFFF;
	if (bParam0)
	{
		func_124(0xFFFFFFFF);
	}
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_267(*uParam2, 0x00000001))
		{
			if (func_250(iParam0, uParam2))
			{
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_267(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_267(*uParam2, 0x00000004))
		{
			if (func_248(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_267(*uParam2, 0x00000008))
		{
			if (func_247(iVar0, iParam0, uParam2))
			{
				*uParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_267(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_244(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*uParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_267(*uParam2, 0x00000010))
		{
			if (func_244(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
			{
				*uParam3 = 0x00000010;
				return 0x00000001;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
		{
			*uParam3 = 0x00000010;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_59 = 0x00000001;
		}
		iLocal_61 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 0x00000001;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 0x00000001;
		}
	}
	if (func_246(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_245(iParam0, 0x00000001) < 1.5f)
		{
			return 0x00000001;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0x00000000)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

float func_245(int iParam0, bool bParam1)
{
	return func_239(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_247(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000004))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_248(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000002))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0x00000000))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0x00000000);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_249(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_239(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)))
									{
										return 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_250(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_245(iParam0, 0x00000001) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0x00000000)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

void func_251(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xE4EDC4B0E92C078B(uLocal_278[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_252(iLocal_271[iParam0], 0x00000000, 0x00000091);
	Var0 = { func_71(uLocal_74[iParam0]) };
	unk_0xDC5B2F9D0CCE3A10(uLocal_278[iParam0], &Var0);
}

int func_252(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_253(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0x047216F1869A66EC(iParam0) == func_238())
		{
			if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(iParam0, iVar2, 0x00000000) && SYSTEM::VDIST(vVar0, vVar1) > 10f)
				{
					return 0x00000001;
				}
			}
		}
	}
	if (iParam1 && func_267(uLocal_300, 0x00000002))
	{
		fVar3 = unk_0x755FF954DAE327E1((vVar0.z - vVar1.z));
		if (fVar3 > 8f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_255()
{
	if (!unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
	{
		if (!unk_0xEB880D98B5988D0C())
		{
			func_196(iLocal_271[0x00000000], unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 0f, 2f, 0f));
			iLocal_72 = 0x00000001;
			iLocal_73 = 0x00000000;
		}
	}
}

void func_256()
{
	unk_0xC2127C0F64D6A3B9();
	func_257();
}

void func_257()
{
	Global_56C3.f_86 = 0x00000001;
}

int func_258(int iParam0, bool bParam1)
{
	if (iParam0 == 0x00000000)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0x00000000;
}

void func_259(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_165(iLocal_71))
	{
		iLocal_71 = func_169();
		func_159(&iLocal_71, 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000005, 0x00000007), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_300, 0x00000200))
		{
			if (func_266(iLocal_71) && unk_0x03068588A1FCED1A(iLocal_271[0x00000000]))
			{
				if (uLocal_74[0x00000000] == 0x00000008 || uLocal_74[0x00000000] == 0x00000009)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0x00000000], 64);
					func_193(&uLocal_78, 0x00000001, 0x00000000, func_194(uLocal_74[0x00000000]), 0x00000000, 0x00000001);
					func_265(&uLocal_78, func_112(uLocal_74[0x00000000]), "SHAUD", &Var0, 0x00000007, 0x00000000, 0x00000000, 0x00000001);
				}
				else
				{
					func_263();
				}
				func_262(iLocal_271[0x00000000]);
				func_27(&uLocal_300, 0x00000200);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_300, 0x00000200);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(0x00000001);
			func_66(0x00000002);
		}
	}
}

int func_260()
{
	if (Global_5145 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_261()
{
	if (Global_5176 == 0x00000001 || Global_553D == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_262(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x97AC90C1F2A44CEE(iParam0, 0x00000001);
		if (unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000001)
		{
			unk_0xF82EA857DA10E0CD(&iLocal_306);
			unk_0xDD353D0E9C789D0E(&iLocal_306);
			unk_0x1DC614CBE22FFB4F(0x00000000, 0x00001F40);
			unk_0x96167B03C5A77156(0x00000000, vLocal_286, 1.5f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			unk_0x75ABDC5F81978924(iLocal_306);
			unk_0x78ADC381772E3D54(iParam0, iLocal_306);
		}
	}
}

void func_263()
{
	int iVar0;
	
	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_74[0x00000000]);
	func_109(0xE913D6D0, iVar0, 0x00000006, 0x00000003, func_113(), func_112(uLocal_74[0x00000000]), 0x00000000, 0x00002710, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000001);
}

int func_264()
{
	if (func_54() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_265(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_189(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000001;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(int iParam0)
{
	return func_164(func_169(), iParam0);
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_268(var uParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_296();
	func_64(&vVar0, &fVar1, bParam1);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar0);
		}
		if (iLocal_299 == 0xFFFFFFFF)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_267(uLocal_300, 0x00000020))
		{
			func_292(&uLocal_274, func_294((*uParam0)[0x00000000], 0x00000000));
			func_291(&uLocal_274);
			func_27(&uLocal_300, 0x00000020);
			unk_0x3F423BF5B8125A50("mini@strip_club@idles@stripper");
			unk_0x3F423BF5B8125A50("gestures@f@standing@casual");
			func_290();
			return 0x00000000;
		}
		else if ((!func_289(&uLocal_274) || !unk_0xB4AE0788C1587752("mini@strip_club@idles@stripper")) || !func_288())
		{
			return 0x00000000;
		}
		if (bLocal_304)
		{
			if (!unk_0xA3FA8B6D2780D661(0x00000001))
			{
				return 0x00000000;
			}
		}
		if (!func_267(uLocal_300, 0x00000400))
		{
			uLocal_74[0x00000000] = (*uParam0)[0x00000000];
			iLocal_271[0x00000000] = unk_0x36F2404464202779(0x0000001A, func_294((*uParam0)[0x00000000], 0x00000000), vVar0, fVar1, 0x00000001, 0x00000001);
			func_282(iLocal_271[0x00000000], uLocal_74[0x00000000], 0x00000000);
			unk_0x11AD11297DC58CC7(iLocal_271[iVar2], 0x00000001);
			unk_0xFADC0A217229F6B5(iLocal_271[0x00000000], 0x00000001);
			unk_0x1365063FA6365BE8(iLocal_271[0x00000000], 0x00000001);
			func_278(iLocal_271[0x00000000]);
			unk_0xC6EB89C59F2AF6B8(iLocal_271[0x00000000], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0C8C0C840C2D1AD2(iLocal_271[iVar2], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000004);
			unk_0xBF541ED34EA81209(iLocal_271[0x00000000], 0x00000000);
			unk_0x4F39CC3882DD074E(iLocal_271[0x00000000], func_194((*uParam0)[0x00000000]));
			func_193(&uLocal_78, 0x00000001, iLocal_271[0x00000000], func_194((*uParam0)[0x00000000]), 0x00000000, 0x00000001);
			func_27(&uLocal_300, 0x00000400);
		}
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_300, 0x00000001))
				{
					func_277(bParam1);
					func_251(0x00000000);
					func_27(&uLocal_300, 0x00000001);
				}
			}
			if (!func_267(uLocal_300, 0x00000040) && !func_267(uLocal_300, 0x00000200))
			{
				if (func_276(func_112((*uParam0)[0x00000000])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_77() == 0x00000002)
					{
						func_193(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_77() == 0x00000000)
					{
						func_193(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_77() == 0x00000001)
					{
						func_193(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
						StringConCat(&cVar3, "F", 64);
					}
					func_193(&uLocal_78, 0x00000003, 0x00000000, func_194((*uParam0)[0x00000000]), 0x00000000, 0x00000001);
					Var4 = { func_275() };
					func_270(&uLocal_78, func_112((*uParam0)[0x00000000]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					func_27(&uLocal_300, 0x00000040);
				}
				if (func_165(iLocal_71))
				{
					if (func_266(iLocal_71))
					{
						if ((*uParam0)[0x00000000] == 0x00000008 || (*uParam0)[0x00000000] == 0x00000009)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0x00000000], 64);
							func_193(&uLocal_78, 0x00000001, 0x00000000, func_194((*uParam0)[0x00000000]), 0x00000000, 0x00000001);
							func_265(&uLocal_78, func_112((*uParam0)[0x00000000]), "SHAUD", &Var5, 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_300, 0x00000200);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_300, 0x00000040);
				func_73(&uLocal_300, 0x00000200);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0x00000000]);
				func_242(0x00000001);
				func_66(0x00000002);
			}
			if (!func_267(uLocal_300, 0x00000080))
			{
				if (!func_33(0x00000000))
				{
					func_67("SCLUB_HOME_C_H", uLocal_74[0x00000000], 0x00000000);
					func_27(&uLocal_300, 0x00000080);
				}
			}
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar0) > (fLocal_296 + (200f * 3f)))
			{
				func_66(0x00000001);
			}
			else if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar0) < fLocal_296)
			{
				fLocal_296 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar0);
			}
			return 0x00000000;
		}
	}
	else
	{
		return 0x00000000;
	}
	if (func_77() == 0x00000002)
	{
		func_193(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	else if (func_77() == 0x00000000)
	{
		func_193(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	else if (func_77() == 0x00000001)
	{
		func_193(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	return 0x00000001;
}

void func_269(int iParam0)
{
	if (Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0x00000000)
	{
		Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0x00000000;
	}
	Global_1B416.f_F3[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0x00000000);
	func_274();
	if (iParam8 == 0x00000001)
	{
		Global_5151 = 0x00000001;
	}
	else
	{
		Global_5151 = 0x00000000;
	}
	uVar0 = 0x0000000A;
	uVar1 = 0x0000000A;
	func_272(0x00000002, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	return func_271(&uVar0, &uVar1, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_188();
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
		if (func_187(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
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
		func_183();
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
		func_188();
	}
	return 0x00000000;
}

void func_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_273(iParam0);
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

void func_273(var uParam0)
{
	Global_5142 = uParam0;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
}

void func_274()
{
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_5153 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
}

struct<16> func_275()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0x00000000], 64);
	return Var0;
}

int func_276(int iParam0)
{
	if ((Global_559F || Global_559E) || Global_55A0)
	{
		if (iParam0 == 0x00000082)
		{
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (Global_4C1E.f_1 == 0x0000000A)
		{
			if (Global_1A0F == iParam0)
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
	return 0x00000000;
}

void func_277(bool bParam0)
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4", uLocal_74[0x00000000]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_74[0x00000000]);
			}
			break;
		
		case 0x00000008:
			func_84("SCLUB_HOME_LIZ", uLocal_74[0x00000000]);
			break;
		
		case 0x00000009:
			func_84("SCLUB_HOME_HITCH", uLocal_74[0x00000000]);
			break;
	}
}

void func_278(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_281(iParam0, 0x00000002, unk_0x09AC81E49EA267F7(0x00000000, 0x00000003));
		func_280(iParam0, 0x00000002, unk_0x09AC81E49EA267F7(0x00000000, 0x00000003));
		func_279(iParam0, 0x00000000, 0x00000000);
	}
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x00000006, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x00000006, iParam1, iParam2, 0x00000000);
	}
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x00000003, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, iParam1, iParam2, 0x00000000);
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x00000008, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x00000008, iParam1, iParam2, 0x00000000);
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x78ED16BE998AECC7(iParam0);
		bVar0 = 0x00000000;
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = 0x00000001;
		}
		switch (iParam1)
		{
			case 0x00000000:
				if (bVar0)
				{
					func_287(iParam0, 0x00000001, 0x00000000);
					func_286(iParam0, 0x00000001, 0x00000000);
					func_280(iParam0, 0x00000001, 0x00000000);
					func_285(iParam0, 0x00000001, 0x00000000);
					func_284(iParam0, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000001, 0x00000001);
					func_286(iParam0, 0x00000002, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000000);
					func_285(iParam0, 0x00000000, 0x00000000);
					func_281(iParam0, 0x00000001, 0x00000000);
					func_283(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				break;
			
			case 0x00000001:
				if (bVar0)
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000000, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000000);
					func_285(iParam0, 0x00000000, 0x00000000);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000000, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000000);
					func_285(iParam0, 0x00000000, 0x00000000);
					func_279(iParam0, 0x00000004, 0x00000000);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0x00000000, 0x00000004);
				}
				break;
			
			case 0x00000002:
				if (bVar0)
				{
					func_287(iParam0, 0x00000001, 0x00000000);
					func_286(iParam0, 0x00000001, 0x00000001);
					func_280(iParam0, 0x00000001, 0x00000000);
					func_285(iParam0, 0x00000001, 0x00000000);
					func_284(iParam0, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000000, 0x00000001);
					func_286(iParam0, 0x00000001, 0x00000001);
					func_280(iParam0, 0x00000001, 0x00000000);
					func_285(iParam0, 0x00000001, 0x00000001);
					func_281(iParam0, 0x00000001, 0x00000000);
					func_283(iParam0, 0x00000001, 0x00000000);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				break;
			
			case 0x00000003:
				if (bVar0)
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000000, 0x00000001);
					func_280(iParam0, 0x00000000, 0x00000001);
					func_285(iParam0, 0x00000000, 0x00000001);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000002, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000002);
					func_285(iParam0, 0x00000001, 0x00000001);
					func_279(iParam0, 0x00000000, 0x00000000);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0x00000002, 0x00000000);
				}
				break;
			
			case 0x00000004:
				if (bVar0)
				{
					func_287(iParam0, 0x00000001, 0x00000000);
					func_286(iParam0, 0x00000001, 0x00000000);
					func_280(iParam0, 0x00000001, 0x00000000);
					func_285(iParam0, 0x00000001, 0x00000000);
					func_284(iParam0, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000001, 0x00000000);
					func_286(iParam0, 0x00000002, 0x00000001);
					func_280(iParam0, 0x00000001, 0x00000002);
					func_285(iParam0, 0x00000000, 0x00000002);
					func_281(iParam0, 0x00000001, 0x00000000);
					func_283(iParam0, 0x00000001, 0x00000002);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				break;
			
			case 0x00000005:
				if (bVar0)
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000000, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000000);
					func_285(iParam0, 0x00000000, 0x00000000);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000001, 0x00000001);
					func_286(iParam0, 0x00000001, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000001);
					func_285(iParam0, 0x00000000, 0x00000002);
					func_279(iParam0, 0x00000002, 0x00000000);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0x00000001, 0x00000002);
				}
				break;
			
			case 0x00000006:
				if (bVar0)
				{
					func_287(iParam0, 0x00000001, 0x00000000);
					func_286(iParam0, 0x00000001, 0x00000000);
					func_280(iParam0, 0x00000001, 0x00000000);
					func_285(iParam0, 0x00000001, 0x00000000);
					func_284(iParam0, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000001, 0x00000000);
					func_280(iParam0, 0x00000000, 0x00000001);
					func_285(iParam0, 0x00000000, 0x00000001);
					func_281(iParam0, 0x00000001, 0x00000000);
					func_283(iParam0, 0x00000000, 0x00000001);
					func_284(iParam0, bParam2, 0x00000000, 0x00000001);
				}
				break;
			
			case 0x00000007:
				if (bVar0)
				{
					func_287(iParam0, 0x00000000, 0x00000000);
					func_286(iParam0, 0x00000000, 0x00000001);
					func_280(iParam0, 0x00000000, 0x00000000);
					func_285(iParam0, 0x00000000, 0x00000000);
					func_281(iParam0, 0x00000000, 0x00000000);
					func_284(iParam0, bParam2, 0xFFFFFFFF, 0xFFFFFFFF);
				}
				else
				{
					func_287(iParam0, 0x00000001, 0x00000000);
					func_286(iParam0, 0x00000000, 0x00000002);
					func_280(iParam0, 0x00000001, 0x00000001);
					func_285(iParam0, 0x00000000, 0x00000001);
					func_279(iParam0, 0x00000000, 0x00000000);
					func_281(iParam0, 0x00000001, 0x00000000);
					func_284(iParam0, bParam2, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000008:
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000002, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000001, 0x00000000);
				break;
			
			case 0x00000009:
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iParam0, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
				break;
			}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x0000000B, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000B, iParam1, iParam2, 0x00000000);
	}
}

void func_284(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (iVar0 == func_258(0x00000000, 0x00000000) || iVar0 == func_258(0x00000000, 0x00000001))
	{
		if (bParam1)
		{
			func_280(iParam0, 0x00000002, 0x00000000);
			func_281(iParam0, 0x00000001, 0x00000000);
		}
	}
	else if (iVar0 == func_258(0x00000001, 0x00000000) || iVar0 == func_258(0x00000001, 0x00000001))
	{
		if (bParam1)
		{
			func_280(iParam0, 0x00000000, iParam2);
			func_279(iParam0, iParam3, 0x00000000);
			func_281(iParam0, 0x00000001, 0x00000000);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_281(iParam0, 0x00000001, 0x00000000);
		}
	}
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x00000004, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, iParam1, iParam2, 0x00000000);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x00000002, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x00000002, iParam1, iParam2, 0x00000000);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6823CE32EEAD4F52(iParam0, 0x00000000, iParam1, iParam2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, iParam1, iParam2, 0x00000000);
	}
}

int func_288()
{
	if (unk_0xEA6BC48857E0AC4C(func_204()))
	{
		return 0x00000001;
	}
	else if (unk_0x1C2E18E9C63BEB77(func_204()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_290()
{
	if (!unk_0xEA6BC48857E0AC4C(func_204()))
	{
		unk_0x29398344B9E5B8A7(func_204());
	}
}

void func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			unk_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	iVar1 = func_293(uParam0);
	if (iVar1 < 0x00000000 || iVar1 >= *uParam0)
	{
		return 0x00000000;
	}
	(*uParam0)[iVar1] = iParam1;
	return 0x00000001;
}

int func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_294(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_112(iParam0);
	if (iVar0 != 0x00000091)
	{
		return func_295(iVar0);
	}
	return func_258(0x00000000, 0x00000000);
}

int func_295(int iParam0)
{
	if (!func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_296()
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000001:
			vLocal_285 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_286 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_287 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_288 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			vLocal_292 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0x00000000:
			vLocal_285 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_286 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_287 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_288 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_289 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 0x00000004:
			vLocal_285 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_286 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_287 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_288 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 0x00000005:
			vLocal_285 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_286 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_287 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_288 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			vLocal_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0x00000008:
			vLocal_285 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_286 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_287 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_288 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_289 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 0x00000009:
			vLocal_285 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_286 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_287 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_288 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_289 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			vLocal_292 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_297()
{
	switch (uLocal_74[0x00000000])
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (bLocal_304)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_301())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_299(0x0000009D))
				{
					if (!bParam2)
					{
						func_302();
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
					func_302();
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
				func_302();
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
			func_302();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_299(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_300()
{
	return Global_2564C8.f_251;
}

bool func_301()
{
	return Global_140856;
}

void func_302()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_303()
{
	unk_0x752C7D5696C0D8A0(0x00000000);
	unk_0xCE7D0828D683D536();
	func_86();
	unk_0x790015DC92C918E2();
	unk_0x2952D66A502EA873(iLocal_284, 0x00000000);
	unk_0xE342F209E49C5314(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 0x00000001, 0x00000001);
	unk_0x842F1AEB2FCC00B7(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 0x00000001);
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	if (unk_0xC844350D5D58C99A(iLocal_271[0x00000000]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_271[0x00000000], 0x00000000))
		{
			if (!func_267(uLocal_300, 0x00002000))
			{
				unk_0x01E4BB5190DF7317(iLocal_271[0x00000000], 0x471C4000, 0x00000000);
			}
			unk_0xFADC0A217229F6B5(iLocal_271[0x00000000], 0x00000001);
			if (!unk_0x1C43D178459D5730(iLocal_70))
			{
				unk_0xF63400DBE3303D26("BootyCall", &iLocal_70);
			}
			unk_0x0E2400AB9174FA81(0x00000002, iLocal_70, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000002, 0x6F0783F5, iLocal_70);
			unk_0x6DF7BF67E86AAE86(iLocal_271[0x00000000], iLocal_70);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_271[0x00000000]));
	}
	if (iLocal_299 != 0xFFFFFFFF)
	{
		func_305(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_143(&uLocal_68);
	}
	unk_0xB008F1989AB372AF(unk_0xD803B885F5E47A62(), 0x00000000);
	func_123(uLocal_74[0x00000000], 0xFFFFFFFF);
	Global_1B028 = 0x00000000;
	func_304(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_304(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)
{
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*iParam0 == Global_A1B1)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	*iParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

