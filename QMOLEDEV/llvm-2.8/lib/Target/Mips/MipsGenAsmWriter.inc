//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Assembly Writer Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void MipsAsmPrinter::printInstruction(const MachineInstr *MI, raw_ostream &O) {
  static const unsigned OpInfo[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// PROLOG_LABEL
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    1U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    536870923U,	// ADD
    536870928U,	// ADDi
    536870934U,	// ADDiu
    536870941U,	// ADDu
    1140850723U,	// ADJCALLSTACKDOWN
    1140850742U,	// ADJCALLSTACKUP
    536870983U,	// AND
    538968140U,	// ANDi
    603979858U,	// BC1F
    603979864U,	// BC1FL
    603979871U,	// BC1T
    603979877U,	// BC1TL
    536871020U,	// BEQ
    541065329U,	// BGEZ
    541065335U,	// BGEZAL
    541065343U,	// BGTZ
    541065349U,	// BLEZ
    541065355U,	// BLTZ
    541065361U,	// BLTZAL
    536871065U,	// BNE
    541065374U,	// CEIL_LD
    541065374U,	// CEIL_LS
    541065382U,	// CEIL_W_D32
    541065392U,	// CEIL_W_S32
    541065402U,	// CFC1
    541065408U,	// CLZ
    603979973U,	// CPLOAD
    1207959758U,	// CPRESTORE
    1610612954U,	// CTC1
    541065440U,	// CVTD_L32
    541065449U,	// CVTD_S32
    541065458U,	// CVTD_W32
    541065467U,	// CVTL_D
    541065467U,	// CVTL_S
    541065474U,	// CVTS_D32
    541065483U,	// CVTS_L32
    541065492U,	// CVTS_W32
    541065501U,	// CVTW_D32
    541065510U,	// CVTW_S32
    541065519U,	// DIV
    541065524U,	// DIVu
    541065530U,	// FABS_D32
    541065537U,	// FABS_S32
    536871240U,	// FADD_D32
    536871247U,	// FADD_S32
    2348810582U,	// FCMP_D32
    2415919446U,	// FCMP_S32
    536871257U,	// FDIV_D32
    536871264U,	// FDIV_S32
    541065575U,	// FLOOR_LD
    541065575U,	// FLOOR_LS
    541065584U,	// FLOOR_W_D32
    541065595U,	// FLOOR_W_S32
    541065606U,	// FMOV_D32
    541065613U,	// FMOV_S32
    536871316U,	// FMUL_D32
    536871323U,	// FMUL_S32
    541065634U,	// FNEG_D32
    541065641U,	// FNEG_S32
    541065648U,	// FSQRT_D32
    541065656U,	// FSQRT_S32
    536871360U,	// FSUB_D32
    536871367U,	// FSUB_S32
    603980238U,	// J
    603980241U,	// JAL
    603980246U,	// JALR
    603980252U,	// JR
    545260000U,	// LB
    545260004U,	// LBu
    545260009U,	// LDC1
    553648150U,	// LEA_ADDiu
    545260015U,	// LH
    545260019U,	// LHu
    562037240U,	// LUi
    545260029U,	// LW
    545260033U,	// LWC1
    519U,	// MACRO
    541065746U,	// MFC1
    603980312U,	// MFHI
    603980318U,	// MFLO
    548U,	// MOVCCRToCCR
    570425906U,	// MOVN
    570425912U,	// MOVZ
    1610613310U,	// MTC1
    603980356U,	// MTHI
    603980362U,	// MTLO
    541065808U,	// MULT
    541065814U,	// MULTu
    605U,	// NOMACRO
    618U,	// NOP
    536871534U,	// NOR
    627U,	// NOREORDER
    536871554U,	// OR
    538968710U,	// ORi
    651U,	// REORDER
    603980252U,	// RET
    541065880U,	// ROUND_LD
    541065880U,	// ROUND_LS
    541065889U,	// ROUND_W_D32
    541065900U,	// ROUND_W_S32
    545260215U,	// SB
    545260219U,	// SDC1
    541065921U,	// SEB
    541065926U,	// SEH
    545260235U,	// SH
    536871631U,	// SLL
    536871636U,	// SLLV
    536871642U,	// SLT
    536871647U,	// SLTi
    536871653U,	// SLTiu
    536871660U,	// SLTu
    536871666U,	// SRA
    536871671U,	// SRAV
    536871677U,	// SRL
    536871682U,	// SRLV
    536871688U,	// SUB
    536871693U,	// SUBu
    545260307U,	// SW
    545260311U,	// SWC1
    797U,	// Select_CC
    817U,	// Select_CC_D32
    841U,	// Select_CC_S32
    865U,	// Select_FCC
    882U,	// Select_FCC_D32
    907U,	// Select_FCC_S32
    541066148U,	// TRUNC_LD
    541066148U,	// TRUNC_LS
    541066157U,	// TRUNC_W_D32
    541066168U,	// TRUNC_W_S32
    541066179U,	// WSBW
    536871881U,	// XOR
    538969038U,	// XORi
    0U
  };

  const char *AsmStrs = 
    "DBG_VALUE\000add\t\000addi\t\000addiu\t\000addu\t\000!ADJCALLSTACKDOWN "
    "\000!ADJCALLSTACKUP \000and\t\000andi\t\000bc1f \000bc1fl \000bc1t \000"
    "bc1tl \000beq\t\000bgez\t\000bgezal\t\000bgtz\t\000blez\t\000bltz\t\000"
    "bltzal\t\000bne\t\000ceil.l \000ceil.w.d \000ceil.w.s \000cfc1 \000clz\t"
    "\000.cpload\t\000.cprestore\t\000ctc1 \000cvt.d.l \000cvt.d.s \000cvt.d"
    ".w \000cvt.l \000cvt.s.d \000cvt.s.l \000cvt.s.w \000cvt.w.d \000cvt.w."
    "s \000div\t\000divu\t\000abs.d \000abs.s \000add.d \000add.s \000c.\000"
    "div.d \000div.s \000floor.l \000floor.w.d \000floor.w.s \000mov.d \000m"
    "ov.s \000mul.d \000mul.s \000neg.d \000neg.s \000sqrt.d \000sqrt.s \000"
    "sub.d \000sub.s \000j\t\000jal\t\000jalr\t\000jr\t\000lb\t\000lbu\t\000"
    "ldc1 \000lh\t\000lhu\t\000lui\t\000lw\t\000lwc1 \000.set\tmacro\000mfc1"
    " \000mfhi\t\000mflo\t\000# MOVCCRToCCR\000movn\t\000movz\t\000mtc1 \000"
    "mthi\t\000mtlo\t\000mult\t\000multu\t\000.set\tnomacro\000nop\000nor\t\000"
    ".set\tnoreorder\000or\t\000ori\t\000.set\treorder\000round.l \000round."
    "w.d \000round.w.s \000sb\t\000sdc1 \000seb\t\000seh\t\000sh\t\000sll\t\000"
    "sllv\t\000slt\t\000slti\t\000sltiu\t\000sltu\t\000sra\t\000srav\t\000sr"
    "l\t\000srlv\t\000sub\t\000subu\t\000sw\t\000swc1 \000# MipsSelect_CC_i3"
    "2\000# MipsSelect_CC_D32_f32\000# MipsSelect_CC_S32_f32\000# MipsSelect"
    "_FCC\000# MipsSelect_FCC_D32_f32\000# MipsSelect_FCC_S32_f32\000trunc.l"
    " \000trunc.w.d \000trunc.w.s \000wsbw\t\000xor\t\000xori\t\000";

  O << "\t";

  // Emit the opcode for the instruction.
  unsigned Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 1023)-1;


  // Fragment 0 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 29) & 7) {
  default:   // unreachable.
  case 0:
    // DBG_VALUE, MACRO, MOVCCRToCCR, NOMACRO, NOP, NOREORDER, REORDER, Selec...
    return;
    break;
  case 1:
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BC1F, BC1FL, BC1T, BC1TL, BEQ, BGEZ...
    printOperand(MI, 0, O); 
    break;
  case 2:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, CPRESTORE
    printUnsignedImm(MI, 0, O); 
    break;
  case 3:
    // CTC1, MTC1
    printOperand(MI, 1, O); 
    O << ", "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 4:
    // FCMP_D32, FCMP_S32
    printFCCOperand(MI, 2, O); 
    break;
  }


  // Fragment 1 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 26) & 7) {
  default:   // unreachable.
  case 0:
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BEQ, BGEZ, BGEZAL, BGTZ, BLEZ, BLTZ...
    O << ", "; 
    break;
  case 1:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, BC1F, BC1FL, BC1T, BC1TL, CPLOAD, J,...
    return;
    break;
  case 2:
    // CPRESTORE
    O << "\n"; 
    return;
    break;
  case 3:
    // FCMP_D32
    O << ".d "; 
    printOperand(MI, 0, O); 
    O << ", "; 
    printOperand(MI, 1, O); 
    return;
    break;
  case 4:
    // FCMP_S32
    O << ".s "; 
    printOperand(MI, 0, O); 
    O << ", "; 
    printOperand(MI, 1, O); 
    return;
    break;
  }


  // Fragment 2 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 23) & 7) {
  default:   // unreachable.
  case 0:
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BEQ, BGEZ, BGEZAL, BGTZ, BLEZ, BLTZ...
    printOperand(MI, 1, O); 
    break;
  case 1:
    // LB, LBu, LDC1, LH, LHu, LW, LWC1, SB, SDC1, SH, SW, SWC1
    printMemOperand(MI, 1, O); 
    return;
    break;
  case 2:
    // LEA_ADDiu
    printMemOperand(MI, 1, O, "stackloc"); 
    return;
    break;
  case 3:
    // LUi
    printUnsignedImm(MI, 1, O); 
    return;
    break;
  case 4:
    // MOVN, MOVZ
    printOperand(MI, 2, O); 
    O << ", "; 
    printOperand(MI, 3, O); 
    return;
    break;
  }


  // Fragment 3 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 22) & 1) {
    // BGEZ, BGEZAL, BGTZ, BLEZ, BLTZ, BLTZAL, CEIL_LD, CEIL_LS, CEIL_W_D32, ...
    return;
  } else {
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BEQ, BNE, FADD_D32, FADD_S32, FDIV_...
    O << ", "; 
  }


  // Fragment 4 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 21) & 1) {
    // ANDi, ORi, XORi
    printUnsignedImm(MI, 2, O); 
    return;
  } else {
    // ADD, ADDi, ADDiu, ADDu, AND, BEQ, BNE, FADD_D32, FADD_S32, FDIV_D32, F...
    printOperand(MI, 2, O); 
    return;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *MipsAsmPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 84 && "Invalid register number!");

  static const unsigned RegAsmOffset[] = {
    0, 2, 4, 6, 8, 11, 14, 17, 20, 23, 26, 30, 34, 38, 
    42, 46, 50, 54, 58, 62, 66, 11, 70, 14, 73, 17, 76, 20, 
    79, 23, 82, 26, 85, 30, 89, 34, 93, 38, 97, 42, 101, 46, 
    105, 50, 109, 54, 113, 58, 117, 62, 121, 66, 125, 129, 132, 135, 
    138, 141, 144, 147, 150, 153, 156, 159, 162, 165, 168, 171, 174, 177, 
    180, 182, 184, 187, 190, 193, 196, 199, 202, 205, 208, 210, 212, 0
  };

  const char *AsmStrs =
    "4\0005\0006\0007\000AT\000F0\000F2\000F4\000F6\000F8\000F10\000F12\000F"
    "14\000F16\000F18\000F20\000F22\000F24\000F26\000F28\000F30\000F1\000F3\000"
    "F5\000F7\000F9\000F11\000F13\000F15\000F17\000F19\000F21\000F23\000F25\000"
    "F27\000F29\000F31\00031\000FP\000GP\000hi\00026\00027\000lo\000RA\00016"
    "\00017\00018\00019\00020\00021\00022\00023\000SP\0008\0009\00010\00011\000"
    "12\00013\00014\00015\00024\00025\0002\0003\000ZERO\000";
  return AsmStrs+RegAsmOffset[RegNo-1];
}


