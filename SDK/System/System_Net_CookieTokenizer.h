#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Net_CookieToken.h"
#include "System_Net_CookieTokenizer_RecognizedAttribute.h"
namespace System::System::Net { struct CookieTokenizer_RecognizedAttribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct CookieTokenizer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_eofCookie;
		int32_t m_index;
		int32_t m_length;
		mscorlib::System::String* m_name;
		bool m_quoted;
		int32_t m_start;
		System::Net::CookieToken m_token;
		int32_t m_tokenLength;
		mscorlib::System::String* m_tokenStream;
		mscorlib::System::String* m_value;
		struct StaticFields
		{
			IL2CPP::Array<System::Net::CookieTokenizer_RecognizedAttribute>* RecognizedAttributes;
			IL2CPP::Array<System::Net::CookieTokenizer_RecognizedAttribute>* RecognizedServerAttributes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* tokenStream);
		bool get_EndOfCookie();
		void set_EndOfCookie(bool value);
		bool get_Eof();
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		bool get_Quoted();
		void set_Quoted(bool value);
		System::Net::CookieToken get_Token();
		void set_Token(System::Net::CookieToken value);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::String* Extract();
		System::Net::CookieToken FindNext(bool ignoreComma, bool ignoreEquals);
		System::Net::CookieToken Next(bool first, bool parseResponseCookies);
		void Reset();
		System::Net::CookieToken TokenFromName(bool parseResponseCookies);
		static void _cctor();
	};
}

