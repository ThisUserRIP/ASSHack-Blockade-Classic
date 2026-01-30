#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security { struct SecurityDocument; };
namespace mscorlib::System::Security::Util { struct Tokenizer; };
namespace mscorlib::System::Security { struct SecurityElement; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Util { struct TokenizerStream; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Int32.h"
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Util
{
	struct Parser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::SecurityDocument* _doc;
		mscorlib::System::Security::Util::Tokenizer* _t;
		mscorlib::System::Security::SecurityElement* GetTopElement();
		void GetRequiredSizes(mscorlib::System::Security::Util::TokenizerStream* stream, int32_t& index);
		int32_t DetermineFormat(mscorlib::System::Security::Util::TokenizerStream* stream);
		void ParseContents();
		void _ctor(mscorlib::System::Security::Util::Tokenizer* t);
		void _ctor(mscorlib::System::String* input);
	};
}

