#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Random_; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Collections { struct IList; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math
{
	struct BigInteger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* magnitude;
		int32_t sign;
		int32_t nBits;
		int32_t nBitLength;
		int32_t mQuote;
		struct StaticFields
		{
			IL2CPP::Array<IL2CPP::Array<int32_t>*>* primeLists;
			IL2CPP::Array<int32_t>* primeProducts;
			int64_t IMASK;
			uint64_t UIMASK;
			IL2CPP::Array<int32_t>* ZeroMagnitude;
			IL2CPP::Array<uint8_t>* ZeroEncoding;
			IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* SMALL_CONSTANTS;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Zero;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* One;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Three;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Ten;
			IL2CPP::Array<uint8_t>* BitLengthTable;
			int32_t chunk2;
			int32_t chunk8;
			int32_t chunk10;
			int32_t chunk16;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix2;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix2E;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix8;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix8E;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix10;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix10E;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix16;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* radix16E;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* RandomSource;
			IL2CPP::Array<int32_t>* ExpWindowThresholds;
			int32_t BitsPerByte;
			int32_t BitsPerInt;
			int32_t BytesPerInt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static int32_t GetByteLength(int32_t nBits);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Arbitrary(int32_t sizeInBits);
		void _ctor(int32_t signum, IL2CPP::Array<int32_t>* mag, bool checkMag);
		void _ctor(mscorlib::System::String* value);
		void _ctor(mscorlib::System::String* str, int32_t radix);
		void _ctor(IL2CPP::Array<uint8_t>* bytes);
		void _ctor(IL2CPP::Array<uint8_t>* bytes, int32_t offset, int32_t length);
		static IL2CPP::Array<int32_t>* MakeMagnitude(IL2CPP::Array<uint8_t>* bytes, int32_t offset, int32_t length);
		void _ctor(int32_t sign, IL2CPP::Array<uint8_t>* bytes);
		void _ctor(int32_t sign, IL2CPP::Array<uint8_t>* bytes, int32_t offset, int32_t length);
		void _ctor(int32_t sizeInBits, mscorlib::System::Random_* random);
		void _ctor(int32_t bitLength, int32_t certainty, mscorlib::System::Random_* random);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Abs();
		static IL2CPP::Array<int32_t>* AddMagnitudes(IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Add(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* AddToMagnitude(IL2CPP::Array<int32_t>* magToAdd);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* And(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* AndNot(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* val);
		int32_t get_BitCount();
		static int32_t BitCnt(int32_t i);
		static int32_t CalcBitLength(int32_t sign, int32_t indx, IL2CPP::Array<int32_t>* mag);
		int32_t get_BitLength();
		static int32_t BitLen(int32_t w);
		bool QuickPow2Check();
		int32_t CompareTo(mscorlib::System::Object* obj);
		static int32_t CompareTo(int32_t xIndx, IL2CPP::Array<int32_t>* x, int32_t yIndx, IL2CPP::Array<int32_t>* y);
		static int32_t CompareNoLeadingZeroes(int32_t xIndx, IL2CPP::Array<int32_t>* x, int32_t yIndx, IL2CPP::Array<int32_t>* y);
		int32_t CompareTo(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		IL2CPP::Array<int32_t>* Divide(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Divide(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* val);
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* DivideAndRemainder(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* val);
		bool Equals(mscorlib::System::Object* obj);
		bool IsEqualMagnitude(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Gcd(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		int32_t GetHashCode();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Inc();
		int32_t get_IntValue();
		bool IsProbablePrime(int32_t certainty);
		bool IsProbablePrime(int32_t certainty, bool randomlySelected);
		bool CheckProbablePrime(int32_t certainty, mscorlib::System::Random_* random, bool randomlySelected);
		bool RabinMillerTest(int32_t certainty, mscorlib::System::Random_* random);
		bool RabinMillerTest(int32_t certainty, mscorlib::System::Random_* random, bool randomlySelected);
		int64_t get_LongValue();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Max(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Min(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Mod(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModInverse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModInversePow2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m);
		static int32_t ModInverse32(int32_t d);
		static int64_t ModInverse64(int64_t d);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ExtEuclid(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* a, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger& u1Out);
		static void ZeroOut(IL2CPP::Array<int32_t>* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModPow(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* e, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModPowBarrett(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* e, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReduceBarrett(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mr, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* yu);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModPowMonty(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* e, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m, bool convert);
		static IL2CPP::Array<int32_t>* GetWindowList(IL2CPP::Array<int32_t>* mag, int32_t extraBits);
		static int32_t CreateWindowEntry(int32_t mult, int32_t zeroes);
		static IL2CPP::Array<int32_t>* Square(IL2CPP::Array<int32_t>* w, IL2CPP::Array<int32_t>* x);
		static IL2CPP::Array<int32_t>* Multiply(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* z);
		int32_t GetMQuote();
		static void MontgomeryReduce(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* m, uint32_t mDash);
		static void MultiplyMonty(IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* m, uint32_t mDash, bool smallMontyModulus);
		static void SquareMonty(IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* m, uint32_t mDash, bool smallMontyModulus);
		static uint32_t MultiplyMontyNIsOne(uint32_t x, uint32_t y, uint32_t m, uint32_t mDash);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Multiply(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* val);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Square();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Negate();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* NextProbablePrime();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Not();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Pow(int32_t exp);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ProbablePrime(int32_t bitLength, mscorlib::System::Random_* random);
		int32_t Remainder(int32_t m);
		static IL2CPP::Array<int32_t>* Remainder(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Remainder(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* n);
		IL2CPP::Array<int32_t>* LastNBits(int32_t n);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* DivideWords(int32_t w);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* RemainderWords(int32_t w);
		static IL2CPP::Array<int32_t>* ShiftLeft(IL2CPP::Array<int32_t>* mag, int32_t n);
		static int32_t ShiftLeftOneInPlace(IL2CPP::Array<int32_t>* x, int32_t carry);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ShiftLeft(int32_t n);
		static void ShiftRightInPlace(int32_t start, IL2CPP::Array<int32_t>* mag, int32_t n);
		static void ShiftRightOneInPlace(int32_t start, IL2CPP::Array<int32_t>* mag);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ShiftRight(int32_t n);
		int32_t get_SignValue();
		static IL2CPP::Array<int32_t>* Subtract(int32_t xStart, IL2CPP::Array<int32_t>* x, int32_t yStart, IL2CPP::Array<int32_t>* y);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Subtract(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* n);
		static IL2CPP::Array<int32_t>* doSubBigLil(IL2CPP::Array<int32_t>* bigMag, IL2CPP::Array<int32_t>* lilMag);
		IL2CPP::Array<uint8_t>* ToByteArray();
		IL2CPP::Array<uint8_t>* ToByteArrayUnsigned();
		IL2CPP::Array<uint8_t>* ToByteArray(bool unsigned);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(int32_t radix);
		static void ToString(mscorlib::System::Text::StringBuilder* sb, int32_t radix, mscorlib::System::Collections::IList* moduli, int32_t scale, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* pos);
		static void AppendZeroExtendedString(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::String* s, int32_t minLength);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CreateUValueOf(uint64_t value);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CreateValueOf(int64_t value);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ValueOf(int64_t value);
		int32_t GetLowestSetBit();
		int32_t GetLowestSetBitMaskFirst(int32_t firstWordMask);
		bool TestBit(int32_t n);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Or(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Xor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* SetBit(int32_t n);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ClearBit(int32_t n);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FlipBit(int32_t n);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FlipExistingBit(int32_t n);
	};
}

