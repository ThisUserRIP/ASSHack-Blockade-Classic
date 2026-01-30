#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Security_Util_Tokenizer_TokenSource.h"
namespace mscorlib::System::Security::Util { struct Tokenizer_ITokenReader; };
namespace mscorlib::System::Security::Util { struct Tokenizer_StringMaker; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Security::Util { struct TokenizerStream; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Util
{
	struct Tokenizer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t LineNo;
		int32_t _inProcessingTag;
		IL2CPP::Array<uint8_t>* _inBytes;
		IL2CPP::Array<wchar_t>* _inChars;
		mscorlib::System::String* _inString;
		int32_t _inIndex;
		int32_t _inSize;
		int32_t _inSavedCharacter;
		mscorlib::System::Security::Util::Tokenizer_TokenSource _inTokenSource;
		mscorlib::System::Security::Util::Tokenizer_ITokenReader* _inTokenReader;
		mscorlib::System::Security::Util::Tokenizer_StringMaker* _maker;
		IL2CPP::Array<mscorlib::System::String*>* _searchStrings;
		IL2CPP::Array<mscorlib::System::String*>* _replaceStrings;
		int32_t _inNestedIndex;
		int32_t _inNestedSize;
		mscorlib::System::String* _inNestedString;
		void BasicInitialization();
		void Recycle();
		void _ctor(mscorlib::System::String* input);
		void ChangeFormat(mscorlib::System::Text::Encoding* encoding);
		void GetTokens(mscorlib::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet);
		mscorlib::System::String* GetStringToken();
	};
}

