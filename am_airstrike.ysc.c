#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 0x00000003;
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	if (unk_0x8CD06866876216F2())
	{
		func_111(ScriptParam_241);
	}
	while (0x00000001)
	{
		func_110();
		if (func_99())
		{
			func_95();
		}
		if (unk_0x8CD06866876216F2())
		{
			func_94();
			switch (func_93(unk_0x57270EE11514DC67()))
			{
				case 0x00000000:
					if (func_92() > 0x00000000)
					{
						Local_240[unk_0x57270EE11514DC67() /*5*/] = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if (func_92() == 0x00000003)
					{
						Local_240[unk_0x57270EE11514DC67() /*5*/] = 0x00000003;
					}
					break;
				
				case 0x00000003:
					func_95();
					break;
			}
			if (unk_0xBFF81ED3B99522C7())
			{
				switch (func_92())
				{
					case 0x00000000:
						Local_238 = 0x00000002;
						break;
					
					case 0x00000002:
						func_1();
						break;
					
					case 0x00000003:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_238.f_1)
	{
		case 0x00000000:
			func_26();
			break;
		
		case 0x00000001:
			func_25();
			break;
	}
	if (Local_238.f_2.f_2 == 0x00000003 && iLocal_57 == 0x00000000)
	{
		Local_238 = 0x00000003;
	}
	func_18();
	if (Local_238.f_35 && Local_238.f_32 < 0x0000000A)
	{
		func_13();
	}
	if (Local_238.f_32 >= 0x0000000A)
	{
		if (!func_12(&uLocal_65))
		{
			func_11(&uLocal_65, 0x00000000, 0x00000000);
		}
		else if (func_10(&uLocal_65, 0x00002710, 0x00000000))
		{
			Local_238 = 0x00000003;
		}
	}
	if (func_9())
	{
		Local_238 = 0x00000003;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
	{
		if (Local_238.f_37 == 0x00000001)
		{
			if (!Local_238.f_38)
			{
				if (((!unk_0xFEBC1E4EC9E001F0() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", 0xFFFFFFFF);
					Local_238.f_38 = 0x00000001;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			Local_238 = 0x00000003;
		}
	}
	else if (func_4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_3())
	{
		Local_238 = 0x00000003;
	}
	if (unk_0x22A8E52414415B76())
	{
		Local_238 = 0x00000003;
	}
	if (Global_265BE2.f_DF || func_2(unk_0xD803B885F5E47A62()))
	{
		Local_238 = 0x00000003;
	}
}

int func_2(int iParam0)
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

bool func_3()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0))
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

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

bool func_6(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_8(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_9()
{
	return Global_1406A2;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_11(uParam0, bParam2, 0x00000000);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	iVar0 = unk_0x16F2683693E537C9();
	iVar3 = 0x000000C8;
	if (unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
	{
		iVar0 = 0x00000000;
		iVar3 = 0x0000012C;
	}
	if (func_17(vLocal_61))
	{
		if (func_15(Local_238.f_2))
		{
			vLocal_61 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000001) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_32)
	{
		case 0x00000000:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x16F2683693E537C9(), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					iLocal_57 = 0x00000001;
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000002EE, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000001:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000001F4, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000002:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000001F4, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000003:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000002EE, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000004:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000001F4, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000005:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000002EE, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000006:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000001F4, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000007:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000001F4, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000008:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_11(&(Local_238.f_33), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_10(&(Local_238.f_33), 0x000001F4, 0x00000000))
			{
				func_14(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 0x00000009:
			if (!func_12(&(Local_238.f_33)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_32))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0x00000000, 0x00000000);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 0x00000001, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001, 0x00000000, -1f, iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					Local_238.f_32++;
					iLocal_57 = 0x00000000;
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_32);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_15(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_16(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_16(int iParam0)
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

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_18()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_15(Local_238.f_2))
	{
		iVar0 = unk_0xB177666FAB6F4417(Local_238.f_2);
		vVar2 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
	}
	if (!iLocal_59)
	{
		if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
		{
			vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
		}
		else if (func_24(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
	}
	if (iLocal_58 && !unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
	{
		if (!iLocal_59)
		{
			if (func_15(Local_238.f_2))
			{
				if (!unk_0x5A91F08DF773C39D(iVar0, vLocal_60, 75f, 75f, 1000f, 0x00000000, 0x00000001, 0x00000000))
				{
					fLocal_62 = unk_0x0EB28750412C3A5A(vVar2, vVar1, 0x00000000);
				}
				else
				{
					iLocal_59 = 0x00000001;
				}
			}
			else
			{
				iLocal_59 = 0x00000001;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = SYSTEM::FLOOR(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 0x00000006;
		}
		else
		{
			iVar4 = 0x00000001;
		}
		if (fLocal_62 >= 0f)
		{
			func_19(iVar3, "AIRSTRIKE_2", 0xFFFFFFFF, iVar4, 0x00000002, 0x00000000, "AIRSTRIKE_6", 0x00000000, 0f, 0x00000000, 0x00000000, iVar4, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_23(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_22(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = fParam8;
		Global_150976.f_F68.f_1F1[iVar0] = iParam9;
		Global_150976.f_F68.f_1FC[iVar0] = iParam10;
		Global_150976.f_F68.f_CD[iVar0] = iParam11;
		Global_150976.f_F68.f_D8[iVar0] = iParam12;
		Global_150976.f_F68.f_E3[iVar0] = iParam13;
		Global_150976.f_F68.f_EE[iVar0] = iParam14;
		Global_150976.f_F68.f_F9[iVar0] = iParam15;
		Global_150976.f_F68.f_207[iVar0] = iParam16;
		Global_150976.f_F68.f_212[iVar0] = iParam17;
		Global_150976.f_F68.f_21D[iVar0] = iParam18;
		Global_150976.f_F68.f_228[iVar0] = iParam19;
		Global_150976.f_F68.f_233[iVar0] = iParam20;
		Global_150976.f_F68.f_23E[iVar0] = iParam21;
		Global_150976.f_F68.f_249[iVar0] = iParam22;
		Global_150976.f_F68.f_254[iVar0] = iParam23;
		Global_150976.f_F68.f_25F[iVar0] = iParam24;
		Global_150976.f_F68.f_C2[iVar0] = iParam25;
		if (iParam15 == 0x00000005 && func_21())
		{
			Global_150976.f_46A = 0x00000001;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0x00000000;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 0x00000500 && iVar4 >= 0x000003C0)
			{
				iVar2 = 0x00000001;
			}
			if (iParam0 > 0x05F5E0FF)
			{
				Global_150976.f_46E = 0x00000001;
			}
			else if (iParam0 > 0x0098967F || iVar2)
			{
				Global_150976.f_46D = 0x00000001;
			}
			else if (iParam0 > 0x000003E7)
			{
				Global_150976.f_46A = 0x00000001;
			}
			if (func_20())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_20()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 0x00000400)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_21()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_22(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_23(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
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

void func_25()
{
}

void func_26()
{
	vector3 vVar0;
	bool bVar1;
	
	func_90();
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!iLocal_56 && !unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
			{
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) <= 0x00000000)
				{
					bVar1 = !func_89();
					unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_flare"), 0x00000001, bVar1, bVar1);
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 0x00000001;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A) || unk_0x6922D6661FD58CF6(unk_0x16F2683693E537C9(), joaat("weapon_flare"), 100f, &(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2), 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
				{
					Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				}
				else if (func_88(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2, 0f, 0f, 0f, 0x00000000))
				{
					Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 = { vVar0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (!iLocal_55)
				{
					if (!func_87(Local_238.f_2.f_3))
					{
						if (func_15(Local_238.f_2))
						{
							func_86();
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_238.f_2.f_3));
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_238.f_2.f_3), iLocal_49);
							unk_0xBC7068A83B14A734(unk_0xB177666FAB6F4417(Local_238.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 0x00000001;
						}
					}
				}
			}
			else if (!iLocal_54 && !unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (func_85(unk_0x16F2683693E537C9()))
					{
						func_7("AIRSTRIKE_4", 0xFFFFFFFF);
					}
					else
					{
						func_7("AIRSTRIKE_1", 0xFFFFFFFF);
					}
					iLocal_54 = 0x00000001;
				}
			}
		}
	}
	func_56();
	func_27();
}

void func_27()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0x00000000:
			func_55();
			break;
		
		case 0x00000001:
			func_55();
			break;
		
		case 0x00000002:
			if (func_15(Local_238.f_2))
			{
				iLocal_58 = 0x00000001;
				iVar0 = unk_0xB177666FAB6F4417(Local_238.f_2);
				if (!unk_0xE4EDC4B0E92C078B(iLocal_47))
				{
					iLocal_47 = unk_0x5C3B41825F6AC5A0(iVar0);
					unk_0xBC8E0A7390523199(iLocal_47, 0x00000010);
					unk_0xDC5B2F9D0CCE3A10(iLocal_47, "AIRSTRIKE_5");
					unk_0xF2D30B8ACAF12A39(iLocal_47, 0x00000000);
				}
				else
				{
					unk_0x436F3596830D7DC3(iLocal_47, SYSTEM::CEIL(unk_0xD9522BA9E27E1349(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
					{
						vVar3 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (unk_0x0EB28750412C3A5A(vVar3, unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001) <= (60f * 5f))
					{
						unk_0x13E40E622FDA7ED4(unk_0xB177666FAB6F4417(Local_238.f_2));
						iLocal_53 = 0x00000001;
					}
				}
				if (!iLocal_235 && !unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
				{
					if (!Local_238.f_36)
					{
						if (!func_87(Local_238.f_2.f_3))
						{
							if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
							{
								if (unk_0x0EB28750412C3A5A(func_54(unk_0xD803B885F5E47A62()), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_238.f_2.f_3), 0x00000001), 0x00000000) <= 250f)
								{
									if (unk_0x0EB28750412C3A5A(vVar3, unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001) >= (60f * 2.5f))
									{
										func_31(&uLocal_69, "CT_AUD", "MPCT_ASarr", 0x0000000C, 0x00000000, 0x00000000, 0x00000000);
										iLocal_235 = 0x00000001;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_32 < 0x0000000A)
				{
					if (!Local_238.f_35)
					{
						if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
						{
							if (func_30() == 0x00000002)
							{
								if (!func_12(&uLocal_63))
								{
									func_11(&uLocal_63, 0x00000000, 0x00000000);
								}
								else if (func_10(&uLocal_63, 0x00001D4C, 0x00000000))
								{
									Local_238.f_35 = 0x00000001;
								}
								vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (unk_0x5A91F08DF773C39D(iVar0, Local_240[unk_0x57270EE11514DC67() /*5*/].f_2, 75f, 75f, 1000f, 0x00000000, 0x00000001, 0x00000000) && unk_0xBBE430A566D01EF3(vVar1, vVar2, joaat("weapon_flare"), 0x00000000))
								{
									Local_238.f_35 = 0x00000001;
								}
							}
							else if (func_30() == 0x00000001)
							{
								Local_238.f_35 = 0x00000001;
								Local_238.f_32 = 0x00000064;
							}
						}
						else if (unk_0x5A91F08DF773C39D(iVar0, vLocal_60, 75f, 75f, 1000f, 0x00000000, 0x00000001, 0x00000000))
						{
							Local_238.f_35 = 0x00000001;
							Local_238.f_32 = 0x00000064;
							Local_238.f_36 = 0x00000001;
							if (!iLocal_236 && !unk_0xEAE0D21A50E6C7F4(Global_A667, 0x0000000A))
							{
								func_31(&uLocal_69, "CT_AUD", "MPCT_ASflr", 0x0000000C, 0x00000000, 0x00000000, 0x00000000);
								iLocal_236 = 0x00000001;
							}
						}
					}
				}
			}
			if (!func_15(Local_238.f_2) || func_87(Local_238.f_2.f_3))
			{
				func_28();
			}
			break;
		
		case 0x00000003:
			func_55();
			break;
	}
}

void func_28()
{
	int iVar0;
	
	if (!func_87(Local_238.f_2.f_3))
	{
		if (func_29(Local_238.f_2.f_3))
		{
			if (unk_0x526BC32A660C89E6(Local_238.f_2.f_3))
			{
				iVar0 = unk_0x1B50683925F00106(Local_238.f_2.f_3);
				unk_0xD458AC1C1D29C3B4(iVar0, 0x00000000, 0x00000000);
			}
		}
	}
}

int func_29(int iParam0)
{
	if (unk_0x83F012E6200426DB(iParam0))
	{
		return 0x00000001;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		unk_0x8D30F6387EE75385(iParam0);
	}
	return 0x00000000;
}

int func_30()
{
	if (Local_238.f_37 == 0x00000001)
	{
		return Local_238.f_37;
	}
	else if (Local_238.f_37 == 0x00000002)
	{
		return Local_238.f_37;
	}
	if (!unk_0xD1BF3090E1F8300E(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_37 = 0x00000001;
		return Local_238.f_37;
	}
	Local_238.f_37 = 0x00000002;
	return Local_238.f_37;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_32(sParam2, iParam3, 0x00000000);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
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
					func_52();
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
		if (func_51(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_50();
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_38();
		func_33();
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
		func_52();
	}
	return 0x00000000;
}

void func_33()
{
	if (!func_34())
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

int func_34()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_37())
	{
		return 0x00000000;
	}
	if (func_35(unk_0xD803B885F5E47A62()))
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

bool func_35(int iParam0)
{
	return func_36(iParam0, 0x00000014);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_37()
{
	return 0xFFFFFFFF;
}

void func_38()
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

void func_39()
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

int func_40()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_41()
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

void func_42()
{
	if (func_49(0x0000000E))
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
		Global_4C1E = func_43();
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

var func_43()
{
	func_44();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_47(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_46(unk_0x16F2683693E537C9());
			if (func_45(iVar0) && (!func_49(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_45(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_45(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_48(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_49(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_50()
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

bool func_51(int iParam0, int iParam1)
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

void func_52()
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

Vector3 func_54(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_55()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_47))
	{
		unk_0x142CC44DB769B57E(&iLocal_47);
	}
}

void func_56()
{
	switch (Local_238.f_2.f_2)
	{
		case 0x00000000:
			func_84(0x00000001);
			break;
		
		case 0x00000001:
			if (func_57())
			{
				func_84(0x00000002);
			}
			break;
		
		case 0x00000002:
			if (!func_15(Local_238.f_2))
			{
				if (func_87(Local_238.f_2.f_3))
				{
					func_84(0x00000003);
				}
			}
			else if (func_87(Local_238.f_2.f_3))
			{
				func_84(0x00000003);
			}
			break;
		
		case 0x00000003:
			break;
	}
}

int func_57()
{
	if (!func_12(&uLocal_67))
	{
		func_11(&uLocal_67, 0x00000000, 0x00000000);
	}
	else if (func_83(Local_238.f_2.f_1) && func_83(Local_238.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_67, 0x00000BB8, 0x00000000))
		{
			if (func_61() && func_58())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_58()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_238.f_2.f_3) && func_83(Local_238.f_2.f_3.f_1)) && unk_0xE9F78D191AD5EDBA(Local_238.f_2))
	{
		if (func_15(Local_238.f_2))
		{
			if (func_60(&(Local_238.f_2.f_3), Local_238.f_2, 0x00000016, Local_238.f_2.f_3.f_1, 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001);
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_238.f_2.f_3), Global_180858);
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000000);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_238.f_2.f_3), 0x00000001);
				func_59();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_238.f_2.f_3), iLocal_48);
				unk_0xBC7068A83B14A734(unk_0xB177666FAB6F4417(Local_238.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_238.f_2.f_3))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(Local_238.f_2.f_3.f_1);
	return 0x00000001;
}

void func_59()
{
	if (!iLocal_50)
	{
		if (func_15(Local_238.f_2))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_48);
			unk_0x0C4243AF9A434F34(0x00000000, unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000, 0x00000000, vLocal_60 + Vector((50f + 5f), 0f, 0f), 0x00000004, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 0x00000014, 0x00000001);
			unk_0x0C4243AF9A434F34(0x00000000, unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000, 0x00000000, Local_238.f_2.f_E, 0x00000004, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 0x00000014, 0x00000001);
			unk_0x75ABDC5F81978924(iLocal_48);
			iLocal_50 = 0x00000001;
		}
	}
}

int func_60(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_61()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_238.f_2))
	{
		if (func_83(Local_238.f_2.f_1))
		{
			if (unk_0xE3934829A331AF92("AIRSTRIKE_FLYOVER", 0x00000000))
			{
				func_79(&vVar0, &fVar1);
				if (func_65(vVar0, 6f, 1f, 1f, 5f, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					if (func_62(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
					{
						Local_238.f_2.f_E = { vVar0 * Vector(0f, -1f, -1f) };
						unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000002);
						unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000);
						unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000001);
						unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_238.f_2));
						unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_238.f_2), 60f);
						unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000001, 0x00000001, 0x00000000);
						unk_0x76452FEE1FDE16DD(unk_0xB177666FAB6F4417(Local_238.f_2), 0x000003E8);
						unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000);
						unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000003);
						unk_0x411CC4F26F6C1C2E(unk_0xB177666FAB6F4417(Local_238.f_2));
						unk_0x71199B01895C6202(Local_238.f_2.f_1);
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_62(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_63(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_63(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_64(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_64(int iParam0, vector3 vParam1, int iParam2)
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

int func_65(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_24B2D0.f_2 = 0x00000000;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0x00000000;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0x00000000;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (fParam12 > 0f)
	{
		if (func_73(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_66(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_66(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_24(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_71(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_24(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_68(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_67(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_71(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_71(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

int func_67(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_69(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_69(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_70();
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

int func_70()
{
	return Global_1407E9;
}

Vector3 func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_72() && Global_184507[iVar0 /*876*/].f_34F) && !func_17(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_54(iParam0);
}

var func_72()
{
	return Global_2564C8.f_11;
}

int func_73(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_24(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_67(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_74(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_54(iVar1), vParam0, 0x00000001) < fParam1)
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

int func_74(int iParam0)
{
	if (func_78(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_77(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_75(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_37())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_76(int iParam0)
{
	if (iParam0 != func_37())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_37();
}

struct<13> func_77(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_77(iParam0) };
		Global_26594F = { func_77(iParam1) };
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

void func_79(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_81(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x877D3FF6F9D1F987((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_80(*uParam0, vLocal_60);
}

float func_80(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_81(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_82(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_82(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_83(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_84(int iParam0)
{
	Local_238.f_2.f_2 = iParam0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0x398B22FA3FCBDFA9(iParam0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_86()
{
	if (!iLocal_51)
	{
		if (func_15(Local_238.f_2))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_49);
			unk_0x0C4243AF9A434F34(0x00000000, unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000, 0x00000000, Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 0x00000004, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 0x00000014, 0x00000001);
			unk_0x0C4243AF9A434F34(0x00000000, unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000, 0x00000000, Local_238.f_2.f_E, 0x00000004, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 0x00000014, 0x00000001);
			unk_0x75ABDC5F81978924(iLocal_49);
			iLocal_51 = 0x00000001;
		}
	}
}

int func_87(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

bool func_88(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_89()
{
	return Global_181EC.f_159 > 0x00000000;
}

void func_90()
{
	if (!iLocal_234)
	{
		if (!func_87(Local_238.f_2.f_3))
		{
			func_91(&uLocal_69, 0x00000003, unk_0x1B50683925F00106(Local_238.f_2.f_3), "FM_Pilot_Air", 0x00000001, 0x00000001);
			iLocal_234 = 0x00000001;
		}
	}
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_92()
{
	return Local_238;
}

int func_93(int iParam0)
{
	return Local_240[iParam0 /*5*/];
}

void func_94()
{
}

void func_95()
{
	if (unk_0xE9F78D191AD5EDBA(Local_238.f_2.f_3) && unk_0xE9F78D191AD5EDBA(Local_238.f_2))
	{
		if (func_15(Local_238.f_2) && !func_87(Local_238.f_2.f_3))
		{
			unk_0x0C4243AF9A434F34(unk_0x1B50683925F00106(Local_238.f_2.f_3), unk_0xB177666FAB6F4417(Local_238.f_2), 0x00000000, unk_0x16F2683693E537C9(), 1f, 1f, 1f, 0x00000008, 60f, 1000f, -1f, 0x00000190, 0x00000190, 0x00000001);
		}
	}
	func_97(func_98(0x00000001, 0x00000001), 0x0000000B, func_37());
	func_96();
}

void func_96()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_97(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = 0xD217E93D;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, iParam0);
	}
}

int func_98(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_24(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_68(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_99()
{
	var uVar0;
	
	func_107(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_106())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_105())
	{
		return 0x00000001;
	}
	if (func_104(0x0000009F))
	{
		if (!func_103())
		{
			return 0x00000001;
		}
	}
	if (func_104(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_100() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_100()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_100()
{
	switch (func_102())
	{
		case 0x00000000:
			return func_101();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_101()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_102()
{
	return Global_7830;
}

bool func_103()
{
	return Global_2564C8.f_256;
}

int func_104(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_105()
{
	return Global_258C08;
}

bool func_106()
{
	return Global_2564C8.f_251;
}

void func_107(var uParam0)
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
					func_108(iVar0);
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

void func_108(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_24(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_109(iVar2, &bVar3))
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

int func_109(int iParam0, var uParam1)
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

void func_110()
{
	SYSTEM::WAIT(0x00000000);
}

void func_111(struct<21> Param0)
{
	func_117(func_118(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	func_115(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_238, 0x0000003A);
	unk_0x35B62793EAE9ADDF(&Local_240, 0x0000000B);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_114())
	{
		func_95();
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		vLocal_60 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	}
	if (func_4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		bLocal_52 = 0x00000001;
	}
	func_112(0x00000040, 0x00000001);
	Local_240[unk_0x57270EE11514DC67() /*5*/] = 0x00000000;
}

void func_112(int iParam0, bool bParam1)
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
			Global_200000[func_113() /*10930*/].f_181E.f_13 = iVar0;
			break;
		
		case 0x00000013:
			Global_200000[func_113() /*10930*/].f_181E.f_12 = iVar0;
			break;
		
		case 0x0000004A:
			Global_200000[func_113() /*10930*/].f_181E.f_C = iVar0;
			break;
		
		case 0x0000001D:
			Global_200000[func_113() /*10930*/].f_181E.f_E = iVar0;
			break;
		
		case 0x00000008:
			Global_200000[func_113() /*10930*/].f_181E.f_F = iVar0;
			break;
		
		case 0x0000001F:
			Global_200000[func_113() /*10930*/].f_181E.f_10 = iVar0;
			break;
		
		case 0x00000003:
			Global_200000[func_113() /*10930*/].f_181E.f_14 = iVar0;
			break;
		
		case 0x00000006:
			Global_200000[func_113() /*10930*/].f_181E.f_11 = iVar0;
			break;
		
		case 0x00000067:
		case 0x00000068:
		case 0x00000062:
		case 0x00000069:
			Global_200000[func_113() /*10930*/].f_181E.f_17 = iVar0;
			break;
		
		case 0x0000004C:
			Global_200000[func_113() /*10930*/].f_181E.f_18 = iVar0;
			break;
		
		case 0x0000005D:
			Global_200000[func_113() /*10930*/].f_181E.f_19 = iVar0;
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x0000004D:
		case 0x00000051:
			Global_200000[func_113() /*10930*/].f_181E.f_1A = iVar0;
			break;
		
		case 0x00000041:
		case 0x0000004B:
		case 0x0000005F:
			Global_200000[func_113() /*10930*/].f_181E.f_1B = iVar0;
			break;
			break;
		
		case 0x00000061:
			Global_200000[func_113() /*10930*/].f_181E.f_1D = iVar0;
			break;
		
		case 0x00000058:
			Global_200000[func_113() /*10930*/].f_181E.f_1C = iVar0;
			break;
		
		case 0x00000064:
			Global_200000[func_113() /*10930*/].f_181E.f_1F = iVar0;
			break;
		
		case 0x0000006A:
			Global_200000[func_113() /*10930*/].f_181E.f_20 = iVar0;
			break;
		
		case 0x00000063:
			Global_200000[func_113() /*10930*/].f_181E.f_1E = iVar0;
			break;
	}
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_114()
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
		if (func_106())
		{
			return 0x00000000;
		}
		if (func_104(0x0000009D))
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

int func_115(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_96();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_116())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_106())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_104(0x0000009D))
				{
					if (!bParam2)
					{
						func_96();
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
					func_96();
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
				func_96();
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
			func_96();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_116()
{
	return Global_140856;
}

void func_117(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_96();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_118(int iParam0)
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

