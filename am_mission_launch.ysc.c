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
	struct<22> Local_73 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<14> Local_77 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_78[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	struct<2> Local_93 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 16;
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
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	char* sLocal_265 = NULL;
	struct<21> Local_266 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	func_401(ScriptParam_266);
	while (0x00000001)
	{
		func_400();
		if (func_389() || !func_388(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			func_386();
		}
		switch (func_385(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_384() == 0x00000002)
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000002;
				}
				else if (func_384() == 0x00000006)
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000005;
				}
				break;
			
			case 0x00000002:
				if (func_384() == 0x00000002)
				{
					func_377();
					func_54();
				}
				else if (func_384() == 0x00000006)
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000005;
				}
				if (((func_51(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_48(unk_0xD803B885F5E47A62())) || unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000008)) || unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000010))
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000006;
				}
				break;
			
			case 0x00000005:
				func_47(&(Local_73.f_13));
				if (func_46(&(Local_73.f_13)))
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000006;
				}
				break;
			
			case 0x00000003:
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_1 = 0x00000006;
			
			case 0x00000006:
				func_386();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_384())
			{
				case 0x00000000:
					func_45(&(Local_73.f_11), 0x00000000, 0x00000000);
					Local_73.f_1 = 0x00000002;
					break;
				
				case 0x00000002:
					func_41();
					func_39();
					func_3();
					if (func_1())
					{
						Local_73.f_1 = 0x00000006;
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
	if (func_2())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_2()
{
	return unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000006);
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		switch (Local_73.f_2)
		{
			case 0x00000000:
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000A))
				{
					if (func_38(&(Local_73.f_11), 0x000493E0, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 0x0000000A);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000A))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000000))
					{
						Local_73.f_5 = func_37();
						Local_73.f_2 = 0x00000001;
						Local_73.f_4 = 0x00000000;
					}
				}
				break;
			
			case 0x00000001:
				if (func_6())
				{
					unk_0x5D96D8530B3D0904(&Local_73, 0x00000003);
					unk_0x0674E58A79778E99(&Local_73, 0x0000000D);
					func_45(&(Local_73.f_15), 0x00000000, 0x00000000);
					Local_73.f_2 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
				{
					func_4(Local_73.f_5);
					Local_73.f_2 = 0x00000007;
				}
				break;
			
			case 0x00000007:
				func_4(Local_73.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_5(&(Local_73.f_9[0x00000000]));
			func_5(&(Local_73.f_C[0x00000000]));
			break;
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_6()
{
	if (Local_73.f_5 == 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000001))
		{
			iLocal_89 = 0x00000000;
			iLocal_90 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000005);
			iLocal_76 = 0x00000000;
			Local_73.f_3 = 0xFFFFFFFF;
			Local_73.f_4 = 0x00000000;
			unk_0x5D96D8530B3D0904(&Local_73, 0x00000001);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000002))
		{
			if (func_36())
			{
				unk_0x5D96D8530B3D0904(&Local_73, 0x00000002);
			}
		}
		else if (func_7())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_7()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = func_35();
	iVar1 = func_34();
	if (!unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
	{
		if (Local_73.f_F == 0x00000000)
		{
			unk_0x28E5F00F131890E3(0x00000001);
			Local_73.f_F = 0x00000001;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000D))
		{
			if (unk_0xE75B31D140F2F10B(0x00000001))
			{
				if (unk_0xA3FA8B6D2780D661(0x00000001))
				{
					if (func_33(0x00000001, 0x00000001, 0x00000001))
					{
						if (func_27(0x00000001, 0x00000001, 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&Local_73, 0x0000000D);
						}
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000D))
		{
			if (func_26(iVar1))
			{
				if (func_26(iVar0))
				{
					if (func_14(&vVar2, &fVar3))
					{
						if (func_11(&(Local_73.f_C[0x00000000]), iVar1, vVar2, fVar3, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0x7980D72D61BEF4D5(unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]), 0x00000001);
							if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 0x00000003))
							{
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]), "Not_Allow_As_Saved_Veh", 0x00000001);
							}
							Local_73.f_F = 0x00000001;
						}
					}
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
	{
		if (!unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
		{
			if (Local_73.f_10 == 0x00000000)
			{
				unk_0x0BEC04ECA8485A3A(0x00000001);
				Local_73.f_10 = 0x00000001;
			}
			if (unk_0xA3FA8B6D2780D661(0x00000001))
			{
				if (func_26(iVar0))
				{
					if (func_9(Local_73.f_C[0x00000000]))
					{
						if (unk_0x526BC32A660C89E6(Local_73.f_C[0x00000000]))
						{
							if (func_8(&(Local_73.f_9[0x00000000]), Local_73.f_C[0x00000000], 0x0000001A, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
							{
								unk_0x7980D72D61BEF4D5(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000001);
								unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000001, 0x00000000);
								unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000001);
								unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), Global_18085B);
								unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000001, 0x00000000);
								unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
								Local_73.f_10 = 0x00000001;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]) || !unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0x00000000))
	{
		return 0x00000000;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_9(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_10(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_10(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_12(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_12(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_13(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_13(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

int func_14(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_25(*uParam0, 0f, 0f, 0f, 0x00000000))
	{
		return 0x00000001;
	}
	switch (iLocal_90)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_90))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar1 = { -1226.248f, -1089.819f, 10.1513f };
				vVar2 = { func_24(0x00000000, 0x00000000) };
				fVar3 = 19.7853f;
			}
			break;
		
		case 0x00000001:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_90))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar1 = { -614.8635f, 255.2288f, 88.7755f };
				vVar2 = { func_24(0x00000000, 0x00000001) };
				fVar3 = 266.4686f;
			}
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_90))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar1 = { 798.8026f, -2026.004f, 33.2793f };
				vVar2 = { func_24(0x00000000, 0x00000002) };
				fVar3 = 355.9428f;
			}
			break;
		
		case 0x00000003:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_90))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar1 = { -1621.554f, 1257.98f, 145.2376f };
				vVar2 = { func_24(0x00000000, 0x00000003) };
				fVar3 = 353.7463f;
			}
			break;
		
		case 0x00000004:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_4, iLocal_90))
			{
				vVar0 = { 1118.077f, 1875.035f, 60.3776f };
				vVar1 = { 1127.638f, 1883.083f, 70.1053f };
				vVar2 = { func_24(0x00000000, 0x00000004) };
				fVar3 = 201.3967f;
			}
			break;
	}
	if (iLocal_90 < 0x00000005)
	{
		if (!func_25(vVar0, 0f, 0f, 0f, 0x00000000))
		{
			if (Local_73.f_3 == 0xFFFFFFFF)
			{
				Local_73.f_3 = unk_0x198D598261EEA7EA(vVar0, vVar1);
			}
			else if (unk_0x23002DD5E7B94FD7(Local_73.f_3))
			{
				if (unk_0x9E6C7E283363593B(Local_73.f_3))
				{
					if (!unk_0x6FE31D882B028E10(Local_73.f_3))
					{
						if (!func_15(vVar2, 0x40A00000, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							unk_0xBD63401BCCEC233B(Local_73.f_3);
							return 0x00000001;
						}
						else
						{
							iLocal_90++;
							unk_0xBD63401BCCEC233B(Local_73.f_3);
							Local_73.f_3 = 0xFFFFFFFF;
						}
					}
					else
					{
						iLocal_90++;
						unk_0xBD63401BCCEC233B(Local_73.f_3);
						Local_73.f_3 = 0xFFFFFFFF;
					}
				}
			}
		}
		else
		{
			iLocal_90++;
		}
	}
	else
	{
		iLocal_90 = 0x00000000;
	}
	return 0x00000000;
}

int func_15(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_388(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_20(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_388(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_17(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_16(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x0EB28750412C3A5A(func_20(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x0EB28750412C3A5A(func_20(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_16(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
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

Vector3 func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_23() && Global_184507[iVar0 /*876*/].f_34F) && !func_22(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_21(iParam0);
}

Vector3 func_21(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_23()
{
	return Global_2564C8.f_11;
}

Vector3 func_24(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				vVar0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 0x00000001)
			{
				vVar0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 0x00000002)
			{
				vVar0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 0x00000003)
			{
				vVar0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 0x00000004)
			{
				vVar0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return vVar0;
}

bool func_25(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_26(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_27(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_32(iParam0) - func_31(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_30(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_31(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_29(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
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

int func_31(int iParam0, bool bParam1)
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

int func_32(int iParam0)
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

bool func_33(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0x00000001, iParam0, 0x00000001, bParam1, bParam2);
}

int func_34()
{
	return joaat("cavalcade");
}

int func_35()
{
	return joaat("a_m_y_business_03");
}

int func_36()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000001))
	{
		if (iLocal_76 >= vLocal_78.x)
		{
			if (iLocal_89 < 0x00000005)
			{
				iLocal_89++;
			}
			iLocal_76 = 0x00000000;
		}
		if (iLocal_76 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000001);
		}
		if (iLocal_89 < 0x00000005)
		{
			iVar5 = iLocal_76;
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar5)))
			{
				iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar5));
				if (func_388(iVar0, 0x00000001, 0x00000001))
				{
					iVar1 = unk_0x9539D44F3E4492F6(iVar0);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000001))
					{
						vVar2 = { func_24(Local_73.f_5, iLocal_89) };
						vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000000) };
						fVar4 = unk_0x0EB28750412C3A5A(vVar2, vVar3, 0x00000001);
						if (fVar4 < 300f)
						{
							unk_0x0674E58A79778E99(&iLocal_81, 0x00000001);
						}
					}
				}
			}
			iLocal_76++;
			if (iLocal_76 == vLocal_78.x)
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_4), iLocal_89);
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

int func_37()
{
	return 0x00000000;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_45(uParam0, bParam2, 0x00000000);
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

void func_39()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		switch (Local_73.f_6)
		{
			case 0x00000000:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]) && unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
				{
					Local_73.f_6 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
				{
					if (!func_40(Local_73.f_9[0x00000000]))
					{
						if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
						{
							if (func_9(Local_73.f_C[0x00000000]))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000])))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000007))
									{
										unk_0x5D96D8530B3D0904(&Local_73, 0x00000009);
										Local_73.f_6 = 0x00000002;
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000E))
									{
										unk_0x5D96D8530B3D0904(&Local_73, 0x00000009);
										Local_73.f_6 = 0x00000002;
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000013))
									{
										Local_73.f_6 = 0x00000003;
									}
								}
								else
								{
									Local_73.f_6 = 0x00000004;
								}
							}
							else
							{
								Local_73.f_6 = 0x00000003;
							}
						}
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
				{
					if (!func_40(Local_73.f_9[0x00000000]))
					{
						if (!unk_0x0E0E6175453415CB(unk_0x1B50683925F00106(Local_73.f_9[0x00000000])))
						{
							Local_73.f_6 = 0x00000004;
						}
						else if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
						{
							if (!func_9(Local_73.f_C[0x00000000]))
							{
								Local_73.f_6 = 0x00000003;
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000013))
							{
								Local_73.f_6 = 0x00000003;
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
				{
					if (!func_40(Local_73.f_9[0x00000000]))
					{
						if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000000))
						{
							Local_73.f_6 = 0x00000004;
						}
					}
				}
				break;
			
			case 0x00000004:
				break;
			}
	}
}

