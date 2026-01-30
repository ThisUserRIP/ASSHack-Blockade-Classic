#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_RandomNumberGenerator.h"
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Security::Cryptography { struct CspParameters; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct RNGCryptoServiceProvider : mscorlib::System::Security::Cryptography::RandomNumberGenerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _handle;
		struct StaticFields
		{
			mscorlib::System::Object* _lock;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* rgb);
		void _ctor(mscorlib::System::Security::Cryptography::CspParameters* cspParams);
		void _ctor(mscorlib::System::String* str);
		void Check();
		static bool RngOpen();
		static intptr_t RngInitialize(IL2CPP::Array<uint8_t>* seed);
		static intptr_t RngGetBytes(intptr_t handle, IL2CPP::Array<uint8_t>* data);
		static void RngClose(intptr_t handle);
		void GetBytes(IL2CPP::Array<uint8_t>* data);
		void GetNonZeroBytes(IL2CPP::Array<uint8_t>* data);
		void Finalize();
		void Dispose(bool disposing);
	};
}

