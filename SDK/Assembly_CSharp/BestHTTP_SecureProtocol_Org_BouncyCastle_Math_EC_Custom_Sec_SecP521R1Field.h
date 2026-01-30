#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	struct SecP521R1Field : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint32_t>* P;
			int32_t P16;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Add(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void AddOne(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static IL2CPP::Array<uint32_t>* FromBigInteger(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static void Half(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Multiply(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void Negate(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Reduce(IL2CPP::Array<uint32_t>* xx, IL2CPP::Array<uint32_t>* z);
		static void Reduce23(IL2CPP::Array<uint32_t>* z);
		static void Square(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void SquareN(IL2CPP::Array<uint32_t>* x, int32_t n, IL2CPP::Array<uint32_t>* z);
		static void Subtract(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void Twice(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void ImplMultiply(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz);
		static void ImplSquare(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* zz);
		void _ctor();
		static void _cctor();
	};
}

