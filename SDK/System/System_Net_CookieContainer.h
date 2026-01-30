#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_HeaderVariantInfo.h"
namespace System::System::Net { struct HeaderVariantInfo; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct PathList; };
namespace System::System::Net { struct Cookie; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct CookieCollection; };
namespace System::System { struct Uri; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace System::System::Net
{
	struct CookieContainer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* m_domainTable;
		int32_t m_maxCookieSize;
		int32_t m_maxCookies;
		int32_t m_maxCookiesPerDomain;
		int32_t m_count;
		mscorlib::System::String* m_fqdnMyDomain;
		struct StaticFields
		{
			IL2CPP::Array<System::Net::HeaderVariantInfo>* HeaderInfo;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void AddRemoveDomain(mscorlib::System::String* key, System::Net::PathList* value);
		void Add(System::Net::Cookie* cookie, bool throwOnError);
		bool AgeCookies(mscorlib::System::String* domain);
		int32_t ExpireCollection(System::Net::CookieCollection* cc);
		bool IsLocalDomain(mscorlib::System::String* host);
		System::Net::CookieCollection* CookieCutter(System::Uri* uri, mscorlib::System::String* headerName, mscorlib::System::String* setCookieHeader, bool isThrow);
		System::Net::CookieCollection* InternalGetCookies(System::Uri* uri);
		void BuildCookieCollectionFromDomainMatches(System::Uri* uri, bool isSecure, int32_t port, System::Net::CookieCollection* cookies, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* domainAttribute, bool matchOnlyPlainCookie);
		void MergeUpdateCollections(System::Net::CookieCollection* destination, System::Net::CookieCollection* source, int32_t port, bool isSecure, bool isPlainOnly);
		mscorlib::System::String* GetCookieHeader(System::Uri* uri);
		mscorlib::System::String* GetCookieHeader(System::Uri* uri, mscorlib::System::String& optCookie2);
		static void _cctor();
	};
}

