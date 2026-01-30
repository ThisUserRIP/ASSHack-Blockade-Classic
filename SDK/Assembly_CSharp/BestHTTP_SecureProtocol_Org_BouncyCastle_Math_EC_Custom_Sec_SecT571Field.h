#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	struct SecT571Field : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint64_t M59;
			uint64_t RM;
			IL2CPP::Array<uint64_t>* ROOT_Z;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Add(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y, IL2CPP::Array<uint64_t>* z);
		static void Add(IL2CPP::Array<uint64_t>* x, int32_t xOff, IL2CPP::Array<uint64_t>* y, int32_t yOff, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static void AddBothTo(IL2CPP::Array<uint64_t>* x, int32_t xOff, IL2CPP::Array<uint64_t>* y, int32_t yOff, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static void AddExt(IL2CPP::Array<uint64_t>* xx, IL2CPP::Array<uint64_t>* yy, IL2CPP::Array<uint64_t>* zz);
		static void AddOne(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* z);
		static IL2CPP::Array<uint64_t>* FromBigInteger(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static void Invert(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* z);
		static void Multiply(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y, IL2CPP::Array<uint64_t>* z);
		static void MultiplyAddToExt(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y, IL2CPP::Array<uint64_t>* zz);
		static void Reduce(IL2CPP::Array<uint64_t>* xx, IL2CPP::Array<uint64_t>* z);
		static void Reduce5(IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static void Sqrt(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* z);
		static void Square(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* z);
		static void SquareAddToExt(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* zz);
		static void SquareN(IL2CPP::Array<uint64_t>* x, int32_t n, IL2CPP::Array<uint64_t>* z);
		static uint32_t Trace(IL2CPP::Array<uint64_t>* x);
		static void ImplMultiply(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y, IL2CPP::Array<uint64_t>* zz);
		static void ImplMulwAcc(IL2CPP::Array<uint64_t>* xs, uint64_t y, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static void ImplSquare(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* zz);
		void _ctor();
		static void _cctor();
	};
}

