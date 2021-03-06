// opcodes.h
//   Don't edit this file.
//   This file is generated by the script opcodes.pl.

#define opc_nop	0	// 0x00 len:1
#define opc_aconst_null	1	// 0x01 len:1
#define opc_iconst_m1	2	// 0x02 len:1
#define opc_iconst_0	3	// 0x03 len:1
#define opc_iconst_1	4	// 0x04 len:1
#define opc_iconst_2	5	// 0x05 len:1
#define opc_iconst_3	6	// 0x06 len:1
#define opc_iconst_4	7	// 0x07 len:1
#define opc_iconst_5	8	// 0x08 len:1
#define opc_lconst_0	9	// 0x09 len:1
#define opc_lconst_1	10	// 0x0a len:1
#define opc_fconst_0	11	// 0x0b len:1
#define opc_fconst_1	12	// 0x0c len:1
#define opc_fconst_2	13	// 0x0d len:1
#define opc_dconst_0	14	// 0x0e len:1
#define opc_dconst_1	15	// 0x0f len:1
#define opc_bipush	16	// 0x10 len:2
#define opc_sipush	17	// 0x11 len:3
#define opc_ldc	18	// 0x12 len:2
#define opc_ldc_w	19	// 0x13 len:3
#define opc_ldc2_w	20	// 0x14 len:3
#define opc_iload	21	// 0x15 len:2
#define opc_lload	22	// 0x16 len:2
#define opc_fload	23	// 0x17 len:2
#define opc_dload	24	// 0x18 len:2
#define opc_aload	25	// 0x19 len:2
#define opc_iload_0	26	// 0x1a len:1
#define opc_iload_1	27	// 0x1b len:1
#define opc_iload_2	28	// 0x1c len:1
#define opc_iload_3	29	// 0x1d len:1
#define opc_lload_0	30	// 0x1e len:1
#define opc_lload_1	31	// 0x1f len:1
#define opc_lload_2	32	// 0x20 len:1
#define opc_lload_3	33	// 0x21 len:1
#define opc_fload_0	34	// 0x22 len:1
#define opc_fload_1	35	// 0x23 len:1
#define opc_fload_2	36	// 0x24 len:1
#define opc_fload_3	37	// 0x25 len:1
#define opc_dload_0	38	// 0x26 len:1
#define opc_dload_1	39	// 0x27 len:1
#define opc_dload_2	40	// 0x28 len:1
#define opc_dload_3	41	// 0x29 len:1
#define opc_aload_0	42	// 0x2a len:1
#define opc_aload_1	43	// 0x2b len:1
#define opc_aload_2	44	// 0x2c len:1
#define opc_aload_3	45	// 0x2d len:1
#define opc_iaload	46	// 0x2e len:1
#define opc_laload	47	// 0x2f len:1
#define opc_faload	48	// 0x30 len:1
#define opc_daload	49	// 0x31 len:1
#define opc_aaload	50	// 0x32 len:1
#define opc_baload	51	// 0x33 len:1
#define opc_caload	52	// 0x34 len:1
#define opc_saload	53	// 0x35 len:1
#define opc_istore	54	// 0x36 len:2
#define opc_lstore	55	// 0x37 len:2
#define opc_fstore	56	// 0x38 len:2
#define opc_dstore	57	// 0x39 len:2
#define opc_astore	58	// 0x3a len:2
#define opc_istore_0	59	// 0x3b len:1
#define opc_istore_1	60	// 0x3c len:1
#define opc_istore_2	61	// 0x3d len:1
#define opc_istore_3	62	// 0x3e len:1
#define opc_lstore_0	63	// 0x3f len:1
#define opc_lstore_1	64	// 0x40 len:1
#define opc_lstore_2	65	// 0x41 len:1
#define opc_lstore_3	66	// 0x42 len:1
#define opc_fstore_0	67	// 0x43 len:1
#define opc_fstore_1	68	// 0x44 len:1
#define opc_fstore_2	69	// 0x45 len:1
#define opc_fstore_3	70	// 0x46 len:1
#define opc_dstore_0	71	// 0x47 len:1
#define opc_dstore_1	72	// 0x48 len:1
#define opc_dstore_2	73	// 0x49 len:1
#define opc_dstore_3	74	// 0x4a len:1
#define opc_astore_0	75	// 0x4b len:1
#define opc_astore_1	76	// 0x4c len:1
#define opc_astore_2	77	// 0x4d len:1
#define opc_astore_3	78	// 0x4e len:1
#define opc_iastore	79	// 0x4f len:1
#define opc_lastore	80	// 0x50 len:1
#define opc_fastore	81	// 0x51 len:1
#define opc_dastore	82	// 0x52 len:1
#define opc_aastore	83	// 0x53 len:1
#define opc_bastore	84	// 0x54 len:1
#define opc_castore	85	// 0x55 len:1
#define opc_sastore	86	// 0x56 len:1
#define opc_pop	87	// 0x57 len:1
#define opc_pop2	88	// 0x58 len:1
#define opc_dup	89	// 0x59 len:1
#define opc_dup_x1	90	// 0x5a len:1
#define opc_dup_x2	91	// 0x5b len:1
#define opc_dup2	92	// 0x5c len:1
#define opc_dup2_x1	93	// 0x5d len:1
#define opc_dup2_x2	94	// 0x5e len:1
#define opc_swap	95	// 0x5f len:1
#define opc_iadd	96	// 0x60 len:1
#define opc_ladd	97	// 0x61 len:1
#define opc_fadd	98	// 0x62 len:1
#define opc_dadd	99	// 0x63 len:1
#define opc_isub	100	// 0x64 len:1
#define opc_lsub	101	// 0x65 len:1
#define opc_fsub	102	// 0x66 len:1
#define opc_dsub	103	// 0x67 len:1
#define opc_imul	104	// 0x68 len:1
#define opc_lmul	105	// 0x69 len:1
#define opc_fmul	106	// 0x6a len:1
#define opc_dmul	107	// 0x6b len:1
#define opc_idiv	108	// 0x6c len:1
#define opc_ldiv	109	// 0x6d len:1
#define opc_fdiv	110	// 0x6e len:1
#define opc_ddiv	111	// 0x6f len:1
#define opc_irem	112	// 0x70 len:1
#define opc_lrem	113	// 0x71 len:1
#define opc_frem	114	// 0x72 len:1
#define opc_drem	115	// 0x73 len:1
#define opc_ineg	116	// 0x74 len:1
#define opc_lneg	117	// 0x75 len:1
#define opc_fneg	118	// 0x76 len:1
#define opc_dneg	119	// 0x77 len:1
#define opc_ishl	120	// 0x78 len:1
#define opc_lshl	121	// 0x79 len:1
#define opc_ishr	122	// 0x7a len:1
#define opc_lshr	123	// 0x7b len:1
#define opc_iushr	124	// 0x7c len:1
#define opc_lushr	125	// 0x7d len:1
#define opc_iand	126	// 0x7e len:1
#define opc_land	127	// 0x7f len:1
#define opc_ior	128	// 0x80 len:1
#define opc_lor	129	// 0x81 len:1
#define opc_ixor	130	// 0x82 len:1
#define opc_lxor	131	// 0x83 len:1
#define opc_iinc	132	// 0x84 len:3
#define opc_i2l	133	// 0x85 len:1
#define opc_i2f	134	// 0x86 len:1
#define opc_i2d	135	// 0x87 len:1
#define opc_l2i	136	// 0x88 len:1
#define opc_l2f	137	// 0x89 len:1
#define opc_l2d	138	// 0x8a len:1
#define opc_f2i	139	// 0x8b len:1
#define opc_f2l	140	// 0x8c len:1
#define opc_f2d	141	// 0x8d len:1
#define opc_d2i	142	// 0x8e len:1
#define opc_d2l	143	// 0x8f len:1
#define opc_d2f	144	// 0x90 len:1
#define opc_i2b	145	// 0x91 len:1
#define opc_i2c	146	// 0x92 len:1
#define opc_i2s	147	// 0x93 len:1
#define opc_lcmp	148	// 0x94 len:1
#define opc_fcmpl	149	// 0x95 len:1
#define opc_fcmpg	150	// 0x96 len:1
#define opc_dcmpl	151	// 0x97 len:1
#define opc_dcmpg	152	// 0x98 len:1
#define opc_ifeq	153	// 0x99 len:3
#define opc_ifne	154	// 0x9a len:3
#define opc_iflt	155	// 0x9b len:3
#define opc_ifge	156	// 0x9c len:3
#define opc_ifgt	157	// 0x9d len:3
#define opc_ifle	158	// 0x9e len:3
#define opc_if_icmpeq	159	// 0x9f len:3
#define opc_if_icmpne	160	// 0xa0 len:3
#define opc_if_icmplt	161	// 0xa1 len:3
#define opc_if_icmpge	162	// 0xa2 len:3
#define opc_if_icmpgt	163	// 0xa3 len:3
#define opc_if_icmple	164	// 0xa4 len:3
#define opc_if_acmpeq	165	// 0xa5 len:3
#define opc_if_acmpne	166	// 0xa6 len:3
#define opc_goto	167	// 0xa7 len:3
#define opc_jsr	168	// 0xa8 len:3
#define opc_ret	169	// 0xa9 len:2
#define opc_tableswitch	170	// 0xaa len:99
#define opc_lookupswitch	171	// 0xab len:99
#define opc_ireturn	172	// 0xac len:1
#define opc_lreturn	173	// 0xad len:1
#define opc_freturn	174	// 0xae len:1
#define opc_dreturn	175	// 0xaf len:1
#define opc_areturn	176	// 0xb0 len:1
#define opc_return	177	// 0xb1 len:1
#define opc_getstatic	178	// 0xb2 len:3
#define opc_putstatic	179	// 0xb3 len:3
#define opc_getfield	180	// 0xb4 len:3
#define opc_putfield	181	// 0xb5 len:3
#define opc_invokevirtual	182	// 0xb6 len:3
#define opc_invokespecial	183	// 0xb7 len:3
#define opc_invokestatic	184	// 0xb8 len:3
#define opc_invokeinterface	185	// 0xb9 len:5
#define opc_xxxunusedxxx	186	// 0xba len:0
#define opc_new	187	// 0xbb len:3
#define opc_newarray	188	// 0xbc len:2
#define opc_anewarray	189	// 0xbd len:3
#define opc_arraylength	190	// 0xbe len:1
#define opc_athrow	191	// 0xbf len:1
#define opc_checkcast	192	// 0xc0 len:3
#define opc_instanceof	193	// 0xc1 len:3
#define opc_monitorenter	194	// 0xc2 len:1
#define opc_monitorexit	195	// 0xc3 len:1
#define opc_wide	196	// 0xc4 len:0
#define opc_multianewarray	197	// 0xc5 len:4
#define opc_ifnull	198	// 0xc6 len:3
#define opc_ifnonnull	199	// 0xc7 len:3
#define opc_goto_w	200	// 0xc8 len:5
#define opc_jsr_w	201	// 0xc9 len:5
#define opc_breakpoint	202	// 0xca len:1
#define opc_ldc_quick	203	// 0xcb len:2
#define opc_ldc_w_quick	204	// 0xcc len:3
#define opc_ldc2_w_quick	205	// 0xcd len:3
#define opc_getfield_quick	206	// 0xce len:3
#define opc_putfield_quick	207	// 0xcf len:3
#define opc_getfield2_quick	208	// 0xd0 len:3
#define opc_putfield2_quick	209	// 0xd1 len:3
#define opc_getstatic_quick	210	// 0xd2 len:3
#define opc_putstatic_quick	211	// 0xd3 len:3
#define opc_getstatic2_quick	212	// 0xd4 len:3
#define opc_putstatic2_quick	213	// 0xd5 len:3
#define opc_invokevirtual_quick	214	// 0xd6 len:3
#define opc_invokenonvirtual_quick	215	// 0xd7 len:3
#define opc_invokesuper_quick	216	// 0xd8 len:3
#define opc_invokestatic_quick	217	// 0xd9 len:3
#define opc_invokeinterface_quick	218	// 0xda len:5
#define opc_invokevirtualobject_quick	219	// 0xdb len:3
#define opc_invokeignored_quick	220	// 0xdc len:3
#define opc_new_quick	221	// 0xdd len:3
#define opc_anewarray_quick	222	// 0xde len:3
#define opc_multianewarray_quick	223	// 0xdf len:4
#define opc_checkcast_quick	224	// 0xe0 len:3
#define opc_instanceof_quick	225	// 0xe1 len:3
#define opc_invokevirtual_quick_w	226	// 0xe2 len:3
#define opc_getfield_quick_w	227	// 0xe3 len:3
#define opc_putfield_quick_w	228	// 0xe4 len:3
#define opc_nonnull_quick	229	// 0xe5 len:1

extern unsigned short opcode_length[];
extern char *opcode_symbol[];
