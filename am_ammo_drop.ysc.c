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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x8CD06866876216F2())
	{
		if (!func_149(ScriptParam_237))
		{
			func_143();
		}
	}
	while (0x00000001)
	{
		func_142();
		if (func_131())
		{
			func_143();
		}
		if (unk_0x09BE1E6DF7B80B43() != bLocal_67)
		{
			func_143();
		}
		if (unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()) != Local_60.f_11)
		{
			func_143();
		}
		unk_0x0F6D9B8ED0147392();
		switch (func_130(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_128())
				{
					if (func_127() == 0x00000001)
					{
						func_126();
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000001;
					}
					else if (func_127() == 0x00000004)
					{
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
					}
				}
				break;
			
			case 0x00000001:
				if (func_127() == 0x00000001)
				{
					func_108();
				}
				else if (func_127() == 0x00000004)
				{
					vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_107(&(Local_60.f_15));
				if (func_106(&(Local_60.f_15)))
				{
					vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
			
			case 0x00000004:
				func_143();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_127())
			{
				case 0x00000000:
					if (func_78())
					{
						Local_60 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					func_38();
					if (func_1())
					{
						Local_60 = 0x00000004;
					}
					break;
				
				case 0x00000004:
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

int func_2()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000008))
	{
		if (!func_37(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000009))
			{
				unk_0x5D96D8530B3D0904(&(Local_60.f_1), 0x00000009);
			}
			return 0x00000000;
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000009))
		{
			return 0x00000001;
		}
	}
	if (Local_60.f_C == 0x00000000 || Local_60.f_C == 0x00000001)
	{
		if (!unk_0xE5DBF9B6126856CA(Local_60.f_4))
		{
			if (!func_35(Local_60.f_2))
			{
				return 0x00000001;
			}
			if (func_34(Local_60.f_3))
			{
				return 0x00000001;
			}
			if (Local_60.f_C > 0x00000000)
			{
				return 0x00000001;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000008))
		{
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_60.f_6, 250f, 250f, 250f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (Local_60.f_12 == 0x00000001)
				{
					func_13();
				}
				return 0x00000001;
			}
			if (Local_60.f_12 == 0x00000001)
			{
				if ((((func_9(unk_0xD803B885F5E47A62()) && func_8() != 0x00000097) || func_6(unk_0xD803B885F5E47A62(), 0x00000092)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_3(var uParam0)
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

var func_4()
{
	return Global_1406A2;
}

var func_5()
{
	return Global_26B66F.f_1401;
}

int func_6(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0x00000000;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_8()
{
	return Global_192FD0;
}

int func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		return 0x00000001;
	}
	if (func_10(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 0x00000014);
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

void func_13()
{
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
	{
		if (Global_40001.f_4D68 > 0x00000000)
		{
			func_31(Global_40001.f_4D68, 0x00000000);
			func_14(Global_40001.f_4D68, 0x0000000E, 0x00000002, 0x00000001);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_30(iParam1), 16);
	StringCopy(&Var1, func_29(iParam2), 32);
	switch (iParam1)
	{
		case 0x00000000:
			iVar2 = 0x4CBAC3AA;
			break;
		
		case 0x00000001:
			iVar2 = 0x29358006;
			break;
		
		case 0x00000002:
			iVar2 = 0x5841CC24;
			break;
		
		case 0x00000003:
			iVar2 = 0x5A26EAEF;
			break;
		
		case 0x00000004:
			iVar2 = 0x2183C4D7;
			break;
		
		case 0x00000005:
			iVar2 = 0xF6C6F8D3;
			break;
		
		case 0x00000006:
			iVar2 = 0xAEC77375;
			break;
		
		case 0x00000007:
			iVar2 = 0x267CBC1B;
			break;
		
		case 0x00000008:
			iVar2 = 0x2DC5587F;
			break;
		
		case 0x00000009:
			iVar2 = 0x8A91E076;
			break;
		
		case 0x0000000A:
			iVar2 = 0x2AD8ED30;
			break;
		
		case 0x0000000B:
			iVar2 = 0x8B70731D;
			break;
		
		case 0x0000000C:
			iVar2 = 0x3530C574;
			break;
		
		case 0x0000000D:
			iVar2 = 0xAAF2EA7A;
			break;
		
		case 0x0000000E:
			iVar2 = 0xD8630BC3;
			break;
		
		case 0x0000000F:
			iVar2 = 0x6F225978;
			break;
		
		case 0x00000010:
			iVar2 = 0x0CD9EBA6;
			break;
		
		case 0x00000011:
			iVar2 = 0xBE60A029;
			break;
	}
	if (func_28())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0x00000000);
		Global_411012[iVar3 /*85*/].f_E.f_28 = { Var0 };
		Global_411012[iVar3 /*85*/].f_E.f_2C = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_28())
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
				func_16(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_16(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_16(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_16(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_28())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_27()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_22(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_17(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_28())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_19(var uParam0)
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
	func_20(&(uParam0->f_E));
	func_20(&(uParam0->f_E.f_D));
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

void func_20(var uParam0)
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

int func_21(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_22(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_28())
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
				func_24(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_24(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_26(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_25();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_25()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_26(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_27()
{
	return Global_1407E9;
}

int func_28()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

char* func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "NOTREACHTARGET";
			break;
		
		case 0x00000001:
			return "TARGET_ESCAPE";
			break;
		
		case 0x00000002:
			return "DELIVERY_FAIL";
			break;
		
		case 0x00000003:
			return "NOT_USED";
			break;
		
		case 0x00000004:
			return "TEAM_QUIT";
			break;
		
		case 0x00000005:
			return "SERVER_ERROR";
			break;
		
		case 0x00000006:
			return "RECEIVE_LJ_L";
			break;
		
		case 0x00000008:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "BACKUP_VAGOS";
		
		case 0x00000001:
			return "BACKUP_LOST";
		
		case 0x00000002:
			return "BACKUP_FAMILIES";
		
		case 0x00000003:
			return "HIRE_MUGGER";
		
		case 0x00000004:
			return "HIRE_MERCENARY";
		
		case 0x00000005:
			return "BUY_CARDROPOFF";
		
		case 0x00000006:
			return "HELI_PICKUP";
		
		case 0x00000007:
			return "BOAT_PICKUP";
		
		case 0x00000008:
			return "CLEAR_WANTED";
		
		case 0x00000009:
			return "HEAD_2_HEAD";
		
		case 0x0000000A:
			return "CHALLENGE";
		
		case 0x0000000B:
			return "SHARE_LAST_JOB";
		
		case 0x0000000D:
			return "REFUNDAPPEA";
		
		case 0x0000000E:
			return "AMMO_DROP_REF";
		
		case 0x0000000F:
			return "ORBITAL_MANUAL";
		
		case 0x00000010:
			return "ORBITAL_AUTO";
		
		case 0x00000011:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_31(int iParam0, int iParam1)
{
	func_33(iParam0, 0x00000001, 0x00000001, 0x00000000);
	if (iParam1 == 0x00000001)
	{
		func_32(iParam0, 0x00000000);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_32(iVar1, 0x00000000);
	}
}

int func_34(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

int func_35(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_36(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_36(int iParam0)
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

int func_37(int iParam0, bool bParam1, bool bParam2)
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

void func_38()
{
	switch (Local_60.f_C)
	{
		case 0x00000000:
			if (Local_60.f_12)
			{
				func_77();
			}
			else
			{
				func_72();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_C = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
			{
				func_40(Local_60.f_4, 0x00000012);
				if (Local_60.f_F == 0x00000003)
				{
					if (!unk_0xE9F78D191AD5EDBA(Local_60.f_5))
					{
						Local_60.f_F = 0x00000002;
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
				{
					func_39(&(Local_60.f_2));
				}
				else if (Local_60.f_D == 0x00000001)
				{
					Local_60.f_D = 0x00000000;
				}
				if (unk_0xE9F78D191AD5EDBA(Local_60.f_3))
				{
					func_39(&(Local_60.f_3));
				}
				else if (Local_60.f_E == 0x00000001)
				{
					Local_60.f_E = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			break;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

void func_40(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0xA402F6C87C08815C(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	fVar2 = 0.5f;
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(unk_0x09AD4CE7DA179533(iParam0)), &vVar0, &vVar1);
	fVar7 = ((vVar1.z - vVar0.z) / 2f);
	fVar8 = (vVar1.z - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	unk_0x922D0EFFF8F2403B(0x00000002, unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(iParam0), 0x00000001) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 0x00000064, 0x00000001, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_41()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		iLocal_64 = unk_0x5C3B41825F6AC5A0(unk_0x09AD4CE7DA179533(Local_60.f_4));
		if (Local_60.f_12)
		{
			unk_0xBC8E0A7390523199(iLocal_64, 0x00000054);
			unk_0x516E63E474722206(iLocal_64, 1.2f);
			unk_0xDC5B2F9D0CCE3A10(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0xBC8E0A7390523199(iLocal_64, 0x0000015F);
			unk_0xDC5B2F9D0CCE3A10(iLocal_64, "AMD_BLIPN");
			unk_0x516E63E474722206(iLocal_64, 0.7f);
		}
		unk_0x61755AC17D8F538E(iLocal_64, 0x00000002);
		unk_0x7F010F50CE03A8AF(iLocal_64, 0x00000078);
	}
}

int func_42()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000007))
	{
		if (func_35(Local_60.f_2))
		{
			if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_60.f_1), 0x00000007);
			}
		}
	}
	else if (func_128())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_43()
{
	unk_0x523BCC9DC80CD82F(Local_60.f_13.f_1);
	if (unk_0xB87F6CF6E5628C67(Local_60.f_13.f_1))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_60.f_13) && unk_0xE9F78D191AD5EDBA(Local_60.f_4))
		{
			if (unk_0x081C8BC5094A7B76(0x00000001))
			{
				if (func_44(&(Local_60.f_13), Local_60.f_13.f_1, unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001) - Vector(5f, 0f, 0f), 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0xF4F945BB00F6E31C(Local_60.f_13, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_60.f_13), unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_60.f_4)));
					unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_60.f_4), unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000, 0f, 0f, 0.25f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
					unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000001);
					unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000);
					unk_0xAC0C6241732E36F6(unk_0x09AD4CE7DA179533(Local_60.f_13));
					unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_60.f_13), 0f, 0f, -0.2f);
					unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000001);
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_13))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_44(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_12 == 0x00000001)
	{
		iVar0 = 0x64A5169A;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(joaat("p_cargo_chute_s"));
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(joaat("p_cargo_chute_s")))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_60.f_4) && !unk_0xE9F78D191AD5EDBA(Local_60.f_5))
		{
			if (func_35(Local_60.f_2) && unk_0x2358623ECCDB11B3(0x00000000, 0x00000000, 0x00000002, 0x00000000))
			{
				iVar1 = 0x000000C8;
				if (!unk_0xE9F78D191AD5EDBA(Local_60.f_4))
				{
					iVar2 = 0x00000000;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_12 == 0x00000001)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_12 == 0x00000000)
					{
						unk_0x5D96D8530B3D0904(&iVar2, 0x0000000C);
					}
					else
					{
						unk_0x5D96D8530B3D0904(&iVar2, 0x0000000C);
					}
					Local_60.f_4 = unk_0x4193A2DE62BC07C0(unk_0xB8D1BBEFD1257857(iVar3, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000001) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 0x00000001, 0x00000001));
					if (Local_60.f_12 == 0x00000001)
					{
						func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
						unk_0x6C07AE3872D6DD5C(0x00000000);
					}
					unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001);
					unk_0xEDD4DD1B0A096072(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001);
					unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001);
					unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000000);
					unk_0xAC0C6241732E36F6(unk_0x09AD4CE7DA179533(Local_60.f_4));
					func_70();
					iVar4 = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(iVar4, "Crate_Beeps", unk_0x09AD4CE7DA179533(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 0x00000001, 0x00000000);
					Local_60.f_10 = unk_0x1F387ED7A8273DD3(iVar4);
				}
				if (unk_0xE9F78D191AD5EDBA(Local_60.f_4) && !unk_0xE9F78D191AD5EDBA(Local_60.f_5))
				{
					if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000001) - Vector(2f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xF4F945BB00F6E31C(Local_60.f_5, 0x00000001);
						unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_60.f_5), unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000000, 0f, 0f, 0.1f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
						unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_60.f_5), 0x00000001);
						unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_60.f_5), 0x00000000);
						unk_0xD65E6E13E145467B(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x295ACC5727E47CB7(unk_0x09AD4CE7DA179533(Local_60.f_5));
					}
				}
				func_68();
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000F))
				{
					if (!Local_60.f_12)
					{
						func_67(&uLocal_72, 0x00000003, unk_0x1B50683925F00106(Local_60.f_3), "FM_Pilot_Ammo", 0x00000000, 0x00000001);
						func_46(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000F);
				}
			}
		}
	}
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_4) && unk_0xE9F78D191AD5EDBA(Local_60.f_5))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_66(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_47(sParam2, iParam3, 0x00000000);
}

