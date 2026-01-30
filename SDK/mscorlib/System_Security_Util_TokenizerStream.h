#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Util { struct TokenizerShortBlock; };
namespace mscorlib::System::Security::Util { struct TokenizerStringBlock; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Util
{
	struct TokenizerStream : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_countTokens;
		mscorlib::System::Security::Util::TokenizerShortBlock* m_headTokens;
		mscorlib::System::Security::Util::TokenizerShortBlock* m_lastTokens;
		mscorlib::System::Security::Util::TokenizerShortBlock* m_currentTokens;
		int32_t m_indexTokens;
		mscorlib::System::Security::Util::TokenizerStringBlock* m_headStrings;
		mscorlib::System::Security::Util::TokenizerStringBlock* m_currentStrings;
		int32_t m_indexStrings;
		void _ctor();
		void AddToken(int16_t token);
		void AddString(mscorlib::System::String* str);
		void Reset();
		int16_t GetNextFullToken();
		int16_t GetNextToken();
		mscorlib::System::String* GetNextString();
		void ThrowAwayNextString();
		void TagLastToken(int16_t tag);
		int32_t GetTokenCount();
		void GoToPosition(int32_t position);
	};
}

