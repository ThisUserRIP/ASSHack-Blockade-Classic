#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace System::System::Net { struct Comparer; };
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
#include "System_Net_CookieVariant.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net
{
	struct Cookie : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_comment;
		System::Uri* m_commentUri;
		System::Net::CookieVariant m_cookieVariant;
		bool m_discard;
		mscorlib::System::String* m_domain;
		bool m_domain_implicit;
		mscorlib::System::DateTime m_expires;
		mscorlib::System::String* m_name;
		mscorlib::System::String* m_path;
		bool m_path_implicit;
		mscorlib::System::String* m_port;
		bool m_port_implicit;
		IL2CPP::Array<int32_t>* m_port_list;
		bool m_secure;
		bool m_httpOnly;
		mscorlib::System::DateTime m_timeStamp;
		mscorlib::System::String* m_value;
		int32_t m_version;
		mscorlib::System::String* m_domainKey;
		bool IsQuotedVersion;
		bool IsQuotedDomain;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* PortSplitDelimiters;
			IL2CPP::Array<wchar_t>* Reserved2Name;
			IL2CPP::Array<wchar_t>* Reserved2Value;
			System::Net::Comparer* staticComparer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::String* get_Comment();
		void set_Comment(mscorlib::System::String* value);
		void set_CommentUri(System::Uri* value);
		void set_HttpOnly(bool value);
		void set_Discard(bool value);
		mscorlib::System::String* get_Domain();
		void set_Domain(mscorlib::System::String* value);
		mscorlib::System::String* get__Domain();
		bool get_Expired();
		void set_Expires(mscorlib::System::DateTime value);
		mscorlib::System::String* get_Name();
		bool InternalSetName(mscorlib::System::String* value);
		mscorlib::System::String* get_Path();
		void set_Path(mscorlib::System::String* value);
		mscorlib::System::String* get__Path();
		bool get_Plain();
		static bool IsDomainEqualToHost(mscorlib::System::String* domain, mscorlib::System::String* host);
		bool VerifySetDefaults(System::Net::CookieVariant variant, System::Uri* uri, bool isLocalDomain, mscorlib::System::String* localDomain, bool set_default, bool isThrow);
		static bool DomainCharsTest(mscorlib::System::String* name);
		void set_Port(mscorlib::System::String* value);
		IL2CPP::Array<int32_t>* get_PortList();
		mscorlib::System::String* get__Port();
		bool get_Secure();
		void set_Secure(bool value);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		System::Net::CookieVariant get_Variant();
		mscorlib::System::String* get_DomainKey();
		int32_t get_Version();
		void set_Version(int32_t value);
		mscorlib::System::String* get__Version();
		static mscorlib::System::Collections::IComparer* GetComparer();
		bool Equals(mscorlib::System::Object* comparand);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

