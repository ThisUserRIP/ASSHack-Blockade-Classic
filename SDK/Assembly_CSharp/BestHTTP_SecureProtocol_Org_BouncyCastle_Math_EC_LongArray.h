#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	struct LongArray : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int64_t>* m_ints;
		struct StaticFields
		{
			IL2CPP::Array<uint16_t>* INTERLEAVE2_TABLE;
			IL2CPP::Array<int32_t>* INTERLEAVE3_TABLE;
			IL2CPP::Array<int32_t>* INTERLEAVE4_TABLE;
			IL2CPP::Array<int32_t>* INTERLEAVE5_TABLE;
			IL2CPP::Array<int64_t>* INTERLEAVE7_TABLE;
			mscorlib::System::String* ZEROES;
			IL2CPP::Array<uint8_t>* BitLengths;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t intLen);
		void _ctor(IL2CPP::Array<int64_t>* ints);
		void _ctor(IL2CPP::Array<int64_t>* ints, int32_t off, int32_t len);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* bigInt);
		void CopyTo(IL2CPP::Array<int64_t>* z, int32_t zOff);
		bool IsOne();
		bool IsZero();
		int32_t GetUsedLength();
		int32_t GetUsedLengthFrom(int32_t from);
		int32_t Degree();
		int32_t DegreeFrom(int32_t limit);
		static int32_t BitLength(int64_t w);
		IL2CPP::Array<int64_t>* ResizedInts(int32_t newLen);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger();
		static int64_t ShiftUp(IL2CPP::Array<int64_t>* x, int32_t xOff, int32_t count, int32_t shift);
		static int64_t ShiftUp(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count, int32_t shift);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* AddOne();
		void AddShiftedByBitsSafe(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other, int32_t otherDegree, int32_t bits);
		static int64_t AddShiftedUp(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* y, int32_t yOff, int32_t count, int32_t shift);
		static int64_t AddShiftedDown(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* y, int32_t yOff, int32_t count, int32_t shift);
		void AddShiftedByWords(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other, int32_t words);
		static void Add(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* y, int32_t yOff, int32_t count);
		static void Add(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* y, int32_t yOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count);
		static void AddBoth(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* y1, int32_t y1Off, IL2CPP::Array<int64_t>* y2, int32_t y2Off, int32_t count);
		static void Distribute(IL2CPP::Array<int64_t>* x, int32_t src, int32_t dst1, int32_t dst2, int32_t count);
		int32_t get_Length();
		static void FlipWord(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t bit, int64_t word);
		bool TestBitZero();
		static bool TestBit(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t n);
		static void FlipBit(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t n);
		static void MultiplyWord(int64_t a, IL2CPP::Array<int64_t>* b, int32_t bLen, IL2CPP::Array<int64_t>* c, int32_t cOff);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModMultiplyLD(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, IL2CPP::Array<int32_t>* ks);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModMultiply(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, IL2CPP::Array<int32_t>* ks);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModMultiplyAlt(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, IL2CPP::Array<int32_t>* ks);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModReduce(int32_t m, IL2CPP::Array<int32_t>* ks);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* Multiply(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, IL2CPP::Array<int32_t>* ks);
		void Reduce(int32_t m, IL2CPP::Array<int32_t>* ks);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ReduceResult(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t len, int32_t m, IL2CPP::Array<int32_t>* ks);
		static int32_t ReduceInPlace(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t len, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void ReduceBitWise(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t BitLength, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void ReduceBit(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t bit, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void ReduceWordWise(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t len, int32_t toBit, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void ReduceWord(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t bit, int64_t word, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void ReduceVectorWise(IL2CPP::Array<int64_t>* buf, int32_t off, int32_t len, int32_t words, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void FlipVector(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* y, int32_t yOff, int32_t yLen, int32_t bits);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModSquare(int32_t m, IL2CPP::Array<int32_t>* ks);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModSquareN(int32_t n, int32_t m, IL2CPP::Array<int32_t>* ks);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* Square(int32_t m, IL2CPP::Array<int32_t>* ks);
		static void SquareInPlace(IL2CPP::Array<int64_t>* x, int32_t xLen, int32_t m, IL2CPP::Array<int32_t>* ks);
		static void Interleave(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count, int32_t width);
		static void Interleave3(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count);
		static int64_t Interleave3(int64_t x);
		static int64_t Interleave3_21to63(int32_t x);
		static void Interleave5(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count);
		static int64_t Interleave5(int64_t x);
		static int64_t Interleave3_13to65(int32_t x);
		static void Interleave7(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count);
		static int64_t Interleave7(int64_t x);
		static void Interleave2_n(IL2CPP::Array<int64_t>* x, int32_t xOff, IL2CPP::Array<int64_t>* z, int32_t zOff, int32_t count, int32_t rounds);
		static int64_t Interleave2_n(int64_t x, int32_t rounds);
		static int64_t Interleave4_16to64(int32_t x);
		static int64_t Interleave2_32to64(int32_t x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* ModInverse(int32_t m, IL2CPP::Array<int32_t>* ks);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* other);
		int32_t GetHashCode();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::LongArray* Copy();
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