int func_40(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_75 >= vLocal_78.x)
		{
			iLocal_75 = 0x00000000;
			iLocal_88 = 0x00000000;
			unk_0x0674E58A79778E99(&iLocal_81, 0x00000000);
			unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000005);
			unk_0x0674E58A79778E99(&Local_73, 0x00000005);
			unk_0x0674E58A79778E99(&Local_73, 0x00000011);
			unk_0x0674E58A79778E99(&iLocal_81, 0x0000000E);
			unk_0x0674E58A79778E99(&iLocal_81, 0x00000013);
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000010))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000012))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 0x00000010);
					}
				}
			}
			if (func_44(&(Local_73.f_15)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000C))
				{
					if (func_38(&(Local_73.f_15), 0x00057E40, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 0x0000000C);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000F))
					{
						if (func_38(&(Local_73.f_15), 0x0003A980, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&Local_73, 0x0000000F);
						}
					}
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000009);
				}
			}
		}
		iVar0 = iLocal_75;
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar3 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			iVar2 = iVar3;
			if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000005))
			{
				if (vLocal_78[iVar0 /*3*/].f_2 < 0x00000007)
				{
					unk_0x0674E58A79778E99(&iLocal_81, 0x00000005);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000000))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000000))
				{
					iLocal_88++;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000011))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_7, iVar2))
					{
						if (vLocal_78[iVar0 /*3*/].f_2 > 0x00000004)
						{
							unk_0x5D96D8530B3D0904(&(Local_73.f_7), iVar2);
							unk_0x5D96D8530B3D0904(&Local_73, 0x00000011);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000005))
				{
					unk_0x5D96D8530B3D0904(&Local_73, 0x00000005);
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000001))
					{
						Local_73.f_8 = iVar3;
						unk_0x5D96D8530B3D0904(&Local_73, 0x00000004);
						unk_0x0674E58A79778E99(&iLocal_81, 0x0000000F);
						unk_0x0674E58A79778E99(&Local_73, 0x00000012);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000012))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000007))
						{
							unk_0x5D96D8530B3D0904(&Local_73, 0x00000012);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000009))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000005))
					{
						unk_0x0674E58A79778E99(&iLocal_81, 0x00000009);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000E))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000006))
					{
						unk_0x5D96D8530B3D0904(&iLocal_81, 0x0000000E);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000014))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000008))
					{
						unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000014);
					}
				}
			}
		}
		iVar1 = 0x00000000;
		while (iVar1 <= 0x0000001F)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		iLocal_75++;
		if (iLocal_75 >= vLocal_78.x)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000010))
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
				{
					if (func_40(Local_73.f_9[0x00000000]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000F))
							{
								if (!func_44(&uLocal_86))
								{
									func_45(&uLocal_86, 0x00000000, 0x00000000);
								}
								else if (func_38(&uLocal_86, 0x000007D0, 0x00000000))
								{
									unk_0x5D96D8530B3D0904(&Local_73, 0x00000010);
								}
							}
						}
					}
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000000))
			{
				if (iLocal_88 >= 0x00000001)
				{
					unk_0x5D96D8530B3D0904(&Local_73, 0x00000000);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000E))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000E))
				{
					unk_0x5D96D8530B3D0904(&Local_73, 0x0000000E);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000013))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000014))
				{
					unk_0x5D96D8530B3D0904(&Local_73, 0x00000013);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000006))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000005))
				{
					if (Local_73.f_2 > 0x00000001 && Local_73.f_2 <= 0x00000007)
					{
						unk_0x5D96D8530B3D0904(&Local_73, 0x00000006);
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000A))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 0x00000006);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000011))
			{
				unk_0x0674E58A79778E99(&Local_73, 0x00000011);
				unk_0x0674E58A79778E99(&Local_73, 0x0000000F);
				unk_0x0674E58A79778E99(&Local_73, 0x0000000C);
				func_42(&(Local_73.f_15));
				func_45(&(Local_73.f_15), 0x00000000, 0x00000000);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000B))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000C))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000009))
					{
						unk_0x5D96D8530B3D0904(&Local_73, 0x0000000B);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_43(int iParam0)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000007))
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iParam0 /*3*/], 0x00000003))
			{
				unk_0x5D96D8530B3D0904(&Local_73, 0x00000007);
			}
		}
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_1;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
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

int func_46(var uParam0)
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

void func_47(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_45(uParam0, 0x00000000, 0x00000000);
		}
	}
}

int func_48(int iParam0)
{
	if (func_50(iParam0))
	{
		if (!func_49(iParam0, 0x0000000B))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_49(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_50(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_D0 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_52(iParam0))
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

bool func_52(int iParam0)
{
	return func_53(iParam0);
}

bool func_53(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_54()
{
	func_368();
	func_365();
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000A))
	{
		if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 < 0x00000006)
		{
			vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
	{
		if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 <= 0x00000006)
		{
			vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000010))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
		{
			if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 <= 0x00000006)
			{
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
				Local_77.f_2 = 0xA18416BB;
				func_363(Local_77, func_364(0x00000001));
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000B))
	{
		if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 <= 0x00000006)
		{
			vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
			Local_77.f_2 = 0xA18416BB;
			func_363(Local_77, func_364(0x00000001));
		}
	}
	if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 > 0x00000000)
	{
		if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 < 0x00000006)
		{
			if ((((func_51(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_362()) || func_361() > 0x00000000) || func_49(unk_0xD803B885F5E47A62(), 0x00000001)) || func_360())
			{
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
			}
		}
	}
	if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 > 0x00000000)
	{
		if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 < 0x00000006)
		{
			if (func_358(unk_0xD803B885F5E47A62()))
			{
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
			}
		}
	}
	switch (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(vLocal_78[unk_0x57270EE11514DC67() /*3*/], 0x00000000))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000003))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000F))
					{
						unk_0x5D96D8530B3D0904(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000002);
						func_357(0x0000000B, 0x00000001);
						vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000003;
					}
					else
					{
						vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
						unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000010);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (func_356(Local_73.f_5))
			{
				func_355(Local_73.f_5);
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (!func_354())
			{
				if (func_231())
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000005;
					func_229(0x00000058, 0x00000001);
					func_228();
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000008))
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
				}
			}
			else if (func_219())
			{
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000005;
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000008))
				{
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000F))
				{
					func_206(0x0000000C, 0x00000074);
					vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
					unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000010);
				}
			}
			break;
		
		case 0x00000005:
			if (Local_73.f_5 == 0x00000000)
			{
				func_63();
			}
			break;
		
		case 0x00000006:
			vLocal_78[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
			unk_0x0674E58A79778E99(&iLocal_81, 0x00000003);
			unk_0x0674E58A79778E99(&iLocal_81, 0x00000004);
			iLocal_80 = 0x00000000;
			func_206(0x0000000C, 0x00000074);
			if (unk_0xE4EDC4B0E92C078B(Global_195C17))
			{
				unk_0x142CC44DB769B57E(&Global_195C17);
			}
			func_62(&Local_93);
			func_55();
			func_357(0x0000000B, 0x00000000);
			vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000007;
			break;
		
		case 0x00000007:
			if (Local_73.f_2 == 0x00000000 && !unk_0xEAE0D21A50E6C7F4(Local_73, 0x0000000A))
			{
				vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000000;
			}
			break;
	}
}

void func_55()
{
	if (!func_61())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_56();
}

void func_56()
{
	func_58();
	func_57(0x00000000);
}

void func_57(bool bParam0)
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

