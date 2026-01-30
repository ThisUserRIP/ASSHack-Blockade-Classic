#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Mono_Security_Uri_UriScheme.h"
namespace mscorlib::Mono::Security { struct Uri_UriScheme; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "Mono_Security_UriPartial.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::Mono::Security
{
	struct Uri : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isUnixFilePath;
		mscorlib::System::String* source;
		mscorlib::System::String* scheme;
		mscorlib::System::String* host;
		int32_t port;
		mscorlib::System::String* path;
		mscorlib::System::String* query;
		mscorlib::System::String* fragment;
		mscorlib::System::String* userinfo;
		bool isUnc;
		bool isOpaquePart;
		bool userEscaped;
		mscorlib::System::String* cachedToString;
		mscorlib::System::String* cachedLocalPath;
		int32_t cachedHashCode;
		bool reduce;
		struct StaticFields
		{
			mscorlib::System::String* hexUpperChars;
			mscorlib::System::String* SchemeDelimiter;
			mscorlib::System::String* UriSchemeFile;
			mscorlib::System::String* UriSchemeFtp;
			mscorlib::System::String* UriSchemeGopher;
			mscorlib::System::String* UriSchemeHttp;
			mscorlib::System::String* UriSchemeHttps;
			mscorlib::System::String* UriSchemeMailto;
			mscorlib::System::String* UriSchemeNews;
			mscorlib::System::String* UriSchemeNntp;
			IL2CPP::Array<mscorlib::Mono::Security::Uri_UriScheme>* schemes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* uriString);
		void _ctor(mscorlib::System::String* uriString, bool dontEscape);
		mscorlib::System::String* get_AbsolutePath();
		bool get_IsFile();
		bool get_IsUnc();
		mscorlib::System::String* get_LocalPath();
		bool Equals(mscorlib::System::Object* comparant);
		int32_t GetHashCode();
		mscorlib::System::String* GetLeftPart(mscorlib::Mono::Security::UriPartial part);
		static int32_t FromHex(wchar_t digit);
		static mscorlib::System::String* HexEscape(wchar_t character);
		static wchar_t HexUnescape(mscorlib::System::String* pattern, int32_t& index);
		static bool IsHexDigit(wchar_t digit);
		static bool IsHexEncoding(mscorlib::System::String* pattern, int32_t index);
		mscorlib::System::String* ToString();
		static mscorlib::System::String* EscapeString(mscorlib::System::String* str);
		static mscorlib::System::String* EscapeString(mscorlib::System::String* str, bool escapeReserved, bool escapeHex, bool escapeBrackets);
		void Parse();
		mscorlib::System::String* Unescape(mscorlib::System::String* str);
		mscorlib::System::String* Unescape(mscorlib::System::String* str, bool excludeSharp);
		void ParseAsWindowsUNC(mscorlib::System::String* uriString);
		void ParseAsWindowsAbsoluteFilePath(mscorlib::System::String* uriString);
		void ParseAsUnixAbsoluteFilePath(mscorlib::System::String* uriString);
		void Parse(mscorlib::System::String* uriString);
		static mscorlib::System::String* Reduce(mscorlib::System::String* path);
		static mscorlib::System::String* GetSchemeDelimiter(mscorlib::System::String* scheme);
		static int32_t GetDefaultPort(mscorlib::System::String* scheme);
		mscorlib::System::String* GetOpaqueWiseSchemeDelimiter();
		static bool IsPredefinedScheme(mscorlib::System::String* scheme);
		static void _cctor();
	};
}

