#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Cryptography_MD2.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct MD2Managed : mscorlib::Mono::Security::Cryptography::MD2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* state;
		IL2CPP::Array<uint8_t>* checksum;
		IL2CPP::Array<uint8_t>* buffer;
		int32_t count;
		IL2CPP::Array<uint8_t>* x;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* PI_SUBST;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		IL2CPP::Array<uint8_t>* Padding(int32_t nLength);
		void _ctor();
		void Initialize();
		void HashCore(IL2CPP::Array<uint8_t>* array, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void MD2Transform(IL2CPP::Array<uint8_t>* state, IL2CPP::Array<uint8_t>* checksum, IL2CPP::Array<uint8_t>* block, int32_t index);
		static void _cctor();
	};
}