void func_58()
{
	if (!func_60())
	{
	}
	if (func_61())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_59();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_59()
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

int func_60()
{
	if (!func_61())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_59();
	return unk_0xB165082A56EE6E7F();
}

int func_61()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_62(int iParam0)
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

void func_63()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
	{
		if (!func_40(Local_73.f_9[0x00000000]))
		{
			if (unk_0xE4EDC4B0E92C078B(Global_195C17))
			{
				if (func_204() || func_203())
				{
					unk_0x9D7CDDB4B55142AF(Global_195C17, 0x00000000);
				}
				else
				{
					unk_0x9D7CDDB4B55142AF(Global_195C17, 0x00000004);
				}
			}
			else
			{
				Global_195C17 = unk_0x5C3B41825F6AC5A0(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]));
				unk_0x61755AC17D8F538E(Global_195C17, 0x00000001);
				unk_0x516E63E474722206(Global_195C17, 0f);
			}
			if (unk_0xE4EDC4B0E92C078B(Local_93))
			{
				if (func_204() || func_203())
				{
					unk_0x9D7CDDB4B55142AF(Local_93, 0x00000000);
				}
				else
				{
					unk_0x9D7CDDB4B55142AF(Local_93, 0x00000004);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000A))
				{
					unk_0xDC5B2F9D0CCE3A10(Local_93, "FM_GDM_BLP");
					unk_0x5D96D8530B3D0904(&iLocal_81, 0x0000000A);
				}
			}
			if (unk_0xE4EDC4B0E92C078B(Local_93.f_1))
			{
				if (func_204() || func_203())
				{
					unk_0x9D7CDDB4B55142AF(Local_93.f_1, 0x00000000);
				}
				else
				{
					unk_0x9D7CDDB4B55142AF(Local_93.f_1, 0x00000004);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000C))
				{
					unk_0xDC5B2F9D0CCE3A10(Local_93.f_1, "FM_GDM_BLP");
					unk_0x5D96D8530B3D0904(&iLocal_81, 0x0000000C);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000006))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000007) && !func_186(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						if (!func_204())
						{
							func_180("FM_GDM_KIL", 0x00000000);
						}
						unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000006);
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000007))
			{
				func_55();
				unk_0x0674E58A79778E99(&iLocal_81, 0x00000006);
			}
			else if (func_179())
			{
				func_55();
				unk_0x0674E58A79778E99(&iLocal_81, 0x00000006);
			}
			else if (func_186(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				func_55();
				unk_0x0674E58A79778E99(&iLocal_81, 0x00000006);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000006))
		{
			func_55();
			unk_0x0674E58A79778E99(&iLocal_81, 0x00000006);
		}
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[unk_0x57270EE11514DC67() /*3*/], 0x00000001))
		{
			iVar1 = unk_0x39DDAA68EF6A6BF4(Local_73.f_9[0x00000000], &uVar0);
			if (iVar1 == unk_0xD803B885F5E47A62())
			{
				unk_0x5D96D8530B3D0904(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000001);
				iVar2 = func_176(func_178(unk_0xD803B885F5E47A62(), 0x00000001), 0x00000001);
				if (iVar2 > 0x00000064)
				{
					iVar2 = 0x00000064;
				}
				iVar3 = iVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_40001.f_1085 * IntToFloat(iVar3)));
				func_133(0x00000002, "XPT_KAIE", 0x91280CCE, 0x7F093492, iVar3, 0x00000001, 0xFFFFFFFF, 0x00000000);
				if (Global_40001.f_977 != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_40001.f_977);
				}
				else
				{
					iVar4 = 0x000007D0;
				}
				if (Global_40001.f_973 != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_40001.f_973);
				}
				else
				{
					iVar5 = 0x00001F40;
				}
				if (iVar4 >= 0x00000064)
				{
					iVar6 = (iVar4 / 0x00000064);
				}
				if (iVar5 >= 0x00000064)
				{
					iVar7 = (iVar5 / 0x00000064);
				}
				iVar8 = unk_0x09AC81E49EA267F7(iVar6, iVar7 + 1) * 100;
				iVar8 = func_132(iVar8, 0x00000001);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_79(&iVar8, 0x00000001);
				if (func_78())
				{
					if (iVar8 > 0x00000000)
					{
						func_66(0xEAFF75BD, iVar8, &iVar9, 0x00000000, 0x00000000, 0x00000000);
						Global_411012[iVar9 /*85*/] = 0xBBAA1D53;
					}
				}
				else
				{
					unk_0xDF9A19F19D39D17D(iVar8, 0xBBAA1D53);
				}
				func_65(0x00000005, iVar8);
			}
			else if (iVar1 != func_64())
			{
				if (unk_0x40B8C182D63932FC(iVar1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[unk_0x57270EE11514DC67() /*3*/], 0x00000007))
					{
						if (!unk_0xFB75B0F82CA525F6(iVar1))
						{
							unk_0x5D96D8530B3D0904(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000007);
						}
					}
				}
			}
		}
	}
}

int func_64()
{
	return 0xFFFFFFFF;
}

void func_65(int iParam0, int iParam1)
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

