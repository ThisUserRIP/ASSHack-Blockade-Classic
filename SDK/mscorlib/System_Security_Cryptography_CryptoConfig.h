#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Security::Cryptography
{
	struct CryptoConfig : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* EncodeOID(mscorlib::System::String* str);
		static IL2CPP::Array<uint8_t>* EncodeLongNumber(int64_t x);
		static bool get_AllowOnlyFipsAlgorithms();
		static void AddAlgorithm(mscorlib::System::Type* algorithm, IL2CPP::Array<mscorlib::System::String*>* names);
		static void AddOID(mscorlib::System::String* oid, IL2CPP::Array<mscorlib::System::String*>* names);
		static mscorlib::System::Object* CreateFromName(mscorlib::System::String* name);
		static mscorlib::System::Object* CreateFromName(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* MapNameToOID(mscorlib::System::String* name, mscorlib::System::Object* arg);
		static mscorlib::System::String* MapNameToOID(mscorlib::System::String* name);
		void _ctor();
	};
}

