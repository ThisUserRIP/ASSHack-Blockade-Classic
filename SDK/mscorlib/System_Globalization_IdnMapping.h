#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct Punycode; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Globalization
{
	struct IdnMapping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool allow_unassigned;
		bool use_std3;
		mscorlib::System::Globalization::Punycode* puny;
		void _ctor();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* GetAscii(mscorlib::System::String* unicode);
		mscorlib::System::String* GetAscii(mscorlib::System::String* unicode, int32_t index, int32_t count);
		mscorlib::System::String* Convert(mscorlib::System::String* input, int32_t index, int32_t count, bool toAscii);
		mscorlib::System::String* ToAscii(mscorlib::System::String* s, int32_t offset);
		void VerifyLength(mscorlib::System::String* s, int32_t offset);
		mscorlib::System::String* NamePrep(mscorlib::System::String* s, int32_t offset);
		void VerifyProhibitedCharacters(mscorlib::System::String* s, int32_t offset);
		void VerifyStd3AsciiRules(mscorlib::System::String* s, int32_t offset);
		mscorlib::System::String* GetUnicode(mscorlib::System::String* ascii);
		mscorlib::System::String* GetUnicode(mscorlib::System::String* ascii, int32_t index, int32_t count);
		mscorlib::System::String* ToUnicode(mscorlib::System::String* s, int32_t offset);
	};
}

