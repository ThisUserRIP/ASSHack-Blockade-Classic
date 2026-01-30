#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct XmlCharType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* charProperties;
		static mscorlib::System::Object* get_StaticLock();
		static void InitInstance();
		static void SetProperties(mscorlib::System::String* ranges, uint8_t value);
		void _ctor(IL2CPP::Array<uint8_t>* charProperties);
		static System_Xml::System::Xml::XmlCharType get_Instance();
		bool IsWhiteSpace(wchar_t ch);
		bool IsNCNameSingleChar(wchar_t ch);
		bool IsStartNCNameSingleChar(wchar_t ch);
		bool IsNameSingleChar(wchar_t ch);
		bool IsCharData(wchar_t ch);
		bool IsPubidChar(wchar_t ch);
		bool IsTextChar(wchar_t ch);
		bool IsLetter(wchar_t ch);
		bool IsNCNameCharXml4e(wchar_t ch);
		bool IsStartNCNameCharXml4e(wchar_t ch);
		bool IsNameCharXml4e(wchar_t ch);
		static bool IsDigit(wchar_t ch);
		static bool IsHighSurrogate(int32_t ch);
		static bool IsLowSurrogate(int32_t ch);
		static bool IsSurrogate(int32_t ch);
		static int32_t CombineSurrogateChar(int32_t lowChar, int32_t highChar);
		static void SplitSurrogateChar(int32_t combinedChar, wchar_t& lowChar, wchar_t& highChar);
		bool IsOnlyWhitespace(mscorlib::System::String* str);
		int32_t IsOnlyWhitespaceWithPos(mscorlib::System::String* str);
		int32_t IsOnlyCharData(mscorlib::System::String* str);
		static bool IsOnlyDigits(mscorlib::System::String* str, int32_t startPos, int32_t len);
		int32_t IsPublicId(mscorlib::System::String* str);
		static bool InRange(int32_t value, int32_t start, int32_t end);
	};
}

