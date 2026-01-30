#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System { struct UriParser; };
#include "System_Uri_Flags.h"
namespace System::System { struct Uri_UriInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_UriIdnScope.h"
#include "System_UriKind.h"
namespace mscorlib::System { struct Object; };
#include "System_UriFormat.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_ParsingError.h"
namespace System::System { struct UriFormatException; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_UriHostNameType.h"
#include "System_UriComponents.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
#include "System_Uri_Check.h"
#include "..\mscorlib\System_StringComparison.h"

namespace System::System
{
	struct Uri : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_String;
		mscorlib::System::String* m_originalUnicodeString;
		System::UriParser* m_Syntax;
		mscorlib::System::String* m_DnsSafeHost;
		System::Uri_Flags m_Flags;
		System::Uri_UriInfo* m_Info;
		bool m_iriParsing;
		struct StaticFields
		{
			mscorlib::System::String* UriSchemeFile;
			mscorlib::System::String* UriSchemeFtp;
			mscorlib::System::String* UriSchemeGopher;
			mscorlib::System::String* UriSchemeHttp;
			mscorlib::System::String* UriSchemeHttps;
			mscorlib::System::String* UriSchemeWs;
			mscorlib::System::String* UriSchemeWss;
			mscorlib::System::String* UriSchemeMailto;
			mscorlib::System::String* UriSchemeNews;
			mscorlib::System::String* UriSchemeNntp;
			mscorlib::System::String* UriSchemeNetTcp;
			mscorlib::System::String* UriSchemeNetPipe;
			mscorlib::System::String* SchemeDelimiter;
			int32_t c_Max16BitUtf8SequenceLength;
			int32_t c_MaxUriBufferSize;
			int32_t c_MaxUriSchemeName;
			bool s_ConfigInitialized;
			bool s_ConfigInitializing;
			System::UriIdnScope s_IdnScope;
			bool s_IriParsing;
			bool useDotNetRelativeOrAbsolute;
			System::UriKind DotNetRelativeOrAbsolute;
			bool IsWindowsFileSystem;
			mscorlib::System::Object* s_initLock;
			System::UriFormat V1ToStringUnescape;
			wchar_t c_DummyChar;
			wchar_t c_EOL;
			IL2CPP::Array<wchar_t>* HexLowerChars;
			IL2CPP::Array<wchar_t>* _WSchars;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_IsImplicitFile();
		bool get_IsUncOrDosPath();
		bool get_IsDosPath();
		bool get_IsUncPath();
		System::Uri_Flags get_HostType();
		System::UriParser* get_Syntax();
		bool get_IsNotAbsoluteUri();
		static bool IriParsingStatic(System::UriParser* syntax);
		bool get_AllowIdn();
		bool AllowIdnStatic(System::UriParser* syntax, System::Uri_Flags flags);
		bool IsIntranet(mscorlib::System::String* schemeHost);
		bool get_UserDrivenParsing();
		void SetUserDrivenParsing();
		uint16_t get_SecuredPathIndex();
		bool NotAny(System::Uri_Flags flags);
		bool InFact(System::Uri_Flags flags);
		static bool StaticNotAny(System::Uri_Flags allFlags, System::Uri_Flags checkFlags);
		static bool StaticInFact(System::Uri_Flags allFlags, System::Uri_Flags checkFlags);
		System::Uri_UriInfo* EnsureUriInfo();
		void EnsureParseRemaining();
		void EnsureHostString(bool allowDnsOptimization);
		void _ctor(mscorlib::System::String* uriString);
		void _ctor(mscorlib::System::String* uriString, System::UriKind uriKind);
		void _ctor(System::Uri* baseUri, mscorlib::System::String* relativeUri);
		void CreateUri(System::Uri* baseUri, mscorlib::System::String* relativeUri, bool dontEscape);
		void _ctor(System::Uri* baseUri, System::Uri* relativeUri);
		static System::ParsingError GetCombinedString(System::Uri* baseUri, mscorlib::System::String* relativeStr, bool dontEscape, mscorlib::System::String& result);
		static System::UriFormatException* GetException(System::ParsingError err);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		mscorlib::System::String* get_AbsolutePath();
		mscorlib::System::String* get_PrivateAbsolutePath();
		mscorlib::System::String* get_AbsoluteUri();
		mscorlib::System::String* get_LocalPath();
		mscorlib::System::String* get_Authority();
		System::UriHostNameType get_HostNameType();
		bool get_IsDefaultPort();
		bool get_IsFile();
		bool get_IsLoopback();
		mscorlib::System::String* get_PathAndQuery();
		IL2CPP::Array<mscorlib::System::String*>* get_Segments();
		bool get_IsUnc();
		mscorlib::System::String* get_Host();
		static bool StaticIsFile(System::UriParser* syntax);
		static mscorlib::System::Object* get_InitializeLock();
		static void InitializeUriConfig();
		mscorlib::System::String* GetLocalPath();
		int32_t get_Port();
		mscorlib::System::String* get_Query();
		mscorlib::System::String* get_Fragment();
		mscorlib::System::String* get_Scheme();
		bool get_OriginalStringSwitched();
		mscorlib::System::String* get_OriginalString();
		mscorlib::System::String* get_DnsSafeHost();
		bool get_IsAbsoluteUri();
		bool get_UserEscaped();
		mscorlib::System::String* get_UserInfo();
		static bool IsGenDelim(wchar_t ch);
		static bool CheckSchemeName(mscorlib::System::String* schemeName);
		static bool IsHexDigit(wchar_t character);
		static int32_t FromHex(wchar_t digit);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		static bool op_Equality(System::Uri* uri1, System::Uri* uri2);
		static bool op_Inequality(System::Uri* uri1, System::Uri* uri2);
		bool Equals(mscorlib::System::Object* comparand);
		static bool CheckForColonInFirstPathSegment(mscorlib::System::String* uriString);
		static mscorlib::System::String* InternalEscapeString(mscorlib::System::String* rawString);
		static System::ParsingError ParseScheme(mscorlib::System::String* uriString, System::Uri_Flags& flags, System::UriParser& syntax);
		System::UriFormatException* ParseMinimal();
		System::ParsingError PrivateParseMinimal();
		void PrivateParseMinimalIri(mscorlib::System::String* newHost, uint16_t idx);
		void CreateUriInfo(System::Uri_Flags cF);
		void CreateHostString();
		static mscorlib::System::String* CreateHostStringHelper(mscorlib::System::String* str, uint16_t idx, uint16_t end, System::Uri_Flags& flags, mscorlib::System::String& scopeId);
		void GetHostViaCustomSyntax();
		mscorlib::System::String* GetParts(System::UriComponents uriParts, System::UriFormat formatAs);
		mscorlib::System::String* GetEscapedParts(System::UriComponents uriParts);
		mscorlib::System::String* GetUnescapedParts(System::UriComponents uriParts, System::UriFormat formatAs);
		mscorlib::System::String* ReCreateParts(System::UriComponents parts, uint16_t nonCanonical, System::UriFormat formatAs);
		mscorlib::System::String* GetUriPartsFromUserString(System::UriComponents uriParts);
		void ParseRemaining();
		static uint16_t ParseSchemeCheckImplicitFile(wchar_t* uriString, uint16_t length, System::ParsingError& err, System::Uri_Flags& flags, System::UriParser& syntax);
		static bool CheckKnownSchemes(int64_t* lptr, uint16_t nChars, System::UriParser& syntax);
		static System::ParsingError CheckSchemeSyntax(wchar_t* ptr, uint16_t length, System::UriParser& syntax);
		uint16_t CheckAuthorityHelper(wchar_t* pString, uint16_t idx, uint16_t length, System::ParsingError& err, System::Uri_Flags& flags, System::UriParser* syntax, mscorlib::System::String& newHost);
		void CheckAuthorityHelperHandleDnsIri(wchar_t* pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode, System::UriParser* syntax, mscorlib::System::String* userInfoString, System::Uri_Flags& flags, bool& justNormalized, mscorlib::System::String& newHost, System::ParsingError& err);
		void CheckAuthorityHelperHandleAnyHostIri(wchar_t* pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, System::UriParser* syntax, System::Uri_Flags& flags, mscorlib::System::String& newHost, System::ParsingError& err);
		void FindEndOfComponent(mscorlib::System::String* input, uint16_t& idx, uint16_t end, wchar_t delim);
		void FindEndOfComponent(wchar_t* str, uint16_t& idx, uint16_t end, wchar_t delim);
		System::Uri_Check CheckCanonical(wchar_t* str, uint16_t& idx, uint16_t end, wchar_t delim);
		IL2CPP::Array<wchar_t>* GetCanonicalPath(IL2CPP::Array<wchar_t>* dest, int32_t& pos, System::UriFormat formatAs);
		static void UnescapeOnly(wchar_t* pch, int32_t start, int32_t& end, wchar_t ch1, wchar_t ch2, wchar_t ch3);
		static IL2CPP::Array<wchar_t>* Compress(IL2CPP::Array<wchar_t>* dest, uint16_t start, int32_t& destLength, System::UriParser* syntax);
		static int32_t CalculateCaseInsensitiveHashCode(mscorlib::System::String* text);
		static mscorlib::System::String* CombineUri(System::Uri* basePart, mscorlib::System::String* relativePart, System::UriFormat uriFormat);
		bool get_HasAuthority();
		static bool IsLWS(wchar_t ch);
		static bool IsAsciiLetter(wchar_t character);
		static bool IsAsciiLetterOrDigit(wchar_t character);
		static bool IsBidiControlCharacter(wchar_t ch);
		static mscorlib::System::String* StripBidiControlCharacter(wchar_t* strToClean, int32_t start, int32_t length);
		void CreateThis(mscorlib::System::String* uri, bool dontEscape, System::UriKind uriKind);
		void InitializeUri(System::ParsingError err, System::UriKind uriKind, System::UriFormatException& e);
		bool CheckForConfigLoad(mscorlib::System::String* data);
		bool CheckForUnicode(mscorlib::System::String* data);
		bool CheckForEscapedUnreserved(mscorlib::System::String* data);
		static bool TryCreate(mscorlib::System::String* uriString, System::UriKind uriKind, System::Uri& result);
		static bool TryCreate(System::Uri* baseUri, mscorlib::System::String* relativeUri, System::Uri& result);
		static bool TryCreate(System::Uri* baseUri, System::Uri* relativeUri, System::Uri& result);
		mscorlib::System::String* GetComponents(System::UriComponents components, System::UriFormat format);
		static int32_t Compare(System::Uri* uri1, System::Uri* uri2, System::UriComponents partsToCompare, System::UriFormat compareFormat, mscorlib::System::StringComparison comparisonType);
		bool IsWellFormedOriginalString();
		static bool IsWellFormedUriString(mscorlib::System::String* uriString, System::UriKind uriKind);
		bool InternalIsWellFormedOriginalString();
		static mscorlib::System::String* UnescapeDataString(mscorlib::System::String* stringToUnescape);
		static mscorlib::System::String* EscapeUriString(mscorlib::System::String* stringToEscape);
		static mscorlib::System::String* EscapeDataString(mscorlib::System::String* stringToEscape);
		mscorlib::System::String* EscapeUnescapeIri(mscorlib::System::String* input, int32_t start, int32_t end, System::UriComponents component);
		void _ctor(System::Uri_Flags flags, System::UriParser* uriParser, mscorlib::System::String* uri);
		static System::Uri* CreateHelper(mscorlib::System::String* uriString, bool dontEscape, System::UriKind uriKind, System::UriFormatException& e);
		static System::Uri* ResolveHelper(System::Uri* baseUri, System::Uri* relativeUri, mscorlib::System::String& newUriString, bool& userEscaped, System::UriFormatException& e);
		mscorlib::System::String* GetRelativeSerializationString(System::UriFormat format);
		mscorlib::System::String* GetComponentsHelper(System::UriComponents uriComponents, System::UriFormat uriFormat);
		void CreateThisFromUri(System::Uri* otherUri);
		static void _cctor();
	};
	bool operator==(System::Uri& uri1, System::Uri& uri2);
	bool operator!=(System::Uri& uri1, System::Uri& uri2);
}

