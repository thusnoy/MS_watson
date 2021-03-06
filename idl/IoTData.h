//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: IoTData.h
//  Source: IoTData.idl
//  Generated: Tue Dec 19 15:26:17 2017
//  OpenSplice 6.8.3
//  
//******************************************************************
#ifndef _IOTDATA_H_
#define _IOTDATA_H_

#include "sacpp_mapping.h"


namespace DDS
{
   namespace IoT
   {
      class IoTValue;
      struct IoTNVP;
      struct IoTData;
      typedef DDS::Octet IoTUI8;
      typedef DDS::UShort IoTUI16;
      typedef DDS::ULong IoTUI32;
      typedef DDS::ULongLong IoTUI64;
      typedef DDS::Char IoTI8;
      typedef DDS::Short IoTI16;
      typedef DDS::Long IoTI32;
      typedef DDS::LongLong IoTI64;
      typedef DDS::Float IoTF32;
      typedef DDS::Double IoTF64;
      typedef DDS::Boolean IoTB;
      typedef DDS::Char* IoTStr;
      typedef DDS::String_var IoTStr_var;
      typedef DDS::String_out IoTStr_out;
      typedef DDS::Char IoTCh;
      struct IoTUI8Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Octet, struct IoTUI8Seq_uniq_> IoTUI8Seq;
      typedef DDS_DCPSSequence_var < IoTUI8Seq> IoTUI8Seq_var;
      typedef DDS_DCPSSequence_out < IoTUI8Seq> IoTUI8Seq_out;
      struct IoTUI16Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < UShort, struct IoTUI16Seq_uniq_> IoTUI16Seq;
      typedef DDS_DCPSSequence_var < IoTUI16Seq> IoTUI16Seq_var;
      typedef DDS_DCPSSequence_out < IoTUI16Seq> IoTUI16Seq_out;
      struct IoTUI32Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < ULong, struct IoTUI32Seq_uniq_> IoTUI32Seq;
      typedef DDS_DCPSSequence_var < IoTUI32Seq> IoTUI32Seq_var;
      typedef DDS_DCPSSequence_out < IoTUI32Seq> IoTUI32Seq_out;
      struct IoTUI64Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < ULongLong, struct IoTUI64Seq_uniq_> IoTUI64Seq;
      typedef DDS_DCPSSequence_var < IoTUI64Seq> IoTUI64Seq_var;
      typedef DDS_DCPSSequence_out < IoTUI64Seq> IoTUI64Seq_out;
      struct IoTI8Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Char, struct IoTI8Seq_uniq_> IoTI8Seq;
      typedef DDS_DCPSSequence_var < IoTI8Seq> IoTI8Seq_var;
      typedef DDS_DCPSSequence_out < IoTI8Seq> IoTI8Seq_out;
      struct IoTI16Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Short, struct IoTI16Seq_uniq_> IoTI16Seq;
      typedef DDS_DCPSSequence_var < IoTI16Seq> IoTI16Seq_var;
      typedef DDS_DCPSSequence_out < IoTI16Seq> IoTI16Seq_out;
      struct IoTI32Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Long, struct IoTI32Seq_uniq_> IoTI32Seq;
      typedef DDS_DCPSSequence_var < IoTI32Seq> IoTI32Seq_var;
      typedef DDS_DCPSSequence_out < IoTI32Seq> IoTI32Seq_out;
      struct IoTI64Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < LongLong, struct IoTI64Seq_uniq_> IoTI64Seq;
      typedef DDS_DCPSSequence_var < IoTI64Seq> IoTI64Seq_var;
      typedef DDS_DCPSSequence_out < IoTI64Seq> IoTI64Seq_out;
      struct IoTF32Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Float, struct IoTF32Seq_uniq_> IoTF32Seq;
      typedef DDS_DCPSSequence_var < IoTF32Seq> IoTF32Seq_var;
      typedef DDS_DCPSSequence_out < IoTF32Seq> IoTF32Seq_out;
      struct IoTF64Seq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Double, struct IoTF64Seq_uniq_> IoTF64Seq;
      typedef DDS_DCPSSequence_var < IoTF64Seq> IoTF64Seq_var;
      typedef DDS_DCPSSequence_out < IoTF64Seq> IoTF64Seq_out;
      struct IoTBSeq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Boolean, struct IoTBSeq_uniq_> IoTBSeq;
      typedef DDS_DCPSSequence_var < IoTBSeq> IoTBSeq_var;
      typedef DDS_DCPSSequence_out < IoTBSeq> IoTBSeq_out;
      struct IoTStrSeq_uniq_ {};
      typedef DDS_DCPSUStrSeqT <struct IoTStrSeq_uniq_> IoTStrSeq;
      typedef DDS_DCPSUStrSeq_var < IoTStrSeq> IoTStrSeq_var;
      typedef DDS_DCPSUStrSeq_out < IoTStrSeq> IoTStrSeq_out;
      struct IoTChSeq_uniq_ {};
      typedef DDS_DCPSUFLSeq < Char, struct IoTChSeq_uniq_> IoTChSeq;
      typedef DDS_DCPSSequence_var < IoTChSeq> IoTChSeq_var;
      typedef DDS_DCPSSequence_out < IoTChSeq> IoTChSeq_out;
      enum IoTType
      {
         TYPE_IoTUI8,
         TYPE_IoTUI16,
         TYPE_IoTUI32,
         TYPE_IoTUI64,
         TYPE_IoTI8,
         TYPE_IoTI16,
         TYPE_IoTI32,
         TYPE_IoTI64,
         TYPE_IoTF32,
         TYPE_IoTF64,
         TYPE_IoTB,
         TYPE_IoTStr,
         TYPE_IoTCh,
         TYPE_IoTUI8Seq,
         TYPE_IoTUI16Seq,
         TYPE_IoTUI32Seq,
         TYPE_IoTUI64Seq,
         TYPE_IoTI8Seq,
         TYPE_IoTI16Seq,
         TYPE_IoTI32Seq,
         TYPE_IoTI64Seq,
         TYPE_IoTF32Seq,
         TYPE_IoTF64Seq,
         TYPE_IoTBSeq,
         TYPE_IoTStrSeq,
         TYPE_IoTChSeq
      };
      class IoTValue
      {
      public:
         void 
         _copy(const IoTValue& that)
         {
            if (this != &that)
            {
               if (that._d() == (DDS::IoT::IoTType)0) ui8(that.ui8());
               else if (that._d() == (DDS::IoT::IoTType)1) ui16(that.ui16());
               else if (that._d() == (DDS::IoT::IoTType)2) ui32(that.ui32());
               else if (that._d() == (DDS::IoT::IoTType)3) ui64(that.ui64());
               else if (that._d() == (DDS::IoT::IoTType)4) i8(that.i8());
               else if (that._d() == (DDS::IoT::IoTType)5) i16(that.i16());
               else if (that._d() == (DDS::IoT::IoTType)6) i32(that.i32());
               else if (that._d() == (DDS::IoT::IoTType)7) i64(that.i64());
               else if (that._d() == (DDS::IoT::IoTType)8) f32(that.f32());
               else if (that._d() == (DDS::IoT::IoTType)9) f64(that.f64());
               else if (that._d() == (DDS::IoT::IoTType)10) b(that.b());
               else if (that._d() == (DDS::IoT::IoTType)11) ( that._union.m_void ? str(that.str()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)12) ch(that.ch());
               else if (that._d() == (DDS::IoT::IoTType)13) ( that._union.m_void ? ui8Seq(that.ui8Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)14) ( that._union.m_void ? ui16Seq(that.ui16Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)15) ( that._union.m_void ? ui32Seq(that.ui32Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)16) ( that._union.m_void ? ui64Seq(that.ui64Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)17) ( that._union.m_void ? i8Seq(that.i8Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)18) ( that._union.m_void ? i16Seq(that.i16Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)19) ( that._union.m_void ? i32Seq(that.i32Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)20) ( that._union.m_void ? i64Seq(that.i64Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)21) ( that._union.m_void ? f32Seq(that.f32Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)22) ( that._union.m_void ? f64Seq(that.f64Seq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)23) ( that._union.m_void ? bSeq(that.bSeq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)24) ( that._union.m_void ? strSeq(that.strSeq()) : deleteMember() );
               else if (that._d() == (DDS::IoT::IoTType)25) ( that._union.m_void ? chSeq(that.chSeq()) : deleteMember() );
               m__d = that._d();
               m__d_set = that.m__d_set;
            }
         }
            IoTValue()
            :
            m__d((IoTType)0), m__d_set (FALSE), 
            _union()
         {
         }
         IoTValue(const IoTValue& that)            :
            m__d((IoTType)0),
            _union()
         {
         _copy(that);
         }
         ~IoTValue()
         {         deleteMember();         }
         void
         _eorb_itor()
         {
            new IoTUI8Seq;
            new IoTUI16Seq;
            new IoTUI32Seq;
            new IoTUI64Seq;
            new IoTI8Seq;
            new IoTI16Seq;
            new IoTI32Seq;
            new IoTI64Seq;
            new IoTF32Seq;
            new IoTF64Seq;
            new IoTBSeq;
            new IoTStrSeq;
            new IoTChSeq;
         }
         void
         deleteMember()
         {
            if (m__d == (DDS::IoT::IoTType)0) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)1) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)2) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)3) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)4) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)5) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)6) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)7) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)8) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)9) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)10) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)11) { if (_union.m_void) DDS::string_free((DDS::IoT::IoTStr)_union.m_void);}
            else if (m__d == (DDS::IoT::IoTType)12) {/*do nothing*/ ;} 

            else if (m__d == (DDS::IoT::IoTType)13) { if (_union.m_void) delete(((IoTUI8Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)14) { if (_union.m_void) delete(((IoTUI16Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)15) { if (_union.m_void) delete(((IoTUI32Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)16) { if (_union.m_void) delete(((IoTUI64Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)17) { if (_union.m_void) delete(((IoTI8Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)18) { if (_union.m_void) delete(((IoTI16Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)19) { if (_union.m_void) delete(((IoTI32Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)20) { if (_union.m_void) delete(((IoTI64Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)21) { if (_union.m_void) delete(((IoTF32Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)22) { if (_union.m_void) delete(((IoTF64Seq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)23) { if (_union.m_void) delete(((IoTBSeq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)24) { if (_union.m_void) delete(((IoTStrSeq*)_union.m_void));}
            else if (m__d == (DDS::IoT::IoTType)25) { if (_union.m_void) delete(((IoTChSeq*)_union.m_void));}
            m__d =(IoTType)0;
            _union.m_void = 0;
         }
         IoTValue & 
         operator=(const IoTValue& that)
         {
         _copy(that);
         return *this;
         }
         void _d (IoTType val)
         {
         m__d = val;
         m__d_set = TRUE;         }
         IoTType _d () const
         {
         return m__d;
         }

         void ui8 (Octet _val_)         {  deleteMember ();  _union.m_ui8 = _val_; m__d = (DDS::IoT::IoTType)0; m__d_set = TRUE; }
         Octet ui8() const { return  _union.m_ui8; }

         void ui16 (UShort _val_)         {  deleteMember ();  _union.m_ui16 = _val_; m__d = (DDS::IoT::IoTType)1; m__d_set = TRUE; }
         UShort ui16() const { return  _union.m_ui16; }

         void ui32 (ULong _val_)         {  deleteMember ();  _union.m_ui32 = _val_; m__d = (DDS::IoT::IoTType)2; m__d_set = TRUE; }
         ULong ui32() const { return  _union.m_ui32; }

         void ui64 (ULongLong _val_)         {  deleteMember ();  _union.m_ui64 = _val_; m__d = (DDS::IoT::IoTType)3; m__d_set = TRUE; }
         ULongLong ui64() const { return  _union.m_ui64; }

         void i8 (Char _val_)         {  deleteMember ();  _union.m_i8 = _val_; m__d = (DDS::IoT::IoTType)4; m__d_set = TRUE; }
         Char i8() const { return  _union.m_i8; }

         void i16 (Short _val_)         {  deleteMember ();  _union.m_i16 = _val_; m__d = (DDS::IoT::IoTType)5; m__d_set = TRUE; }
         Short i16() const { return  _union.m_i16; }

         void i32 (Long _val_)         {  deleteMember ();  _union.m_i32 = _val_; m__d = (DDS::IoT::IoTType)6; m__d_set = TRUE; }
         Long i32() const { return  _union.m_i32; }

         void i64 (LongLong _val_)         {  deleteMember ();  _union.m_i64 = _val_; m__d = (DDS::IoT::IoTType)7; m__d_set = TRUE; }
         LongLong i64() const { return  _union.m_i64; }

         void f32 (Float _val_)         {  deleteMember ();  _union.m_f32 = _val_; m__d = (DDS::IoT::IoTType)8; m__d_set = TRUE; }
         Float f32() const { return  _union.m_f32; }

         void f64 (Double _val_)         {  deleteMember ();  _union.m_f64 = _val_; m__d = (DDS::IoT::IoTType)9; m__d_set = TRUE; }
         Double f64() const { return  _union.m_f64; }

         void b (Boolean _val_)         {  deleteMember ();  _union.m_b = _val_; m__d = (DDS::IoT::IoTType)10; m__d_set = TRUE; }
         Boolean b() const { return  _union.m_b; }

         void str (char* _val_)         {  deleteMember (); _union.m_void = _val_;m__d = (DDS::IoT::IoTType)11; m__d_set = TRUE; }
         void str (const char* _val_)         {  deleteMember (); _union.m_void = DDS::string_dup (_val_);m__d = (DDS::IoT::IoTType)11; m__d_set = TRUE; }
         void str (const DDS::String_var& _val_)         {  deleteMember (); _union.m_void = DDS::string_dup (_val_);m__d = (DDS::IoT::IoTType)11; m__d_set = TRUE; }
         const char* str() const { return (IoTStr)_union.m_void; }

         void ch (Char _val_)         {  deleteMember ();  _union.m_ch = _val_; m__d = (DDS::IoT::IoTType)12; m__d_set = TRUE; }
         Char ch() const { return  _union.m_ch; }

         void ui8Seq (const IoTUI8Seq& _val_)         {  deleteMember (); _union.m_void = new IoTUI8Seq(_val_);m__d = (DDS::IoT::IoTType)13; m__d_set = TRUE; }
         IoTUI8Seq& ui8Seq() { return *(IoTUI8Seq*)_union.m_void; }
         const IoTUI8Seq& ui8Seq() const { return *(IoTUI8Seq*)_union.m_void; }

         void ui16Seq (const IoTUI16Seq& _val_)         {  deleteMember (); _union.m_void = new IoTUI16Seq(_val_);m__d = (DDS::IoT::IoTType)14; m__d_set = TRUE; }
         IoTUI16Seq& ui16Seq() { return *(IoTUI16Seq*)_union.m_void; }
         const IoTUI16Seq& ui16Seq() const { return *(IoTUI16Seq*)_union.m_void; }

         void ui32Seq (const IoTUI32Seq& _val_)         {  deleteMember (); _union.m_void = new IoTUI32Seq(_val_);m__d = (DDS::IoT::IoTType)15; m__d_set = TRUE; }
         IoTUI32Seq& ui32Seq() { return *(IoTUI32Seq*)_union.m_void; }
         const IoTUI32Seq& ui32Seq() const { return *(IoTUI32Seq*)_union.m_void; }

         void ui64Seq (const IoTUI64Seq& _val_)         {  deleteMember (); _union.m_void = new IoTUI64Seq(_val_);m__d = (DDS::IoT::IoTType)16; m__d_set = TRUE; }
         IoTUI64Seq& ui64Seq() { return *(IoTUI64Seq*)_union.m_void; }
         const IoTUI64Seq& ui64Seq() const { return *(IoTUI64Seq*)_union.m_void; }

         void i8Seq (const IoTI8Seq& _val_)         {  deleteMember (); _union.m_void = new IoTI8Seq(_val_);m__d = (DDS::IoT::IoTType)17; m__d_set = TRUE; }
         IoTI8Seq& i8Seq() { return *(IoTI8Seq*)_union.m_void; }
         const IoTI8Seq& i8Seq() const { return *(IoTI8Seq*)_union.m_void; }

         void i16Seq (const IoTI16Seq& _val_)         {  deleteMember (); _union.m_void = new IoTI16Seq(_val_);m__d = (DDS::IoT::IoTType)18; m__d_set = TRUE; }
         IoTI16Seq& i16Seq() { return *(IoTI16Seq*)_union.m_void; }
         const IoTI16Seq& i16Seq() const { return *(IoTI16Seq*)_union.m_void; }

         void i32Seq (const IoTI32Seq& _val_)         {  deleteMember (); _union.m_void = new IoTI32Seq(_val_);m__d = (DDS::IoT::IoTType)19; m__d_set = TRUE; }
         IoTI32Seq& i32Seq() { return *(IoTI32Seq*)_union.m_void; }
         const IoTI32Seq& i32Seq() const { return *(IoTI32Seq*)_union.m_void; }

         void i64Seq (const IoTI64Seq& _val_)         {  deleteMember (); _union.m_void = new IoTI64Seq(_val_);m__d = (DDS::IoT::IoTType)20; m__d_set = TRUE; }
         IoTI64Seq& i64Seq() { return *(IoTI64Seq*)_union.m_void; }
         const IoTI64Seq& i64Seq() const { return *(IoTI64Seq*)_union.m_void; }

         void f32Seq (const IoTF32Seq& _val_)         {  deleteMember (); _union.m_void = new IoTF32Seq(_val_);m__d = (DDS::IoT::IoTType)21; m__d_set = TRUE; }
         IoTF32Seq& f32Seq() { return *(IoTF32Seq*)_union.m_void; }
         const IoTF32Seq& f32Seq() const { return *(IoTF32Seq*)_union.m_void; }

         void f64Seq (const IoTF64Seq& _val_)         {  deleteMember (); _union.m_void = new IoTF64Seq(_val_);m__d = (DDS::IoT::IoTType)22; m__d_set = TRUE; }
         IoTF64Seq& f64Seq() { return *(IoTF64Seq*)_union.m_void; }
         const IoTF64Seq& f64Seq() const { return *(IoTF64Seq*)_union.m_void; }

         void bSeq (const IoTBSeq& _val_)         {  deleteMember (); _union.m_void = new IoTBSeq(_val_);m__d = (DDS::IoT::IoTType)23; m__d_set = TRUE; }
         IoTBSeq& bSeq() { return *(IoTBSeq*)_union.m_void; }
         const IoTBSeq& bSeq() const { return *(IoTBSeq*)_union.m_void; }

         void strSeq (const IoTStrSeq& _val_)         {  deleteMember (); _union.m_void = new IoTStrSeq(_val_);m__d = (DDS::IoT::IoTType)24; m__d_set = TRUE; }
         IoTStrSeq& strSeq() { return *(IoTStrSeq*)_union.m_void; }
         const IoTStrSeq& strSeq() const { return *(IoTStrSeq*)_union.m_void; }

         void chSeq (const IoTChSeq& _val_)         {  deleteMember (); _union.m_void = new IoTChSeq(_val_);m__d = (DDS::IoT::IoTType)25; m__d_set = TRUE; }
         IoTChSeq& chSeq() { return *(IoTChSeq*)_union.m_void; }
         const IoTChSeq& chSeq() const { return *(IoTChSeq*)_union.m_void; }
         IoTType m__d;
         DDS::Boolean m__d_set;
         union {
            void * m_void;
            Octet m_ui8;
            UShort m_ui16;
            ULong m_ui32;
            ULongLong m_ui64;
            Char m_i8;
            Short m_i16;
            Long m_i32;
            LongLong m_i64;
            Float m_f32;
            Double m_f64;
            Boolean m_b;
            Char m_ch;
         } _union;
      };
      typedef DDS_DCPSStruct_var < IoTValue> IoTValue_var;
      typedef DDS_DCPSStruct_out < IoTValue> IoTValue_out;

      struct IoTNVP
      {
            String_mgr name;
            IoTValue value;
      };

      typedef DDS_DCPSStruct_var < IoTNVP> IoTNVP_var;
      typedef DDS_DCPSStruct_out < IoTNVP> IoTNVP_out;
      struct IoTNVPSeq_uniq_ {};
      typedef DDS_DCPSUVLSeq < IoTNVP, struct IoTNVPSeq_uniq_> IoTNVPSeq;
      typedef DDS_DCPSSequence_var < IoTNVPSeq> IoTNVPSeq_var;
      typedef DDS_DCPSSequence_out < IoTNVPSeq> IoTNVPSeq_out;

      struct IoTData
      {
            String_mgr typeName;
            String_mgr instanceId;
            IoTNVPSeq values;
      };

      typedef DDS_DCPSStruct_var < IoTData> IoTData_var;
      typedef DDS_DCPSStruct_out < IoTData> IoTData_out;
   }
}




#endif