void func_66(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_78())
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
				func_67(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_67(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_67(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_67(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_78())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_74(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_73(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_68(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_69(iParam0);
	}
}

void func_69(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_78())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_72(iParam0))
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
		func_70(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_70(var uParam0)
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
	func_71(&(uParam0->f_E));
	func_71(&(uParam0->f_E.f_D));
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

void func_71(var uParam0)
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

int func_72(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_73(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_78())
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
			if (iParam1 == 0xBC537E0D && iParam10)
			{
				func_75(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_75(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_77(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_76();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_76()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_77(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_78()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_131())
		{
			if (func_130(0x00000000))
			{
				if (!func_126(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_125()))
					{
						if (func_124() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_124());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_122(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_84("GB_BCUT_TICK1", func_125(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_83(0x00000014);
						func_80(func_125(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_388(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_82(iParam0);
		func_81(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_77(iParam0));
	}
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_82(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_84(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_91(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_89(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_85(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_85(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_88() || !unk_0xA14BB9332558B949()) || !func_17(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_86(iParam2);
	if (iVar0 >= 0x00000000 && iVar0 < 0x00000005)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000000] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000001] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000002] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000000 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000001 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000002 /*6*/]), sParam11, 24);
	}
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_87(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 0x00000005)
	{
		Global_197EBE = 0x00000005;
		return Global_197EBE;
	}
	return (Global_197EBE - 0x00000001);
}

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_88()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

var func_89(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_90(&cVar0);
}

var func_90(char[4] cParam0)
{
	return cParam0;
}

int func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_358(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (iParam1 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar0] != 0xFFFFFFFF)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_358(unk_0xD803B885F5E47A62()) || (func_121() && func_120())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_119();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_388(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_117(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_104(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_104(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_117(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_92(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_92(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_117(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_104(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_104(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_92(bool bParam0, int iParam1, bool bParam2)
{
	return func_93(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_103() || (func_102() && func_100())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_99(iParam2, iVar0);
		}
		else
		{
			return func_99(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_98(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_97(0x00000001);
				}
				else
				{
					return func_97(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_94(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_94(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_97(0x00000001);
	}
	return func_97(0x00000000);
}

int func_94(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (func_95(Global_440000.f_2F9AE, 0x00000001))
	{
		if (iVar0 == 0x00000001)
		{
			iVar0 = 0x00000000;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			
			case 0x00000003:
				return 0x0000001F;
			
			case 0x00000004:
				return 0x00000020;
			
			case 0x00000005:
				return 0x00000021;
			
			case 0x00000006:
				return 0x00000022;
			
			case 0x00000007:
				return 0x00000023;
			
			case 0x00000008:
				return 0x00000024;
			
			case 0x00000009:
				return 0x00000025;
			
			case 0x0000000A:
				return 0x00000026;
			
			case 0x0000000B:
				return 0x00000027;
			
			case 0x0000000C:
				return 0x00000028;
			
			case 0x0000000D:
				return 0x00000029;
			
			case 0x0000000E:
				return 0x0000002A;
			
			case 0x0000000F:
				return 0x0000002B;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			}
		
		default:
	}
	return 0x0000001C;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_98(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_98(int iParam0, int iParam1, int iParam2)
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

int func_99(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_96(iParam1, iParam0, 0x00000004);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		default:
	}
	return 0x0000001C;
}

bool func_100()
{
	if (func_101())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_102()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_103()
{
	if (func_101() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_104(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = iParam0;
	if (iVar2 > 0xFFFFFFFF)
	{
		if (Global_184507[iVar2 /*876*/] == 0x00000094)
		{
			bVar1 = 0x00000001;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			if (func_113())
			{
				iVar3 = func_109(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_107(iVar3);
				}
			}
			if ((func_106(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_98(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_97(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_105(0x00000001);
			}
			else
			{
				return func_93(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_97(0x00000001);
			}
			else
			{
				return func_93(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_109(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_107(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_105(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0xFFFFFFFE)
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && iParam2 == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_107(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_108(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_108(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_109(int iParam0)
{
	if (!iParam0 == func_64())
	{
		if (func_111(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_110(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_110(int iParam0)
{
	if (iParam0 != func_64())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_64();
}

bool func_111(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_112(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_64();
}

int func_112(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_64())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_113()
{
	if (((func_116() || func_115()) || func_23()) || func_114())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_114()
{
	return Global_2564C8.f_13;
}

var func_115()
{
	return Global_2564C8.f_10;
}

var func_116()
{
	return Global_2564C8.f_F;
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_113())
	{
		iVar2 = func_109(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_107(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_64())
	{
		if (Global_440000.f_2E673[iParam0] != 0xFFFFFFFF && Global_440000.f_2E673[iParam0] <= 0x00000004)
		{
			if (Global_440000.f_2E673[iParam0] == 0x00000000)
			{
				iVar0 = 0x0000000F;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000001)
			{
				iVar0 = 0x00000012;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000002)
			{
				iVar0 = 0x00000018;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001D))
				{
					iVar0 = 0x00000015;
				}
				else
				{
					iVar0 = 0x00000006;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_93(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_118(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_98(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_105(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_118(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 0x00000001:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 0x00000002:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 0x00000003:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		case 0x00000004:
			return 0x00000006;
		
		case 0x00000005:
			return 0x00000009;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000C;
		
		case 0x00000009:
			return 0x00000002;
		
		default:
	}
	return 0x00000002;
}

var func_119()
{
	return Global_240006.f_2;
}

bool func_120()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_121()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

void func_122(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_123(0x00000001);
	}
	else
	{
		iVar1 = func_123(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_123(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_124()
{
	return Global_40001.f_3065;
}

int func_125()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_126(bool bParam0)
{
	return func_127(unk_0xD803B885F5E47A62(), bParam0);
}

int func_127(int iParam0, bool bParam1)
{
	return func_128(iParam0, bParam1, 0x00000001);
}

int func_128(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_129(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_64() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_64())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_130(bool bParam0)
{
	return func_111(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_131()
{
	return func_112(unk_0xD803B885F5E47A62());
}

int func_132(int iParam0, int iParam1)
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

var func_133(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_134(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_134(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_135(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_135(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_175(unk_0xD803B885F5E47A62()) || func_174(unk_0xD803B885F5E47A62()))
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
	else if (func_172() || func_168(unk_0xD803B885F5E47A62()))
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
	if (func_167(sParam2))
	{
	}
	if (func_166())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_164(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_163(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_161(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_161(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_158(&iVar1);
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
			func_155(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_146((func_154(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_155(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_140(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_136((func_138(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_136((func_138(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_136(int iParam0)
{
	if (func_166())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_137(joaat("mpply_globalxp"), iParam0);
	}
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_138(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_388(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_139(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_139(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_139(int iParam0)
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

void func_140(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_145(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_143(func_144(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_142(&Global_152D8B, iParam0);
				func_141(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_142(&Global_152D8C, iParam0);
				func_141(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_142(&Global_152D8D, iParam0);
				func_141(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_142(&Global_152D8E, iParam0);
				func_141(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_142(&Global_152D8F, iParam0);
				func_141(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_141(int iParam0, int iParam1)
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

void func_142(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_143(int iParam0)
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

int func_144(var uParam0)
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

struct<13> func_145(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	if (func_166())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_153(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_153(0xFFFFFFFF)])
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
		if (func_152(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_176(iParam0, 0x00000001);
		}
		func_151(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_150(0x00000280, func_176(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_153(0xFFFFFFFF)] = iParam0;
		func_147(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_149(iParam1, iParam2))
	{
		iVar0 = func_148();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_148()
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

int func_149(int iParam0, var uParam1)
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

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_153(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_153(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_153(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_152(int iParam0)
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

int func_153(int iParam0)
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

int func_154(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_153(0xFFFFFFFF)];
			}
			else if (func_152(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_153(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_157(iParam0, func_153(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_156(iParam0))
	{
		func_150(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_151(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_156(int iParam0)
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

int func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_153(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_158(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_98(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_160(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_159(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_159(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_159(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_160(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_145(iParam0) };
		Global_26594F = { func_145(iParam1) };
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

void func_161(bool bParam0, int iParam1)
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
				if (func_388(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_160(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_388(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_162(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_160(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_159(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_159(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_162(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_21(iParam0), func_21(iParam1));
	return 0f;
}

int func_163(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_159(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_164(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_154(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_154(unk_0xD803B885F5E47A62());
		}
	}
	if (func_165(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_165(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_154(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_165(0x00001F40, 0x00000000, 0x00000000) - func_154(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_165(int iParam0, bool bParam1, int iParam2)
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

int func_166()
{
	return 0x00000001;
}

int func_167(char* sParam0)
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

int func_168(int iParam0)
{
	return func_169(func_170(iParam0));
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_170(int iParam0)
{
	if (func_171(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_171(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_172()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_23();
	}
	return func_173(Global_440000.f_2F9AE);
}

int func_173(int iParam0)
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

bool func_174(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_175(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

int func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_177(iParam0, 0x00000000);
}

int func_177(int iParam0, int iParam1)
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

int func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(iParam0);
}

bool func_179()
{
	return Global_12061;
}

void func_180(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_184(sParam0))
	{
		return;
	}
	func_56();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_183();
	func_182(bParam1);
	func_181();
}

void func_181()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_183()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_184(char* sParam0)
{
	if (!func_61())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_185(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_185(char* sParam0)
{
	if (!func_61())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_186(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
		if (func_202(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam3)
	{
		if (func_201(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam4)
	{
		if (func_200(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam5)
	{
		if (func_199(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam6)
	{
		if (func_198(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam7)
	{
		if (func_197(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam8)
	{
		if (func_196(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam9)
	{
		if (func_195(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam10)
	{
		if (func_194(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam11)
	{
		if (func_193(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!bParam12)
	{
		if (func_192(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam13)
	{
		if (func_191(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam14)
	{
		if (func_190(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam15)
	{
		if (func_189(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam16)
	{
		if (func_187(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_187(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_190(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_191(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_192(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_193(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0x134B62B726CEC8E6(iVar0) == 0x897AFC65)
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_64())
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_194(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_195(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_196(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_64())
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_197(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_198(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_199(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_200(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_201(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_202(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_388(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_188(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000000;
			}
		}
	}
	return 0x00000000;
}

var func_203()
{
	return Global_24DDCF.f_714;
}

int func_204()
{
	if (func_205(0x00000012))
	{
		return 0x00000001;
	}
	if (func_205(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = func_157(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_218(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!iParam1 == Global_248844[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_248844[iVar0 /*46*/].f_4 && Global_248844[iVar0 /*46*/])
	{
		Global_248844[iVar0 /*46*/].f_4 = 0x00000001;
		func_210();
	}
	func_207(iVar0);
}

void func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_152CDD)
	{
		return;
	}
	if (Global_248844[iParam0 /*46*/].f_1A != 0xFFFFFFFF)
	{
		unk_0xD59AE843FA2C6B40(Global_248844[iParam0 /*46*/].f_1A);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_152CDD)
	{
		Global_248844[iVar0 /*46*/] = { Global_248844[iVar1 /*46*/] };
		Global_248844[iVar0 /*46*/] = { Global_248844[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_209(iVar0);
	Global_152CDD = (Global_152CDD - 0x00000001);
	if (Global_152CC0)
	{
		if (Global_152CBE > 0x00000000)
		{
			func_208();
		}
	}
}

void func_208()
{
	Global_152CC0 = 0x00000000;
}

void func_209(int iParam0)
{
	Global_248844[iParam0 /*46*/] = 0x00000000;
	Global_248844[iParam0 /*46*/].f_2 = 0x00000000;
	Global_248844[iParam0 /*46*/].f_3 = 0x00000000;
	Global_248844[iParam0 /*46*/].f_4 = 0x00000000;
	Global_248844[iParam0 /*46*/].f_5 = func_64();
	Global_248844[iParam0 /*46*/].f_6 = 0x00000091;
	Global_248844[iParam0 /*46*/].f_7 = 0x00000001;
	Global_248844[iParam0 /*46*/].f_8 = 0xFFFFFFFF;
	Global_248844[iParam0 /*46*/].f_9 = 0xFFFFFFFF;
	StringCopy(&(Global_248844[iParam0 /*46*/].f_A), "", 64);
	Global_248844[iParam0 /*46*/].f_1A = 0xFFFFFFFF;
	StringCopy(&(Global_248844[iParam0 /*46*/].f_1B), "", 32);
	Global_248844[iParam0 /*46*/].f_23 = 0xFFFFFFFF;
	Global_248844[iParam0 /*46*/].f_24 = 0xFFFFFFFF;
	Global_248844[iParam0 /*46*/].f_25 = 0x00000000;
	Global_248844[iParam0 /*46*/].f_27 = 0x00000000;
	Global_248844[iParam0 /*46*/].f_28 = 0xFFFFFFFF;
	Global_248844[iParam0 /*46*/].f_29 = 0x00000000;
	Global_248844[iParam0 /*46*/].f_2A = 0x00000000;
	Global_248844[iParam0 /*46*/].f_2B = 0x00000000;
	Global_248844[iParam0 /*46*/].f_2D = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		Global_248844[iParam0 /*46*/].f_26 = unk_0x2B6E0A53779D29EA();
	}
}

void func_210()
{
	Global_556C = (Global_556C - 0x00000001);
	if (Global_556C < 0x00000000)
	{
		func_217("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_211();
}

void func_211()
{
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_216(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_212(0x00000001);
			func_216(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
}

void func_212(int iParam0)
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
	
	Global_5571 = 0x00000000;
	Global_1F19 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		Global_1EF5[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		iVar1 = 0x00000000;
		if (func_215(0x0000000E))
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar2 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar2 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_214(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000001)
							{
								iVar3 = 0x00000000;
								while (iVar3 < 0x00000023)
								{
									if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0x00000000)
									{
										if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0x00000000)
										{
											if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
											{
												Global_5571++;
											}
										}
									}
									iVar3++;
								}
								func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000007)
							{
								if (Global_12B4E)
								{
									iVar4 = 0x00000000;
									iVar4 = Global_4121D3;
									iVar5 = 0x00000000;
									while (iVar5 < 0x0000000C)
									{
										if (Global_4121D4[iVar5 /*104*/].f_18 != 0x00000000)
										{
											if (Global_4121D4[iVar5 /*104*/].f_1C == 0x00000000)
											{
												if (Global_4121D4[iVar5 /*104*/].f_63[Global_4C1E] == 0x00000001)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									switch (Global_4C1E)
									{
										case 0x00000000:
											iVar6 = Global_A66F;
											break;
										
										case 0x00000001:
											iVar6 = Global_A670;
											break;
										
										case 0x00000002:
											iVar6 = Global_A671;
											break;
										
										default:
											break;
									}
									func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_214(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_1CC2);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000002)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
								{
									iVar7 = 0x0000002A;
								}
								else
								{
									iVar7 = 0x000000FF;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_214(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar8 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar8 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_214(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000008)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_214(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 0x00000017 && unk_0x7F8A39872A07D2CE(&(Global_1CC3[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_214(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_213(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_213(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_214(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_214(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_214(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_214(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_214(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_214(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_215(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_216(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

void func_217(char* sParam0)
{
	if (Global_556C != 0x00000000)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam0))
		{
		}
		Global_556C = 0x00000000;
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_152CDD)
	{
		if (!Global_248844[iVar0 /*46*/].f_7)
		{
			if (Global_248844[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_219()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000011))
	{
		func_221(0x0000000C, 0x00000074, "", 0x00000001, 0x00000000, 0x00000001, 0x00000000);
		unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000011);
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000012))
	{
		if (func_220(0x0000000C, 0x00000074))
		{
			unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000012);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_220(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_218(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!iParam1 == Global_248844[iVar0 /*46*/].f_8)
	{
		return 0x00000000;
	}
	if (!Global_248844[iVar0 /*46*/].f_2)
	{
		return 0x00000000;
	}
	func_207(iVar0);
	Global_248CD1 = unk_0x1C0640BA9A7327B3() + 1500;
	return 0x00000001;
}

void func_221(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_218(iParam0);
	if (bParam5)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			func_207(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = 0x00000000;
	StringCopy(&Var3, "", 32);
	func_222(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, iParam4, iParam6);
}

void func_222(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar6;
	struct<13> Var7;
	int iVar8;
	
	iVar0 = func_64();
	iVar1 = 0x00000091;
	if (bParam2)
	{
		iVar0 = unk_0x117658E336116132(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_227())
		{
			return;
		}
	}
	iVar2 = Global_152CDD;
	if (iVar2 >= 0x0000000C)
	{
		iVar2 = (iVar2 - 0x00000001);
	}
	iVar3 = (iVar2 - 0x00000001);
	while (iVar3 >= 0x00000000)
	{
		Global_248844[iVar2 /*46*/] = { Global_248844[iVar3 /*46*/] };
		iVar2 = (iVar2 - 0x00000001);
		iVar3 = (iVar3 - 0x00000001);
	}
	Global_152CDD++;
	if (Global_152CDD > 0x0000000C)
	{
		Global_152CDD = 0x0000000C;
	}
	iVar4 = 0x00000000;
	if (Global_248844[0x00000001 /*46*/].f_1)
	{
		Global_248844[0x00000000 /*46*/] = { Global_248844[0x00000001 /*46*/] };
		Global_248844[0x00000001 /*46*/] = { Var5 };
		iVar4 = 0x00000001;
	}
	if (iVar4 == 0x00000000)
	{
		Global_248844[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_248844[iVar4 /*46*/].f_1 = 0x00000000;
	}
	Global_248844[iVar4 /*46*/] = 0x00000000;
	Global_248844[iVar4 /*46*/].f_2 = 0x00000000;
	Global_248844[iVar4 /*46*/].f_3 = 0x00000000;
	Global_248844[iVar4 /*46*/].f_4 = 0x00000000;
	Global_248844[iVar4 /*46*/].f_5 = iVar0;
	Global_248844[iVar4 /*46*/].f_6 = iVar1;
	Global_248844[iVar4 /*46*/].f_7 = bParam2;
	Global_248844[iVar4 /*46*/].f_8 = iParam0;
	Global_248844[iVar4 /*46*/].f_9 = 0xFFFFFFFF;
	StringCopy(&(Global_248844[iVar4 /*46*/].f_A), sParam3, 64);
	Global_248844[iVar4 /*46*/].f_1A = 0xFFFFFFFF;
	StringCopy(&(Global_248844[iVar4 /*46*/].f_1B), sParam4, 32);
	Global_248844[iVar4 /*46*/].f_23 = iParam6;
	Global_248844[iVar4 /*46*/].f_24 = iParam7;
	Global_248844[iVar4 /*46*/].f_25 = 0x00000000;
	Global_248844[iVar4 /*46*/].f_26 = unk_0x2B6E0A53779D29EA();
	Global_248844[iVar4 /*46*/].f_27 = uParam5;
	Global_248844[iVar4 /*46*/].f_28 = Global_248CD0;
	Global_248844[iVar4 /*46*/].f_2C = iParam8;
	Global_248844[iVar4 /*46*/].f_2D = uParam9;
	if (iParam0 == 0x0000007B || iParam0 == 0x000000EA)
	{
		Global_248844[iVar4 /*46*/].f_9 = func_224();
	}
	Global_248CD0++;
	func_223();
	Global_248844[iVar4 /*46*/].f_29 = 0x00000000;
	Global_248844[iVar4 /*46*/].f_2A = 0x00000000;
	Global_248844[iVar4 /*46*/].f_2B = 0x00000000;
	if (unk_0xDC30EF462887322E())
	{
		if (bParam2)
		{
			bVar6 = 0x00000001;
			if (bVar6)
			{
				Var7 = { func_145(iVar0) };
				iVar8 = unk_0xCB1A6FC304A3D66F(&Var7);
				if (iVar8 != 0xFFFFFFFF)
				{
					Global_248844[iVar4 /*46*/].f_29 = iVar8;
					Global_248844[iVar4 /*46*/].f_2A = 0x00000001;
					Global_248844[iVar4 /*46*/].f_2B = 0x00000000;
				}
			}
		}
	}
}

void func_223()
{
	Global_152CC2 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00007530);
}

int func_224()
{
	vector3 vVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_226() };
	if (unk_0xEA6BC48857E0AC4C(&cVar0) || unk_0x7F8A39872A07D2CE(".", &cVar0))
	{
		return 0xFFFFFFFF;
	}
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		switch (iVar1)
		{
			case 0x00000000:
				StringCopy(&cVar0, func_225(0x00000035, 0xFFFFFFFF), 24);
				break;
			
			case 0x00000001:
				StringCopy(&cVar0, func_225(0x00000036, 0xFFFFFFFF), 24);
				break;
			
			case 0x00000002:
				StringCopy(&cVar0, func_225(0x00000037, 0xFFFFFFFF), 24);
				break;
			
			case 0x00000003:
				StringCopy(&cVar0, func_225(0x00000038, 0xFFFFFFFF), 24);
				break;
			
			case 0x00000004:
				StringCopy(&cVar0, func_225(0x00000039, 0xFFFFFFFF), 24);
				break;
			
			case 0x00000005:
				StringCopy(&cVar0, func_225(0x0000003A, 0xFFFFFFFF), 24);
				break;
			
			case 0x00000006:
				StringCopy(&cVar0, func_225(0x0000003B, 0xFFFFFFFF), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0xEA6BC48857E0AC4C(&cVar0) && !unk_0x7F8A39872A07D2CE(".", &cVar0))
		{
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar3 = func_157(0x0000253D, 0xFFFFFFFF, 0x00000000);
	iVar4 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < iVar2)
	{
		iVar4 = iVar1 * 3;
		if (iVar4 != 0xFFFFFFFF)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iVar3, iVar4))
			{
				return 0x00000007;
			}
		}
		iVar1++;
	}
	return 0x00000001;
}

char* func_225(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_277143[iParam0 /*3*/][func_153(iParam1)];
	return unk_0xD3B92504E570C221(uVar0, 0xFFFFFFFF);
}

struct<6> func_226()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEA6BC48857E0AC4C(&(Global_1973D7.f_A)))
	{
		iVar2 = func_157(0x0000253E, 0xFFFFFFFF, 0x00000000);
		if (iVar2 == 0x00000000)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = 0x00000000;
			while (iVar1 < 0x000004C2)
			{
				if ((Global_C2055.f_4[iVar1 /*88*/].f_41 == 0x00000000 && Global_C2055.f_4[iVar1 /*88*/].f_44 == 0x00000001) && unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar1 /*88*/].f_4C, 0x0000000D))
				{
					if (Global_C2055.f_1A2B5[iVar1 /*13*/].f_1 == iVar2)
					{
						Var0 = { Global_C2055.f_1E09D[Global_C2055.f_1A2B5[iVar1 /*13*/].f_A /*6*/] };
						iVar1 = 0x000004C2;
					}
				}
				iVar1++;
			}
			if (unk_0xEA6BC48857E0AC4C(&Var0))
			{
			}
		}
		Global_1973D7.f_A = { Var0 };
		return Var0;
	}
	return Global_1973D7.f_A;
}

bool func_227()
{
	return Global_140845 == 0x0000000A;
}

void func_228()
{
	int iVar0;
	
	iVar0 = Global_152E10[func_153(0xFFFFFFFF)];
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
	func_151(0x00000517, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (bParam1)
	{
		iVar0 = 0xFFFFFFFF;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Global_200000[func_230() /*10930*/].f_181E.f_13 = iVar0;
			break;
		
		case 0x00000013:
			Global_200000[func_230() /*10930*/].f_181E.f_12 = iVar0;
			break;
		
		case 0x0000004A:
			Global_200000[func_230() /*10930*/].f_181E.f_C = iVar0;
			break;
		
		case 0x0000001D:
			Global_200000[func_230() /*10930*/].f_181E.f_E = iVar0;
			break;
		
		case 0x00000008:
			Global_200000[func_230() /*10930*/].f_181E.f_F = iVar0;
			break;
		
		case 0x0000001F:
			Global_200000[func_230() /*10930*/].f_181E.f_10 = iVar0;
			break;
		
		case 0x00000003:
			Global_200000[func_230() /*10930*/].f_181E.f_14 = iVar0;
			break;
		
		case 0x00000006:
			Global_200000[func_230() /*10930*/].f_181E.f_11 = iVar0;
			break;
		
		case 0x00000067:
		case 0x00000068:
		case 0x00000062:
		case 0x00000069:
			Global_200000[func_230() /*10930*/].f_181E.f_17 = iVar0;
			break;
		
		case 0x0000004C:
			Global_200000[func_230() /*10930*/].f_181E.f_18 = iVar0;
			break;
		
		case 0x0000005D:
			Global_200000[func_230() /*10930*/].f_181E.f_19 = iVar0;
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x0000004D:
		case 0x00000051:
			Global_200000[func_230() /*10930*/].f_181E.f_1A = iVar0;
			break;
		
		case 0x00000041:
		case 0x0000004B:
		case 0x0000005F:
			Global_200000[func_230() /*10930*/].f_181E.f_1B = iVar0;
			break;
			break;
		
		case 0x00000061:
			Global_200000[func_230() /*10930*/].f_181E.f_1D = iVar0;
			break;
		
		case 0x00000058:
			Global_200000[func_230() /*10930*/].f_181E.f_1C = iVar0;
			break;
		
		case 0x00000064:
			Global_200000[func_230() /*10930*/].f_181E.f_1F = iVar0;
			break;
		
		case 0x0000006A:
			Global_200000[func_230() /*10930*/].f_181E.f_20 = iVar0;
			break;
		
		case 0x00000063:
			Global_200000[func_230() /*10930*/].f_181E.f_1E = iVar0;
			break;
	}
}

int func_230()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_231()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000004))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000008) || (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000008) && func_38(&uLocal_84, 0x000927C0, 0x00000000)))
		{
			if (func_237(Local_73.f_5))
			{
				unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000004);
				unk_0x0674E58A79778E99(&iLocal_81, 0x00000008);
			}
		}
	}
	else if (!func_236())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000013))
		{
			if (func_235())
			{
				unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000013);
			}
			else if (!func_234() && !func_232())
			{
				unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000008);
				unk_0x0674E58A79778E99(&iLocal_81, 0x00000004);
				func_45(&uLocal_84, 0x00000000, 0x00000000);
				iLocal_80 = 0x00000000;
			}
		}
		else if (!func_232())
		{
			if (func_234())
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000008);
		unk_0x0674E58A79778E99(&iLocal_81, 0x00000004);
		func_45(&uLocal_84, 0x00000000, 0x00000000);
		iLocal_80 = 0x00000000;
	}
	return 0x00000000;
}

bool func_232()
{
	return func_233();
}

bool func_233()
{
	return Global_14E99F.f_28 == 0x00000003;
}

bool func_234()
{
	return Global_14E99F.f_39.f_1;
}

int func_235()
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

int func_236()
{
	if (Global_553D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_237(int iParam0)
{
	int iVar0;
	
	switch (iLocal_80)
	{
		case 0x00000000:
			if (func_347(0x00000000, 0x00000001, 0x00000001, 0x00000001))
			{
				if (!func_346(0x0000000C, 0xFFFFFFFF))
				{
					func_338(iParam0);
					iLocal_80++;
				}
			}
			break;
		
		case 0x00000001:
			iVar0 = func_337(iParam0);
			func_336(iParam0);
			if (func_238(&uLocal_100, iVar0, "FM_1AU", sLocal_265, 0x00000000, 0x00000000))
			{
				unk_0x0674E58A79778E99(&iLocal_81, 0x0000000B);
				iLocal_80++;
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_238(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_334())
	{
		return 0x00000000;
	}
	if (func_333())
	{
		return 0x00000000;
	}
	sVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0xFFFFFF9D;
	return func_239(uParam0, iParam1, sParam2, sParam3, 0x00000001, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 0xFFFFFFFF);
}

int func_239(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 0x00000007)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam3) > 0x0000000F)
	{
		return 0x00000000;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	iVar1 = func_332(sParam2, sParam3);
	iVar2 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_331(iVar0, iVar1, iVar2))
	{
		return 0x00000001;
	}
	if (!func_326(iParam6))
	{
		return 0x00000000;
	}
	if (func_323(iVar0, iVar1, iVar2))
	{
		if (func_322())
		{
			return 0x00000000;
		}
		func_321();
		return func_246(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_245(iParam4))
	{
		return 0x00000000;
	}
	func_240(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0x00000000;
}

void func_240(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_14E99F.f_28.f_1 = iParam0;
	Global_14E99F.f_28.f_2 = iParam1;
	Global_14E99F.f_28.f_3 = iParam2;
	StringCopy(&(Global_14E99F.f_28.f_4), sParam3, 16);
	Global_14E99F.f_28.f_8 = iParam4;
	Global_14E99F.f_28.f_9 = iParam5;
	Global_14E99F.f_28.f_E = iParam6;
	func_241(iParam4);
	func_321();
	Global_14E99F.f_28.f_D = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001B58);
}

void func_241(int iParam0)
{
	if (func_244(iParam0))
	{
		func_243();
		return;
	}
	func_242();
}

void func_242()
{
	Global_14E99F.f_28.f_A = 0x00000000;
}

void func_243()
{
	Global_14E99F.f_28.f_A = 0x00000001;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
		case 0x00000005:
			return 0x00000001;
		
		case 0x00000000:
		case 0x00000001:
		case 0x00000007:
		case 0x00000008:
		case 0x00000002:
		case 0x00000003:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

bool func_245(int iParam0)
{
	return iParam0 > Global_14E99F.f_28.f_8;
}

int func_246(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_320();
	if (iParam6 == 0x00000005)
	{
		iParam6 = 0x00000000;
	}
	if (iParam5 == 0x00000008)
	{
		return func_317(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 0x00000004)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_314(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 0x00000001 || iParam5 == 0x00000007)
	{
		if (iParam6 == 0x00000002)
		{
			return func_317(uParam0, sParam3, sParam4);
		}
		return func_297(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 0x00000005)
	{
		return func_296(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000002)
	{
		return func_284(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000003)
	{
		return func_283(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000006)
	{
		return func_247(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0x00000000;
}

int func_247(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_282();
	bVar0 = 0x00000001;
	if (func_249(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_248(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_248(int iParam0)
{
	Global_14E99F.f_28.f_B = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_14E99F.f_28.f_C = 0x00000001;
}

int func_249(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_64();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_276(iVar0);
		if (iVar1 == 0x00000000)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_14E99F.f_28.f_D))
			{
				return 0x00000000;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0x00000000;
	sVar4 = func_275(sParam5, bParam6, &iVar3);
	uVar5 = func_273(iParam7, &iVar3);
	iVar6 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = 0x00000001;
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x00000001;
	iVar11 = 0x00000000;
	if (bParam3)
	{
		iVar9 = 0x00000001;
		iVar10 = 0x00000002;
		iVar11 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000001))
		{
			iVar8 = 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000002))
	{
		iVar10 = 0x00000002;
	}
	bVar12 = 0x00000000;
	if (!iVar3 == 0x00000000 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_272(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_253(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_252();
	}
	func_282();
	func_251();
	func_250();
	return 0x00000001;
}

void func_250()
{
	Global_14E99F.f_39 = 0x00000000;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_251()
{
	Global_14E99F.f_28 = 0x00000003;
}

void func_252()
{
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000008);
}

int func_253(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_254(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_254(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_265();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_4126B6 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appemail")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appmpemail")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_264() == 0x00000000)
	{
		func_262();
		return 0x00000000;
	}
	func_261(Global_4126B5);
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/]), sParam1, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_11 = iParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_4121D4[Global_4126B5 /*104*/].f_18 = iParam2;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_19 = iParam7;
	Global_4121D4[Global_4126B5 /*104*/].f_1A = uParam8;
	Global_4121D4[Global_4126B5 /*104*/].f_1D = uParam9;
	Global_4121D4[Global_4126B5 /*104*/].f_1E = uParam12;
	Global_4121D4[Global_4126B5 /*104*/].f_1F = uParam11;
	Global_4121D4[Global_4126B5 /*104*/].f_1C = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_21), sParam4, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_32), sParam5, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_53), sParam15, 64);
	func_265();
	switch (iParam16)
	{
		case 0x00000003:
			Global_4121D4[Global_4126B5 /*104*/].f_63[Global_4C1E] = 0x00000001;
			break;
		
		case 0x00000000:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000000] = 0x00000001;
			break;
		
		case 0x00000002:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000002] = 0x00000001;
			break;
		
		case 0x00000001:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000001] = 0x00000001;
			break;
	}
	if (iParam16 == 0x00000003)
	{
		switch (Global_4C1E)
		{
			case 0x00000000:
				func_260(0x00000000);
				break;
			
			case 0x00000001:
				func_260(0x00000001);
				break;
			
			case 0x00000002:
				func_260(0x00000002);
				break;
			
			case 0x00000003:
				func_260(0x00000003);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 0x00000001)
	{
		switch (iParam16)
		{
			case 0x00000003:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000000:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000002:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000001:
				Global_4126B6 = 0x00000001;
				break;
			}
	}
	Global_5572[Global_4126B5] = 0x00000000;
	if (bParam10)
	{
		func_265();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_259())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_216(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_212(0x00000001);
			func_216(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_255(iParam0, sParam1);
	return 0x00000001;
}

void func_255(int iParam0, char* sParam1)
{
	if (!func_256())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(iParam0, 0xB9A1844D, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

int func_256()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_64())
	{
		return 0x00000000;
	}
	if (func_257(unk_0xD803B885F5E47A62()))
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

bool func_257(int iParam0)
{
	return func_258(iParam0, 0x00000014);
}

bool func_258(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

bool func_259()
{
	return Global_14086D;
}

void func_260(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_261(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_4121D4[iParam0 /*104*/].f_12 = iVar0;
	Global_4121D4[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_4121D4[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_4121D4[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_4121D4[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_4121D4[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_262()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar2 = iVar0;
	Global_4126B5 = 0x0000000B;
	Global_4121D4[Global_4126B5 /*104*/].f_12 = 0xFFFFFFFF;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_1 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_2 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_3 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_263(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
		{
			Global_4126B5 = iVar2;
		}
		iVar2++;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_18 = 0x00000001;
}

int func_263(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_264()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4121D4[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_4126B5 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4126B5 = 0x0000000B;
	Global_4121D4[Global_4126B5 /*104*/].f_12 = 0xFFFFFFFF;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_1 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_2 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_3 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_4121D4[iVar2 /*104*/].f_18 == 0x00000000 || Global_4121D4[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_263(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
			{
				Global_4126B5 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4126B5 == 0x0000000B)
	{
		return 0x00000000;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

void func_265()
{
	if (func_215(0x0000000E))
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
		Global_4C1E = func_266();
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

var func_266()
{
	func_267();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_267()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_270(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_269(unk_0x16F2683693E537C9());
			if (func_268(iVar0) && (!func_215(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_268(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_268(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_270(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_270(int iParam0)
{
	if (func_268(iParam0))
	{
		return func_271(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_271(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_272(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0x00000000:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 0x00000001:
			sParam16 = "NULL";
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	iVar0 = 0x00000003;
	if (func_254(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_273(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFF9D)
	{
		return 0xFFFFFF9D;
	}
	func_274(0x00000002, iParam1);
	return iParam0;
}

void func_274(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	bVar0 = 0x00000000;
	bVar1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			bVar1 = 0x00000001;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 0x00000001:
			case 0x00000003:
				break;
			
			case 0x00000000:
				*uParam1 = 0x00000001;
				break;
			
			case 0x00000002:
				*uParam1 = 0x00000003;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 0x00000002:
			case 0x00000003:
				break;
			
			case 0x00000000:
				*uParam1 = 0x00000002;
				break;
			
			case 0x00000001:
				*uParam1 = 0x00000003;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_275(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_274(0x00000001, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = func_279(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_277(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_277(int iParam0, bool bParam1)
{
	if (!func_388(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_279(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_278(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_278(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_279(int iParam0)
{
	int iVar0;
	
	if (!func_388(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_280(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_280(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_281(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_281(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_64();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_282()
{
	Global_14E99F.f_28.f_9 = 0x00000004;
}

int func_283(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_282();
	bVar0 = 0x00000000;
	return func_249(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_284(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	return func_285(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_285(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_64();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_276(iVar0);
		if (iVar1 == 0x00000000)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_14E99F.f_28.f_D))
			{
				return 0x00000000;
			}
		}
		Global_556A = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0x00000000;
	sVar4 = func_275(sParam5, bParam6, &iVar3);
	uVar5 = func_273(iParam7, &iVar3);
	iVar6 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = 0x00000001;
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x00000001;
	iVar11 = 0x00000000;
	if (bParam3)
	{
		iVar9 = 0x00000001;
		iVar10 = 0x00000002;
		iVar11 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000001))
		{
			iVar8 = 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000002))
	{
		iVar10 = 0x00000002;
	}
	bVar12 = 0x00000000;
	if (!iVar3 == 0x00000000 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_295(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_287(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_252();
	}
	func_286();
	func_251();
	func_250();
	return 0x00000001;
}

void func_286()
{
	Global_14E99F.f_28.f_9 = 0x00000003;
}

int func_287(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_289(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_288(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_288(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_289(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_265();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_294() == 0x00000000)
	{
		func_292();
		return 0x00000000;
	}
	func_291(Global_5570);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/]), sParam1, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_11 = iParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_18 = iParam2;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_19 = iParam7;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1A = uParam8;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1D = uParam9;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1E = uParam12;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1F = uParam11;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1C = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21), sParam4, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_32), sParam5, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
		Global_1F7E = 0x00000004;
		func_260(0x00000000);
		func_260(0x00000002);
		func_260(0x00000001);
	}
	else
	{
		func_265();
		switch (iParam16)
		{
			case 0x00000003:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[Global_4C1E] = 0x00000001;
				break;
			
			case 0x00000000:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
				break;
			
			case 0x00000002:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
				break;
			
			case 0x00000001:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
				break;
		}
		if (iParam16 == 0x00000003)
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					func_260(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_260(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_260(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_260(0x00000003);
					Global_1F7E = 0x00000003;
					break;
				
				default:
					Global_1F7E = 0x00000004;
					break;
				}
			}
	}
	if (iParam7 == 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
		{
			Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
		}
		else
		{
			switch (iParam16)
			{
				case 0x00000003:
					Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000000:
					Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000002:
					Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000001:
					Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
					break;
				}
			}
	}
	Global_5572[Global_5570] = 0x00000000;
	if (bParam10)
	{
		func_265();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_259())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_216(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_212(0x00000001);
			func_216(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_290(iParam0, sParam1);
	return 0x00000001;
}

void func_290(int iParam0, char* sParam1)
{
	if (!func_256())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(iParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_1B416.f_3738[iParam0 /*104*/].f_12 = iVar0;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_292()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_293(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_293(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_294()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_5570 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000 || Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_293(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
			{
				Global_5570 = iVar2;
			}
		}
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000002)
		{
		}
		iVar2++;
	}
	if (Global_5570 == 0x00000022)
	{
		return 0x00000000;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

int func_295(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0x00000000:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 0x00000001:
			sParam16 = "NULL";
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000003;
	if (func_289(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			Global_1F1E[0x00000003 /*6*/] = { func_288(iParam0) };
			Global_1F6B = iParam0;
			StringCopy(&Global_1F6C, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_296(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	func_286();
	bVar0 = 0x00000001;
	if (func_285(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_248(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_297(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
	}
	bVar0 = 0x00000000;
	iVar1 = 0x0000000C;
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000007))
	{
		iVar1 = 0x00000009;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000004))
	{
		bVar0 = func_313(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		bVar0 = func_303(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
		{
			func_302(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000005))
		{
			func_301(0x00000001);
		}
		func_300();
		func_251();
		func_299();
		func_298();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_298()
{
	Global_26DB8C = 0x00000000;
}

void func_299()
{
	Global_14E99F.f_39 = 0x00000001;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_300()
{
	Global_14E99F.f_28.f_9 = 0x00000001;
}

void func_301(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBE, 0x00000000);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
	}
}

void func_302(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
	}
}

int func_303(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_312(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000000;
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
	return func_304(sParam3, iParam4, bParam7);
}

int func_304(char* sParam0, int iParam1, bool bParam2)
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
					func_311();
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
		if (func_346(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_310();
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
				func_265();
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
				if (func_309())
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
			if (func_308())
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
			func_307();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_306();
		func_305();
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
		func_311();
	}
	return 0x00000000;
}

void func_305()
{
	if (!func_256())
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

void func_306()
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

void func_307()
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

int func_308()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_309()
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

void func_310()
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

void func_311()
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

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_313(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_312(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_304(sParam3, iParam4, bParam7);
}

int func_314(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (func_316(uParam0, iParam1, sParam2, sParam3, 0x00000009, sParam4, 0x00000000, 0x00000000, 0x00000001))
	{
		func_315();
		func_300();
		func_251();
		func_299();
		func_298();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_315()
{
	Global_553F = 0x00000000;
}

bool func_316(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_312(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000001;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000001;
	Global_517B = 0x00000000;
	StringCopy(&Global_51D9, sParam5, 24);
	Global_280001 = 0x00000000;
	return func_304(sParam3, iParam4, bParam8);
}

int func_317(var uParam0, char* sParam1, char* sParam2)
{
	if (func_319(uParam0, sParam1, sParam2, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
	{
		func_318();
		func_251();
		func_299();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_318()
{
	Global_14E99F.f_28.f_9 = 0x00000002;
}

bool func_319(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_312(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_304(sParam2, iParam3, 0x00000000);
}

void func_320()
{
	Global_14E99F.f_37 = Global_14E99F.f_28.f_1;
	Global_14E99F.f_37.f_1 = Global_14E99F.f_28.f_A;
}

void func_321()
{
	Global_14E99F.f_28 = 0x00000001;
}

bool func_322()
{
	return Global_14E99F.f_28 == 0x00000001;
}

int func_323(int iParam0, int iParam1, int iParam2)
{
	if (!func_324(iParam0))
	{
		return 0x00000000;
	}
	if (Global_14E99F.f_28.f_2 != iParam1)
	{
		return 0x00000000;
	}
	if (iParam2 != 0x00000000)
	{
		if (Global_14E99F.f_28.f_3 != iParam2)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_324(int iParam0)
{
	if (!func_325())
	{
		return 0x00000000;
	}
	if (!Global_14E99F.f_28.f_1 == iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_325()
{
	if (Global_14E99F.f_28 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_326(int iParam0)
{
	if (func_330())
	{
		return 0x00000000;
	}
	if (func_233())
	{
		return 0x00000000;
	}
	if (func_329(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_1406D3.f_12 != 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_195C36 || func_328())
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 0x00000006))
	{
		if (func_327())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_327()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_152CC2);
}

int func_328()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_329(int iParam0)
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

bool func_330()
{
	return func_308();
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	if (!func_233())
	{
		return 0x00000000;
	}
	return func_323(iParam0, iParam1, iParam2);
}

int func_332(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_333()
{
	return Global_26D039.f_1;
}

int func_334()
{
	if (Global_14EA5B.f_2)
	{
		return 0x00000001;
	}
	return func_335();
}

bool func_335()
{
	return func_330();
}

void func_336(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000B))
	{
		switch (iParam0)
		{
			case 0x00000000:
				sLocal_265 = "FMA_KIL1";
				unk_0x5D96D8530B3D0904(&iLocal_81, 0x0000000B);
				break;
			}
	}
}

int func_337(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000090;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x0000000C;
			break;
	}
	return iVar0;
}

void func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_340(0x0000000C, 0x00000003, 0x00000000);
			func_339(&uLocal_100, 0x00000001, 0x00000000, "Lester", 0x00000000, 0x00000001);
			break;
	}
}

void func_339(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_340(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_1F6A = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_265();
		if (iParam1 == 0x00000004)
		{
			func_345(iParam0, 0x00000000, 0x00000001);
			func_345(iParam0, 0x00000001, 0x00000001);
			func_345(iParam0, 0x00000002, 0x00000001);
			func_344(iParam0, 0x00000000, 0x00000001);
			func_344(iParam0, 0x00000001, 0x00000001);
			func_344(iParam0, 0x00000002, 0x00000001);
		}
		else
		{
			if (func_343(iParam0, iParam1) == 0x00000001 && func_342(iParam0, iParam1) == 0x00000001)
			{
				bParam2 = 0x00000000;
			}
			iVar0 = iParam1;
			func_345(iParam0, iVar0, 0x00000001);
			func_344(iParam0, iVar0, 0x00000001);
		}
		if (bParam2)
		{
			if (!Global_12B4E)
			{
				if (iParam1 != 0x00000004)
				{
					if (Global_4C1E != iParam1)
					{
						Global_1F4F[iParam1 /*4*/] = { func_288(iParam0) };
						Global_1F60[iParam1] = 0x00000001;
						Global_1F65[iParam1] = iParam0;
					}
					else if (iParam0 == Global_4C1E)
					{
					}
					else
					{
						Global_1F1E[0x00000001 /*6*/] = { func_288(iParam0) };
						Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
						func_341();
					}
				}
				else
				{
					Global_1F1E[0x00000001 /*6*/] = { func_288(iParam0) };
					Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
					func_341();
				}
			}
			else
			{
				Global_1F1E[0x00000001 /*6*/] = { func_288(iParam0) };
				Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
				func_341();
			}
		}
	}
}

void func_341()
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

int func_342(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_343(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_344(int iParam0, int iParam1, int iParam2)
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

void func_345(int iParam0, int iParam1, int iParam2)
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

bool func_346(int iParam0, int iParam1)
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

int func_347(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (func_353())
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (func_352())
	{
		return 0x00000000;
	}
	if (func_362())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (func_51(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (bParam0)
	{
		if (func_50(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_351())
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
	if (func_350())
	{
		return 0x00000000;
	}
	if (func_349())
	{
		return 0x00000000;
	}
	if (func_360())
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
	if (func_348(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_348(int iParam0)
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

bool func_349()
{
	return Global_2564C8.f_24F;
}

bool func_350()
{
	return Global_2564C8.f_2E8;
}

bool func_351()
{
	return Global_2537E2.f_BE7.f_242;
}

bool func_352()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_353()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_354()
{
	int iVar0;
	
	iVar0 = Global_152E10[func_153(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
			{
				Global_2537E2.f_EB6.f_1[0x00000000] = unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]);
			}
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				Global_2537E2.f_EB6.f_4[0x00000000] = unk_0x1B50683925F00106(Local_73.f_9[0x00000000]);
			}
			break;
	}
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]) && unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_357(int iParam0, bool bParam1)
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

int func_358(int iParam0)
{
	if (func_17(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_359())
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

bool func_359()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_360()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

int func_361()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C5;
}

bool func_362()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

void func_363(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_364(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_388(iVar2, 0x00000000, 0x00000000))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_365()
{
	if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 >= 0x00000005 && vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 < 0x00000006)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000004))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000003))
			{
				if (func_388(Local_73.f_8, 0x00000000, 0x00000001))
				{
					func_366("FM_TGDM_KIL", Local_73.f_8, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000003);
			}
		}
	}
}

int func_366(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = unk_0x08067D4957B73C02(iParam1);
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		if ((iVar1 != 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iVar1 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar1] != 0xFFFFFFFF)
			{
				unk_0x3A820E495A7BA3E5(func_117(iVar1, iParam1, 0x00000000));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_91(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_91(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		}
		unk_0xD06AC7C87A34A6AD(func_89(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		}
		else
		{
			Global_265942 = { func_145(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942))
			{
				iVar3 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0x00000000)
				{
					iVar3 = 0x00000001;
				}
				if (Global_2658FC.f_15 > 0x00000000)
				{
					iVar4 = 0x00000000;
				}
				else
				{
					iVar4 = 0x00000001;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_367(&Var2) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar4, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar3, 0x00000000, Global_2658FC, &Var2, Global_140CF2, Global_140CF3, Global_140CF4);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar4, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar3, 0x00000000, Global_2658FC, Global_140CF2, Global_140CF3, Global_140CF4);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
			}
		}
		func_85(0x0000000E, sParam0, 0x00000001, &Var2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

struct<16> func_367(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_368()
{
	int iVar0;
	
	iVar0 = unk_0x57270EE11514DC67();
	if (iLocal_91 != Local_73.f_F)
	{
		iLocal_91 = Local_73.f_F;
		unk_0x28E5F00F131890E3(iLocal_91);
	}
	if (iLocal_92 != Local_73.f_10)
	{
		iLocal_92 = Local_73.f_10;
		unk_0x0BEC04ECA8485A3A(iLocal_92);
	}
	if (func_388(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000000))
		{
			if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000000)
			{
				if (func_361() == 0x00000000)
				{
					unk_0x5D96D8530B3D0904(&(vLocal_78[iVar0 /*3*/]), 0x00000000);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000000))
		{
			if ((func_51(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_48(unk_0xD803B885F5E47A62())) || func_361() > 0x00000000)
			{
				func_42(&uLocal_82);
				unk_0x0674E58A79778E99(&(vLocal_78[iVar0 /*3*/]), 0x00000000);
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000007))
					{
						unk_0x5D96D8530B3D0904(&iLocal_81, 0x00000007);
						func_376();
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x00000007))
				{
					unk_0x0674E58A79778E99(&iLocal_81, 0x00000007);
					if (!func_49(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						func_374();
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[iVar0 /*3*/], 0x00000003))
		{
			if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 > 0x00000003 && vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 < 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_EB6, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_78[iVar0 /*3*/]), 0x00000003);
				}
			}
		}
		if (vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 > 0x00000003)
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[unk_0x57270EE11514DC67() /*3*/], 0x00000005))
			{
				if (func_373(Local_73.f_5))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000005);
				}
			}
			else if (!func_373(Local_73.f_5))
			{
				unk_0x0674E58A79778E99(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000005);
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[unk_0x57270EE11514DC67() /*3*/], 0x00000006))
			{
				if (func_370(Local_73.f_5))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000006);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_78[unk_0x57270EE11514DC67() /*3*/], 0x00000008))
			{
				if (func_369())
				{
					unk_0x5D96D8530B3D0904(&(vLocal_78[unk_0x57270EE11514DC67() /*3*/]), 0x00000008);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_81, 0x0000000D))
		{
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				if (!func_40(Local_73.f_9[0x00000000]))
				{
					unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_81, 0x0000000D);
				}
			}
		}
	}
}

int func_369()
{
	if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
	{
		if (func_9(Local_73.f_C[0x00000000]))
		{
			if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]), 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]), 0x00000001, 0x00009C40))
			{
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

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				if (!func_40(Local_73.f_9[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (func_371(unk_0x1B50683925F00106(Local_73.f_9[0x00000000])))
						{
							return 0x00000001;
						}
					}
				}
			}
			break;
	}
	return 0x00000000;
}

int func_371(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	if (func_372())
	{
		if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar0))
		{
			if (unk_0xEC560E589DF8370E(iVar0))
			{
				iVar1 = unk_0x940C1429253D3B1B(iVar0);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
					{
						if (unk_0x405E212DDE472467(iVar1, 0x00000000))
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

bool func_372()
{
	return Global_180604;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				if (!func_40(Local_73.f_9[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000001)) < 40000f)
						{
							return 0x00000001;
						}
					}
				}
			}
			break;
	}
	return 0x00000000;
}

void func_374()
{
	if (!Global_14073F)
	{
		return;
	}
	func_375();
}

void func_375()
{
	Global_14073F = 0x00000000;
	StringCopy(&(Global_14073F.f_1), "", 32);
	Global_14073F.f_9 = 0x00000000;
}

void func_376()
{
	Global_14073F = 0x00000001;
	StringCopy(&(Global_14073F.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_14073F.f_9 = unk_0x12AB0310C2281427(&(Global_14073F.f_1));
}

void func_377()
{
	switch (Local_73.f_6)
	{
		case 0x00000001:
			if (unk_0xBFF81ED3B99522C7())
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
				{
					if (func_9(Local_73.f_C[0x00000000]))
					{
						if (!func_40(Local_73.f_9[0x00000000]))
						{
							if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000])))
							{
								if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0xF09B15B3) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0xF09B15B3) != 0x00000000)
								{
									unk_0xE072601B4380E9DF(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]), 20f, 0x000C00AB);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xBFF81ED3B99522C7())
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_C[0x00000000]))
				{
					if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
					{
						if (func_9(Local_73.f_C[0x00000000]))
						{
							if (!func_40(Local_73.f_9[0x00000000]))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000])))
								{
									if ((unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0xF09B15B3) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0xF09B15B3) != 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000009))
									{
										unk_0xE072601B4380E9DF(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), unk_0xB177666FAB6F4417(Local_73.f_C[0x00000000]), 30f, 0x000C0025);
										if (unk_0xEAE0D21A50E6C7F4(Local_73, 0x00000009))
										{
											unk_0x0674E58A79778E99(&Local_73, 0x00000009);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				if (!func_40(Local_73.f_9[0x00000000]))
				{
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0xCE98FBB3) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0xCE98FBB3) != 0x00000000)
					{
						if (func_381(Local_73.f_9[0x00000000]))
						{
							if (unk_0x526BC32A660C89E6(Local_73.f_9[0x00000000]))
							{
								unk_0x75CDA8644CD3B5F5(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x00000000, 0x00000000);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
			{
				if (!func_40(Local_73.f_9[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x6BA30179) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), 0x6BA30179) != 0x00000000)
						{
							if (func_381(Local_73.f_9[0x00000000]))
							{
								if (unk_0x526BC32A660C89E6(Local_73.f_9[0x00000000]))
								{
									unk_0xF3268524E9BE6D6E(unk_0x1B50683925F00106(Local_73.f_9[0x00000000]), unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000001);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0xE5DBF9B6126856CA(Local_73.f_9[0x00000000]))
	{
		if ((vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 >= 0x00000005 && vLocal_78[unk_0x57270EE11514DC67() /*3*/].f_2 < 0x00000006) && !func_186(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			func_378(Local_73.f_9[0x00000000], &Local_93, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
		}
		else
		{
			func_62(&Local_93);
		}
	}
}

void func_378(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_380())
		{
			Global_2537E2 = unk_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_379(unk_0x1B50683925F00106(iParam0), iParam1, 0x00000001, Global_2537E2, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_379(unk_0x1B50683925F00106(iParam0), iParam1, 0xFFFFFFFF, Global_2537E2, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*iParam1))
	{
		func_62(iParam1);
	}
}

int func_379(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
		unk_0xF947FFD8DA795A7F(iParam0, bParam4);
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

bool func_380()
{
	return Global_140856;
}

int func_381(int iParam0)
{
	if (unk_0x83F012E6200426DB(iParam0))
	{
		return 0x00000001;
	}
	if (func_382(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_382(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0x00000000;
	}
	if (!unk_0xE5DBF9B6126856CA(iParam0))
	{
		return 0x00000000;
	}
	if (func_383(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_383(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

int func_384()
{
	return Local_73.f_1;
}

int func_385(int iParam0)
{
	return vLocal_78[iParam0 /*3*/].f_1;
}

void func_386()
{
	func_55();
	func_357(0x0000000B, 0x00000000);
	func_206(0x0000000C, 0x00000074);
	unk_0x0674E58A79778E99(&(Global_2537E2.f_EB6), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_2537E2.f_EB6), 0x00000001);
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x57270EE11514DC67() > 0xFFFFFFFF)
		{
			vLocal_78[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0x23002DD5E7B94FD7(Local_73.f_3))
			{
				unk_0xBD63401BCCEC233B(Local_73.f_3);
			}
			Local_73.f_3 = 0xFFFFFFFF;
		}
	}
	if (unk_0xE4EDC4B0E92C078B(Global_195C17))
	{
		unk_0x142CC44DB769B57E(&Global_195C17);
	}
	unk_0x0674E58A79778E99(&iLocal_81, 0x00000003);
	unk_0x0674E58A79778E99(&iLocal_81, 0x00000004);
	iLocal_80 = 0x00000000;
	if (unk_0xE4EDC4B0E92C078B(Local_93))
	{
		unk_0x142CC44DB769B57E(&Local_93);
	}
	func_387();
}

void func_387()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_388(int iParam0, bool bParam1, bool bParam2)
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

int func_389()
{
	var uVar0;
	
	func_397(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_396())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_395())
	{
		return 0x00000001;
	}
	if (func_394(0x0000009F))
	{
		if (!func_393())
		{
			return 0x00000001;
		}
	}
	if (func_394(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_390() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_390()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_390()
{
	switch (func_392())
	{
		case 0x00000000:
			return func_391();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_391()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_392()
{
	return Global_7830;
}

bool func_393()
{
	return Global_2564C8.f_256;
}

int func_394(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_395()
{
	return Global_258C08;
}

bool func_396()
{
	return Global_2564C8.f_251;
}

void func_397(var uParam0)
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
					func_398(iVar0);
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

void func_398(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_388(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_399(iVar2, &bVar3))
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

int func_399(int iParam0, var uParam1)
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

void func_400()
{
	SYSTEM::WAIT(0x00000000);
}

void func_401(struct<21> Param0)
{
	func_404(func_405(Param0), Param0);
	func_403(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_73, 0x00000017);
	unk_0x35B62793EAE9ADDF(&vLocal_78, 0x00000061);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_402())
	{
		func_386();
	}
	unk_0x5D96D8530B3D0904(&(Global_2537E2.f_EB6), 0x00000000);
	unk_0x0674E58A79778E99(&(Global_2537E2.f_EB6), 0x00000001);
}

int func_402()
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
		if (func_396())
		{
			return 0x00000000;
		}
		if (func_394(0x0000009D))
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

int func_403(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_387();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_380())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_387();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_396())
				{
					if (!bParam2)
					{
						func_387();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_394(0x0000009D))
				{
					if (!bParam2)
					{
						func_387();
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
					func_387();
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
				func_387();
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
			func_387();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_404(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_387();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_405(int iParam0)
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

