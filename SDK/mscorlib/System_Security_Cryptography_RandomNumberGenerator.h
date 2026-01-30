#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct RandomNumberGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::Security::Cryptography::RandomNumberGenerator* Create();
		static mscorlib::System::Security::Cryptography::RandomNumberGenerator* Create(mscorlib::System::String* rngName);
		void Dispose();
		void Dispose(bool disposing);
		void GetBytes(IL2CPP::Array<uint8_t>* data);
		void GetBytes(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count);
		void GetNonZeroBytes(IL2CPP::Array<uint8_t>* data);
	};
}

