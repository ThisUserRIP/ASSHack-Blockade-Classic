#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	struct Mod : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* RandomSource;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Invert(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static IL2CPP::Array<uint32_t>* Random_(IL2CPP::Array<uint32_t>* p);
		static void Add(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void Subtract(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void InversionResult(IL2CPP::Array<uint32_t>* p, int32_t ac, IL2CPP::Array<uint32_t>* a, IL2CPP::Array<uint32_t>* z);
		static void InversionStep(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* u, int32_t uLen, IL2CPP::Array<uint32_t>* x, int32_t& xc);
		static int32_t GetTrailingZeroes(uint32_t x);
		void _ctor();
		static void _cctor();
	};
}

