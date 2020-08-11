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
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 16;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	int iLocal_232 = 0;
	int iLocal_233[2] = { 0, 0 };
	int iLocal_234[2] = { 0, 0 };
	int iLocal_235[2] = { 0, 0 };
	int iLocal_236[2] = { 0, 0 };
	int iLocal_237[2] = { 0, 0 };
	int iLocal_238 = 0;
	int iLocal_239[2] = { 0, 0 };
	int iLocal_240[2] = { 0, 0 };
	vector3 vLocal_241[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_242[2] = { 0f, 0f };
	struct<16> Local_243[2];
	struct<16> Local_244[2];
	vector3 vLocal_245 = { 0f, 0f, 0f };
	float fLocal_246 = 0f;
	vector3 vLocal_247[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_248[2] = { 0f, 0f };
	char* sLocal_249 = NULL;
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
	char[] cLocal_265[8] = 0;
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
	char[] cLocal_281[8] = 0;
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
	struct<16> Local_297[2];
	struct<16> Local_298[2];
	struct<2> Local_299 = { 0, 0 } ;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	float fLocal_302 = 0f;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	struct<2> Local_305 = { 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308[2] = { 0, 0 };
	var uLocal_309 = 0;
	float fLocal_310 = 0f;
	float fLocal_311 = 0f;
	int iLocal_312 = 0;
	float fLocal_313 = 0f;
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_62 = { 0f, 0f, 0f };
	iLocal_63 = 0xFFFFFFFF;
	iLocal_66 = 0x0000013E;
	iLocal_232 = 0x00000001;
	StringCopy(&Local_305, "", 16);
	fLocal_313 = 0.97f;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_187();
	}
	SYSTEM::WAIT(0x00000000);
	func_176();
	func_46();
	func_42();
	while (iLocal_232 && func_38(0x00000001, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
		switch (iLocal_65)
		{
			case 0x00000000:
				if (func_36())
				{
					iLocal_65 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_35())
				{
					iLocal_65 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_9())
				{
					iLocal_65 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (func_2())
				{
					iLocal_65 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				func_1();
				break;
		}
	}
	func_187();
}

void func_1()
{
	iLocal_232 = 0x00000000;
}

int func_2()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_233)
	{
		func_3(iLocal_233[iVar0], iVar0);
		iVar0++;
	}
	return 0x00000000;
}

void func_3(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	char* sVar2;
	char[] cVar3[8];
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar7;
	char* sVar8;
	char[] cVar9[8];
	int iVar10;
	int iVar11;
	vector3 vVar12;
	float fVar13;
	
	vVar0 = { -812.0607f, 179.5117f, 71.1531f };
	fVar1 = 222.8314f;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		switch (iLocal_235[iParam1])
		{
			case 0x00000000:
				if (unk_0x69DF961355195C3C(Global_1774A))
				{
					if (unk_0xB4ECF989E2C1DAC8(iParam0, &sLocal_249, &(Local_298[iParam1 /*16*/]), 0x00000002))
					{
						iLocal_235[iParam1] = 0x00000005;
					}
				}
				break;
			
			case 0x00000005:
				if (unk_0xB4ECF989E2C1DAC8(iParam0, &sLocal_249, &(Local_298[iParam1 /*16*/]), 0x00000002))
				{
					if (func_6(iLocal_236[iParam1], iLocal_237[iParam1], &sVar2, &cVar3, &iVar4, &iVar5))
					{
						unk_0x3F423BF5B8125A50(&sVar2);
						if (!unk_0xB4AE0788C1587752(&sVar2))
						{
						}
					}
					if (unk_0x69DF961355195C3C(Global_1774A))
					{
						if (!unk_0x437347B10A200C4B(iLocal_239[iParam1], 0x00000000))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_239[iParam1], &sLocal_249, &(Local_244[iParam1 /*16*/]), 0x00000002))
							{
								if (unk_0xA45992A6CE82FB43(Global_1774A) > 0.817f)
								{
									unk_0x1BF8B16C32704027(iLocal_239[iParam1], -8f, 0x00000001);
									vVar6 = { -824.5328f, 175.0702f, 69.8919f };
									fVar7 = 156.6901f;
									vVar6.x = -824.333f;
									fVar7 = 140.49f;
									unk_0xA47B46945FF6DE74(iLocal_239[iParam1], vVar6, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									unk_0xD8F6A53F4799FAFE(iLocal_239[iParam1], fVar7);
									unk_0xB9FD7450C0DAB575(iLocal_239[iParam1], 0x40A00000);
								}
							}
						}
						if (unk_0xA45992A6CE82FB43(Global_1774A) > fLocal_313)
						{
							iLocal_235[iParam1] = 0x0000000A;
						}
					}
					else
					{
						iLocal_235[iParam1] = 0x0000000A;
					}
				}
				else
				{
					iLocal_235[iParam1] = 0x0000000A;
				}
				break;
			
			case 0x00000014:
				break;
			
			case 0x0000000A:
				if (iLocal_237[iParam1] == 0x00000089)
				{
					iLocal_235[iParam1] = 0x00000001;
					break;
				}
				if (func_6(iLocal_236[iParam1], iLocal_237[iParam1], &sVar8, &cVar9, &iVar10, &iVar11) && func_4(iLocal_236[iParam1], iLocal_237[iParam1], &vVar12, &fVar13))
				{
					if (!unk_0x69DF961355195C3C(iLocal_312))
					{
						iLocal_312 = unk_0xE9744DB7B8CA6965(vVar0 + vVar12, 0f, 0f, (fVar1 + fVar13), 0x00000002);
						unk_0xC90224D9E95E5E3A(iLocal_312, 0x00000001);
						unk_0xEFC3DF9D33E248D8(iLocal_312, 0x00000000);
					}
					unk_0x915804B434753CBD(iParam0, iLocal_312, &sVar8, &cVar9, 1000f, -8f, 0x00000000, 0x00000000, 1000f, 0x00000000);
					unk_0xEFC3DF9D33E248D8(iLocal_312, 0x00000001);
					iLocal_235[iParam1] = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (iLocal_237[iParam1] != Global_16E36[iLocal_236[iParam1]])
				{
					if (!unk_0xC844350D5D58C99A(Global_180A1))
					{
						Global_16E36[iLocal_236[iParam1]] = 0x0000008C;
						Global_16E46 = iLocal_237[iParam1];
						Global_180A1 = iParam0;
						return;
					}
					if (unk_0xC844350D5D58C99A(Global_180A1))
					{
					}
				}
				else
				{
					iLocal_235[iParam1] = 0x00000002;
				}
				break;
			
			case 0x00000002:
				break;
			
			default:
				break;
		}
	}
	else
	{
		iLocal_235[iParam1] = 0xFFFFFFFF;
	}
}