int func_47(char* sParam0, int iParam1, bool bParam2)
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
					func_65();
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
		if (func_64(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_63();
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
				func_55();
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
				if (func_54())
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
			if (func_53())
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
			func_52();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_51();
		func_48();
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
		func_65();
	}
	return 0x00000000;
}

void func_48()
{
	if (!func_49())
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

int func_49()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_50())
	{
		return 0x00000000;
	}
	if (func_10(unk_0xD803B885F5E47A62()))
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

int func_50()
{
	return 0xFFFFFFFF;
}

void func_51()
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

void func_52()
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

int func_53()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_54()
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

void func_55()
{
	if (func_62(0x0000000E))
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
		Global_4C1E = func_56();
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

var func_56()
{
	func_57();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_60(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_59(unk_0x16F2683693E537C9());
			if (func_58(iVar0) && (!func_62(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_58(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_58(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_60(int iParam0)
{
	if (func_58(iParam0))
	{
		return func_61(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_61(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_62(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_63()
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

bool func_64(int iParam0, int iParam1)
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

void func_65()
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_67(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_68()
{
	if (func_69())
	{
		if (!unk_0x83A8177D302E1A7E(iLocal_66))
		{
			iLocal_66 = unk_0x976A3DF95195758D("scr_crate_drop_beacon", unk_0x09AD4CE7DA179533(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000, 0x3F800000, 0x3F800000, 0x3F800000, 0x00000000);
			unk_0x02D205CBD211ED4F(iLocal_66, 0.8f, 0.18f, 0.19f, 0x00000000);
		}
	}
	if (!unk_0x83A8177D302E1A7E(iLocal_66))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_69()
{
	unk_0x9E5E60D8C63FD9D1();
	if (unk_0x25F7A4D42AF2AB93())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_70()
{
	if (unk_0xCAC02A13A55C50BC(Local_60.f_10) != 0xFFFFFFFF)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
		{
			if (!unk_0x8AA6DC470ABA63A2(unk_0xCAC02A13A55C50BC(Local_60.f_10)))
			{
				unk_0x55D0A2DB35045A35(unk_0xCAC02A13A55C50BC(Local_60.f_10));
			}
			unk_0x43A06902454A1172(unk_0xCAC02A13A55C50BC(Local_60.f_10));
		}
		else
		{
			if (!unk_0x8AA6DC470ABA63A2(unk_0xCAC02A13A55C50BC(Local_60.f_10)))
			{
				unk_0x55D0A2DB35045A35(unk_0xCAC02A13A55C50BC(Local_60.f_10));
			}
			unk_0x43A06902454A1172(unk_0xCAC02A13A55C50BC(Local_60.f_10));
		}
	}
}

void func_71(int iParam0)
{
	var uVar0;
	
	unk_0x5D96D8530B3D0904(&uVar0, unk_0x6E61BE9E61434AC1());
	unk_0xC76363E4A8AC7A82(iParam0, uVar0);
}

void func_72()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000B))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_76(0x000004A6, 0xFFFFFFFF, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A))
			{
				func_75("AMD_HELP1", 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x0000000A);
				func_73(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000B);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
			{
				func_75("AMD_HELP2", 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x0000000B);
				func_73(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000B);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000B);
			}
		}
	}
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
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

void func_75(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_74(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_77()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000011))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_76(0x000004A6, 0xFFFFFFFF, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000018))
			{
				func_75("BALD_HELP1", 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000018);
				func_73(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000011);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000019))
			{
				func_75("BALD_HELP2", 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000019);
				func_73(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000011);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000011);
			}
		}
	}
}

int func_78()
{
	if (func_105(joaat("cuban800")) && func_105(joaat("s_m_m_pilot_02")))
	{
		if (func_103(&uLocal_70, 0x00000FA0, 0x00000000))
		{
			if (func_81() && func_79())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_79()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_60.f_3) && func_105(joaat("s_m_m_pilot_02"))) && unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_35(Local_60.f_2))
		{
			if (func_80(&(Local_60.f_3), Local_60.f_2, 0x00000016, joaat("s_m_m_pilot_02"), 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_60.f_3), 0x00000001);
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_60.f_3), Global_180858);
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_60.f_3), 0x00000000);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_60.f_3), 0x00000001);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_60.f_3), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
				func_126();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_60.f_3), uLocal_65);
				unk_0xBC7068A83B14A734(unk_0xB177666FAB6F4417(Local_60.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_3))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(joaat("s_m_m_pilot_02"));
	return 0x00000001;
}

