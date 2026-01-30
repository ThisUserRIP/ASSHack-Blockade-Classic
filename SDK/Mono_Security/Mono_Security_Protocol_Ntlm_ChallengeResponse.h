#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct ChallengeResponse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _disposed;
		IL2CPP::Array<uint8_t>* _challenge;
		IL2CPP::Array<uint8_t>* _lmpwd;
		IL2CPP::Array<uint8_t>* _ntpwd;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* magic;
			IL2CPP::Array<uint8_t>* nullEncMagic;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* challenge);
		void Finalize();
		void set_Password(mscorlib::System::String* value);
		void set_Challenge(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<uint8_t>* get_LM();
		IL2CPP::Array<uint8_t>* get_NT();
		void Dispose();
		void Dispose(bool disposing);
		IL2CPP::Array<uint8_t>* GetResponse(IL2CPP::Array<uint8_t>* pwd);
		IL2CPP::Array<uint8_t>* PrepareDESKey(IL2CPP::Array<uint8_t>* key56bits, int32_t position);
		IL2CPP::Array<uint8_t>* PasswordToKey(mscorlib::System::String* password, int32_t position);
		static void _cctor();
	};
}