#ifdef GET_INSTRUCTION_NAME
#undef GET_INSTRUCTION_NAME

/// getInstructionName: This method is automatically generated by tblgen
/// from the instruction set description.  This returns the enum name of the
/// specified instruction.
const char *MipsAsmPrinter::getInstructionName(unsigned Opcode) {
  assert(Opcode < 146 && "Invalid instruction number!");

  static const unsigned InstAsmOffset[] = {
    0, 4, 14, 27, 36, 45, 50, 65, 79, 92, 106, 123, 133, 146, 
    151, 155, 160, 166, 171, 188, 203, 207, 212, 217, 223, 228, 234, 238, 
    243, 250, 255, 260, 265, 272, 276, 284, 292, 303, 314, 319, 323, 330, 
    340, 345, 354, 363, 372, 379, 386, 395, 404, 413, 422, 431, 435, 440, 
    449, 458, 467, 476, 485, 494, 503, 512, 521, 530, 542, 554, 563, 572, 
    581, 590, 599, 608, 618, 628, 637, 646, 648, 652, 657, 660, 663, 667, 
    672, 682, 685, 689, 693, 696, 701, 707, 712, 717, 722, 734, 739, 744, 
    749, 754, 759, 764, 770, 778, 782, 786, 796, 799, 803, 811, 815, 824, 
    833, 845, 857, 860, 865, 869, 873, 876, 880, 885, 889, 894, 900, 905, 
    909, 914, 918, 923, 927, 932, 935, 940, 950, 964, 978, 989, 1004, 1019, 
    1028, 1037, 1049, 1061, 1066, 1070, 0
  };

  const char *Strs =
    "PHI\000INLINEASM\000PROLOG_LABEL\000EH_LABEL\000GC_LABEL\000KILL\000EXT"
    "RACT_SUBREG\000INSERT_SUBREG\000IMPLICIT_DEF\000SUBREG_TO_REG\000COPY_T"
    "O_REGCLASS\000DBG_VALUE\000REG_SEQUENCE\000COPY\000ADD\000ADDi\000ADDiu"
    "\000ADDu\000ADJCALLSTACKDOWN\000ADJCALLSTACKUP\000AND\000ANDi\000BC1F\000"
    "BC1FL\000BC1T\000BC1TL\000BEQ\000BGEZ\000BGEZAL\000BGTZ\000BLEZ\000BLTZ"
    "\000BLTZAL\000BNE\000CEIL_LD\000CEIL_LS\000CEIL_W_D32\000CEIL_W_S32\000"
    "CFC1\000CLZ\000CPLOAD\000CPRESTORE\000CTC1\000CVTD_L32\000CVTD_S32\000C"
    "VTD_W32\000CVTL_D\000CVTL_S\000CVTS_D32\000CVTS_L32\000CVTS_W32\000CVTW"
    "_D32\000CVTW_S32\000DIV\000DIVu\000FABS_D32\000FABS_S32\000FADD_D32\000"
    "FADD_S32\000FCMP_D32\000FCMP_S32\000FDIV_D32\000FDIV_S32\000FLOOR_LD\000"
    "FLOOR_LS\000FLOOR_W_D32\000FLOOR_W_S32\000FMOV_D32\000FMOV_S32\000FMUL_"
    "D32\000FMUL_S32\000FNEG_D32\000FNEG_S32\000FSQRT_D32\000FSQRT_S32\000FS"
    "UB_D32\000FSUB_S32\000J\000JAL\000JALR\000JR\000LB\000LBu\000LDC1\000LE"
    "A_ADDiu\000LH\000LHu\000LUi\000LW\000LWC1\000MACRO\000MFC1\000MFHI\000M"
    "FLO\000MOVCCRToCCR\000MOVN\000MOVZ\000MTC1\000MTHI\000MTLO\000MULT\000M"
    "ULTu\000NOMACRO\000NOP\000NOR\000NOREORDER\000OR\000ORi\000REORDER\000R"
    "ET\000ROUND_LD\000ROUND_LS\000ROUND_W_D32\000ROUND_W_S32\000SB\000SDC1\000"
    "SEB\000SEH\000SH\000SLL\000SLLV\000SLT\000SLTi\000SLTiu\000SLTu\000SRA\000"
    "SRAV\000SRL\000SRLV\000SUB\000SUBu\000SW\000SWC1\000Select_CC\000Select"
    "_CC_D32\000Select_CC_S32\000Select_FCC\000Select_FCC_D32\000Select_FCC_"
    "S32\000TRUNC_LD\000TRUNC_LS\000TRUNC_W_D32\000TRUNC_W_S32\000WSBW\000XO"
    "R\000XORi\000";
  return Strs+InstAsmOffset[Opcode];
}

#endif
