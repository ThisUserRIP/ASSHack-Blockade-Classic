#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlResolver.h"
namespace mscorlib::System { struct Object; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Net { struct IWebProxy; };
namespace System::System::Net::Cache { struct RequestCachePolicy; };
namespace System_Xml::System::Xml { struct XmlDownloadManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System_Xml::System::Xml
{
	struct XmlUrlResolver : System_Xml::System::Xml::XmlResolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Net::ICredentials* _credentials;
		System::System::Net::IWebProxy* _proxy;
		System::System::Net::Cache::RequestCachePolicy* _cachePolicy;
		struct StaticFields
		{
			mscorlib::System::Object* s_DownloadManager;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System_Xml::System::Xml::XmlDownloadManager* get_DownloadManager();
		void _ctor();
		mscorlib::System::Object* GetEntity(System::System::Uri* absoluteUri, mscorlib::System::String* role, mscorlib::System::Type* ofObjectToReturn);
		System::System::Uri* ResolveUri(System::System::Uri* baseUri, mscorlib::System::String* relativeUri);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Object>* GetEntityAsync(System::System::Uri* absoluteUri, mscorlib::System::String* role, mscorlib::System::Type* ofObjectToReturn);
	};
}