int func_4(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 0x00000001;
					break;
				
				case 0x00000001:
					if (func_4(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			return 0x00000000;
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 0x00000001;
					break;
				
				case 0x00000001:
					if (func_4(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					if (func_4(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000015:
			switch (iParam0)
			{
				case 0x00000000:
					if (func_4(0x00000000, 0x00000005, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000C:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000F:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000010:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000011:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000014:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000016:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, unk_0x79833B02DBD2A244(-0.5f, 0.5f), unk_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*uParam3 = (306f + unk_0x79833B02DBD2A244(10f, 10f));
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000017:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = unk_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000018:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000013:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000019:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001A:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000020:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001B:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000029:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000021:
			switch (iParam0)
			{
				case 0x00000001:
					if (func_4(0x00000001, 0x00000020, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000026:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001F:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000022:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000023:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000025:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000027:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000028:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000024:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001C:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002A:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002B:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000002C:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002D:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002E:
			return func_4(iParam0, 0x0000001A, uParam2, uParam3);
			break;
		
		case 0x0000002F:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000003:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000030:
		case 0x00000044:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000031:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0x00000000;
					break;
			}
			break;
		
		case 0x00000032:
		case 0x00000045:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000033:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000034:
		case 0x00000043:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000035:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000036:
		case 0x00000046:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000037:
		case 0x00000047:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000040:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000038:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000000:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000039:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000000:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003A:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000001:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003B:
		case 0x00000048:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003C:
			if (func_4(iParam0, 0x0000003B, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000041:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000042:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000049:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004A:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000001:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004B:
		case 0x00000054:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004C:
		case 0x0000004E:
		case 0x00000055:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004D:
			if (func_4(iParam0, 0x0000002F, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 0x00000001;
			}
			break;
		
		case 0x0000004F:
		case 0x00000056:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000050:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000051:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000052:
		case 0x00000053:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000057:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000058:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000059:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005A:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005B:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005C:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005D:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005E:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005F:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000060:
		case 0x00000062:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000061:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000063:
			switch (iParam0)
			{
				case 0x00000006:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 0x00000001;
					break;
				
				case 0x00000007:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000064:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000065:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000066:
		case 0x00000067:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000068:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000069:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006A:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006B:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006C:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006D:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006E:
		case 0x0000006F:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000074:
			switch (iParam0)
			{
				case 0x00000009:
				case 0x0000000B:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000075:
			switch (iParam0)
			{
				case 0x00000009:
				case 0x0000000B:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000070:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000071:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000072:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000073:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000076:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000077:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000078:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000079:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007A:
			switch (iParam0)
			{
				case 0x0000000B:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007B:
			switch (iParam0)
			{
				case 0x0000000B:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007C:
			switch (iParam0)
			{
				case 0x0000000B:
				case 0x00000008:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007D:
			switch (iParam0)
			{
				case 0x0000000C:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007E:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007F:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000080:
			switch (iParam0)
			{
				case 0x0000000D:
					if (Global_1B416.f_4860[0x00000002] == 0x0000012B)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 0x00000001;
					}
					else if (((Global_1B416.f_4860[0x00000002] == 0x0000012C || Global_1B416.f_4860[0x00000002] == 0x0000012D) || Global_1B416.f_4860[0x00000002] == 0x0000012E) || Global_1B416.f_4860[0x00000002] == 0x0000012F)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 0x00000001;
					}
					if (func_5())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 0x00000001;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = (102f - 90.6729f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000082:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam0)
			{
				case 0x0000000D:
					if (func_4(iParam0, 0x00000082, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000084:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000085:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000086:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000087:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000088:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 0x00000001;
					break;
				
				case 0x0000000E:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000089:
		case 0x0000008A:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0x00000000;
			break;
		
		case 0x0000008C:
		case 0x0000008D:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0x00000000;
			break;
		
		default:
			*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
			return 0x00000000;
			break;
	}
	*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
	*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
	return 0x00000000;
}

int func_5()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_6(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	*iParam4 = 0x00000009;
	*iParam5 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000000:
			StringCopy(sParam2, "TIMETABLE@AMANDA@IG_12", 64);
			*iParam4 |= 0x00040002;
			*iParam4 = (*iParam4 - 0x00000001);
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam3, "jimmy_", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam3, "tracy_", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000002:
					StringCopy(sParam3, "_amanda", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
				
				case 0x00000002:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			*iParam4 |= 0x00040002;
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000005:
		case 0x00000015:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000000:
					func_8(iParam1, sParam2, sParam3, iParam5);
					*iParam4 |= 0x00000A00;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000007:
		case 0x00000016:
			switch (iParam0)
			{
				case 0x00000000:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x00000000:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x02040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*iParam5 = 0x00000004;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000C:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000F:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000010:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000011:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000014:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
					StringCopy(sParam3, "Jimmy_BASE", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000017:
			switch (iParam0)
			{
				case 0x00000000:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000018:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
					StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000013:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "SWITCH@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "BASE_Jimmy", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000019:
			switch (iParam0)
			{
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_JIMMY", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_TRACY", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001A:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 0x00000002;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000020:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_5", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040002;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001B:
			switch (iParam0)
			{
				case 0x00000001:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000029:
			switch (iParam0)
			{
				case 0x00000001:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000021:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_8", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x000C0002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000026:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_7@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001F:
			switch (iParam0)
			{
				case 0x00000001:
					func_8(iParam1, sParam2, sParam3, iParam5);
					*iParam4 |= 0x00000A00;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000022:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000023:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_15", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000025:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_4@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000027:
			switch (iParam0)
			{
				case 0x00000001:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000028:
			switch (iParam0)
			{
				case 0x00000001:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000024:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x020C0000;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001C:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
					StringCopy(sParam3, "IG_14_BASE_TRACY", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002A:
			return func_6(iParam0, 0x0000002B, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 0x0000002B:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@SLEEP@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002C:
		case 0x0000001D:
		case 0x0000001E:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_4", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002D:
			switch (iParam0)
			{
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_5", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002E:
			return func_6(iParam0, 0x0000001A, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 0x0000002F:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_AMANDA", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_MAID", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000030:
		case 0x00000044:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x00040002;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000031:
			return func_6(iParam0, 0x0000008C, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 0x00000032:
		case 0x00000045:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000033:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
					StringCopy(sParam3, "base_demo", 64);
					*iParam4 |= 0x00000001;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000034:
		case 0x00000043:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_7", 64);
					StringCopy(sParam3, "IG_7_ENTER", 64);
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000035:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
					StringCopy(sParam3, "amanda_gets_drunk_", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000036:
		case 0x00000046:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
					StringCopy(sParam3, "IG_5_BASE", 64);
					*iParam5 = 0x00000002;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000040:
		case 0x00000037:
		case 0x00000047:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x000C0002;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000038:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_AMANDA", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_JIMMY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000039:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_AMANDA", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000000:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_JIMMY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003A:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_AMANDA", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_TRACY", 64);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003B:
		case 0x00000048:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_BASE", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003C:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_IAmAFastLearner", 64);
					*iParam4 |= 0x00041000;
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003D:
		case 0x0000003F:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_BASE", 64);
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003E:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_END_BASE", 64);
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000041:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "SWITCH@MICHAEL@BEDROOM", 64);
					StringCopy(sParam3, "BED_LOOP_02_Amanda", 64);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000042:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "SWITCH@MICHAEL@GETS_READY", 64);
					StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000049:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_6", 64);
					StringCopy(sParam3, "BASE_Amanda", 64);
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004A:
			switch (iParam0)
			{
				case 0x00000002:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Amanda", 64);
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000001:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Tracy", 64);
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004B:
		case 0x00000054:
			switch (iParam0)
			{
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000001;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004C:
		case 0x0000004E:
		case 0x00000055:
			switch (iParam0)
			{
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004D:
			switch (iParam0)
			{
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004F:
		case 0x00000056:
		case 0x00000050:
			switch (iParam0)
			{
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000051:
			switch (iParam0)
			{
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_2@", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000052:
		case 0x00000053:
			switch (iParam0)
			{
				case 0x00000003:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					if (iParam1 == 0x00000052)
					{
						*iParam5 = 0x00000003;
					}
					if (iParam1 == 0x00000053)
					{
						*iParam5 = 0x00000002;
					}
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000057:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 64);
					*iParam5 = 0x00000004;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000058:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_PLANT", 64);
					*iParam5 = 0x00000004;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000059:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
					StringCopy(sParam3, "Base_gardener", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x00040002;
					*iParam4 = (*iParam4 - 0x00000001);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005A:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "TIMETABLE@GARDENER@LAWNMOW@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005B:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "TIMETABLE@GARDENER@FILLING_CAN", 64);
					StringCopy(sParam3, "GAR_IG_5_Filling_Can", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005C:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*iParam5 = 0x00000004;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005D:
			switch (iParam0)
			{
				case 0x00000004:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_SMOKING", 64);
					*iParam5 = 0x00000004;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005E:
			switch (iParam0)
			{
				case 0x00000005:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x00040002;
					*iParam4 = (*iParam4 - 0x00000001);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005F:
			switch (iParam0)
			{
				case 0x00000005:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 0x00000002;
					*iParam4 |= 0x00040002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000060:
		case 0x00000062:
			switch (iParam0)
			{
				case 0x00000005:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x000C0002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000061:
			switch (iParam0)
			{
				case 0x00000005:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000063:
			switch (iParam0)
			{
				case 0x00000006:
					func_7(iParam1, sParam2, "", sParam3, "", iParam5);
					return 0x00000000;
					break;
				
				case 0x00000007:
					func_7(iParam1, sParam2, "", sParam3, "", iParam5);
					return 0x00000000;
					break;
			}
			break;
		
		case 0x00000064:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
					StringCopy(sParam3, "IG_1_BASE", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000065:
		case 0x00000077:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000066:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "LAYING", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000067:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "BASE", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000068:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
					StringCopy(sParam3, "BASE", 64);
					*iParam4 = 0x00040408;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000069:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
					StringCopy(sParam3, "IG_5_", 64);
					*iParam4 |= 0x00040008;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006A:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_6", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040008;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006B:
			switch (iParam0)
			{
				case 0x00000008:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CHAIR", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006C:
			switch (iParam0)
			{
				case 0x00000008:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CLUBCHAIR", 64);
					StringCopy(sParam3, "ON_CLUBCHAIR", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006D:
			switch (iParam0)
			{
				case 0x00000008:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "SIT_Sofa", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x02040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006E:
			switch (iParam0)
			{
				case 0x00000008:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
					StringCopy(sParam3, "TALK_PHONE_Base", 64);
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006F:
			switch (iParam0)
			{
				case 0x00000008:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT", 64);
					StringCopy(sParam3, "TALK_PHONE_Exit", 64);
					*iParam4 |= 0x00041000;
					*iParam5 = 0x00000002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000074:
			switch (iParam0)
			{
				case 0x00000009:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x0000000B:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000075:
			switch (iParam0)
			{
				case 0x00000009:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x0000000B:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000070:
			switch (iParam0)
			{
				case 0x00000009:
					StringCopy(sParam2, "TIMETABLE@TREVOR@SMOKING_METH", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 = 0x00041408;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000071:
			switch (iParam0)
			{
				case 0x00000009:
					StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
					StringCopy(sParam3, "TrevOnLav_", 64);
					*iParam4 |= 0x000C0002;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000072:
			switch (iParam0)
			{
				case 0x00000009:
					StringCopy(sParam2, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
					StringCopy(sParam3, "GRENADE_THROWING_trev", 64);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000073:
			switch (iParam0)
			{
				case 0x00000009:
					StringCopy(sParam2, "SWITCH@TREVOR@BED", 64);
					StringCopy(sParam3, "GC_TRV_IG_7", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000076:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000078:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE", 64);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000079:
			switch (iParam0)
			{
				case 0x0000000A:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4", 64);
					StringCopy(sParam3, "IG_4_BASE", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007A:
			switch (iParam0)
			{
				case 0x0000000B:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					*iParam4 |= 0x000C0002;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007B:
			switch (iParam0)
			{
				case 0x0000000B:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_2@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007C:
			switch (iParam0)
			{
				case 0x0000000B:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
				
				case 0x00000008:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007D:
			switch (iParam0)
			{
				case 0x0000000C:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007E:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CLEAN_KITCHEN", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007F:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040002;
					*iParam4 = (*iParam4 - 0x00000001);
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000080:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "SWITCH@TREVOR@FLOYD_CRYING", 64);
					StringCopy(sParam3, "Console_end_LOOP_FLOYD", 64);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "SWITCH@TREVOR@PINEAPPLE", 64);
					StringCopy(sParam3, "Pineapple_EXIT_LOOP_FLOYD", 64);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000082:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 0x00000002;
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "TIMETABLE@FLOYD@ENDING_CALL", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 0x00041000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
					StringCopy(sParam3, "idle", 64);
					*iParam4 |= 0x00040000;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000087:
			switch (iParam0)
			{
				case 0x0000000D:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 0x00040000;
					*iParam5 = 0x00000003;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000088:
			switch (iParam0)
			{
				case 0x0000000D:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
				
				case 0x0000000E:
					func_8(iParam1, sParam2, sParam3, iParam5);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000008A:
		case 0x00000089:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = 0xFFFFFFFF;
			*iParam5 = 0x00000005;
			return 0x00000000;
			break;
		
		case 0x0000008C:
		case 0x0000008D:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = 0xFFFFFFFF;
			*iParam5 = 0x00000005;
			return 0x00000000;
			break;
		
		default:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = 0xFFFFFFFF;
			*iParam5 = 0x00000005;
			return 0x00000000;
			break;
	}
	StringCopy(sParam2, "", 64);
	StringCopy(sParam3, "", 64);
	*iParam4 = 0xFFFFFFFF;
	*iParam5 = 0x00000005;
	return 0x00000000;
}

int func_7(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)
{
	if (iParam0 != 0x0000008D)
	{
	}
	StringCopy(sParam1, sParam2, 64);
	StringCopy(sParam3, sParam4, 64);
	*uParam5 = 0x00000001;
	return 0x00000001;
}

int func_8(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	return func_7(iParam0, sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@BASE", sParam2, "BASE", uParam3);
}

int func_9()
{
	float fVar0;
	int iVar1;
	
	if (!func_34())
	{
		if (unk_0x69DF961355195C3C(Global_1774A))
		{
			if (unk_0xEA6BC48857E0AC4C(&Local_299))
			{
			}
			else if (!iLocal_303)
			{
				if (func_11(&uLocal_67, "PRSAUD", &Local_299, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_303 = 0x00000001;
				}
			}
			else
			{
				fVar0 = unk_0xA45992A6CE82FB43(Global_1774A);
				if (!iLocal_304)
				{
					if (fVar0 <= fLocal_302)
					{
					}
					else
					{
						func_10();
						iLocal_304 = 0x00000001;
					}
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < iLocal_233)
	{
		func_3(iLocal_233[iVar1], iVar1);
		iVar1++;
	}
	return 0x00000000;
}

void func_10()
{
	unk_0x871665896C890C7F();
	Global_5525 = 0x00000000;
}

bool func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_33(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0x00000000);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_32();
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
		if (func_31(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_30();
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
				func_22();
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
				if (func_21())
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
			if (func_20())
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
			func_19();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_18();
		func_13();
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
		func_32();
	}
	return 0x00000000;
}

void func_13()
{
	if (!func_14())
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

int func_14()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_17())
	{
		return 0x00000000;
	}
	if (func_15(unk_0xD803B885F5E47A62()))
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

bool func_15(int iParam0)
{
	return func_16(iParam0, 0x00000014);
}

bool func_16(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_17()
{
	return 0xFFFFFFFF;
}

void func_18()
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

void func_19()
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

int func_20()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_21()
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

void func_22()
{
	if (func_29(0x0000000E))
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
		Global_4C1E = func_23();
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

var func_23()
{
	func_24();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_24()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_27(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_26(unk_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_29(0x0000000E) || Global_1AFFD))
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

bool func_29(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_30()
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

bool func_31(int iParam0, int iParam1)
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

void func_32()
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

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_34()
{
	if (!unk_0x991B1F0980C62628() || unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0x00A15D69BCAA5267() > 0x00000008)
	{
		if (unk_0x00A15D69BCAA5267() != 0x0000000B)
		{
			return 0x00000000;
		}
		if (unk_0x00A15D69BCAA5267() == 0x0000000B)
		{
			if (unk_0x94EFC97F8A693855() > 0x00000000)
			{
				if (unk_0x192DE42720995A6E() > 0x00000064)
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEA6BC48857E0AC4C(&Local_299) && !iLocal_303)
	{
		if (func_11(&uLocal_67, "PRSAUD", &Local_299, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			iLocal_303 = 0x00000001;
		}
	}
	if (!func_34())
	{
		if (unk_0x69DF961355195C3C(Global_1774A))
		{
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_233)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_233[iVar0]))
				{
					if (!unk_0x437347B10A200C4B(iLocal_239[iVar0], 0x00000000))
					{
						if (unk_0x82CCEAB29E9451DD(iLocal_233[iVar0], iLocal_239[iVar0]))
						{
							unk_0xA47B46945FF6DE74(iLocal_233[iVar0], unk_0x68F4C0EC296D3901(iLocal_233[iVar0], 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
					}
					unk_0x915804B434753CBD(iLocal_233[iVar0], Global_1774A, &sLocal_249, &(Local_298[iVar0 /*16*/]), 8f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
					iLocal_235[iVar0] = 0x00000000;
				}
				else
				{
					iLocal_235[iVar0] = 0xFFFFFFFF;
				}
				if (!unk_0x437347B10A200C4B(iLocal_239[iVar0], 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_239[iVar0]))
					{
						unk_0xC55F2A0377488064(iLocal_239[iVar0]);
					}
					unk_0xE14EC663EED44AD5(iLocal_239[iVar0], Global_1774A, &(Local_244[iVar0 /*16*/]), &sLocal_249, 8f, 8f, 0x00000000, 0x447A0000);
				}
				iVar0++;
			}
			if (!unk_0xEA6BC48857E0AC4C(&Local_299) && iLocal_303)
			{
				if (!iLocal_304 && fLocal_302 == 0f)
				{
					func_10();
					iLocal_304 = 0x00000001;
				}
			}
			return 0x00000001;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < iLocal_233)
	{
		func_3(iLocal_233[iVar1], iVar1);
		iVar1++;
	}
	return 0x00000000;
}

int func_36()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x69DF961355195C3C(Global_17749))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_233)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_233[iVar0]))
			{
				unk_0x915804B434753CBD(iLocal_233[iVar0], Global_17749, &sLocal_249, &(Local_297[iVar0 /*16*/]), 8f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
			}
			if (!unk_0x437347B10A200C4B(iLocal_239[iVar0], 0x00000000))
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Local_243[iVar0 /*16*/])))
				{
					unk_0xE14EC663EED44AD5(iLocal_239[iVar0], Global_17749, &(Local_243[iVar0 /*16*/]), &sLocal_249, 8f, 8f, 0x00000000, 0x447A0000);
				}
				else
				{
					if (!unk_0x20D6474D5F4B9FC6(iLocal_239[iVar0]))
					{
						unk_0x4D3C3C0B0DE2663E(iLocal_239[iVar0], iLocal_308[iVar0], &Local_305, 0x00000001);
					}
					unk_0xF12C1D85AFEE8FAD(iLocal_239[iVar0], (fLocal_310 - unk_0x9901AABAC4D4C590(iLocal_239[iVar0])));
					unk_0xA9FBE21EB8701B34(iLocal_239[iVar0], fLocal_311);
				}
			}
			iVar0++;
		}
		if (!unk_0xEA6BC48857E0AC4C(&Local_299))
		{
			func_37(&uLocal_67, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
			if (iLocal_66 == 0x0000009C)
			{
				func_37(&uLocal_67, 0x00000003, Global_180A1, "JIMMY", 0x00000000, 0x00000001);
				func_37(&uLocal_67, 0x00000005, iLocal_233[0x00000000], "AMANDA", 0x00000000, 0x00000001);
				func_37(&uLocal_67, 0x00000004, iLocal_233[0x00000001], "TRACEY", 0x00000000, 0x00000001);
			}
			else if (iLocal_66 == 0x000000AD)
			{
				func_37(&uLocal_67, 0x00000004, iLocal_233[0x00000000], "JIMMY", 0x00000000, 0x00000001);
			}
		}
		return 0x00000001;
	}
	else if (unk_0x69DF961355195C3C(Global_1774A))
	{
		unk_0x11BEEB2AE29A6102(Global_1774A);
		if (!unk_0xEA6BC48857E0AC4C(&Local_299))
		{
			func_37(&uLocal_67, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
			if (iLocal_66 == 0x0000009C)
			{
				func_37(&uLocal_67, 0x00000003, Global_180A1, "JIMMY", 0x00000000, 0x00000001);
				func_37(&uLocal_67, 0x00000005, iLocal_233[0x00000000], "AMANDA", 0x00000000, 0x00000001);
				func_37(&uLocal_67, 0x00000004, iLocal_233[0x00000001], "TRACEY", 0x00000000, 0x00000001);
			}
			else if (iLocal_66 == 0x000000AD)
			{
				func_37(&uLocal_67, 0x00000004, iLocal_233[0x00000000], "JIMMY", 0x00000000, 0x00000001);
			}
		}
		return 0x00000001;
	}
	iVar1 = 0x00000000;
	while (iVar1 < iLocal_233)
	{
		func_3(iLocal_233[iVar1], iVar1);
		iVar1++;
	}
	return 0x00000000;
}

void func_37(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_38(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0x991B1F0980C62628())
	{
		if (unk_0x19EC8D83154D7CC1() != 0x00000003)
		{
			if (unk_0x00A15D69BCAA5267() <= 0x00000002 && unk_0x00A15D69BCAA5267() != 0x00000001)
			{
				return 0x00000001;
			}
		}
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (func_29(0x0000000E))
		{
			return 0x00000000;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0x00000000;
		}
		if (!func_40(iParam0, func_41()))
		{
			return 0x00000000;
		}
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
			fVar1 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar0);
			if (fVar1 > 250f)
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
				{
					if (!unk_0x0A059E0DB9253280(iParam1))
					{
						return 0x00000000;
					}
				}
				else if (!unk_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return 0x00000000;
				}
			}
		}
		else if (iParam1 == func_39(Global_180A1) && iParam1 != 0x00000000)
		{
			Global_180A1 = 0x00000000;
		}
	}
	return 0x00000001;
}

int func_39(var uParam0)
{
	return uParam0;
}

bool func_40(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0x00000000;
}

int func_41()
{
	func_24();
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

void func_42()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_45();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		func_45();
		return;
	}
	func_43();
	if (Global_180A3 > 0x00000000)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_43()
{
	func_44((Global_180A3 - 0x00000001));
}

void func_44(int iParam0)
{
	Global_180A3 = iParam0;
}

void func_45()
{
	func_44(0x00000000);
}

void func_46()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<8> Var3;
	char cVar4[64];
	int iVar5;
	int iVar6;
	
	iVar1 = 0x00000000;
	bVar2 = 0x00000000;
	while (!bVar2 && iVar1 < 0x00000190)
	{
		bVar2 = 0x00000001;
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_233)
		{
			if (iLocal_234[iVar0] != 0x00000091)
			{
				func_175(iLocal_234[iVar0]);
				if (!func_174(iLocal_234[iVar0]))
				{
					bVar2 = 0x00000000;
					func_175(iLocal_234[iVar0]);
				}
			}
			if (iLocal_240[iVar0] != 0x00000000)
			{
				unk_0x523BCC9DC80CD82F(iLocal_240[iVar0]);
				if (!unk_0xB87F6CF6E5628C67(iLocal_240[iVar0]))
				{
					bVar2 = 0x00000000;
					unk_0x523BCC9DC80CD82F(iLocal_240[iVar0]);
				}
			}
			if (!unk_0xEA6BC48857E0AC4C(&Local_305) && iLocal_308[iVar0] > 0x00000000)
			{
				unk_0x36187931D29E5BBE(iLocal_308[iVar0], &Local_305);
				if (!unk_0x3DDA6C6A285628E4(iLocal_308[iVar0], &Local_305))
				{
					unk_0x36187931D29E5BBE(iLocal_308[iVar0], &Local_305);
					bVar2 = 0x00000000;
				}
			}
			iVar0++;
		}
		if (!unk_0xEA6BC48857E0AC4C(&sLocal_249))
		{
			unk_0x3F423BF5B8125A50(&sLocal_249);
			if (!unk_0xB4AE0788C1587752(&sLocal_249))
			{
				bVar2 = 0x00000000;
				unk_0x3F423BF5B8125A50(&sLocal_249);
			}
		}
		StringCopy(&Var3, "", 64);
		StringCopy(&cVar4, "", 64);
		iVar5 = 0x00000000;
		iVar6 = 0x00000000;
		if (func_6(iLocal_236[0x00000000], iLocal_237[0x00000000], &Var3, &cVar4, &iVar5, &iVar6))
		{
			if (!unk_0xEA6BC48857E0AC4C(&Var3))
			{
				unk_0x3F423BF5B8125A50(&Var3);
				if (!unk_0xB4AE0788C1587752(&Var3))
				{
					bVar2 = 0x00000000;
					unk_0x3F423BF5B8125A50(&Var3);
				}
			}
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_239)
	{
		if (iLocal_240[iVar0] != 0x00000000)
		{
			iLocal_239[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_240[iVar0], vLocal_245 + vLocal_241[iVar0 /*3*/], (fLocal_246 + fLocal_242[iVar0]), 0x00000000, 0x00000000, 0x00000000);
			unk_0xB9FD7450C0DAB575(iLocal_239[iVar0], 0x40A00000);
			if (!unk_0xEA6BC48857E0AC4C(&(Local_243[iVar0 /*16*/])))
			{
				unk_0xD65E6E13E145467B(iLocal_239[iVar0], &(Local_243[iVar0 /*16*/]), &sLocal_249, 8f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0x4D3C3C0B0DE2663E(iLocal_239[iVar0], iLocal_308[iVar0], &Local_305, 0x00000001);
			}
		}
		iVar0++;
	}
	unk_0xF63400DBE3303D26("KIDSS", &iLocal_238);
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_233)
	{
		if (iLocal_234[iVar0] != 0x00000091)
		{
			if (func_171(&(iLocal_233[iVar0]), iLocal_234[iVar0], vLocal_245 + vLocal_247[iVar0 /*3*/], (fLocal_246 + fLocal_248[iVar0]), 0x00000001))
			{
				func_47(&(iLocal_233[iVar0]), iLocal_234[iVar0], iLocal_66);
				unk_0x6DF7BF67E86AAE86(iLocal_233[iVar0], iLocal_238);
				if (!unk_0xEA6BC48857E0AC4C(&(Local_297[iVar0 /*16*/])))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_233[iVar0], &sLocal_249, &(Local_297[iVar0 /*16*/]), 8f, -8f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_235[iVar0] = 0x00000000;
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_239[iVar0], 0x00000000))
				{
					unk_0xF821F915BC24D246(iLocal_233[iVar0], iLocal_239[iVar0], 0xFFFFFFFF);
					iLocal_235[iVar0] = 0x00000014;
				}
			}
		}
		iVar0++;
	}
}

int func_47(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0x0000004D:
		case 0x0000004E:
			func_165(*uParam0, 0x00000055);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			func_165(*uParam0, 0x00000056);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			func_48(*uParam0, 0x00000002, 0x00000035);
			return 0x00000001;
			break;
		
		case 0x0000005E:
		case 0x00000062:
		case 0x000000AA:
			func_165(*uParam0, 0x00000052);
			return 0x00000001;
			break;
		
		case 0x00000097:
			func_165(*uParam0, 0x00000050);
			return 0x00000001;
			break;
		
		case 0x00000098:
			func_165(*uParam0, 0x00000057);
			return 0x00000001;
			break;
		
		case 0x0000009B:
		case 0x000000A1:
			func_165(*uParam0, 0x00000050);
			return 0x00000001;
			break;
		
		case 0x00000063:
			func_165(*uParam0, 0x00000022);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			func_165(*uParam0, 0x00000023);
			return 0x00000001;
			break;
		
		case 0x00000064:
			func_165(*uParam0, 0x00000024);
			return 0x00000001;
			break;
		
		case 0x000000A9:
			func_48(*uParam0, 0x00000000, 0x00000015);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			func_165(*uParam0, 0x00000087);
			return 0x00000001;
			break;
		
		case 0x00000065:
		case 0x00000066:
		case 0x000000AB:
			func_48(*uParam0, 0x00000000, 0x00000016);
			return 0x00000001;
			break;
		
		case 0x000000AD:
			func_48(*uParam0, 0x00000000, 0x00000017);
			return 0x00000001;
			break;
		
		case 0x00000056:
			func_48(*uParam0, 0x00000000, 0x00000013);
			return 0x00000001;
			break;
		
		case 0x000000A8:
			if (iParam1 == 0x0000000E)
			{
				func_48(*uParam0, 0x00000000, 0x00000019);
				return 0x00000001;
			}
			if (iParam1 == 0x0000000F)
			{
				func_48(*uParam0, 0x00000001, 0x00000019);
				return 0x00000001;
			}
			break;
		
		case 0x0000009C:
			if (iParam1 == 0x0000000E)
			{
				func_48(*uParam0, 0x00000000, 0x00000002);
				return 0x00000001;
			}
			if (iParam1 == 0x0000000F)
			{
				func_48(*uParam0, 0x00000001, 0x00000002);
				return 0x00000001;
			}
			if (iParam1 == 0x00000011)
			{
				func_48(*uParam0, 0x00000002, 0x00000002);
				return 0x00000001;
			}
			break;
		
		case 0x000000DA:
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000001, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000003, 0x00000002, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000004, 0x00000005, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			unk_0x78ED16BE998AECC7(*uParam0);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000005, 0x00000002, 0x00000000, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x000000DC:
		case 0x000000E1:
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000001, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000003, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000004, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x00000124:
		case 0x00000125:
		case 0x00000126:
		case 0x00000127:
			func_48(*uParam0, 0x0000000D, 0x0000007F);
			return 0x00000001;
			break;
		
		case 0x00000128:
		case 0x00000129:
			func_165(*uParam0, 0x0000009F);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			func_48(*uParam0, 0x0000000D, 0x00000081);
			return 0x00000001;
			break;
		
		case 0x0000012B:
		case 0x0000012E:
			func_165(*uParam0, 0x000000A1);
			return 0x00000001;
			break;
		
		case 0x0000012D:
			func_165(*uParam0, 0x000000A0);
			return 0x00000001;
			break;
		
		case 0x0000012C:
		case 0x0000012F:
			func_48(*uParam0, 0x0000000D, 0x00000080);
			return 0x00000001;
			break;
	}
	if (((iParam1 == 0x00000011 || iParam1 == 0x0000000F) || iParam1 == 0x0000000E) || iParam1 == 0x00000020)
	{
		unk_0xC743BD39A24D0583(*uParam0, 0x00000000);
		return 0x00000001;
	}
	if (iParam1 == 0x00000013)
	{
		if (unk_0x36C584991B4C183F(*uParam0, 0x00000003) == 0x00000000)
		{
			unk_0x64F9F278AB9DCA2C(*uParam0, 0x00000005, 0x00000002, 0x00000000, 0x00000000);
		}
		return 0x00000001;
	}
	if (iParam1 == 0x00000014)
	{
		func_48(*uParam0, 0x0000000A, 0x0000008D);
		return 0x00000001;
	}
	unk_0x78ED16BE998AECC7(*uParam0);
	return 0x00000000;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	switch (iParam2)
	{
		case 0x0000008A:
		case 0x0000008C:
			return 0x00000000;
			break;
		
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					func_165(iParam0, 0x00000083);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x00000028);
					return 0x00000001;
					break;
				
				case 0x00000002:
					func_165(iParam0, 0x00000055);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					func_165(iParam0, 0x00000083);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x00000029);
					return 0x00000001;
					break;
				
				case 0x00000002:
					func_165(iParam0, 0x00000051);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			func_165(iParam0, 0x00000083);
			return 0x00000001;
			break;
		
		case 0x00000015:
			func_165(iParam0, 0x00000085);
			return 0x00000001;
			break;
		
		case 0x00000012:
		case 0x00000006:
		case 0x00000010:
		case 0x00000009:
		case 0x00000011:
		case 0x0000000B:
		case 0x00000018:
			func_165(iParam0, 0x00000083);
			return 0x00000001;
			break;
		
		case 0x00000007:
		case 0x00000016:
		case 0x00000017:
		case 0x00000014:
			func_165(iParam0, 0x00000084);
			return 0x00000001;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
			switch (iParam1)
			{
				case 0x00000000:
					func_165(iParam0, 0x00000083);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x00000028);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001C:
			func_165(iParam0, 0x00000025);
			return 0x00000001;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x00000022:
		case 0x00000026:
			func_165(iParam0, 0x0000002A);
			return 0x00000001;
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000023:
		case 0x0000002C:
		case 0x0000002D:
			func_165(iParam0, 0x00000028);
			return 0x00000001;
			break;
		
		case 0x00000027:
		case 0x00000028:
			func_165(iParam0, 0x00000026);
			return 0x00000001;
			break;
		
		case 0x0000001F:
			func_165(iParam0, 0x0000002B);
			return 0x00000001;
			break;
		
		case 0x0000001A:
		case 0x0000002E:
			func_165(iParam0, 0x00000027);
			return 0x00000001;
			break;
		
		case 0x00000029:
		case 0x00000025:
		case 0x0000001B:
		case 0x00000024:
			func_165(iParam0, 0x00000022);
			return 0x00000001;
			break;
		
		case 0x00000021:
		case 0x00000020:
			func_165(iParam0, 0x00000029);
			return 0x00000001;
			break;
		
		case 0x00000036:
		case 0x00000046:
			func_165(iParam0, 0x00000057);
			return 0x00000001;
			break;
		
		case 0x00000030:
		case 0x00000044:
			func_165(iParam0, 0x00000054);
			return 0x00000001;
			break;
		
		case 0x00000041:
		case 0x00000040:
			func_165(iParam0, 0x00000055);
			return 0x00000001;
			break;
		
		case 0x00000042:
			func_165(iParam0, 0x00000056);
			return 0x00000001;
			break;
		
		case 0x00000031:
		case 0x0000003B:
		case 0x00000048:
		case 0x0000003C:
		case 0x00000049:
			func_165(iParam0, 0x00000050);
			return 0x00000001;
			break;
		
		case 0x0000002F:
		case 0x0000003A:
			switch (iParam1)
			{
				case 0x00000002:
					func_165(iParam0, 0x00000051);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x00000028);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000033:
		case 0x00000034:
		case 0x00000043:
			func_165(iParam0, 0x00000052);
			return 0x00000001;
			break;
		
		case 0x00000035:
			func_165(iParam0, 0x00000053);
			return 0x00000001;
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x00000037:
			func_165(iParam0, 0x00000055);
			return 0x00000001;
			break;
		
		case 0x0000003F:
		case 0x00000047:
			func_165(iParam0, 0x00000056);
			return 0x00000001;
			break;
		
		case 0x00000032:
		case 0x00000045:
		case 0x00000039:
		case 0x00000038:
			switch (iParam1)
			{
				case 0x00000000:
					unk_0x78ED16BE998AECC7(iParam0);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x00000025);
					return 0x00000001;
					break;
				
				case 0x00000002:
					func_165(iParam0, 0x0000004F);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004A:
			switch (iParam1)
			{
				case 0x00000002:
					func_165(iParam0, 0x00000051);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x00000023);
					return 0x00000001;
					break;
				
				case 0x00000000:
					func_165(iParam0, 0x00000083);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000013:
			func_165(iParam0, 0x00000086);
			return 0x00000001;
			break;
		
		case 0x00000019:
			switch (iParam1)
			{
				case 0x00000000:
					func_165(iParam0, 0x00000086);
					return 0x00000001;
					break;
				
				case 0x00000001:
					func_165(iParam0, 0x0000002A);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005F:
			unk_0x78ED16BE998AECC7(iParam0);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x00000061:
		case 0x0000005E:
		case 0x00000060:
		case 0x00000062:
			unk_0x78ED16BE998AECC7(iParam0);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000071:
			func_138(iParam0, 0x0000000C, 0x0000000C, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x00000073:
			func_138(iParam0, 0x0000000C, 0x0000000A, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x0000007E:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x00000080:
		case 0x00000081:
			func_165(iParam0, 0x0000009F);
			return 0x00000001;
			break;
		
		case 0x0000007F:
		case 0x00000087:
			func_165(iParam0, 0x000000A1);
			return 0x00000001;
			break;
	}
	switch (iParam1)
	{
		case 0x00000004:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			return 0x00000001;
			break;
		
		case 0x0000000A:
			unk_0x78ED16BE998AECC7(iParam0);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			if (iParam2 != 0x00000065)
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, 0x00000002);
			}
			else
			{
				unk_0x9A28E8CB86CD4694(iParam0, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
			}
			return 0x00000001;
			break;
		
		case 0x00000008:
		case 0x00000009:
			if (iParam2 == 0x0000006C)
			{
				iVar0 = 0x0000000C;
				iVar1 = 0x00000020;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_EE8[0x00000000 /*166*/][iVar0 /*11*/][(iVar1 / 0x00000020)], (iVar1 % 0x00000020)))
				{
					func_138(iParam0, 0x0000000C, 0x00000020, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					return 0x00000001;
				}
			}
			if (func_49(iParam0, 0x0000000C, 0x0000000C))
			{
				func_138(iParam0, 0x0000000C, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
			}
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
	}
	unk_0x78ED16BE998AECC7(iParam0);
	return 0x00000000;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_12A92[0x00000001 /*14*/] = { func_69(iVar0, iParam1, iParam2, 0xFFFFFFFF) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000000C)
	{
		uVar5 = { func_65(iVar0, iParam2) };
		iVar2 = 0x00000000;
		while (iVar2 <= 0x0000000E)
		{
			if ((uVar5[iVar2] != 0xFFFFFF9D && iVar2 != 0x0000000C) && iVar2 != 0x0000000E)
			{
				if (!func_49(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 0x0000000D)
					{
						uVar6 = { func_61(iVar0, uVar5[iVar2]) };
						iVar3 = 0x00000000;
						while (iVar3 <= 0x00000008)
						{
							if (!func_49(iParam0, 0x0000000E, uVar6[iVar3]))
							{
								iVar4 = 0x00000000;
								while (iVar4 <= 0x00000013)
								{
									Global_12A92[0x00000002 /*14*/] = { func_69(iVar0, 0x0000000E, iVar4, 0xFFFFFFFF) };
									if (Global_12A92[0x00000002 /*14*/].f_C == iVar3)
									{
										if (func_49(iParam0, 0x0000000E, iVar4))
										{
											if (!func_53(iVar0, iParam2, 0x0000000E, iVar4, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
											{
												return 0x00000000;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_51(iParam0, iVar2);
						Global_12A92[0x00000002 /*14*/] = { func_69(iVar0, iVar2, iVar1, 0xFFFFFFFF) };
						if (!func_53(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
						{
							return 0x00000000;
						}
					}
				}
			}
			iVar2++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar8 = { func_61(iVar0, iParam2) };
		iVar7 = 0x00000000;
		while (iVar7 <= 0x00000008)
		{
			if (!func_49(iParam0, 0x0000000E, uVar8[iVar7]))
			{
				return 0x00000000;
			}
			iVar7++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000E)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_4 || Global_12A92[0x00000001 /*14*/].f_3 == 0xFFFFFFFF))
		{
			return 0x00000001;
		}
	}
	else if (Global_12A92[0x00000001 /*14*/].f_3 == unk_0x36C584991B4C183F(iParam0, func_50(iParam1)) && Global_12A92[0x00000001 /*14*/].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_50(iParam1)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 0x0000000C || iParam1 == 0x0000000D) || iParam1 == 0x0000000E) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = func_50(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_52(iParam0, iVar1, iVar2, iParam1);
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_50(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0x00000000;
	while (iVar3 <= (iVar1 - 0x00000001))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0x00000000;
			while (iVar4 <= (iVar5 - 0x00000001))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 0xFFFFFF9D;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 0x00000001;
	}
	if (((*uParam4)[iParam2] == 0xFFFFFF9D && iParam2 != 0x0000000E) && iParam2 != 0x0000000D)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000D || (iParam2 == 0x0000000E && (*uParam4)[0x0000000D] == 0x0000001F))
	{
		if ((((((((iParam3 == 0x00000000 || iParam3 == 0x00000001) || iParam3 == 0x00000002) || iParam3 == 0x00000003) || iParam3 == 0x00000004) || iParam3 == 0x00000005) || iParam3 == 0x00000006) || iParam3 == 0x00000007) || iParam3 == 0x00000008)
		{
			return 0x00000001;
		}
	}
	if (iParam3 == 0xFFFFFF9D || uParam5->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000E)
	{
		uVar0 = { func_61(iParam0, (*uParam4)[0x0000000D]) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 0x00000001;
			}
			iVar1++;
		}
	}
	if (func_60(iParam0, iParam2, iParam3))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_59(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_58(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_54(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_59(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_58(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				if (iParam2 == 0x00000008)
				{
					if (iParam3 == 0x00000009)
					{
						if (iParam1 == 0x00000008 || iParam1 == 0x00000015)
						{
							return 0x00000001;
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
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000001A)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x00000005 && iParam3 <= 0x0000000A)
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam2 == 0x0000000E)
			{
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x0000001A && iParam3 <= 0x00000027)
					{
						return 0x00000000;
					}
				}
			}
			return 0x00000001;
		}
		else if (func_54(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000003 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (iParam2 == 0x0000000E)
		{
			if (iParam3 >= 0x0000009F && iParam3 <= 0x000000AE)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x0000000E && iParam3 == 0x00000000)
			{
				return 0x00000001;
			}
		}
		if (func_59(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_58(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000000F)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_54(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 == 0x00000010)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 == 0x00000028 || (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)) || (iParam2 >= 0x00000040 && iParam2 <= 0x0000004F))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 >= 0x00000011 && iParam2 <= 0x00000012) || (iParam2 >= 0x00000047 && iParam2 <= 0x00000056))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_55(iParam0, iParam2, 0x0000000E, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_55(iParam0, iParam2, 0x0000000E, 0x00000003), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_55(iParam0, iParam2, 0x00000001, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_55(iParam0, iParam2, 0x00000001, 0x00000003), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_55(iParam0, iParam2, 0x0000000E, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_55(iParam0, iParam2, 0x0000000E, 0x00000004), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_55(iParam0, iParam2, 0x00000001, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_55(iParam0, iParam2, 0x00000001, 0x00000004), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = (iParam1 - func_57(iParam0));
		if (iVar3 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		iVar4 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar4)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var5);
		iVar7 = 0x00000000;
		iVar8 = (iParam1 - func_56(iParam0, func_50(iParam2)));
		if (iVar8 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		if ((iParam0 == Global_12B0C.f_1A[iParam2] && iParam1 == Global_12B0C[iParam2]) && Global_12B0C.f_D[iParam2] != 0x00000000)
		{
			return Global_12B0C.f_D[iParam2];
		}
		iVar9 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_50(iParam2));
		iVar6 = 0x00000000;
		while (iVar6 < iVar9)
		{
			unk_0xC578687D5A643830(iVar6, &Var5);
			if (!unk_0x232048AB4B0E0259(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_12B0C.f_D[iParam2] = Var5.f_1;
					Global_12B0C[iParam2] = iParam1;
					Global_12B0C.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 0xFFFFFFFF;
}

int func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000006;
					break;
				
				case 0x00000003:
					return 0x000000B5;
					break;
				
				case 0x00000004:
					return 0x00000071;
					break;
				
				case 0x00000005:
					return 0x0000000E;
					break;
				
				case 0x00000006:
					return 0x00000063;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000018;
					break;
				
				case 0x00000009:
					return 0x00000014;
					break;
				
				case 0x0000000A:
					return 0x00000030;
					break;
				
				case 0x0000000B:
					return 0x0000002D;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000015;
					break;
				
				case 0x00000003:
					return 0x0000013E;
					break;
				
				case 0x00000004:
					return 0x00000075;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000086;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x0000004D;
					break;
				
				case 0x00000009:
					return 0x0000000C;
					break;
				
				case 0x0000000A:
					return 0x00000035;
					break;
				
				case 0x0000000B:
					return 0x0000003F;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000006;
					break;
				
				case 0x00000002:
					return 0x00000009;
					break;
				
				case 0x00000003:
					return 0x000000F2;
					break;
				
				case 0x00000004:
					return 0x00000068;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000054;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000012;
					break;
				
				case 0x00000009:
					return 0x00000011;
					break;
				
				case 0x0000000A:
					return 0x00000021;
					break;
				
				case 0x0000000B:
					return 0x00000001;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005B;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x0000005C;
					break;
				
				case 0x00000008:
					return 0x000000F1;
					break;
				
				case 0x00000009:
					return 0x0000002E;
					break;
				
				case 0x0000000A:
					return 0x00000007;
					break;
				
				case 0x0000000B:
					return 0x000000ED;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005C;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x00000037;
					break;
				
				case 0x00000008:
					return 0x00000088;
					break;
				
				case 0x00000009:
					return 0x00000024;
					break;
				
				case 0x0000000A:
					return 0x00000006;
					break;
				
				case 0x0000000B:
					return 0x00000100;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000071;
			break;
		
		case joaat("player_one"):
			return 0x000000AF;
			break;
		
		case joaat("player_two"):
			return 0x0000009B;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 0x00000147;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 0x00000147;
			break;
	}
	return 0xFFFFFF9D;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000006)
		{
			if (iParam2 == 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000009 || iParam2 == 0x00000007) || iParam2 == 0x00000017)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if ((((((((((((((((iParam2 == 0x0000000C || iParam2 == 0x0000003B) || iParam2 == 0x0000003C) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || iParam2 == 0x00000025) || iParam2 == 0x00000026) || iParam2 == 0x00000027) || iParam2 == 0x00000028) || iParam2 == 0x00000029) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C)) || iParam2 == 0x00000036) || iParam2 == 0x00000037)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x00000014)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000003 || iParam2 == 0x00000005) || iParam2 == 0x00000009)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000052 || iParam2 == 0x0000000A) || iParam2 == 0x0000001A) || iParam2 == 0x0000001B) || iParam2 == 0x0000001C) || iParam2 == 0x0000001D) || iParam2 == 0x0000001E) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || (iParam2 >= 0x00000025 && iParam2 <= 0x00000027))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000008)
		{
			if (iParam2 == 0x0000000E || iParam2 == 0x00000007)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (((iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)) || iParam2 == 0x0000000F) || iParam2 == 0x00000010)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000058 || iParam2 == 0x0000000C) || iParam2 == 0x0000002F) || iParam2 == 0x00000030) || iParam2 == 0x00000031) || iParam2 == 0x00000032) || iParam2 == 0x00000033) || iParam2 == 0x00000034) || iParam2 == 0x00000035) || iParam2 == 0x00000036) || iParam2 == 0x00000037) || iParam2 == 0x00000038) || iParam2 == 0x00000039) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_55(iParam0, iParam2, 0x00000001, 0x00000003);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_55(iParam0, iParam2, 0x00000001, 0x00000004);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x0000000E)
			{
				if ((((((((iParam2 == 0x0000003A || iParam2 == 0x0000003D) || (iParam2 >= 0x0000003E && iParam2 <= 0x00000045)) || (iParam2 >= 0x00000046 && iParam2 <= 0x0000004F)) || (iParam2 >= 0x00000050 && iParam2 <= 0x00000059)) || iParam2 == 0x0000005A) || (iParam2 >= 0x0000005B && iParam2 <= 0x00000066)) || (iParam2 >= 0x00000067 && iParam2 <= 0x0000006E)) || iParam2 == 0x0000006F)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((((iParam2 >= 0x00000053 && iParam2 <= 0x0000005C) || iParam2 == 0x0000005D) || iParam2 == 0x0000005E) || (iParam2 >= 0x0000005F && iParam2 <= 0x00000065)) || (iParam2 >= 0x00000066 && iParam2 <= 0x0000006F)) || (iParam2 >= 0x00000070 && iParam2 <= 0x00000079)) || (iParam2 >= 0x0000007A && iParam2 <= 0x00000083)) || (iParam2 >= 0x00000084 && iParam2 <= 0x0000008B)) || (iParam2 >= 0x0000008C && iParam2 <= 0x00000095)) || (iParam2 >= 0x00000096 && iParam2 <= 0x0000009C)) || iParam2 == 0x0000009D)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((iParam2 == 0x00000059 || (iParam2 >= 0x0000005A && iParam2 <= 0x00000063)) || (iParam2 >= 0x00000064 && iParam2 <= 0x0000006D)) || iParam2 == 0x0000006F) || iParam2 == 0x00000070) || (iParam2 >= 0x00000071 && iParam2 <= 0x0000007A)) || (iParam2 >= 0x0000007B && iParam2 <= 0x00000084)) || (iParam2 >= 0x00000085 && iParam2 <= 0x0000008E)) || (iParam2 >= 0x0000008F && iParam2 <= 0x00000098)) || iParam2 == 0x00000099)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_55(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_55(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
	}
	return 0x00000000;
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x0000000F)
					{
						return 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000006)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000001 || iParam2 == 0x0000000A)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

struct<10> func_61(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 0x00000009;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_64(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_64(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_64(&Var1, 0x00000013, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_64(&Var1, 0x0000000E, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_64(&Var1, 0x00000012, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_64(&Var1, 0x00000000, 0x0000003B, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_64(&Var1, 0x00000000, 0x0000003C, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_64(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_64(&Var1, 0x00000000, 0x0000003C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_64(&Var1, 0x00000037, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_64(&Var1, 0x00000000, 0x00000001, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_62(&Var1, iParam0, iParam1, 0x0000000A);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_64(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_64(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_64(&Var1, 0x00000000, 0x00000052, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_64(&Var1, 0x00000000, 0x00000001, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_64(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_64(&Var1, 0x00000029, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_64(&Var1, 0x00000028, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_64(&Var1, 0x00000029, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_64(&Var1, 0x00000000, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_64(&Var1, 0x00000045, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_62(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_64(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_64(&Var1, 0x0000000B, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_64(&Var1, 0x00000011, 0x0000005A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_64(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_64(&Var1, 0x00000000, 0x00000058, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_64(&Var1, 0x00000000, 0x00000001, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_64(&Var1, 0x00000010, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_64(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_64(&Var1, 0x00000000, 0x0000007B, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_64(&Var1, 0x00000045, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_62(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_64(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_64(&Var1, 0x00000081, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_64(&Var1, 0x0000005A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_64(&Var1, 0x00000017, 0x000000FB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_64(&Var1, 0x00000024, 0x00000106, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_64(&Var1, 0x00000058, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_64(&Var1, 0x0000007D, 0x000000AF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_64(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_64(&Var1, 0x0000002C, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_64(&Var1, 0x00000034, 0x000000BD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_64(&Var1, 0x00000000, 0x00000105, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_64(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_64(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_64(&Var1, 0x00000000, 0x000000D4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_64(&Var1, 0x00000040, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_64(&Var1, 0x0000003D, 0x000000CF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_64(&Var1, 0x00000000, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_64(&Var1, 0x00000000, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_64(&Var1, 0x00000000, 0x000000E5, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_64(&Var1, 0x00000024, 0x000000F9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_64(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_64(&Var1, 0x00000000, 0x000000AE, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_64(&Var1, 0x00000023, 0x000000B4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_64(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_64(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000018:
					func_64(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_62(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_64(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_64(&Var1, 0x00000023, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_64(&Var1, 0x00000024, 0x000000B2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_64(&Var1, 0x00000035, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_64(&Var1, 0x00000026, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_64(&Var1, 0x00000025, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_64(&Var1, 0x00000071, 0x000000CB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_64(&Var1, 0x00000072, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_64(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_64(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_64(&Var1, 0x00000000, 0x000000C7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_64(&Var1, 0x00000000, 0x000000B6, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_64(&Var1, 0x00000000, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_64(&Var1, 0x0000006B, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_64(&Var1, 0x0000006D, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000143, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_64(&Var1, 0x00000077, 0x000000ED, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_64(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_64(&Var1, 0x00000072, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_64(&Var1, 0x00000023, 0x0000010C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_64(&Var1, 0x00000000, 0x0000010A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_64(&Var1, 0x0000002A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_64(&Var1, 0x0000004C, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_64(&Var1, 0x00000027, 0x000000EB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_64(&Var1, 0x00000029, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_64(&Var1, 0x0000006F, 0x000000C2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_62(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
	}
	return Var1;
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0x00000000 && iParam2 != 0xFFFFFF9D)
	{
		(*iParam0)[0x00000000] = 0x00000000;
		(*iParam0)[0x00000001] = 0x00000001;
		(*iParam0)[0x00000002] = 0x00000002;
		(*iParam0)[0x00000003] = 0x00000003;
		(*iParam0)[0x00000004] = 0x00000004;
		(*iParam0)[0x00000005] = 0x00000005;
		(*iParam0)[0x00000006] = 0x00000006;
		(*iParam0)[0x00000007] = 0x00000007;
		(*iParam0)[0x00000008] = 0x00000008;
		iVar0 = 0x00000000;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0x00000000;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 0x00000001;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 0x00000002;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 0x00000003;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 0x00000004;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar3 = 0x00000000;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar3, &vVar2) && vVar2.z != 0xFFFFFFFF)
				{
					if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
					{
						(*iParam0)[vVar2.z] = func_63(iParam1, vVar2.x, 0x0000000E, iVar0);
					}
					else if (vVar2.y != 0xFFFFFFFF)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar3)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_57(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var4);
		iVar6 = 0x00000000;
		iVar7 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_50(iParam2));
		iVar5 = 0x00000000;
		while (iVar5 < iVar7)
		{
			unk_0xC578687D5A643830(iVar5, &Var4);
			if (!unk_0x232048AB4B0E0259(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_56(iParam0, func_50(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 0xFFFFFF9D;
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0x00000000] = iParam1;
	(*iParam0)[0x00000001] = iParam2;
	(*iParam0)[0x00000002] = iParam3;
	(*iParam0)[0x00000003] = iParam4;
	(*iParam0)[0x00000004] = iParam5;
	(*iParam0)[0x00000005] = iParam6;
	(*iParam0)[0x00000006] = iParam7;
	(*iParam0)[0x00000007] = iParam8;
	(*iParam0)[0x00000008] = iParam9;
}

struct<17> func_65(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 0x0000000F;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	Var1.f_10 = 0x00000000;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					if (Global_1B416.f_2378.f_63.f_3A[0x00000078])
					{
						func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					else
					{
						func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					break;
				
				case 0x00000001:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000010, 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000024, 0x00000015, 0x00000006, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000003:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000041, 0x00000024, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000004:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003D, 0x00000020, 0x00000006, 0x00000000, 0x00000000, 0x00000007, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000000], Global_1B416.f_936.f_21B.f_C8[0x00000000], 0x00000006, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000006:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005C, 0x00000048, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000008:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AB, 0x00000059, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x0000000B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000011, 0x0000000A, 0x00000004, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000017, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000045, 0x00000028, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003E, 0x00000021, 0x00000026, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000000F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003F, 0x00000022, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000004, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AE, 0x0000005D, 0x00000012, 0x00000000, 0x00000012, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004C, 0x0000002E, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x00000013:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000040, 0x00000023, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000042, 0x00000025, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000043, 0x00000026, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000044, 0x00000027, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B1, 0x0000005E, 0x00000013, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000004, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000081, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000001, 0x0000001F);
					break;
				
				case 0x00000020:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000037, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000056, 0x00000004, 0x00000014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000061, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000002, 0x0000001F);
					break;
				
				case 0x00000023:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000008, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000A, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000B, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000C, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000D, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000E, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000030:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005B, 0x00000047, 0x0000000E, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000031:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000032:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000009);
					break;
				
				case 0x00000033:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000034:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x00000048, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_66(&Var1, iParam0, iParam1, 0x00000035);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000049, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000016, 0x0000000A, 0x00000040, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x00000002:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000001], Global_1B416.f_936.f_21B.f_C8[0x00000001], 0x00000011, 0x00000002, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002D, 0x0000001F);
					break;
				
				case 0x00000003:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x0000000D, 0x00000005, 0x00000002, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000004:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x00000022, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_68(&Var1, 0xFFFFFF9D, 0x00000014, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000006:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000028, 0x0000000D, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005A, 0x00000020, 0x00000011, 0x00000001, 0x00000008, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000008:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000002, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x00000009:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000004, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000D0, 0x00000047, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000103, 0x0000000A, 0x00000023, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x0000000C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000012, 0x00000006, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x00000007, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000014, 0x00000008, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000015, 0x00000009, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000087, 0x00000028, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004A, 0x00000018, 0x00000034, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B0, 0x00000035, 0x0000001A, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000029, 0x0000001F);
					break;
				
				case 0x00000013:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A2, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004B, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000016:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E3, 0x00000035, 0x00000019, 0x00000000, 0x0000001B, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000019, 0x0000001F);
					break;
				
				case 0x00000017:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E4, 0x00000036, 0x00000019, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001A, 0x0000001F);
					break;
				
				case 0x00000018:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E5, 0x00000037, 0x00000019, 0x00000000, 0x0000001D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001B, 0x0000001F);
					break;
				
				case 0x00000019:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E6, 0x00000038, 0x00000019, 0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001C, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E7, 0x00000039, 0x00000019, 0x00000000, 0x0000001F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001D, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E8, 0x0000003A, 0x00000019, 0x00000000, 0x00000020, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001E, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E9, 0x0000003B, 0x00000019, 0x00000000, 0x00000021, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EA, 0x0000003C, 0x00000019, 0x00000000, 0x00000022, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000020, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EB, 0x0000003D, 0x00000019, 0x00000000, 0x00000023, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000021, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EC, 0x0000003E, 0x00000019, 0x00000000, 0x00000024, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000022, 0x0000001F);
					break;
				
				case 0x00000020:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000ED, 0x0000003F, 0x00000019, 0x00000000, 0x00000025, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000023, 0x0000001F);
					break;
				
				case 0x00000021:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EE, 0x00000040, 0x00000019, 0x00000000, 0x00000026, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000024, 0x0000001F);
					break;
				
				case 0x00000022:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EF, 0x00000041, 0x00000019, 0x00000000, 0x00000027, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000025, 0x0000001F);
					break;
				
				case 0x00000023:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F0, 0x00000042, 0x00000019, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000026, 0x0000001F);
					break;
				
				case 0x00000024:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x00000043, 0x00000019, 0x00000000, 0x00000029, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000027, 0x0000001F);
					break;
				
				case 0x00000025:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F2, 0x00000044, 0x00000019, 0x00000000, 0x0000002A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000028, 0x0000001F);
					break;
				
				case 0x00000026:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000104, 0x00000048, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007B, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000059, 0x00000016, 0x0000000F, 0x00000006, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000013D, 0x00000045, 0x00000011, 0x00000000, 0x00000000, 0x00000000, 0x00000033, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000002C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001E, 0x00000017, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000006A, 0x00000046, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x0000002E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000075, 0x00000018, 0x00000014, 0x00000005, 0x0000001A, 0x00000000, 0x00000034, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_66(&Var1, iParam0, iParam1, 0x0000002F);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x00000008, 0x00000002, 0x00000003, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000002:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002B, 0x00000008, 0x0000000C, 0x00000003, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000003:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000032, 0x0000000E, 0x00000008, 0x00000000, 0x0000000F, 0x00000006, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000004:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000002], Global_1B416.f_936.f_21B.f_C8[0x00000002], 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000005:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005F, 0x00000021, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x00000006:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000A, 0x00000004, 0x00000006, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000007:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000E, 0x00000004, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000008:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000035, 0x00000011, 0x0000000B, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000060, 0x00000051, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000033, 0x0000000F, 0x00000021, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005D, 0x0000001D, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000034, 0x00000010, 0x0000001E, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x0000005C, 0x00000010, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000022, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000009, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002D, 0x0000000A, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002E, 0x0000000B, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000013:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002F, 0x0000000C, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000035, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000002C, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000062, 0x00000000, 0x0000001C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x0000001F, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BE, 0x00000047, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BF, 0x00000048, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C0, 0x00000049, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C1, 0x0000004A, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C2, 0x0000004B, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C3, 0x0000004C, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C4, 0x0000004D, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C5, 0x0000004E, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000020:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C6, 0x0000004F, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C7, 0x00000050, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C8, 0x0000003E, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000023:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C9, 0x0000003F, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CA, 0x00000040, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CB, 0x00000041, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CC, 0x00000042, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CD, 0x00000043, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CE, 0x00000044, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x0000002B, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000037, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000034, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000046, 0x0000001E, 0x00000020, 0x00000006, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_66(&Var1, iParam0, iParam1, 0x00000030);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000000A, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007F, 0x00000026, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003E, 0x00000000);
					break;
				
				case 0x00000002:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x000000F8, 0x0000002D, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000090, 0x00000001);
					break;
				
				case 0x00000003:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000001F, 0x00000019, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000E7, 0x00000002);
					break;
				
				case 0x00000004:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x0000000A, 0xFFFFFF9D, 0x00000015, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000007B, 0x00000003);
					break;
				
				case 0x00000005:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000005D, 0x0000008D, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000072, 0x00000004);
					break;
				
				case 0x00000006:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000071, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000071, 0x00000005);
					break;
				
				case 0x00000007:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003D, 0x00000088, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003D, 0x00000006);
					break;
				
				case 0x00000008:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000070, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000007);
					break;
				
				case 0x00000009:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000083, 0x00000018, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000DF, 0x00000008);
					break;
				
				case 0x0000000A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000BC, 0xFFFFFF9D, 0x000000D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000009);
					break;
				
				case 0x0000000B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000A0, 0xFFFFFF9D, 0x000000D3, 0x00000000, 0x00000000, 0x00000000, 0x0000002B, 0x0000009D, 0x0000000A);
					break;
				
				case 0x0000000C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000A2, 0x000000AE, 0xFFFFFF9D, 0x000000C9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000009E, 0x0000000B);
					break;
				
				case 0x0000000D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000004, 0x000000F0, 0xFFFFFF9D, 0x00000022, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000061, 0x0000000C);
					break;
				
				case 0x0000000E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000080, 0x000000E8, 0xFFFFFF9D, 0x0000002B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000066, 0x0000000D);
					break;
				
				case 0x0000000F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x00000041, 0xFFFFFF9D, 0x000000E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x0000000E);
					break;
				
				case 0x00000010:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000041, 0x000000AC, 0xFFFFFF9D, 0x000000CA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x0000000F);
					break;
				
				case 0x00000011:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000042, 0x00000010);
					break;
				
				case 0x00000012:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000062, 0x00000050, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000057, 0x00000011);
					break;
				
				case 0x00000013:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x000000C0, 0x00000060, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000050, 0x00000012);
					break;
				
				case 0x00000014:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007C, 0x00000060, 0xFFFFFF9D, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006E, 0x00000013);
					break;
				
				case 0x00000015:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000050, 0x00000072, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000014);
					break;
				
				case 0x00000016:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x0000002B, 0x00000070, 0xFFFFFF9D, 0x00000052, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000030, 0x00000015);
					break;
				
				case 0x00000017:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000090, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000016);
					break;
				
				case 0x00000018:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003F, 0x00000026, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003F, 0x00000017);
					break;
				
				case 0x00000019:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000029, 0x00000018);
					break;
				
				default:
					func_66(&Var1, iParam0, iParam1, 0x0000001A);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000088, 0x000000F1, 0xFFFFFF9D, 0x0000002F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000015, 0x0000001F);
					break;
				
				case 0x00000002:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000001, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x000000D7, 0x00000000);
					break;
				
				case 0x00000003:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000049, 0x000000F1, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000019, 0x00000001);
					break;
				
				case 0x00000004:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000058, 0x000000D9, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000002);
					break;
				
				case 0x00000005:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000007, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000099, 0x00000003);
					break;
				
				case 0x00000006:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000008C, 0x000000F1, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000010, 0x00000004);
					break;
				
				case 0x00000007:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000008B, 0x00000070, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x0000004E, 0x00000005);
					break;
				
				case 0x00000008:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000C1, 0x00000030, 0xFFFFFF9D, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x00000006);
					break;
				
				case 0x00000009:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000072, 0x00000061, 0xFFFFFF9D, 0x00000067, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000062, 0x00000007);
					break;
				
				case 0x0000000A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000086, 0x000000EF, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000090, 0x00000008);
					break;
				
				case 0x0000000B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000098, 0x00000060, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000060, 0x00000009);
					break;
				
				case 0x0000000C:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000081, 0x00000001, 0xFFFFFF9D, 0x00000060, 0x00000000, 0x00000000, 0x00000000, 0x00000005, 0x00000078, 0x0000000A);
					break;
				
				case 0x0000000D:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000082, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000009F, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x000000D6, 0x0000000B);
					break;
				
				case 0x0000000F:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x000000E8, 0x000000D5, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x00000093, 0x0000000C);
					break;
				
				case 0x00000010:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000008, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000027, 0x0000000D);
					break;
				
				case 0x00000011:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000096, 0x000000EB, 0xFFFFFF9D, 0x0000006A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000080, 0x0000000E);
					break;
				
				case 0x00000012:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000060, 0x00000061, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000020, 0x00000072, 0x0000000F);
					break;
				
				case 0x00000013:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000030, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000059, 0x00000010);
					break;
				
				case 0x00000014:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000003E, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004E, 0x00000011);
					break;
				
				case 0x00000015:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000031, 0x00000041, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000050, 0x0000001F);
					break;
				
				case 0x00000016:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000014, 0x00000010, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x00000012);
					break;
				
				case 0x00000017:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000049, 0x000000B2, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000026, 0x0000000B, 0x00000013);
					break;
				
				case 0x00000018:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000087, 0x00000035, 0xFFFFFF9D, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x0000001D, 0x0000001B, 0x00000014);
					break;
				
				case 0x00000019:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x000000E9, 0x000000B0, 0xFFFFFF9D, 0x00000078, 0x00000000, 0x00000000, 0x00000000, 0x0000000B, 0x000000A0, 0x00000015);
					break;
				
				case 0x0000001A:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000022, 0x000000B3, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004D, 0x00000016);
					break;
				
				case 0x0000001B:
					func_68(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x00000083, 0x0000005D, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FA, 0x00000017);
					break;
				
				default:
					func_66(&Var1, iParam0, iParam1, 0x0000001C);
					break;
			}
			break;
	}
	return Var1;
}

void func_66(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0x00000000] = 0x00000000;
	(*uParam0)[0x00000002] = 0xFFFFFF9D;
	(*uParam0)[0x00000003] = 0x00000000;
	(*uParam0)[0x00000004] = 0x00000000;
	(*uParam0)[0x00000006] = 0x00000000;
	(*uParam0)[0x00000005] = 0x00000000;
	(*uParam0)[0x00000008] = 0x00000000;
	(*uParam0)[0x00000009] = 0x00000000;
	(*uParam0)[0x0000000A] = 0x00000000;
	(*uParam0)[0x00000001] = 0x00000000;
	(*uParam0)[0x00000007] = 0x00000000;
	(*uParam0)[0x0000000B] = 0x00000000;
	(*uParam0)[0x0000000D] = 0xFFFFFF9D;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
	uParam0->f_10 = 0x00000000;
	iVar0 = 0x00000000;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0x00000000;
		(*uParam0)[0x0000000D] = (0x0000000A + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 0x00000001;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 0x00000002;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 0x00000004;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0x00000000);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar4 = 0x00000000;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
				{
					if (vVar2.z == 0x0000000A)
					{
						unk_0x65C0659496B1CC14(&Var3);
						unk_0xFDEBA3FD0BF0D4AC(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 0x00000001;
						}
					}
					if (vVar2.z == 0x0000000A && uParam0->f_10)
					{
						(*uParam0)[func_67(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 0x00000001;
					}
					else
					{
						(*uParam0)[func_67(vVar2.z)] = func_63(iParam1, vVar2.x, func_67(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 0xFFFFFFFF)
				{
					(*uParam0)[func_67(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0x00000000)
		{
			(*uParam0)[0x0000000D] = 0xFFFFFF9D;
		}
		else
		{
			(*uParam0)[0x0000000D] = Var1.f_1;
		}
	}
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0x00000000] = iParam1;
	(*uParam0)[0x00000002] = iParam2;
	(*uParam0)[0x00000003] = iParam3;
	(*uParam0)[0x00000004] = iParam4;
	(*uParam0)[0x00000006] = iParam5;
	(*uParam0)[0x00000005] = iParam6;
	(*uParam0)[0x00000008] = iParam7;
	(*uParam0)[0x00000009] = iParam8;
	(*uParam0)[0x0000000A] = iParam9;
	(*uParam0)[0x00000001] = iParam10;
	(*uParam0)[0x00000007] = iParam11;
	(*uParam0)[0x0000000B] = iParam12;
	(*uParam0)[0x0000000D] = iParam13;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
}

struct<14> func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_137();
	if (iParam0 == joaat("player_zero"))
	{
		func_119(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_100(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_70(iParam1, iParam2);
	}
	return Global_12A92[0x00000000 /*14*/];
}

void func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_99(iParam1);
			break;
		
		case 0x00000002:
			func_98(iParam1);
			break;
		
		case 0x00000003:
			func_95(iParam1);
			break;
		
		case 0x00000004:
			func_94(iParam1);
			break;
		
		case 0x00000006:
			func_93(iParam1);
			break;
		
		case 0x00000005:
			func_92(iParam1);
			break;
		
		case 0x00000008:
			func_91(iParam1);
			break;
		
		case 0x00000009:
			func_90(iParam1);
			break;
		
		case 0x0000000A:
			func_89(iParam1);
			break;
		
		case 0x00000001:
			func_88(iParam1);
			break;
		
		case 0x00000007:
			func_87(iParam1);
			break;
		
		case 0x0000000B:
			func_86(iParam1);
			break;
		
		case 0x0000000C:
			func_85(iParam1);
			break;
		
		case 0x0000000D:
			func_84(iParam1);
			break;
		
		case 0x0000000E:
			func_71(iParam1);
			break;
	}
}

void func_71(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x000000D7;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000031;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000012;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000009B, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0x00000000;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 0x00000020);
	uParam0->f_2 = (iParam2 / 0x00000020);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_82(iParam8);
	if ((uParam0->f_2 >= 0x0000000A && uParam0->f_5 >= 0x00000000) && uParam0->f_5 < 0x00000003)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0x00000000;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000003);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000006);
		if (func_29(0x0000000E))
		{
			return;
		}
		if (iParam1 == 0x00000001)
		{
			if (unk_0x1A5A491D253EA7BA(Global_280004, 0x6CE6313B, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000007);
			}
		}
		if (iParam1 == 0x0000000C)
		{
			if (!func_80(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_80(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else if (iParam1 == 0x0000000D)
		{
		}
		else if (iParam1 == 0x0000000E)
		{
			if (!func_80(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_80(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else
		{
			if (!func_80(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_80(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
	}
	else if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		if (func_79(iParam1, uParam0->f_5, uParam0->f_2, 0x00000000, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		}
		if (func_79(iParam1, uParam0->f_5, uParam0->f_2, 0x00000001, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
		if (!func_79(iParam1, uParam0->f_5, uParam0->f_2, 0x00000002, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if ((((((((((iParam1 == 0x0000000B || iParam1 == 0x00000004) || iParam1 == 0x00000006) || iParam1 == 0x00000001) || iParam1 == 0x0000000E) || iParam1 == 0x00000002) || iParam1 == 0x00000008) || iParam1 == 0x00000009) || iParam1 == 0x0000000A) || iParam1 == 0x00000007) || iParam1 == 0x0000000C)
		{
			if (func_29(0x0000000E))
			{
				return;
			}
			iVar0 = func_75(func_78(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			}
			iVar0 = func_75(func_74(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
			}
			if (func_73(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_75(iVar1, Global_12A8F, 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
	if (iParam1 == 0x0000000E)
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
}

bool func_73(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 0x000003D2;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D3;
					break;
				
				case 0x00000003:
					*uParam2 = 0x00000595;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E3;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EB;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000596;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059E;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000005A0;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000003F3;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A1;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FB;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x00000406;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D4;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000597;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059F;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A2;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DC;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FC;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D5;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E5;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003ED;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000598;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A3;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DD;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FD;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E6;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EE;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000599;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DE;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FE;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E7;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EF;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059A;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DF;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FF;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E8;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F0;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059B;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E0;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000400;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E9;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F1;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059C;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E1;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000401;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F2;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059D;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E2;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000402;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000403;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000404;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000405;
					break;
			}
			break;
	}
	return *uParam2 != 0x000003D2;
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000039F;
					break;
				
				case 0x00000003:
					return 0x00000586;
					break;
				
				case 0x00000004:
					return 0x000003AF;
					break;
				
				case 0x00000006:
					return 0x000003B7;
					break;
				
				case 0x00000008:
					return 0x00000587;
					break;
				
				case 0x00000009:
					return 0x0000058F;
					break;
				
				case 0x0000000A:
					return 0x00000591;
					break;
				
				case 0x00000001:
					return 0x000003BF;
					break;
				
				case 0x00000007:
					return 0x00000592;
					break;
				
				case 0x0000000B:
					return 0x000003A7;
					break;
				
				case 0x0000000E:
					return 0x000003C7;
					break;
				
				case 0x0000000C:
					return 0x000003D2;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A0;
					break;
				
				case 0x00000004:
					return 0x000003B0;
					break;
				
				case 0x00000006:
					return 0x000003B8;
					break;
				
				case 0x00000008:
					return 0x00000588;
					break;
				
				case 0x00000009:
					return 0x00000590;
					break;
				
				case 0x00000007:
					return 0x00000593;
					break;
				
				case 0x0000000B:
					return 0x000003A8;
					break;
				
				case 0x0000000E:
					return 0x000003C8;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A1;
					break;
				
				case 0x00000004:
					return 0x000003B1;
					break;
				
				case 0x00000006:
					return 0x000003B9;
					break;
				
				case 0x00000008:
					return 0x00000589;
					break;
				
				case 0x00000007:
					return 0x00000594;
					break;
				
				case 0x0000000B:
					return 0x000003A9;
					break;
				
				case 0x0000000E:
					return 0x000003C9;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B2;
					break;
				
				case 0x00000006:
					return 0x000003BA;
					break;
				
				case 0x00000008:
					return 0x0000058A;
					break;
				
				case 0x0000000B:
					return 0x000003AA;
					break;
				
				case 0x0000000E:
					return 0x000003CA;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B3;
					break;
				
				case 0x00000006:
					return 0x000003BB;
					break;
				
				case 0x00000008:
					return 0x0000058B;
					break;
				
				case 0x0000000B:
					return 0x000003AB;
					break;
				
				case 0x0000000E:
					return 0x000003CB;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B4;
					break;
				
				case 0x00000006:
					return 0x000003BC;
					break;
				
				case 0x00000008:
					return 0x0000058C;
					break;
				
				case 0x0000000B:
					return 0x000003AC;
					break;
				
				case 0x0000000E:
					return 0x000003CC;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B5;
					break;
				
				case 0x00000006:
					return 0x000003BD;
					break;
				
				case 0x00000008:
					return 0x0000058D;
					break;
				
				case 0x0000000B:
					return 0x000003AD;
					break;
				
				case 0x0000000E:
					return 0x000003CD;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B6;
					break;
				
				case 0x00000006:
					return 0x000003BE;
					break;
				
				case 0x00000008:
					return 0x0000058E;
					break;
				
				case 0x0000000B:
					return 0x000003AE;
					break;
				
				case 0x0000000E:
					return 0x000003CE;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003CF;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D0;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D1;
					break;
			}
			break;
	}
	return 0x000003A7;
}

int func_75(int iParam0, int iParam1, int iParam2)
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

int func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_77();
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

var func_77()
{
	return Global_1407E9;
}

int func_78(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036B;
					break;
				
				case 0x00000003:
					return 0x00000577;
					break;
				
				case 0x00000004:
					return 0x0000037B;
					break;
				
				case 0x00000006:
					return 0x00000383;
					break;
				
				case 0x00000008:
					return 0x00000578;
					break;
				
				case 0x00000009:
					return 0x00000580;
					break;
				
				case 0x0000000A:
					return 0x00000582;
					break;
				
				case 0x00000001:
					return 0x0000038B;
					break;
				
				case 0x00000007:
					return 0x00000583;
					break;
				
				case 0x0000000B:
					return 0x00000373;
					break;
				
				case 0x0000000E:
					return 0x00000393;
					break;
				
				case 0x0000000C:
					return 0x0000039E;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036C;
					break;
				
				case 0x00000004:
					return 0x0000037C;
					break;
				
				case 0x00000006:
					return 0x00000384;
					break;
				
				case 0x00000008:
					return 0x00000579;
					break;
				
				case 0x00000009:
					return 0x00000581;
					break;
				
				case 0x00000007:
					return 0x00000584;
					break;
				
				case 0x0000000B:
					return 0x00000374;
					break;
				
				case 0x0000000E:
					return 0x00000394;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036D;
					break;
				
				case 0x00000004:
					return 0x0000037D;
					break;
				
				case 0x00000006:
					return 0x00000385;
					break;
				
				case 0x00000008:
					return 0x0000057A;
					break;
				
				case 0x00000007:
					return 0x00000585;
					break;
				
				case 0x0000000B:
					return 0x00000375;
					break;
				
				case 0x0000000E:
					return 0x00000395;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037E;
					break;
				
				case 0x00000006:
					return 0x00000386;
					break;
				
				case 0x00000008:
					return 0x0000057B;
					break;
				
				case 0x0000000B:
					return 0x00000376;
					break;
				
				case 0x0000000E:
					return 0x00000396;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037F;
					break;
				
				case 0x00000006:
					return 0x00000387;
					break;
				
				case 0x00000008:
					return 0x0000057C;
					break;
				
				case 0x0000000B:
					return 0x00000377;
					break;
				
				case 0x0000000E:
					return 0x00000397;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000380;
					break;
				
				case 0x00000006:
					return 0x00000388;
					break;
				
				case 0x00000008:
					return 0x0000057D;
					break;
				
				case 0x0000000B:
					return 0x00000378;
					break;
				
				case 0x0000000E:
					return 0x00000398;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000381;
					break;
				
				case 0x00000006:
					return 0x00000389;
					break;
				
				case 0x00000008:
					return 0x0000057E;
					break;
				
				case 0x0000000B:
					return 0x00000379;
					break;
				
				case 0x0000000E:
					return 0x00000399;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000382;
					break;
				
				case 0x00000006:
					return 0x0000038A;
					break;
				
				case 0x00000008:
					return 0x0000057F;
					break;
				
				case 0x0000000B:
					return 0x0000037A;
					break;
				
				case 0x0000000E:
					return 0x0000039A;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039B;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039C;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039D;
					break;
			}
			break;
	}
	return 0x00000373;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0x00000000)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 0x00000001)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000002)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000003)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000006)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000007)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000008)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000009)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000006)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000008)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000A)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000E)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0x00000000;
}

int func_80(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_81(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_75(iVar2, iVar0, 0x00000000);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0x00000000;
}

bool func_81(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 0x00002CF7;
	if ((bParam4 && Global_411C56) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
					
					case 0xC0235F73:
					case 0xAD93CC80:
					case 0x16FF0A8E:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000000;
						return 0x00000001;
						break;
					
					case 0xCE57FBDC:
					case 0x98CDA2F4:
					case 0x2841AD13:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000001;
						return 0x00000001;
						break;
					
					case 0x928E844A:
					case 0x8B23079F:
					case 0xF1CC4021:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000002;
						return 0x00000001;
						break;
					
					case 0xA0BA20A1:
					case 0x08C582E6:
					case 0x0409E49C:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000003;
						return 0x00000001;
						break;
					
					case 0x075EEDE1:
					case 0xFA7AE651:
					case 0xE0079C98:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000004;
						return 0x00000001;
						break;
					
					case 0x13BA0697:
					case 0xF649DDEF:
					case 0xF13E3F05:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000005;
						return 0x00000001;
						break;
					
					case 0xF77E4E20:
					case 0x633F37DC:
					case 0xCD0C76A2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000007;
						return 0x00000001;
						break;
					
					case 0x4CEE78FF:
					case 0x3C60EA1C:
					case 0xA9142EB2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000008;
						return 0x00000001;
						break;
					
					case 0x7AC28546:
					case 0x379D8CB2:
					case 0xA9497954:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x0000000B;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			}
	}
	iVar0 = 0xFFFFFFFF;
	if (bParam4)
	{
		if (Global_411C56)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000001:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006DF;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E0;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E1;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E2;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E3;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006EB;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006ED;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006EE;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006EF;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F0;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F1;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006F9;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FA;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x0000075F;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000760;
					break;
				
				case 0x00000011:
					*uParam2 = 0x0000077F;
					break;
				
				case 0x00000012:
					*uParam2 = 0x0000078D;
					break;
				
				case 0x00000013:
					*uParam2 = 0x0000078E;
					break;
				
				case 0x00000014:
					*uParam2 = 0x0000078F;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000790;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000791;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007F9;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FA;
					break;
				
				case 0x00000019:
					*uParam2 = 0x00000814;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x00000815;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000816;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000817;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000818;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000819;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x0000081A;
					break;
				
				case 0x00000020:
					*uParam2 = 0x0000081B;
					break;
				
				case 0x00000021:
					*uParam2 = 0x0000081C;
					break;
				
				case 0x00000022:
					*uParam2 = 0x0000081D;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000914;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000915;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000955;
					break;
				
				case 0x00000026:
					*uParam2 = 0x00000956;
					break;
				
				case 0x00000027:
					*uParam2 = 0x00000957;
					break;
				
				case 0x00000028:
					*uParam2 = 0x00000958;
					break;
				
				case 0x00000029:
					*uParam2 = 0x00000993;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x00000994;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x00000995;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x00000996;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x00000997;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x00000998;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x00000999;
					break;
				
				case 0x00000030:
					*uParam2 = 0x0000099A;
					break;
				
				case 0x00000031:
					*uParam2 = 0x0000099B;
					break;
				
				case 0x00000032:
					*uParam2 = 0x0000099C;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A1D;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A1E;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A1F;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A20;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A21;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A22;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A23;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A24;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A25;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A26;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A27;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C7C;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C7D;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C7E;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C7F;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C80;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C81;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E55;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E56;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E57;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E58;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E59;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E5A;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E5B;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E5C;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E5D;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E5E;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED0;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED1;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000ED2;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000ED3;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000ED4;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000ED5;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000ED6;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000ED7;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F3E;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F3F;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F40;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014D9;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014DA;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014DB;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014DC;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014DD;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014DE;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014DF;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014E0;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014E1;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014E2;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014E3;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014E4;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001512;
					break;
				
				case 0x00000066:
					*uParam2 = 0x00001513;
					break;
				
				case 0x00000067:
					*uParam2 = 0x00001514;
					break;
				
				case 0x00000068:
					*uParam2 = 0x00001515;
					break;
				
				case 0x00000069:
					*uParam2 = 0x00001516;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x00001517;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x00001518;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001519;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x0000151A;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x0000151B;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x0000151C;
					break;
				
				case 0x00000070:
					*uParam2 = 0x0000151D;
					break;
				
				case 0x00000071:
					*uParam2 = 0x0000151E;
					break;
				
				case 0x00000072:
					*uParam2 = 0x0000151F;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001520;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001521;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001522;
					break;
				
				case 0x00000076:
					*uParam2 = 0x00001523;
					break;
				
				case 0x00000077:
					*uParam2 = 0x00001524;
					break;
				
				case 0x00000078:
					*uParam2 = 0x00001525;
					break;
				
				case 0x00000079:
					*uParam2 = 0x00001526;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x00001527;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x00001528;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017EA;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017EB;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017EC;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017ED;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017EE;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017EF;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017F0;
					break;
				
				case 0x00000083:
					*uParam2 = 0x000017F1;
					break;
				
				case 0x00000084:
					*uParam2 = 0x000017F2;
					break;
				
				case 0x00000085:
					*uParam2 = 0x000017F3;
					break;
				
				case 0x00000086:
					*uParam2 = 0x000017F4;
					break;
				
				case 0x00000087:
					*uParam2 = 0x000017F5;
					break;
				
				case 0x00000088:
					*uParam2 = 0x000017F6;
					break;
				
				case 0x00000089:
					*uParam2 = 0x000017F7;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x000017F8;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001923;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001924;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001925;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001926;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001927;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001928;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001929;
					break;
				
				case 0x00000092:
					*uParam2 = 0x0000192A;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000192B;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000192C;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000192D;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000192E;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000192F;
					break;
				
				case 0x00000098:
					*uParam2 = 0x00001930;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001931;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C62;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C63;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C64;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C65;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C66;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C67;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C68;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001EC7;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001EC8;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001EC9;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ECA;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001ECB;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001ECC;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001ECD;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001ECE;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001ECF;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001ED0;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001ED1;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001ED2;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001ED3;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001ED4;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001ED5;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x0000206B;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x0000206C;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x0000206D;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x0000206E;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x0000206F;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002070;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x00002071;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x00002072;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x00002073;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x00002074;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x00002075;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x00002076;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002077;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002078;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002079;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x0000207A;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x0000207B;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x0000207C;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x0000207D;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x0000207E;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x0000207F;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002080;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x00002081;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x00002082;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x00002083;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022E8;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022E9;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EA;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022EB;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022EC;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024CB;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024CC;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024CD;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024CE;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024CF;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024D0;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024D1;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024D2;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024D3;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024D4;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024D5;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024D6;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024D7;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024D8;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024D9;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024DA;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024DB;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024DC;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024DD;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024DE;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024DF;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024E0;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024E1;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024E2;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024E3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006E5;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E6;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E7;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E8;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E9;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006F2;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006F3;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006F4;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006F5;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006F6;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F7;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F8;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006FB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FC;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x00000761;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000762;
					break;
				
				case 0x00000011:
					*uParam2 = 0x00000780;
					break;
				
				case 0x00000012:
					*uParam2 = 0x00000792;
					break;
				
				case 0x00000013:
					*uParam2 = 0x00000793;
					break;
				
				case 0x00000014:
					*uParam2 = 0x00000794;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000795;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000796;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007FB;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FC;
					break;
				
				case 0x00000019:
					*uParam2 = 0x0000081E;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x0000081F;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000820;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000821;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000822;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000823;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x00000824;
					break;
				
				case 0x00000020:
					*uParam2 = 0x00000825;
					break;
				
				case 0x00000021:
					*uParam2 = 0x00000826;
					break;
				
				case 0x00000022:
					*uParam2 = 0x00000827;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000916;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000917;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000959;
					break;
				
				case 0x00000026:
					*uParam2 = 0x0000095A;
					break;
				
				case 0x00000027:
					*uParam2 = 0x0000095B;
					break;
				
				case 0x00000028:
					*uParam2 = 0x0000095C;
					break;
				
				case 0x00000029:
					*uParam2 = 0x0000099D;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x0000099E;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x0000099F;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x000009A0;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x000009A1;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x000009A2;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x000009A3;
					break;
				
				case 0x00000030:
					*uParam2 = 0x000009A4;
					break;
				
				case 0x00000031:
					*uParam2 = 0x000009A5;
					break;
				
				case 0x00000032:
					*uParam2 = 0x000009A6;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A28;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A29;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A2A;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A2B;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A2C;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A2D;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A2E;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A2F;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A30;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A31;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A32;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C82;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C83;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C84;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C85;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C86;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C87;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E5F;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E60;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E61;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E62;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E63;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E64;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E65;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E66;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E67;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E68;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED8;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED9;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000EDA;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000EDB;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000EDC;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000EDD;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000EDE;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000EDF;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F41;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F42;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F43;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014E5;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014E6;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014E7;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014E8;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014E9;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014EA;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014EB;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014EC;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014ED;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014EE;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014EF;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014F0;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001529;
					break;
				
				case 0x00000066:
					*uParam2 = 0x0000152A;
					break;
				
				case 0x00000067:
					*uParam2 = 0x0000152B;
					break;
				
				case 0x00000068:
					*uParam2 = 0x0000152C;
					break;
				
				case 0x00000069:
					*uParam2 = 0x0000152D;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x0000152E;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x0000152F;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001530;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x00001531;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x00001532;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x00001533;
					break;
				
				case 0x00000070:
					*uParam2 = 0x00001534;
					break;
				
				case 0x00000071:
					*uParam2 = 0x00001535;
					break;
				
				case 0x00000072:
					*uParam2 = 0x00001536;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001537;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001538;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001539;
					break;
				
				case 0x00000076:
					*uParam2 = 0x0000153A;
					break;
				
				case 0x00000077:
					*uParam2 = 0x0000153B;
					break;
				
				case 0x00000078:
					*uParam2 = 0x0000153C;
					break;
				
				case 0x00000079:
					*uParam2 = 0x0000153D;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x0000153E;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x0000153F;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017F9;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017FA;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017FB;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017FC;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017FD;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017FE;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017FF;
					break;
				
				case 0x00000083:
					*uParam2 = 0x00001800;
					break;
				
				case 0x00000084:
					*uParam2 = 0x00001801;
					break;
				
				case 0x00000085:
					*uParam2 = 0x00001802;
					break;
				
				case 0x00000086:
					*uParam2 = 0x00001803;
					break;
				
				case 0x00000087:
					*uParam2 = 0x00001804;
					break;
				
				case 0x00000088:
					*uParam2 = 0x00001805;
					break;
				
				case 0x00000089:
					*uParam2 = 0x00001806;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x00001807;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001932;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001933;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001934;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001935;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001936;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001937;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001938;
					break;
				
				case 0x00000092:
					*uParam2 = 0x00001939;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000193A;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000193B;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000193C;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000193D;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000193E;
					break;
				
				case 0x00000098:
					*uParam2 = 0x0000193F;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001940;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C69;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C6A;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C6B;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C6C;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C6D;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C6E;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C6F;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001ED6;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001ED7;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001ED8;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ED9;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001EDA;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001EDB;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001EDC;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001EDD;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001EDE;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001EDF;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001EE0;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001EE1;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001EE2;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001EE3;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001EE4;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x00002084;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x00002085;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x00002086;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x00002087;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x00002088;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002089;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x0000208A;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x0000208B;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x0000208C;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x0000208D;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x0000208E;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x0000208F;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002090;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002091;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002092;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x00002093;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x00002094;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x00002095;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x00002096;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x00002097;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x00002098;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002099;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x0000209A;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x0000209B;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x0000209C;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022ED;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022EE;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EF;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022F0;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022F1;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024E4;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024E5;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024E6;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024E7;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024E8;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024E9;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024EA;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024EB;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024EC;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024ED;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024EE;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024EF;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024F0;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024F1;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024F2;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024F3;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024F4;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024F5;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024F6;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024F7;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024F8;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024F9;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024FA;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024FB;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024FC;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 0x00000020);
	return *uParam2 != 0x00002CF7;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000000;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0x00000000)
	{
		return;
	}
	iVar1 = Global_12A92[0x00000000 /*14*/].f_5;
	if (iParam0 == 0x0000000C)
	{
		iVar4 = 0x00000000;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0x00000000);
		iVar3 = 0x00000000;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_72(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0x00000000, 0x00000000, Var2.f_2, 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000001);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		func_72(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, "NO_LABEL", 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001);
	}
	else if (iParam0 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0x00000000;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar8 = 0x00000000;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0x00000000)
					{
						iVar7 = 0x00000009;
					}
					else if (Var6.f_6 == 0x00000001)
					{
						iVar7 = 0x0000000A;
					}
					else if (Var6.f_6 == 0x00000002)
					{
						iVar7 = 0x00000002;
					}
					else if (Var6.f_6 == 0x00000003)
					{
						iVar7 = 0x00000003;
					}
					else if (Var6.f_6 == 0x00000004)
					{
						iVar7 = 0x00000004;
					}
					else if (Var6.f_6 == 0x00000005)
					{
						iVar7 = 0x00000005;
					}
					else if (Var6.f_6 == 0x00000006)
					{
						iVar7 = 0x00000006;
					}
					else if (Var6.f_6 == 0x00000007)
					{
						iVar7 = 0x00000007;
					}
					else if (Var6.f_6 == 0x00000008)
					{
						iVar7 = 0x00000008;
					}
					else
					{
						iVar7 = 0xFFFFFFFF;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_72(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, 0x85C5D476, 0x00000000), iVar7, 0x00000002, Var6.f_1 != 0x00000000);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != 0xFFFFFFFF && Global_12B3B)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_72(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
			return;
		}
		iVar13 = 0x00000000;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_50(iParam0));
		iVar12 = 0x00000000;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_72(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_84(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_85(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000077;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008B;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000095;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_86(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_87(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_88(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_89(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000021, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_90(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000011, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_91(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000012, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_92(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_93(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000048;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000054, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000068, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_95(int iParam0)
{
	if (iParam0 < 0x00000088)
	{
		func_97(iParam0);
	}
	else
	{
		func_96(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_83(0x00000003, iParam0, 0x000000F2, 0xFFFFFFFF);
	}
}

void func_96(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000031;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000008;
			iVar1 = 0x000003A1;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000352;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000044C;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x000004B0;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x000004C4;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000514;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000550;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002A;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002C;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002E;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000034;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000AA0;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000CB2;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000B86;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C1C;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C4E;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000CA8;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000D16;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000D48;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000CD0;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_97(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000018;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001A;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000015E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000172;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000008;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000028;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_98(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_99(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_118(iParam1);
			break;
		
		case 0x00000002:
			func_117(iParam1);
			break;
		
		case 0x00000003:
			func_113(iParam1);
			break;
		
		case 0x00000004:
			func_112(iParam1);
			break;
		
		case 0x00000006:
			func_111(iParam1);
			break;
		
		case 0x00000005:
			func_110(iParam1);
			break;
		
		case 0x00000008:
			func_109(iParam1);
			break;
		
		case 0x00000009:
			func_108(iParam1);
			break;
		
		case 0x0000000A:
			func_107(iParam1);
			break;
		
		case 0x00000001:
			func_106(iParam1);
			break;
		
		case 0x00000007:
			func_105(iParam1);
			break;
		
		case 0x0000000B:
			func_104(iParam1);
			break;
		
		case 0x0000000C:
			func_103(iParam1);
			break;
		
		case 0x0000000D:
			func_102(iParam1);
			break;
		
		case 0x0000000E:
			func_101(iParam1);
			break;
	}
}

void func_101(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x000011EE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x00001004;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F0A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x00001482;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x000013BA;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x000009C4;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x0000079E;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F3C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000DDE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00001194;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000B86;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000070;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000073;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000007D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C6;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000DC;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000D0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x000000A0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x000000AF, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_102(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_103(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000122A;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001388;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000002F, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_104(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000031;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000003F, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_107(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_108(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000000C, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_109(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000004D, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_110(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_111(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000EB;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000086, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_112(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008C;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000094;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000009A;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000009E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000084;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000094;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000022;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000024;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000020;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000075, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_113(int iParam0)
{
	if (iParam0 < 0x0000006B)
	{
		func_116(iParam0);
	}
	else if (iParam0 < 0x000000E3)
	{
		func_115(iParam0);
	}
	else
	{
		func_114(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_83(0x00000003, iParam0, 0x0000013E, 0xFFFFFFFF);
	}
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F2:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F3:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F4:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F5:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F6:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F7:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F8:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F9:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FA:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FB:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FC:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FD:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FE:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FF:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000100:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000101:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000102:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000103:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000104:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000105:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000106:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000107:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000108:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000109:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010A:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010B:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000010C:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000010D:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000010E:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000010F:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000110:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000111:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000112:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000113:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000114:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000115:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000116:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000117:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000118:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000119:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000011A:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000011B:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000011C:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000011D:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000118;
			break;
		
		case 0x0000011E:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000113;
			break;
		
		case 0x0000011F:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000120:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000121:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000122:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000123:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000127;
			break;
		
		case 0x00000124:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000125:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000126:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000127:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000128:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x000006D6;
			break;
		
		case 0x00000129:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000780;
			break;
		
		case 0x0000012A:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000012B:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x0000012C:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x000006D6;
			break;
		
		case 0x0000012D:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x000007C6;
			break;
		
		case 0x0000012E:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000012F:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000130:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000008;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000131:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000009;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000132:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000133:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000B;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000134:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000C;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000135:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000136:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000137:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000138:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004F;
			break;
		
		case 0x00000139:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004F;
			break;
		
		case 0x0000013A:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000005;
			iVar1 = 0x00000059;
			break;
		
		case 0x0000013B:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013C:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013D:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000008;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_115(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000190;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000023A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x000001D6;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000C;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000208;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000104;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000000DC;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000104;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C1C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000AF0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000BB8;
			iVar6 = 0x00000003;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_116(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000012;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000017;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001A;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x00000018;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000008B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003B;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_117(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000015, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_118(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_136(iParam1);
			break;
		
		case 0x00000002:
			func_135(iParam1);
			break;
		
		case 0x00000003:
			func_132(iParam1);
			break;
		
		case 0x00000004:
			func_131(iParam1);
			break;
		
		case 0x00000006:
			func_130(iParam1);
			break;
		
		case 0x00000005:
			func_129(iParam1);
			break;
		
		case 0x00000008:
			func_128(iParam1);
			break;
		
		case 0x00000009:
			func_127(iParam1);
			break;
		
		case 0x0000000A:
			func_126(iParam1);
			break;
		
		case 0x00000001:
			func_125(iParam1);
			break;
		
		case 0x00000007:
			func_124(iParam1);
			break;
		
		case 0x0000000B:
			func_123(iParam1);
			break;
		
		case 0x0000000C:
			func_122(iParam1);
			break;
		
		case 0x0000000D:
			func_121(iParam1);
			break;
		
		case 0x0000000E:
			func_120(iParam1);
			break;
	}
}

void func_120(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x0000000B;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000038;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000046;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000052;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000EB;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000F5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000113;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000127;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000B3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000E1;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_121(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_122(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000F3C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x000011F8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_123(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000003D4;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000041A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000044C;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000076C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x000007BC;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000834;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x00000848;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007D0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			iVar1 = 0x000008E8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			iVar1 = 0x000008FC;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000092E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			iVar1 = 0x000008E8;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000002D, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_126(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_127(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000014, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000018, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x0000000E, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000299;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000026C;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000244;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000040;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x00000038;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000048;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000063, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000036B;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002E;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_132(int iParam0)
{
	if (iParam0 < 0x0000003C)
	{
		func_134(iParam0);
	}
	else
	{
		func_133(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_83(0x00000003, iParam0, 0x000000B5, 0xFFFFFFFF);
	}
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x000000BE;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000000D2;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000031;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00001356;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00001063;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C7B;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000B86;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000546;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000578;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x000004B0;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000546;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000514;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000564;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x0000053C;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000564;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000082;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000140;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000DAC;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000D2;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000D;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000136;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000003A;
			break;
		
		default:
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_83(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_72(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_137()
{
	Global_12A92[0x00000000 /*14*/].f_1 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_2 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_5 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_3 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_4 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_6 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_D = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_C = 0x00000000;
	Global_12A92[0x00000000 /*14*/] = 0x00000000;
	StringCopy(&(Global_12A92[0x00000000 /*14*/].f_8), "NO_LABEL", 16);
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == 0xFFFFFF9D)
	{
		return 0x00000000;
	}
	Global_12A90++;
	iVar5 = 0xFFFFFF9D;
	iVar6 = 0xFFFFFF9D;
	iVar7 = 0xFFFFFF9D;
	iVar8 = 0xFFFFFF9D;
	iVar9 = 0xFFFFFF9D;
	iVar10 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam5 == 0x00000000)
	{
		Global_12A92[0x00000001 /*14*/] = { func_69(iVar10, iParam1, iParam2, 0xFFFFFFFF) };
		if (!func_164(iParam3))
		{
			Global_12A90 = (Global_12A90 - 0x00000001);
			return 0x00000000;
		}
		func_161(iParam1);
	}
	if (iParam1 == 0x0000000C)
	{
		if (iParam7 == 0x00000001)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_51(iParam0, 0x00000008);
				if (iVar5 != 0x00000009)
				{
					iVar5 = 0xFFFFFF9D;
				}
			}
			iVar6 = func_51(iParam0, 0x00000009);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 0x00000009 && iVar6 <= 0x0000000E)
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 0x00000005 && iVar6 <= 0x0000000A)
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 0x00000009 && iVar6 <= 0x0000000E) || (iVar6 >= 0x0000000F && iVar6 <= 0x00000010))
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			iVar7 = func_160(iParam0, 0x00000001);
			if (!func_59(iVar10, 0x0000000E, iVar7, 0xFFFFFFFF))
			{
				iVar7 = 0xFFFFFF9D;
			}
			iVar8 = func_160(iParam0, 0x00000000);
			if (!func_58(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF) && !func_54(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF))
			{
				iVar8 = 0xFFFFFF9D;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_160(iParam0, 0x00000002);
			}
		}
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar11 = 0x0000000F;
		if (iParam5 == 0x00000001)
		{
			uVar11 = { Global_12ABD };
		}
		else
		{
			uVar11 = { func_65(iVar10, iParam2) };
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000E)
		{
			if (uVar11[iVar0] != 0xFFFFFF9D)
			{
				Global_12A92[0x00000001 /*14*/] = { func_69(iVar10, iVar0, uVar11[iVar0], 0xFFFFFFFF) };
				if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
				{
					if (iVar0 == 0x0000000D)
					{
						uVar12 = 0x00000009;
						if (iParam5 == 0x00000001)
						{
							uVar12 = { Global_12ACE };
						}
						else
						{
							uVar12 = { func_61(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0x00000000;
						while (iVar1 <= 0x00000008)
						{
							Global_12A92[0x00000001 /*14*/] = { func_69(iVar10, 0x0000000E, uVar12[iVar1], 0xFFFFFFFF) };
							func_155(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
							func_161(0x0000000E);
							if (Global_12A90 == 0x00000001)
							{
								iVar2 = 0x00000000;
								while (iVar2 < 0x0000000F)
								{
									iVar3 = func_147(iParam0, iVar10, 0x0000000E, uVar12[iVar1], iVar2, 0x00000000);
									if (iVar3 != 0xFFFFFF9D)
									{
										func_138(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 0x0000000E && iVar0 != 0x0000000C)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 0x00000002) && uVar11[iVar0] == 0x00000014)
						{
							func_146(iVar10, 0x00000002, 0x00000014, &iVar4);
						}
						if (iParam4 == 0xFFFFFFFF)
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_50(iVar0), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_50(iVar0)));
						}
						else
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_50(iVar0), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, iParam4);
						}
						func_161(iVar0);
						if (Global_12A90 == 0x00000001)
						{
							iVar2 = 0x00000000;
							while (iVar2 < 0x0000000F)
							{
								iVar3 = func_147(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0x00000000);
								if (iVar3 != 0xFFFFFF9D)
								{
									func_138(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 0x0000000C && iVar0 != 0x0000000E)
			{
				Global_12A92[0x00000001 /*14*/] = { func_69(iVar10, iVar0, func_145(iParam0, iVar0, 0xFFFFFFFF), 0xFFFFFFFF) };
				if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000003))
				{
					if (iVar0 == 0x00000002)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_144(iParam0, iVar10, &iVar4, 0x00000001))
							{
								func_138(iParam0, 0x00000002, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					else
					{
						uVar13 = { func_65(iVar10, 0x00000000) };
						func_138(iParam0, iVar0, uVar13[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 0x00000001)
		{
			Var14 = { func_69(iVar10, 0x00000008, iVar5, 0xFFFFFFFF) };
			if (iVar5 != 0xFFFFFF9D)
			{
				if (func_53(iVar10, iParam2, 0x00000008, iVar5, &uVar11, &Var14))
				{
					func_138(iParam0, 0x00000008, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_69(iVar10, 0x00000009, iVar6, 0xFFFFFFFF) };
			if (iVar6 != 0xFFFFFF9D)
			{
				if (func_53(iVar10, iParam2, 0x00000009, iVar6, &uVar11, &Var14))
				{
					func_138(iParam0, 0x00000009, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_69(iVar10, 0x0000000E, iVar7, 0xFFFFFFFF) };
			if (iVar7 != 0xFFFFFF9D)
			{
				if (func_53(iVar10, iParam2, 0x0000000E, iVar7, &uVar11, &Var14))
				{
					func_138(iParam0, 0x0000000E, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_69(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF) };
			if (iVar8 != 0xFFFFFF9D)
			{
				if (func_53(iVar10, iParam2, 0x0000000E, iVar8, &uVar11, &Var14))
				{
					func_138(iParam0, 0x0000000E, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_69(iVar10, 0x0000000E, iVar9, 0xFFFFFFFF) };
			if (iVar9 != 0xFFFFFF9D)
			{
				if (func_53(iVar10, iParam2, 0x0000000E, iVar9, &uVar11, &Var14))
				{
					func_138(iParam0, 0x0000000E, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
		}
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar15 = { func_61(iVar10, iParam2) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			Global_12A92[0x00000001 /*14*/] = { func_69(iVar10, 0x0000000E, uVar15[iVar1], 0xFFFFFFFF) };
			func_155(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
			func_161(0x0000000E);
			if (Global_12A90 == 0x00000001)
			{
				iVar2 = 0x00000000;
				while (iVar2 < 0x0000000F)
				{
					iVar3 = func_147(iParam0, iVar10, 0x0000000E, uVar15[iVar1], iVar2, 0x00000000);
					if (iVar3 != 0xFFFFFF9D)
					{
						func_138(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 0x0000000E)
	{
		func_155(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
		func_161(iParam1);
		if (Global_12A90 == 0x00000001)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000F)
			{
				iVar3 = func_147(iParam0, iVar10, iParam1, iParam2, iVar2, 0x00000000);
				if (iVar3 != 0xFFFFFF9D)
				{
					func_138(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_50(iParam1), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_50(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_50(iParam1), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, iParam4);
		}
		if (Global_12A90 == 0x00000001)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000F)
			{
				iVar3 = func_147(iParam0, iVar10, iParam1, iParam2, iVar2, 0x00000000);
				if (iVar3 != 0xFFFFFF9D)
				{
					func_138(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0x00000000)
		{
			func_141(iVar10, iParam1, iParam2);
		}
	}
	if (Global_12A90 == 0x00000001)
	{
		if (func_144(iParam0, iVar10, &iVar4, 0x00000000))
		{
			func_138(iParam0, 0x00000002, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
		if (func_139(iParam0, iVar10, &iVar4))
		{
			func_138(iParam0, 0x00000001, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	Global_12A90 = (Global_12A90 - 0x00000001);
	return 0x00000001;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_140(iParam1);
	if (Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F != 0xFFFFFF9D)
	{
		if (!func_49(iParam0, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F = 0xFFFFFF9D;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000000;
			break;
		
		case joaat("player_one"):
			return 0x00000001;
			break;
		
		case joaat("player_two"):
			return 0x00000002;
			break;
		
		default:
			break;
	}
	return 0x00000091;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 0x00000005;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 0x00000002;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 0x00000004;
	}
	if (func_143(iParam0, 0x0000000C, iVar0))
	{
		if (func_142(iParam0, iParam1, iParam2))
		{
			iVar1 = func_140(iParam0);
			if (iParam1 == 0x00000003)
			{
				Global_1B416.f_936.f_21B.f_C4[iVar1] = iParam2;
			}
			else if (iParam1 == 0x00000004)
			{
				Global_1B416.f_936.f_21B.f_C8[iVar1] = iParam2;
			}
		}
	}
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x0000002F && iParam2 <= 0x00000036)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x0000004D && iParam2 <= 0x00000054)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x0000000E && iParam2 <= 0x00000015)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x00000012 && iParam2 <= 0x0000001D)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x00000036 && iParam2 <= 0x00000045)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_143(int iParam0, int iParam1, int iParam2)
{
	Global_12A92[0x00000001 /*14*/] = { func_69(iParam0, iParam1, iParam2, 0xFFFFFFFF) };
	return unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000002);
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_140(iParam1);
	if (Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C != 0xFFFFFF9D)
	{
		if (!func_49(iParam0, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 0x00000001)
		{
			*iParam2 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C = 0xFFFFFF9D;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D = 0x00000002;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 == 0x0000000C)
		{
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000035)
			{
				if (func_49(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 0x0000000D)
		{
			iVar1 = 0x00000000;
			while (iVar1 <= 0x00000013)
			{
				if (func_49(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 0x0000001F;
		}
		else if (iParam1 == 0x0000000E)
		{
			if (iParam2 == 0xFFFFFFFF)
			{
			}
			else
			{
				return func_160(iParam0, iParam2);
			}
		}
		else
		{
			return func_51(iParam0, iParam1);
		}
	}
	return 0xFFFFFF9D;
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000007 || iParam2 == 0x00000017)
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E))
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000002C && iParam2 <= 0x0000002F)
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x0000000E:
					if ((((((iParam2 >= 0x0000001F && iParam2 <= 0x00000020) || (iParam2 >= 0x00000021 && iParam2 <= 0x00000022)) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024)) || iParam2 == 0x00000025) || (iParam2 >= 0x00000028 && iParam2 <= 0x00000029)) || iParam2 == 0x0000002E)
					{
						*iParam3 = 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000002:
					if (iParam2 == 0x00000014)
					{
						*iParam3 = 0x00000014;
					}
					break;
				
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x00000009:
					if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000002F && iParam2 <= 0x00000032)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x0000000E:
					if (((((iParam2 >= 0x0000001A && iParam2 <= 0x0000001B) || (iParam2 >= 0x0000001C && iParam2 <= 0x0000001D)) || (iParam2 >= 0x0000001E && iParam2 <= 0x0000001F)) || iParam2 == 0x00000020) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024))
					{
						*iParam3 = 0x00000013;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000007)
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x00000009:
					if ((iParam2 >= 0x00000009 && iParam2 <= 0x0000000E) || (iParam2 >= 0x0000000F && iParam2 <= 0x00000010))
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000001D && iParam2 <= 0x00000020)
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x0000000E:
					if ((((((iParam2 >= 0x0000002F && iParam2 <= 0x00000030) || (iParam2 >= 0x00000031 && iParam2 <= 0x00000032)) || (iParam2 >= 0x00000033 && iParam2 <= 0x00000034)) || iParam2 == 0x00000035) || (iParam2 >= 0x00000038 && iParam2 <= 0x00000039)) || iParam2 == 0x0000003E)
					{
						*iParam3 = 0x00000002;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 0xFFFFFF9D)
	{
		iVar0 = func_140(iParam0);
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = 0xFFFFFF9D;
	if (iParam4 == 0x00000000)
	{
		switch (iParam2)
		{
			case 0x00000002:
				iVar1 = func_51(iParam0, 0x00000001);
				iVar0 = func_154(iParam1, iParam3, iVar1);
				break;
			
			case 0x00000001:
				iVar2 = func_51(iParam0, 0x00000002);
				iVar0 = func_154(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 0x00000002)
	{
		func_146(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 0x00000001)
	{
		func_153(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 0x00000006)
	{
		if (iParam2 == 0x00000004)
		{
			if (func_152(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 0x00000003:
						switch (iParam2)
						{
							case 0x0000000A:
								switch (iParam3)
								{
									case 0x00000024:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000025:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000026:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000027:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000028:
										iVar0 = 0x00000013;
										break;
									
									case 0x00000029:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000002A:
										iVar0 = 0x00000014;
										break;
									
									case 0x0000002B:
										iVar0 = 0x00000014;
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 >= 0x00000002 && iParam3 <= 0x00000007)
								{
									if (!func_151(iParam0, 0x00000003, 0x0000002C, 0x0000003B))
									{
										iVar0 = 0x0000002C;
									}
								}
								else if (((iParam3 >= 0x00000008 && iParam3 <= 0x00000011) || (iParam3 >= 0x00000012 && iParam3 <= 0x0000001B)) || (iParam3 >= 0x0000001C && iParam3 <= 0x0000002B))
								{
									if (!func_151(iParam0, 0x00000003, 0x00000087, 0x00000096))
									{
										iVar0 = func_150(iParam1, 0x00000003, 0x00000087, 0x00000096);
									}
								}
								break;
						}
						break;
					
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x0000003F:
										iVar0 = 0x00000004;
										break;
									
									case 0x0000003D:
										iVar0 = 0x00000003;
										break;
									
									case 0x00000010:
										iVar0 = 0x00000001;
										break;
									
									case 0x00000072:
										iVar0 = 0x0000000F;
										break;
									
									case 0x00000073:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000074:
										iVar0 = 0x00000010;
										break;
									
									case 0x00000075:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000076:
										iVar0 = 0x00000014;
										break;
									
									case 0x00000077:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000007D:
										iVar0 = 0x00000015;
										break;
									
									case 0x00000078:
										iVar0 = 0x00000016;
										break;
									
									case 0x0000007C:
										iVar0 = 0x00000017;
										break;
									
									case 0x0000007E:
										iVar0 = 0x00000018;
										break;
									
									case 0x00000079:
										iVar0 = 0x00000019;
										break;
									
									case 0x0000007F:
										iVar0 = 0x0000001A;
										break;
									
									case 0x00000080:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000055:
										iVar0 = 0x00000006;
										break;
									
									case 0x0000004D:
										iVar0 = 0x00000007;
										break;
									
									case 0x0000004E:
										iVar0 = 0x00000008;
										break;
									
									case 0x0000004F:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000050:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000051:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000052:
										iVar0 = 0x0000000C;
										break;
									
									case 0x00000053:
										iVar0 = 0x0000000D;
										break;
									
									case 0x00000054:
										iVar0 = 0x0000000E;
										break;
									
									case 0x00000015:
										iVar0 = 0x0000001F;
										break;
									
									case 0x00000016:
										iVar0 = 0x0000001E;
										break;
									
									case 0x00000017:
										iVar0 = 0x0000001D;
										break;
									
									case 0x00000018:
										iVar0 = 0x0000001C;
										break;
									
									case 0x00000019:
										iVar0 = 0x00000021;
										break;
									
									case 0x0000001A:
										iVar0 = 0x00000023;
										break;
									
									case 0x0000001B:
										iVar0 = 0x00000022;
										break;
									
									case 0x0000001C:
										iVar0 = 0x00000020;
										break;
									
									default:
										if (iParam3 >= 0x00000011 && iParam3 <= 0x00000014)
										{
										}
										else
										{
											iVar0 = 0x00000000;
										}
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 != 0x00000000)
								{
									iVar0 = 0x00000000;
								}
								break;
						}
						break;
					
					case 0x0000000B:
						if (iParam2 == 0x00000003)
						{
							if ((iParam3 >= 0x0000002C && iParam3 <= 0x0000003B) || (iParam3 >= 0x00000087 && iParam3 <= 0x00000096))
							{
							}
							else
							{
								iVar0 = 0x00000000;
							}
						}
						else if (iParam2 == 0x0000000A)
						{
							if (iParam3 >= 0x00000024 && iParam3 <= 0x0000002B)
							{
								iVar0 = 0x00000000;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x00000011:
										iVar0 = 0x00000002;
										break;
									
									case 0x0000005A:
										iVar0 = 0x00000001;
										break;
									
									case 0x0000010C:
										iVar0 = 0x00000003;
										break;
									
									case 0x0000010D:
										iVar0 = 0x00000005;
										break;
									
									case 0x0000010E:
										iVar0 = 0x00000004;
										break;
									
									case 0x0000010F:
										iVar0 = 0x00000006;
										break;
									
									case 0x00000110:
										iVar0 = 0x00000008;
										break;
									
									case 0x00000111:
										iVar0 = 0x00000007;
										break;
									
									case 0x00000117:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000112:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000116:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000118:
										iVar0 = 0x0000000C;
										break;
									
									case 0x00000113:
										iVar0 = 0x0000000D;
										break;
									
									case 0x00000119:
										iVar0 = 0x0000000E;
										break;
									
									case 0x0000011A:
										iVar0 = 0x0000000F;
										break;
									
									case 0x0000006B:
										iVar0 = 0x00000010;
										break;
									
									case 0x0000006C:
										iVar0 = 0x00000011;
										break;
									
									case 0x0000006D:
										iVar0 = 0x00000012;
										break;
									
									case 0x0000006E:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000006F:
										iVar0 = 0x00000014;
										break;
									
									case 0x00000070:
										iVar0 = 0x00000015;
										break;
									
									case 0x00000071:
										iVar0 = 0x00000016;
										break;
									
									case 0x00000072:
										iVar0 = 0x00000017;
										break;
									
									case 0x00000073:
										iVar0 = 0x00000018;
										break;
									
									case 0x00000074:
										iVar0 = 0x00000019;
										break;
									
									case 0x00000075:
										iVar0 = 0x00000034;
										break;
									
									case 0x00000076:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000077:
										iVar0 = 0x0000001C;
										break;
									
									case 0x00000078:
										iVar0 = 0x0000001D;
										break;
									
									case 0x00000079:
										iVar0 = 0x0000001E;
										break;
									
									case 0x0000007A:
										iVar0 = 0x0000001F;
										break;
									
									case 0x00000128:
										iVar0 = 0x00000020;
										break;
									
									case 0x00000129:
										iVar0 = 0x00000021;
										break;
									
									case 0x0000012A:
										iVar0 = 0x00000022;
										break;
									
									case 0x0000012B:
										iVar0 = 0x00000023;
										break;
									
									case 0x0000012C:
										iVar0 = 0x00000024;
										break;
									
									case 0x0000012D:
										iVar0 = 0x00000025;
										break;
									
									case 0x0000012E:
										iVar0 = 0x00000026;
										break;
									
									case 0x00000135:
										iVar0 = 0x00000027;
										break;
									
									case 0x00000136:
										iVar0 = 0x00000028;
										break;
									
									case 0x00000137:
										iVar0 = 0x00000029;
										break;
									
									case 0x00000138:
										iVar0 = 0x0000002A;
										break;
									
									case 0x00000139:
										iVar0 = 0x0000002B;
										break;
									
									case 0x0000013A:
										iVar0 = 0x0000002C;
										break;
									
									case 0x0000013B:
										iVar0 = 0x0000002D;
										break;
									
									case 0x0000013C:
										iVar0 = 0x0000002E;
										break;
									
									case 0x0000013D:
										iVar0 = 0x00000033;
										break;
									
									default:
										iVar0 = 0x00000000;
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 != 0x00000000)
								{
									iVar0 = 0x00000000;
								}
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam2)
						{
							case 0x0000000B:
								if (iParam3 >= 0x0000002F && iParam3 <= 0x0000003E)
								{
									if (!func_151(iParam0, 0x00000003, 0x000000D1, 0x000000DE))
									{
										iVar0 = func_150(iParam1, 0x00000003, 0x000000D1, 0x000000DE);
									}
								}
								else if ((iParam3 >= 0x00000001 && iParam3 <= 0x00000004) || (iParam3 >= 0x00000005 && iParam3 <= 0x00000008))
								{
									if (!func_151(iParam0, 0x00000003, 0x000000F3, 0x00000102))
									{
										if (iParam3 == 0x00000001 || iParam3 == 0x00000005)
										{
											iVar0 = func_150(iParam1, 0x00000003, 0x000000F3, 0x000000F6);
										}
										else if (iParam3 == 0x00000002 || iParam3 == 0x00000006)
										{
											iVar0 = func_150(iParam1, 0x00000003, 0x000000F7, 0x000000FA);
										}
										else if (iParam3 == 0x00000003 || iParam3 == 0x00000007)
										{
											iVar0 = func_150(iParam1, 0x00000003, 0x000000FB, 0x000000FE);
										}
										else if (iParam3 == 0x00000004 || iParam3 == 0x00000008)
										{
											iVar0 = func_150(iParam1, 0x00000003, 0x000000FF, 0x00000102);
										}
									}
								}
								else if (iParam3 == 0x00000029 || iParam3 == 0x0000002A)
								{
									if (!func_151(iParam0, 0x00000003, 0x000000B0, 0x000000BF) && !func_151(iParam0, 0x00000003, 0x000000E3, 0x000000F2))
									{
										iVar0 = func_150(iParam1, 0x00000003, 0x000000B0, 0x000000BF);
									}
								}
								break;
						}
						break;
					
					case 0x00000008:
						if (iParam2 == 0x0000000B || iParam2 == 0x00000003)
						{
							if (iParam2 == 0x0000000B)
							{
								iVar5 = iParam3;
								iVar4 = func_51(iParam0, 0x00000003);
							}
							else if (iParam2 == 0x00000003)
							{
								iVar4 = iParam3;
								iVar5 = func_51(iParam0, 0x0000000B);
								iVar5 = func_149(iParam1, iVar4, iVar5, 0x00000000);
							}
							iVar3 = func_51(iParam0, 0x00000008);
							if (((iVar5 >= 0x00000005 && iVar5 <= 0x00000008) || (iVar5 >= 0x00000019 && iVar5 <= 0x00000028)) || (iVar5 >= 0x0000002A && iVar5 <= 0x0000002B))
							{
								if (!func_148(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != 0xFFFFFF9D)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 0x0000001B && iVar3 <= 0x0000002A) || (iVar3 >= 0x0000002B && iVar3 <= 0x0000003A)) || (iVar3 >= 0x0000003B && iVar3 <= 0x0000004A))
							{
								iVar0 = 0x0000001A;
							}
						}
						break;
					
					case 0x0000000B:
						if (iParam2 == 0x00000003)
						{
							if (iParam3 >= 0x000000D1 && iParam3 <= 0x000000DE)
							{
							}
							else if (((iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF) || (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)) || (iParam3 >= 0x000000F3 && iParam3 <= 0x00000102))
							{
								iVar7 = func_51(iParam0, 0x00000008);
								iVar8 = func_51(iParam0, 0x0000000B);
								if (((iVar7 >= 0x0000001B && iVar7 <= 0x0000002A) || (iVar7 >= 0x0000002B && iVar7 <= 0x0000003A)) || (iVar7 >= 0x0000003B && iVar7 <= 0x0000004A))
								{
									iVar0 = func_149(iParam1, iParam3, iVar8, 0x00000000);
								}
								else
								{
									iVar0 = func_149(iParam1, iParam3, iVar8, 0x00000001);
								}
							}
							else if (iParam3 >= 0x00000029 && iParam3 <= 0x00000038)
							{
								iVar0 = 0x0000002D;
							}
							else if (iParam3 >= 0x000000DF && iParam3 <= 0x000000E2)
							{
								iVar0 = 0x0000002C;
							}
							else
							{
								iVar0 = 0x00000000;
							}
						}
						else if (iParam2 == 0x00000008)
						{
							if (((iParam3 >= 0x0000001B && iParam3 <= 0x0000002A) || (iParam3 >= 0x0000002B && iParam3 <= 0x0000003A)) || (iParam3 >= 0x0000003B && iParam3 <= 0x0000004A))
							{
								iVar9 = func_51(iParam0, 0x0000000B);
								iVar0 = func_149(iParam1, 0xFFFFFF9D, iVar9, 0x00000000);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x00000032:
										iVar0 = 0x00000003;
										break;
									
									case 0x00000051:
										iVar0 = 0x00000005;
										break;
									
									case 0x00000052:
										iVar0 = 0x00000006;
										break;
									
									case 0x00000053:
										iVar0 = 0x00000007;
										break;
									
									case 0x00000054:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000055:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000056:
										iVar0 = 0x00000008;
										break;
									
									case 0x0000005C:
										iVar0 = 0x00000016;
										break;
									
									case 0x00000057:
										iVar0 = 0x00000017;
										break;
									
									case 0x0000005B:
										iVar0 = 0x00000018;
										break;
									
									case 0x0000005D:
										iVar0 = 0x00000019;
										break;
									
									case 0x00000058:
										iVar0 = 0x0000001A;
										break;
									
									case 0x0000005E:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000078:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000079:
										iVar0 = 0x0000000D;
										break;
									
									case 0x0000007A:
										iVar0 = 0x0000000E;
										break;
									
									case 0x0000007C:
										iVar0 = 0x0000000C;
										break;
									
									case 0x0000007E:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000080:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000082:
										iVar0 = 0x00000013;
										break;
									
									case 0x00000083:
										iVar0 = 0x00000010;
										break;
									
									case 0x00000086:
										iVar0 = 0x0000000F;
										break;
									
									case 0x00000087:
										iVar0 = 0x00000014;
										break;
									
									default:
										iVar0 = 0x00000000;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0x00000000;
			if (iParam1 >= 0x0000001B && iParam1 <= 0x0000002A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
					{
					}
					else
					{
						if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
						{
							if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
							{
								iVar0 = (iParam1 - 0x0000001B);
								*uParam4 = (0x0000003B + iVar0);
							}
							else if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
							{
								iVar0 = (iParam1 - 0x0000001B);
								*uParam4 = (0x0000002B + iVar0);
							}
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (((iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2) || (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)) || (iParam3 >= 0x000000F3 && iParam3 <= 0x00000102))
					{
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam1 >= 0x0000002B && iParam1 <= 0x0000003A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
					{
					}
					else
					{
						if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000002B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
					{
					}
					else
					{
						if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
						{
							if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
							{
								iVar0 = (iParam1 - 0x0000002B);
								*uParam4 = (0x0000003B + iVar0);
							}
						}
						return 0x00000000;
					}
				}
			}
			else if (iParam1 >= 0x0000003B && iParam1 <= 0x0000004A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
					{
					}
					else
					{
						if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000003B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
					{
					}
					else
					{
						if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
						{
							if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
							{
								iVar0 = (iParam1 - 0x0000003B);
								*uParam4 = (0x0000002B + iVar0);
							}
						}
						else if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000003B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000C)
			{
				if (iParam3 != 0x000000F1)
				{
					return 0x00000000;
				}
			}
			break;
	}
	return 0x00000001;
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 0x000000F3 && iParam1 <= 0x000000F6)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000005;
		}
	}
	else if (iParam1 >= 0x000000F7 && iParam1 <= 0x000000FA)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000002;
		}
		else
		{
			return 0x00000006;
		}
	}
	else if (iParam1 >= 0x000000FB && iParam1 <= 0x000000FE)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000003;
		}
		else
		{
			return 0x00000007;
		}
	}
	else if (iParam1 >= 0x000000FF && iParam1 <= 0x00000102)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000004;
		}
		else
		{
			return 0x00000008;
		}
	}
	else if (iParam1 >= 0x000000FF && iParam1 <= 0x00000102)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000004;
		}
		else
		{
			return 0x00000008;
		}
	}
	else if ((iParam1 >= 0x000000B0 && iParam1 <= 0x000000BF) || (iParam1 >= 0x000000E3 && iParam1 <= 0x000000F2))
	{
		if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
		{
			if (iParam3 == 0x00000001)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 0x00000009);
				iParam2 = (0x00000019 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
		{
			if (iParam3 == 0x00000001)
			{
				iVar0 = (iParam2 - 0x00000019);
				iParam2 = (0x00000009 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 0x00000029 || iParam2 == 0x0000002A)
		{
			if (iParam3 == 0x00000001)
			{
				return 0x00000029;
			}
			else
			{
				return 0x0000002A;
			}
		}
		else
		{
			if (iParam3 == 0x00000001)
			{
				iParam2 = func_150(iParam0, 0x0000000B, 0x00000009, 0x00000018);
			}
			else
			{
				iParam2 = func_150(iParam0, 0x0000000B, 0x00000019, 0x00000028);
			}
			if (iParam2 == 0xFFFFFF9D)
			{
				if (iParam3 == 0x00000001)
				{
					return 0x00000029;
				}
				else
				{
					return 0x0000002A;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 0x00000001 && iParam2 <= 0x00000004)
	{
		if (iParam3 == 0x00000001)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 0x00000001);
			iParam2 = (0x00000005 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000005 && iParam2 <= 0x00000008)
	{
		if (iParam3 == 0x00000001)
		{
			iVar0 = (iParam2 - 0x00000005);
			iParam2 = (0x00000001 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
	{
		if (iParam3 == 0x00000001)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 0x00000009);
			iParam2 = (0x00000019 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
	{
		if (iParam3 == 0x00000001)
		{
			iVar0 = (iParam2 - 0x00000019);
			iParam2 = (0x00000009 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 0x00000029 || iParam2 == 0x0000002A)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000029;
		}
		else
		{
			return 0x0000002A;
		}
	}
	return 0xFFFFFF9D;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 0x00000001))
	{
		iVar1 = iVar0;
		if (func_143(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0xFFFFFF9D;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_51(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 0x00000010 || iParam1 == 0x00000011) || iParam1 == 0x00000015) || iParam1 == 0x00000016) || iParam1 == 0x00000020) || (iParam1 >= 0x00000022 && iParam1 <= 0x00000027)) || (iParam1 >= 0x00000029 && iParam1 <= 0x0000002D)) || iParam1 == 0x0000002E) || (iParam1 >= 0x0000002F && iParam1 <= 0x00000036)) || (iParam1 >= 0x00000037 && iParam1 <= 0x00000046)) || (iParam1 >= 0x00000048 && iParam1 <= 0x0000004F)) || iParam1 == 0x00000050) || (iParam1 >= 0x00000051 && iParam1 <= 0x00000053)) || (iParam1 >= 0x00000054 && iParam1 <= 0x00000057)) || iParam1 == 0x00000058) || (iParam1 >= 0x00000059 && iParam1 <= 0x0000005B)) || iParam1 == 0x0000005F) || (iParam1 >= 0x00000060 && iParam1 <= 0x0000006F)) || iParam1 == 0x00000070)
			{
				*iParam2 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 0x0000000C || (iParam1 >= 0x0000000E && iParam1 <= 0x00000015)) || iParam1 == 0x00000020) || iParam1 == 0x00000034) || (iParam1 >= 0x00000045 && iParam1 <= 0x00000046)) || iParam1 == 0x00000047) || (iParam1 >= 0x00000048 && iParam1 <= 0x0000004D))
			{
				*iParam2 = 0x00000011;
				return 0x00000001;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 0x00000004 || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000007) || iParam1 == 0x0000000E) || (iParam1 >= 0x00000012 && iParam1 <= 0x0000001D)) || iParam1 == 0x0000001F) || iParam1 == 0x00000020) || iParam1 == 0x00000021) || iParam1 == 0x00000022) || (iParam1 >= 0x00000023 && iParam1 <= 0x0000002A)) || (iParam1 >= 0x0000002B && iParam1 <= 0x00000035)) || (iParam1 >= 0x00000036 && iParam1 <= 0x0000003D)) || (iParam1 >= 0x00000047 && iParam1 <= 0x00000050)) || (iParam1 >= 0x00000051 && iParam1 <= 0x0000005A)) || (iParam1 >= 0x0000005E && iParam1 <= 0x00000067))
			{
				*iParam2 = 0x00000008;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000A:
					if (iParam2 >= 0x0000002C && iParam2 <= 0x0000002F)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((((iParam2 >= 0x0000001F && iParam2 <= 0x00000020) || (iParam2 >= 0x00000021 && iParam2 <= 0x00000022)) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024)) || iParam2 == 0x00000025) || (iParam2 >= 0x00000026 && iParam2 <= 0x00000027)) || (iParam2 >= 0x00000028 && iParam2 <= 0x00000029)) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000A:
					if (iParam2 >= 0x0000002F && iParam2 <= 0x00000032)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((iParam2 >= 0x0000001A && iParam2 <= 0x0000001B) || (iParam2 >= 0x0000001C && iParam2 <= 0x0000001D)) || (iParam2 >= 0x0000001E && iParam2 <= 0x0000001F)) || iParam2 == 0x00000020) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000009:
					if (iParam2 >= 0x0000000F && iParam2 <= 0x00000010)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000001D && iParam2 <= 0x00000020)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((((iParam2 >= 0x0000002F && iParam2 <= 0x00000030) || (iParam2 >= 0x00000031 && iParam2 <= 0x00000032)) || (iParam2 >= 0x00000033 && iParam2 <= 0x00000034)) || iParam2 == 0x00000035) || (iParam2 >= 0x00000036 && iParam2 <= 0x00000037)) || (iParam2 >= 0x00000038 && iParam2 <= 0x00000039)) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 0xFFFFFF9D)
	{
		iVar0 = func_140(iParam0);
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x00000001)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000001;
				}
				else if (iParam2 == 0x00000004)
				{
					return 0x00000005;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000000;
			}
			else if (iParam2 == 0x00000004)
			{
				return 0x00000004;
			}
			else
			{
				return 0x00000002;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0x00000000 && iParam1 <= 0x0000000F)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000000;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam1 >= 0x00000010 && iParam1 <= 0x00000011)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000002;
				}
				else
				{
					return 0x00000005;
				}
			}
			else if (iParam1 == 0x00000012)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000006;
				}
				else
				{
					return 0x00000007;
				}
			}
			else if (iParam1 == 0x00000013)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000004;
				}
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000004;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x00000002)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000002;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam1 == 0x00000003)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000004;
				}
				else
				{
					return 0x00000006;
				}
			}
			else if (iParam1 == 0x00000008)
			{
				return 0x00000005;
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
	}
	return 0xFFFFFF9D;
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, iParam1);
		if (iParam1 == 0x00000000)
		{
			unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000000);
			unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000000);
		}
	}
	else
	{
		unk_0x9A28E8CB86CD4694(iParam0, iParam1, iParam2, iParam3, unk_0x8CD06866876216F2());
		if (iParam1 == 0x00000000)
		{
			iVar0 = func_157(iParam0, iParam2, iParam3, iParam1);
			if (func_156(unk_0x134B62B726CEC8E6(iParam0), 0x0000000E, iVar0, unk_0xD1BC07002824FE76(iParam0, 0x00000000, iParam2, iParam3)))
			{
				unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000001);
				unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000001);
			}
			else
			{
				unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000000);
				unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000000);
			}
		}
	}
}

int func_156(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_55(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					if ((iParam2 >= 0x00000083 && iParam2 <= 0x0000009A) || (iParam2 >= 0x00000147 && unk_0x1A5A491D253EA7BA(iParam3, 0xC2670CD3, 0x00000001)))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_55(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					if ((iParam2 >= 0x00000083 && iParam2 <= 0x0000009A) || (iParam2 >= 0x00000147 && unk_0x1A5A491D253EA7BA(iParam3, 0xC2670CD3, 0x00000001)))
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		return func_159(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != 0xFFFFFFFF && iVar1 != 0x00000000)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_63(unk_0x134B62B726CEC8E6(iParam0), iVar1, 0x0000000E, 0x00000003);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_63(unk_0x134B62B726CEC8E6(iParam0), iVar1, 0x0000000E, 0x00000004);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0x00000000;
	while (iVar4 <= (iVar2 - 0x00000001))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0x00000000;
			while (iVar5 <= (iVar6 - 0x00000001))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_158(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_159(iParam3);
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000003A;
					break;
				
				case 0x00000002:
					return 0x00000070;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000052;
					break;
				
				case 0x00000002:
					return 0x0000009E;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000058;
					break;
				
				case 0x00000002:
					return 0x0000009A;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000009B;
					break;
				
				case 0x00000006:
					return 0x0000013F;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000009B;
					break;
				
				case 0x00000006:
					return 0x0000013F;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_159(int iParam0)
{
	switch (iParam0)
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
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
	}
	return 0x00000000;
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == 0xFFFFFFFF)
	{
		return func_159(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_157(iParam0, iVar0, iVar1, iParam1);
}

void func_161(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		func_79(iParam0, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000002, Global_12A92[0x00000001 /*14*/].f_1, 0x00000001, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001) && unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		if (iParam0 == 0x0000000C)
		{
			func_162(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
		else if (iParam0 == 0x0000000D)
		{
		}
		else if (iParam0 == 0x0000000E)
		{
			func_162(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			func_162(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
	}
}

void func_162(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_81(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_75(iVar2, iVar0, 0x00000000);
		unk_0x5D96D8530B3D0904(&iVar3, iVar1);
		func_163(iVar2, iVar3, iVar0, 0x00000001, 0x00000000);
	}
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

int func_164(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001))
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_165(int iParam0, int iParam1)
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
	var uVar12;
	
	if (func_169(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		func_167(iParam0, iVar0);
		func_167(iParam0, iVar1);
		func_167(iParam0, iVar2);
		func_167(iParam0, iVar3);
		func_167(iParam0, iVar4);
		func_167(iParam0, iVar5);
		func_167(iParam0, iVar6);
		func_167(iParam0, iVar7);
		func_167(iParam0, iVar8);
		func_167(iParam0, iVar9);
		func_167(iParam0, iVar10);
		func_167(iParam0, iVar11);
		if (func_166(uVar12, 0x00000001))
		{
			unk_0xFFE16595F5CF81E9(iParam0);
		}
		if (func_166(uVar12, 0x00000002))
		{
			unk_0xFFE16595F5CF81E9(iParam0);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		}
		if (func_166(uVar12, 0x00000004))
		{
			unk_0xFFE16595F5CF81E9(iParam0);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

bool func_166(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar3 = 0x00000000;
	if (func_168(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		unk_0x64F9F278AB9DCA2C(iParam0, iVar0, iVar1, iVar2, iVar3);
	}
}

int func_168(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000000;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000002:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000009:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000A:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000000B:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000000D:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000006;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000005;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000009;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000001;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = 0x00000001;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = 0x00000001;
			*iParam2 = 0x00000007;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = 0x00000001;
			*iParam2 = 0x0000000B;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
			*uParam1 = 0x00000001;
			*iParam2 = 0x0000000C;
			return 0x00000000;
			break;
		
		case 0x0000002C:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000000;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000000;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000000;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000006;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000007;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000006;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000005;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000009;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = 0x00000002;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000001;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = 0x00000002;
			*iParam2 = 0x00000007;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = 0x00000002;
			*iParam2 = 0x0000000B;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x00000058:
			*uParam1 = 0x00000002;
			*iParam2 = 0x0000000C;
			return 0x00000000;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000000;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000005B:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000005C:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000005D:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000061:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000006;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000068:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000006A:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000006B:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000006C:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000006D:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000006E:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000070:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000071:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000073:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000074:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000075:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000005;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000009;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000007B:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000007C:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000004;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000005;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000007F:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000001;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000001;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = 0x00000000;
			*iParam2 = 0x00000007;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000B;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x00000087:
			*uParam1 = 0x00000000;
			*iParam2 = 0x0000000C;
			return 0x00000000;
			break;
		
		case 0x00000088:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000000;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000089:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000002;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000008A:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000008B:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000008D:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000003;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000008E:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000008F:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000090:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000091:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000004;
			*iParam3 = 0x00000003;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000093:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000006;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000094:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000005;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000095:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000005;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000005;
			*iParam3 = 0x00000002;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000008;
			*iParam3 = 0x00000001;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000009;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x0000000A;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000001;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x00000007;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x0000000B;
			*iParam3 = 0x00000000;
			*iParam4 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
		case 0x000000A1:
			*uParam1 = 0x0000000D;
			*iParam2 = 0x0000000C;
			return 0x00000000;
			break;
	}
	*uParam1 = 0x00000010;
	*iParam2 = 0xFFFFFFFF;
	*iParam3 = 0xFFFFFFFF;
	*iParam4 = 0xFFFFFFFF;
	return 0x00000000;
}

int func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	switch (iParam0)
	{
		case 0x00000022:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000004;
			*uParam3 = 0x0000000C;
			*uParam4 = 0x00000012;
			*uParam5 = 0x00000017;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000008;
			*uParam4 = 0x0000000F;
			*uParam5 = 0x00000015;
			*uParam6 = 0x00000018;
			*uParam7 = 0x0000001A;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000005;
			*uParam3 = 0x0000000D;
			*uParam4 = 0x0000000F;
			*uParam5 = 0x00000015;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000005;
			*uParam3 = 0x0000000D;
			*uParam4 = 0x00000014;
			*uParam5 = 0x00000017;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000006;
			*uParam4 = 0x0000000E;
			*uParam5 = 0x00000015;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000005;
			*uParam3 = 0x00000007;
			*uParam4 = 0x00000010;
			*uParam5 = 0x00000017;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000004);
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000008;
			*uParam4 = 0x0000000F;
			*uParam5 = 0x00000015;
			*uParam6 = 0x00000018;
			*uParam7 = 0x0000001A;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000009;
			*uParam4 = 0x00000013;
			*uParam5 = 0x00000017;
			*uParam6 = 0x00000018;
			*uParam7 = 0x0000001A;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000000B;
			*uParam4 = 0x00000011;
			*uParam5 = 0x00000017;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = 0x00000000;
			*uParam2 = 0x00000003;
			*uParam3 = 0x0000000A;
			*uParam4 = 0x00000010;
			*uParam5 = 0x00000015;
			*uParam6 = 0x00000018;
			*uParam7 = 0x00000019;
			*uParam8 = 0x0000001D;
			*uParam9 = 0x0000001E;
			*uParam10 = 0x0000001F;
			*uParam11 = 0x00000020;
			*uParam12 = 0x00000021;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x00000035;
			*uParam3 = 0x00000038;
			*uParam4 = 0x00000041;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000050:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x0000002F;
			*uParam3 = 0x00000036;
			*uParam4 = 0x0000003F;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000051:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x00000030;
			*uParam3 = 0x00000037;
			*uParam4 = 0x00000040;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000052:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x00000034;
			*uParam3 = 0x0000003C;
			*uParam4 = 0x00000045;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000002);
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x00000034;
			*uParam3 = 0x0000003C;
			*uParam4 = 0x00000045;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000054:
			*uParam1 = 0x0000002E;
			*uParam2 = 0x00000033;
			*uParam3 = 0x0000003E;
			*uParam4 = 0x00000042;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000004);
			return 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000003A;
			*uParam4 = 0x00000043;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x00000031;
			*uParam3 = 0x00000038;
			*uParam4 = 0x00000041;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000003D;
			*uParam4 = 0x00000046;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000002);
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = 0x0000002C;
			*uParam2 = 0x00000031;
			*uParam3 = 0x00000039;
			*uParam4 = 0x00000042;
			*uParam5 = 0x00000047;
			*uParam6 = 0x00000048;
			*uParam7 = 0x00000049;
			*uParam8 = 0x0000004A;
			*uParam9 = 0x0000004B;
			*uParam10 = 0x0000004C;
			*uParam11 = 0x0000004D;
			*uParam12 = 0x0000004E;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000083:
			*uParam1 = 0x00000059;
			*uParam2 = 0x0000005A;
			*uParam3 = 0x00000060;
			*uParam4 = 0x00000068;
			*uParam5 = 0x0000006F;
			*uParam6 = 0x00000076;
			*uParam7 = 0x00000077;
			*uParam8 = 0x00000078;
			*uParam9 = 0x00000079;
			*uParam10 = 0x0000007F;
			*uParam11 = 0x00000081;
			*uParam12 = 0x00000082;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000084:
			*uParam1 = 0x00000059;
			*uParam2 = 0x0000005A;
			*uParam3 = 0x00000066;
			*uParam4 = 0x0000006E;
			*uParam5 = 0x00000073;
			*uParam6 = 0x00000076;
			*uParam7 = 0x00000077;
			*uParam8 = 0x00000078;
			*uParam9 = 0x0000007B;
			*uParam10 = 0x00000080;
			*uParam11 = 0x00000081;
			*uParam12 = 0x00000082;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = 0x00000059;
			*uParam2 = 0x0000005A;
			*uParam3 = 0x00000061;
			*uParam4 = 0x00000069;
			*uParam5 = 0x00000072;
			*uParam6 = 0x00000076;
			*uParam7 = 0x00000077;
			*uParam8 = 0x00000078;
			*uParam9 = 0x0000007A;
			*uParam10 = 0x0000007F;
			*uParam11 = 0x00000081;
			*uParam12 = 0x00000082;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = 0x00000059;
			*uParam2 = 0x0000005A;
			*uParam3 = 0x00000060;
			*uParam4 = 0x00000068;
			*uParam5 = 0x00000072;
			*uParam6 = 0x00000076;
			*uParam7 = 0x00000077;
			*uParam8 = 0x00000078;
			*uParam9 = 0x00000079;
			*uParam10 = 0x0000007F;
			*uParam11 = 0x00000081;
			*uParam12 = 0x00000082;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x00000087:
			*uParam1 = 0x00000059;
			*uParam2 = 0x0000005F;
			*uParam3 = 0x00000065;
			*uParam4 = 0x0000006C;
			*uParam5 = 0x00000074;
			*uParam6 = 0x00000076;
			*uParam7 = 0x00000077;
			*uParam8 = 0x00000078;
			*uParam9 = 0x0000007E;
			*uParam10 = 0x00000080;
			*uParam11 = 0x00000081;
			*uParam12 = 0x00000082;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = 0x00000088;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000008A;
			*uParam4 = 0x0000008E;
			*uParam5 = 0x00000092;
			*uParam6 = 0x00000094;
			*uParam7 = 0x00000097;
			*uParam8 = 0x00000099;
			*uParam9 = 0x0000009A;
			*uParam10 = 0x0000009B;
			*uParam11 = 0x0000009C;
			*uParam12 = 0x0000009D;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = 0x00000088;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000008A;
			*uParam4 = 0x0000008E;
			*uParam5 = 0x00000092;
			*uParam6 = 0x00000094;
			*uParam7 = 0x00000098;
			*uParam8 = 0x00000099;
			*uParam9 = 0x0000009A;
			*uParam10 = 0x0000009B;
			*uParam11 = 0x0000009C;
			*uParam12 = 0x0000009D;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = 0x00000088;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000008D;
			*uParam4 = 0x00000091;
			*uParam5 = 0x00000093;
			*uParam6 = 0x00000096;
			*uParam7 = 0x00000098;
			*uParam8 = 0x00000099;
			*uParam9 = 0x0000009A;
			*uParam10 = 0x0000009B;
			*uParam11 = 0x0000009C;
			*uParam12 = 0x0000009D;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = 0x00000088;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000008C;
			*uParam4 = 0x00000090;
			*uParam5 = 0x00000093;
			*uParam6 = 0x00000094;
			*uParam7 = 0x00000098;
			*uParam8 = 0x00000099;
			*uParam9 = 0x0000009A;
			*uParam10 = 0x0000009B;
			*uParam11 = 0x0000009C;
			*uParam12 = 0x0000009D;
			func_170(uParam13, 0x00000001);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_170(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_171(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_25(iParam1))
	{
		iVar0 = func_173(iParam1);
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
			func_172(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_172(var uParam0, int iParam1)
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

int func_173(int iParam0)
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

int func_174(int iParam0)
{
	if (!func_25(iParam0))
	{
		return unk_0xB87F6CF6E5628C67(func_173(iParam0));
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_175(int iParam0)
{
	if (!func_25(iParam0))
	{
		unk_0x523BCC9DC80CD82F(func_173(iParam0));
	}
	else if (iParam0 != 0x00000091)
	{
	}
}

void func_176()
{
	char[] cVar0[8];
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iLocal_66 = Global_17F63;
	func_181(iLocal_66, &vLocal_245, &fLocal_246, &cVar0);
	func_179(iLocal_66, &sLocal_249, &cLocal_265, &cLocal_281, &uVar1, &uVar2);
	func_178(iLocal_66, &Local_305, &uVar3, &uLocal_309, &fLocal_310, &uVar4, &fLocal_311, &uVar5);
	switch (iLocal_66)
	{
		case 0x00000056:
			vLocal_247[0x00000000 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_248[0x00000000] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_234[0x00000000] = 0x0000000E;
			iLocal_236[0x00000000] = 0x00000000;
			iLocal_237[0x00000000] = 0x00000013;
			Global_16E36[iLocal_236[0x00000000]] = 0x0000008C;
			StringCopy(&(Local_297[0x00000000 /*16*/]), "BASE_Jimmy", 64);
			StringCopy(&(Local_298[0x00000000 /*16*/]), "EXIT_Jimmy", 64);
			vLocal_247[0x00000001 /*3*/] = { 0f, 0f, 0f };
			fLocal_248[0x00000001] = 0f;
			iLocal_234[0x00000001] = 0x00000091;
			iLocal_308[0x00000001] = 0xFFFFFFFF;
			break;
			break;
		
		case 0x000000A8:
			vLocal_247[0x00000000 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_248[0x00000000] = unk_0x79833B02DBD2A244(-180f, 180f);
			vLocal_247[0x00000001 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_248[0x00000001] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_234[0x00000000] = 0x0000000E;
			iLocal_234[0x00000001] = 0x0000000F;
			iLocal_236[0x00000000] = 0x00000000;
			iLocal_236[0x00000001] = 0x00000001;
			iLocal_237[0x00000000] = 0x00000019;
			iLocal_237[0x00000001] = 0x00000019;
			Global_16E36[iLocal_236[0x00000000]] = 0x0000008C;
			Global_16E36[iLocal_236[0x00000001]] = 0x0000008C;
			StringCopy(&(Local_297[0x00000000 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_IDLE_JMY", 64);
			StringCopy(&(Local_298[0x00000000 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_EXIT_JMY", 64);
			StringCopy(&(Local_297[0x00000001 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_IDLE_TRC", 64);
			StringCopy(&(Local_298[0x00000001 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_EXIT_TRC", 64);
			break;
		
		case 0x0000009C:
			vLocal_247[0x00000000 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_248[0x00000000] = unk_0x79833B02DBD2A244(-180f, 180f);
			vLocal_247[0x00000001 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_248[0x00000001] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_234[0x00000000] = 0x00000011;
			iLocal_234[0x00000001] = 0x0000000F;
			iLocal_236[0x00000000] = 0x00000002;
			iLocal_236[0x00000001] = 0x00000001;
			iLocal_237[0x00000000] = 0x00000089;
			iLocal_237[0x00000001] = 0x00000089;
			Global_16E36[iLocal_236[0x00000000]] = 0x0000008C;
			Global_16E36[iLocal_236[0x00000001]] = 0x0000008C;
			StringCopy(&(Local_297[0x00000000 /*16*/]), "AROUND_THE_TABLE_SELFISH_BASE_Amanda", 64);
			StringCopy(&(Local_298[0x00000000 /*16*/]), "AROUND_THE_TABLE_SELFISH_Amanda", 64);
			StringCopy(&(Local_297[0x00000001 /*16*/]), "AROUND_THE_TABLE_SELFISH_BASE_Tracy", 64);
			StringCopy(&(Local_298[0x00000001 /*16*/]), "AROUND_THE_TABLE_SELFISH_Tracy", 64);
			Local_299 = { func_177("MICS3_IG_12", 0x00000003) };
			fLocal_302 = 0f;
			break;
		
		case 0x000000AD:
			vLocal_247[0x00000000 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_248[0x00000000] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_234[0x00000000] = 0x0000000E;
			iLocal_236[0x00000000] = 0x00000000;
			iLocal_237[0x00000000] = 0x00000089;
			Global_16E36[iLocal_236[0x00000000]] = 0x0000008C;
			iLocal_308[0x00000000] = 0x00000002;
			StringCopy(&(Local_297[0x00000000 /*16*/]), "", 64);
			StringCopy(&(Local_298[0x00000000 /*16*/]), "EXIT_Jimmy", 64);
			iLocal_240[0x00000000] = joaat("scorcher");
			vLocal_241[0x00000000 /*3*/] = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
			fLocal_242[0x00000000] = unk_0x79833B02DBD2A244(-180f, 180f);
			StringCopy(&(Local_243[0x00000000 /*16*/]), "", 64);
			StringCopy(&(Local_244[0x00000000 /*16*/]), "EXIT_TriBike", 64);
			vLocal_247[0x00000001 /*3*/] = { 0f, 0f, 0f };
			fLocal_248[0x00000001] = 0f;
			iLocal_234[0x00000001] = 0x00000091;
			iLocal_308[0x00000001] = 0xFFFFFFFF;
			StringCopy(&Local_299, "MICS3_IG_10", 16);
			fLocal_302 = 0.2f;
			break;
		
		default:
			vLocal_247[0x00000000 /*3*/] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_247[0x00000001 /*3*/] = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			fLocal_248[0x00000000] = unk_0x79833B02DBD2A244(-180f, 180f);
			fLocal_248[0x00000001] = unk_0x79833B02DBD2A244(-180f, 180f);
			iLocal_234[0x00000000] = 0x00000091;
			iLocal_234[0x00000001] = 0x00000091;
			break;
	}
}

struct<4> func_177(char* sParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (unk_0x09AC81E49EA267F7(0x00000000, iParam1))
	{
		case 0x00000000:
			StringConCat(&Var0, "a", 16);
			break;
		
		case 0x00000001:
			StringConCat(&Var0, "b", 16);
			break;
		
		case 0x00000002:
			StringConCat(&Var0, "c", 16);
			break;
		
		default:
			StringConCat(&Var0, "X", 16);
			break;
	}
	return Var0;
}

int func_178(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case 0x000000E7:
			StringCopy(sParam1, "lkexcile2_chase", 16);
			*uParam2 = 0x00000064;
			*uParam3 = 6500f;
			*uParam4 = 12700f;
			*uParam5 = (5000f + 12700f);
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(sParam1, "scene_m_fbi2_", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 6200f;
			*uParam5 = (5000f + 6200f);
			*uParam6 = 0.4f;
			*uParam7 = 0.8f;
			return 0x00000001;
			break;
		
		case 0x0000004C:
			StringCopy(sParam1, "scene_f_fra2_", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam5 = 8500f;
			*uParam4 = 4750f;
			*uParam6 = 0.4f;
			*uParam7 = 0.7f;
			return 0x00000001;
			break;
		
		case 0x000000AD:
			StringCopy(sParam1, "scene_m_biking", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x00000119:
			StringCopy(sParam1, "scene_t_chaseA", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 7500f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x0000011A:
			StringCopy(sParam1, "scene_t_chaseB", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 0x00000001;
			break;
		
		case 0x0000011B:
			StringCopy(sParam1, "scene_t_chaseC", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.9f;
			*uParam7 = 1.1f;
			return 0x00000001;
			break;
		
		case 0x0000011C:
			StringCopy(sParam1, "scene_t_chaseD", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x00000113:
			StringCopy(sParam1, "scene_t_policeA", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 0x00000001;
			break;
		
		case 0x00000114:
			StringCopy(sParam1, "scene_t_policeB", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x00000115:
			StringCopy(sParam1, "scene_t_policeC", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
	}
	StringCopy(sParam1, "", 16);
	*uParam2 = 0xFFFFFFFF;
	*uParam3 = -1f;
	*uParam4 = -1f;
	*uParam5 = -1f;
	*uParam6 = 0f;
	*uParam7 = 0f;
	return 0x00000000;
}

int func_179(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 0x00000009;
	*uParam5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000000B:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x0000007C:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x000000EA:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x0000013C:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000004E:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x00000050:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 0x00000001;
			break;
		
		case 0x00000052:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000054:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return 0x00000001;
			break;
		
		case 0x00000053:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000055:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x00000123:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000080:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 0x00000001;
			break;
		
		case 0x00000056:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x00000057:
		case 0x00000058:
		case 0x000000B8:
		case 0x000000B9:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x00000059:
		case 0x0000005A:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x0000007F:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x00000068:
		case 0x00000051:
		case 0x0000007E:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000086:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return 0x00000001;
			break;
		
		case 0x0000006C:
		case 0x0000006D:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000070:
		case 0x00000071:
		case 0x0000007B:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x00000029:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x00000072:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000069:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 0x00000020;
			return 0x00000001;
			break;
		
		case 0x0000006A:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 0x00000020;
			return 0x00000001;
			break;
		
		case 0x0000006B:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 0x00000020;
			return 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AA:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x00000067:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 0x00000044;
			return 0x00000001;
			break;
		
		case 0x00000079:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000061:
		case 0x000000A2:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return 0x00000001;
			break;
		
		case 0x0000006E:
		case 0x0000006F:
		case 0x00000083:
		case 0x00000084:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000402;
			return 0x00000001;
			break;
		
		case 0x00000081:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000082:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000096:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x00000097:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x00000098:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x00000099:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000009D:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000A4:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x000000A6:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000A8:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AD:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x000000A9:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000000BA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BB:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BC:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BE:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BF:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000AF:
		case 0x000000B0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000B3:
		case 0x000000B4:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return 0x00000001;
			break;
		
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return 0x00000001;
			break;
		
		case 0x000000C2:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 0x00000001;
			break;
		
		case 0x000000C3:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 0x00000001;
			break;
		
		case 0x000000C6:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 0x00000001;
			break;
		
		case 0x000000C7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 0x00000001;
			break;
		
		case 0x000000C8:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000C9:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000CA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000CB:
		case 0x000000CE:
		case 0x000000CF:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000CC:
		case 0x000000CD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000D3:
		case 0x000000D5:
		case 0x000000D8:
		case 0x000000D9:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 0x00000001;
			break;
		
		case 0x000000D4:
		case 0x000000D6:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000C4:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return 0x00000001;
			break;
		
		case 0x000000C5:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 0x00000001;
			break;
		
		case 0x000000D7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return 0x00000001;
			break;
		
		case 0x000000DD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return 0x00000001;
			break;
		
		case 0x000000DE:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return 0x00000001;
			break;
		
		case 0x000000DF:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return 0x00000001;
			break;
		
		case 0x000000E0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return 0x00000001;
			break;
		
		case 0x000000E2:
		case 0x000000E3:
		case 0x000000E6:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return 0x00000001;
			break;
		
		case 0x000000E4:
		case 0x000000E5:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return 0x00000001;
			break;
		
		case 0x000000E8:
		case 0x000000E9:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return 0x00000001;
			break;
		
		case 0x000000EB:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x000000ED:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x000000EE:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return 0x00000001;
			break;
		
		case 0x000000EF:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x00000111:
		case 0x00000112:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000F5:
		case 0x00000028:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x0000013B:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x000000FA:
		case 0x000000FB:
		case 0x000000FC:
		case 0x000000FD:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000106:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000F3:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x0000010F:
		case 0x00000110:
		case 0x00000109:
		case 0x0000010A:
		case 0x0000010B:
		case 0x0000010C:
		case 0x0000010D:
		case 0x0000010E:
		case 0x00000117:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000118:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000F6:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x0000011E:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000F7:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000107:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return 0x00000001;
			break;
		
		case 0x00000116:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000108:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000FF:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return 0x00000001;
			break;
		
		case 0x0000011D:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000103:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000FE:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return 0x00000001;
			break;
		
		case 0x0000011F:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000120:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000121:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000122:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000124:
		case 0x00000127:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000125:
		case 0x00000126:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x0000012B:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x0000012C:
		case 0x0000012D:
		case 0x0000012E:
		case 0x0000012F:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000128:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return 0x00000001;
			break;
		
		case 0x00000129:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return 0x00000001;
			break;
		
		case 0x00000130:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x00000131:
			func_180(iParam0, sParam1, sParam2, sParam3);
			return 0x00000001;
			break;
		
		case 0x00000136:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 0x00008000;
			return 0x00000001;
			break;
		
		case 0x00000137:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 0x00008000;
			return 0x00000001;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return 0x00000000;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0x00000000;
}

void func_180(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_181(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (func_184(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 0x00000000;
				break;
			
			case 0x00000001:
				func_182(&iVar0);
				if (iVar0 < 0x00000005)
				{
					*uParam1 = { Global_16EFB[iVar0 /*9*/].f_3 };
					*uParam2 = Global_16EFB[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 0x00000001;
				}
				else
				{
					*uParam1 = { Global_16EFB[0x00000000 /*9*/].f_3 };
					*uParam2 = Global_16EFB[0x00000000 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				*uParam1 = { Global_17A57[0x00000000 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000000 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000003:
				*uParam1 = { Global_17A57[0x00000001 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000001 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000004:
				*uParam1 = { Global_17A57[0x00000002 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000002 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000005:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000000 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000000];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000006:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000001 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000001];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000007:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000002 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000002];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
		}
		*uParam1 = { Global_17B9F[iParam0 /*3*/] };
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_182(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_1B416.f_936.f_21B.f_10E3;
	vVar1 = { Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] };
	if (func_183(vVar1, 0f, 0f, 0f, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	}
	*uParam0 = 0x00000005;
	fVar2 = 9999999f;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000005)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38.f_B[iVar3], 0x00000000))
		{
			vVar4 = { Global_16EFB[iVar3 /*9*/].f_3 };
			fVar5 = SYSTEM::VDIST(vVar1, vVar4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 0x00000005;
}

bool func_183(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_184(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			func_182(&iVar1);
			if (iVar1 < 0x00000005)
			{
				*uParam1 = Global_16EFB[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			else
			{
				*uParam1 = Global_16EFB[0x00000000 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			*uParam1 = Global_17A57[0x00000000 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = Global_17A57[0x00000001 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = Global_17A57[0x00000002 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000000];
			StringCopy(sParam2, func_186(Global_1B416.f_936.f_21B.f_90A[0x00000000]), 32);
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000001];
			StringCopy(sParam2, func_186(Global_1B416.f_936.f_21B.f_90A[0x00000001]), 32);
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000002];
			StringCopy(sParam2, func_186(Global_1B416.f_936.f_21B.f_90A[0x00000002]), 32);
			return 0x00000001;
			break;
		
		case 0x0000000B:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			return func_184(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000A:
			return func_184(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000D:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000E:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000F:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000C:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000010:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000015:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000016:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000004A:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
			return func_184(0x000000D0, uParam1, sParam2);
			break;
		
		case 0x00000018:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000043:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000019:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001A:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001B:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001D:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000001E:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000001F:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000020:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000021:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000023:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000024:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000025:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000003A:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003B:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003C:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000026:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000027:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000028:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000029:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002A:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002B:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002C:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002D:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002E:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000002F:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000031:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000030:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000007C:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000032:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000033:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000034:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000042:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000035:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000036:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000037:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000038:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000039:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003E:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003F:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000044:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000045:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000040:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000041:
			if (func_185(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000046:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000047:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000048:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000049:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x000000EA:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000013C:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000013B:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000050:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000051:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000052:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000054:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000059:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005A:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005B:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005C:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005D:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000061:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000068:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000069:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006A:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006B:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006C:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006D:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006E:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006F:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000070:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000071:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000087:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000088:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000089:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008A:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008B:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008C:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008D:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008E:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008F:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000090:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000091:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000092:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000093:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000094:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000095:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000073:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000074:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000075:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000007B:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007F:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000083:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000084:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A2:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x000000A4:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A6:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A8:
			if (func_4(0x00000000, 0x00000019, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 0x00000001;
			}
			break;
		
		case 0x000000A9:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x000000AA:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AD:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AE:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000000AF:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B0:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B3:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B4:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B5:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B6:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B7:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B8:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B9:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000BA:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BB:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BC:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BD:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BE:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BF:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000C4:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000C5:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C2:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C3:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C6:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C7:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C8:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C9:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CA:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CB:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CC:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CD:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CE:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CF:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D0:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D1:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D2:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D3:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D4:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D5:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D6:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D7:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D8:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D9:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DD:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DE:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 0x00000001;
			break;
		
		case 0x000000DF:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 0x00000001;
			break;
		
		case 0x000000E0:
			return func_184(0x000000DE, uParam1, sParam2);
			break;
		
		case 0x000000E2:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E3:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E4:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E5:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E6:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E7:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E8:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E9:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EB:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x000000ED:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EE:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EF:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F0:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F1:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F2:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F5:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x000000F3:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F6:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F7:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FA:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FB:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FC:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FD:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FE:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FF:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000108:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000109:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010A:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010B:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010C:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010D:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010E:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010F:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000110:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000111:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000112:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000113:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000114:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000115:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000116:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000117:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000118:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000119:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011A:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011B:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011C:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011D:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000100:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000101:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000102:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000103:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000104:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000105:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011E:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011F:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000120:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000106:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000107:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000121:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000122:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x00000123:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000124:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000125:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000126:
			return func_184(0x00000125, uParam1, sParam2);
			break;
		
		case 0x00000127:
			return func_184(0x00000124, uParam1, sParam2);
			break;
		
		case 0x0000012B:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012C:
			return func_184(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012D:
			return func_184(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012E:
			return func_184(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012F:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000128:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000129:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000130:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000131:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 0x00000001;
			break;
		
		case 0x00000132:
			vVar4 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar4.x, -vVar4.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000133:
			vVar5 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar5.x, -vVar5.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000134:
			vVar6 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar6.x, -vVar6.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000135:
			vVar7 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar7.x, -vVar7.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000136:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000137:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000138:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000139:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000013A:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0x00000000;
}

int func_185(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x0000000B:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_185(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000A:
			return func_185(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000D:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0x780CBE4B:
			return "v_chopshop";
			break;
		
		case 0x20D7E464:
			return "v_franklins";
			break;
		
		case 0x0D5520EF:
			return "v_franklinshouse";
			break;
		
		case 0x7C0DD540:
			return "v_methlab";
			break;
		
		case 0xC31E7C77:
			return "v_michael";
			break;
		
		case 0x4E55A04E:
			return "v_strip3";
			break;
		
		case 0x6438554B:
			return "v_trailer";
			break;
		
		case 0x66CE0AC8:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_187()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_234)
	{
		if (iLocal_234[iVar0] != 0x00000091)
		{
			func_188(iLocal_234[iVar0]);
		}
		if (!unk_0xEA6BC48857E0AC4C(&Local_305) && iLocal_308[iVar0] > 0x00000000)
		{
			unk_0xDB8844D4B7C60440(iLocal_308[iVar0], &Local_305);
		}
		iVar0++;
	}
	unk_0x51732B934211201A(iLocal_238);
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_188(int iParam0)
{
	if (!func_25(iParam0))
	{
		unk_0x71199B01895C6202(func_173(iParam0));
	}
	else if (iParam0 != 0x00000091)
	{
	}
}

