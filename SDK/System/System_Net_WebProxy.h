#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System { struct Uri; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System::System::Net { struct AutoWebProxyScriptEngine; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace System::System::Net { struct IWebProxy; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace System::System::Net
{
	struct WebProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _UseRegistry;
		bool _BypassOnLocal;
		bool m_EnableAutoproxy;
		System::Uri* _ProxyAddress;
		mscorlib::System::Collections::ArrayList* _BypassList;
		System::Net::ICredentials* _Credentials;
		IL2CPP::Array<System::Text::RegularExpressions::Regex*>* _RegExBypassList;
		mscorlib::System::Collections::Hashtable* _ProxyHostAddresses;
		System::Net::AutoWebProxyScriptEngine* m_ScriptEngine;
		void _ctor();
		void _ctor(System::Uri* Address, bool BypassOnLocal, IL2CPP::Array<mscorlib::System::String*>* BypassList, System::Net::ICredentials* Credentials);
		System::Net::ICredentials* get_Credentials();
		bool get_UseDefaultCredentials();
		void set_UseDefaultCredentials(bool value);
		System::Uri* GetProxy(System::Uri* destination);
		void UpdateRegExList(bool canThrow);
		bool IsMatchInBypassList(System::Uri* input);
		bool IsLocal(System::Uri* host);
		bool IsLocalInProxyHash(System::Uri* host);
		bool IsBypassed(System::Uri* host);
		bool IsBypassedManual(System::Uri* host);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		System::Net::AutoWebProxyScriptEngine* get_ScriptEngine();
		static System::Net::IWebProxy* CreateDefaultProxy();
		void _ctor(bool enableAutoproxy);
		void UnsafeUpdateFromRegistry();
		bool GetProxyAuto(System::Uri* destination, System::Uri& proxyUri);
		bool IsBypassedAuto(System::Uri* destination, bool& isBypassed);
		static bool AreAllBypassed(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* proxies, bool checkFirstOnly);
		static System::Uri* ProxyUri(mscorlib::System::String* proxyName);
	};
}

