#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_UriSyntaxFlags.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UriParser_UriQuirksVersion.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
namespace System::System { struct UriFormatException; };
#include "System_UriComponents.h"
#include "System_UriFormat.h"

namespace System::System
{
	struct UriParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::UriSyntaxFlags m_Flags;
		System::UriSyntaxFlags m_UpdatableFlags;
		bool m_UpdatableFlagsUsed;
		int32_t m_Port;
		mscorlib::System::String* m_Scheme;
		struct StaticFields
		{
			System::UriSyntaxFlags SchemeOnlyFlags;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, System::UriParser>* m_Table;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, System::UriParser>* m_TempTable;
			System::UriSyntaxFlags c_UpdatableFlags;
			int32_t NoDefaultPort;
			int32_t c_InitialTableSize;
			System::UriParser* HttpUri;
			System::UriParser* HttpsUri;
			System::UriParser* WsUri;
			System::UriParser* WssUri;
			System::UriParser* FtpUri;
			System::UriParser* FileUri;
			System::UriParser* GopherUri;
			System::UriParser* NntpUri;
			System::UriParser* NewsUri;
			System::UriParser* MailToUri;
			System::UriParser* UuidUri;
			System::UriParser* TelnetUri;
			System::UriParser* LdapUri;
			System::UriParser* NetTcpUri;
			System::UriParser* NetPipeUri;
			System::UriParser* VsMacrosUri;
			System::UriParser_UriQuirksVersion s_QuirksVersion;
			int32_t c_MaxCapacity;
			System::UriSyntaxFlags UnknownV1SyntaxFlags;
			System::UriSyntaxFlags HttpSyntaxFlags;
			System::UriSyntaxFlags FtpSyntaxFlags;
			System::UriSyntaxFlags FileSyntaxFlags;
			System::UriSyntaxFlags VsmacrosSyntaxFlags;
			System::UriSyntaxFlags GopherSyntaxFlags;
			System::UriSyntaxFlags NewsSyntaxFlags;
			System::UriSyntaxFlags NntpSyntaxFlags;
			System::UriSyntaxFlags TelnetSyntaxFlags;
			System::UriSyntaxFlags LdapSyntaxFlags;
			System::UriSyntaxFlags MailtoSyntaxFlags;
			System::UriSyntaxFlags NetPipeSyntaxFlags;
			System::UriSyntaxFlags NetTcpSyntaxFlags;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_SchemeName();
		int32_t get_DefaultPort();
		System::UriParser* OnNewUri();
		void InitializeAndValidate(System::Uri* uri, System::UriFormatException& parsingError);
		mscorlib::System::String* Resolve(System::Uri* baseUri, System::Uri* relativeUri, System::UriFormatException& parsingError);
		mscorlib::System::String* GetComponents(System::Uri* uri, System::UriComponents components, System::UriFormat format);
		bool IsWellFormedOriginalString(System::Uri* uri);
		static bool get_ShouldUseLegacyV2Quirks();
		static void _cctor();
		System::UriSyntaxFlags get_Flags();
		bool NotAny(System::UriSyntaxFlags flags);
		bool InFact(System::UriSyntaxFlags flags);
		bool IsAllSet(System::UriSyntaxFlags flags);
		bool IsFullMatch(System::UriSyntaxFlags flags, System::UriSyntaxFlags expected);
		void _ctor(System::UriSyntaxFlags flags);
		static System::UriParser* FindOrFetchAsUnknownV1Syntax(mscorlib::System::String* lwrCaseScheme);
		static System::UriParser* GetSyntax(mscorlib::System::String* lwrCaseScheme);
		bool get_IsSimple();
		System::UriParser* InternalOnNewUri();
		void InternalValidate(System::Uri* thisUri, System::UriFormatException& parsingError);
		mscorlib::System::String* InternalResolve(System::Uri* thisBaseUri, System::Uri* uriLink, System::UriFormatException& parsingError);
		mscorlib::System::String* InternalGetComponents(System::Uri* thisUri, System::UriComponents uriComponents, System::UriFormat uriFormat);
		bool InternalIsWellFormedOriginalString(System::Uri* thisUri);
	};
}

