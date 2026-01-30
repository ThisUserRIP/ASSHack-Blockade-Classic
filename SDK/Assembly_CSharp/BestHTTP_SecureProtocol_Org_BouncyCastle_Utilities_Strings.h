#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	struct Strings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool IsOneOf(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* candidates);
		static mscorlib::System::String* FromByteArray(IL2CPP::Array<uint8_t>* bs);
		static IL2CPP::Array<uint8_t>* ToByteArray(IL2CPP::Array<wchar_t>* cs);
		static IL2CPP::Array<uint8_t>* ToByteArray(mscorlib::System::String* s);
		static mscorlib::System::String* FromAsciiByteArray(IL2CPP::Array<uint8_t>* bytes);
		static IL2CPP::Array<uint8_t>* ToAsciiByteArray(IL2CPP::Array<wchar_t>* cs);
		static IL2CPP::Array<uint8_t>* ToAsciiByteArray(mscorlib::System::String* s);
		static mscorlib::System::String* FromUtf8ByteArray(IL2CPP::Array<uint8_t>* bytes);
		static IL2CPP::Array<uint8_t>* ToUtf8ByteArray(IL2CPP::Array<wchar_t>* cs);
		static IL2CPP::Array<uint8_t>* ToUtf8ByteArray(mscorlib::System::String* s);
		void _ctor();
	};
}