int func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_81()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_105(joaat("cuban800")))
		{
			func_100(&vVar0, &fVar1);
			if (func_85(vVar0, 6f, 1f, 1f, 5f, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				if (func_82(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000002);
					unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000000);
					unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000001);
					unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_60.f_2));
					unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_60.f_2), 60f);
					unk_0x873BCADC75FF6D20(unk_0xB177666FAB6F4417(Local_60.f_2));
					unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000001, 0x00000001, 0x00000000);
					unk_0xB422445CBCD0AEFB(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000000);
					unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000000);
					unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000003);
					unk_0x411CC4F26F6C1C2E(unk_0xB177666FAB6F4417(Local_60.f_2));
					if (Local_60.f_12 == 0x00000001)
					{
						unk_0xAA6B3A4292417750(unk_0xB177666FAB6F4417(Local_60.f_2), 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(joaat("cuban800"));
	return 0x00000001;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, iParam4, bParam12);
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
			func_83(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_83(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_84(int iParam0, vector3 vParam1, int iParam2)
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

int func_85(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_94(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_86(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_86(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_37(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_90(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_37(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_88(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_87(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_90(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_90(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

int func_87(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_88(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_89(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_89(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
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

Vector3 func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_93() && Global_184507[iVar0 /*876*/].f_34F) && !func_92(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_91(iParam0);
}

Vector3 func_91(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_92(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_93()
{
	return Global_2564C8.f_11;
}

int func_94(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_37(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_87(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_95(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_91(iVar1), vParam0, 0x00000001) < fParam1)
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

int func_95(int iParam0)
{
	if (func_99(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_98(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_96(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_97(iParam0);
	if (!iVar0 == func_50())
	{
		if (iVar0 == func_97(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_97(int iParam0)
{
	if (iParam0 != func_50())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_50();
}

struct<13> func_98(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_99(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_98(iParam0) };
		Global_26594F = { func_98(iParam1) };
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

void func_100(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_101(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0xE7D606C557C86100((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x877D3FF6F9D1F987((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_101(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_102(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_102(vector3 vParam0, float fParam1)
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

int func_103(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_104(uParam0, bParam2, 0x00000000);
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

void func_104(var uParam0, bool bParam1, bool bParam2)
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

bool func_105(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_106(var uParam0)
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

void func_107(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_104(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_108()
{
	func_117();
	switch (vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0x00000000:
			if (Local_60.f_C > 0x00000000)
			{
				vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_113();
			func_109();
			break;
		
		case 0x00000002:
			func_143();
			break;
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
	{
		if (func_37(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			iVar1 = func_112(unk_0x16F2683693E537C9());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1406A0;
			}
			unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), iVar1, &iVar0);
			if ((func_111(iVar1) && func_110(iVar1)) && unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iVar1) < iVar0)
			{
			}
			else if (unk_0xBFF81ED3B99522C7())
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000C))
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (Local_60.f_12)
						{
							func_75("BALD_HELP3", 0xFFFFFFFF);
						}
						else
						{
							func_75("AMD_HELP3", 0xFFFFFFFF);
						}
						unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000C);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000D))
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0x09AD4CE7DA179533(Local_60.f_4), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (func_103(&uLocal_68, 0x00004E20, 0x00000000))
								{
									if (!Local_60.f_12)
									{
										func_75("AMD_HELP3", 0xFFFFFFFF);
									}
									unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000D);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_110(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_111(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_112(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

void func_113()
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
	{
		if (unk_0x526BC32A660C89E6(Local_60.f_4) || (!unk_0x83F012E6200426DB(Local_60.f_4) && unk_0xBFF81ED3B99522C7()))
		{
			if (unk_0xE5DBF9B6126856CA(Local_60.f_5))
			{
				if (unk_0x526BC32A660C89E6(Local_60.f_5) || (!unk_0x83F012E6200426DB(Local_60.f_5) && unk_0xBFF81ED3B99522C7()))
				{
					if (func_116(Local_60.f_4) && func_116(Local_60.f_5))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000008))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000007))
							{
								if (!unk_0xB4ECF989E2C1DAC8(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 0x00000003))
								{
									unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000008);
									func_3(&(Local_60.f_5));
									if (Local_60.f_12 == 0x00000001)
									{
										func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
									}
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000007))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000006))
							{
								if (unk_0xB4ECF989E2C1DAC8(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 0x00000003))
								{
									unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000007);
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000006))
						{
							unk_0x67B3582E66D35002(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000002, 0.0245f);
							if (func_114())
							{
								unk_0xD65E6E13E145467B(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000006);
								if (unk_0xE4EDC4B0E92C078B(iLocal_64))
								{
									unk_0x7F010F50CE03A8AF(iLocal_64, 0x000000FF);
								}
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000E))
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_13))
				{
					if (unk_0x526BC32A660C89E6(Local_60.f_13) || (!unk_0x83F012E6200426DB(Local_60.f_13) && unk_0xBFF81ED3B99522C7()))
					{
						if (func_116(Local_60.f_13))
						{
							unk_0x67B3582E66D35002(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000002, 0.1f);
							if (unk_0x713261485D0F1B6C(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000))
							{
								if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
								{
									unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001, 0x00000001);
									if (Local_60.f_12 == 0x00000001)
									{
										func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
									}
								}
								unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000E);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000008) && unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000008))
						{
							if (func_116(Local_60.f_13))
							{
								if (!unk_0x4B111E6C3450F2E0(unk_0x09AD4CE7DA179533(Local_60.f_13)) && unk_0x41659B1143875599(unk_0x09AD4CE7DA179533(Local_60.f_13)))
								{
									if (unk_0x688A90832774AB83(unk_0x09AD4CE7DA179533(Local_60.f_13)))
									{
										bVar0 = 0x00000001;
									}
									else if (!unk_0xE934758D273C899A(unk_0x09AD4CE7DA179533(Local_60.f_13)) && unk_0xC57D0A75AFA332A3(unk_0x09AD4CE7DA179533(Local_60.f_13)))
									{
										bVar0 = 0x00000001;
									}
									if (bVar0)
									{
										unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_60.f_1), 0x00000008);
									}
									if (Local_60.f_12 == 0x00000001)
									{
										func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001) };
			if (vVar1.z < -50f && !unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_60.f_4)))
			{
				if (func_116(Local_60.f_4))
				{
					unk_0xA47B46945FF6DE74(unk_0x09AD4CE7DA179533(Local_60.f_4), Local_60.f_6, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					if (Local_60.f_12 == 0x00000001)
					{
						func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
					}
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_13) && unk_0xD59B17D2DFF98E26(unk_0x09AD4CE7DA179533(Local_60.f_4)))
				{
					iVar2 = unk_0x09AD4CE7DA179533(Local_60.f_13);
				}
				else
				{
					iVar2 = unk_0x09AD4CE7DA179533(Local_60.f_4);
				}
			}
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000010))
				{
					if (unk_0xFC0E4F7E386C43F8(iVar2) >= 0.9f)
					{
						if (unk_0xCAC02A13A55C50BC(Local_60.f_10) != 0xFFFFFFFF)
						{
							unk_0x6F6BA3FE885E6C91(unk_0xCAC02A13A55C50BC(Local_60.f_10), "Crate_Underwater", 1f);
						}
						unk_0x5D96D8530B3D0904(&iLocal_63, 0x00000010);
					}
				}
				else if (unk_0xFC0E4F7E386C43F8(iVar2) < 0.9f)
				{
					if (unk_0xCAC02A13A55C50BC(Local_60.f_10) != 0xFFFFFFFF)
					{
						unk_0x6F6BA3FE885E6C91(unk_0xCAC02A13A55C50BC(Local_60.f_10), "Crate_Underwater", 0f);
					}
					unk_0x0674E58A79778E99(&iLocal_63, 0x00000010);
				}
			}
		}
	}
}

int func_114()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_60.f_13))
	{
		if (!unk_0xE934758D273C899A(unk_0x09AD4CE7DA179533(Local_60.f_13)))
		{
			iVar0 = 0x00000001;
		}
		if (unk_0x713261485D0F1B6C(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000))
		{
			iVar0 = 0x00000001;
		}
		if (unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_60.f_13)))
		{
			iVar0 = 0x00000001;
		}
		if (func_115())
		{
			iVar0 = 0x00000001;
		}
		if (iVar0 == 0x00000001)
		{
			if (func_116(Local_60.f_13))
			{
				unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_115()
{
	float fVar0;
	
	fVar0 = unk_0x81FFFF2E58A35803(unk_0x09AD4CE7DA179533(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 0x00000001;
	}
	fVar0 = unk_0xCE563465D2227DD6(unk_0x09AD4CE7DA179533(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_116(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

void func_117()
{
	int iVar0;
	
	iVar0 = unk_0x11225ACFD0C1477E(0x00000000, 0x00000000);
	if (Local_60.f_D != iVar0)
	{
		if (Local_60.f_D > 0x00000000 || !unk_0xE9F78D191AD5EDBA(Local_60.f_2))
		{
			if (Local_60.f_D < iVar0 || func_125(Local_60.f_D, 0x00000000, 0x00000001))
			{
				unk_0x28E5F00F131890E3(Local_60.f_D);
			}
		}
	}
	iVar0 = unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000);
	if (Local_60.f_E != iVar0)
	{
		if (Local_60.f_E > 0x00000000 || !unk_0xE9F78D191AD5EDBA(Local_60.f_3))
		{
			if (Local_60.f_E < iVar0 || func_124(Local_60.f_E, 0x00000000, 0x00000001))
			{
				unk_0x0BEC04ECA8485A3A(Local_60.f_E);
			}
		}
	}
	iVar0 = unk_0xBF3DE18643F54472(0x00000000, 0x00000000);
	if (Local_60.f_F != iVar0)
	{
		if (Local_60.f_F < iVar0 || func_118(Local_60.f_F, 0x00000000, 0x00000001))
		{
			unk_0x3A4967AE7C71F999(Local_60.f_F);
		}
	}
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(0x00000002, iParam0, 0x00000001, bParam1, bParam2);
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_123(iParam0) - func_122(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_122(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_123(iParam0) - func_121(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_122(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_123(iParam0) - func_122(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_120(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122(int iParam0, bool bParam1)
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

int func_123(int iParam0)
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

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

int func_125(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(0x00000001, iParam0, 0x00000001, bParam1, bParam2);
}

void func_126()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000A))
	{
		if (func_35(Local_60.f_2))
		{
			unk_0xDD353D0E9C789D0E(&uLocal_65);
			unk_0xE9362E4D600DD12A(0x00000000, unk_0xB177666FAB6F4417(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0x00000000, joaat("cuban800"), 0x00040000, 15f, -1f);
			unk_0xE9362E4D600DD12A(0x00000000, unk_0xB177666FAB6F4417(Local_60.f_2), Local_60.f_9, 60f, 0x00000000, joaat("cuban800"), 0x00040000, -1f, -1f);
			unk_0x75ABDC5F81978924(uLocal_65);
			unk_0x5D96D8530B3D0904(&iLocal_63, 0x0000000A);
		}
	}
}

int func_127()
{
	return Local_60;
}

int func_128()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_12 == 0x00000001)
	{
		iVar0 = 0x64A5169A;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(joaat("p_cargo_chute_s"));
	if ((unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(joaat("p_cargo_chute_s"))) && func_129())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_129()
{
	unk_0x3F423BF5B8125A50("P_cargo_chute_S");
	if (unk_0xB4AE0788C1587752("P_cargo_chute_S"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_130(int iParam0)
{
	return vLocal_62[iParam0 /*3*/];
}

int func_131()
{
	var uVar0;
	
	func_139(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_138())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_137())
	{
		return 0x00000001;
	}
	if (func_136(0x0000009F))
	{
		if (!func_135())
		{
			return 0x00000001;
		}
	}
	if (func_136(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_132() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_132()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_132()
{
	switch (func_134())
	{
		case 0x00000000:
			return func_133();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_133()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_134()
{
	return Global_7830;
}

bool func_135()
{
	return Global_2564C8.f_256;
}

int func_136(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_137()
{
	return Global_258C08;
}

bool func_138()
{
	return Global_2564C8.f_251;
}

void func_139(var uParam0)
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
					func_140(iVar0);
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

void func_140(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_37(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_141(iVar2, &bVar3))
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

int func_141(int iParam0, var uParam1)
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

void func_142()
{
	SYSTEM::WAIT(0x00000000);
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		unk_0x142CC44DB769B57E(&iLocal_64);
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x000000FA)
		{
			if (iVar1 == 0x00000000)
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_13))
				{
					if (unk_0x713261485D0F1B6C(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000))
					{
						if (func_116(Local_60.f_13))
						{
							unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_13), 0x00000000);
							iVar1 = 0x00000001;
						}
					}
					else
					{
						iVar1 = 0x00000001;
					}
				}
				else
				{
					iVar1 = 0x00000001;
				}
			}
			if (iVar2 == 0x00000000)
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
				{
					if (unk_0xD59B17D2DFF98E26(unk_0x09AD4CE7DA179533(Local_60.f_4)))
					{
						if (func_116(Local_60.f_4))
						{
							unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_60.f_4), 0x00000001, 0x00000001);
							iVar2 = 0x00000001;
						}
					}
					else
					{
						iVar2 = 0x00000001;
					}
				}
				else
				{
					iVar2 = 0x00000001;
				}
			}
			if (iVar3 == 0x00000000)
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_5))
				{
					if (func_116(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 0x00000001;
					}
				}
				else
				{
					iVar3 = 0x00000001;
				}
			}
			if ((iVar2 == 0x00000001 && iVar3 == 0x00000001) && iVar1 == 0x00000001)
			{
				iVar0 = 0x0000270F;
			}
			else
			{
				SYSTEM::WAIT(0x00000000);
			}
			iVar0++;
		}
		Local_60 = 0x00000004;
		func_147(func_148(0x00000001, 0x00000001), 0x00000008, func_50());
	}
	func_146();
	func_70();
	func_145();
	func_144();
}

void func_144()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_145()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x0000000A))
	{
		unk_0xF82EA857DA10E0CD(&uLocal_65);
	}
}

void func_146()
{
	if (iLocal_66 != 0x00000000)
	{
		if (unk_0x83A8177D302E1A7E(iLocal_66))
		{
			unk_0xF7E25143642732EA(iLocal_66, 0x00000000);
			iLocal_66 = 0x00000000;
		}
	}
}

void func_147(int iParam0, int iParam1, var uParam2)
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

int func_148(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_37(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_88(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_149(struct<21> Param0)
{
	int iVar0;
	
	func_153(func_154(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	unk_0x3A4967AE7C71F999(0x00000002);
	func_151(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_60, 0x00000017);
	unk_0x35B62793EAE9ADDF(&vLocal_62, 0x00000061);
	if (!func_150())
	{
		return 0x00000000;
	}
	unk_0x256D93AFAE851A7A(0x00000000);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_60.f_11 = unk_0xD803B885F5E47A62();
		Local_60.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_D = 0x00000001;
		Local_60.f_E = 0x00000001;
		Local_60.f_F = 0x00000003;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_14 == 0x00000003)
		{
			Local_60.f_12 = 0x00000001;
		}
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
		if (iVar0 == 0x00000001)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 0x00000002)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
		if (iVar0 == 0x00000001)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 0x00000002)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	bLocal_67 = unk_0x09BE1E6DF7B80B43();
	if (unk_0x8CD06866876216F2())
	{
		vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
	}
	return 0x00000001;
}

int func_150()
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
		if (func_138())
		{
			return 0x00000000;
		}
		if (func_136(0x0000009D))
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

int func_151(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_144();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_152())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_144();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_138())
				{
					if (!bParam2)
					{
						func_144();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_136(0x0000009D))
				{
					if (!bParam2)
					{
						func_144();
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
					func_144();
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
				func_144();
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
			func_144();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_152()
{
	return Global_140856;
}

void func_153(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_144();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_154(int iParam0)
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

